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

// Function: sub_001397C0
// Address: 0x1397c0 - 0x13a1c0
void sub_001397C0_0x1397c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001397C0_0x1397c0");
#endif

    switch (ctx->pc) {
        case 0x139818u: goto label_139818;
        case 0x139820u: goto label_139820;
        case 0x139834u: goto label_139834;
        case 0x139848u: goto label_139848;
        case 0x1398c0u: goto label_1398c0;
        case 0x1398e0u: goto label_1398e0;
        case 0x1398f8u: goto label_1398f8;
        case 0x139928u: goto label_139928;
        case 0x139950u: goto label_139950;
        case 0x139968u: goto label_139968;
        case 0x139980u: goto label_139980;
        case 0x1399acu: goto label_1399ac;
        case 0x1399c4u: goto label_1399c4;
        case 0x1399dcu: goto label_1399dc;
        case 0x139a40u: goto label_139a40;
        case 0x139a58u: goto label_139a58;
        case 0x139a70u: goto label_139a70;
        case 0x139a88u: goto label_139a88;
        case 0x139ad4u: goto label_139ad4;
        case 0x139b0cu: goto label_139b0c;
        case 0x139b28u: goto label_139b28;
        case 0x139b3cu: goto label_139b3c;
        case 0x139b78u: goto label_139b78;
        case 0x139b94u: goto label_139b94;
        case 0x139bb0u: goto label_139bb0;
        case 0x139bc0u: goto label_139bc0;
        case 0x139bd0u: goto label_139bd0;
        case 0x139c2cu: goto label_139c2c;
        case 0x139c3cu: goto label_139c3c;
        case 0x139c4cu: goto label_139c4c;
        case 0x139c70u: goto label_139c70;
        case 0x139c80u: goto label_139c80;
        case 0x139d3cu: goto label_139d3c;
        case 0x139d4cu: goto label_139d4c;
        case 0x139d88u: goto label_139d88;
        case 0x139da0u: goto label_139da0;
        case 0x139db0u: goto label_139db0;
        case 0x139df0u: goto label_139df0;
        case 0x139e08u: goto label_139e08;
        case 0x139e18u: goto label_139e18;
        case 0x139eecu: goto label_139eec;
        case 0x139f04u: goto label_139f04;
        case 0x139f14u: goto label_139f14;
        case 0x139fb0u: goto label_139fb0;
        case 0x13a01cu: goto label_13a01c;
        case 0x13a050u: goto label_13a050;
        case 0x13a060u: goto label_13a060;
        case 0x13a098u: goto label_13a098;
        case 0x13a0a8u: goto label_13a0a8;
        case 0x13a0e0u: goto label_13a0e0;
        case 0x13a0f0u: goto label_13a0f0;
        case 0x13a128u: goto label_13a128;
        case 0x13a138u: goto label_13a138;
        case 0x13a164u: goto label_13a164;
        case 0x13a170u: goto label_13a170;
        case 0x13a198u: goto label_13a198;
        case 0x13a1a4u: goto label_13a1a4;
        default: break;
    }

    ctx->pc = 0x1397c0u;

    // 0x1397c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1397c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1397c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1397c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1397c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1397c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1397cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1397ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1397d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1397d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1397d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1397d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1397d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1397d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1397dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1397e0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1397e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1397e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1397E4u;
    {
        const bool branch_taken_0x1397e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1397e4) {
            ctx->pc = 0x1397F8u;
            goto label_1397f8;
        }
    }
    ctx->pc = 0x1397ECu;
    // 0x1397ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1397ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1397f0: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1397F0u;
    {
        const bool branch_taken_0x1397f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1397f0) {
            ctx->pc = 0x139BD4u;
            goto label_139bd4;
        }
    }
    ctx->pc = 0x1397F8u;
label_1397f8:
    // 0x1397f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1397f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1397fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139800: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x139800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139804: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x139804u;
    {
        const bool branch_taken_0x139804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x139804) {
            ctx->pc = 0x139854u;
            goto label_139854;
        }
    }
    ctx->pc = 0x13980Cu;
    // 0x13980c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139810: 0xc04f974  jal         func_13E5D0
    ctx->pc = 0x139810u;
    SET_GPR_U32(ctx, 31, 0x139818u);
    ctx->pc = 0x13E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E5D0u, 0x139810u, 0x139818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139818u;
label_139818:
    // 0x139818: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x139818u;
    SET_GPR_U32(ctx, 31, 0x139820u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x139818u, 0x139820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139820u;
label_139820:
    // 0x139820: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139824: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x139824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x139828: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x139828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x13982c: 0xc089a88  jal         func_226A20
    ctx->pc = 0x13982Cu;
    SET_GPR_U32(ctx, 31, 0x139834u);
    ctx->pc = 0x226A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226A20u, 0x13982Cu, 0x139834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139834u;
label_139834:
    // 0x139834: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x139838: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13983c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13983cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139840: 0xc1226f4  jal         func_489BD0
    ctx->pc = 0x139840u;
    SET_GPR_U32(ctx, 31, 0x139848u);
    ctx->pc = 0x489BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489BD0u, 0x139840u, 0x139848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139848u;
label_139848:
    // 0x139848: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13984c: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x13984Cu;
    {
        const bool branch_taken_0x13984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13984c) {
            ctx->pc = 0x139BD4u;
            goto label_139bd4;
        }
    }
    ctx->pc = 0x139854u;
label_139854:
    // 0x139854: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139858: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x139858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13985c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13985Cu;
    {
        const bool branch_taken_0x13985c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13985c) {
            ctx->pc = 0x139870u;
            goto label_139870;
        }
    }
    ctx->pc = 0x139864u;
    // 0x139864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x139864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x139868: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x139868u;
    {
        const bool branch_taken_0x139868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139868) {
            ctx->pc = 0x139BD4u;
            goto label_139bd4;
        }
    }
    ctx->pc = 0x139870u;
