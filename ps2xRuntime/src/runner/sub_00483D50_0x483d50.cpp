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

// Function: sub_00483D50
// Address: 0x483d50 - 0x483dc0
void sub_00483D50_0x483d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483D50_0x483d50");
#endif

    switch (ctx->pc) {
        case 0x483d6cu: goto label_483d6c;
        default: break;
    }

    ctx->pc = 0x483d50u;

    // 0x483d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x483d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x483d54: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x483d58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x483d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x483d5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x483d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x483d60: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x483d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x483d64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x483D64u;
    {
        const bool branch_taken_0x483d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483d64) {
            ctx->pc = 0x483D94u;
            goto label_483d94;
        }
    }
    ctx->pc = 0x483D6Cu;
label_483d6c:
    // 0x483d6c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x483d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483d70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x483d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483d74: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483d78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x483d78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x483d7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483d80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x483d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x483d84: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x483d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x483d88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483d8c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x483d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x483d90: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x483d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_483d94:
    // 0x483d94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x483d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483d98: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x483D98u;
    {
        const bool branch_taken_0x483d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483d98) {
            ctx->pc = 0x483D6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483d6c;
        }
    }
    ctx->pc = 0x483DA0u;
    // 0x483da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x483da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483da4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483da4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483da8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x483da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x483dac: 0x3e00008  jr          $ra
    ctx->pc = 0x483DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483DB4u;
    // 0x483db4: 0x0  nop
    ctx->pc = 0x483db4u;
    // NOP
    // 0x483db8: 0x0  nop
    ctx->pc = 0x483db8u;
    // NOP
    // 0x483dbc: 0x0  nop
    ctx->pc = 0x483dbcu;
    // NOP
    ctx->pc = 0x483dc0u;
}
