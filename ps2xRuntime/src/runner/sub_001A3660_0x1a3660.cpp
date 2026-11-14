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

// Function: sub_001A3660
// Address: 0x1a3660 - 0x1a3770
void sub_001A3660_0x1a3660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3660_0x1a3660");
#endif

    switch (ctx->pc) {
        case 0x1a3694u: goto label_1a3694;
        case 0x1a36a8u: goto label_1a36a8;
        case 0x1a36ccu: goto label_1a36cc;
        case 0x1a36e8u: goto label_1a36e8;
        case 0x1a3700u: goto label_1a3700;
        case 0x1a3728u: goto label_1a3728;
        case 0x1a3738u: goto label_1a3738;
        case 0x1a3754u: goto label_1a3754;
        default: break;
    }

    ctx->pc = 0x1a3660u;

    // 0x1a3660: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1a3660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1a3664: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a3664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a3668: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a3668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a366c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a3670: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a3670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1a3674: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1a3674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1a3678: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1a3678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1a367c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1a367cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1a3680: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1a3680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1a3684: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1a3684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1a3688: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a3688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a368c: 0xc068e2c  jal         func_1A38B0
    ctx->pc = 0x1A368Cu;
    SET_GPR_U32(ctx, 31, 0x1A3694u);
    ctx->pc = 0x1A38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A38B0u, 0x1A368Cu, 0x1A3694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3694u;
label_1a3694:
    // 0x1a3694: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1a3694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1a3698: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1a3698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1a369c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1a369cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a36a0: 0xc041954  jal         func_106550
    ctx->pc = 0x1A36A0u;
    SET_GPR_U32(ctx, 31, 0x1A36A8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1A36A0u, 0x1A36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36A8u;
label_1a36a8:
    // 0x1a36a8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1a36a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1a36ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a36acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a36b0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1a36b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a36b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a36b8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1a36b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1a36bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a36bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a36c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36c4: 0xc069fec  jal         func_1A7FB0
    ctx->pc = 0x1A36C4u;
    SET_GPR_U32(ctx, 31, 0x1A36CCu);
    ctx->pc = 0x1A7FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7FB0u, 0x1A36C4u, 0x1A36CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36CCu;
label_1a36cc:
    // 0x1a36cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a36ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36d0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a36d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a36d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a36d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a36d8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1a36d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a36dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a36dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36e0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A36E0u;
    SET_GPR_U32(ctx, 31, 0x1A36E8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A36E0u, 0x1A36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36E8u;
label_1a36e8:
    // 0x1a36e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a36e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36f0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1a36f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1a36f4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1a36f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a36f8: 0xc068e10  jal         func_1A3840
    ctx->pc = 0x1A36F8u;
    SET_GPR_U32(ctx, 31, 0x1A3700u);
    ctx->pc = 0x1A3840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3840u, 0x1A36F8u, 0x1A3700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3700u;
label_1a3700:
    // 0x1a3700: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3704: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1a3704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1a3708: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A3708u;
    {
        const bool branch_taken_0x1a3708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a3708) {
            ctx->pc = 0x1A372Cu;
            goto label_1a372c;
        }
    }
    ctx->pc = 0x1A3710u;
    // 0x1a3710: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1a3710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3714: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3718: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1a3718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a371c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a371cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3720: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1A3720u;
    SET_GPR_U32(ctx, 31, 0x1A3728u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1A3720u, 0x1A3728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3728u;
label_1a3728:
    // 0x1a3728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a3728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a372c:
    // 0x1a372c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3730: 0xc068df0  jal         func_1A37C0
    ctx->pc = 0x1A3730u;
    SET_GPR_U32(ctx, 31, 0x1A3738u);
    ctx->pc = 0x1A37C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A37C0u, 0x1A3730u, 0x1A3738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3738u;
label_1a3738:
    // 0x1a3738: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1a3738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1a373c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1a373cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a3740: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1a3740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3744: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a3744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3748: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a3748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a374c: 0xc068ddc  jal         func_1A3770
    ctx->pc = 0x1A374Cu;
    SET_GPR_U32(ctx, 31, 0x1A3754u);
    ctx->pc = 0x1A3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3770u, 0x1A374Cu, 0x1A3754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3754u;
label_1a3754:
    // 0x1a3754: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a3754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a3758: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a3758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a375c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a375cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a3760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a3760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a3764: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1a3764u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1a3768: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3770u;
}
