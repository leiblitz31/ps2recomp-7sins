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

// Function: sub_00291870
// Address: 0x291870 - 0x2918b0
void sub_00291870_0x291870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291870_0x291870");
#endif

    switch (ctx->pc) {
        case 0x29189cu: goto label_29189c;
        default: break;
    }

    ctx->pc = 0x291870u;

    // 0x291870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x291870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x291874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x291878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29187c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29187cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x291880: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x291880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x291884: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x291884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291888: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x291888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29188c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x29188cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291890: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x291890u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x291894: 0xc0a462c  jal         func_2918B0
    ctx->pc = 0x291894u;
    SET_GPR_U32(ctx, 31, 0x29189Cu);
    ctx->pc = 0x2918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2918B0u, 0x291894u, 0x29189Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29189Cu;
label_29189c:
    // 0x29189c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29189cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2918a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2918a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2918a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2918A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2918A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2918ACu;
    // 0x2918ac: 0x0  nop
    ctx->pc = 0x2918acu;
    // NOP
    ctx->pc = 0x2918b0u;
}
