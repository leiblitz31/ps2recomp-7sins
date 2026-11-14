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

// Function: sub_00138770
// Address: 0x138770 - 0x138900
void sub_00138770_0x138770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138770_0x138770");
#endif

    switch (ctx->pc) {
        case 0x138770u: goto label_138770;
        case 0x138774u: goto label_138774;
        case 0x138778u: goto label_138778;
        case 0x13877cu: goto label_13877c;
        case 0x138780u: goto label_138780;
        case 0x138784u: goto label_138784;
        case 0x138788u: goto label_138788;
        case 0x13878cu: goto label_13878c;
        case 0x138790u: goto label_138790;
        case 0x138794u: goto label_138794;
        case 0x138798u: goto label_138798;
        case 0x13879cu: goto label_13879c;
        case 0x1387a0u: goto label_1387a0;
        case 0x1387a4u: goto label_1387a4;
        case 0x1387a8u: goto label_1387a8;
        case 0x1387acu: goto label_1387ac;
        case 0x1387b0u: goto label_1387b0;
        case 0x1387b4u: goto label_1387b4;
        case 0x1387b8u: goto label_1387b8;
        case 0x1387bcu: goto label_1387bc;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387c4u: goto label_1387c4;
        case 0x1387c8u: goto label_1387c8;
        case 0x1387ccu: goto label_1387cc;
        case 0x1387d0u: goto label_1387d0;
        case 0x1387d4u: goto label_1387d4;
        case 0x1387d8u: goto label_1387d8;
        case 0x1387dcu: goto label_1387dc;
        case 0x1387e0u: goto label_1387e0;
        case 0x1387e4u: goto label_1387e4;
        case 0x1387e8u: goto label_1387e8;
        case 0x1387ecu: goto label_1387ec;
        case 0x1387f0u: goto label_1387f0;
        case 0x1387f4u: goto label_1387f4;
        case 0x1387f8u: goto label_1387f8;
        case 0x1387fcu: goto label_1387fc;
        case 0x138800u: goto label_138800;
        case 0x138804u: goto label_138804;
        case 0x138808u: goto label_138808;
        case 0x13880cu: goto label_13880c;
        case 0x138810u: goto label_138810;
        case 0x138814u: goto label_138814;
        case 0x138818u: goto label_138818;
        case 0x13881cu: goto label_13881c;
        case 0x138820u: goto label_138820;
        case 0x138824u: goto label_138824;
        case 0x138828u: goto label_138828;
        case 0x13882cu: goto label_13882c;
        case 0x138830u: goto label_138830;
        case 0x138834u: goto label_138834;
        case 0x138838u: goto label_138838;
        case 0x13883cu: goto label_13883c;
        case 0x138840u: goto label_138840;
        case 0x138844u: goto label_138844;
        case 0x138848u: goto label_138848;
        case 0x13884cu: goto label_13884c;
        case 0x138850u: goto label_138850;
        case 0x138854u: goto label_138854;
        case 0x138858u: goto label_138858;
        case 0x13885cu: goto label_13885c;
        case 0x138860u: goto label_138860;
        case 0x138864u: goto label_138864;
        case 0x138868u: goto label_138868;
        case 0x13886cu: goto label_13886c;
        case 0x138870u: goto label_138870;
        case 0x138874u: goto label_138874;
        case 0x138878u: goto label_138878;
        case 0x13887cu: goto label_13887c;
        case 0x138880u: goto label_138880;
        case 0x138884u: goto label_138884;
        case 0x138888u: goto label_138888;
        case 0x13888cu: goto label_13888c;
        case 0x138890u: goto label_138890;
        case 0x138894u: goto label_138894;
        case 0x138898u: goto label_138898;
        case 0x13889cu: goto label_13889c;
        case 0x1388a0u: goto label_1388a0;
        case 0x1388a4u: goto label_1388a4;
        case 0x1388a8u: goto label_1388a8;
        case 0x1388acu: goto label_1388ac;
        case 0x1388b0u: goto label_1388b0;
        case 0x1388b4u: goto label_1388b4;
        case 0x1388b8u: goto label_1388b8;
        case 0x1388bcu: goto label_1388bc;
        case 0x1388c0u: goto label_1388c0;
        case 0x1388c4u: goto label_1388c4;
        case 0x1388c8u: goto label_1388c8;
        case 0x1388ccu: goto label_1388cc;
        case 0x1388d0u: goto label_1388d0;
        case 0x1388d4u: goto label_1388d4;
        case 0x1388d8u: goto label_1388d8;
        case 0x1388dcu: goto label_1388dc;
        case 0x1388e0u: goto label_1388e0;
        case 0x1388e4u: goto label_1388e4;
        case 0x1388e8u: goto label_1388e8;
        case 0x1388ecu: goto label_1388ec;
        case 0x1388f0u: goto label_1388f0;
        case 0x1388f4u: goto label_1388f4;
        case 0x1388f8u: goto label_1388f8;
        case 0x1388fcu: goto label_1388fc;
        default: break;
    }

    ctx->pc = 0x138770u;

