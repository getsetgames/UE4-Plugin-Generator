#pragma once

#include "TemplatePluginSettings.generated.h"

UCLASS(config = Engine, defaultconfig)
class UTemplatePluginSettings : public UObject
{
	GENERATED_BODY()
	
public:
	UTemplatePluginSettings(const FObjectInitializer& ObjectInitializer);
	
	// UPROPERTY(Config, EditAnywhere, Category=General, meta=(DisplayName="Example Bool Setting"))
	// bool ExampleBoolSetting;
	//
	// UPROPERTY(Config, EditAnywhere, Category=iOS, meta=(DisplayName="Example String Setting"))
	// FString ExampleStringSetting;
};
