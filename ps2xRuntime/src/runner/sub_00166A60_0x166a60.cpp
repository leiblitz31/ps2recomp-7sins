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

// Function: sub_00166A60
// Address: 0x166a60 - 0x166af0
void sub_00166A60_0x166a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166A60_0x166a60");
#endif

    switch (ctx->pc) {
        case 0x166a98u: goto label_166a98;
        case 0x166aa8u: goto label_166aa8;
        default: break;
    }

    ctx->pc = 0x166a60u;

    // 0x166a60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x166a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166a68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x166a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x166a6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x166a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x166a70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x166a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x166a74: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x166a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x166a78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x166a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166a7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x166a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166a80: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x166a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x166a84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x166a88: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x166a88u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x166a8c: 0x8012  mflo        $s0
    ctx->pc = 0x166a8cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x166a90: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x166A90u;
    {
        const bool branch_taken_0x166a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x166a90) {
            ctx->pc = 0x166AC4u;
            goto label_166ac4;
        }
    }
    ctx->pc = 0x166A98u;
label_166a98:
    // 0x166a98: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x166a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166a9c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x166a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166aa0: 0xc059abc  jal         func_166AF0
    ctx->pc = 0x166AA0u;
    SET_GPR_U32(ctx, 31, 0x166AA8u);
    ctx->pc = 0x166AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF0u, 0x166AA0u, 0x166AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166AA8u;
label_166aa8:
    // 0x166aa8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x166aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166aac: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x166aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x166ab0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x166ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x166ab4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166ab8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x166ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x166abc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x166abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x166ac0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x166ac0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_166ac4:
    // 0x166ac4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x166AC4u;
    {
        const bool branch_taken_0x166ac4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x166ac4) {
            ctx->pc = 0x166A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166a98;
        }
    }
    ctx->pc = 0x166ACCu;
    // 0x166acc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x166accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166ad0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166ad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x166ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166ad8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x166ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x166adc: 0x3e00008  jr          $ra
    ctx->pc = 0x166ADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166ADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166AE4u;
    // 0x166ae4: 0x0  nop
    ctx->pc = 0x166ae4u;
    // NOP
    // 0x166ae8: 0x0  nop
    ctx->pc = 0x166ae8u;
    // NOP
    // 0x166aec: 0x0  nop
    ctx->pc = 0x166aecu;
    // NOP
    ctx->pc = 0x166af0u;
}
