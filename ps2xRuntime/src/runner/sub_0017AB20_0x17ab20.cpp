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

// Function: sub_0017AB20
// Address: 0x17ab20 - 0x17ab60
void sub_0017AB20_0x17ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB20_0x17ab20");
#endif

    switch (ctx->pc) {
        case 0x17ab48u: goto label_17ab48;
        default: break;
    }

    ctx->pc = 0x17ab20u;

    // 0x17ab20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17ab24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ab28: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17ab2c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17ab30: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x17ab30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ab34: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ab38: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ab3c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x17ab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x17ab40: 0xc05ead8  jal         func_17AB60
    ctx->pc = 0x17AB40u;
    SET_GPR_U32(ctx, 31, 0x17AB48u);
    ctx->pc = 0x17AB60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AB60u, 0x17AB40u, 0x17AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB48u;
label_17ab48:
    // 0x17ab48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ab4c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x17ab4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x17ab50: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AB58u;
    // 0x17ab58: 0x0  nop
    ctx->pc = 0x17ab58u;
    // NOP
    // 0x17ab5c: 0x0  nop
    ctx->pc = 0x17ab5cu;
    // NOP
    ctx->pc = 0x17ab60u;
}
