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

// Function: sub_001A3320
// Address: 0x1a3320 - 0x1a3430
void sub_001A3320_0x1a3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3320_0x1a3320");
#endif

    switch (ctx->pc) {
        case 0x1a3354u: goto label_1a3354;
        case 0x1a3368u: goto label_1a3368;
        case 0x1a338cu: goto label_1a338c;
        case 0x1a33a8u: goto label_1a33a8;
        case 0x1a33c0u: goto label_1a33c0;
        case 0x1a33e8u: goto label_1a33e8;
        case 0x1a33f8u: goto label_1a33f8;
        case 0x1a3414u: goto label_1a3414;
        default: break;
    }

    ctx->pc = 0x1a3320u;

    // 0x1a3320: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a3320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a3324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a3328: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a332c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a332cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3330: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3334: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a3334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a3338: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1a3338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1a333c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a3340: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1a3340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1a3344: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1a3344u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a3348: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a334c: 0xc068c84  jal         func_1A3210
    ctx->pc = 0x1A334Cu;
    SET_GPR_U32(ctx, 31, 0x1A3354u);
    ctx->pc = 0x1A3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3210u, 0x1A334Cu, 0x1A3354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3354u;
label_1a3354:
    // 0x1a3354: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a3354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a3358: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1a3358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a335c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a335cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a3360: 0xc041954  jal         func_106550
    ctx->pc = 0x1A3360u;
    SET_GPR_U32(ctx, 31, 0x1A3368u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1A3360u, 0x1A3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3368u;
label_1a3368:
    // 0x1a3368: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1a3368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a336c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3370: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a3374: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3378: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a3378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a337c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a337cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3380: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a3380u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3384: 0xc069fb0  jal         func_1A7EC0
    ctx->pc = 0x1A3384u;
    SET_GPR_U32(ctx, 31, 0x1A338Cu);
    ctx->pc = 0x1A7EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7EC0u, 0x1A3384u, 0x1A338Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A338Cu;
label_1a338c:
    // 0x1a338c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a338cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3390: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a3390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3394: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a3394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a3398: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1a3398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a339c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a339cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33a0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A33A0u;
    SET_GPR_U32(ctx, 31, 0x1A33A8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A33A0u, 0x1A33A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33A8u;
label_1a33a8:
    // 0x1a33a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a33acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33b0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1a33b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a33b4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a33b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a33b8: 0xc068d40  jal         func_1A3500
    ctx->pc = 0x1A33B8u;
    SET_GPR_U32(ctx, 31, 0x1A33C0u);
    ctx->pc = 0x1A3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3500u, 0x1A33B8u, 0x1A33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33C0u;
label_1a33c0:
    // 0x1a33c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a33c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33c4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a33c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a33c8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A33C8u;
    {
        const bool branch_taken_0x1a33c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a33c8) {
            ctx->pc = 0x1A33ECu;
            goto label_1a33ec;
        }
    }
    ctx->pc = 0x1A33D0u;
    // 0x1a33d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a33d4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a33d8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a33dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a33dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33e0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A33E0u;
    SET_GPR_U32(ctx, 31, 0x1A33E8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A33E0u, 0x1A33E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33E8u;
label_1a33e8:
    // 0x1a33e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a33e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a33ec:
    // 0x1a33ec: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a33ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a33f0: 0xc068d20  jal         func_1A3480
    ctx->pc = 0x1A33F0u;
    SET_GPR_U32(ctx, 31, 0x1A33F8u);
    ctx->pc = 0x1A3480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3480u, 0x1A33F0u, 0x1A33F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33F8u;
label_1a33f8:
    // 0x1a33f8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a33fc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a33fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a3400: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a3400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3404: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3408: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a340c: 0xc068d0c  jal         func_1A3430
    ctx->pc = 0x1A340Cu;
    SET_GPR_U32(ctx, 31, 0x1A3414u);
    ctx->pc = 0x1A3430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3430u, 0x1A340Cu, 0x1A3414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3414u;
label_1a3414:
    // 0x1a3414: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a341c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a341cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3424: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a3424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a3428: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3430u;
}
