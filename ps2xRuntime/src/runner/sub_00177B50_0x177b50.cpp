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

// Function: sub_00177B50
// Address: 0x177b50 - 0x177b90
void sub_00177B50_0x177b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177B50_0x177b50");
#endif

    switch (ctx->pc) {
        case 0x177b6cu: goto label_177b6c;
        default: break;
    }

    ctx->pc = 0x177b50u;

    // 0x177b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x177b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x177b5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x177b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x177b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x177b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177b64: 0xc05dee4  jal         func_177B90
    ctx->pc = 0x177B64u;
    SET_GPR_U32(ctx, 31, 0x177B6Cu);
    ctx->pc = 0x177B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B90u, 0x177B64u, 0x177B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177B6Cu;
label_177b6c:
    // 0x177b6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x177b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177b70: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x177b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x177b74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x177b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x177b78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x177b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x177b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x177b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x177b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177b84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x177b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x177b88: 0x3e00008  jr          $ra
    ctx->pc = 0x177B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177B90u;
}
