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

// Function: sub_002BBD10
// Address: 0x2bbd10 - 0x2bbd50
void sub_002BBD10_0x2bbd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBD10_0x2bbd10");
#endif

    switch (ctx->pc) {
        case 0x2bbd3cu: goto label_2bbd3c;
        default: break;
    }

    ctx->pc = 0x2bbd10u;

    // 0x2bbd10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bbd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bbd14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bbd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bbd18: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2bbd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2bbd1c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2bbd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2bbd20: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2bbd20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2bbd24: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2bbd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbd28: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2bbd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bbd2c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2bbd2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bbd30: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2bbd30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2bbd34: 0xc0aef54  jal         func_2BBD50
    ctx->pc = 0x2BBD34u;
    SET_GPR_U32(ctx, 31, 0x2BBD3Cu);
    ctx->pc = 0x2BBD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBD50u, 0x2BBD34u, 0x2BBD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBD3Cu;
label_2bbd3c:
    // 0x2bbd3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bbd3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbd40: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2bbd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bbd44: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBD44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBD44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBD4Cu;
    // 0x2bbd4c: 0x0  nop
    ctx->pc = 0x2bbd4cu;
    // NOP
    ctx->pc = 0x2bbd50u;
}
