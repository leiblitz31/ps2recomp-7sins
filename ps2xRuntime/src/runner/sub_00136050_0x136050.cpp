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

// Function: sub_00136050
// Address: 0x136050 - 0x1360d0
void sub_00136050_0x136050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136050_0x136050");
#endif

    switch (ctx->pc) {
        case 0x136088u: goto label_136088;
        case 0x1360a8u: goto label_1360a8;
        default: break;
    }

    ctx->pc = 0x136050u;

    // 0x136050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x136050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x136054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x136054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x136058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x136058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13605c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x136060: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x136060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x136064: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x136064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x136068: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x136068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13606c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136070: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x136070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136074: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x136074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x136078: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x136078u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13607c: 0x8012  mflo        $s0
    ctx->pc = 0x13607cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x136080: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x136080u;
    {
        const bool branch_taken_0x136080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x136080) {
            ctx->pc = 0x1360ACu;
            goto label_1360ac;
        }
    }
    ctx->pc = 0x136088u;
label_136088:
    // 0x136088: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x136088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13608c: 0x2444ffd0  addiu       $a0, $v0, -0x30
    ctx->pc = 0x13608cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x136090: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x136090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x136094: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x136094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136098: 0x2445ffd0  addiu       $a1, $v0, -0x30
    ctx->pc = 0x136098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x13609c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x13609cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1360a0: 0xc04ccfc  jal         func_1333F0
    ctx->pc = 0x1360A0u;
    SET_GPR_U32(ctx, 31, 0x1360A8u);
    ctx->pc = 0x1333F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333F0u, 0x1360A0u, 0x1360A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1360A8u;
label_1360a8:
    // 0x1360a8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1360a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1360ac:
    // 0x1360ac: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1360ACu;
    {
        const bool branch_taken_0x1360ac = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1360ac) {
            ctx->pc = 0x136088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136088;
        }
    }
    ctx->pc = 0x1360B4u;
    // 0x1360b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1360b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1360b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1360b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1360bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1360bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1360c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1360c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1360c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1360C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1360C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1360CCu;
    // 0x1360cc: 0x0  nop
    ctx->pc = 0x1360ccu;
    // NOP
    ctx->pc = 0x1360d0u;
}
