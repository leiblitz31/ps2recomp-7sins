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

// Function: sub_00235000
// Address: 0x235000 - 0x235050
void sub_00235000_0x235000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235000_0x235000");
#endif

    switch (ctx->pc) {
        case 0x235038u: goto label_235038;
        default: break;
    }

    ctx->pc = 0x235000u;

    // 0x235000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x235004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x235004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x235008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x235008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23500c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23500cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x235010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235014: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x235014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x235018: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23501c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x23501cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x235020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235024: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x235024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x235028: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x235028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23502c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23502cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235030: 0xc08d414  jal         func_235050
    ctx->pc = 0x235030u;
    SET_GPR_U32(ctx, 31, 0x235038u);
    ctx->pc = 0x235050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235050u, 0x235030u, 0x235038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235038u;
label_235038:
    // 0x235038: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x235038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23503c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235040: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x235040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235044: 0x3e00008  jr          $ra
    ctx->pc = 0x235044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23504Cu;
    // 0x23504c: 0x0  nop
    ctx->pc = 0x23504cu;
    // NOP
    ctx->pc = 0x235050u;
}
