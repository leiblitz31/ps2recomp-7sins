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

// Function: sub_0016A7F0
// Address: 0x16a7f0 - 0x16b0e0
void sub_0016A7F0_0x16a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A7F0_0x16a7f0");
#endif

    switch (ctx->pc) {
        case 0x16a834u: goto label_16a834;
        case 0x16a864u: goto label_16a864;
        case 0x16a89cu: goto label_16a89c;
        case 0x16a8c4u: goto label_16a8c4;
        case 0x16a8f8u: goto label_16a8f8;
        case 0x16a90cu: goto label_16a90c;
        case 0x16a920u: goto label_16a920;
        case 0x16a93cu: goto label_16a93c;
        case 0x16a954u: goto label_16a954;
        case 0x16a96cu: goto label_16a96c;
        case 0x16a9a0u: goto label_16a9a0;
        case 0x16aa14u: goto label_16aa14;
        case 0x16aa30u: goto label_16aa30;
        case 0x16aa40u: goto label_16aa40;
        case 0x16ab34u: goto label_16ab34;
        case 0x16ab54u: goto label_16ab54;
        case 0x16aba8u: goto label_16aba8;
        case 0x16abbcu: goto label_16abbc;
        case 0x16abccu: goto label_16abcc;
        case 0x16ac08u: goto label_16ac08;
        case 0x16ac18u: goto label_16ac18;
        case 0x16ac70u: goto label_16ac70;
        case 0x16ac80u: goto label_16ac80;
        case 0x16ac90u: goto label_16ac90;
        case 0x16aca0u: goto label_16aca0;
        case 0x16acdcu: goto label_16acdc;
        case 0x16acecu: goto label_16acec;
        case 0x16ad48u: goto label_16ad48;
        case 0x16ad88u: goto label_16ad88;
        case 0x16adb4u: goto label_16adb4;
        case 0x16adf0u: goto label_16adf0;
        case 0x16ae2cu: goto label_16ae2c;
        case 0x16ae70u: goto label_16ae70;
        case 0x16aeb8u: goto label_16aeb8;
        case 0x16aef8u: goto label_16aef8;
        case 0x16af34u: goto label_16af34;
        case 0x16af78u: goto label_16af78;
        case 0x16afbcu: goto label_16afbc;
        case 0x16aff4u: goto label_16aff4;
        case 0x16b004u: goto label_16b004;
        case 0x16b014u: goto label_16b014;
        case 0x16b04cu: goto label_16b04c;
        case 0x16b064u: goto label_16b064;
        case 0x16b074u: goto label_16b074;
        case 0x16b0a8u: goto label_16b0a8;
        default: break;
    }

    ctx->pc = 0x16a7f0u;

    // 0x16a7f0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x16a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x16a7f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x16a7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x16a7f8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x16a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x16a7fc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x16a7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x16a800: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x16a800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x16a804: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16a804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16a808: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16a808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x16a80c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16a80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16a810: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a814: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16a814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16a818: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a81c: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x16a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
    // 0x16a820: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16a820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16a824: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16a824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16a828: 0x24a54258  addiu       $a1, $a1, 0x4258
    ctx->pc = 0x16a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16984));
    // 0x16a82c: 0xc05621c  jal         func_158870
    ctx->pc = 0x16A82Cu;
    SET_GPR_U32(ctx, 31, 0x16A834u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16A82Cu, 0x16A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A834u;
label_16a834:
    // 0x16a834: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x16a834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a838: 0x12c0002f  beqz        $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x16A838u;
    {
        const bool branch_taken_0x16a838 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a838) {
            ctx->pc = 0x16A8F8u;
            goto label_16a8f8;
        }
    }
    ctx->pc = 0x16A840u;
    // 0x16a840: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a844: 0x90430028  lbu         $v1, 0x28($v0)
    ctx->pc = 0x16a844u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x16a848: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A848u;
    {
        const bool branch_taken_0x16a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a848) {
            ctx->pc = 0x16A870u;
            goto label_16a870;
        }
    }
    ctx->pc = 0x16A850u;
    // 0x16a850: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a854: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16a854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a85c: 0xc08d95c  jal         func_236570
    ctx->pc = 0x16A85Cu;
    SET_GPR_U32(ctx, 31, 0x16A864u);
    ctx->pc = 0x236570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236570u, 0x16A85Cu, 0x16A864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A864u;
