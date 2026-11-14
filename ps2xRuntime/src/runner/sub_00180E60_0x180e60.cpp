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

// Function: sub_00180E60
// Address: 0x180e60 - 0x180ea0
void sub_00180E60_0x180e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E60_0x180e60");
#endif

    switch (ctx->pc) {
        case 0x180e88u: goto label_180e88;
        default: break;
    }

    ctx->pc = 0x180e60u;

    // 0x180e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x180e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x180e64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180e68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x180e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x180e6c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x180e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x180e70: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x180e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x180e74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x180e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e78: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x180e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180e7c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x180e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180e80: 0xc06036c  jal         func_180DB0
    ctx->pc = 0x180E80u;
    SET_GPR_U32(ctx, 31, 0x180E88u);
    ctx->pc = 0x180DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180DB0u, 0x180E80u, 0x180E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180E88u;
label_180e88:
    // 0x180e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x180e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x180e90: 0x3e00008  jr          $ra
    ctx->pc = 0x180E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180E98u;
    // 0x180e98: 0x0  nop
    ctx->pc = 0x180e98u;
    // NOP
    // 0x180e9c: 0x0  nop
    ctx->pc = 0x180e9cu;
    // NOP
    ctx->pc = 0x180ea0u;
}
