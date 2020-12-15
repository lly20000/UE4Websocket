// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebSocket/Private/WebSocketContext.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketContext() {}
// Cross Module References
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketContext_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketContext();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
// End Cross Module References
	void UWebSocketContext::StaticRegisterNativesUWebSocketContext()
	{
	}
	UClass* Z_Construct_UClass_UWebSocketContext_NoRegister()
	{
		return UWebSocketContext::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketContext_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketContext.h" },
		{ "ModuleRelativePath", "Private/WebSocketContext.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketContext>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketContext_Statics::ClassParams = {
		&UWebSocketContext::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketContext()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketContext_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketContext, 2749989050);
	template<> WEBSOCKET_API UClass* StaticClass<UWebSocketContext>()
	{
		return UWebSocketContext::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketContext(Z_Construct_UClass_UWebSocketContext, &UWebSocketContext::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketContext"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketContext);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
