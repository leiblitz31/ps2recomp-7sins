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

// Function: sub_00275050
// Address: 0x275050 - 0x2750e0
void sub_00275050_0x275050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275050_0x275050");
#endif

    switch (ctx->pc) {
        case 0x275088u: goto label_275088;
        case 0x275098u: goto label_275098;
        default: break;
    }

    ctx->pc = 0x275050u;

    // 0x275050: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x275050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x275054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x275054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x275058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x275058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27505c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x27505cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x275060: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x275060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x275064: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x275064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x275068: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x275068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27506c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275070: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x275070u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x275074: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x275074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x275078: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x275078u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x27507c: 0x8012  mflo        $s0
    ctx->pc = 0x27507cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x275080: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275080u;
    {
        const bool branch_taken_0x275080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275080) {
            ctx->pc = 0x2750B4u;
            goto label_2750b4;
        }
    }
    ctx->pc = 0x275088u;
label_275088:
    // 0x275088: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x275088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27508c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27508cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275090: 0xc09d438  jal         func_2750E0
    ctx->pc = 0x275090u;
    SET_GPR_U32(ctx, 31, 0x275098u);
    ctx->pc = 0x2750E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2750E0u, 0x275090u, 0x275098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275098u;
label_275098:
    // 0x275098: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x275098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27509c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x27509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2750a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2750a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2750a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2750a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2750a8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2750a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2750ac: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2750acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2750b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2750b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2750b4:
    // 0x2750b4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2750B4u;
    {
        const bool branch_taken_0x2750b4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2750b4) {
            ctx->pc = 0x275088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275088;
        }
    }
    ctx->pc = 0x2750BCu;
    // 0x2750bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2750bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2750c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2750c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2750c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2750c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2750c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2750c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2750cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2750CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2750CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2750D4u;
    // 0x2750d4: 0x0  nop
    ctx->pc = 0x2750d4u;
    // NOP
    // 0x2750d8: 0x0  nop
    ctx->pc = 0x2750d8u;
    // NOP
    // 0x2750dc: 0x0  nop
    ctx->pc = 0x2750dcu;
    // NOP
    ctx->pc = 0x2750e0u;
}
