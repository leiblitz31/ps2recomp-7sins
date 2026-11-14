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

// Function: sub_00278CC0
// Address: 0x278cc0 - 0x278d00
void sub_00278CC0_0x278cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278CC0_0x278cc0");
#endif

    switch (ctx->pc) {
        case 0x278ce8u: goto label_278ce8;
        default: break;
    }

    ctx->pc = 0x278cc0u;

    // 0x278cc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x278cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x278cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278cc8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x278cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x278ccc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x278cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x278cd0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x278cd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x278cd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x278cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278cd8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x278cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278cdc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x278cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x278ce0: 0xc09e340  jal         func_278D00
    ctx->pc = 0x278CE0u;
    SET_GPR_U32(ctx, 31, 0x278CE8u);
    ctx->pc = 0x278D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278D00u, 0x278CE0u, 0x278CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278CE8u;
label_278ce8:
    // 0x278ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278cec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x278cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x278cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x278CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278CF8u;
    // 0x278cf8: 0x0  nop
    ctx->pc = 0x278cf8u;
    // NOP
    // 0x278cfc: 0x0  nop
    ctx->pc = 0x278cfcu;
    // NOP
    ctx->pc = 0x278d00u;
}