label_138770:
    // 0x138770: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_138774:
    // 0x138774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x138774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_138778:
    // 0x138778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13877c:
    // 0x13877c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13877cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_138780:
    // 0x138780: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x138780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_138784:
    // 0x138784: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_138788:
    // 0x138788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x138788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13878c:
    // 0x13878c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x13878cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_138790:
    // 0x138790: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x138790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_138794:
    // 0x138794: 0x40f809  jalr        $v0
label_138798:
    if (ctx->pc == 0x138798u) {
        ctx->pc = 0x13879Cu;
        goto label_13879c;
    }
    ctx->pc = 0x138794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13879Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138794u, 0x13879Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13879Cu;
label_13879c:
    // 0x13879c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1387a0:
    // 0x1387a0: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1387a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1387a4:
    // 0x1387a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1387a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1387a8:
    // 0x1387a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1387a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1387ac:
    // 0x1387ac: 0x320f809  jalr        $t9
label_1387b0:
    if (ctx->pc == 0x1387B0u) {
        ctx->pc = 0x1387B4u;
        goto label_1387b4;
    }
    ctx->pc = 0x1387ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1387B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1387ACu, 0x1387B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1387B4u;
label_1387b4:
    // 0x1387b4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1387b8:
    // 0x1387b8: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_1387bc:
    // 0x1387bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1387bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1387c0:
    // 0x1387c0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1387c4:
    // 0x1387c4: 0x320f809  jalr        $t9
label_1387c8:
    if (ctx->pc == 0x1387C8u) {
        ctx->pc = 0x1387CCu;
        goto label_1387cc;
    }
    ctx->pc = 0x1387C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1387CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1387C4u, 0x1387CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1387CCu;
label_1387cc:
    // 0x1387cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1387d0:
    // 0x1387d0: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1387d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1387d4:
    // 0x1387d4: 0xc042514  jal         func_109450
label_1387d8:
    if (ctx->pc == 0x1387D8u) {
        ctx->pc = 0x1387DCu;
        goto label_1387dc;
    }
    ctx->pc = 0x1387D4u;
    SET_GPR_U32(ctx, 31, 0x1387DCu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x1387D4u, 0x1387DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387DCu;
label_1387dc:
    // 0x1387dc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1387e0:
    if (ctx->pc == 0x1387E0u) {
        ctx->pc = 0x1387E4u;
        goto label_1387e4;
    }
    ctx->pc = 0x1387DCu;
    {
        const bool branch_taken_0x1387dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1387dc) {
            ctx->pc = 0x138874u;
            goto label_138874;
        }
    }
    ctx->pc = 0x1387E4u;
