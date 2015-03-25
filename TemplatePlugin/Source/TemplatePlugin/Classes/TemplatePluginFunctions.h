#pragma once

#include "TemplatePluginFunctions.generated.h"

UCLASS(NotBlueprintable)
class UTemplatePluginFunctions : public UObject
{
	GENERATED_BODY()
	
public:
	// UFUNCTION(BlueprintPure, meta = (Keywords = "keyword1 keyword2"), Category = "TemplatePlugin")
	// static bool ExamplePureFunction();
	//
	// UFUNCTION(BlueprintCallable, meta = (Keywords = "keyword1 keyword2"), Category = "TemplatePlugin")
	// static void ExampleBlueprintFunction(bool pass);
};
