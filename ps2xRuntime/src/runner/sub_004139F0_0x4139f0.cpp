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

// Function: sub_004139F0
// Address: 0x4139f0 - 0x413a88
void sub_004139F0_0x4139f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004139F0_0x4139f0");
#endif

    ctx->pc = 0x4139f0u;

    // 0x4139f0: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x4139f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x4139f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4139f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4139f8: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x4139f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4139fc: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x4139fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x413a00: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x413a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x413a04: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x413a04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x413a08: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x413a08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x413a0c: 0xc4c60010  lwc1        $f6, 0x10($a2)
    ctx->pc = 0x413a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x413a10: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x413a10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x413a14: 0xc4c80014  lwc1        $f8, 0x14($a2)
    ctx->pc = 0x413a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x413a18: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x413a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413a1c: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x413a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x413a20: 0x46065182  mul.s       $f6, $f10, $f6
    ctx->pc = 0x413a20u;
    ctx->f[6] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x413a24: 0xc4c70020  lwc1        $f7, 0x20($a2)
    ctx->pc = 0x413a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x413a28: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x413a28u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x413a2c: 0xc4c90030  lwc1        $f9, 0x30($a2)
    ctx->pc = 0x413a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x413a30: 0x46085202  mul.s       $f8, $f10, $f8
    ctx->pc = 0x413a30u;
    ctx->f[8] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
    // 0x413a34: 0xc4c50024  lwc1        $f5, 0x24($a2)
    ctx->pc = 0x413a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x413a38: 0xc4aa0008  lwc1        $f10, 0x8($a1)
    ctx->pc = 0x413a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x413a3c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x413a3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x413a40: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x413a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413a44: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x413a44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x413a48: 0x460751c2  mul.s       $f7, $f10, $f7
    ctx->pc = 0x413a48u;
    ctx->f[7] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
    // 0x413a4c: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x413a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x413a50: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x413a50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x413a54: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x413a54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x413a58: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x413a58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x413a5c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413a5cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x413a60: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x413a60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x413a64: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x413a64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x413a68: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x413a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x413a6c: 0xc4c00034  lwc1        $f0, 0x34($a2)
    ctx->pc = 0x413a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413a70: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x413a70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x413a74: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x413a74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x413a78: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x413a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x413a7c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x413a7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x413a80: 0x3e00008  jr          $ra
    ctx->pc = 0x413A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x413A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413A80u;
        // 0x413a84: 0xe4830008  swc1        $f3, 0x8($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413A88u;
}
