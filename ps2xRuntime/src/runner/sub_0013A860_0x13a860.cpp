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

// Function: sub_0013A860
// Address: 0x13a860 - 0x13ab30
void sub_0013A860_0x13a860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A860_0x13a860");
#endif

    switch (ctx->pc) {
        case 0x13a8d8u: goto label_13a8d8;
        case 0x13a8e4u: goto label_13a8e4;
        case 0x13a8f0u: goto label_13a8f0;
        case 0x13a8fcu: goto label_13a8fc;
        case 0x13a910u: goto label_13a910;
        case 0x13a920u: goto label_13a920;
        case 0x13a934u: goto label_13a934;
        case 0x13a95cu: goto label_13a95c;
        case 0x13a970u: goto label_13a970;
        case 0x13a98cu: goto label_13a98c;
        case 0x13a998u: goto label_13a998;
        case 0x13a9acu: goto label_13a9ac;
        case 0x13a9b8u: goto label_13a9b8;
        case 0x13a9c8u: goto label_13a9c8;
        case 0x13a9f0u: goto label_13a9f0;
        case 0x13aa08u: goto label_13aa08;
        case 0x13aa18u: goto label_13aa18;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa44u: goto label_13aa44;
        case 0x13aa54u: goto label_13aa54;
        case 0x13aa68u: goto label_13aa68;
        case 0x13aa98u: goto label_13aa98;
        case 0x13aab4u: goto label_13aab4;
        case 0x13aac4u: goto label_13aac4;
        case 0x13aae0u: goto label_13aae0;
        default: break;
    }

    ctx->pc = 0x13a860u;

    // 0x13a860: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13a864: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13a864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13a868: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13a86c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13a870: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13a870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13a874: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13a874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13a878: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13a87c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13a880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13a880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13a884: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13a884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13a888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a88c: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x13a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x13a890: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x13a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13a894: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A894u;
    {
        const bool branch_taken_0x13a894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a894) {
            ctx->pc = 0x13A8A8u;
            goto label_13a8a8;
        }
    }
    ctx->pc = 0x13A89Cu;
    // 0x13a89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8a0: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x13A8A0u;
    {
        const bool branch_taken_0x13a8a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8a0) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13A8A8u;
label_13a8a8:
    // 0x13a8a8: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x13a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13a8ac: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a8b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A8B0u;
    {
        const bool branch_taken_0x13a8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a8b0) {
            ctx->pc = 0x13A8C4u;
            goto label_13a8c4;
        }
    }
    ctx->pc = 0x13A8B8u;
    // 0x13a8b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8bc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x13A8BCu;
    {
        const bool branch_taken_0x13a8bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a8bc) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13A8C4u;
