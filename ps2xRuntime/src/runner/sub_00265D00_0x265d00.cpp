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

// Function: sub_00265D00
// Address: 0x265d00 - 0x265d50
void sub_00265D00_0x265d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265D00_0x265d00");
#endif

    switch (ctx->pc) {
        case 0x265d38u: goto label_265d38;
        default: break;
    }

    ctx->pc = 0x265d00u;

    // 0x265d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x265d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x265d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x265d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x265d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x265d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x265d0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x265d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x265d10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x265d14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x265d18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x265d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x265d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d24: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x265d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x265d28: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x265d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265d2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x265d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265d30: 0xc099754  jal         func_265D50
    ctx->pc = 0x265D30u;
    SET_GPR_U32(ctx, 31, 0x265D38u);
    ctx->pc = 0x265D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265D50u, 0x265D30u, 0x265D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265D38u;
label_265d38:
    // 0x265d38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x265d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x265d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x265d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x265d40: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x265d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x265d44: 0x3e00008  jr          $ra
    ctx->pc = 0x265D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265D4Cu;
    // 0x265d4c: 0x0  nop
    ctx->pc = 0x265d4cu;
    // NOP
    ctx->pc = 0x265d50u;
}
