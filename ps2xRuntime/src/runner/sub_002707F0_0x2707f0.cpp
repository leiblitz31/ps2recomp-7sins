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

// Function: sub_002707F0
// Address: 0x2707f0 - 0x270900
void sub_002707F0_0x2707f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002707F0_0x2707f0");
#endif

    switch (ctx->pc) {
        case 0x270824u: goto label_270824;
        case 0x270838u: goto label_270838;
        case 0x27085cu: goto label_27085c;
        case 0x270878u: goto label_270878;
        case 0x270890u: goto label_270890;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708e4u: goto label_2708e4;
        default: break;
    }

    ctx->pc = 0x2707f0u;

    // 0x2707f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2707f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2707f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2707f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2707f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2707fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2707fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x270800: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x270800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x270804: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x270804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x270808: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x270808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x27080c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x27080cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x270810: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x270810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x270814: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x270814u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x270818: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x270818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27081c: 0xc09c290  jal         func_270A40
    ctx->pc = 0x27081Cu;
    SET_GPR_U32(ctx, 31, 0x270824u);
    ctx->pc = 0x270A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270A40u, 0x27081Cu, 0x270824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270824u;
label_270824:
    // 0x270824: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x270824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x270828: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x270828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x27082c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x270830: 0xc041954  jal         func_106550
    ctx->pc = 0x270830u;
    SET_GPR_U32(ctx, 31, 0x270838u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x270830u, 0x270838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270838u;
label_270838:
    // 0x270838: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x270838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x27083c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27083cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270840: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270844: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x270844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270848: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x270848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x27084c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270850: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x270850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270854: 0xc09c690  jal         func_271A40
    ctx->pc = 0x270854u;
    SET_GPR_U32(ctx, 31, 0x27085Cu);
    ctx->pc = 0x271A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271A40u, 0x270854u, 0x27085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27085Cu;
label_27085c:
    // 0x27085c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27085cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270860: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x270864: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270868: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x270868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27086c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27086cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270870: 0xc041934  jal         func_1064D0
    ctx->pc = 0x270870u;
    SET_GPR_U32(ctx, 31, 0x270878u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x270870u, 0x270878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270878u;
label_270878:
    // 0x270878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27087c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27087cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270880: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x270880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x270884: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x270884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270888: 0xc09c274  jal         func_2709D0
    ctx->pc = 0x270888u;
    SET_GPR_U32(ctx, 31, 0x270890u);
    ctx->pc = 0x2709D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2709D0u, 0x270888u, 0x270890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270890u;
label_270890:
    // 0x270890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270894: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x270894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x270898: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270898u;
    {
        const bool branch_taken_0x270898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270898) {
            ctx->pc = 0x2708BCu;
            goto label_2708bc;
        }
    }
    ctx->pc = 0x2708A0u;
    // 0x2708a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2708a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2708a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2708a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2708ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2708acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2708B0u;
    SET_GPR_U32(ctx, 31, 0x2708B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2708B0u, 0x2708B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708B8u;
label_2708b8:
    // 0x2708b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2708b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2708bc:
    // 0x2708bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2708bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2708c0: 0xc09c254  jal         func_270950
    ctx->pc = 0x2708C0u;
    SET_GPR_U32(ctx, 31, 0x2708C8u);
    ctx->pc = 0x270950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270950u, 0x2708C0u, 0x2708C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708C8u;
label_2708c8:
    // 0x2708c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2708c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2708cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2708ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2708d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2708d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2708d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2708d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2708d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708dc: 0xc09c240  jal         func_270900
    ctx->pc = 0x2708DCu;
    SET_GPR_U32(ctx, 31, 0x2708E4u);
    ctx->pc = 0x270900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270900u, 0x2708DCu, 0x2708E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708E4u;
label_2708e4:
    // 0x2708e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2708e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2708e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2708e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2708ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2708ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2708f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2708f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2708f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2708f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2708F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2708F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270900u;
}
