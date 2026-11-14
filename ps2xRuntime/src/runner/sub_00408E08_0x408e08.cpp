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

// Function: sub_00408E08
// Address: 0x408e08 - 0x408e88
void sub_00408E08_0x408e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00408E08_0x408e08");
#endif

    ctx->pc = 0x408e08u;

    // 0x408e08: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x408e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408e0c: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x408e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408e10: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x408e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408e14: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x408e14u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x408e18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x408e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x408e1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408e1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x408e20: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408e20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x408e24: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x408e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x408e28: 0x46000004  c1          0x4
    ctx->pc = 0x408e28u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x408e2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x408e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x408e30: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x408e30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x408e34: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x408e34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x408e38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x408e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x408e3c: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x408e3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
    // 0x408e40: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x408e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x408e44: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x408e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408e48: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x408e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408e4c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x408e4cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x408e50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x408e54: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x408e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x408e58: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x408e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408e5c: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x408e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x408e60: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x408e60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x408e64: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x408e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x408e68: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x408e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x408e6c: 0xc4a20018  lwc1        $f2, 0x18($a1)
    ctx->pc = 0x408e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x408e70: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x408e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x408e74: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x408e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x408e78: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x408e78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x408e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x408E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x408E7Cu;
        // 0x408e80: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x408E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x408E84u;
    // 0x408e84: 0x0  nop
    ctx->pc = 0x408e84u;
    // NOP
    ctx->pc = 0x408e88u;
}
