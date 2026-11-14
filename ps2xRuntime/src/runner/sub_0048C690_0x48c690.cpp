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

// Function: sub_0048C690
// Address: 0x48c690 - 0x48c720
void sub_0048C690_0x48c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C690_0x48c690");
#endif

    switch (ctx->pc) {
        case 0x48c6c8u: goto label_48c6c8;
        case 0x48c6d8u: goto label_48c6d8;
        default: break;
    }

    ctx->pc = 0x48c690u;

    // 0x48c690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x48c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x48c694: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48c698: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x48c69c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x48c69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x48c6a0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x48c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x48c6a4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x48c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x48c6a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x48c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c6ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c6b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x48c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c6b4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x48c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x48c6b8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x48c6b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x48c6bc: 0x8012  mflo        $s0
    ctx->pc = 0x48c6bcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x48c6c0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x48C6C0u;
    {
        const bool branch_taken_0x48c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c6c0) {
            ctx->pc = 0x48C6F4u;
            goto label_48c6f4;
        }
    }
    ctx->pc = 0x48C6C8u;
label_48c6c8:
    // 0x48c6c8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x48c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c6cc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48c6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c6d0: 0xc1231c8  jal         func_48C720
    ctx->pc = 0x48C6D0u;
    SET_GPR_U32(ctx, 31, 0x48C6D8u);
    ctx->pc = 0x48C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C720u, 0x48C6D0u, 0x48C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C6D8u;
label_48c6d8:
    // 0x48c6d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x48c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c6dc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x48c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x48c6e0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x48c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x48c6e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c6e8: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x48c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x48c6ec: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x48c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x48c6f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x48c6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_48c6f4:
    // 0x48c6f4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x48C6F4u;
    {
        const bool branch_taken_0x48c6f4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x48c6f4) {
            ctx->pc = 0x48C6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c6c8;
        }
    }
    ctx->pc = 0x48C6FCu;
    // 0x48c6fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x48c6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c700: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c708: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x48c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x48c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x48C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C714u;
    // 0x48c714: 0x0  nop
    ctx->pc = 0x48c714u;
    // NOP
    // 0x48c718: 0x0  nop
    ctx->pc = 0x48c718u;
    // NOP
    // 0x48c71c: 0x0  nop
    ctx->pc = 0x48c71cu;
    // NOP
    ctx->pc = 0x48c720u;
}
