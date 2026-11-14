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

// Function: sub_001458F0
// Address: 0x1458f0 - 0x145980
void sub_001458F0_0x1458f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001458F0_0x1458f0");
#endif

    switch (ctx->pc) {
        case 0x145928u: goto label_145928;
        case 0x145938u: goto label_145938;
        default: break;
    }

    ctx->pc = 0x1458f0u;

    // 0x1458f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1458f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1458f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1458f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1458f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1458f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1458fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1458fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x145900: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x145900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x145904: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x145904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x145908: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x145908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14590c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145910: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x145910u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145914: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x145914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x145918: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x145918u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x14591c: 0x8012  mflo        $s0
    ctx->pc = 0x14591cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x145920: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x145920u;
    {
        const bool branch_taken_0x145920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145920) {
            ctx->pc = 0x145954u;
            goto label_145954;
        }
    }
    ctx->pc = 0x145928u;
label_145928:
    // 0x145928: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x145928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14592c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x14592cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145930: 0xc051660  jal         func_145980
    ctx->pc = 0x145930u;
    SET_GPR_U32(ctx, 31, 0x145938u);
    ctx->pc = 0x145980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145980u, 0x145930u, 0x145938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145938u;
label_145938:
    // 0x145938: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x145938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14593c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x14593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x145940: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x145940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x145944: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x145944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145948: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x14594c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x14594cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x145950: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x145950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_145954:
    // 0x145954: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x145954u;
    {
        const bool branch_taken_0x145954 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x145954) {
            ctx->pc = 0x145928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145928;
        }
    }
    ctx->pc = 0x14595Cu;
    // 0x14595c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x14595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145960: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x145960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145964: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145964u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145968: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x145968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14596c: 0x3e00008  jr          $ra
    ctx->pc = 0x14596Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14596Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145974u;
    // 0x145974: 0x0  nop
    ctx->pc = 0x145974u;
    // NOP
    // 0x145978: 0x0  nop
    ctx->pc = 0x145978u;
    // NOP
    // 0x14597c: 0x0  nop
    ctx->pc = 0x14597cu;
    // NOP
    ctx->pc = 0x145980u;
}
