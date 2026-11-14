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

// Function: sub_002B03E0
// Address: 0x2b03e0 - 0x2b0450
void sub_002B03E0_0x2b03e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B03E0_0x2b03e0");
#endif

    switch (ctx->pc) {
        case 0x2b03fcu: goto label_2b03fc;
        default: break;
    }

    ctx->pc = 0x2b03e0u;

    // 0x2b03e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b03e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b03e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b03e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b03e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b03e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b03ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2b03ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2b03f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2b03f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2b03f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B03F4u;
    {
        const bool branch_taken_0x2b03f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b03f4) {
            ctx->pc = 0x2B0424u;
            goto label_2b0424;
        }
    }
    ctx->pc = 0x2B03FCu;
label_2b03fc:
    // 0x2b03fc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2b03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b0400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b0404: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0408: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2b0408u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2b040c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0410: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2b0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2b0414: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b0414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b0418: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b041c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2b041cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b0420: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2b0420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2b0424:
    // 0x2b0424: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b0424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0428: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B0428u;
    {
        const bool branch_taken_0x2b0428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0428) {
            ctx->pc = 0x2B03FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b03fc;
        }
    }
    ctx->pc = 0x2B0430u;
    // 0x2b0430: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b0430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b0434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0438: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b0438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b043c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B043Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B043Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0444u;
    // 0x2b0444: 0x0  nop
    ctx->pc = 0x2b0444u;
    // NOP
    // 0x2b0448: 0x0  nop
    ctx->pc = 0x2b0448u;
    // NOP
    // 0x2b044c: 0x0  nop
    ctx->pc = 0x2b044cu;
    // NOP
    ctx->pc = 0x2b0450u;
}