label_139870:
    // 0x139870: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139878: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x139878u;
    {
        const bool branch_taken_0x139878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139878) {
            ctx->pc = 0x1399E8u;
            goto label_1399e8;
        }
    }
    ctx->pc = 0x139880u;
    // 0x139880: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139884: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x139884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139888: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x139888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x13988c: 0x2c410012  sltiu       $at, $v0, 0x12
    ctx->pc = 0x13988cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x139890: 0x1020007e  beqz        $at, . + 4 + (0x7E << 2)
    ctx->pc = 0x139890u;
    {
        const bool branch_taken_0x139890 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139890) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139898u;
    // 0x139898: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x139898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x13989c: 0x24638010  addiu       $v1, $v1, -0x7FF0
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934544));
    // 0x1398a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1398a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1398a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1398a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1398a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1398a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1398ac: 0x400008  jr          $v0
    ctx->pc = 0x1398ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1398B4u: goto label_1398b4;
            case 0x1398CCu: goto label_1398cc;
            case 0x1398D4u: goto label_1398d4;
            case 0x1398ECu: goto label_1398ec;
            case 0x139904u: goto label_139904;
            case 0x13990Cu: goto label_13990c;
            case 0x139914u: goto label_139914;
            case 0x13991Cu: goto label_13991c;
            case 0x139934u: goto label_139934;
            case 0x13993Cu: goto label_13993c;
            case 0x139944u: goto label_139944;
            case 0x13995Cu: goto label_13995c;
            case 0x139974u: goto label_139974;
            case 0x13998Cu: goto label_13998c;
            case 0x139994u: goto label_139994;
            case 0x1399A0u: goto label_1399a0;
            case 0x1399B8u: goto label_1399b8;
            case 0x1399D0u: goto label_1399d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1398ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1398B4u;
label_1398b4:
    // 0x1398b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1398b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1398b8: 0xc04e8b8  jal         func_13A2E0
    ctx->pc = 0x1398B8u;
    SET_GPR_U32(ctx, 31, 0x1398C0u);
    ctx->pc = 0x13A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A2E0u, 0x1398B8u, 0x1398C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398C0u;
label_1398c0:
    // 0x1398c0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1398c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1398c4: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x1398C4u;
    {
        const bool branch_taken_0x1398c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398c4) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1398CCu;
label_1398cc:
    // 0x1398cc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1398CCu;
    {
        const bool branch_taken_0x1398cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398cc) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1398D4u;
label_1398d4:
    // 0x1398d4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1398d8: 0xc04e980  jal         func_13A600
    ctx->pc = 0x1398D8u;
    SET_GPR_U32(ctx, 31, 0x1398E0u);
    ctx->pc = 0x13A600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A600u, 0x1398D8u, 0x1398E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398E0u;
label_1398e0:
    // 0x1398e0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1398e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1398e4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x1398E4u;
    {
        const bool branch_taken_0x1398e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398e4) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1398ECu;
label_1398ec:
    // 0x1398ec: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1398ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1398f0: 0xc04ea18  jal         func_13A860
    ctx->pc = 0x1398F0u;
    SET_GPR_U32(ctx, 31, 0x1398F8u);
    ctx->pc = 0x13A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A860u, 0x1398F0u, 0x1398F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1398F8u;
label_1398f8:
    // 0x1398f8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1398f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1398fc: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1398FCu;
    {
        const bool branch_taken_0x1398fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1398fc) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139904u;
label_139904:
    // 0x139904: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x139904u;
    {
        const bool branch_taken_0x139904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139904) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x13990Cu;
