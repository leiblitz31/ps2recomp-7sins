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

// Function: sub_002BED20
// Address: 0x2bed20 - 0x2bed70
void sub_002BED20_0x2bed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BED20_0x2bed20");
#endif

    switch (ctx->pc) {
        case 0x2bed58u: goto label_2bed58;
        default: break;
    }

    ctx->pc = 0x2bed20u;

    // 0x2bed20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bed24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bed24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bed28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2bed28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2bed2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2bed2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2bed30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2bed34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2bed38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2bed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2bed40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed44: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2bed44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2bed48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2bed48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bed4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bed4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bed50: 0xc0afb5c  jal         func_2BED70
    ctx->pc = 0x2BED50u;
    SET_GPR_U32(ctx, 31, 0x2BED58u);
    ctx->pc = 0x2BED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BED70u, 0x2BED50u, 0x2BED58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BED58u;
label_2bed58:
    // 0x2bed58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2bed58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bed5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bed5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bed60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2bed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bed64: 0x3e00008  jr          $ra
    ctx->pc = 0x2BED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BED64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BED6Cu;
    // 0x2bed6c: 0x0  nop
    ctx->pc = 0x2bed6cu;
    // NOP
    ctx->pc = 0x2bed70u;
}
