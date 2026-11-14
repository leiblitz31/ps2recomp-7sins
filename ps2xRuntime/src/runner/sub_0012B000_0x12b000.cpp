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

// Function: sub_0012B000
// Address: 0x12b000 - 0x12b040
void sub_0012B000_0x12b000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B000_0x12b000");
#endif

    switch (ctx->pc) {
        case 0x12b028u: goto label_12b028;
        default: break;
    }

    ctx->pc = 0x12b000u;

    // 0x12b000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b008: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b00c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12b010: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x12b010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x12b014: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x12b014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b018: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12b018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b01c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x12b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x12b020: 0xc04ac10  jal         func_12B040
    ctx->pc = 0x12B020u;
    SET_GPR_U32(ctx, 31, 0x12B028u);
    ctx->pc = 0x12B040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B040u, 0x12B020u, 0x12B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B028u;
label_12b028:
    // 0x12b028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b02c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12b02cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b030: 0x3e00008  jr          $ra
    ctx->pc = 0x12B030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B038u;
    // 0x12b038: 0x0  nop
    ctx->pc = 0x12b038u;
    // NOP
    // 0x12b03c: 0x0  nop
    ctx->pc = 0x12b03cu;
    // NOP
    ctx->pc = 0x12b040u;
}
