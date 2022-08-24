
/**
  DO NOT EDIT
  FILE auto-generated
**/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <PcdValueCommon.h>
#include <Pcd/PcdCryptoServiceFamilyEnable.h>

// Default Value in Dec 
void Cal_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Size(UINT32 *Size){
// SkuName: DEFAULT,  DefaultStoreName: STANDARD 
  *Size = (1 > *Size ? 1 : *Size); // The Pcd maxsize is 1 
}
// Default value in Dec 
void Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Default_Value(PCD_CRYPTO_SERVICE_FAMILY_ENABLE *Pcd){
  UINT32  FieldSize;
  CHAR8   *Value;
 UINT32 PcdArraySize;
  Value     = "\x00"; // From DEC Default Value {0x00}
  memcpy (Pcd, Value, 1);
}
// Value in Fdf
void Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Fdf_Value(PCD_CRYPTO_SERVICE_FAMILY_ENABLE *Pcd){
  UINT32  FieldSize;
  CHAR8   *Value;
}
// Value in CommandLine
void Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_CommandLine_Value(PCD_CRYPTO_SERVICE_FAMILY_ENABLE *Pcd){
  UINT32  FieldSize;
  CHAR8   *Value;
}
// Value in Dsc for Sku: DEFAULT, DefaultStore STANDARD
void Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_DEFAULT_STANDARD_Value(PCD_CRYPTO_SERVICE_FAMILY_ENABLE *Pcd){
  UINT32  FieldSize;
  CHAR8   *Value;
 UINT32 PcdArraySize;
// SkuName: DEFAULT,  DefaultStoreName: STANDARD 
  Pcd->HmacSha256.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 141 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Md5.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 142 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Pkcs.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 143 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Dh.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 144 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Random.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 145 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Rsa.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 146 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Sha1.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 147 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Sha256.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 148 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Sha384.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 149 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Sha512.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 150 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->X509.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 151 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Tdes.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 152 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Aes.Services.GetContextSize = 1; // From CryptoPkg/CryptoPkg.dsc Line 153 Value 1
  Pcd->Aes.Services.Init = 1; // From CryptoPkg/CryptoPkg.dsc Line 154 Value 1
  Pcd->Aes.Services.CbcEncrypt = 1; // From CryptoPkg/CryptoPkg.dsc Line 155 Value 1
  Pcd->Aes.Services.CbcDecrypt = 1; // From CryptoPkg/CryptoPkg.dsc Line 156 Value 1
  Pcd->Arc4.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 157 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Sm3.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 158 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Hkdf.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 159 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->Tls.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 160 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->TlsSet.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 161 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
  Pcd->TlsGet.Family = PCD_CRYPTO_SERVICE_ENABLE_FAMILY; // From CryptoPkg/CryptoPkg.dsc Line 162 Value PCD_CRYPTO_SERVICE_ENABLE_FAMILY
}
// Value in Dsc Module scope 
void
Initialize_DEFAULT_STANDARD_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable(
  void
  )
{
  UINT32  Size;
  UINT32  FieldSize;
  CHAR8   *Value;
  UINT32  OriginalSize;
  VOID    *OriginalPcd;
  PCD_CRYPTO_SERVICE_FAMILY_ENABLE      *Pcd;  // From CryptoPkg/CryptoPkg.dec Line 64 

  OriginalPcd = PcdGetPtr (DEFAULT, STANDARD, gEfiCryptoPkgTokenSpaceGuid, PcdCryptoServiceFamilyEnable, &OriginalSize);
  Size = sizeof(PCD_CRYPTO_SERVICE_FAMILY_ENABLE);
  Cal_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Size(&Size);
  Size = (OriginalSize > Size ? OriginalSize : Size);
  Pcd     = (PCD_CRYPTO_SERVICE_FAMILY_ENABLE *)malloc (Size);
  memset (Pcd, 0, Size);
  memcpy (Pcd, OriginalPcd, OriginalSize);
  Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Default_Value(Pcd);
// SkuName: DEFAULT,  DefaultStoreName: STANDARD 
  Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_DEFAULT_STANDARD_Value(Pcd);
  Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_Fdf_Value(Pcd);
  Assign_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable_CommandLine_Value(Pcd);
  PcdSetPtr (DEFAULT, STANDARD, gEfiCryptoPkgTokenSpaceGuid, PcdCryptoServiceFamilyEnable, Size, (void *)Pcd);
  free (Pcd);
}

VOID
PcdEntryPoint(
  VOID
  )
{
  Initialize_DEFAULT_STANDARD_gEfiCryptoPkgTokenSpaceGuid_PcdCryptoServiceFamilyEnable();
}

int
main (
  int   argc,
  char  *argv[]
  )
{
  return PcdValueMain (argc, argv);
}

