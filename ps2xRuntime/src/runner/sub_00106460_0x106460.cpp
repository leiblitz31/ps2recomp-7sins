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

// Function: sub_00106460
// Address: 0x106460 - 0x1064d0
void sub_00106460_0x106460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106460_0x106460");
#endif

    switch (ctx->pc) {
        case 0x10647cu: goto label_10647c;
        default: break;
    }

    ctx->pc = 0x106460u;

    // 0x106460: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x106460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x106464: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x106464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x106468: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x106468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10646c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x106470: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x106470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x106474: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x106474u;
    {
        const bool branch_taken_0x106474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x106474) {
            ctx->pc = 0x1064A4u;
            goto label_1064a4;
        }
    }
    ctx->pc = 0x10647Cu;
label_10647c:
    // 0x10647c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106480: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x106484: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106488: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x106488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10648c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106490: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106494: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x106494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x106498: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x106498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10649c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x10649cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1064a0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1064a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1064a4:
    // 0x1064a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1064a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1064a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1064A8u;
    {
        const bool branch_taken_0x1064a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1064a8) {
            ctx->pc = 0x10647Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10647c;
        }
    }
    ctx->pc = 0x1064B0u;
    // 0x1064b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1064b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1064b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1064b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1064b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1064b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1064bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1064BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1064BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1064C4u;
    // 0x1064c4: 0x0  nop
    ctx->pc = 0x1064c4u;
    // NOP
    // 0x1064c8: 0x0  nop
    ctx->pc = 0x1064c8u;
    // NOP
    // 0x1064cc: 0x0  nop
    ctx->pc = 0x1064ccu;
    // NOP
    ctx->pc = 0x1064d0u;
}
