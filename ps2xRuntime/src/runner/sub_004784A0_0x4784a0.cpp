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

// Function: sub_004784A0
// Address: 0x4784a0 - 0x478570
void sub_004784A0_0x4784a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004784A0_0x4784a0");
#endif

    switch (ctx->pc) {
        case 0x4784d8u: goto label_4784d8;
        case 0x4784e8u: goto label_4784e8;
        case 0x478524u: goto label_478524;
        case 0x478544u: goto label_478544;
        default: break;
    }

    ctx->pc = 0x4784a0u;

    // 0x4784a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4784a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4784a4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4784a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4784a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4784a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4784ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4784acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4784b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4784b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4784b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4784b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4784b8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x4784b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x4784bc: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x4784bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x4784c0: 0x8fb30060  lw          $s3, 0x60($sp)
    ctx->pc = 0x4784c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4784c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4784c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4784c8: 0x8c52003c  lw          $s2, 0x3C($v0)
    ctx->pc = 0x4784c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x4784cc: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x4784ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x4784d0: 0xc11dd74  jal         func_4775D0
    ctx->pc = 0x4784D0u;
    SET_GPR_U32(ctx, 31, 0x4784D8u);
    ctx->pc = 0x4775D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775D0u, 0x4784D0u, 0x4784D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4784D8u;
label_4784d8:
    // 0x4784d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4784d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4784dc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4784dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4784e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4784E0u;
    {
        const bool branch_taken_0x4784e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4784e0) {
            ctx->pc = 0x478518u;
            goto label_478518;
        }
    }
    ctx->pc = 0x4784E8u;
label_4784e8:
    // 0x4784e8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x4784e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4784ec: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4784ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4784f0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4784F0u;
    {
        const bool branch_taken_0x4784f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4784f0) {
            ctx->pc = 0x478514u;
            goto label_478514;
        }
    }
    ctx->pc = 0x4784F8u;
    // 0x4784f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4784f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4784fc: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x4784fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x478500: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x478500u;
    {
        const bool branch_taken_0x478500 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x478500) {
            ctx->pc = 0x478514u;
            goto label_478514;
        }
    }
    ctx->pc = 0x478508u;
    // 0x478508: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x478508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47850c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x47850Cu;
    {
        const bool branch_taken_0x47850c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47850c) {
            ctx->pc = 0x47852Cu;
            goto label_47852c;
        }
    }
    ctx->pc = 0x478514u;
label_478514:
    // 0x478514: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x478514u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_478518:
    // 0x478518: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x478518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x47851c: 0xc11dd6c  jal         func_4775B0
    ctx->pc = 0x47851Cu;
    SET_GPR_U32(ctx, 31, 0x478524u);
    ctx->pc = 0x4775B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4775B0u, 0x47851Cu, 0x478524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478524u;
label_478524:
    // 0x478524: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x478524u;
    {
        const bool branch_taken_0x478524 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x478524) {
            ctx->pc = 0x4784E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4784e8;
        }
    }
    ctx->pc = 0x47852Cu;
label_47852c:
    // 0x47852c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x47852Cu;
    {
        const bool branch_taken_0x47852c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x47852c) {
            ctx->pc = 0x478544u;
            goto label_478544;
        }
    }
    ctx->pc = 0x478534u;
    // 0x478534: 0x8f84c068  lw          $a0, -0x3F98($gp)
    ctx->pc = 0x478534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951016)));
    // 0x478538: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x478538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47853c: 0xc11e15c  jal         func_478570
    ctx->pc = 0x47853Cu;
    SET_GPR_U32(ctx, 31, 0x478544u);
    ctx->pc = 0x478570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x478570u, 0x47853Cu, 0x478544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x478544u;
label_478544:
    // 0x478544: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x478544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x478548: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x478548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47854c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x47854cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x478550: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x478550u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x478554: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x478554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x478558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x478558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47855c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x47855cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x478560: 0x3e00008  jr          $ra
    ctx->pc = 0x478560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x478560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x478568u;
    // 0x478568: 0x0  nop
    ctx->pc = 0x478568u;
    // NOP
    // 0x47856c: 0x0  nop
    ctx->pc = 0x47856cu;
    // NOP
    ctx->pc = 0x478570u;
}
