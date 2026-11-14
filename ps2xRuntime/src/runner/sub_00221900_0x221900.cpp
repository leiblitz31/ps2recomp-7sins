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

// Function: sub_00221900
// Address: 0x221900 - 0x221940
void sub_00221900_0x221900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221900_0x221900");
#endif

    switch (ctx->pc) {
        case 0x221928u: goto label_221928;
        default: break;
    }

    ctx->pc = 0x221900u;

    // 0x221900: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221908: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x221908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x22190c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x22190cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x221910: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x221910u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x221914: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x221914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221918: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x221918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22191c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x22191cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x221920: 0xc088650  jal         func_221940
    ctx->pc = 0x221920u;
    SET_GPR_U32(ctx, 31, 0x221928u);
    ctx->pc = 0x221940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221940u, 0x221920u, 0x221928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x221928u;
label_221928:
    // 0x221928: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22192c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x22192cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x221930: 0x3e00008  jr          $ra
    ctx->pc = 0x221930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221938u;
    // 0x221938: 0x0  nop
    ctx->pc = 0x221938u;
    // NOP
    // 0x22193c: 0x0  nop
    ctx->pc = 0x22193cu;
    // NOP
    ctx->pc = 0x221940u;
}
