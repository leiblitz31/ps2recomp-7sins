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

// Function: sub_0028F6B0
// Address: 0x28f6b0 - 0x28f6f0
void sub_0028F6B0_0x28f6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F6B0_0x28f6b0");
#endif

    ctx->pc = 0x28f6b0u;

    // 0x28f6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28f6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28f6b4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x28f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x28f6b8: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x28f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x28f6bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28f6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f6c0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28f6c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f6c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28f6c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28f6cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28f6ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28f6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f6d4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x28F6D4u;
    {
        const bool branch_taken_0x28f6d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28f6d4) {
            ctx->pc = 0x28F6E0u;
            goto label_28f6e0;
        }
    }
    ctx->pc = 0x28F6DCu;
    // 0x28f6dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28f6dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f6e0:
    // 0x28f6e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28f6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28f6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x28F6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F6ECu;
    // 0x28f6ec: 0x0  nop
    ctx->pc = 0x28f6ecu;
    // NOP
    ctx->pc = 0x28f6f0u;
}
