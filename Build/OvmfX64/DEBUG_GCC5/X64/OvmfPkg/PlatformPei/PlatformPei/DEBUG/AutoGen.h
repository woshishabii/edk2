/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4
#define _AUTOGENH_222c386d_5abc_4fb4_b124_fbb82488acf4

#ifdef __cplusplus
extern "C" {
#endif

#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x222c386d, 0x5abc, 0x4fb4, {0xb1, 0x24, 0xfb, 0xb8, 0x24, 0x88, 0xac, 0xf4}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gEfiXenInfoGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEmbeddedTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiSecurityPkgTokenSpaceGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;

// PPIs
extern EFI_GUID gEfiPeiMasterBootModePpiGuid;
extern EFI_GUID gEfiPeiMpServicesPpiGuid;
extern EFI_GUID gEfiPeiReadOnlyVariable2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdPciExpressBaseAddress  179U
#define _PCD_SIZE_PcdPciExpressBaseAddress 8
#define _PCD_GET_MODE_SIZE_PcdPciExpressBaseAddress  _PCD_SIZE_PcdPciExpressBaseAddress 
#define _PCD_VALUE_PcdPciExpressBaseAddress  0xB0000000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress;
#define _PCD_GET_MODE_64_PcdPciExpressBaseAddress  _gPcd_FixedAtBuild_PcdPciExpressBaseAddress
//#define _PCD_SET_MODE_64_PcdPciExpressBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIMemoryNVS  224U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIMemoryNVS  _PCD_SIZE_PcdMemoryTypeEfiACPIMemoryNVS 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIMemoryNVS  0x80U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIMemoryNVS
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIMemoryNVS  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiACPIReclaimMemory  225U
#define _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiACPIReclaimMemory  _PCD_SIZE_PcdMemoryTypeEfiACPIReclaimMemory 
#define _PCD_VALUE_PcdMemoryTypeEfiACPIReclaimMemory  0x10U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  _gPcd_FixedAtBuild_PcdMemoryTypeEfiACPIReclaimMemory
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiACPIReclaimMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiReservedMemoryType  226U
#define _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiReservedMemoryType  _PCD_SIZE_PcdMemoryTypeEfiReservedMemoryType 
#define _PCD_VALUE_PcdMemoryTypeEfiReservedMemoryType  0x80U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  _gPcd_FixedAtBuild_PcdMemoryTypeEfiReservedMemoryType
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiReservedMemoryType  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesCode  227U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesCode  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesCode 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesCode  0x100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesCode
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesCode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMemoryTypeEfiRuntimeServicesData  228U
#define _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 4
#define _PCD_GET_MODE_SIZE_PcdMemoryTypeEfiRuntimeServicesData  _PCD_SIZE_PcdMemoryTypeEfiRuntimeServicesData 
#define _PCD_VALUE_PcdMemoryTypeEfiRuntimeServicesData  0x100U
extern const  UINT32  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData;
#define _PCD_GET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  _gPcd_FixedAtBuild_PcdMemoryTypeEfiRuntimeServicesData
//#define _PCD_SET_MODE_32_PcdMemoryTypeEfiRuntimeServicesData  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsWorkAreaBase  252U
#define _PCD_SIZE_PcdSevEsWorkAreaBase 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaBase  _PCD_SIZE_PcdSevEsWorkAreaBase 
#define _PCD_VALUE_PcdSevEsWorkAreaBase  0x0080B000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaBase  _gPcd_FixedAtBuild_PcdSevEsWorkAreaBase
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsWorkAreaSize  253U
#define _PCD_SIZE_PcdSevEsWorkAreaSize 4
#define _PCD_GET_MODE_SIZE_PcdSevEsWorkAreaSize  _PCD_SIZE_PcdSevEsWorkAreaSize 
#define _PCD_VALUE_PcdSevEsWorkAreaSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdSevEsWorkAreaSize;
#define _PCD_GET_MODE_32_PcdSevEsWorkAreaSize  _gPcd_FixedAtBuild_PcdSevEsWorkAreaSize
//#define _PCD_SET_MODE_32_PcdSevEsWorkAreaSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCsmEnable  256U
#define _PCD_SIZE_PcdCsmEnable 1
#define _PCD_GET_MODE_SIZE_PcdCsmEnable  _PCD_SIZE_PcdCsmEnable 
#define _PCD_VALUE_PcdCsmEnable  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdCsmEnable;
#define _PCD_GET_MODE_BOOL_PcdCsmEnable  _gPcd_FixedAtBuild_PcdCsmEnable
//#define _PCD_SET_MODE_BOOL_PcdCsmEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSmmSmramRequire  288U
#define _PCD_SIZE_PcdSmmSmramRequire 1
#define _PCD_GET_MODE_SIZE_PcdSmmSmramRequire  _PCD_SIZE_PcdSmmSmramRequire 
#define _PCD_VALUE_PcdSmmSmramRequire  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSmmSmramRequire;
#define _PCD_GET_MODE_BOOL_PcdSmmSmramRequire  _gPcd_FixedAtBuild_PcdSmmSmramRequire
//#define _PCD_SET_MODE_BOOL_PcdSmmSmramRequire  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvBase  273U
#define _PCD_SIZE_PcdOvmfPeiMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvBase  _PCD_SIZE_PcdOvmfPeiMemFvBase 
#define _PCD_VALUE_PcdOvmfPeiMemFvBase  0x00820000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvBase  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfPeiMemFvSize  274U
#define _PCD_SIZE_PcdOvmfPeiMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfPeiMemFvSize  _PCD_SIZE_PcdOvmfPeiMemFvSize 
#define _PCD_VALUE_PcdOvmfPeiMemFvSize  0x000E0000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfPeiMemFvSize  _gPcd_FixedAtBuild_PcdOvmfPeiMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfPeiMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvBase  262U
#define _PCD_SIZE_PcdOvmfDxeMemFvBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvBase  _PCD_SIZE_PcdOvmfDxeMemFvBase 
#define _PCD_VALUE_PcdOvmfDxeMemFvBase  0x00900000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvBase  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvBase
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfDxeMemFvSize  263U
#define _PCD_SIZE_PcdOvmfDxeMemFvSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDxeMemFvSize  _PCD_SIZE_PcdOvmfDxeMemFvSize 
#define _PCD_VALUE_PcdOvmfDxeMemFvSize  0x00C00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize;
#define _PCD_GET_MODE_32_PcdOvmfDxeMemFvSize  _gPcd_FixedAtBuild_PcdOvmfDxeMemFvSize
//#define _PCD_SET_MODE_32_PcdOvmfDxeMemFvSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamBase  281U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamBase  _PCD_SIZE_PcdOvmfSecPeiTempRamBase 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamBase  0x00810000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamBase  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPeiTempRamSize  282U
#define _PCD_SIZE_PcdOvmfSecPeiTempRamSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPeiTempRamSize  _PCD_SIZE_PcdOvmfSecPeiTempRamSize 
#define _PCD_VALUE_PcdOvmfSecPeiTempRamSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPeiTempRamSize  _gPcd_FixedAtBuild_PcdOvmfSecPeiTempRamSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPeiTempRamSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesBase  279U
#define _PCD_SIZE_PcdOvmfSecPageTablesBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesBase  _PCD_SIZE_PcdOvmfSecPageTablesBase 
#define _PCD_VALUE_PcdOvmfSecPageTablesBase  0x00800000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesBase  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesBase
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecPageTablesSize  280U
#define _PCD_SIZE_PcdOvmfSecPageTablesSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecPageTablesSize  _PCD_SIZE_PcdOvmfSecPageTablesSize 
#define _PCD_VALUE_PcdOvmfSecPageTablesSize  0x00006000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize;
#define _PCD_GET_MODE_32_PcdOvmfSecPageTablesSize  _gPcd_FixedAtBuild_PcdOvmfSecPageTablesSize
//#define _PCD_SET_MODE_32_PcdOvmfSecPageTablesSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableBase  276U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableBase  _PCD_SIZE_PcdOvmfSecGhcbPageTableBase 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableBase  0x00808000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbPageTableSize  277U
#define _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbPageTableSize  _PCD_SIZE_PcdOvmfSecGhcbPageTableSize 
#define _PCD_VALUE_PcdOvmfSecGhcbPageTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbPageTableSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbPageTableSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbPageTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbBase  275U
#define _PCD_SIZE_PcdOvmfSecGhcbBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbBase  _PCD_SIZE_PcdOvmfSecGhcbBase 
#define _PCD_VALUE_PcdOvmfSecGhcbBase  0x00809000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbBase  _gPcd_FixedAtBuild_PcdOvmfSecGhcbBase
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfSecGhcbSize  278U
#define _PCD_SIZE_PcdOvmfSecGhcbSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfSecGhcbSize  _PCD_SIZE_PcdOvmfSecGhcbSize 
#define _PCD_VALUE_PcdOvmfSecGhcbSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize;
#define _PCD_GET_MODE_32_PcdOvmfSecGhcbSize  _gPcd_FixedAtBuild_PcdOvmfSecGhcbSize
//#define _PCD_SET_MODE_32_PcdOvmfSecGhcbSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageBase  271U
#define _PCD_SIZE_PcdOvmfLockBoxStorageBase 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageBase  _PCD_SIZE_PcdOvmfLockBoxStorageBase 
#define _PCD_VALUE_PcdOvmfLockBoxStorageBase  0x00806000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageBase  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageBase
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfLockBoxStorageSize  272U
#define _PCD_SIZE_PcdOvmfLockBoxStorageSize 4
#define _PCD_GET_MODE_SIZE_PcdOvmfLockBoxStorageSize  _PCD_SIZE_PcdOvmfLockBoxStorageSize 
#define _PCD_VALUE_PcdOvmfLockBoxStorageSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize;
#define _PCD_GET_MODE_32_PcdOvmfLockBoxStorageSize  _gPcd_FixedAtBuild_PcdOvmfLockBoxStorageSize
//#define _PCD_SET_MODE_32_PcdOvmfLockBoxStorageSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableSize  258U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableSize 4
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableSize  _PCD_SIZE_PcdGuidedExtractHandlerTableSize 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableSize  0x00001000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize;
#define _PCD_GET_MODE_32_PcdGuidedExtractHandlerTableSize  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableSize
//#define _PCD_SET_MODE_32_PcdGuidedExtractHandlerTableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfHostBridgePciDevId  12U
#define _PCD_GET_MODE_16_PcdOvmfHostBridgePciDevId  LibPcdGet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_GET_MODE_SIZE_PcdOvmfHostBridgePciDevId  LibPcdGetSize(_PCD_TOKEN_PcdOvmfHostBridgePciDevId)
#define _PCD_SET_MODE_16_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))
#define _PCD_SET_MODE_16_S_PcdOvmfHostBridgePciDevId(Value)  LibPcdSet16S(_PCD_TOKEN_PcdOvmfHostBridgePciDevId, (Value))

#define _PCD_TOKEN_PcdPciIoBase  13U
#define _PCD_GET_MODE_64_PcdPciIoBase  LibPcdGet64(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_GET_MODE_SIZE_PcdPciIoBase  LibPcdGetSize(_PCD_TOKEN_PcdPciIoBase)
#define _PCD_SET_MODE_64_PcdPciIoBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoBase, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoBase, (Value))

#define _PCD_TOKEN_PcdPciIoSize  14U
#define _PCD_GET_MODE_64_PcdPciIoSize  LibPcdGet64(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_GET_MODE_SIZE_PcdPciIoSize  LibPcdGetSize(_PCD_TOKEN_PcdPciIoSize)
#define _PCD_SET_MODE_64_PcdPciIoSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciIoSize, (Value))
#define _PCD_SET_MODE_64_S_PcdPciIoSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciIoSize, (Value))

#define _PCD_TOKEN_PcdPciMmio32Base  15U
#define _PCD_GET_MODE_64_PcdPciMmio32Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Base)
#define _PCD_SET_MODE_64_PcdPciMmio32Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Base, (Value))

#define _PCD_TOKEN_PcdPciMmio32Size  16U
#define _PCD_GET_MODE_64_PcdPciMmio32Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio32Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio32Size)
#define _PCD_SET_MODE_64_PcdPciMmio32Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio32Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio32Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio32Size, (Value))

#define _PCD_TOKEN_PcdPciMmio64Base  17U
#define _PCD_GET_MODE_64_PcdPciMmio64Base  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Base  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Base)
#define _PCD_SET_MODE_64_PcdPciMmio64Base(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Base, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Base(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Base, (Value))

#define _PCD_TOKEN_PcdPciMmio64Size  18U
#define _PCD_GET_MODE_64_PcdPciMmio64Size  LibPcdGet64(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_GET_MODE_SIZE_PcdPciMmio64Size  LibPcdGetSize(_PCD_TOKEN_PcdPciMmio64Size)
#define _PCD_SET_MODE_64_PcdPciMmio64Size(Value)  LibPcdSet64(_PCD_TOKEN_PcdPciMmio64Size, (Value))
#define _PCD_SET_MODE_64_S_PcdPciMmio64Size(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPciMmio64Size, (Value))

#define _PCD_TOKEN_PcdOvmfDecompressionScratchEnd  261U
#define _PCD_SIZE_PcdOvmfDecompressionScratchEnd 4
#define _PCD_GET_MODE_SIZE_PcdOvmfDecompressionScratchEnd  _PCD_SIZE_PcdOvmfDecompressionScratchEnd 
#define _PCD_VALUE_PcdOvmfDecompressionScratchEnd  24182784U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd;
#define _PCD_GET_MODE_32_PcdOvmfDecompressionScratchEnd  _gPcd_FixedAtBuild_PcdOvmfDecompressionScratchEnd
//#define _PCD_SET_MODE_32_PcdOvmfDecompressionScratchEnd  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdQ35TsegMbytes  20U
#define _PCD_GET_MODE_16_PcdQ35TsegMbytes  LibPcdGet16(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_GET_MODE_SIZE_PcdQ35TsegMbytes  LibPcdGetSize(_PCD_TOKEN_PcdQ35TsegMbytes)
#define _PCD_SET_MODE_16_PcdQ35TsegMbytes(Value)  LibPcdSet16(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))
#define _PCD_SET_MODE_16_S_PcdQ35TsegMbytes(Value)  LibPcdSet16S(_PCD_TOKEN_PcdQ35TsegMbytes, (Value))

#define _PCD_TOKEN_PcdQ35SmramAtDefaultSmbase  19U
#define _PCD_GET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase  LibPcdGetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_GET_MODE_SIZE_PcdQ35SmramAtDefaultSmbase  LibPcdGetSize(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase)
#define _PCD_SET_MODE_BOOL_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBool(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdQ35SmramAtDefaultSmbase(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdQ35SmramAtDefaultSmbase, (Value))

#define _PCD_TOKEN_PcdGuidedExtractHandlerTableAddress  172U
#define _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 8
#define _PCD_GET_MODE_SIZE_PcdGuidedExtractHandlerTableAddress  _PCD_SIZE_PcdGuidedExtractHandlerTableAddress 
#define _PCD_VALUE_PcdGuidedExtractHandlerTableAddress  0x00807000ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress;
#define _PCD_GET_MODE_64_PcdGuidedExtractHandlerTableAddress  _gPcd_FixedAtBuild_PcdGuidedExtractHandlerTableAddress
//#define _PCD_SET_MODE_64_PcdGuidedExtractHandlerTableAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  85U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x42000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  89U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x40000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdEmuVariableNvStoreReserved  2U
#define _PCD_GET_MODE_64_PcdEmuVariableNvStoreReserved  LibPcdGet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_GET_MODE_SIZE_PcdEmuVariableNvStoreReserved  LibPcdGetSize(_PCD_TOKEN_PcdEmuVariableNvStoreReserved)
#define _PCD_SET_MODE_64_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))
#define _PCD_SET_MODE_64_S_PcdEmuVariableNvStoreReserved(Value)  LibPcdSet64S(_PCD_TOKEN_PcdEmuVariableNvStoreReserved, (Value))

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  5U
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  LibPcdGetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  LibPcdGetSize(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPciDisableBusEnumeration(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))

#define _PCD_TOKEN_PcdDxeIplSwitchToLongMode  76U
#define _PCD_SIZE_PcdDxeIplSwitchToLongMode 1
#define _PCD_GET_MODE_SIZE_PcdDxeIplSwitchToLongMode  _PCD_SIZE_PcdDxeIplSwitchToLongMode 
#define _PCD_VALUE_PcdDxeIplSwitchToLongMode  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode;
#define _PCD_GET_MODE_BOOL_PcdDxeIplSwitchToLongMode  _gPcd_FixedAtBuild_PcdDxeIplSwitchToLongMode
//#define _PCD_SET_MODE_BOOL_PcdDxeIplSwitchToLongMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUse1GPageTable  156U
#define _PCD_SIZE_PcdUse1GPageTable 1
#define _PCD_GET_MODE_SIZE_PcdUse1GPageTable  _PCD_SIZE_PcdUse1GPageTable 
#define _PCD_VALUE_PcdUse1GPageTable  0U
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUse1GPageTable;
#define _PCD_GET_MODE_BOOL_PcdUse1GPageTable  _gPcd_FixedAtBuild_PcdUse1GPageTable
//#define _PCD_SET_MODE_BOOL_PcdUse1GPageTable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSetNxForStack  7U
#define _PCD_GET_MODE_BOOL_PcdSetNxForStack  LibPcdGetBool(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_GET_MODE_SIZE_PcdSetNxForStack  LibPcdGetSize(_PCD_TOKEN_PcdSetNxForStack)
#define _PCD_SET_MODE_BOOL_PcdSetNxForStack(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSetNxForStack, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSetNxForStack(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSetNxForStack, (Value))

#define _PCD_TOKEN_PcdAcpiS3Enable  1U
#define _PCD_GET_MODE_BOOL_PcdAcpiS3Enable  LibPcdGetBool(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_GET_MODE_SIZE_PcdAcpiS3Enable  LibPcdGetSize(_PCD_TOKEN_PcdAcpiS3Enable)
#define _PCD_SET_MODE_BOOL_PcdAcpiS3Enable(Value)  LibPcdSetBool(_PCD_TOKEN_PcdAcpiS3Enable, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdAcpiS3Enable(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdAcpiS3Enable, (Value))

#define _PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask  6U
#define _PCD_GET_MODE_64_PcdPteMemoryEncryptionAddressOrMask  LibPcdGet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_GET_MODE_SIZE_PcdPteMemoryEncryptionAddressOrMask  LibPcdGetSize(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask)
#define _PCD_SET_MODE_64_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))
#define _PCD_SET_MODE_64_S_PcdPteMemoryEncryptionAddressOrMask(Value)  LibPcdSet64S(_PCD_TOKEN_PcdPteMemoryEncryptionAddressOrMask, (Value))

#define _PCD_TOKEN_PcdGhcbBase  3U
#define _PCD_GET_MODE_64_PcdGhcbBase  LibPcdGet64(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_GET_MODE_SIZE_PcdGhcbBase  LibPcdGetSize(_PCD_TOKEN_PcdGhcbBase)
#define _PCD_SET_MODE_64_PcdGhcbBase(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbBase, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbBase(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbBase, (Value))

#define _PCD_TOKEN_PcdGhcbSize  4U
#define _PCD_GET_MODE_64_PcdGhcbSize  LibPcdGet64(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_GET_MODE_SIZE_PcdGhcbSize  LibPcdGetSize(_PCD_TOKEN_PcdGhcbSize)
#define _PCD_SET_MODE_64_PcdGhcbSize(Value)  LibPcdSet64(_PCD_TOKEN_PcdGhcbSize, (Value))
#define _PCD_SET_MODE_64_S_PcdGhcbSize(Value)  LibPcdSet64S(_PCD_TOKEN_PcdGhcbSize, (Value))

#define _PCD_TOKEN_PcdOptionRomImageVerificationPolicy  8U
#define _PCD_GET_MODE_32_PcdOptionRomImageVerificationPolicy  LibPcdGet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_GET_MODE_SIZE_PcdOptionRomImageVerificationPolicy  LibPcdGetSize(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy)
#define _PCD_SET_MODE_32_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))
#define _PCD_SET_MODE_32_S_PcdOptionRomImageVerificationPolicy(Value)  LibPcdSet32S(_PCD_TOKEN_PcdOptionRomImageVerificationPolicy, (Value))

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  247U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber  10U
#define _PCD_GET_MODE_32_PcdCpuMaxLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuMaxLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuMaxLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuMaxLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuBootLogicalProcessorNumber  9U
#define _PCD_GET_MODE_32_PcdCpuBootLogicalProcessorNumber  LibPcdGet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_GET_MODE_SIZE_PcdCpuBootLogicalProcessorNumber  LibPcdGetSize(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber)
#define _PCD_SET_MODE_32_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))
#define _PCD_SET_MODE_32_S_PcdCpuBootLogicalProcessorNumber(Value)  LibPcdSet32S(_PCD_TOKEN_PcdCpuBootLogicalProcessorNumber, (Value))

#define _PCD_TOKEN_PcdCpuApStackSize  242U
#define _PCD_SIZE_PcdCpuApStackSize 4
#define _PCD_GET_MODE_SIZE_PcdCpuApStackSize  _PCD_SIZE_PcdCpuApStackSize 
#define _PCD_VALUE_PcdCpuApStackSize  0x8000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuApStackSize;
#define _PCD_GET_MODE_32_PcdCpuApStackSize  _gPcd_FixedAtBuild_PcdCpuApStackSize
//#define _PCD_SET_MODE_32_PcdCpuApStackSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdSevEsIsEnabled  11U
#define _PCD_GET_MODE_BOOL_PcdSevEsIsEnabled  LibPcdGetBool(_PCD_TOKEN_PcdSevEsIsEnabled)
#define _PCD_GET_MODE_SIZE_PcdSevEsIsEnabled  LibPcdGetSize(_PCD_TOKEN_PcdSevEsIsEnabled)
#define _PCD_SET_MODE_BOOL_PcdSevEsIsEnabled(Value)  LibPcdSetBool(_PCD_TOKEN_PcdSevEsIsEnabled, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdSevEsIsEnabled(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdSevEsIsEnabled, (Value))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializePlatform (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