label_16a864:
    // 0x16a864: 0x28410000  slti        $at, $v0, 0x0
    ctx->pc = 0x16a864u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x16a868: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x16A868u;
    {
        const bool branch_taken_0x16a868 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a868) {
            ctx->pc = 0x16A8A4u;
            goto label_16a8a4;
        }
    }
    ctx->pc = 0x16A870u;
label_16a870:
    // 0x16a870: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16a870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16a874: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16a874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a878: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x16a878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16a87c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x16a87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16a880: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x16a880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
    // 0x16a884: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x16a884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x16a888: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x16a888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16a88c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16a88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a890: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16a890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a894: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x16A894u;
    SET_GPR_U32(ctx, 31, 0x16A89Cu);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x16A894u, 0x16A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A89Cu;
label_16a89c:
    // 0x16a89c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16A89Cu;
    {
        const bool branch_taken_0x16a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a89c) {
            ctx->pc = 0x16A8F8u;
            goto label_16a8f8;
        }
    }
    ctx->pc = 0x16A8A4u;
label_16a8a4:
    // 0x16a8a4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16a8a8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16a8ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16a8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8b0: 0x3c06004e  lui         $a2, 0x4E
    ctx->pc = 0x16a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)78 << 16));
    // 0x16a8b4: 0x24c64268  addiu       $a2, $a2, 0x4268
    ctx->pc = 0x16a8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17000));
    // 0x16a8b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16a8b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8bc: 0xc08c800  jal         func_232000
    ctx->pc = 0x16A8BCu;
    SET_GPR_U32(ctx, 31, 0x16A8C4u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x16A8BCu, 0x16A8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8C4u;
label_16a8c4:
    // 0x16a8c4: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16a8c8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16a8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16a8cc: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x16a8ccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16a8d0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16a8d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16a8d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16a8d8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x16a8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x16a8dc: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x16a8dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x16a8e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16a8e4: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x16a8e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x16a8e8: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16a8ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x16a8ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8f0: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x16A8F0u;
    SET_GPR_U32(ctx, 31, 0x16A8F8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x16A8F0u, 0x16A8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A8F8u;
label_16a8f8:
    // 0x16a8f8: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x16a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x16a8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16a8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a900: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x16a900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a904: 0xc05ac38  jal         func_16B0E0
    ctx->pc = 0x16A904u;
    SET_GPR_U32(ctx, 31, 0x16A90Cu);
    ctx->pc = 0x16B0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B0E0u, 0x16A904u, 0x16A90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A90Cu;
label_16a90c:
    // 0x16a90c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16a90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16a910: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x16a910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
    // 0x16a914: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x16a914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a918: 0xc042330  jal         func_108CC0
    ctx->pc = 0x16A918u;
    SET_GPR_U32(ctx, 31, 0x16A920u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x16A918u, 0x16A920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A920u;
label_16a920:
    // 0x16a920: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x16a920u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a924: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x16a924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a928: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x16a928u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a92c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x16a92cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a930: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a934: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x16A934u;
    {
        const bool branch_taken_0x16a934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a934) {
            ctx->pc = 0x16B07Cu;
            goto label_16b07c;
        }
    }
    ctx->pc = 0x16A93Cu;
label_16a93c:
    // 0x16a93c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16a93cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a940: 0x12e0000e  beqz        $s7, . + 4 + (0xE << 2)
    ctx->pc = 0x16A940u;
    {
        const bool branch_taken_0x16a940 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a940) {
            ctx->pc = 0x16A97Cu;
            goto label_16a97c;
        }
    }
    ctx->pc = 0x16A948u;
    // 0x16a948: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a94c: 0xc042320  jal         func_108C80
    ctx->pc = 0x16A94Cu;
    SET_GPR_U32(ctx, 31, 0x16A954u);
    ctx->pc = 0x108C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C80u, 0x16A94Cu, 0x16A954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A954u;
label_16a954:
    // 0x16a954: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x16a954u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16a958: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A958u;
    {
        const bool branch_taken_0x16a958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a958) {
            ctx->pc = 0x16A97Cu;
            goto label_16a97c;
        }
    }
    ctx->pc = 0x16A960u;
    // 0x16a960: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16a960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a964: 0xc04939c  jal         func_124E70
    ctx->pc = 0x16A964u;
    SET_GPR_U32(ctx, 31, 0x16A96Cu);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x16A964u, 0x16A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A96Cu;
