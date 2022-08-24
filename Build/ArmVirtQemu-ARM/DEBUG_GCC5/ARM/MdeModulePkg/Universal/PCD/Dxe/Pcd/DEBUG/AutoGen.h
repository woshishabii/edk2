/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541
#define _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541

#ifdef __cplusplus
extern "C" {
#endif

#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern GUID  gEdkiiDscPlatformGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}}
#define EDKII_DSC_PLATFORM_GUID \
  {0x37d7e986, 0xf7e9, 0x45c2, {0x80, 0x67, 0xe3, 0x71, 0x42, 0x1a, 0x62, 0x6c}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gArmPlatformTokenSpaceGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEarlyPL011BaseAddressGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiAcpi20TableGuid;
extern EFI_GUID gEfiAcpi10TableGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;

// Definition of SkuId Array
extern UINT64 _gPcd_SkuId_Array[];

// Definition of PCD Token Space GUIDs used in this module

extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVpdBaseAddress  168U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64  196614U
#define _PCD_TOKEN_PcdVpdBaseAddress64  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64
#define _PCD_GET_MODE_64_PcdVpdBaseAddress64  LibPcdGetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress64 LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64)
#define _PCD_SET_MODE_64_PcdVpdBaseAddress64(Value)  LibPcdSetEx64(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))
#define _PCD_SET_MODE_64_S_PcdVpdBaseAddress64(Value)  LibPcdSetEx64S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdVpdBaseAddress64, (Value))

#define _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId  196612U
#define _PCD_TOKEN_PcdSetNvStoreDefaultId  _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId
#define _PCD_GET_MODE_16_PcdSetNvStoreDefaultId  LibPcdGetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_GET_MODE_SIZE_PcdSetNvStoreDefaultId LibPcdGetExSize(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId)
#define _PCD_SET_MODE_16_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))
#define _PCD_SET_MODE_16_S_PcdSetNvStoreDefaultId(Value)  LibPcdSetEx16S(&gEfiMdeModulePkgTokenSpaceGuid, _PCD_TOKEN_PcdSetNvStoreDefaultId, (Value))

#define COMPAREGUID(Guid1, Guid2) (BOOLEAN)(*(CONST UINT64*)Guid1 == *(CONST UINT64*)Guid2 && *((CONST UINT64*)Guid1 + 1) == *((CONST UINT64*)Guid2 + 1))

#define __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )

#define __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr)  (\
  (GuidPtr == &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )

#define __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdVpdBaseAddress64:0 \
  )
#define _PCD_TOKEN_EX_PcdVpdBaseAddress64(GuidPtr)   __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) ? __PCD_PcdVpdBaseAddress64_ADDR_CMP(GuidPtr) : __PCD_PcdVpdBaseAddress64_VAL_CMP(GuidPtr)  

#define __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  (\
  (GuidPtr == NULL) ? 0:\
  COMPAREGUID (GuidPtr, &gEfiMdeModulePkgTokenSpaceGuid) ? _PCD_TOKEN_gEfiMdeModulePkgTokenSpaceGuid_PcdSetNvStoreDefaultId:0 \
  )
#define _PCD_TOKEN_EX_PcdSetNvStoreDefaultId(GuidPtr)   __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) ? __PCD_PcdSetNvStoreDefaultId_ADDR_CMP(GuidPtr) : __PCD_PcdSetNvStoreDefaultId_VAL_CMP(GuidPtr)  

// Definition of PCDs used in libraries is in AutoGen.c

#define PCD_PEI_SERVICE_DRIVER_VERSION         7

//
// External PCD database debug information
//
#if 0
#define PEI_GUID_TABLE_SIZE                1U
#define PEI_STRING_TABLE_SIZE              2U
#define PEI_SKUID_TABLE_SIZE               1U
#define PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE  5
#define PEI_LOCAL_TOKEN_NUMBER             5
#define PEI_EXMAPPING_TABLE_SIZE           3U
#define PEI_EX_TOKEN_NUMBER                3U
#define PEI_SIZE_TABLE_SIZE                2U
#define PEI_GUID_TABLE_EMPTY               FALSE
#define PEI_STRING_TABLE_EMPTY             FALSE
#define PEI_SKUID_TABLE_EMPTY              TRUE
#define PEI_DATABASE_EMPTY                 FALSE
#define PEI_EXMAP_TABLE_EMPTY              FALSE

