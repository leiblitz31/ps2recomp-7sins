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

// Function: sub_00450C70
// Address: 0x450c70 - 0x450ce0
void sub_00450C70_0x450c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450C70_0x450c70");
#endif

    switch (ctx->pc) {
        case 0x450c8cu: goto label_450c8c;
        default: break;
    }

    ctx->pc = 0x450c70u;

    // 0x450c70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x450c74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x450c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x450c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x450c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x450c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x450c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x450c80: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x450c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x450c84: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x450C84u;
    {
        const bool branch_taken_0x450c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x450c84) {
            ctx->pc = 0x450CB4u;
            goto label_450cb4;
        }
    }
    ctx->pc = 0x450C8Cu;
label_450c8c:
    // 0x450c8c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x450c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450c90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x450c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x450c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450c98: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x450c98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x450c9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450ca0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x450ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x450ca4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x450ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x450ca8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450cac: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x450cacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x450cb0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x450cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_450cb4:
    // 0x450cb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x450cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450cb8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x450CB8u;
    {
        const bool branch_taken_0x450cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x450cb8) {
            ctx->pc = 0x450C8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_450c8c;
        }
    }
    ctx->pc = 0x450CC0u;
    // 0x450cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x450cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x450cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450cc8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x450cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x450ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x450CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450CD4u;
    // 0x450cd4: 0x0  nop
    ctx->pc = 0x450cd4u;
    // NOP
    // 0x450cd8: 0x0  nop
    ctx->pc = 0x450cd8u;
    // NOP
    // 0x450cdc: 0x0  nop
    ctx->pc = 0x450cdcu;
    // NOP
    ctx->pc = 0x450ce0u;
}
