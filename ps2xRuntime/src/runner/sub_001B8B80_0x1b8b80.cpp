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

// Function: sub_001B8B80
// Address: 0x1b8b80 - 0x1b8c00
void sub_001B8B80_0x1b8b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8B80_0x1b8b80");
#endif

    switch (ctx->pc) {
        case 0x1b8bb8u: goto label_1b8bb8;
        case 0x1b8bd8u: goto label_1b8bd8;
        default: break;
    }

    ctx->pc = 0x1b8b80u;

    // 0x1b8b80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b8b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b8b84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b8b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b8b88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b8b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b8b8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1b8b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1b8b90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b8b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b8b94: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1b8b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1b8b98: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1b8b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8b9c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1b8b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8ba0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b8ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8ba4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b8ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b8ba8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1b8ba8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b8bac: 0x8012  mflo        $s0
    ctx->pc = 0x1b8bacu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1b8bb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1B8BB0u;
    {
        const bool branch_taken_0x1b8bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8bb0) {
            ctx->pc = 0x1B8BDCu;
            goto label_1b8bdc;
        }
    }
    ctx->pc = 0x1B8BB8u;
label_1b8bb8:
    // 0x1b8bb8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8bbc: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x1b8bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1b8bc0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1b8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1b8bc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1b8bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8bc8: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x1b8bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1b8bcc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1b8bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1b8bd0: 0xc06c88c  jal         func_1B2230
    ctx->pc = 0x1B8BD0u;
    SET_GPR_U32(ctx, 31, 0x1B8BD8u);
    ctx->pc = 0x1B2230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2230u, 0x1B8BD0u, 0x1B8BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8BD8u;
label_1b8bd8:
    // 0x1b8bd8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1b8bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1b8bdc:
    // 0x1b8bdc: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B8BDCu;
    {
        const bool branch_taken_0x1b8bdc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1b8bdc) {
            ctx->pc = 0x1B8BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8bb8;
        }
    }
    ctx->pc = 0x1B8BE4u;
    // 0x1b8be4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1b8be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8be8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b8be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8bec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b8becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8bf0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1b8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b8bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8BFCu;
    // 0x1b8bfc: 0x0  nop
    ctx->pc = 0x1b8bfcu;
    // NOP
    ctx->pc = 0x1b8c00u;
}
