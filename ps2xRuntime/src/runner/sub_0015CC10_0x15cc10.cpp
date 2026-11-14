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

// Function: sub_0015CC10
// Address: 0x15cc10 - 0x15cca0
void sub_0015CC10_0x15cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CC10_0x15cc10");
#endif

    switch (ctx->pc) {
        case 0x15cc48u: goto label_15cc48;
        case 0x15cc58u: goto label_15cc58;
        default: break;
    }

    ctx->pc = 0x15cc10u;

    // 0x15cc10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15cc14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15cc18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15cc1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x15cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15cc20: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x15cc24: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x15cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x15cc28: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x15cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15cc2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cc30: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15cc34: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15cc38: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x15cc38u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15cc3c: 0x8012  mflo        $s0
    ctx->pc = 0x15cc3cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x15cc40: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15CC40u;
    {
        const bool branch_taken_0x15cc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cc40) {
            ctx->pc = 0x15CC74u;
            goto label_15cc74;
        }
    }
    ctx->pc = 0x15CC48u;
label_15cc48:
    // 0x15cc48: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x15cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cc4c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cc50: 0xc057328  jal         func_15CCA0
    ctx->pc = 0x15CC50u;
    SET_GPR_U32(ctx, 31, 0x15CC58u);
    ctx->pc = 0x15CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CCA0u, 0x15CC50u, 0x15CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CC58u;
label_15cc58:
    // 0x15cc58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15cc5c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15cc60: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x15cc60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x15cc64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cc68: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x15cc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15cc6c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x15cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x15cc70: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x15cc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_15cc74:
    // 0x15cc74: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15CC74u;
    {
        const bool branch_taken_0x15cc74 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x15cc74) {
            ctx->pc = 0x15CC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cc48;
        }
    }
    ctx->pc = 0x15CC7Cu;
    // 0x15cc7c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x15cc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15cc80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15cc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15cc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cc88: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x15cc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x15cc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x15CC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CC94u;
    // 0x15cc94: 0x0  nop
    ctx->pc = 0x15cc94u;
    // NOP
    // 0x15cc98: 0x0  nop
    ctx->pc = 0x15cc98u;
    // NOP
    // 0x15cc9c: 0x0  nop
    ctx->pc = 0x15cc9cu;
    // NOP
    ctx->pc = 0x15cca0u;
}