label_16a96c:
    // 0x16a96c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16a96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16a970: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x16a970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a974: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16a974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16a978: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16a978u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16a97c:
    // 0x16a97c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A97Cu;
    {
        const bool branch_taken_0x16a97c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a97c) {
            ctx->pc = 0x16A994u;
            goto label_16a994;
        }
    }
    ctx->pc = 0x16A984u;
    // 0x16a984: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x16a984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a988: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x16a988u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a98c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x16A98Cu;
    {
        const bool branch_taken_0x16a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a98c) {
            ctx->pc = 0x16AA08u;
            goto label_16aa08;
        }
    }
    ctx->pc = 0x16A994u;
label_16a994:
    // 0x16a994: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16a994u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a998: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16A998u;
    {
        const bool branch_taken_0x16a998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a998) {
            ctx->pc = 0x16A9FCu;
            goto label_16a9fc;
        }
    }
    ctx->pc = 0x16A9A0u;
label_16a9a0:
    // 0x16a9a0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x16a9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16a9a4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x16a9a8: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x16a9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16a9ac: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x16a9acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16a9b0: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x16a9b4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x16a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16a9b8: 0x45082a  slt         $at, $v0, $a1
    ctx->pc = 0x16a9b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x16a9bc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A9BCu;
    {
        const bool branch_taken_0x16a9bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9bc) {
            ctx->pc = 0x16A9D4u;
            goto label_16a9d4;
        }
    }
    ctx->pc = 0x16A9C4u;
    // 0x16a9c4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x16a9c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9c8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x16a9c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a9cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x16A9CCu;
    {
        const bool branch_taken_0x16a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a9cc) {
            ctx->pc = 0x16AA08u;
            goto label_16aa08;
        }
    }
    ctx->pc = 0x16A9D4u;
label_16a9d4:
    // 0x16a9d4: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x16a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16a9d8: 0x2452021  addu        $a0, $s2, $a1
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x16a9dc: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x16a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x16a9e0: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16a9e4: 0x2871021  addu        $v0, $s4, $a3
    ctx->pc = 0x16a9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x16a9e8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x16a9ec: 0xc3202a  slt         $a0, $a2, $v1
    ctx->pc = 0x16a9ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16a9f0: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A9F0u;
    {
        const bool branch_taken_0x16a9f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a9f0) {
            ctx->pc = 0x16AA08u;
            goto label_16aa08;
        }
    }
    ctx->pc = 0x16A9F8u;
    // 0x16a9f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16a9fc:
    // 0x16a9fc: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x16a9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x16aa00: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x16AA00u;
    {
        const bool branch_taken_0x16aa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16aa00) {
            ctx->pc = 0x16A9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a9a0;
        }
    }
    ctx->pc = 0x16AA08u;
label_16aa08:
    // 0x16aa08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16aa08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa0c: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x16AA0Cu;
    {
        const bool branch_taken_0x16aa0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa0c) {
            ctx->pc = 0x16AFC4u;
            goto label_16afc4;
        }
    }
    ctx->pc = 0x16AA14u;
