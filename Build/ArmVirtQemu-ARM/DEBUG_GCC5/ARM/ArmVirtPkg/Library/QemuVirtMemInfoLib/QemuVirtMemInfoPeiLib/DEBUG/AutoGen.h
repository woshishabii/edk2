/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_0c4d10cf_d949_49b4_bd13_47a4ae22efce
#define _AUTOGENH_0c4d10cf_d949_49b4_bd13_47a4ae22efce

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern GUID gArmTokenSpaceGuid;
extern GUID gArmVirtTokenSpaceGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// PCD definitions
#define _PCD_TOKEN_PcdFdSize  47U
extern const UINT32 _gPcd_FixedAtBuild_PcdFdSize;
#define _PCD_GET_MODE_32_PcdFdSize  _gPcd_FixedAtBuild_PcdFdSize
//#define _PCD_SET_MODE_32_PcdFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdSize 0x200000
#define _PCD_SIZE_PcdFdSize 4
#define _PCD_GET_MODE_SIZE_PcdFdSize _PCD_SIZE_PcdFdSize
#define _PCD_TOKEN_PcdFvSize  49U
extern const UINT32 _gPcd_FixedAtBuild_PcdFvSize;
#define _PCD_GET_MODE_32_PcdFvSize  _gPcd_FixedAtBuild_PcdFvSize
//#define _PCD_SET_MODE_32_PcdFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvSize 0x001FF000
#define _PCD_SIZE_PcdFvSize 4
#define _PCD_GET_MODE_SIZE_PcdFvSize _PCD_SIZE_PcdFvSize
#define _PCD_TOKEN_PcdDeviceTreeInitialBaseAddress  57U
extern const UINT64 _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress;
#define _PCD_GET_MODE_64_PcdDeviceTreeInitialBaseAddress  _gPcd_FixedAtBuild_PcdDeviceTreeInitialBaseAddress
//#define _PCD_SET_MODE_64_PcdDeviceTreeInitialBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdDeviceTreeInitialBaseAddress 0x40000000
#define _PCD_SIZE_PcdDeviceTreeInitialBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdDeviceTreeInitialBaseAddress _PCD_SIZE_PcdDeviceTreeInitialBaseAddress
#define _PCD_TOKEN_PcdFdBaseAddress  46U
extern const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdBaseAddress 0x00000000
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _PCD_SIZE_PcdFdBaseAddress
#define _PCD_TOKEN_PcdFvBaseAddress  48U
extern const UINT64 _gPcd_FixedAtBuild_PcdFvBaseAddress;
#define _PCD_GET_MODE_64_PcdFvBaseAddress  _gPcd_FixedAtBuild_PcdFvBaseAddress
//#define _PCD_SET_MODE_64_PcdFvBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFvBaseAddress 0x00001000
#define _PCD_SIZE_PcdFvBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFvBaseAddress _PCD_SIZE_PcdFvBaseAddress
#define _PCD_TOKEN_PcdSystemMemoryBase  54U
extern const UINT64 _gPcd_FixedAtBuild_PcdSystemMemoryBase;
#define _PCD_GET_MODE_64_PcdSystemMemoryBase  _gPcd_FixedAtBuild_PcdSystemMemoryBase
//#define _PCD_SET_MODE_64_PcdSystemMemoryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryBase 0x40000000
#define _PCD_SIZE_PcdSystemMemoryBase 8
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryBase _PCD_SIZE_PcdSystemMemoryBase
#define _PCD_TOKEN_PcdSystemMemorySize  1U
#define _PCD_GET_MODE_64_PcdSystemMemorySize  LibPcdGet64(_PCD_TOKEN_PcdSystemMemorySize)
#define _PCD_GET_MODE_SIZE_PcdSystemMemorySize  LibPcdGetSize(_PCD_TOKEN_PcdSystemMemorySize)
#define _PCD_SET_MODE_64_PcdSystemMemorySize(Value)  LibPcdSet64(_PCD_TOKEN_PcdSystemMemorySize, (Value))
#define _PCD_SET_MODE_64_S_PcdSystemMemorySize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdSystemMemorySize, (Value))

RETURN_STATUS
EFIAPI
QemuVirtMemInfoPeiLibConstructor (
  VOID
  );


#ifdef __cplusplus
}
#endif

#endif
