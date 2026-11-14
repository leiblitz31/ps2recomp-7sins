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

// Function: sub_002CC480
// Address: 0x2cc480 - 0x2cc4f0
void sub_002CC480_0x2cc480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC480_0x2cc480");
#endif

    switch (ctx->pc) {
        case 0x2cc49cu: goto label_2cc49c;
        default: break;
    }

    ctx->pc = 0x2cc480u;

    // 0x2cc480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cc480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cc484: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cc488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cc48c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cc48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cc490: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2cc490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2cc494: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CC494u;
    {
        const bool branch_taken_0x2cc494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc494) {
            ctx->pc = 0x2CC4C4u;
            goto label_2cc4c4;
        }
    }
    ctx->pc = 0x2CC49Cu;
label_2cc49c:
    // 0x2cc49c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2cc49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc4a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cc4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cc4a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc4a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2cc4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2cc4ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc4b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2cc4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2cc4b4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2cc4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2cc4b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc4bc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2cc4bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2cc4c0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2cc4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2cc4c4:
    // 0x2cc4c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cc4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc4c8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CC4C8u;
    {
        const bool branch_taken_0x2cc4c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cc4c8) {
            ctx->pc = 0x2CC49Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cc49c;
        }
    }
    ctx->pc = 0x2CC4D0u;
    // 0x2cc4d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cc4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc4d8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2cc4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cc4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC4E4u;
    // 0x2cc4e4: 0x0  nop
    ctx->pc = 0x2cc4e4u;
    // NOP
    // 0x2cc4e8: 0x0  nop
    ctx->pc = 0x2cc4e8u;
    // NOP
    // 0x2cc4ec: 0x0  nop
    ctx->pc = 0x2cc4ecu;
    // NOP
    ctx->pc = 0x2cc4f0u;
}
