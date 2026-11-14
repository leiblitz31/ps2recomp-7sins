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

// Function: sub_00214D70
// Address: 0x214d70 - 0x214db0
void sub_00214D70_0x214d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214D70_0x214d70");
#endif

    switch (ctx->pc) {
        case 0x214d9cu: goto label_214d9c;
        default: break;
    }

    ctx->pc = 0x214d70u;

    // 0x214d70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x214d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x214d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x214d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x214d78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x214d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x214d7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x214d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x214d80: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x214d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x214d84: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x214d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214d88: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x214d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214d8c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x214d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214d90: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x214d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x214d94: 0xc08536c  jal         func_214DB0
    ctx->pc = 0x214D94u;
    SET_GPR_U32(ctx, 31, 0x214D9Cu);
    ctx->pc = 0x214DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214DB0u, 0x214D94u, 0x214D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214D9Cu;
label_214d9c:
    // 0x214d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214da0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214da4: 0x3e00008  jr          $ra
    ctx->pc = 0x214DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214DACu;
    // 0x214dac: 0x0  nop
    ctx->pc = 0x214dacu;
    // NOP
    ctx->pc = 0x214db0u;
}