label_1387e4:
    // 0x1387e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1387e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1387e8:
    // 0x1387e8: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x1387e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1387ec:
    // 0x1387ec: 0xc041b38  jal         func_106CE0
label_1387f0:
    if (ctx->pc == 0x1387F0u) {
        ctx->pc = 0x1387F4u;
        goto label_1387f4;
    }
    ctx->pc = 0x1387ECu;
    SET_GPR_U32(ctx, 31, 0x1387F4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1387ECu, 0x1387F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387F4u;
label_1387f4:
    // 0x1387f4: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x1387f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_1387f8:
    // 0x1387f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1387f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1387fc:
    // 0x1387fc: 0xc08e57c  jal         func_2395F0
label_138800:
    if (ctx->pc == 0x138800u) {
        ctx->pc = 0x138804u;
        goto label_138804;
    }
    ctx->pc = 0x1387FCu;
    SET_GPR_U32(ctx, 31, 0x138804u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x1387FCu, 0x138804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138804u;
label_138804:
    // 0x138804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x138804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138808:
    // 0x138808: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x138808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13880c:
    // 0x13880c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x13880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_138810:
    // 0x138810: 0xc0eb3b4  jal         func_3ACED0
label_138814:
    if (ctx->pc == 0x138814u) {
        ctx->pc = 0x138818u;
        goto label_138818;
    }
    ctx->pc = 0x138810u;
    SET_GPR_U32(ctx, 31, 0x138818u);
    ctx->pc = 0x3ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACED0u, 0x138810u, 0x138818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138818u;
label_138818:
    // 0x138818: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x138818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13881c:
    // 0x13881c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x13881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_138820:
    // 0x138820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138824:
    // 0x138824: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x138824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_138828:
    // 0x138828: 0xc0eb3c8  jal         func_3ACF20
label_13882c:
    if (ctx->pc == 0x13882Cu) {
        ctx->pc = 0x138830u;
        goto label_138830;
    }
    ctx->pc = 0x138828u;
    SET_GPR_U32(ctx, 31, 0x138830u);
    ctx->pc = 0x3ACF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACF20u, 0x138828u, 0x138830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138830u;
label_138830:
    // 0x138830: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x138830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_138834:
    // 0x138834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138838:
    // 0x138838: 0xc04e240  jal         func_138900
label_13883c:
    if (ctx->pc == 0x13883Cu) {
        ctx->pc = 0x138840u;
        goto label_138840;
    }
    ctx->pc = 0x138838u;
    SET_GPR_U32(ctx, 31, 0x138840u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x138838u, 0x138840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138840u;
label_138840:
    // 0x138840: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_138844:
    // 0x138844: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x138844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_138848:
    // 0x138848: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x138848u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_13884c:
    // 0x13884c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x13884cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_138850:
    // 0x138850: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x138850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_138854:
    // 0x138854: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x138854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_138858:
    // 0x138858: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x138858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_13885c:
    // 0x13885c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13885cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138860:
    // 0x138860: 0x24c60054  addiu       $a2, $a2, 0x54
    ctx->pc = 0x138860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 84));
label_138864:
    // 0x138864: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x138864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138868:
    // 0x138868: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x138868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_13886c:
    // 0x13886c: 0xc0eb0ae  jal         func_3AC2B8
label_138870:
    if (ctx->pc == 0x138870u) {
        ctx->pc = 0x138874u;
        goto label_138874;
    }
    ctx->pc = 0x13886Cu;
    SET_GPR_U32(ctx, 31, 0x138874u);
    ctx->pc = 0x3AC2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC2B8u, 0x13886Cu, 0x138874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138874u;
label_138874:
    // 0x138874: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x138874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_138878:
    // 0x138878: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x138878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13887c:
    // 0x13887c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x13887cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_138880:
    // 0x138880: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x138880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_138884:
    // 0x138884: 0x40f809  jalr        $v0
label_138888:
    if (ctx->pc == 0x138888u) {
        ctx->pc = 0x13888Cu;
        goto label_13888c;
    }
    ctx->pc = 0x138884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13888Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138884u, 0x13888Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13888Cu;
label_13888c:
    // 0x13888c: 0xc05548c  jal         func_155230
label_138890:
    if (ctx->pc == 0x138890u) {
        ctx->pc = 0x138894u;
        goto label_138894;
    }
    ctx->pc = 0x13888Cu;
    SET_GPR_U32(ctx, 31, 0x138894u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x13888Cu, 0x138894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138894u;
label_138894:
    // 0x138894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138898:
    // 0x138898: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x138898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_13889c:
    // 0x13889c: 0xc0553d4  jal         func_154F50
label_1388a0:
    if (ctx->pc == 0x1388A0u) {
        ctx->pc = 0x1388A4u;
        goto label_1388a4;
    }
    ctx->pc = 0x13889Cu;
    SET_GPR_U32(ctx, 31, 0x1388A4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x13889Cu, 0x1388A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388A4u;
label_1388a4:
    // 0x1388a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1388a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1388a8:
    // 0x1388a8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1388ac:
    if (ctx->pc == 0x1388ACu) {
        ctx->pc = 0x1388B0u;
        goto label_1388b0;
    }
    ctx->pc = 0x1388A8u;
    {
        const bool branch_taken_0x1388a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388a8) {
            ctx->pc = 0x1388D8u;
            goto label_1388d8;
        }
    }
    ctx->pc = 0x1388B0u;
label_1388b0:
    // 0x1388b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1388b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1388b4:
    // 0x1388b4: 0xc0413bc  jal         func_104EF0
label_1388b8:
    if (ctx->pc == 0x1388B8u) {
        ctx->pc = 0x1388BCu;
        goto label_1388bc;
    }
    ctx->pc = 0x1388B4u;
    SET_GPR_U32(ctx, 31, 0x1388BCu);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x1388B4u, 0x1388BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388BCu;
label_1388bc:
    // 0x1388bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1388c0:
    if (ctx->pc == 0x1388C0u) {
        ctx->pc = 0x1388C4u;
        goto label_1388c4;
    }
    ctx->pc = 0x1388BCu;
    {
        const bool branch_taken_0x1388bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1388bc) {
            ctx->pc = 0x1388D8u;
            goto label_1388d8;
        }
    }
    ctx->pc = 0x1388C4u;
label_1388c4:
    // 0x1388c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1388c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1388c8:
    // 0x1388c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1388c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1388cc:
    // 0x1388cc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1388ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1388d0:
    // 0x1388d0: 0x320f809  jalr        $t9
label_1388d4:
    if (ctx->pc == 0x1388D4u) {
        ctx->pc = 0x1388D8u;
        goto label_1388d8;
    }
    ctx->pc = 0x1388D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1388D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1388D0u, 0x1388D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1388D8u;
label_1388d8:
    // 0x1388d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1388d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1388dc:
    // 0x1388dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1388dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1388e0:
    // 0x1388e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1388e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1388e4:
    // 0x1388e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1388e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1388e8:
    // 0x1388e8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1388e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1388ec:
    // 0x1388ec: 0x3e00008  jr          $ra
label_1388f0:
    if (ctx->pc == 0x1388F0u) {
        ctx->pc = 0x1388F4u;
        goto label_1388f4;
    }
    ctx->pc = 0x1388ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1388ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1388F4u;
label_1388f4:
    // 0x1388f4: 0x0  nop
    ctx->pc = 0x1388f4u;
    // NOP
label_1388f8:
    // 0x1388f8: 0x0  nop
    ctx->pc = 0x1388f8u;
    // NOP
label_1388fc:
    // 0x1388fc: 0x0  nop
    ctx->pc = 0x1388fcu;
    // NOP
    ctx->pc = 0x138900u;
}
