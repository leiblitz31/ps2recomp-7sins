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

// Function: sub_002B1110
// Address: 0x2b1110 - 0x2b1160
void sub_002B1110_0x2b1110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B1110_0x2b1110");
#endif

    switch (ctx->pc) {
        case 0x2b1130u: goto label_2b1130;
        case 0x2b1148u: goto label_2b1148;
        default: break;
    }

    ctx->pc = 0x2b1110u;

    // 0x2b1110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b1110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2b1114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b1114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b1118: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b1118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b111c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b111cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b1120: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b1120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b1124: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2b1124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b1128: 0xc0ac480  jal         func_2B1200
    ctx->pc = 0x2B1128u;
    SET_GPR_U32(ctx, 31, 0x2B1130u);
    ctx->pc = 0x2B1200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1200u, 0x2B1128u, 0x2B1130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1130u;
label_2b1130:
    // 0x2b1130: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b1130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1134: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b1134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1138: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b113c: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b113cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b1140: 0xc0ac458  jal         func_2B1160
    ctx->pc = 0x2B1140u;
    SET_GPR_U32(ctx, 31, 0x2B1148u);
    ctx->pc = 0x2B1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1160u, 0x2B1140u, 0x2B1148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1148u;
label_2b1148:
    // 0x2b1148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b1148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b114c: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b114cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2b1150: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B1158u;
    // 0x2b1158: 0x0  nop
    ctx->pc = 0x2b1158u;
    // NOP
    // 0x2b115c: 0x0  nop
    ctx->pc = 0x2b115cu;
    // NOP
    ctx->pc = 0x2b1160u;
}