label_13990c:
    // 0x13990c: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x13990Cu;
    {
        const bool branch_taken_0x13990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13990c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139914u;
label_139914:
    // 0x139914: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x139914u;
    {
        const bool branch_taken_0x139914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139914) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x13991Cu;
label_13991c:
    // 0x13991c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139920: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x139920u;
    SET_GPR_U32(ctx, 31, 0x139928u);
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x139920u, 0x139928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139928u;
label_139928:
    // 0x139928: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139928u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13992c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x13992Cu;
    {
        const bool branch_taken_0x13992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13992c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139934u;
label_139934:
    // 0x139934: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x139934u;
    {
        const bool branch_taken_0x139934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139934) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x13993Cu;
label_13993c:
    // 0x13993c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x13993Cu;
    {
        const bool branch_taken_0x13993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13993c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139944u;
label_139944:
    // 0x139944: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139948: 0xc04eb74  jal         func_13ADD0
    ctx->pc = 0x139948u;
    SET_GPR_U32(ctx, 31, 0x139950u);
    ctx->pc = 0x13ADD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ADD0u, 0x139948u, 0x139950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139950u;
label_139950:
    // 0x139950: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139950u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139954: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x139954u;
    {
        const bool branch_taken_0x139954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139954) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x13995Cu;
label_13995c:
    // 0x13995c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x13995cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139960: 0xc04e8dc  jal         func_13A370
    ctx->pc = 0x139960u;
    SET_GPR_U32(ctx, 31, 0x139968u);
    ctx->pc = 0x13A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A370u, 0x139960u, 0x139968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139968u;
label_139968:
    // 0x139968: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139968u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13996c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x13996Cu;
    {
        const bool branch_taken_0x13996c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13996c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139974u;
label_139974:
    // 0x139974: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139978: 0xc04e90c  jal         func_13A430
    ctx->pc = 0x139978u;
    SET_GPR_U32(ctx, 31, 0x139980u);
    ctx->pc = 0x13A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A430u, 0x139978u, 0x139980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139980u;
label_139980:
    // 0x139980: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139980u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139984: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x139984u;
    {
        const bool branch_taken_0x139984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139984) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x13998Cu;
label_13998c:
    // 0x13998c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x13998Cu;
    {
        const bool branch_taken_0x13998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13998c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139994u;
label_139994:
    // 0x139994: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139998: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x139998u;
    {
        const bool branch_taken_0x139998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139998) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1399A0u;
label_1399a0:
    // 0x1399a0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1399a4: 0xc04ebb4  jal         func_13AED0
    ctx->pc = 0x1399A4u;
    SET_GPR_U32(ctx, 31, 0x1399ACu);
    ctx->pc = 0x13AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AED0u, 0x1399A4u, 0x1399ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399ACu;
label_1399ac:
    // 0x1399ac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1399acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1399b0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1399B0u;
    {
        const bool branch_taken_0x1399b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399b0) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1399B8u;
label_1399b8:
    // 0x1399b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1399b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1399bc: 0xc04ebc4  jal         func_13AF10
    ctx->pc = 0x1399BCu;
    SET_GPR_U32(ctx, 31, 0x1399C4u);
    ctx->pc = 0x13AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AF10u, 0x1399BCu, 0x1399C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399C4u;
label_1399c4:
    // 0x1399c4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1399c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1399c8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1399C8u;
    {
        const bool branch_taken_0x1399c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399c8) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1399D0u;
label_1399d0:
    // 0x1399d0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1399d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1399d4: 0xc04ebe8  jal         func_13AFA0
    ctx->pc = 0x1399D4u;
    SET_GPR_U32(ctx, 31, 0x1399DCu);
    ctx->pc = 0x13AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFA0u, 0x1399D4u, 0x1399DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1399DCu;
label_1399dc:
    // 0x1399dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1399dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1399e0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1399E0u;
    {
        const bool branch_taken_0x1399e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1399e0) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1399E8u;
label_1399e8:
    // 0x1399e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1399e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1399ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1399ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1399f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1399f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1399f4: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1399F4u;
    {
        const bool branch_taken_0x1399f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1399f4) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x1399FCu;
    // 0x1399fc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a00: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139a04: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x139a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x139a08: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x139a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x139a0c: 0x2c41000d  sltiu       $at, $v0, 0xD
    ctx->pc = 0x139a0cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x139a10: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x139A10u;
    {
        const bool branch_taken_0x139a10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a10) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139A18u;
    // 0x139a18: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x139a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x139a1c: 0x24637fd0  addiu       $v1, $v1, 0x7FD0
    ctx->pc = 0x139a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32720));
    // 0x139a20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x139a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x139a24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139a28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a2c: 0x400008  jr          $v0
    ctx->pc = 0x139A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x139A34u: goto label_139a34;
            case 0x139A4Cu: goto label_139a4c;
            case 0x139A64u: goto label_139a64;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A8Cu: goto label_139a8c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139A2Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x139A34u;
label_139a34:
    // 0x139a34: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a38: 0xc04ea18  jal         func_13A860
    ctx->pc = 0x139A38u;
    SET_GPR_U32(ctx, 31, 0x139A40u);
    ctx->pc = 0x13A860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A860u, 0x139A38u, 0x139A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A40u;
label_139a40:
    // 0x139a40: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139a44: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x139A44u;
    {
        const bool branch_taken_0x139a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a44) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139A4Cu;
label_139a4c:
    // 0x139a4c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a50: 0xc04eacc  jal         func_13AB30
    ctx->pc = 0x139A50u;
    SET_GPR_U32(ctx, 31, 0x139A58u);
    ctx->pc = 0x13AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AB30u, 0x139A50u, 0x139A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A58u;
label_139a58:
    // 0x139a58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139a58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139a5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x139A5Cu;
    {
        const bool branch_taken_0x139a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a5c) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139A64u;
label_139a64:
    // 0x139a64: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a68: 0xc04e8dc  jal         func_13A370
    ctx->pc = 0x139A68u;
    SET_GPR_U32(ctx, 31, 0x139A70u);
    ctx->pc = 0x13A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A370u, 0x139A68u, 0x139A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A70u;
label_139a70:
    // 0x139a70: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139a70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x139a74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x139A74u;
    {
        const bool branch_taken_0x139a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139a74) {
            ctx->pc = 0x139A8Cu;
            goto label_139a8c;
        }
    }
    ctx->pc = 0x139A7Cu;
label_139a7c:
    // 0x139a7c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x139a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a80: 0xc04ebb4  jal         func_13AED0
    ctx->pc = 0x139A80u;
    SET_GPR_U32(ctx, 31, 0x139A88u);
    ctx->pc = 0x13AED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AED0u, 0x139A80u, 0x139A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139A88u;
label_139a88:
    // 0x139a88: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x139a88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_139a8c:
    // 0x139a8c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139a90: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139a98: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139A98u;
    {
        const bool branch_taken_0x139a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x139a98) {
            ctx->pc = 0x139AC0u;
            goto label_139ac0;
        }
    }
    ctx->pc = 0x139AA0u;
    // 0x139aa0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139aa4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x139aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139aa8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x139aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139aac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139AACu;
    {
        const bool branch_taken_0x139aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139aac) {
            ctx->pc = 0x139AC0u;
            goto label_139ac0;
        }
    }
    ctx->pc = 0x139AB4u;
    // 0x139ab4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ab8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x139AB8u;
    {
        const bool branch_taken_0x139ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ab8) {
            ctx->pc = 0x139BD4u;
            goto label_139bd4;
        }
    }
    ctx->pc = 0x139AC0u;
label_139ac0:
    // 0x139ac0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139ac4: 0x24842730  addiu       $a0, $a0, 0x2730
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10032));
    // 0x139ac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139acc: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139ACCu;
    SET_GPR_U32(ctx, 31, 0x139AD4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139ACCu, 0x139AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139AD4u;
label_139ad4:
    // 0x139ad4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139ad8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139adc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ae0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x139AE0u;
    {
        const bool branch_taken_0x139ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139ae0) {
            ctx->pc = 0x139B14u;
            goto label_139b14;
        }
    }
    ctx->pc = 0x139AE8u;
    // 0x139ae8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139AE8u;
    {
        const bool branch_taken_0x139ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x139ae8) {
            ctx->pc = 0x139AF8u;
            goto label_139af8;
        }
    }
    ctx->pc = 0x139AF0u;
    // 0x139af0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x139AF0u;
    {
        const bool branch_taken_0x139af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139af0) {
            ctx->pc = 0x139B28u;
            goto label_139b28;
        }
    }
    ctx->pc = 0x139AF8u;