label_16aa14:
    // 0x16aa14: 0x26270061  addiu       $a3, $s1, 0x61
    ctx->pc = 0x16aa14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 97));
    // 0x16aa18: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x16aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16aa1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16aa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16aa20: 0x24a54278  addiu       $a1, $a1, 0x4278
    ctx->pc = 0x16aa20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17016));
    // 0x16aa24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16aa24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aa28: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x16AA28u;
    SET_GPR_U32(ctx, 31, 0x16AA30u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16AA28u, 0x16AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA30u;
label_16aa30:
    // 0x16aa30: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aa34: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x16aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16aa38: 0xc05621c  jal         func_158870
    ctx->pc = 0x16AA38u;
    SET_GPR_U32(ctx, 31, 0x16AA40u);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x16AA38u, 0x16AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AA40u;
label_16aa40:
    // 0x16aa40: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16aa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aa44: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16aa44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16aa48: 0x703021  addu        $a2, $v1, $s0
    ctx->pc = 0x16aa48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16aa4c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x16aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x16aa50: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x16aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x16aa54: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16aa58: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x16aa58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16aa5c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x16aa5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x16aa60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16aa64: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x16aa64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aa68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16aa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16aa6c: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x16aa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16aa70: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x16aa70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16aa74: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x16aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x16aa78: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x16aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16aa7c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16aa80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16aa80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16aa84: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16aa88: 0x1040014c  beqz        $v0, . + 4 + (0x14C << 2)
    ctx->pc = 0x16AA88u;
    {
        const bool branch_taken_0x16aa88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aa88) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AA90u;
    // 0x16aa90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x16aa90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16aa94: 0x122400f8  beq         $s1, $a0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x16AA94u;
    {
        const bool branch_taken_0x16aa94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x16aa94) {
            ctx->pc = 0x16AE78u;
            goto label_16ae78;
        }
    }
    ctx->pc = 0x16AA9Cu;
    // 0x16aa9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x16aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16aaa0: 0x122500bb  beq         $s1, $a1, . + 4 + (0xBB << 2)
    ctx->pc = 0x16AAA0u;
    {
        const bool branch_taken_0x16aaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 5));
        if (branch_taken_0x16aaa0) {
            ctx->pc = 0x16AD90u;
            goto label_16ad90;
        }
    }
    ctx->pc = 0x16AAA8u;
    // 0x16aaa8: 0x122000a9  beqz        $s1, . + 4 + (0xA9 << 2)
    ctx->pc = 0x16AAA8u;
    {
        const bool branch_taken_0x16aaa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aaa8) {
            ctx->pc = 0x16AD50u;
            goto label_16ad50;
        }
    }
    ctx->pc = 0x16AAB0u;
    // 0x16aab0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16aab4: 0x12220021  beq         $s1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x16AAB4u;
    {
        const bool branch_taken_0x16aab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x16aab4) {
            ctx->pc = 0x16AB3Cu;
            goto label_16ab3c;
        }
    }
    ctx->pc = 0x16AABCu;
    // 0x16aabc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aac0: 0x12240003  beq         $s1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AAC0u;
    {
        const bool branch_taken_0x16aac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        if (branch_taken_0x16aac0) {
            ctx->pc = 0x16AAD0u;
            goto label_16aad0;
        }
    }
    ctx->pc = 0x16AAC8u;
    // 0x16aac8: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x16AAC8u;
    {
        const bool branch_taken_0x16aac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16aac8) {
            ctx->pc = 0x16AF84u;
            goto label_16af84;
        }
    }
    ctx->pc = 0x16AAD0u;
