/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B5EE9A32_CA5A_49A8_82E3_ADA4CCB77C7C
#define _AUTOGENH_B5EE9A32_CA5A_49A8_82E3_ADA4CCB77C7C

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiXenInfoGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

RETURN_STATUS
EFIAPI
XenHypercallLibConstruct (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
