/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ce660500_824d_11e0_ac72_0002a5d5c51b
#define _AUTOGENH_ce660500_824d_11e0_ac72_0002a5d5c51b

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
#define _PCD_TOKEN_PcdArmHdLcdBase  5U
extern const UINT32 _gPcd_FixedAtBuild_PcdArmHdLcdBase;
#define _PCD_GET_MODE_32_PcdArmHdLcdBase  _gPcd_FixedAtBuild_PcdArmHdLcdBase
//#define _PCD_SET_MODE_32_PcdArmHdLcdBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmHdLcdBase 0x0
#define _PCD_SIZE_PcdArmHdLcdBase 4
#define _PCD_GET_MODE_SIZE_PcdArmHdLcdBase _PCD_SIZE_PcdArmHdLcdBase
#define _PCD_TOKEN_PcdArmHdLcdSwapBlueRedSelect  6U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdArmHdLcdSwapBlueRedSelect;
#define _PCD_GET_MODE_BOOL_PcdArmHdLcdSwapBlueRedSelect  _gPcd_FixedAtBuild_PcdArmHdLcdSwapBlueRedSelect
//#define _PCD_SET_MODE_BOOL_PcdArmHdLcdSwapBlueRedSelect  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdArmHdLcdSwapBlueRedSelect 0
#define _PCD_SIZE_PcdArmHdLcdSwapBlueRedSelect 1
#define _PCD_GET_MODE_SIZE_PcdArmHdLcdSwapBlueRedSelect _PCD_SIZE_PcdArmHdLcdSwapBlueRedSelect


#ifdef __cplusplus
}
#endif

#endif
