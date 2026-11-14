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

// Function: sub_00188F60
// Address: 0x188f60 - 0x188fc0
void sub_00188F60_0x188f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188F60_0x188f60");
#endif

    ctx->pc = 0x188f60u;

    // 0x188f60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x188f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x188f64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x188f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x188f68: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x188f68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x188f6c: 0xe7ad0020  swc1        $f13, 0x20($sp)
    ctx->pc = 0x188f6cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x188f70: 0xe7ae0030  swc1        $f14, 0x30($sp)
    ctx->pc = 0x188f70u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x188f74: 0xe7af0040  swc1        $f15, 0x40($sp)
    ctx->pc = 0x188f74u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x188f78: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x188f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f80: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x188f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x188f84: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x188f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f8c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x188f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x188f90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x188f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188f94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188f98: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x188f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x188f9c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x188f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188fa0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188fa4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x188fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x188fa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x188fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x188fac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x188facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x188fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x188FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188FB8u;
    // 0x188fb8: 0x0  nop
    ctx->pc = 0x188fb8u;
    // NOP
    // 0x188fbc: 0x0  nop
    ctx->pc = 0x188fbcu;
    // NOP
    ctx->pc = 0x188fc0u;
}
