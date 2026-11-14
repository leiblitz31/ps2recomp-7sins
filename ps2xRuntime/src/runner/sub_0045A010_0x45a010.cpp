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

// Function: sub_0045A010
// Address: 0x45a010 - 0x45a080
void sub_0045A010_0x45a010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045A010_0x45a010");
#endif

    switch (ctx->pc) {
        case 0x45a02cu: goto label_45a02c;
        default: break;
    }

    ctx->pc = 0x45a010u;

    // 0x45a010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x45a010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x45a014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45a018: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x45a018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x45a01c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x45a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x45a020: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x45a020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x45a024: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x45A024u;
    {
        const bool branch_taken_0x45a024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a024) {
            ctx->pc = 0x45A054u;
            goto label_45a054;
        }
    }
    ctx->pc = 0x45A02Cu;
label_45a02c:
    // 0x45a02c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x45a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45a030: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x45a030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45a034: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a038: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45a03c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a040: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x45a044: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x45a044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x45a048: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45a048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a04c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x45a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45a050: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x45a050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_45a054:
    // 0x45a054: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45a058: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x45A058u;
    {
        const bool branch_taken_0x45a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45a058) {
            ctx->pc = 0x45A02Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45a02c;
        }
    }
    ctx->pc = 0x45A060u;
    // 0x45a060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x45a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45a064: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45a068: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x45a068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x45a06c: 0x3e00008  jr          $ra
    ctx->pc = 0x45A06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45A06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45A074u;
    // 0x45a074: 0x0  nop
    ctx->pc = 0x45a074u;
    // NOP
    // 0x45a078: 0x0  nop
    ctx->pc = 0x45a078u;
    // NOP
    // 0x45a07c: 0x0  nop
    ctx->pc = 0x45a07cu;
    // NOP
    ctx->pc = 0x45a080u;
}
