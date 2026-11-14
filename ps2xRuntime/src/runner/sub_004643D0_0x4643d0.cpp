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

// Function: sub_004643D0
// Address: 0x4643d0 - 0x464490
void sub_004643D0_0x4643d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004643D0_0x4643d0");
#endif

    switch (ctx->pc) {
        case 0x4643f8u: goto label_4643f8;
        case 0x46440cu: goto label_46440c;
        case 0x464420u: goto label_464420;
        case 0x464434u: goto label_464434;
        case 0x464450u: goto label_464450;
        case 0x46446cu: goto label_46446c;
        default: break;
    }

    ctx->pc = 0x4643d0u;

    // 0x4643d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4643d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4643d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4643d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4643d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4643d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4643dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4643dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4643e0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4643e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4643e4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x4643e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x4643e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4643e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4643ec: 0x2405002f  addiu       $a1, $zero, 0x2F
    ctx->pc = 0x4643ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x4643f0: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x4643F0u;
    SET_GPR_U32(ctx, 31, 0x4643F8u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x4643F0u, 0x4643F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4643F8u;
label_4643f8:
    // 0x4643f8: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4643f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x4643fc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x4643fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464400: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x464400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x464404: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x464404u;
    SET_GPR_U32(ctx, 31, 0x46440Cu);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x464404u, 0x46440Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46440Cu;
label_46440c:
    // 0x46440c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x46440cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x464410: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x464410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x464414: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x464414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x464418: 0xc119124  jal         func_464490
    ctx->pc = 0x464418u;
    SET_GPR_U32(ctx, 31, 0x464420u);
    ctx->pc = 0x464490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464490u, 0x464418u, 0x464420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464420u;
label_464420:
    // 0x464420: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x464420u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x464424: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464428: 0x2405002e  addiu       $a1, $zero, 0x2E
    ctx->pc = 0x464428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x46442c: 0xc047874  jal         func_11E1D0
    ctx->pc = 0x46442Cu;
    SET_GPR_U32(ctx, 31, 0x464434u);
    ctx->pc = 0x11E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1D0u, 0x46442Cu, 0x464434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464434u;
label_464434:
    // 0x464434: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464438: 0x230082a  slt         $at, $s1, $s0
    ctx->pc = 0x464438u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x46443c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x46443Cu;
    {
        const bool branch_taken_0x46443c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x46443c) {
            ctx->pc = 0x464454u;
            goto label_464454;
        }
    }
    ctx->pc = 0x464444u;
    // 0x464444: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x464444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464448: 0xc042514  jal         func_109450
    ctx->pc = 0x464448u;
    SET_GPR_U32(ctx, 31, 0x464450u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x464448u, 0x464450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x464450u;
label_464450:
    // 0x464450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x464450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_464454:
    // 0x464454: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x464454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x464458: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x464458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46445c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x46445cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x464460: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x464460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x464464: 0xc043764  jal         func_10DD90
    ctx->pc = 0x464464u;
    SET_GPR_U32(ctx, 31, 0x46446Cu);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x464464u, 0x46446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46446Cu;
label_46446c:
    // 0x46446c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x464470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x464470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x464474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x464474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x464478: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x464478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x46447c: 0x3e00008  jr          $ra
    ctx->pc = 0x46447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x464484u;
    // 0x464484: 0x0  nop
    ctx->pc = 0x464484u;
    // NOP
    // 0x464488: 0x0  nop
    ctx->pc = 0x464488u;
    // NOP
    // 0x46448c: 0x0  nop
    ctx->pc = 0x46448cu;
    // NOP
    ctx->pc = 0x464490u;
}
