/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_339B7829_4C5F_4EFC_B2DD_5050E530DECE
#define _AUTOGENH_339B7829_4C5F_4EFC_B2DD_5050E530DECE

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gArmTokenSpaceGuid;

// Protocols
extern EFI_GUID gFdtClientProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFvBaseAddress  48U
extern const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvBaseAddress 0x00001000
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _PCD_SIZE_PcdFvBaseAddress
#define _PCD_TOKEN_PcdFvSize  49U
extern const UINT32 _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvSize 0x001FF000
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize _PCD_SIZE_PcdFvSize


#ifdef __cplusplus
}
#endif

#endif
