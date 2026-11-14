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

// Function: sub_00189A40
// Address: 0x189a40 - 0x189ad0
void sub_00189A40_0x189a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189A40_0x189a40");
#endif

    switch (ctx->pc) {
        case 0x189a78u: goto label_189a78;
        case 0x189a88u: goto label_189a88;
        default: break;
    }

    ctx->pc = 0x189a40u;

    // 0x189a40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x189a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x189a44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x189a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x189a48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x189a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x189a4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x189a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x189a50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x189a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x189a54: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x189a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x189a58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x189a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189a5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x189a60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x189a64: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x189a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x189a68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x189a68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x189a6c: 0x8012  mflo        $s0
    ctx->pc = 0x189a6cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x189a70: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x189A70u;
    {
        const bool branch_taken_0x189a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189a70) {
            ctx->pc = 0x189AA4u;
            goto label_189aa4;
        }
    }
    ctx->pc = 0x189A78u;
label_189a78:
    // 0x189a78: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x189a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189a7c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x189a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a80: 0xc0626b4  jal         func_189AD0
    ctx->pc = 0x189A80u;
    SET_GPR_U32(ctx, 31, 0x189A88u);
    ctx->pc = 0x189AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189AD0u, 0x189A80u, 0x189A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189A88u;
label_189a88:
    // 0x189a88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189a8c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x189a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x189a90: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x189a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x189a94: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x189a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189a98: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x189a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x189a9c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x189a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x189aa0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x189aa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_189aa4:
    // 0x189aa4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x189AA4u;
    {
        const bool branch_taken_0x189aa4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x189aa4) {
            ctx->pc = 0x189A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_189a78;
        }
    }
    ctx->pc = 0x189AACu;
    // 0x189aac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x189aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x189ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x189ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x189ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189ab8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x189ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x189abc: 0x3e00008  jr          $ra
    ctx->pc = 0x189ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189AC4u;
    // 0x189ac4: 0x0  nop
    ctx->pc = 0x189ac4u;
    // NOP
    // 0x189ac8: 0x0  nop
    ctx->pc = 0x189ac8u;
    // NOP
    // 0x189acc: 0x0  nop
    ctx->pc = 0x189accu;
    // NOP
    ctx->pc = 0x189ad0u;
}
