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

// Function: sub_00115D40
// Address: 0x115d40 - 0x115da0
void sub_00115D40_0x115d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115D40_0x115d40");
#endif

    switch (ctx->pc) {
        case 0x115d60u: goto label_115d60;
        case 0x115d70u: goto label_115d70;
        case 0x115d88u: goto label_115d88;
        default: break;
    }

    ctx->pc = 0x115d40u;

    // 0x115d40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x115d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x115d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115d48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x115d4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x115d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x115d50: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x115d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x115d54: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x115d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d58: 0xc0450c0  jal         func_114300
    ctx->pc = 0x115D58u;
    SET_GPR_U32(ctx, 31, 0x115D60u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x115D58u, 0x115D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D60u;
label_115d60:
    // 0x115d60: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x115d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x115d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115d68: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x115D68u;
    SET_GPR_U32(ctx, 31, 0x115D70u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x115D68u, 0x115D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D70u;
label_115d70:
    // 0x115d70: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x115d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115d74: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115d74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x115d78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115d7c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x115d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x115d80: 0xc0450c0  jal         func_114300
    ctx->pc = 0x115D80u;
    SET_GPR_U32(ctx, 31, 0x115D88u);
    ctx->pc = 0x114300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114300u, 0x115D80u, 0x115D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115D88u;
label_115d88:
    // 0x115d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115d8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x115d8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x115d90: 0x3e00008  jr          $ra
    ctx->pc = 0x115D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115D98u;
    // 0x115d98: 0x0  nop
    ctx->pc = 0x115d98u;
    // NOP
    // 0x115d9c: 0x0  nop
    ctx->pc = 0x115d9cu;
    // NOP
    ctx->pc = 0x115da0u;
}
