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

// Function: sub_00292C10
// Address: 0x292c10 - 0x292c50
void sub_00292C10_0x292c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C10_0x292c10");
#endif

    switch (ctx->pc) {
        case 0x292c40u: goto label_292c40;
        default: break;
    }

    ctx->pc = 0x292c10u;

    // 0x292c10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x292c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x292c1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x292c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x292c20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x292c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x292c24: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x292c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x292c28: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x292c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292c2c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x292c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292c30: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x292c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292c34: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292c38: 0xc0a4e4c  jal         func_293930
    ctx->pc = 0x292C38u;
    SET_GPR_U32(ctx, 31, 0x292C40u);
    ctx->pc = 0x293930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293930u, 0x292C38u, 0x292C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292C40u;
label_292c40:
    // 0x292c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292c44: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x292c44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x292c48: 0x3e00008  jr          $ra
    ctx->pc = 0x292C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292C50u;
}