label_13a8c4:
    // 0x13a8c4: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x13a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13a8c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13a8cc: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x13a8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13a8d0: 0xc090864  jal         func_242190
    ctx->pc = 0x13A8D0u;
    SET_GPR_U32(ctx, 31, 0x13A8D8u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13A8D0u, 0x13A8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8D8u;
label_13a8d8:
    // 0x13a8d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8dc: 0xc090590  jal         func_241640
    ctx->pc = 0x13A8DCu;
    SET_GPR_U32(ctx, 31, 0x13A8E4u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x13A8DCu, 0x13A8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8E4u;
label_13a8e4:
    // 0x13a8e4: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x13a8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x13a8e8: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x13A8E8u;
    SET_GPR_U32(ctx, 31, 0x13A8F0u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x13A8E8u, 0x13A8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8F0u;
label_13a8f0:
    // 0x13a8f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a8f4: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x13A8F4u;
    SET_GPR_U32(ctx, 31, 0x13A8FCu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x13A8F4u, 0x13A8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A8FCu;
label_13a8fc:
    // 0x13a8fc: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13a8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13a900: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x13a900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a904: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x13a904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13a908: 0xc040304  jal         func_100C10
    ctx->pc = 0x13A908u;
    SET_GPR_U32(ctx, 31, 0x13A910u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13A908u, 0x13A910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A910u;
label_13a910:
    // 0x13a910: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13a914: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x13a914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a918: 0xc04ec90  jal         func_13B240
    ctx->pc = 0x13A918u;
    SET_GPR_U32(ctx, 31, 0x13A920u);
    ctx->pc = 0x13B240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B240u, 0x13A918u, 0x13A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A920u;
label_13a920:
    // 0x13a920: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13a920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a924: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x13a924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x13a928: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13a928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13a92c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13A92Cu;
    SET_GPR_U32(ctx, 31, 0x13A934u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13A92Cu, 0x13A934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A934u;
label_13a934:
    // 0x13a934: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A934u;
    {
        const bool branch_taken_0x13a934 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a934) {
            ctx->pc = 0x13A948u;
            goto label_13a948;
        }
    }
    ctx->pc = 0x13A93Cu;
    // 0x13a93c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a93cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a940: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x13A940u;
    {
        const bool branch_taken_0x13a940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a940) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13A948u;
label_13a948:
    // 0x13a948: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x13a948u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a94c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a94cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a950: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13a954: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13A954u;
    SET_GPR_U32(ctx, 31, 0x13A95Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13A954u, 0x13A95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A95Cu;
label_13a95c:
    // 0x13a95c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x13a95cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a960: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a964: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x13a964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x13a968: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13A968u;
    SET_GPR_U32(ctx, 31, 0x13A970u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13A968u, 0x13A970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A970u;
label_13a970:
    // 0x13a970: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x13a970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a974: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x13a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13a978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a97c: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x13A97Cu;
    {
        const bool branch_taken_0x13a97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a97c) {
            ctx->pc = 0x13AAA4u;
            goto label_13aaa4;
        }
    }
    ctx->pc = 0x13A984u;
    // 0x13a984: 0xc090864  jal         func_242190
    ctx->pc = 0x13A984u;
    SET_GPR_U32(ctx, 31, 0x13A98Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x13A984u, 0x13A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A98Cu;
label_13a98c:
    // 0x13a98c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a990: 0xc0905a0  jal         func_241680
    ctx->pc = 0x13A990u;
    SET_GPR_U32(ctx, 31, 0x13A998u);
    ctx->pc = 0x241680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241680u, 0x13A990u, 0x13A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A998u;
label_13a998:
    // 0x13a998: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x13a998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a99c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9a0: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x13a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13a9a4: 0xc09a364  jal         func_268D90
    ctx->pc = 0x13A9A4u;
    SET_GPR_U32(ctx, 31, 0x13A9ACu);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x13A9A4u, 0x13A9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9ACu;
label_13a9ac:
    // 0x13a9ac: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x13a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x13a9b0: 0xc09ac08  jal         func_26B020
    ctx->pc = 0x13A9B0u;
    SET_GPR_U32(ctx, 31, 0x13A9B8u);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x13A9B0u, 0x13A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9B8u;
label_13a9b8:
    // 0x13a9b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x13a9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9bc: 0x26050024  addiu       $a1, $s0, 0x24
    ctx->pc = 0x13a9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13a9c0: 0xc09a714  jal         func_269C50
    ctx->pc = 0x13A9C0u;
    SET_GPR_U32(ctx, 31, 0x13A9C8u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x13A9C0u, 0x13A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9C8u;
label_13a9c8:
    // 0x13a9c8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13a9c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9cc: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A9CCu;
    {
        const bool branch_taken_0x13a9cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a9cc) {
            ctx->pc = 0x13A9E0u;
            goto label_13a9e0;
        }
    }
    ctx->pc = 0x13A9D4u;
    // 0x13a9d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a9d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9d8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x13A9D8u;
    {
        const bool branch_taken_0x13a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9d8) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13A9E0u;
label_13a9e0:
    // 0x13a9e0: 0xafb300dc  sw          $s3, 0xDC($sp)
    ctx->pc = 0x13a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 19));
    // 0x13a9e4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x13a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x13a9e8: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x13A9E8u;
    SET_GPR_U32(ctx, 31, 0x13A9F0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x13A9E8u, 0x13A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A9F0u;
label_13a9f0:
    // 0x13a9f0: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x13A9F0u;
    {
        const bool branch_taken_0x13a9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a9f0) {
            ctx->pc = 0x13AA80u;
            goto label_13aa80;
        }
    }
    ctx->pc = 0x13A9F8u;
    // 0x13a9f8: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13a9fc: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x13aa00: 0xc040304  jal         func_100C10
    ctx->pc = 0x13AA00u;
    SET_GPR_U32(ctx, 31, 0x13AA08u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13AA00u, 0x13AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA08u;
label_13aa08:
    // 0x13aa08: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13aa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13aa0c: 0x27a500b8  addiu       $a1, $sp, 0xB8
    ctx->pc = 0x13aa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13aa10: 0xc04edc8  jal         func_13B720
    ctx->pc = 0x13AA10u;
    SET_GPR_U32(ctx, 31, 0x13AA18u);
    ctx->pc = 0x13B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B720u, 0x13AA10u, 0x13AA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA18u;
label_13aa18:
    // 0x13aa18: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13aa18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa1c: 0x27a400b8  addiu       $a0, $sp, 0xB8
    ctx->pc = 0x13aa1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x13aa20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13aa24: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13AA24u;
    SET_GPR_U32(ctx, 31, 0x13AA2Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13AA24u, 0x13AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA2Cu;
label_13aa2c:
    // 0x13aa2c: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x13AA2Cu;
    {
        const bool branch_taken_0x13aa2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aa2c) {
            ctx->pc = 0x13AA68u;
            goto label_13aa68;
        }
    }
    ctx->pc = 0x13AA34u;
    // 0x13aa34: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x13aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13aa38: 0x26050064  addiu       $a1, $s0, 0x64
    ctx->pc = 0x13aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x13aa3c: 0xc040304  jal         func_100C10
    ctx->pc = 0x13AA3Cu;
    SET_GPR_U32(ctx, 31, 0x13AA44u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13AA3Cu, 0x13AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA44u;
label_13aa44:
    // 0x13aa44: 0x8f84ba74  lw          $a0, -0x458C($gp)
    ctx->pc = 0x13aa44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13aa48: 0x27a500a8  addiu       $a1, $sp, 0xA8
    ctx->pc = 0x13aa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13aa4c: 0xc04ee44  jal         func_13B910
    ctx->pc = 0x13AA4Cu;
    SET_GPR_U32(ctx, 31, 0x13AA54u);
    ctx->pc = 0x13B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B910u, 0x13AA4Cu, 0x13AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA54u;
label_13aa54:
    // 0x13aa54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13aa54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa58: 0x27a400a8  addiu       $a0, $sp, 0xA8
    ctx->pc = 0x13aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    // 0x13aa5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13aa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13aa60: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13AA60u;
    SET_GPR_U32(ctx, 31, 0x13AA68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13AA60u, 0x13AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA68u;
label_13aa68:
    // 0x13aa68: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13AA68u;
    {
        const bool branch_taken_0x13aa68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x13aa68) {
            ctx->pc = 0x13AA7Cu;
            goto label_13aa7c;
        }
    }
    ctx->pc = 0x13AA70u;
    // 0x13aa70: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13aa70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x13AA74u;
    {
        const bool branch_taken_0x13aa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa74) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13AA7Cu;
label_13aa7c:
    // 0x13aa7c: 0xafb200e0  sw          $s2, 0xE0($sp)
    ctx->pc = 0x13aa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 18));
label_13aa80:
    // 0x13aa80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa84: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x13aa84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x13aa88: 0x92060084  lbu         $a2, 0x84($s0)
    ctx->pc = 0x13aa88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x13aa8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13aa8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa90: 0xc0af03c  jal         func_2BC0F0
    ctx->pc = 0x13AA90u;
    SET_GPR_U32(ctx, 31, 0x13AA98u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x13AA90u, 0x13AA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA98u;
label_13aa98:
    // 0x13aa98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aa9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13AA9Cu;
    {
        const bool branch_taken_0x13aa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aa9c) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13AAA4u;
label_13aaa4:
    // 0x13aaa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13aaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aaa8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x13aaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13aaac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x13AAACu;
    SET_GPR_U32(ctx, 31, 0x13AAB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x13AAACu, 0x13AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAB4u;
label_13aab4:
    // 0x13aab4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x13aab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aab8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13aab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aabc: 0xc0ae17c  jal         func_2B85F0
    ctx->pc = 0x13AABCu;
    SET_GPR_U32(ctx, 31, 0x13AAC4u);
    ctx->pc = 0x2B85F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85F0u, 0x13AABCu, 0x13AAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAC4u;
label_13aac4:
    // 0x13aac4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13AAC4u;
    {
        const bool branch_taken_0x13aac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aac4) {
            ctx->pc = 0x13AAECu;
            goto label_13aaec;
        }
    }
    ctx->pc = 0x13AACCu;
    // 0x13aacc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x13aaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x13aad0: 0x24842790  addiu       $a0, $a0, 0x2790
    ctx->pc = 0x13aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10128));
    // 0x13aad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13aad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aad8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x13AAD8u;
    SET_GPR_U32(ctx, 31, 0x13AAE0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x13AAD8u, 0x13AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AAE0u;
label_13aae0:
    // 0x13aae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13aae4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13AAE4u;
    {
        const bool branch_taken_0x13aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13aae4) {
            ctx->pc = 0x13AAF0u;
            goto label_13aaf0;
        }
    }
    ctx->pc = 0x13AAECu;
label_13aaec:
    // 0x13aaec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13aaecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13aaf0:
    // 0x13aaf0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13aaf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13aaf4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x13aaf4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13aaf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x13aaf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13aafc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13aafcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13ab00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13ab00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13ab04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13ab04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13ab08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13ab08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ab0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ab0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ab10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ab10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ab14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13ab14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ab18: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x13ab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x13ab1c: 0x3e00008  jr          $ra
    ctx->pc = 0x13AB1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AB1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AB24u;
    // 0x13ab24: 0x0  nop
    ctx->pc = 0x13ab24u;
    // NOP
    // 0x13ab28: 0x0  nop
    ctx->pc = 0x13ab28u;
    // NOP
    // 0x13ab2c: 0x0  nop
    ctx->pc = 0x13ab2cu;
    // NOP
    ctx->pc = 0x13ab30u;
}
