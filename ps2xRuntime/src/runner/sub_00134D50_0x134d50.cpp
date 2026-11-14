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

// Function: sub_00134D50
// Address: 0x134d50 - 0x134d90
void sub_00134D50_0x134d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134D50_0x134d50");
#endif

    switch (ctx->pc) {
        case 0x134d6cu: goto label_134d6c;
        default: break;
    }

    ctx->pc = 0x134d50u;

    // 0x134d50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x134d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x134d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x134d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x134d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x134d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x134d60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x134d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134d64: 0xc04d364  jal         func_134D90
    ctx->pc = 0x134D64u;
    SET_GPR_U32(ctx, 31, 0x134D6Cu);
    ctx->pc = 0x134D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D90u, 0x134D64u, 0x134D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134D6Cu;
label_134d6c:
    // 0x134d6c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134d70: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x134d70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x134d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134d7c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x134d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134d80: 0x3e00008  jr          $ra
    ctx->pc = 0x134D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134D88u;
    // 0x134d88: 0x0  nop
    ctx->pc = 0x134d88u;
    // NOP
    // 0x134d8c: 0x0  nop
    ctx->pc = 0x134d8cu;
    // NOP
    ctx->pc = 0x134d90u;
}
