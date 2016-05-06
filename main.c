//----------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <argp.h>

#include <debug.h>

//----------------------------------------------------------------

#define VERSION							"1.0.0"

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

//----------------------------------------------------------------

const char *argp_program_version = "TLV parse " VERSION;
static char ArgDoc[] = "TLV format parse tool";
static char ArgsDoc[] = "";

//----------------------------------------------------------------

static struct argp_option ArgsOptions[] = { //
		{ "input", 'i', "FILE", 0, "Input file name", 100 }, //
			{ "output", 'o', "FILE", 0, "Output file name, stdout if none", 200 }, //
			{ "offset", 's', "INTEGER", 0, "Offset or shift in input file (0)", 300 }, //
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

int main( int argc, char * argv[] ) {
	(void)__COUNTER__;

	// start ------------

	if( argp_parse( &Argp, argc, argv, 0, 0, NULL ) )
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

	if( strcmp( OutFilename, "" ) != 0 ) {
		OutFile = fopen( OutFilename, "wb" );

		if( !OutFile ) {
			ERR( strerror(errno) );

			exit( EXIT_REZ );
		}
	}

	if( fseek( InFile, FileOffset * 2, SEEK_SET ) == -1 ) {
		ERR( strerror(errno) );

		exit( EXIT_REZ );
	}

	// body ------------

	printf("\n");

	do {
		int c;

		c = fgetc( InFile );

		if( c == EOF )
			break;

		fputc(c, OutFile ? OutFile : stdout );
	}
	while(1);

	printf("\n");

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
