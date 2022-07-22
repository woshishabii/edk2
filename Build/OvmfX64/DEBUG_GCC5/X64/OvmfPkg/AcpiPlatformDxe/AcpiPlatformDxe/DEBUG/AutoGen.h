/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_49970331_E3FA_4637_9ABC_3B7868676970
#define _AUTOGENH_49970331_E3FA_4637_9ABC_3B7868676970

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x49970331, 0xE3FA, 0x4637, {0x9A, 0xBC, 0x3B, 0x78, 0x68, 0x67, 0x69, 0x70}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x5a9e7754, 0xd81b, 0x49ea, {0x85, 0xad, 0x69, 0xea, 0xa7, 0xb1, 0x53, 0x9b}}

// Guids
extern EFI_GUID gRootBridgesConnectedEventGroupGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gUefiCpuPkgTokenSpaceGuid;
extern EFI_GUID gUefiOvmfPkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiXenInfoGuid;

// Protocols
extern EFI_GUID gEfiAcpiTableProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEdkiiIoMmuProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiS3SaveStateProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdAcpiTableStorageFile  48U
#define _PCD_VALUE_PcdAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdAcpiTableStorageFile
extern const UINT8 _gPcd_FixedAtBuild_PcdAcpiTableStorageFile[16];
#define _PCD_GET_MODE_PTR_PcdAcpiTableStorageFile  (VOID *)_gPcd_FixedAtBuild_PcdAcpiTableStorageFile
#define _PCD_SIZE_PcdAcpiTableStorageFile 16
#define _PCD_GET_MODE_SIZE_PcdAcpiTableStorageFile  _PCD_SIZE_PcdAcpiTableStorageFile 
//#define _PCD_SET_MODE_PTR_PcdAcpiTableStorageFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdPciDisableBusEnumeration  5U
#define _PCD_GET_MODE_BOOL_PcdPciDisableBusEnumeration  LibPcdGetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_GET_MODE_SIZE_PcdPciDisableBusEnumeration  LibPcdGetSize(_PCD_TOKEN_PcdPciDisableBusEnumeration)
#define _PCD_SET_MODE_BOOL_PcdPciDisableBusEnumeration(Value)  LibPcdSetBool(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))
#define _PCD_SET_MODE_BOOL_S_PcdPciDisableBusEnumeration(Value)  LibPcdSetBoolS(_PCD_TOKEN_PcdPciDisableBusEnumeration, (Value))

#define _PCD_TOKEN_PcdCpuLocalApicBaseAddress  247U
#define _PCD_SIZE_PcdCpuLocalApicBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdCpuLocalApicBaseAddress  _PCD_SIZE_PcdCpuLocalApicBaseAddress 
#define _PCD_VALUE_PcdCpuLocalApicBaseAddress  0xfee00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress;
#define _PCD_GET_MODE_32_PcdCpuLocalApicBaseAddress  _gPcd_FixedAtBuild_PcdCpuLocalApicBaseAddress
//#define _PCD_SET_MODE_32_PcdCpuLocalApicBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_Pcd8259LegacyModeEdgeLevel  254U
#define _PCD_SIZE_Pcd8259LegacyModeEdgeLevel 2
#define _PCD_GET_MODE_SIZE_Pcd8259LegacyModeEdgeLevel  _PCD_SIZE_Pcd8259LegacyModeEdgeLevel 
#define _PCD_VALUE_Pcd8259LegacyModeEdgeLevel  0x0E20U
extern const  UINT16  _gPcd_FixedAtBuild_Pcd8259LegacyModeEdgeLevel;
#define _PCD_GET_MODE_16_Pcd8259LegacyModeEdgeLevel  _gPcd_FixedAtBuild_Pcd8259LegacyModeEdgeLevel
//#define _PCD_SET_MODE_16_Pcd8259LegacyModeEdgeLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdOvmfFdBaseAddress  264U
#define _PCD_SIZE_PcdOvmfFdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdOvmfFdBaseAddress  _PCD_SIZE_PcdOvmfFdBaseAddress 
#define _PCD_VALUE_PcdOvmfFdBaseAddress  0xFFC00000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress;
#define _PCD_GET_MODE_32_PcdOvmfFdBaseAddress  _gPcd_FixedAtBuild_PcdOvmfFdBaseAddress
//#define _PCD_SET_MODE_32_PcdOvmfFdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
AcpiPlatformEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
