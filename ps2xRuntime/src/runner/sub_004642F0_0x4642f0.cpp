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

// Function: sub_004642F0
// Address: 0x4642f0 - 0x4643d0
void sub_004642F0_0x4642f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004642F0_0x4642f0");
#endif

    switch (ctx->pc) {
        case 0x464320u: goto label_464320;
        case 0x464334u: goto label_464334;
        case 0x464360u: goto label_464360;
        case 0x464394u: goto label_464394;
        case 0x4643acu: goto label_4643ac;
        default: break;
    }

    ctx->pc = 0x4642f0u;

    // 0x4642f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4642f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4642f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4642f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4642f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4642f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4642fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4642fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x464300: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x464300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x464304: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x464304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x464308: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x464308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46430c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46430cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x464310: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x464310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464314: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x464314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x464318: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x464318u;
    SET_GPR_U32(ctx, 31, 0x464320u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x464318u, 0x464320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464320u;
label_464320:
    // 0x464320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x464320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464324: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x464324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464328: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x464328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x46432c: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x46432Cu;
    SET_GPR_U32(ctx, 31, 0x464334u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x46432Cu, 0x464334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464334u;
label_464334:
    // 0x464334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464338: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x464338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x46433c: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x46433Cu;
    {
        const bool branch_taken_0x46433c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x46433c) {
            ctx->pc = 0x464368u;
            goto label_464368;
        }
    }
    ctx->pc = 0x464344u;
    // 0x464344: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x464344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x464348: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x464348u;
    {
        const bool branch_taken_0x464348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x464348) {
            ctx->pc = 0x464368u;
            goto label_464368;
        }
    }
    ctx->pc = 0x464350u;
    // 0x464350: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464354: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x464354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x464358: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x464358u;
    SET_GPR_U32(ctx, 31, 0x464360u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x464358u, 0x464360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464360u;
label_464360:
    // 0x464360: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x464360u;
    {
        const bool branch_taken_0x464360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464360) {
            ctx->pc = 0x4643ACu;
            goto label_4643ac;
        }
    }
    ctx->pc = 0x464368u;
label_464368:
    // 0x464368: 0x211082a  slt         $at, $s0, $s1
    ctx->pc = 0x464368u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x46436c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x46436Cu;
    {
        const bool branch_taken_0x46436c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46436c) {
            ctx->pc = 0x464380u;
            goto label_464380;
        }
    }
    ctx->pc = 0x464374u;
    // 0x464374: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x464374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x464378u;
    {
        const bool branch_taken_0x464378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x464378) {
            ctx->pc = 0x464384u;
            goto label_464384;
        }
    }
    ctx->pc = 0x464380u;
label_464380:
    // 0x464380: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x464380u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_464384:
    // 0x464384: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x464384u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464388: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x464388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46438c: 0xc042514  jal         func_109450
    ctx->pc = 0x46438Cu;
    SET_GPR_U32(ctx, 31, 0x464394u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x46438Cu, 0x464394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464394u;
label_464394:
    // 0x464394: 0x26660001  addiu       $a2, $s3, 0x1
    ctx->pc = 0x464394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x464398: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46439c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46439cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4643a0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4643a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4643a4: 0xc043764  jal         func_10DD90
    ctx->pc = 0x4643A4u;
    SET_GPR_U32(ctx, 31, 0x4643ACu);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x4643A4u, 0x4643ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4643ACu;
label_4643ac:
    // 0x4643ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4643acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4643b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4643b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4643b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4643b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4643b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4643b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4643bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4643bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4643c0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x4643c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4643c4: 0x3e00008  jr          $ra
    ctx->pc = 0x4643C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4643C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4643CCu;
    // 0x4643cc: 0x0  nop
    ctx->pc = 0x4643ccu;
    // NOP
    ctx->pc = 0x4643d0u;
}
