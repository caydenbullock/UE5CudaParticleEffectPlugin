using UnrealBuildTool;
using System.IO;

public class CudaParticleSimForSonny : ModuleRules
{
    public CudaParticleSimForSonny(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        // Plugin-relative paths
        string PluginRoot = Path.GetFullPath(Path.Combine(ModuleDirectory, "../../"));
        string CudaLibDir = Path.Combine(PluginRoot, "ThirdParty", "CUDALib");
        string LocalCudaRuntimeDir = Path.Combine(PluginRoot, "ThirdParty", "CUDA");

        // Add your custom CUDA particle sim lib
        PublicIncludePaths.Add(Path.Combine(CudaLibDir, "include"));
        PublicAdditionalLibraries.Add(Path.Combine(CudaLibDir, "lib", "cuda_lib_test.lib"));

        // Add minimal local CUDA SDK subset (headers + cudart_static.lib)
        PublicIncludePaths.Add(Path.Combine(LocalCudaRuntimeDir, "include"));
        PublicAdditionalLibraries.Add(Path.Combine(LocalCudaRuntimeDir, "lib", "cudart_static.lib"));

        // Required modules
        PublicDependencyModuleNames.AddRange(new string[]
        {
            "Core",
            "CoreUObject",
            "Engine",
            "Projects",
            "ProceduralMeshComponent"
        });

        PrivateDependencyModuleNames.AddRange(new string[]
        {
            "Slate",
            "SlateCore"
        });
    }
}