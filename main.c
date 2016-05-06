//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <argp.h>

#include <debug.h>

//----------------------------------------------------------------

#define VERSION							"1.0.0"

//----------------------------------------------------------------

typedef unsigned int BOOLX;
#define TRUE			1
#define FALSE			0

//----------------------------------------------------------------

typedef struct {
	char *Tag;
	char *Name;
	char *Desc;
} TagDesc_t;

//#define TAG_DEFINE_346342354254643(tag, name, description, source, format, templ, lenm, lenM, pc, example)		printf("tag: %s {\n\tname: %s\n\tdescription: %s\n\tsource: %s\n\tformat: %s\n\ttempl: %s\n\tlenm: %s\n\tlenM: %s\n\tpc: %s\n\texample: %s\n}\n", tag, name, description, source, format, templ, lenm, lenM, pc, example);
//#include "all-tags2.h"

#define TAG_DEFINE_346342354254643(tag, name, description, source, format, templ, lenm, lenM, pc, example)		\
		{ .Tag = tag, .Name = name, .Desc = description, },

static const TagDesc_t TagDesc[] = {
#include "all-tags2.h"
		};

#define TAG_NUM				(sizeof(TagDesc)/sizeof(TagDesc[0]))

//----------------------------------------------------------------

static char InFilename[1024];
static char OutFilename[1024];

static long int FileOffset;

static BOOLX AutoFilename;

//----------------------------------------------------------------

const char *argp_program_version = "TLV parse " VERSION;
static char ArgDoc[] = "TLV format parse tool";
static char ArgsDoc[] = "";

//----------------------------------------------------------------

static struct argp_option ArgsOptions[] = { //
	{ "input", 'i', "FILE", 0, "Input file name", 100 }, //
	{ "output", 'o', "FILE", 0, "Output file name, stdout if none", 200 }, //
	{ "auto", 'a', 0, 0, "Auto output file name", 300 }, //
	{ "offset", 's', "INTEGER", 0, "Offset or shift in input file (0)", 400 }, //
	{ 0 }, //
};//

//----------------------------------------------------------------

static error_t ArgsParser( int key, char *arg, struct argp_state *state ) {
	switch( key ) {
		case ARGP_KEY_ARG: {
			break;
		}

		case ARGP_KEY_END: {
			return ARGP_ERR_UNKNOWN;
		}

		case 'i': {
			strcpy( InFilename, arg );
			break;
		}

		case 'o': {
			strcpy( OutFilename, arg );
			break;
		}

		case 'a': {
			AutoFilename = TRUE;
			break;
		}

		case 's': {
			long int val = strtol( arg, NULL, 10 );

			FileOffset = val;
			break;
		}

		default: {
			return ARGP_ERR_UNKNOWN;
		}
	}

	return 0;
}

//----------------------------------------------------------------

static struct argp Argp = { ArgsOptions, ArgsParser, ArgsDoc, ArgDoc };

//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------
//----------------------------------------------------------------

#define EXIT_REZ						(__COUNTER__ + 0x100)

//----------------------------------------------------------------

static FILE *InFile;
static FILE *OutFile;

//----------------------------------------------------------------

static int Hex2Int( const char hex ) {
	int rez;

	if( hex >= '0' && hex <= '9' ) {
		rez = hex;
		rez -= '0';

		return rez;
	}
	else if( hex >= 'a' && hex <= 'f' ) {
		rez = hex + 10;
		rez -= 'a';

		return rez;
	}
	else if( hex >= 'A' && hex <= 'F' ) {
		rez = hex + 10;
		rez -= 'A';

		return rez;
	}
	else {
		return 0;
	}
}

//----------------------------------------------------------------

static int GetLen( const char * const str2 ) {
	return Hex2Int( str2[0] ) * 16 + Hex2Int( str2[1] );
}

//----------------------------------------------------------------

int main( const int argc, const char * const argv[] ) {
	(void)__COUNTER__;

	// start ------------

	if( argp_parse( &Argp, argc, (char **)argv, 0, 0, NULL ) )
		exit( EXIT_REZ );

	if( strcmp( InFilename, "" ) == 0 ) {
		ERR( "No input file\n" );

		exit( EXIT_REZ );
	}

	InFile = fopen( InFilename, "rb" );

	if( !InFile ) {
		ERR( strerror(errno) );

		exit( EXIT_REZ );
	}

	if( AutoFilename ) {
		strcpy( OutFilename, "parsed-" );
		strcat( OutFilename, InFilename );
	}

	if( strcmp( OutFilename, "" ) != 0 ) {
		OutFile = fopen( OutFilename, "wb" );

		if( !OutFile ) {
			ERR( strerror(errno) );

			exit( EXIT_REZ );
		}
	}

	// body ------------

	long int curr_offset = FileOffset * 2;

	do {
		BOOLX found;
		BOOLX go_exit = FALSE;

		for( int q = 0; q < TAG_NUM; ++q ) { // перебираем тэги
			found = FALSE;

			char buf[32];

			fseek( InFile, curr_offset, SEEK_SET );

			int len = strlen( TagDesc[q].Tag );

			if( fgets( buf, len + 1, InFile ) == NULL ) { // не смог
				go_exit = TRUE;
				break;
			}

			if( strcmp( buf, TagDesc[q].Tag ) == 0 ) {
				fprintf( OutFile ? OutFile : stdout, "tag: %s - %s", buf, TagDesc[q].Name );
				if( strcmp( TagDesc[q].Desc, "" ) == 0 ) {
					fprintf( OutFile ? OutFile : stdout, "\n" );
				}
				else {
					fprintf( OutFile ? OutFile : stdout, " (%s)\n", TagDesc[q].Desc );
				}

				curr_offset += len;

				if( fgets( buf, 2 + 1, InFile ) == NULL ) { // не смог
					go_exit = TRUE;
					break;
				}

				int bytes = GetLen( buf );

				curr_offset += 2;

				if( bytes ) {
					fprintf( OutFile ? OutFile : stdout, "len: %d\n", bytes );

					if( fgets( buf, ( bytes * 2 ) + 1, InFile ) == NULL ) { // не смог
						go_exit = TRUE;
						break;
					}

					curr_offset += bytes * 2;

					fprintf( OutFile ? OutFile : stdout, "data: %s\n", buf );

					found = TRUE;
					break;
				}
				else {
					fprintf( OutFile ? OutFile : stdout, "no data\n" );

					found = TRUE;
					break;
				}
			}
		}

		if( ! found ) {
			char buf[32];

			fseek( InFile, curr_offset, SEEK_SET );

			if( fgets( buf, 6 + 1, InFile ) != NULL ) { // не смог
				fprintf( OutFile ? OutFile : stdout, "Unknown tag %s, skip one word...\n", buf );
			}

			curr_offset += 2;
		}

		if( go_exit ) {
			break;
		}
	}
	while( !feof( InFile ) );

	// end ------------

	if( InFile ) {
		fclose( InFile );
	}

	if( OutFile ) {
		fclose( OutFile );
	}

	exit( 0 );
}

//----------------------------------------------------------------
