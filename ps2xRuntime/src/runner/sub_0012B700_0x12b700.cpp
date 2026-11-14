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

// Function: sub_0012B700
// Address: 0x12b700 - 0x12b750
void sub_0012B700_0x12b700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B700_0x12b700");
#endif

    switch (ctx->pc) {
        case 0x12b730u: goto label_12b730;
        default: break;
    }

    ctx->pc = 0x12b700u;

    // 0x12b700: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b70c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12b70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12b710: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12b710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x12b714: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x12b714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x12b718: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x12b718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b71c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12b71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b720: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x12b720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b724: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b728: 0xc04add4  jal         func_12B750
    ctx->pc = 0x12B728u;
    SET_GPR_U32(ctx, 31, 0x12B730u);
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x12B728u, 0x12B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B730u;
label_12b730:
    // 0x12b730: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12b730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b734: 0xac500134  sw          $s0, 0x134($v0)
    ctx->pc = 0x12b734u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 16));
    // 0x12b738: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12b738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b744: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12b744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b748: 0x3e00008  jr          $ra
    ctx->pc = 0x12B748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B750u;
}
