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

// Function: sub_00234400
// Address: 0x234400 - 0x234440
void sub_00234400_0x234400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234400_0x234400");
#endif

    switch (ctx->pc) {
        case 0x234428u: goto label_234428;
        default: break;
    }

    ctx->pc = 0x234400u;

    // 0x234400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x234400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x234404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x234408: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x234408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x23440c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x23440cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x234410: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x234410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x234414: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x234414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234418: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x234418u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23441c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x23441cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x234420: 0xc08d110  jal         func_234440
    ctx->pc = 0x234420u;
    SET_GPR_U32(ctx, 31, 0x234428u);
    ctx->pc = 0x234440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234440u, 0x234420u, 0x234428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234428u;
label_234428:
    // 0x234428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23442c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x23442cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x234430: 0x3e00008  jr          $ra
    ctx->pc = 0x234430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234438u;
    // 0x234438: 0x0  nop
    ctx->pc = 0x234438u;
    // NOP
    // 0x23443c: 0x0  nop
    ctx->pc = 0x23443cu;
    // NOP
    ctx->pc = 0x234440u;
}
