/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_E724AAF7_19E2_40A3_BAE1_D82A7C8B7A76
#define _AUTOGENH_E724AAF7_19E2_40A3_BAE1_D82A7C8B7A76

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmPlatformTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdArmMaliDpBase  7U
extern const UINT64 _gPcd_FixedAtBuild_PcdArmMaliDpBase;
#define _PCD_GET_MODE_64_PcdArmMaliDpBase  _gPcd_FixedAtBuild_PcdArmMaliDpBase
//#define _PCD_SET_MODE_64_PcdArmMaliDpBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmMaliDpBase 0x0
#define _PCD_SIZE_PcdArmMaliDpBase 8
#define _PCD_GET_MODE_SIZE_PcdArmMaliDpBase _PCD_SIZE_PcdArmMaliDpBase


#ifdef __cplusplus
}
#endif

#endif
