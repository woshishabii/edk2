/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_021b6156_3cc8_4e99_85ee_13d8a871edf2
#define _AUTOGENH_021b6156_3cc8_4e99_85ee_13d8a871edf2

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gArmTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;

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
#define _PCD_TOKEN_PcdSystemMemoryUefiRegionSize  39U
extern const UINT32 _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize;
#define _PCD_GET_MODE_32_PcdSystemMemoryUefiRegionSize  _gPcd_FixedAtBuild_PcdSystemMemoryUefiRegionSize
//#define _PCD_SET_MODE_32_PcdSystemMemoryUefiRegionSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdSystemMemoryUefiRegionSize 0x04000000
#define _PCD_SIZE_PcdSystemMemoryUefiRegionSize 4
#define _PCD_GET_MODE_SIZE_PcdSystemMemoryUefiRegionSize _PCD_SIZE_PcdSystemMemoryUefiRegionSize
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  229U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory
#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  228U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS 0
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS
#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  234U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType 0
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  236U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData 300
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  235U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode 150
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesCode  230U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesCode 1000
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesCode _PCD_SIZE_PcdMemoryTypeEfiBootServicesCode
#define _PCD_TOKEN_PcdMemoryTypeEfiBootServicesData  231U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiBootServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiBootServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiBootServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiBootServicesData 12000
#define _PCD_SIZE_PcdMemoryTypeEfiBootServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiBootServicesData _PCD_SIZE_PcdMemoryTypeEfiBootServicesData
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderCode  232U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderCode 20
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderCode _PCD_SIZE_PcdMemoryTypeEfiLoaderCode
#define _PCD_TOKEN_PcdMemoryTypeEfiLoaderData  233U
extern const UINT32 _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiLoaderData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiLoaderData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiLoaderData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdMemoryTypeEfiLoaderData 0
#define _PCD_SIZE_PcdMemoryTypeEfiLoaderData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiLoaderData _PCD_SIZE_PcdMemoryTypeEfiLoaderData
#define _PCD_TOKEN_PcdPrePiProduceMemoryTypeInformationHob  239U
extern const BOOLEAN _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob;
#define _PCD_GET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  _gPcd_FixedAtBuild_PcdPrePiProduceMemoryTypeInformationHob
//#define _PCD_SET_MODE_BOOL_PcdPrePiProduceMemoryTypeInformationHob  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
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
#define _PCD_TOKEN_PcdFdBaseAddress  46U
extern const UINT64 _gPcd_FixedAtBuild_PcdFdBaseAddress;
#define _PCD_GET_MODE_64_PcdFdBaseAddress  _gPcd_FixedAtBuild_PcdFdBaseAddress
//#define _PCD_SET_MODE_64_PcdFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD
#define _PCD_VALUE_PcdFdBaseAddress 0x00000000
#define _PCD_SIZE_PcdFdBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdFdBaseAddress _PCD_SIZE_PcdFdBaseAddress


#ifdef __cplusplus
}
#endif

#endif
