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

// Function: sub_00482880
// Address: 0x482880 - 0x4828c0
void sub_00482880_0x482880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482880_0x482880");
#endif

    switch (ctx->pc) {
        case 0x4828a8u: goto label_4828a8;
        default: break;
    }

    ctx->pc = 0x482880u;

    // 0x482880: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x482880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x482884: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482888: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x482888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48288c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48288cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x482890: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x482890u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x482894: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x482894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482898: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x482898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48289c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x48289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x4828a0: 0xc120a30  jal         func_4828C0
    ctx->pc = 0x4828A0u;
    SET_GPR_U32(ctx, 31, 0x4828A8u);
    ctx->pc = 0x4828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4828C0u, 0x4828A0u, 0x4828A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4828A8u;
label_4828a8:
    // 0x4828a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4828a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4828ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4828acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4828b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4828B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4828B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4828B8u;
    // 0x4828b8: 0x0  nop
    ctx->pc = 0x4828b8u;
    // NOP
    // 0x4828bc: 0x0  nop
    ctx->pc = 0x4828bcu;
    // NOP
    ctx->pc = 0x4828c0u;
}
