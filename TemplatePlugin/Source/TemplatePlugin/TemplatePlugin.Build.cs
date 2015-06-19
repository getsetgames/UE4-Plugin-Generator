using System.IO;

namespace UnrealBuildTool.Rules
{
	public class TemplatePlugin : ModuleRules
	{
		private string ModulePath
		{
			get { return Path.GetDirectoryName( RulesCompiler.GetModuleFilename( this.GetType().Name ) ); }
		}
		
		public TemplatePlugin(TargetInfo Target)
		{
			PublicIncludePaths.AddRange(
				new string[] {
					// ... add public include paths required here ...
				}
				);

			PrivateIncludePaths.AddRange(
				new string[] {
					"Developer/TemplatePlugin/Private",
					// ... add other private include paths required here ...
				}
				);

			PublicDependencyModuleNames.AddRange(
				new string[]
				{
					"Core",
					"CoreUObject",
					"Engine"
					// ... add other public dependencies that you statically link with here ...
				}
				);

			PrivateDependencyModuleNames.AddRange(
				new string[]
				{
					// ... add private dependencies that you statically link with here ...
				}
				);

			DynamicallyLoadedModuleNames.AddRange(
				new string[]
				{
					// ... add any modules that your module loads dynamically here ...
				}
				);
				
			PrivateIncludePathModuleNames.AddRange(
				new string[]
				{
					"Settings"
				}
				);
			
			// if (Target.Platform == UnrealTargetPlatform.IOS) {
			// 	PublicAdditionalFrameworks.Add(
			// 		new UEBuildFramework(
			// 			"ExampleFramework",
			// 			"../../lib/iOS/ExampleFramework.embeddedframework.zip"
			// 		)
			// 	);
			//
			// 	PublicFrameworks.AddRange(
			// 		new string[]
			// 		{
			// 			"AudioToolbox",
			// 			"CFNetwork",
			// 			"CoreGraphics",
			// 			"CoreLocation",
			// 			"MobileCoreServices",
			// 			"QuartzCore",
			// 			"Security",
			// 			"StoreKit",
			// 			"SystemConfiguration"
			// 		}
			// 	);
			//
			// 	AddThirdPartyPrivateStaticDependencies(Target, "libsqlite3");
			// 	AddThirdPartyPrivateStaticDependencies(Target, "libz");
			//
			//  PublicAdditionalLibraries.Add("sqlite3");
			// }
		}
	}
}
