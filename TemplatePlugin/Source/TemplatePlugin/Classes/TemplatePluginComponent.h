#pragma once

#include "TemplatePluginComponent.generated.h"

UCLASS(ClassGroup=TemplatePlugin, HideCategories=(Activation, "Components|Activation", Collision), meta=(BlueprintSpawnableComponent))
class UTemplatePluginComponent : public UActorComponent
{
	GENERATED_BODY()
	
public:	
	void OnRegister() override;
	void OnUnregister() override;	
};
