
#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include <stdio.h>
#include <string>

#include "cuda_lib_test.h"
#include <math.h>


__global__ void ParticleKernel(
    float3* positions,
    float3* velocities,
    int numParticles,
    float dt,
    float damping,
    float3 center)
{
    int id = blockIdx.x * blockDim.x + threadIdx.x;
    if (id >= numParticles) return;

    float3 pos = positions[id];
    float3 vel = velocities[id];

    float3 toCenter = {
        center.x - pos.x,
        center.y - pos.y,
        center.z - pos.z
    };

    float dist2 = toCenter.x * toCenter.x + toCenter.y * toCenter.y + toCenter.z * toCenter.z;
    float dist = sqrtf(dist2);

    if (dist > 1e-4f) 
    {
        toCenter.x /= dist;
        toCenter.y /= dist;
        toCenter.z /= dist;

        float pullStrength = 1500.0f; 
        vel.x += toCenter.x * pullStrength * dt;
        vel.y += toCenter.y * pullStrength * dt;
        vel.z += toCenter.z * pullStrength * dt;
    }

    vel.x *= damping;
    vel.y *= damping;
    vel.z *= damping;

    pos.x += vel.x * dt;
    pos.y += vel.y * dt;
    pos.z += vel.z * dt;

    // Clamp nonsense
    if (!isfinite(pos.x)) pos.x = 0;
    if (!isfinite(pos.y)) pos.y = 0;
    if (!isfinite(pos.z)) pos.z = 0;
    if (!isfinite(vel.x)) vel.x = 0;
    if (!isfinite(vel.y)) vel.y = 0;
    if (!isfinite(vel.z)) vel.z = 0;

    positions[id] = pos;
    velocities[id] = vel;
}

extern "C" void launchParticleKernel(
    float3* positions,
    float3* velocities,
    int numParticles,
    float dt,
    float damping,
    float3 center)
{
    if (numParticles <= 0 || positions == nullptr || velocities == nullptr) return;

    int threadsPerBlock = 256;
    int blocksPerGrid = (numParticles + threadsPerBlock - 1) / threadsPerBlock;

    ParticleKernel << <blocksPerGrid, threadsPerBlock >> > (
        positions,
        velocities,
        numParticles,
        dt,
        damping,
        center
        );

    cudaDeviceSynchronize();
}
