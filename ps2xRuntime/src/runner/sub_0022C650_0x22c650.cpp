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

// Function: sub_0022C650
// Address: 0x22c650 - 0x22c6a0
void sub_0022C650_0x22c650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C650_0x22c650");
#endif

    switch (ctx->pc) {
        case 0x22c688u: goto label_22c688;
        default: break;
    }

    ctx->pc = 0x22c650u;

    // 0x22c650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c654: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c658: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c65c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c660: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c664: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x22c664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x22c668: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c66c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x22c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x22c670: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c674: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x22c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x22c678: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c67c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22c67cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22c680: 0xc08b1a8  jal         func_22C6A0
    ctx->pc = 0x22C680u;
    SET_GPR_U32(ctx, 31, 0x22C688u);
    ctx->pc = 0x22C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C6A0u, 0x22C680u, 0x22C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C688u;
label_22c688:
    // 0x22c688: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c690: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c694: 0x3e00008  jr          $ra
    ctx->pc = 0x22C694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C69Cu;
    // 0x22c69c: 0x0  nop
    ctx->pc = 0x22c69cu;
    // NOP
    ctx->pc = 0x22c6a0u;
}