typedef struct {
  UINT64             SkuIdTable[PEI_SKUID_TABLE_SIZE];
  UINT64             PcdSystemMemorySize_bb11ecfe_820f_4968_bba6_f76afe302596[1];





  DYNAMICEX_MAPPING  ExMapTable[PEI_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[PEI_GUID_TABLE_SIZE];
  STRING_HEAD        PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT8              StringTable[2]; /* PcdNvStoreDefaultValueBuffer_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  SIZE_INFO          SizeTable[PEI_SIZE_TABLE_SIZE];






  SKU_ID             SystemSkuId;
} PEI_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdTpmBaseAddress_0d3fb176_9569_4d51_a3ef_7d61c64feaba[1];
  UINT64   PcdVpdBaseAddress64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];


  UINT16   PcdSetNvStoreDefaultId_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];



} PEI_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;       // Current SkuId value.
  //UINT32                LengthForAllSkus;  // Length of all SKU PCD DB
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset;
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[6];
  PEI_PCD_DATABASE_INIT    Init;
  PEI_PCD_DATABASE_UNINIT  Uninit;
} PEI_PCD_DATABASE;

#define PEI_NEX_TOKEN_NUMBER (PEI_LOCAL_TOKEN_NUMBER - PEI_EX_TOKEN_NUMBER)
#endif

#define PCD_DXE_SERVICE_DRIVER_VERSION         7

//
// External PCD database debug information
//
#if 0
#define DXE_GUID_TABLE_SIZE                1U
#define DXE_STRING_TABLE_SIZE              24U
#define DXE_SKUID_TABLE_SIZE               1U
#define DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE  23
#define DXE_LOCAL_TOKEN_NUMBER             23
#define DXE_EXMAPPING_TABLE_SIZE           1U
#define DXE_EX_TOKEN_NUMBER                0U
#define DXE_SIZE_TABLE_SIZE                2U
#define DXE_GUID_TABLE_EMPTY               FALSE
#define DXE_STRING_TABLE_EMPTY             FALSE
#define DXE_SKUID_TABLE_EMPTY              TRUE
#define DXE_DATABASE_EMPTY                 FALSE
#define DXE_EXMAP_TABLE_EMPTY              TRUE

typedef struct {
  UINT64             SkuIdTable[DXE_SKUID_TABLE_SIZE];
  UINT64             PcdPciExpressBaseAddress_914aebe7_4635_459b_aa1c_11e219b03a10[1];


  UINT32             PcdSetupVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32             PcdSetupVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32             PcdVideoHorizontalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32             PcdVideoVerticalResolution_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];



  DYNAMICEX_MAPPING  ExMapTable[DXE_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[DXE_GUID_TABLE_SIZE];

  VARIABLE_HEAD      PcdForceNoAcpi_0b6f5ca7_4f53_445a_b76e_2e365b806366_Variable_Header[1];
  UINT8              StringTable[24]; /* PcdForceNoAcpi_0b6f5ca7_4f53_445a_b76e_2e365b806366 */

  SIZE_INFO          SizeTable[DXE_SIZE_TABLE_SIZE];
  UINT16             PcdSmbiosVersion_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT16             PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10[1];


  UINT8              PcdIPv4PXESupport_40e064b2_0ae0_48b1_a07d_f8cf1e1a2310[1];
  UINT8              PcdIPv6PXESupport_40e064b2_0ae0_48b1_a07d_f8cf1e1a2310[1];


  BOOLEAN            PcdPciDisableBusEnumeration_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  BOOLEAN            PcdForceNoAcpi_0b6f5ca7_4f53_445a_b76e_2e365b806366_VariableDefault_2;

  SKU_ID             SystemSkuId;
} DXE_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdGicDistributorBase_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT64   PcdGicInterruptInterfaceBase_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT64   PcdGicRedistributorsBase_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT64   PcdPciIoTranslation_bb11ecfe_820f_4968_bba6_f76afe302596[1];

  UINT32   PcdPL031RtcBase_9c0aaed4_74c5_4043_b417_a3223814ce76[1];
  UINT32   PcdArmArchTimerHypIntrNum_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT32   PcdArmArchTimerIntrNum_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT32   PcdArmArchTimerSecIntrNum_bb11ecfe_820f_4968_bba6_f76afe302596[1];
  UINT32   PcdArmArchTimerVirtIntrNum_bb11ecfe_820f_4968_bba6_f76afe302596[1];


  UINT8    PcdSmbiosDocRev_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  BOOLEAN  PcdTestKeyUsed_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  BOOLEAN  PcdQemuSmbiosValidated_93bb96af_b9f2_4eb8_9462_e0ba74564236[1];

} DXE_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                BuildVersion;
  //UINT32                Length;
  //SKU_ID                SystemSkuId;       // Current SkuId value.
  //UINT32                LengthForAllSkus;  // Length of all SKU PCD DB
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset;
  //TABLE_OFFSET          PcdNameTableOffset;
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //UINT8                 Pad[6];
  DXE_PCD_DATABASE_INIT    Init;
  DXE_PCD_DATABASE_UNINIT  Uninit;
} DXE_PCD_DATABASE;

#define DXE_NEX_TOKEN_NUMBER (DXE_LOCAL_TOKEN_NUMBER - DXE_EX_TOKEN_NUMBER)
#endif


EFI_STATUS
EFIAPI
PcdDxeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
