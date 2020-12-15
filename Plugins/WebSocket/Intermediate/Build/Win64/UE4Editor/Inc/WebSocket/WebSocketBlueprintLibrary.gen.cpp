// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WebSocket/Public/WebSocketBlueprintLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebSocketBlueprintLibrary() {}
// Cross Module References
	WEBSOCKET_API UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair();
	UPackage* Z_Construct_UPackage__Script_WebSocket();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UTest2();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	WEBSOCKET_API UClass* Z_Construct_UClass_UWebSocketBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
class UScriptStruct* FWebSocketHeaderPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern WEBSOCKET_API uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWebSocketHeaderPair, Z_Construct_UPackage__Script_WebSocket(), TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_Hash());
	}
	return Singleton;
}
template<> WEBSOCKET_API UScriptStruct* StaticStruct<FWebSocketHeaderPair>()
{
	return FWebSocketHeaderPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWebSocketHeaderPair(FWebSocketHeaderPair::StaticStruct, TEXT("/Script/WebSocket"), TEXT("WebSocketHeaderPair"), false, nullptr, nullptr);
static struct FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair
{
	FScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WebSocketHeaderPair")),new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>);
	}
} ScriptStruct_WebSocket_StaticRegisterNativesFWebSocketHeaderPair;
	struct Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWebSocketHeaderPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWebSocketHeaderPair, value), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWebSocketHeaderPair, key), METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::NewProp_key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
		nullptr,
		&NewStructOps,
		"WebSocketHeaderPair",
		sizeof(FWebSocketHeaderPair),
		alignof(FWebSocketHeaderPair),
		Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWebSocketHeaderPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_WebSocket();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WebSocketHeaderPair"), sizeof(FWebSocketHeaderPair), Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWebSocketHeaderPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWebSocketHeaderPair_Hash() { return 1208003118U; }
	void UTest::StaticRegisterNativesUTest()
	{
	}
	UClass* Z_Construct_UClass_UTest_NoRegister()
	{
		return UTest::StaticClass();
	}
	struct Z_Construct_UClass_UTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTest_Statics::NewProp_mAge = { "mAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTest, mAge), METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::NewProp_mAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTest_Statics::NewProp_mName = { "mName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTest, mName), METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::NewProp_mName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest_Statics::NewProp_mAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest_Statics::NewProp_mName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest_Statics::ClassParams = {
		&UTest::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest, 1225950222);
	template<> WEBSOCKET_API UClass* StaticClass<UTest>()
	{
		return UTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest(Z_Construct_UClass_UTest, &UTest::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest);
	void UTest2::StaticRegisterNativesUTest2()
	{
	}
	UClass* Z_Construct_UClass_UTest2_NoRegister()
	{
		return UTest2::StaticClass();
	}
	struct Z_Construct_UClass_UTest2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mTest_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_mTest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mAge_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_mAge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTest2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mTest = { "mTest", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTest2, mTest), Z_Construct_UClass_UTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mTest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mAge = { "mAge", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTest2, mAge), METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mAge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTest2_Statics::NewProp_mName = { "mName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTest2, mName), METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::NewProp_mName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTest2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mTest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mAge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTest2_Statics::NewProp_mName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTest2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTest2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTest2_Statics::ClassParams = {
		&UTest2::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTest2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTest2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTest2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTest2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTest2, 2601965774);
	template<> WEBSOCKET_API UClass* StaticClass<UTest2>()
	{
		return UTest2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTest2(Z_Construct_UClass_UTest2, &UTest2::StaticClass, TEXT("/Script/WebSocket"), TEXT("UTest2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTest2);
	DEFINE_FUNCTION(UWebSocketBlueprintLibrary::execObjectToJson)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWebSocketBlueprintLibrary::ObjectToJson(Z_Param_Object,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketBlueprintLibrary::execGetJsonIntField)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_iValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UWebSocketBlueprintLibrary::GetJsonIntField(Z_Param_data,Z_Param_key,Z_Param_Out_iValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketBlueprintLibrary::execJsonToObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_data);
		P_GET_OBJECT(UClass,Z_Param_StructDefinition);
		P_GET_UBOOL(Z_Param_checkAll);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UWebSocketBlueprintLibrary::JsonToObject(Z_Param_data,Z_Param_StructDefinition,Z_Param_checkAll);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketBlueprintLibrary::execConnectWithHeader)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_TARRAY_REF(FWebSocketHeaderPair,Z_Param_Out_header);
		P_GET_UBOOL_REF(Z_Param_Out_connectFail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocketBase**)Z_Param__Result=UWebSocketBlueprintLibrary::ConnectWithHeader(Z_Param_url,Z_Param_Out_header,Z_Param_Out_connectFail);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWebSocketBlueprintLibrary::execConnect)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_UBOOL_REF(Z_Param_Out_connectFail);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWebSocketBase**)Z_Param__Result=UWebSocketBlueprintLibrary::Connect(Z_Param_url,Z_Param_Out_connectFail);
		P_NATIVE_END;
	}
	void UWebSocketBlueprintLibrary::StaticRegisterNativesUWebSocketBlueprintLibrary()
	{
		UClass* Class = UWebSocketBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Connect", &UWebSocketBlueprintLibrary::execConnect },
			{ "ConnectWithHeader", &UWebSocketBlueprintLibrary::execConnectWithHeader },
			{ "GetJsonIntField", &UWebSocketBlueprintLibrary::execGetJsonIntField },
			{ "JsonToObject", &UWebSocketBlueprintLibrary::execJsonToObject },
			{ "ObjectToJson", &UWebSocketBlueprintLibrary::execObjectToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics
	{
		struct WebSocketBlueprintLibrary_eventConnect_Parms
		{
			FString url;
			bool connectFail;
			UWebSocketBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_connectFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_connectFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnect_Parms, ReturnValue), Z_Construct_UClass_UWebSocketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_connectFail_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventConnect_Parms*)Obj)->connectFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_connectFail = { "connectFail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBlueprintLibrary_eventConnect_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_connectFail_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnect_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_connectFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, nullptr, "Connect", nullptr, nullptr, sizeof(WebSocketBlueprintLibrary_eventConnect_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics
	{
		struct WebSocketBlueprintLibrary_eventConnectWithHeader_Parms
		{
			FString url;
			TArray<FWebSocketHeaderPair> header;
			bool connectFail;
			UWebSocketBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_connectFail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_connectFail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_header_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_header;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_header_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_url_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, ReturnValue), Z_Construct_UClass_UWebSocketBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_connectFail_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventConnectWithHeader_Parms*)Obj)->connectFail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_connectFail = { "connectFail", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_connectFail_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header = { "header", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, header), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_Inner = { "header", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FWebSocketHeaderPair, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms, url), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_connectFail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_header_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, nullptr, "ConnectWithHeader", nullptr, nullptr, sizeof(WebSocketBlueprintLibrary_eventConnectWithHeader_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics
	{
		struct WebSocketBlueprintLibrary_eventGetJsonIntField_Parms
		{
			FString data;
			FString key;
			int32 iValue;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_iValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventGetJsonIntField_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_iValue = { "iValue", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, iValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_iValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, nullptr, "GetJsonIntField", nullptr, nullptr, sizeof(WebSocketBlueprintLibrary_eventGetJsonIntField_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics
	{
		struct WebSocketBlueprintLibrary_eventJsonToObject_Parms
		{
			FString data;
			UClass* StructDefinition;
			bool checkAll;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_checkAll_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_checkAll;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_StructDefinition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventJsonToObject_Parms*)Obj)->checkAll = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll = { "checkAll", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_StructDefinition = { "StructDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, StructDefinition), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventJsonToObject_Parms, data), METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_checkAll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_StructDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, nullptr, "JsonToObject", nullptr, nullptr, sizeof(WebSocketBlueprintLibrary_eventJsonToObject_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics
	{
		struct WebSocketBlueprintLibrary_eventObjectToJson_Parms
		{
			UObject* Object;
			FString data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((WebSocketBlueprintLibrary_eventObjectToJson_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms), &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventObjectToJson_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(WebSocketBlueprintLibrary_eventObjectToJson_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::NewProp_Object,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams[] = {
		{ "Category", "WebSocket" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWebSocketBlueprintLibrary, nullptr, "ObjectToJson", nullptr, nullptr, sizeof(WebSocketBlueprintLibrary_eventObjectToJson_Parms), Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary_NoRegister()
	{
		return UWebSocketBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_WebSocket,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_Connect, "Connect" }, // 657699044
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ConnectWithHeader, "ConnectWithHeader" }, // 1028856309
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_GetJsonIntField, "GetJsonIntField" }, // 3757627641
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_JsonToObject, "JsonToObject" }, // 3320738164
		{ &Z_Construct_UFunction_UWebSocketBlueprintLibrary_ObjectToJson, "ObjectToJson" }, // 756865601
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "WebSocketBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/WebSocketBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebSocketBlueprintLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::ClassParams = {
		&UWebSocketBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebSocketBlueprintLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWebSocketBlueprintLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWebSocketBlueprintLibrary, 2182363870);
	template<> WEBSOCKET_API UClass* StaticClass<UWebSocketBlueprintLibrary>()
	{
		return UWebSocketBlueprintLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWebSocketBlueprintLibrary(Z_Construct_UClass_UWebSocketBlueprintLibrary, &UWebSocketBlueprintLibrary::StaticClass, TEXT("/Script/WebSocket"), TEXT("UWebSocketBlueprintLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebSocketBlueprintLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
