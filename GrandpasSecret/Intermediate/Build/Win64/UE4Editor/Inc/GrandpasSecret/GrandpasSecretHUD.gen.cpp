// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GrandpasSecretHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrandpasSecretHUD() {}
// Cross Module References
	GRANDPASSECRET_API UClass* Z_Construct_UClass_AGrandpasSecretHUD_NoRegister();
	GRANDPASSECRET_API UClass* Z_Construct_UClass_AGrandpasSecretHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GrandpasSecret();
// End Cross Module References
	void AGrandpasSecretHUD::StaticRegisterNativesAGrandpasSecretHUD()
	{
	}
	UClass* Z_Construct_UClass_AGrandpasSecretHUD_NoRegister()
	{
		return AGrandpasSecretHUD::StaticClass();
	}
	UClass* Z_Construct_UClass_AGrandpasSecretHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AHUD,
				(UObject* (*)())Z_Construct_UPackage__Script_GrandpasSecret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Rendering Actor Input Replication" },
				{ "IncludePath", "GrandpasSecretHUD.h" },
				{ "ModuleRelativePath", "GrandpasSecretHUD.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGrandpasSecretHUD>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGrandpasSecretHUD::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x0080028Cu,
				nullptr, 0,
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrandpasSecretHUD, 3293075931);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrandpasSecretHUD(Z_Construct_UClass_AGrandpasSecretHUD, &AGrandpasSecretHUD::StaticClass, TEXT("/Script/GrandpasSecret"), TEXT("AGrandpasSecretHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrandpasSecretHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
