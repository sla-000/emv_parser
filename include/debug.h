//------------------------------------------------------------------------
#pragma once
//------------------------------------------------------------------------
//------------------------------------------------------------------------

#define ERROR_S(str)				fprintf(stderr, "%s:%s:%d: ERROR: %s\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, str)
#define ERROR_D(vali)				fprintf(stderr, "%s:%s:%d: ERROR: %d\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, vali)
#define ERROR_X(valx)				fprintf(stderr, "%s:%s:%d: ERROR: 0x%08X\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, valx)
#define ERROR_F(valf)				fprintf(stderr, "%s:%s:%d: ERROR: %f\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, valf)

#define ERR_S(txt, str)				fprintf(stderr, "%s:%s:%d: ERROR: %s: %s\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, txt, str)
#define ERR_D(txt, vali)			fprintf(stderr, "%s:%s:%d: ERROR: %s: %d\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, txt, vali)
#define ERR_X(txt, valx)			fprintf(stderr, "%s:%s:%d: ERROR: %s: 0x%08X\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, txt, valx)
#define ERR_F(txt, valf)			fprintf(stderr, "%s:%s:%d: ERROR: %s: %f\n", __FILE__, __PRETTY_FUNCTION__, __LINE__, txt, valf)

#define ERR(str)					ERROR_S(str)

#define TRACE(x)					printf x
//#define TRACE(x)

//------------------------------------------------------------------------
//------------------------------------------------------------------------
