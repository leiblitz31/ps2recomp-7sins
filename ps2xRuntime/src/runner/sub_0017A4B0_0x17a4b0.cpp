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

// Function: sub_0017A4B0
// Address: 0x17a4b0 - 0x17a530
void sub_0017A4B0_0x17a4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A4B0_0x17a4b0");
#endif

    switch (ctx->pc) {
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a508u: goto label_17a508;
        default: break;
    }

    ctx->pc = 0x17a4b0u;

    // 0x17a4b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a4b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17a4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17a4b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a4bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17a4c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17a4c4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x17a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x17a4c8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a4cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a4d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a4d4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x17a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x17a4d8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x17a4d8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x17a4dc: 0x8012  mflo        $s0
    ctx->pc = 0x17a4dcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x17a4e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A4E0u;
    {
        const bool branch_taken_0x17a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4e0) {
            ctx->pc = 0x17A50Cu;
            goto label_17a50c;
        }
    }
    ctx->pc = 0x17A4E8u;
label_17a4e8:
    // 0x17a4e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a4ec: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x17a4f0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x17a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x17a4f4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a4f8: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x17a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x17a4fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17a500: 0xc0477e8  jal         func_11DFA0
    ctx->pc = 0x17A500u;
    SET_GPR_U32(ctx, 31, 0x17A508u);
    ctx->pc = 0x11DFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DFA0u, 0x17A500u, 0x17A508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A508u;
label_17a508:
    // 0x17a508: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x17a508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_17a50c:
    // 0x17a50c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17A50Cu;
    {
        const bool branch_taken_0x17a50c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x17a50c) {
            ctx->pc = 0x17A4E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a4e8;
        }
    }
    ctx->pc = 0x17A514u;
    // 0x17a514: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a518: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a51c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a520: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17a520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a524: 0x3e00008  jr          $ra
    ctx->pc = 0x17A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A52Cu;
    // 0x17a52c: 0x0  nop
    ctx->pc = 0x17a52cu;
    // NOP
    ctx->pc = 0x17a530u;
}