label_139af8:
    // 0x139af8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139afc: 0x24842740  addiu       $a0, $a0, 0x2740
    ctx->pc = 0x139afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    // 0x139b00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b04: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139B04u;
    SET_GPR_U32(ctx, 31, 0x139B0Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139B04u, 0x139B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B0Cu;
label_139b0c:
    // 0x139b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139B0Cu;
    {
        const bool branch_taken_0x139b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b0c) {
            ctx->pc = 0x139B28u;
            goto label_139b28;
        }
    }
    ctx->pc = 0x139B14u;
label_139b14:
    // 0x139b14: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139b14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139b18: 0x24842750  addiu       $a0, $a0, 0x2750
    ctx->pc = 0x139b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10064));
    // 0x139b1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b20: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139B20u;
    SET_GPR_U32(ctx, 31, 0x139B28u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139B20u, 0x139B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B28u;
label_139b28:
    // 0x139b28: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139b2c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x139b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139b30: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x139b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x139b34: 0xc11395c  jal         func_44E570
    ctx->pc = 0x139B34u;
    SET_GPR_U32(ctx, 31, 0x139B3Cu);
    ctx->pc = 0x44E570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E570u, 0x139B34u, 0x139B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B3Cu;
label_139b3c:
    // 0x139b3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139b40: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x139B40u;
    {
        const bool branch_taken_0x139b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x139b40) {
            ctx->pc = 0x139B9Cu;
            goto label_139b9c;
        }
    }
    ctx->pc = 0x139B48u;
    // 0x139b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x139b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139b4c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x139B4Cu;
    {
        const bool branch_taken_0x139b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x139b4c) {
            ctx->pc = 0x139B80u;
            goto label_139b80;
        }
    }
    ctx->pc = 0x139B54u;
    // 0x139b54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139B54u;
    {
        const bool branch_taken_0x139b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b54) {
            ctx->pc = 0x139B64u;
            goto label_139b64;
        }
    }
    ctx->pc = 0x139B5Cu;
    // 0x139b5c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139B5Cu;
    {
        const bool branch_taken_0x139b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b5c) {
            ctx->pc = 0x139BB0u;
            goto label_139bb0;
        }
    }
    ctx->pc = 0x139B64u;
label_139b64:
    // 0x139b64: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139b68: 0x24842760  addiu       $a0, $a0, 0x2760
    ctx->pc = 0x139b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10080));
    // 0x139b6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b70: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139B70u;
    SET_GPR_U32(ctx, 31, 0x139B78u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139B70u, 0x139B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B78u;
label_139b78:
    // 0x139b78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x139B78u;
    {
        const bool branch_taken_0x139b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b78) {
            ctx->pc = 0x139BB0u;
            goto label_139bb0;
        }
    }
    ctx->pc = 0x139B80u;
label_139b80:
    // 0x139b80: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139b84: 0x24842770  addiu       $a0, $a0, 0x2770
    ctx->pc = 0x139b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10096));
    // 0x139b88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b8c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139B8Cu;
    SET_GPR_U32(ctx, 31, 0x139B94u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139B8Cu, 0x139B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139B94u;
label_139b94:
    // 0x139b94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139B94u;
    {
        const bool branch_taken_0x139b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139b94) {
            ctx->pc = 0x139BB0u;
            goto label_139bb0;
        }
    }
    ctx->pc = 0x139B9Cu;
