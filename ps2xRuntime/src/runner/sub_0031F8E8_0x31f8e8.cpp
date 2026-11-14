#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0031F8E8
// Address: 0x31f8e8 - 0x31fa38
void sub_0031F8E8_0x31f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F8E8_0x31f8e8");
#endif

    ctx->pc = 0x31f8e8u;

    // 0x31f8e8: 0xc4a30014  lwc1        $f3, 0x14($a1)
    ctx->pc = 0x31f8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f8ec: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x31f8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f8f0: 0xc4c5000c  lwc1        $f5, 0xC($a2)
    ctx->pc = 0x31f8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f8f4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31f8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f8f8: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x31f8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f8fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f900: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x31f900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f904: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x31f904u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x31f908: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x31f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f90c: 0xc4c50014  lwc1        $f5, 0x14($a2)
    ctx->pc = 0x31f90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f910: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x31f910u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x31f914: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31f914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x31f918: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x31f918u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x31f91c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x31f91cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31f920: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31f920u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x31f924: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x31f924u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x31f928: 0xc4a5000c  lwc1        $f5, 0xC($a1)
    ctx->pc = 0x31f928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x31f92c: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x31f92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f930: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x31f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f934: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x31f934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f938: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x31f938u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x31f93c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f93cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f940: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x31f940u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x31f944: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x31f944u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31f948: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x31f948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f94c: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x31f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f950: 0xc4a40010  lwc1        $f4, 0x10($a1)
    ctx->pc = 0x31f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31f954: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x31f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f958: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x31f958u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x31f95c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f95cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f960: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x31f960u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x31f964: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x31f964u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31f968: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x31f968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31f96c: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x31f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f970: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x31f970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f974: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x31f974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f978: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x31f978u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x31f97c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31f97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31f980: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31f980u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x31f984: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x31f984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31f988: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x31f988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f98c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x31f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f990: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f990u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f994: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x31f994u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x31f998: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x31f998u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31f99c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x31f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9a0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x31f9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9a4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9a8: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x31f9a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x31f9ac: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x31f9acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31f9b0: 0xc4c10010  lwc1        $f1, 0x10($a2)
    ctx->pc = 0x31f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9b4: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x31f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9bc: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x31f9bcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x31f9c0: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x31f9c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31f9c4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x31f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9c8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x31f9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9cc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9d0: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x31f9d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x31f9d4: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x31f9d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x31f9d8: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x31f9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9dc: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x31f9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9e4: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x31f9e4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x31f9e8: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x31f9e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x31f9ec: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x31f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31f9f0: 0xc4c00014  lwc1        $f0, 0x14($a2)
    ctx->pc = 0x31f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31f9f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x31f9f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x31f9f8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x31f9f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x31f9fc: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x31f9fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x31fa00: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x31fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fa04: 0xc4c10018  lwc1        $f1, 0x18($a2)
    ctx->pc = 0x31fa04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fa08: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31fa08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31fa0c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x31fa0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x31fa10: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x31fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fa14: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x31fa14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fa18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31fa18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x31fa1c: 0xe481001c  swc1        $f1, 0x1C($a0)
    ctx->pc = 0x31fa1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x31fa20: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x31fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31fa24: 0xc4c10020  lwc1        $f1, 0x20($a2)
    ctx->pc = 0x31fa24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31fa28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x31fa28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x31fa2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FA2Cu;
        // 0x31fa30: 0xe4800020  swc1        $f0, 0x20($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FA34u;
    // 0x31fa34: 0x0  nop
    ctx->pc = 0x31fa34u;
    // NOP
    ctx->pc = 0x31fa38u;
}
