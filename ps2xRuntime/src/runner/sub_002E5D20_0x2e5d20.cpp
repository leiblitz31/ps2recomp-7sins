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

// Function: sub_002E5D20
// Address: 0x2e5d20 - 0x2e5d70
void sub_002E5D20_0x2e5d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5D20_0x2e5d20");
#endif

    switch (ctx->pc) {
        case 0x2e5d58u: goto label_2e5d58;
        default: break;
    }

    ctx->pc = 0x2e5d20u;

    // 0x2e5d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e5d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e5d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e5d28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e5d2c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2e5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2e5d30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d34: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e5d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e5d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d3c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2e5d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2e5d40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d44: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2e5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e5d48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2e5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e5d4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e5d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5d50: 0xc0b975c  jal         func_2E5D70
    ctx->pc = 0x2E5D50u;
    SET_GPR_U32(ctx, 31, 0x2E5D58u);
    ctx->pc = 0x2E5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5D70u, 0x2E5D50u, 0x2E5D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5D58u;
label_2e5d58:
    // 0x2e5d58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2e5d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e5d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e5d60: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2e5d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e5d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E5D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E5D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E5D6Cu;
    // 0x2e5d6c: 0x0  nop
    ctx->pc = 0x2e5d6cu;
    // NOP
    ctx->pc = 0x2e5d70u;
}
