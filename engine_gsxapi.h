#ifndef ENGINE_GSXAPI_H
#define ENGINE_GSXAPI_H

#ifdef __cplusplus
extern "C" {
#endif

typedef struct gsx_api_s
{
	// APIs
	const char* (*GSX_GetCurrentTrack)(void);
} gsx_api_t;

extern gsx_api_t gsxapi;

#ifdef __cplusplus
}
#endif

#endif //ENGINE_GSXAPI_H