label_139b9c:
    // 0x139b9c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x139ba0: 0x24842780  addiu       $a0, $a0, 0x2780
    ctx->pc = 0x139ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10112));
    // 0x139ba4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ba8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139BA8u;
    SET_GPR_U32(ctx, 31, 0x139BB0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139BA8u, 0x139BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BB0u;
label_139bb0:
    // 0x139bb0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x139bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139bb4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x139bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x139bb8: 0xc113cdc  jal         func_44F370
    ctx->pc = 0x139BB8u;
    SET_GPR_U32(ctx, 31, 0x139BC0u);
    ctx->pc = 0x44F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F370u, 0x139BB8u, 0x139BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BC0u;
label_139bc0:
    // 0x139bc0: 0x27848c6c  addiu       $a0, $gp, -0x7394
    ctx->pc = 0x139bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937708));
    // 0x139bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139bc8: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x139BC8u;
    SET_GPR_U32(ctx, 31, 0x139BD0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x139BC8u, 0x139BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139BD0u;
label_139bd0:
    // 0x139bd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139bd4:
    // 0x139bd4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x139bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139bd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139bd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139be4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x139be4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x139be8: 0x3e00008  jr          $ra
    ctx->pc = 0x139BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139BF0u;
    // 0x139bf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x139bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x139bf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x139bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x139bf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x139bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x139bfc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x139bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x139c00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x139c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x139c04: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x139c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x139c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x139c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139c10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139c14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139c1c: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x139c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x139c20: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x139c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139c24: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x139C24u;
    SET_GPR_U32(ctx, 31, 0x139C2Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x139C24u, 0x139C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C2Cu;
label_139c2c:
    // 0x139c2c: 0xa3a200af  sb          $v0, 0xAF($sp)
    ctx->pc = 0x139c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 175), (uint8_t)GPR_U32(ctx, 2));
    // 0x139c30: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x139c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x139c34: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x139C34u;
    SET_GPR_U32(ctx, 31, 0x139C3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x139C34u, 0x139C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C3Cu;
label_139c3c:
    // 0x139c3c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x139c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x139c40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c44: 0xc0400e0  jal         func_100380
    ctx->pc = 0x139C44u;
    SET_GPR_U32(ctx, 31, 0x139C4Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x139C44u, 0x139C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C4Cu;
label_139c4c:
    // 0x139c4c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x139c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c50: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x139C50u;
    {
        const bool branch_taken_0x139c50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x139c50) {
            ctx->pc = 0x139C74u;
            goto label_139c74;
        }
    }
    ctx->pc = 0x139C58u;
    // 0x139c58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x139c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x139c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x139c64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c68: 0xc122684  jal         func_489A10
    ctx->pc = 0x139C68u;
    SET_GPR_U32(ctx, 31, 0x139C70u);
    ctx->pc = 0x489A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489A10u, 0x139C68u, 0x139C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C70u;
label_139c70:
    // 0x139c70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x139c70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139c74:
    // 0x139c74: 0xaf94ba78  sw          $s4, -0x4588($gp)
    ctx->pc = 0x139c74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949496), GPR_U32(ctx, 20));
    // 0x139c78: 0xc12242c  jal         func_4890B0
    ctx->pc = 0x139C78u;
    SET_GPR_U32(ctx, 31, 0x139C80u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x139C78u, 0x139C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139C80u;
label_139c80:
    // 0x139c80: 0x8c570060  lw          $s7, 0x60($v0)
    ctx->pc = 0x139c80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x139c84: 0x8ef6000c  lw          $s6, 0xC($s7)
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x139c88: 0x8ee20010  lw          $v0, 0x10($s7)
    ctx->pc = 0x139c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x139c8c: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x139c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x139c90: 0x3c024110  lui         $v0, 0x4110
    ctx->pc = 0x139c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16656 << 16));
    // 0x139c94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x139c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139c98: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x139C98u;
    {
        const bool branch_taken_0x139c98 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x139c98) {
            ctx->pc = 0x139CB4u;
            goto label_139cb4;
        }
    }
    ctx->pc = 0x139CA0u;
    // 0x139ca0: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x139ca0u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139ca4: 0x0  nop
    ctx->pc = 0x139ca4u;
    // NOP
    // 0x139ca8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139ca8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139cac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139CACu;
    {
        const bool branch_taken_0x139cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139cac) {
            ctx->pc = 0x139CD0u;
            goto label_139cd0;
        }
    }
    ctx->pc = 0x139CB4u;
label_139cb4:
    // 0x139cb4: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x139cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x139cb8: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x139cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x139cbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139cc0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139cc4: 0x0  nop
    ctx->pc = 0x139cc4u;
    // NOP
    // 0x139cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x139cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x139ccc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x139cccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_139cd0:
    // 0x139cd0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x139cd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x139cd4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x139cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x139cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139cdc: 0x0  nop
    ctx->pc = 0x139cdcu;
    // NOP
    // 0x139ce0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x139ce0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x139ce4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x139ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x139ce8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139cec: 0x0  nop
    ctx->pc = 0x139cecu;
    // NOP
    // 0x139cf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139cf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139cf4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x139CF4u;
    {
        const bool branch_taken_0x139cf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139cf4) {
            ctx->pc = 0x139D0Cu;
            goto label_139d0c;
        }
    }
    ctx->pc = 0x139CFCu;
    // 0x139cfc: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139cfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x139d00: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x139d00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x139d04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139D04u;
    {
        const bool branch_taken_0x139d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d04) {
            ctx->pc = 0x139D20u;
            goto label_139d20;
        }
    }
    ctx->pc = 0x139D0Cu;
label_139d0c:
    // 0x139d0c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x139d0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x139d10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x139d10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x139d14: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x139d14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
    // 0x139d18: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x139d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x139d1c: 0x3c2f025  or          $fp, $fp, $v0
    ctx->pc = 0x139d1cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | GPR_U64(ctx, 2));
label_139d20:
    // 0x139d20: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x139d24: 0x5e1823  subu        $v1, $v0, $fp
    ctx->pc = 0x139d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x139d28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x139d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139d2c: 0x3a842  srl         $s5, $v1, 1
    ctx->pc = 0x139d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x139d30: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x139d34: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x139D34u;
    SET_GPR_U32(ctx, 31, 0x139D3Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x139D34u, 0x139D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D3Cu;
label_139d3c:
    // 0x139d3c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x139d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x139d40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d44: 0xc0400e0  jal         func_100380
    ctx->pc = 0x139D44u;
    SET_GPR_U32(ctx, 31, 0x139D4Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x139D44u, 0x139D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D4Cu;
label_139d4c:
    // 0x139d4c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x139d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d50: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x139D50u;
    {
        const bool branch_taken_0x139d50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x139d50) {
            ctx->pc = 0x139D8Cu;
            goto label_139d8c;
        }
    }
    ctx->pc = 0x139D58u;
    // 0x139d58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139d5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x139d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139d60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x139d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x139d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d68: 0x2786b6b8  addiu       $a2, $gp, -0x4948
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948536));
    // 0x139d6c: 0x2787b6b8  addiu       $a3, $gp, -0x4948
    ctx->pc = 0x139d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948536));
    // 0x139d70: 0x2788b6b8  addiu       $t0, $gp, -0x4948
    ctx->pc = 0x139d70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948536));
    // 0x139d74: 0x2789b6b8  addiu       $t1, $gp, -0x4948
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948536));
    // 0x139d78: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x139d78u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d7c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x139d7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d80: 0xc11bda8  jal         func_46F6A0
    ctx->pc = 0x139D80u;
    SET_GPR_U32(ctx, 31, 0x139D88u);
    ctx->pc = 0x46F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F6A0u, 0x139D80u, 0x139D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D88u;
