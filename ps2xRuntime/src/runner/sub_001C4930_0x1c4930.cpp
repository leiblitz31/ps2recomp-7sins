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

// Function: sub_001C4930
// Address: 0x1c4930 - 0x1c49b0
void sub_001C4930_0x1c4930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4930_0x1c4930");
#endif

    switch (ctx->pc) {
        case 0x1c4968u: goto label_1c4968;
        case 0x1c4988u: goto label_1c4988;
        default: break;
    }

    ctx->pc = 0x1c4930u;

    // 0x1c4930: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c4930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c4934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c493c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1c493cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1c4940: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c4940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4944: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1c4944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1c4948: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1c4948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c494c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1c494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4950: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c4950u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4954: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1c4954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1c4958: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1c4958u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1c495c: 0x8012  mflo        $s0
    ctx->pc = 0x1c495cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1c4960: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C4960u;
    {
        const bool branch_taken_0x1c4960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4960) {
            ctx->pc = 0x1C498Cu;
            goto label_1c498c;
        }
    }
    ctx->pc = 0x1C4968u;
label_1c4968:
    // 0x1c4968: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c4968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c496c: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x1c496cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1c4970: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1c4970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1c4974: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4978: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x1c4978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1c497c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4980: 0xc06e8a8  jal         func_1BA2A0
    ctx->pc = 0x1C4980u;
    SET_GPR_U32(ctx, 31, 0x1C4988u);
    ctx->pc = 0x1BA2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA2A0u, 0x1C4980u, 0x1C4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4988u;
label_1c4988:
    // 0x1c4988: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c4988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c498c:
    // 0x1c498c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1C498Cu;
    {
        const bool branch_taken_0x1c498c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1c498c) {
            ctx->pc = 0x1C4968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c4968;
        }
    }
    ctx->pc = 0x1C4994u;
    // 0x1c4994: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1c4994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4998: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c499c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c499cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c49a0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1c49a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1c49a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C49A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C49A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C49ACu;
    // 0x1c49ac: 0x0  nop
    ctx->pc = 0x1c49acu;
    // NOP
    ctx->pc = 0x1c49b0u;
}
