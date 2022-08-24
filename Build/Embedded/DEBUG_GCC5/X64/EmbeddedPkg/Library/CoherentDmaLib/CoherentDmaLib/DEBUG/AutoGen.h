/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0F2A0816_D319_4ee7_A6B8_D58524E4428F
#define _AUTOGENH_0F2A0816_D319_4ee7_A6B8_D58524E4428F

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gEmbeddedTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdDmaDeviceOffset  22U
extern const UINT64 _gPcd_FixedAtBuild_PcdDmaDeviceOffset;
#define _PCD_GET_MODE_64_PcdDmaDeviceOffset  _gPcd_FixedAtBuild_PcdDmaDeviceOffset
//#define _PCD_SET_MODE_64_PcdDmaDeviceOffset  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDmaDeviceOffset 0x0
#define _PCD_SIZE_PcdDmaDeviceOffset 8
#define _PCD_GET_MODE_SIZE_PcdDmaDeviceOffset _PCD_SIZE_PcdDmaDeviceOffset


#ifdef __cplusplus
}
#endif

#endif
