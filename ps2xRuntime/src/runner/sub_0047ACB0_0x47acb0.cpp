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

// Function: sub_0047ACB0
// Address: 0x47acb0 - 0x47ad00
void sub_0047ACB0_0x47acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047ACB0_0x47acb0");
#endif

    switch (ctx->pc) {
        case 0x47ace8u: goto label_47ace8;
        default: break;
    }

    ctx->pc = 0x47acb0u;

    // 0x47acb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47acb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47acb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47acb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47acb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47acb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47acbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47acbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x47acc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47acc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47acc4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47acc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x47acc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47acc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47accc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x47acccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x47acd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47acd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47acd4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x47acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x47acd8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x47acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47acdc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47acdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ace0: 0xc11eb40  jal         func_47AD00
    ctx->pc = 0x47ACE0u;
    SET_GPR_U32(ctx, 31, 0x47ACE8u);
    ctx->pc = 0x47AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AD00u, 0x47ACE0u, 0x47ACE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ACE8u;
label_47ace8:
    // 0x47ace8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47acec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47acecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47acf0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47acf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47acf4: 0x3e00008  jr          $ra
    ctx->pc = 0x47ACF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47ACF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47ACFCu;
    // 0x47acfc: 0x0  nop
    ctx->pc = 0x47acfcu;
    // NOP
    ctx->pc = 0x47ad00u;
}
