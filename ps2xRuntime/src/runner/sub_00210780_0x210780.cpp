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

// Function: sub_00210780
// Address: 0x210780 - 0x210800
void sub_00210780_0x210780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210780_0x210780");
#endif

    switch (ctx->pc) {
        case 0x2107b8u: goto label_2107b8;
        case 0x2107d8u: goto label_2107d8;
        default: break;
    }

    ctx->pc = 0x210780u;

    // 0x210780: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x210784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x210784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x210788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x210788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21078c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x21078cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x210790: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x210790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x210794: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x210794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x210798: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21079c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2107a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2107a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2107a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2107a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2107a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2107ac: 0x8012  mflo        $s0
    ctx->pc = 0x2107acu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2107b0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2107B0u;
    {
        const bool branch_taken_0x2107b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107b0) {
            ctx->pc = 0x2107DCu;
            goto label_2107dc;
        }
    }
    ctx->pc = 0x2107B8u;
label_2107b8:
    // 0x2107b8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2107b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2107bc: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x2107bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2107c0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2107c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2107c4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2107c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2107c8: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x2107cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2107ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2107d0: 0xc041d58  jal         func_107560
    ctx->pc = 0x2107D0u;
    SET_GPR_U32(ctx, 31, 0x2107D8u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2107D0u, 0x2107D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107D8u;
label_2107d8:
    // 0x2107d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2107d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2107dc:
    // 0x2107dc: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2107DCu;
    {
        const bool branch_taken_0x2107dc = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2107dc) {
            ctx->pc = 0x2107B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2107b8;
        }
    }
    ctx->pc = 0x2107E4u;
    // 0x2107e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2107e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2107e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2107e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2107ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2107ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2107f0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2107f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2107f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2107F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2107F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2107FCu;
    // 0x2107fc: 0x0  nop
    ctx->pc = 0x2107fcu;
    // NOP
    ctx->pc = 0x210800u;
}