label_139d88:
    // 0x139d88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x139d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139d8c:
    // 0x139d8c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139d90: 0xac530030  sw          $s3, 0x30($v0)
    ctx->pc = 0x139d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 19));
    // 0x139d94: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x139d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x139d98: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x139D98u;
    SET_GPR_U32(ctx, 31, 0x139DA0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x139D98u, 0x139DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DA0u;
label_139da0:
    // 0x139da0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x139da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x139da4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139da4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139da8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x139DA8u;
    SET_GPR_U32(ctx, 31, 0x139DB0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x139DA8u, 0x139DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DB0u;
label_139db0:
    // 0x139db0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139db4: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x139DB4u;
    {
        const bool branch_taken_0x139db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x139db4) {
            ctx->pc = 0x139DF4u;
            goto label_139df4;
        }
    }
    ctx->pc = 0x139DBCu;
    // 0x139dbc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x139dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x139dc0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x139dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139dc4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x139dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dcc: 0x8c450050  lw          $a1, 0x50($v0)
    ctx->pc = 0x139dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x139dd0: 0x2786b6c0  addiu       $a2, $gp, -0x4940
    ctx->pc = 0x139dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x139dd4: 0x2787b6c0  addiu       $a3, $gp, -0x4940
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x139dd8: 0x2788b6c0  addiu       $t0, $gp, -0x4940
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x139ddc: 0x2789b6c0  addiu       $t1, $gp, -0x4940
    ctx->pc = 0x139ddcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948544));
    // 0x139de0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x139de0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139de4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x139de4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139de8: 0xc11bda8  jal         func_46F6A0
    ctx->pc = 0x139DE8u;
    SET_GPR_U32(ctx, 31, 0x139DF0u);
    ctx->pc = 0x46F6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46F6A0u, 0x139DE8u, 0x139DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139DF0u;
label_139df0:
    // 0x139df0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139df4:
    // 0x139df4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139df8: 0xac520034  sw          $s2, 0x34($v0)
    ctx->pc = 0x139df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
    // 0x139dfc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x139dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139e00: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x139E00u;
    SET_GPR_U32(ctx, 31, 0x139E08u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x139E00u, 0x139E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E08u;
label_139e08:
    // 0x139e08: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x139e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139e0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e10: 0xc0400e0  jal         func_100380
    ctx->pc = 0x139E10u;
    SET_GPR_U32(ctx, 31, 0x139E18u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x139E10u, 0x139E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139E18u;
label_139e18:
    // 0x139e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x139e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e1c: 0x12200034  beqz        $s1, . + 4 + (0x34 << 2)
    ctx->pc = 0x139E1Cu;
    {
        const bool branch_taken_0x139e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e1c) {
            ctx->pc = 0x139EF0u;
            goto label_139ef0;
        }
    }
    ctx->pc = 0x139E24u;
    // 0x139e24: 0x3d51021  addu        $v0, $fp, $s5
    ctx->pc = 0x139e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 21)));
    // 0x139e28: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139E28u;
    {
        const bool branch_taken_0x139e28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x139e28) {
            ctx->pc = 0x139E44u;
            goto label_139e44;
        }
    }
    ctx->pc = 0x139E30u;
    // 0x139e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e34: 0x0  nop
    ctx->pc = 0x139e34u;
    // NOP
    // 0x139e38: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x139e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x139e3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139E3Cu;
    {
        const bool branch_taken_0x139e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e3c) {
            ctx->pc = 0x139E60u;
            goto label_139e60;
        }
    }
    ctx->pc = 0x139E44u;
label_139e44:
    // 0x139e44: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x139e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x139e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x139e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x139e4c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139e50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139e50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e54: 0x0  nop
    ctx->pc = 0x139e54u;
    // NOP
    // 0x139e58: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x139e58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x139e5c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x139e5cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_139e60:
    // 0x139e60: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x139E60u;
    {
        const bool branch_taken_0x139e60 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x139e60) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139E68u;
    // 0x139e68: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x139e68u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e6c: 0x0  nop
    ctx->pc = 0x139e6cu;
    // NOP
    // 0x139e70: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x139e70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x139e74: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139E74u;
    {
        const bool branch_taken_0x139e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139e74) {
            ctx->pc = 0x139E98u;
            goto label_139e98;
        }
    }
    ctx->pc = 0x139E7Cu;
label_139e7c:
    // 0x139e7c: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x139e80: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x139e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x139e84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139e88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139e88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e8c: 0x0  nop
    ctx->pc = 0x139e8cu;
    // NOP
    // 0x139e90: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x139e90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x139e94: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x139e94u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_139e98:
    // 0x139e98: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x139E98u;
    {
        const bool branch_taken_0x139e98 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x139e98) {
            ctx->pc = 0x139EB4u;
            goto label_139eb4;
        }
    }
    ctx->pc = 0x139EA0u;
    // 0x139ea0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x139ea0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139ea4: 0x0  nop
    ctx->pc = 0x139ea4u;
    // NOP
    // 0x139ea8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x139ea8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x139eac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139EACu;
    {
        const bool branch_taken_0x139eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139eac) {
            ctx->pc = 0x139ED0u;
            goto label_139ed0;
        }
    }
    ctx->pc = 0x139EB4u;
label_139eb4:
    // 0x139eb4: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x139eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x139eb8: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x139eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x139ebc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139ec0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139ec4: 0x0  nop
    ctx->pc = 0x139ec4u;
    // NOP
    // 0x139ec8: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x139ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x139ecc: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x139eccu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_139ed0:
    // 0x139ed0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139ed0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139ed4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x139ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139ee0: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x139ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x139ee4: 0xc11d1d4  jal         func_474750
    ctx->pc = 0x139EE4u;
    SET_GPR_U32(ctx, 31, 0x139EECu);
    ctx->pc = 0x474750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474750u, 0x139EE4u, 0x139EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139EECu;
