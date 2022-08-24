/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_B1E566DD_DE7C_4F04_BDA0_B1295D3BE927
#define _AUTOGENH_B1E566DD_DE7C_4F04_BDA0_B1295D3BE927

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEfiCryptoPkgTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdHashApiLibPolicy  2U
extern const UINT32 _gPcd_FixedAtBuild_PcdHashApiLibPolicy;
#define _PCD_GET_MODE_32_PcdHashApiLibPolicy  _gPcd_FixedAtBuild_PcdHashApiLibPolicy
//#define _PCD_SET_MODE_32_PcdHashApiLibPolicy  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdHashApiLibPolicy 0x00000002
#define _PCD_SIZE_PcdHashApiLibPolicy 4
#define _PCD_GET_MODE_SIZE_PcdHashApiLibPolicy _PCD_SIZE_PcdHashApiLibPolicy


#ifdef __cplusplus
}
#endif

#endif
