// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "GrandpasSecretGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrandpasSecretGameMode() {}
// Cross Module References
	GRANDPASSECRET_API UClass* Z_Construct_UClass_AGrandpasSecretGameMode_NoRegister();
	GRANDPASSECRET_API UClass* Z_Construct_UClass_AGrandpasSecretGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GrandpasSecret();
// End Cross Module References
	void AGrandpasSecretGameMode::StaticRegisterNativesAGrandpasSecretGameMode()
	{
	}
	UClass* Z_Construct_UClass_AGrandpasSecretGameMode_NoRegister()
	{
		return AGrandpasSecretGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AGrandpasSecretGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_GrandpasSecret,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "GrandpasSecretGameMode.h" },
				{ "ModuleRelativePath", "GrandpasSecretGameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AGrandpasSecretGameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AGrandpasSecretGameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrandpasSecretGameMode, 537663954);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrandpasSecretGameMode(Z_Construct_UClass_AGrandpasSecretGameMode, &AGrandpasSecretGameMode::StaticClass, TEXT("/Script/GrandpasSecret"), TEXT("AGrandpasSecretGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrandpasSecretGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
