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

// Function: sub_00133000
// Address: 0x133000 - 0x133040
void sub_00133000_0x133000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133000_0x133000");
#endif

    switch (ctx->pc) {
        case 0x13301cu: goto label_13301c;
        default: break;
    }

    ctx->pc = 0x133000u;

    // 0x133000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13300c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13300cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x133010: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x133010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133014: 0xc04cc10  jal         func_133040
    ctx->pc = 0x133014u;
    SET_GPR_U32(ctx, 31, 0x13301Cu);
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x133014u, 0x13301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13301Cu;
label_13301c:
    // 0x13301c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13301cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133020: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x133020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x133024: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x133024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x133028: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x133028u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13302c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x133030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133034: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x133034u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x133038: 0x3e00008  jr          $ra
    ctx->pc = 0x133038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133040u;
}
