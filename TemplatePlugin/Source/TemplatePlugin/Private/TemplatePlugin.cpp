#include "TemplatePluginPrivatePCH.h"
#include "TemplatePluginSettings.h"
#include "ISettingsModule.h"

DEFINE_LOG_CATEGORY(LogTemplatePlugin);

#define LOCTEXT_NAMESPACE "TemplatePlugin"

class FTemplatePlugin : public ITemplatePlugin
{
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE( FTemplatePlugin, TemplatePlugin )

void FTemplatePlugin::StartupModule()
{
	// register settings
	if (ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings"))
	{
		SettingsModule->RegisterSettings("Project", "Plugins", "TemplatePlugin",
										 LOCTEXT("RuntimeSettingsName", "TemplatePlugin"),
										 LOCTEXT("RuntimeSettingsDescription", "Configure the TemplatePlugin plugin"),
										 GetMutableDefault<UTemplatePluginSettings>()
										 );
	}
}


void FTemplatePlugin::ShutdownModule()
{
}

#undef LOCTEXT_NAMESPACE