label_139eec:
    // 0x139eec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x139eecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139ef0:
    // 0x139ef0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139ef4: 0xac510038  sw          $s1, 0x38($v0)
    ctx->pc = 0x139ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 17));
    // 0x139ef8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x139ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139efc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x139EFCu;
    SET_GPR_U32(ctx, 31, 0x139F04u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x139EFCu, 0x139F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F04u;
label_139f04:
    // 0x139f04: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x139f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x139f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x139f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f0c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x139F0Cu;
    SET_GPR_U32(ctx, 31, 0x139F14u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x139F0Cu, 0x139F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139F14u;
label_139f14:
    // 0x139f14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f18: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x139F18u;
    {
        const bool branch_taken_0x139f18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f18) {
            ctx->pc = 0x139FB4u;
            goto label_139fb4;
        }
    }
    ctx->pc = 0x139F20u;
    // 0x139f20: 0x6c00006  bltz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x139F20u;
    {
        const bool branch_taken_0x139f20 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x139f20) {
            ctx->pc = 0x139F3Cu;
            goto label_139f3c;
        }
    }
    ctx->pc = 0x139F28u;
    // 0x139f28: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x139f28u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f2c: 0x0  nop
    ctx->pc = 0x139f2cu;
    // NOP
    // 0x139f30: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x139f30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x139f34: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139F34u;
    {
        const bool branch_taken_0x139f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f34) {
            ctx->pc = 0x139F58u;
            goto label_139f58;
        }
    }
    ctx->pc = 0x139F3Cu;
label_139f3c:
    // 0x139f3c: 0x161842  srl         $v1, $s6, 1
    ctx->pc = 0x139f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
    // 0x139f40: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x139f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x139f44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139f48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f4c: 0x0  nop
    ctx->pc = 0x139f4cu;
    // NOP
    // 0x139f50: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x139f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x139f54: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x139f54u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_139f58:
    // 0x139f58: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x139F58u;
    {
        const bool branch_taken_0x139f58 = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x139f58) {
            ctx->pc = 0x139F74u;
            goto label_139f74;
        }
    }
    ctx->pc = 0x139F60u;
    // 0x139f60: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x139f60u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f64: 0x0  nop
    ctx->pc = 0x139f64u;
    // NOP
    // 0x139f68: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x139f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x139f6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x139F6Cu;
    {
        const bool branch_taken_0x139f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f6c) {
            ctx->pc = 0x139F90u;
            goto label_139f90;
        }
    }
    ctx->pc = 0x139F74u;
label_139f74:
    // 0x139f74: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x139f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x139f78: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x139f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x139f7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x139f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139f80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f84: 0x0  nop
    ctx->pc = 0x139f84u;
    // NOP
    // 0x139f88: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x139f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x139f8c: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x139f8cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_139f90:
    // 0x139f90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x139f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x139f94: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x139f94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x139f98: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x139fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139fa4: 0x8c460030  lw          $a2, 0x30($v0)
    ctx->pc = 0x139fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x139fa8: 0xc11d1d4  jal         func_474750
    ctx->pc = 0x139FA8u;
    SET_GPR_U32(ctx, 31, 0x139FB0u);
    ctx->pc = 0x474750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x474750u, 0x139FA8u, 0x139FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139FB0u;
label_139fb0:
    // 0x139fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139fb4:
    // 0x139fb4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139fb8: 0xac50003c  sw          $s0, 0x3C($v0)
    ctx->pc = 0x139fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 16));
    // 0x139fbc: 0xa380ba6c  sb          $zero, -0x4594($gp)
    ctx->pc = 0x139fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949484), (uint8_t)GPR_U32(ctx, 0));
    // 0x139fc0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x139fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139fc4: 0xa040002c  sb          $zero, 0x2C($v0)
    ctx->pc = 0x139fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x139fc8: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x139fc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x139fcc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x139fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139fd0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x139fd0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139fd4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x139fd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x139fd8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x139fd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139fdc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139fdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139fe0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x139fe0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139fe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139fe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139fe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139fec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139fecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139ff4: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x139ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x139ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x139FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A000u;
    // 0x13a000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13a004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13a008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13a00c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13a010: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x13a010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a014: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x13A014u;
    SET_GPR_U32(ctx, 31, 0x13A01Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x13A014u, 0x13A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A01Cu;
label_13a01c:
    // 0x13a01c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13a01cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13a020: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a024: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x13a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13a028: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A028u;
    {
        const bool branch_taken_0x13a028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a028) {
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x13A030u;
    // 0x13a030: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a034: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13a038: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A038u;
    {
        const bool branch_taken_0x13a038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a038) {
            ctx->pc = 0x13A068u;
            goto label_13a068;
        }
    }
    ctx->pc = 0x13A040u;
    // 0x13a040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a044: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x13a044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13a048: 0xc04e888  jal         func_13A220
    ctx->pc = 0x13A048u;
    SET_GPR_U32(ctx, 31, 0x13A050u);
    ctx->pc = 0x13A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A220u, 0x13A048u, 0x13A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A050u;
label_13a050:
    // 0x13a050: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a054: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x13a054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13a058: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A058u;
    SET_GPR_U32(ctx, 31, 0x13A060u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A058u, 0x13A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A060u;
label_13a060:
    // 0x13a060: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a064: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x13a064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_13a068:
    // 0x13a068: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a06c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x13a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13a070: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A070u;
    {
        const bool branch_taken_0x13a070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a070) {
            ctx->pc = 0x13A0B0u;
            goto label_13a0b0;
        }
    }
    ctx->pc = 0x13A078u;
    // 0x13a078: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a07c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x13a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13a080: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A080u;
    {
        const bool branch_taken_0x13a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a080) {
            ctx->pc = 0x13A0B0u;
            goto label_13a0b0;
        }
    }
    ctx->pc = 0x13A088u;
    // 0x13a088: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a08c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x13a08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13a090: 0xc04e888  jal         func_13A220
    ctx->pc = 0x13A090u;
    SET_GPR_U32(ctx, 31, 0x13A098u);
    ctx->pc = 0x13A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A220u, 0x13A090u, 0x13A098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A098u;
