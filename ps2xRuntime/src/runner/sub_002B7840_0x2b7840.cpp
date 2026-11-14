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

// Function: sub_002B7840
// Address: 0x2b7840 - 0x2b78d0
void sub_002B7840_0x2b7840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7840_0x2b7840");
#endif

    switch (ctx->pc) {
        case 0x2b7878u: goto label_2b7878;
        case 0x2b7888u: goto label_2b7888;
        default: break;
    }

    ctx->pc = 0x2b7840u;

    // 0x2b7840: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2b7840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2b7844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b7848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b784c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b784cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b7850: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b7850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b7854: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2b7854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2b7858: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2b7858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b785c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b785cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7860: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b7860u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7864: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x2b7864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x2b7868: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2b7868u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b786c: 0x8012  mflo        $s0
    ctx->pc = 0x2b786cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b7870: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B7870u;
    {
        const bool branch_taken_0x2b7870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7870) {
            ctx->pc = 0x2B78A4u;
            goto label_2b78a4;
        }
    }
    ctx->pc = 0x2B7878u;
label_2b7878:
    // 0x2b7878: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2b7878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b787c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2b787cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7880: 0xc0ade34  jal         func_2B78D0
    ctx->pc = 0x2B7880u;
    SET_GPR_U32(ctx, 31, 0x2B7888u);
    ctx->pc = 0x2B78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B78D0u, 0x2B7880u, 0x2B7888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7888u;
label_2b7888:
    // 0x2b7888: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b788c: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x2b788cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2b7890: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b7890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2b7894: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b7894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b7898: 0x24420054  addiu       $v0, $v0, 0x54
    ctx->pc = 0x2b7898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 84));
    // 0x2b789c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b789cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2b78a0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2b78a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2b78a4:
    // 0x2b78a4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B78A4u;
    {
        const bool branch_taken_0x2b78a4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2b78a4) {
            ctx->pc = 0x2B7878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7878;
        }
    }
    ctx->pc = 0x2B78ACu;
    // 0x2b78ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b78acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b78b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b78b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b78b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b78b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b78b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2b78b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2b78bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B78BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B78BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B78C4u;
    // 0x2b78c4: 0x0  nop
    ctx->pc = 0x2b78c4u;
    // NOP
    // 0x2b78c8: 0x0  nop
    ctx->pc = 0x2b78c8u;
    // NOP
    // 0x2b78cc: 0x0  nop
    ctx->pc = 0x2b78ccu;
    // NOP
    ctx->pc = 0x2b78d0u;
}
