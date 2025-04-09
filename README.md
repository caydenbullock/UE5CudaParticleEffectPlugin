# UE5CudaPlugin

The particle effect included with the plugin:

![cudaeffect](https://github.com/user-attachments/assets/c231a9e8-ae8d-4835-b4bb-a14eebfe65a8)

This repo contains the kernel compiled with NVIDIA Toolkit v12, and a UE5 Plugin utilizing it.

File cuda_lib_test.cu is the CUDA kernel, and CudaParticleSimForSonny is the plugin.

The plugin can be used in any UE5 Project by adding it to the Plugins folder (create one if it doesn't exist) in the project.

Then, open the project in the editor, and enable the plugin through Edit->Plugins and search "CudaParticleSimForSonny". 

The plugin contains a BP_ParticleSimActor which can be dragged and dopped into a level to spawn the particle sim.

Alternatively, the class AParticleSimActor may be inherited from to make a blueprint.

note: It requires an NVIDIA GPU to use.