label_13a098:
    // 0x13a098: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a09c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13a0a0: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A0A0u;
    SET_GPR_U32(ctx, 31, 0x13A0A8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A0A0u, 0x13A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0A8u;
label_13a0a8:
    // 0x13a0a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0ac: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x13a0acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_13a0b0:
    // 0x13a0b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0b4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a0b8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A0B8u;
    {
        const bool branch_taken_0x13a0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0b8) {
            ctx->pc = 0x13A0F8u;
            goto label_13a0f8;
        }
    }
    ctx->pc = 0x13A0C0u;
    // 0x13a0c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0c4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x13a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a0c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A0C8u;
    {
        const bool branch_taken_0x13a0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a0c8) {
            ctx->pc = 0x13A0F8u;
            goto label_13a0f8;
        }
    }
    ctx->pc = 0x13A0D0u;
    // 0x13a0d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0d4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x13a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a0d8: 0xc04e87c  jal         func_13A1F0
    ctx->pc = 0x13A0D8u;
    SET_GPR_U32(ctx, 31, 0x13A0E0u);
    ctx->pc = 0x13A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1F0u, 0x13A0D8u, 0x13A0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0E0u;
label_13a0e0:
    // 0x13a0e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0e4: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13a0e8: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A0E8u;
    SET_GPR_U32(ctx, 31, 0x13A0F0u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A0E8u, 0x13A0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A0F0u;
label_13a0f0:
    // 0x13a0f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0f4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x13a0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_13a0f8:
    // 0x13a0f8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a0fc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x13a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13a100: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x13A100u;
    {
        const bool branch_taken_0x13a100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a100) {
            ctx->pc = 0x13A140u;
            goto label_13a140;
        }
    }
    ctx->pc = 0x13A108u;
    // 0x13a108: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a10c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13a110: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A110u;
    {
        const bool branch_taken_0x13a110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a110) {
            ctx->pc = 0x13A140u;
            goto label_13a140;
        }
    }
    ctx->pc = 0x13A118u;
    // 0x13a118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a11c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x13a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13a120: 0xc04e87c  jal         func_13A1F0
    ctx->pc = 0x13A120u;
    SET_GPR_U32(ctx, 31, 0x13A128u);
    ctx->pc = 0x13A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1F0u, 0x13A120u, 0x13A128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A128u;
label_13a128:
    // 0x13a128: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a12c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x13a12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13a130: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A130u;
    SET_GPR_U32(ctx, 31, 0x13A138u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A130u, 0x13A138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A138u;
label_13a138:
    // 0x13a138: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a13c: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x13a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_13a140:
    // 0x13a140: 0x8f82ba78  lw          $v0, -0x4588($gp)
    ctx->pc = 0x13a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a144: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A144u;
    {
        const bool branch_taken_0x13a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a144) {
            ctx->pc = 0x13A174u;
            goto label_13a174;
        }
    }
    ctx->pc = 0x13A14Cu;
    // 0x13a14c: 0x8f82ba78  lw          $v0, -0x4588($gp)
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a150: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A150u;
    {
        const bool branch_taken_0x13a150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a150) {
            ctx->pc = 0x13A174u;
            goto label_13a174;
        }
    }
    ctx->pc = 0x13A158u;
    // 0x13a158: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a15c: 0xc04e870  jal         func_13A1C0
    ctx->pc = 0x13A15Cu;
    SET_GPR_U32(ctx, 31, 0x13A164u);
    ctx->pc = 0x13A1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1C0u, 0x13A15Cu, 0x13A164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A164u;
label_13a164:
    // 0x13a164: 0x8f84ba78  lw          $a0, -0x4588($gp)
    ctx->pc = 0x13a164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949496)));
    // 0x13a168: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A168u;
    SET_GPR_U32(ctx, 31, 0x13A170u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A168u, 0x13A170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A170u;
label_13a170:
    // 0x13a170: 0xaf80ba78  sw          $zero, -0x4588($gp)
    ctx->pc = 0x13a170u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949496), GPR_U32(ctx, 0));
label_13a174:
    // 0x13a174: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x13a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x13a178: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13A178u;
    {
        const bool branch_taken_0x13a178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a178) {
            ctx->pc = 0x13A1A8u;
            goto label_13a1a8;
        }
    }
    ctx->pc = 0x13A180u;
    // 0x13a180: 0x8f82ba70  lw          $v0, -0x4590($gp)
    ctx->pc = 0x13a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x13a184: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13A184u;
    {
        const bool branch_taken_0x13a184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a184) {
            ctx->pc = 0x13A1A8u;
            goto label_13a1a8;
        }
    }
    ctx->pc = 0x13A18Cu;
    // 0x13a18c: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x13a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x13a190: 0xc04e364  jal         func_138D90
    ctx->pc = 0x13A190u;
    SET_GPR_U32(ctx, 31, 0x13A198u);
    ctx->pc = 0x138D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138D90u, 0x13A190u, 0x13A198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A198u;
label_13a198:
    // 0x13a198: 0x8f84ba70  lw          $a0, -0x4590($gp)
    ctx->pc = 0x13a198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949488)));
    // 0x13a19c: 0xc119c5c  jal         func_467170
    ctx->pc = 0x13A19Cu;
    SET_GPR_U32(ctx, 31, 0x13A1A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x13A19Cu, 0x13A1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13A1A4u;
label_13a1a4:
    // 0x13a1a4: 0xaf80ba70  sw          $zero, -0x4590($gp)
    ctx->pc = 0x13a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949488), GPR_U32(ctx, 0));
label_13a1a8:
    // 0x13a1a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13a1a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a1ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13a1acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13a1b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13a1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13a1b4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13a1b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13A1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A1C0u;
}