label_16aad0:
    // 0x16aad0: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16aad4: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x16aad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
    // 0x16aad8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aadc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aae0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x16aae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16aae4: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x16aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x16aae8: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x16aae8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16aaec: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x16aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x16aaf0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x16aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16aaf4: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x16aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16aaf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16aaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16aafc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x16aafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ab00: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x16ab04: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x16ab04u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ab08: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x16ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x16ab0c: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x16ab0cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16ab10: 0x8c460034  lw          $a2, 0x34($v0)
    ctx->pc = 0x16ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ab14: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x16ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab18: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x16ab18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ab1c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16ab1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab20: 0x27a7015c  addiu       $a3, $sp, 0x15C
    ctx->pc = 0x16ab20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
    // 0x16ab24: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16ab24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16ab28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab2c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16AB2Cu;
    SET_GPR_U32(ctx, 31, 0x16AB34u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16AB2Cu, 0x16AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB34u;
label_16ab34:
    // 0x16ab34: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x16AB34u;
    {
        const bool branch_taken_0x16ab34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab34) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AB3Cu;
label_16ab3c:
    // 0x16ab3c: 0x1240011f  beqz        $s2, . + 4 + (0x11F << 2)
    ctx->pc = 0x16AB3Cu;
    {
        const bool branch_taken_0x16ab3c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab3c) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AB44u;
    // 0x16ab44: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x16ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x16ab48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x16ab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab4c: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x16AB4Cu;
    SET_GPR_U32(ctx, 31, 0x16AB54u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x16AB4Cu, 0x16AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AB54u;
label_16ab54:
    // 0x16ab54: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x16ab54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x16ab58: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
    ctx->pc = 0x16AB58u;
    {
        const bool branch_taken_0x16ab58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab58) {
            ctx->pc = 0x16AC20u;
            goto label_16ac20;
        }
    }
    ctx->pc = 0x16AB60u;
    // 0x16ab60: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ab64: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16ab64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ab68: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ab6c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16ab70: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ab74: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x16ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ab78: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x16ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ab7c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ab80: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ab84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16ab84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ab88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16ab8c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x16ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x16ab90: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ab94: 0xc78c8278  lwc1        $f12, -0x7D88($gp)
    ctx->pc = 0x16ab94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16ab98: 0xc78d8278  lwc1        $f13, -0x7D88($gp)
    ctx->pc = 0x16ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x16ab9c: 0xc78e8280  lwc1        $f14, -0x7D80($gp)
    ctx->pc = 0x16ab9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16aba0: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x16ABA0u;
    SET_GPR_U32(ctx, 31, 0x16ABA8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x16ABA0u, 0x16ABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABA8u;
label_16aba8:
    // 0x16aba8: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16abac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16abacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16abb0: 0x24a54288  addiu       $a1, $a1, 0x4288
    ctx->pc = 0x16abb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17032));
    // 0x16abb4: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x16ABB4u;
    SET_GPR_U32(ctx, 31, 0x16ABBCu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16ABB4u, 0x16ABBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABBCu;
label_16abbc:
    // 0x16abbc: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x16abc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16abc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16abc4: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x16ABC4u;
    SET_GPR_U32(ctx, 31, 0x16ABCCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16ABC4u, 0x16ABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABCCu;
label_16abcc:
    // 0x16abcc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16abccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16abd0: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16abd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16abd4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16abd8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16abdc: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16abe0: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16abe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16abe4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16abe8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16abec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16abf0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16abf4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16abf8: 0x27a60148  addiu       $a2, $sp, 0x148
    ctx->pc = 0x16abf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x16abfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ac00: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x16AC00u;
    SET_GPR_U32(ctx, 31, 0x16AC08u);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16AC00u, 0x16AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC08u;
label_16ac08:
    // 0x16ac08: 0x27a40148  addiu       $a0, $sp, 0x148
    ctx->pc = 0x16ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
    // 0x16ac0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ac10: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x16AC10u;
    SET_GPR_U32(ctx, 31, 0x16AC18u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16AC10u, 0x16AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC18u;
label_16ac18:
    // 0x16ac18: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x16AC18u;
    {
        const bool branch_taken_0x16ac18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ac18) {
            ctx->pc = 0x16ACECu;
            goto label_16acec;
        }
    }
    ctx->pc = 0x16AC20u;
label_16ac20:
    // 0x16ac20: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ac24: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ac28: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16ac28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ac2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16ac30: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ac34: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ac38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ac3c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ac40: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ac40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ac44: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ac48: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac4c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16ac4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ac50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac54: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x16ac54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16ac58: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ac58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ac5c: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x16ac5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x16ac60: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16ac60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ac64: 0xc78e8278  lwc1        $f14, -0x7D88($gp)
    ctx->pc = 0x16ac64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x16ac68: 0xc08c4d0  jal         func_231340
    ctx->pc = 0x16AC68u;
    SET_GPR_U32(ctx, 31, 0x16AC70u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x16AC68u, 0x16AC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC70u;
label_16ac70:
    // 0x16ac70: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x16ac70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x16ac74: 0x26450034  addiu       $a1, $s2, 0x34
    ctx->pc = 0x16ac74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 52));
    // 0x16ac78: 0xc040304  jal         func_100C10
    ctx->pc = 0x16AC78u;
    SET_GPR_U32(ctx, 31, 0x16AC80u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x16AC78u, 0x16AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC80u;
label_16ac80:
    // 0x16ac80: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x16ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x16ac84: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x16ac84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x16ac88: 0xc119568  jal         func_4655A0
    ctx->pc = 0x16AC88u;
    SET_GPR_U32(ctx, 31, 0x16AC90u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x16AC88u, 0x16AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AC90u;
label_16ac90:
    // 0x16ac90: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x16ac90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x16ac94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ac98: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x16AC98u;
    SET_GPR_U32(ctx, 31, 0x16ACA0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x16AC98u, 0x16ACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACA0u;
label_16aca0:
    // 0x16aca0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aca4: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aca8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16acac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16acacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16acb0: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16acb4: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16acb8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16acbc: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16acc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16acc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16acc4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16acc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16acc8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16acc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16accc: 0x27a60138  addiu       $a2, $sp, 0x138
    ctx->pc = 0x16acccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x16acd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16acd4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x16ACD4u;
    SET_GPR_U32(ctx, 31, 0x16ACDCu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16ACD4u, 0x16ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACDCu;
label_16acdc:
    // 0x16acdc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x16acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
    // 0x16ace0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ace4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x16ACE4u;
    SET_GPR_U32(ctx, 31, 0x16ACECu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16ACE4u, 0x16ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ACECu;
label_16acec:
    // 0x16acec: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x16acecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16acf0: 0xe7a00158  swc1        $f0, 0x158($sp)
    ctx->pc = 0x16acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x16acf4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16acf8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16acf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16acfc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ad00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16ad00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16ad04: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ad08: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ad0c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ad10: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ad14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ad18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ad1c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x16ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x16ad20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x16ad20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ad24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x16ad28: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x16ad28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x16ad2c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ad30: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16ad30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ad34: 0x27a70158  addiu       $a3, $sp, 0x158
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
    // 0x16ad38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16ad38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16ad3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad40: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16AD40u;
    SET_GPR_U32(ctx, 31, 0x16AD48u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16AD40u, 0x16AD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD48u;
label_16ad48:
    // 0x16ad48: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x16AD48u;
    {
        const bool branch_taken_0x16ad48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad48) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AD50u;
label_16ad50:
    // 0x16ad50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ad54: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16ad54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ad58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16ad58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ad5c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16ad5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16ad60: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ad64: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ad68: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16ad68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ad6c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ad70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ad74: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ad78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16ad78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x16ad7c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16ad7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ad80: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x16AD80u;
    SET_GPR_U32(ctx, 31, 0x16AD88u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x16AD80u, 0x16AD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AD88u;
label_16ad88:
    // 0x16ad88: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x16AD88u;
    {
        const bool branch_taken_0x16ad88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ad88) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AD90u;
label_16ad90:
    // 0x16ad90: 0x10120028  beq         $zero, $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x16AD90u;
    {
        const bool branch_taken_0x16ad90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x16ad90) {
            ctx->pc = 0x16AE34u;
            goto label_16ae34;
        }
    }
    ctx->pc = 0x16AD98u;
    // 0x16ad98: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x16ad98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16ad9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16ad9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16ada0: 0x24a54298  addiu       $a1, $a1, 0x4298
    ctx->pc = 0x16ada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17048));
    // 0x16ada4: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x16ada4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ada8: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16adac: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x16ADACu;
    SET_GPR_U32(ctx, 31, 0x16ADB4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16ADACu, 0x16ADB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADB4u;
label_16adb4:
    // 0x16adb4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16adb8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16adb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16adbc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16adc0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16adc4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16adc8: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16adc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16adcc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16adccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16add0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16add0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16add4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16add8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16add8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16addc: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16addcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ade0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x16ade0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x16ade4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16ade4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade8: 0xc08c800  jal         func_232000
    ctx->pc = 0x16ADE8u;
    SET_GPR_U32(ctx, 31, 0x16ADF0u);
    ctx->pc = 0x232000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232000u, 0x16ADE8u, 0x16ADF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ADF0u;
label_16adf0:
    // 0x16adf0: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x16adf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16adf4: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16adf8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16adf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16adfc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16adfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ae00: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x16ae00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x16ae04: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16ae04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ae08: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x16ae08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ae0c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16ae10: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ae14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16ae18: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ae1c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16ae1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16ae20: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x16ae20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae24: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16AE24u;
    SET_GPR_U32(ctx, 31, 0x16AE2Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16AE24u, 0x16AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE2Cu;
label_16ae2c:
    // 0x16ae2c: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x16AE2Cu;
    {
        const bool branch_taken_0x16ae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae2c) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AE34u;
label_16ae34:
    // 0x16ae34: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ae38: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16ae3c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16ae40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16ae44: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ae48: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x16ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x16ae4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ae50: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16ae54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16ae58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ae5c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x16ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x16ae60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ae60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16ae64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ae68: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16AE68u;
    SET_GPR_U32(ctx, 31, 0x16AE70u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16AE68u, 0x16AE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AE70u;
label_16ae70:
    // 0x16ae70: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x16AE70u;
    {
        const bool branch_taken_0x16ae70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae70) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AE78u;
label_16ae78:
    // 0x16ae78: 0x10120030  beq         $zero, $s2, . + 4 + (0x30 << 2)
    ctx->pc = 0x16AE78u;
    {
        const bool branch_taken_0x16ae78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x16ae78) {
            ctx->pc = 0x16AF3Cu;
            goto label_16af3c;
        }
    }
    ctx->pc = 0x16AE80u;
    // 0x16ae80: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x16ae80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16ae84: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x16AE84u;
    {
        const bool branch_taken_0x16ae84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae84) {
            ctx->pc = 0x16AF3Cu;
            goto label_16af3c;
        }
    }
    ctx->pc = 0x16AE8Cu;
    // 0x16ae8c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x16ae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x16ae90: 0x10c0002a  beqz        $a2, . + 4 + (0x2A << 2)
    ctx->pc = 0x16AE90u;
    {
        const bool branch_taken_0x16ae90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ae90) {
            ctx->pc = 0x16AF3Cu;
            goto label_16af3c;
        }
    }
    ctx->pc = 0x16AE98u;
    // 0x16ae98: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x16ae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ae9c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16ae9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16aea0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16aea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16aea4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16aea8: 0x27858f48  addiu       $a1, $gp, -0x70B8
    ctx->pc = 0x16aea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938440));
    // 0x16aeac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16aeacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aeb0: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x16AEB0u;
    SET_GPR_U32(ctx, 31, 0x16AEB8u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x16AEB0u, 0x16AEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEB8u;
label_16aeb8:
    // 0x16aeb8: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x16aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aebc: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16aebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aec0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x16aec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16aec4: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x16aec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16aec8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x16aec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16aecc: 0x8c66005c  lw          $a2, 0x5C($v1)
    ctx->pc = 0x16aeccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x16aed0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x16aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x16aed4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x16aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16aed8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x16aed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16aedc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16aedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16aee0: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x16aee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x16aee4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16aee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16aee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16aeec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16aeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aef0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16AEF0u;
    SET_GPR_U32(ctx, 31, 0x16AEF8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16AEF0u, 0x16AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AEF8u;
label_16aef8:
    // 0x16aef8: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16aef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16aefc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16aefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16af00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16af04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x16af04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x16af08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16af08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16af0c: 0x8c85005c  lw          $a1, 0x5C($a0)
    ctx->pc = 0x16af0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x16af10: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x16af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16af14: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16af14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16af18: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16af18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16af1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16af20: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16af20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16af24: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x16af24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x16af28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16af28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16af2c: 0xc08c32c  jal         func_230CB0
    ctx->pc = 0x16AF2Cu;
    SET_GPR_U32(ctx, 31, 0x16AF34u);
    ctx->pc = 0x230CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230CB0u, 0x16AF2Cu, 0x16AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF34u;
label_16af34:
    // 0x16af34: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x16AF34u;
    {
        const bool branch_taken_0x16af34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16af34) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AF3Cu;
label_16af3c:
    // 0x16af3c: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16af3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af40: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x16af40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af44: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x16af44u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16af48: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x16af48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x16af4c: 0x23880  sll         $a3, $v0, 2
    ctx->pc = 0x16af4cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16af50: 0x8c84005c  lw          $a0, 0x5C($a0)
    ctx->pc = 0x16af50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x16af54: 0x872821  addu        $a1, $a0, $a3
    ctx->pc = 0x16af54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x16af58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x16af58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16af5c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x16af5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16af60: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x16af60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16af64: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x16af64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16af68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16af68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16af6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af70: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16AF70u;
    SET_GPR_U32(ctx, 31, 0x16AF78u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16AF70u, 0x16AF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AF78u;
label_16af78:
    // 0x16af78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16af78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16af7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x16AF7Cu;
    {
        const bool branch_taken_0x16af7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16af7c) {
            ctx->pc = 0x16AFBCu;
            goto label_16afbc;
        }
    }
    ctx->pc = 0x16AF84u;
label_16af84:
    // 0x16af84: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16af84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af88: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x16af88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16af8c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x16af8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16af90: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x16af90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x16af94: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16af94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16af98: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x16af98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x16af9c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x16af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16afa0: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x16afa0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x16afa4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x16afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x16afa8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16afa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16afac: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16afacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16afb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16afb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16afb4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x16AFB4u;
    SET_GPR_U32(ctx, 31, 0x16AFBCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x16AFB4u, 0x16AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFBCu;
label_16afbc:
    // 0x16afbc: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x16afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x16afc0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x16afc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_16afc4:
    // 0x16afc4: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x16afc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x16afc8: 0x1440fe92  bnez        $v0, . + 4 + (-0x16E << 2)
    ctx->pc = 0x16AFC8u;
    {
        const bool branch_taken_0x16afc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16afc8) {
            ctx->pc = 0x16AA14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aa14;
        }
    }
    ctx->pc = 0x16AFD0u;
    // 0x16afd0: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x16afd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x16afd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16afd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16afd8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x16AFD8u;
    {
        const bool branch_taken_0x16afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16afd8) {
            ctx->pc = 0x16B074u;
            goto label_16b074;
        }
    }
    ctx->pc = 0x16AFE0u;
    // 0x16afe0: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x16afe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x16afe4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16afe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16afe8: 0x24a542b0  addiu       $a1, $a1, 0x42B0
    ctx->pc = 0x16afe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17072));
    // 0x16afec: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x16AFECu;
    SET_GPR_U32(ctx, 31, 0x16AFF4u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x16AFECu, 0x16AFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16AFF4u;
label_16aff4:
    // 0x16aff4: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x16aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x16aff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16aff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16affc: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x16AFFCu;
    SET_GPR_U32(ctx, 31, 0x16B004u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x16AFFCu, 0x16B004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B004u;
label_16b004:
    // 0x16b004: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x16b004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x16b008: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x16b008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x16b00c: 0xc1194c4  jal         func_465310
    ctx->pc = 0x16B00Cu;
    SET_GPR_U32(ctx, 31, 0x16B014u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x16B00Cu, 0x16B014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B014u;
label_16b014:
    // 0x16b014: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16b014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16b018: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x16b018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16b01c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x16b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16b020: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x16b020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16b024: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x16b024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16b028: 0x8cc4005c  lw          $a0, 0x5C($a2)
    ctx->pc = 0x16b028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
    // 0x16b02c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x16b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x16b030: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x16b030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x16b034: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x16b034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x16b038: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x16b038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b03c: 0x27a60128  addiu       $a2, $sp, 0x128
    ctx->pc = 0x16b03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x16b040: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16b040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b044: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x16B044u;
    SET_GPR_U32(ctx, 31, 0x16B04Cu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x16B044u, 0x16B04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B04Cu;
label_16b04c:
    // 0x16b04c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16b04cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b050: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x16b050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x16b054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16b054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b058: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b05c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x16B05Cu;
    SET_GPR_U32(ctx, 31, 0x16B064u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x16B05Cu, 0x16B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B064u;
label_16b064:
    // 0x16b064: 0x27a40128  addiu       $a0, $sp, 0x128
    ctx->pc = 0x16b064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
    // 0x16b068: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b06c: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x16B06Cu;
    SET_GPR_U32(ctx, 31, 0x16B074u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x16B06Cu, 0x16B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B074u;
label_16b074:
    // 0x16b074: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16b074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16b078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16b07c:
    // 0x16b07c: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x16b07cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x16b080: 0x1460fe2e  bnez        $v1, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x16B080u;
    {
        const bool branch_taken_0x16b080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b080) {
            ctx->pc = 0x16A93Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16a93c;
        }
    }
    ctx->pc = 0x16B088u;
    // 0x16b088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16b088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b08c: 0x12a20002  beq         $s5, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x16B08Cu;
    {
        const bool branch_taken_0x16b08c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x16b08c) {
            ctx->pc = 0x16B098u;
            goto label_16b098;
        }
    }
    ctx->pc = 0x16B094u;
    // 0x16b094: 0xaf95bac8  sw          $s5, -0x4538($gp)
    ctx->pc = 0x16b094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949576), GPR_U32(ctx, 21));
label_16b098:
    // 0x16b098: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x16b098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x16b09c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16b09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0a0: 0xc05ace8  jal         func_16B3A0
    ctx->pc = 0x16B0A0u;
    SET_GPR_U32(ctx, 31, 0x16B0A8u);
    ctx->pc = 0x16B3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B3A0u, 0x16B0A0u, 0x16B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0A8u;
label_16b0a8:
    // 0x16b0a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x16b0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16b0ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x16b0acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16b0b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x16b0b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16b0b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x16b0b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16b0b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16b0b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16b0bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x16b0bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16b0c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16b0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b0c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16b0c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b0c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16b0c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b0cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16b0ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b0d0: 0x27bd0170  addiu       $sp, $sp, 0x170
    ctx->pc = 0x16b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x16b0d4: 0x3e00008  jr          $ra
    ctx->pc = 0x16B0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B0DCu;
    // 0x16b0dc: 0x0  nop
    ctx->pc = 0x16b0dcu;
    // NOP
    ctx->pc = 0x16b0e0u;
}
