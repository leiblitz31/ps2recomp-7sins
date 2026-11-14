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

// Function: sub_001ED590
// Address: 0x1ed590 - 0x1ee630
void sub_001ED590_0x1ed590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED590_0x1ed590");
#endif

    switch (ctx->pc) {
        case 0x1ed5bcu: goto label_1ed5bc;
        case 0x1ed5dcu: goto label_1ed5dc;
        case 0x1ed5ecu: goto label_1ed5ec;
        case 0x1ed600u: goto label_1ed600;
        case 0x1ed63cu: goto label_1ed63c;
        case 0x1ed650u: goto label_1ed650;
        case 0x1ed660u: goto label_1ed660;
        case 0x1ed66cu: goto label_1ed66c;
        case 0x1ed69cu: goto label_1ed69c;
        case 0x1ed6b0u: goto label_1ed6b0;
        case 0x1ed6c0u: goto label_1ed6c0;
        case 0x1ed6f0u: goto label_1ed6f0;
        case 0x1ed704u: goto label_1ed704;
        case 0x1ed714u: goto label_1ed714;
        case 0x1ed744u: goto label_1ed744;
        case 0x1ed758u: goto label_1ed758;
        case 0x1ed768u: goto label_1ed768;
        case 0x1ed798u: goto label_1ed798;
        case 0x1ed7acu: goto label_1ed7ac;
        case 0x1ed7bcu: goto label_1ed7bc;
        case 0x1ed7c8u: goto label_1ed7c8;
        case 0x1ed858u: goto label_1ed858;
        case 0x1ed86cu: goto label_1ed86c;
        case 0x1ed87cu: goto label_1ed87c;
        case 0x1ed888u: goto label_1ed888;
        case 0x1ed8b8u: goto label_1ed8b8;
        case 0x1ed8ccu: goto label_1ed8cc;
        case 0x1ed8dcu: goto label_1ed8dc;
        case 0x1ed8e8u: goto label_1ed8e8;
        case 0x1ed978u: goto label_1ed978;
        case 0x1ed98cu: goto label_1ed98c;
        case 0x1ed99cu: goto label_1ed99c;
        case 0x1ed9a8u: goto label_1ed9a8;
        case 0x1ed9d8u: goto label_1ed9d8;
        case 0x1ed9ecu: goto label_1ed9ec;
        case 0x1ed9fcu: goto label_1ed9fc;
        case 0x1eda08u: goto label_1eda08;
        case 0x1eda98u: goto label_1eda98;
        case 0x1edaacu: goto label_1edaac;
        case 0x1edabcu: goto label_1edabc;
        case 0x1edac8u: goto label_1edac8;
        case 0x1edb58u: goto label_1edb58;
        case 0x1edb6cu: goto label_1edb6c;
        case 0x1edb7cu: goto label_1edb7c;
        case 0x1edb88u: goto label_1edb88;
        case 0x1edbb8u: goto label_1edbb8;
        case 0x1edbccu: goto label_1edbcc;
        case 0x1edbdcu: goto label_1edbdc;
        case 0x1edc0cu: goto label_1edc0c;
        case 0x1edc20u: goto label_1edc20;
        case 0x1edc34u: goto label_1edc34;
        case 0x1edc64u: goto label_1edc64;
        case 0x1edc78u: goto label_1edc78;
        case 0x1edc88u: goto label_1edc88;
        case 0x1edcb8u: goto label_1edcb8;
        case 0x1edcccu: goto label_1edccc;
        case 0x1edcdcu: goto label_1edcdc;
        case 0x1edce8u: goto label_1edce8;
        case 0x1edd78u: goto label_1edd78;
        case 0x1edd8cu: goto label_1edd8c;
        case 0x1edd9cu: goto label_1edd9c;
        case 0x1edda8u: goto label_1edda8;
        case 0x1ede38u: goto label_1ede38;
        case 0x1ede50u: goto label_1ede50;
        case 0x1ede68u: goto label_1ede68;
        case 0x1ede74u: goto label_1ede74;
        case 0x1edf04u: goto label_1edf04;
        case 0x1edf18u: goto label_1edf18;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edfc8u: goto label_1edfc8;
        case 0x1edfdcu: goto label_1edfdc;
        case 0x1edff0u: goto label_1edff0;
        case 0x1ee000u: goto label_1ee000;
        case 0x1ee034u: goto label_1ee034;
        case 0x1ee048u: goto label_1ee048;
        case 0x1ee05cu: goto label_1ee05c;
        case 0x1ee06cu: goto label_1ee06c;
        case 0x1ee104u: goto label_1ee104;
        case 0x1ee118u: goto label_1ee118;
        case 0x1ee130u: goto label_1ee130;
        case 0x1ee13cu: goto label_1ee13c;
        case 0x1ee1d4u: goto label_1ee1d4;
        case 0x1ee1e8u: goto label_1ee1e8;
        case 0x1ee204u: goto label_1ee204;
        case 0x1ee230u: goto label_1ee230;
        case 0x1ee248u: goto label_1ee248;
        case 0x1ee270u: goto label_1ee270;
        case 0x1ee284u: goto label_1ee284;
        case 0x1ee294u: goto label_1ee294;
        case 0x1ee2a0u: goto label_1ee2a0;
        case 0x1ee344u: goto label_1ee344;
        case 0x1ee35cu: goto label_1ee35c;
        case 0x1ee36cu: goto label_1ee36c;
        case 0x1ee378u: goto label_1ee378;
        case 0x1ee41cu: goto label_1ee41c;
        case 0x1ee430u: goto label_1ee430;
        case 0x1ee440u: goto label_1ee440;
        case 0x1ee44cu: goto label_1ee44c;
        case 0x1ee4ecu: goto label_1ee4ec;
        case 0x1ee508u: goto label_1ee508;
        case 0x1ee520u: goto label_1ee520;
        case 0x1ee548u: goto label_1ee548;
        case 0x1ee560u: goto label_1ee560;
        case 0x1ee574u: goto label_1ee574;
        case 0x1ee594u: goto label_1ee594;
        case 0x1ee5c8u: goto label_1ee5c8;
        case 0x1ee5f0u: goto label_1ee5f0;
        default: break;
    }

    ctx->pc = 0x1ed590u;

    // 0x1ed590: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1ed590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1ed594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ed594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ed598: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed59c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ed59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ed5a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ed5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ed5a4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x1ed5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x1ed5a8: 0x24620054  addiu       $v0, $v1, 0x54
    ctx->pc = 0x1ed5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 84));
    // 0x1ed5ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ed5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ed5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5b4: 0x10000410  b           . + 4 + (0x410 << 2)
    ctx->pc = 0x1ED5B4u;
    {
        const bool branch_taken_0x1ed5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed5b4) {
            ctx->pc = 0x1EE5F8u;
            goto label_1ee5f8;
        }
    }
    ctx->pc = 0x1ED5BCu;
label_1ed5bc:
    // 0x1ed5bc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed5c0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1ed5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1ed5c4: 0x24848120  addiu       $a0, $a0, -0x7EE0
    ctx->pc = 0x1ed5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1ed5c8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1ed5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ed5cc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ed5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ed5d0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ed5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ed5d4: 0xc040304  jal         func_100C10
    ctx->pc = 0x1ED5D4u;
    SET_GPR_U32(ctx, 31, 0x1ED5DCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x1ED5D4u, 0x1ED5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5DCu;
label_1ed5dc:
    // 0x1ed5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed5e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1ed5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ed5e4: 0xc05c618  jal         func_171860
    ctx->pc = 0x1ED5E4u;
    SET_GPR_U32(ctx, 31, 0x1ED5ECu);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x1ED5E4u, 0x1ED5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED5ECu;
label_1ed5ec:
    // 0x1ed5ec: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1ed5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1ed5f0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ed5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ed5f4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ed5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed5f8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1ED5F8u;
    SET_GPR_U32(ctx, 31, 0x1ED600u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1ED5F8u, 0x1ED600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED600u;
label_1ed600:
    // 0x1ed600: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed604: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ed604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ed608: 0x106203f9  beq         $v1, $v0, . + 4 + (0x3F9 << 2)
    ctx->pc = 0x1ED608u;
    {
        const bool branch_taken_0x1ed608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ed608) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED610u;
    // 0x1ed610: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ed610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed614: 0x24420003  addiu       $v0, $v0, 0x3
    ctx->pc = 0x1ed614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x1ed618: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1ed618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x1ed61c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ed61cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed620: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ed620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ed624: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ed624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ed628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed62c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed630: 0x27859864  addiu       $a1, $gp, -0x679C
    ctx->pc = 0x1ed630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940772));
    // 0x1ed634: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED634u;
    SET_GPR_U32(ctx, 31, 0x1ED63Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED634u, 0x1ED63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED63Cu;
label_1ed63c:
    // 0x1ed63c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED63Cu;
    {
        const bool branch_taken_0x1ed63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed63c) {
            ctx->pc = 0x1ED67Cu;
            goto label_1ed67c;
        }
    }
    ctx->pc = 0x1ED644u;
    // 0x1ed644: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed648: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED648u;
    SET_GPR_U32(ctx, 31, 0x1ED650u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED648u, 0x1ED650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED650u;
label_1ed650:
    // 0x1ed650: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed654: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed658: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED658u;
    SET_GPR_U32(ctx, 31, 0x1ED660u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED658u, 0x1ED660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED660u;
label_1ed660:
    // 0x1ed660: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed664: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1ED664u;
    SET_GPR_U32(ctx, 31, 0x1ED66Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1ED664u, 0x1ED66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED66Cu;
label_1ed66c:
    // 0x1ed66c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed670: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1ed670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1ed674: 0x100003de  b           . + 4 + (0x3DE << 2)
    ctx->pc = 0x1ED674u;
    {
        const bool branch_taken_0x1ed674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed674) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED67Cu;
label_1ed67c:
    // 0x1ed67c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed680: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed684: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed688: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed68c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed690: 0x2785986c  addiu       $a1, $gp, -0x6794
    ctx->pc = 0x1ed690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940780));
    // 0x1ed694: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED694u;
    SET_GPR_U32(ctx, 31, 0x1ED69Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED694u, 0x1ED69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED69Cu;
label_1ed69c:
    // 0x1ed69c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ED69Cu;
    {
        const bool branch_taken_0x1ed69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed69c) {
            ctx->pc = 0x1ED6D0u;
            goto label_1ed6d0;
        }
    }
    ctx->pc = 0x1ED6A4u;
    // 0x1ed6a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6a8: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED6A8u;
    SET_GPR_U32(ctx, 31, 0x1ED6B0u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED6A8u, 0x1ED6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6B0u;
label_1ed6b0:
    // 0x1ed6b0: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed6b4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed6b8: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1ED6B8u;
    SET_GPR_U32(ctx, 31, 0x1ED6C0u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1ED6B8u, 0x1ED6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6C0u;
label_1ed6c0:
    // 0x1ed6c0: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1ed6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed6c4: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1ed6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1ed6c8: 0x100003c9  b           . + 4 + (0x3C9 << 2)
    ctx->pc = 0x1ED6C8u;
    {
        const bool branch_taken_0x1ed6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6c8) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED6D0u;
label_1ed6d0:
    // 0x1ed6d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed6d4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed6d8: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed6dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed6e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed6e4: 0x27859870  addiu       $a1, $gp, -0x6790
    ctx->pc = 0x1ed6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940784));
    // 0x1ed6e8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED6E8u;
    SET_GPR_U32(ctx, 31, 0x1ED6F0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED6E8u, 0x1ED6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED6F0u;
label_1ed6f0:
    // 0x1ed6f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ED6F0u;
    {
        const bool branch_taken_0x1ed6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6f0) {
            ctx->pc = 0x1ED724u;
            goto label_1ed724;
        }
    }
    ctx->pc = 0x1ED6F8u;
    // 0x1ed6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed6fc: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED6FCu;
    SET_GPR_U32(ctx, 31, 0x1ED704u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED6FCu, 0x1ED704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED704u;
label_1ed704:
    // 0x1ed704: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed708: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed70c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1ED70Cu;
    SET_GPR_U32(ctx, 31, 0x1ED714u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1ED70Cu, 0x1ED714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED714u;
label_1ed714:
    // 0x1ed714: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1ed714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed718: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x1ed718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x1ed71c: 0x100003b4  b           . + 4 + (0x3B4 << 2)
    ctx->pc = 0x1ED71Cu;
    {
        const bool branch_taken_0x1ed71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed71c) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED724u;
label_1ed724:
    // 0x1ed724: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed728: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed72c: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed730: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed734: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed738: 0x27859874  addiu       $a1, $gp, -0x678C
    ctx->pc = 0x1ed738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940788));
    // 0x1ed73c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED73Cu;
    SET_GPR_U32(ctx, 31, 0x1ED744u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED73Cu, 0x1ED744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED744u;
label_1ed744:
    // 0x1ed744: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1ED744u;
    {
        const bool branch_taken_0x1ed744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed744) {
            ctx->pc = 0x1ED778u;
            goto label_1ed778;
        }
    }
    ctx->pc = 0x1ED74Cu;
    // 0x1ed74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed750: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED750u;
    SET_GPR_U32(ctx, 31, 0x1ED758u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED750u, 0x1ED758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED758u;
label_1ed758:
    // 0x1ed758: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed75c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed760: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1ED760u;
    SET_GPR_U32(ctx, 31, 0x1ED768u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1ED760u, 0x1ED768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED768u;
label_1ed768:
    // 0x1ed768: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ed768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed76c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x1ed76cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x1ed770: 0x1000039f  b           . + 4 + (0x39F << 2)
    ctx->pc = 0x1ED770u;
    {
        const bool branch_taken_0x1ed770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed770) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED778u;
label_1ed778:
    // 0x1ed778: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed778u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed77c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed77cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed780: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed784: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed78c: 0x27859878  addiu       $a1, $gp, -0x6788
    ctx->pc = 0x1ed78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940792));
    // 0x1ed790: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED790u;
    SET_GPR_U32(ctx, 31, 0x1ED798u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED790u, 0x1ED798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED798u;
label_1ed798:
    // 0x1ed798: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ED798u;
    {
        const bool branch_taken_0x1ed798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed798) {
            ctx->pc = 0x1ED838u;
            goto label_1ed838;
        }
    }
    ctx->pc = 0x1ED7A0u;
    // 0x1ed7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7a4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED7A4u;
    SET_GPR_U32(ctx, 31, 0x1ED7ACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED7A4u, 0x1ED7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7ACu;
label_1ed7ac:
    // 0x1ed7ac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed7b0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed7b4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED7B4u;
    SET_GPR_U32(ctx, 31, 0x1ED7BCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED7B4u, 0x1ED7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7BCu;
label_1ed7bc:
    // 0x1ed7bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed7c0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1ED7C0u;
    SET_GPR_U32(ctx, 31, 0x1ED7C8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1ED7C0u, 0x1ED7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED7C8u;
label_1ed7c8:
    // 0x1ed7c8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed7cc: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ed7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1ed7d0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ed7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed7d4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ed7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ed7d8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED7D8u;
    {
        const bool branch_taken_0x1ed7d8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed7d8) {
            ctx->pc = 0x1ED7F4u;
            goto label_1ed7f4;
        }
    }
    ctx->pc = 0x1ED7E0u;
    // 0x1ed7e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed7e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed7e4: 0x0  nop
    ctx->pc = 0x1ed7e4u;
    // NOP
    // 0x1ed7e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed7e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed7ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED7ECu;
    {
        const bool branch_taken_0x1ed7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed7ec) {
            ctx->pc = 0x1ED810u;
            goto label_1ed810;
        }
    }
    ctx->pc = 0x1ED7F4u;
label_1ed7f4:
    // 0x1ed7f4: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1ed7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed7f8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ed7f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed7fc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ed7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ed800: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed804: 0x0  nop
    ctx->pc = 0x1ed804u;
    // NOP
    // 0x1ed808: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed808u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed80c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed80cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed810:
    // 0x1ed810: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ed810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ed814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed818: 0x0  nop
    ctx->pc = 0x1ed818u;
    // NOP
    // 0x1ed81c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed81cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed820: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed824: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ed824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed828: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed828u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed82c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1ed82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1ed830: 0x1000036f  b           . + 4 + (0x36F << 2)
    ctx->pc = 0x1ED830u;
    {
        const bool branch_taken_0x1ed830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed830) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED838u;
label_1ed838:
    // 0x1ed838: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed83c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed840: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed844: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ed844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed848: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed84c: 0x2785987c  addiu       $a1, $gp, -0x6784
    ctx->pc = 0x1ed84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940796));
    // 0x1ed850: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED850u;
    SET_GPR_U32(ctx, 31, 0x1ED858u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED850u, 0x1ED858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED858u;
label_1ed858:
    // 0x1ed858: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED858u;
    {
        const bool branch_taken_0x1ed858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed858) {
            ctx->pc = 0x1ED898u;
            goto label_1ed898;
        }
    }
    ctx->pc = 0x1ED860u;
    // 0x1ed860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed864: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED864u;
    SET_GPR_U32(ctx, 31, 0x1ED86Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED864u, 0x1ED86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED86Cu;
label_1ed86c:
    // 0x1ed86c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ed86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed870: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1ed870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1ed874: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED874u;
    SET_GPR_U32(ctx, 31, 0x1ED87Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED874u, 0x1ED87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED87Cu;
label_1ed87c:
    // 0x1ed87c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed880: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1ED880u;
    SET_GPR_U32(ctx, 31, 0x1ED888u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1ED880u, 0x1ED888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED888u;
label_1ed888:
    // 0x1ed888: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1ed888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed88c: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x1ed88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1ed890: 0x10000357  b           . + 4 + (0x357 << 2)
    ctx->pc = 0x1ED890u;
    {
        const bool branch_taken_0x1ed890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed890) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED898u;
label_1ed898:
    // 0x1ed898: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1ed898u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed89c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ed89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ed8a0: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ed8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ed8a4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1ed8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1ed8a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed8ac: 0x27859868  addiu       $a1, $gp, -0x6798
    ctx->pc = 0x1ed8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940776));
    // 0x1ed8b0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED8B0u;
    SET_GPR_U32(ctx, 31, 0x1ED8B8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED8B0u, 0x1ED8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8B8u;
label_1ed8b8:
    // 0x1ed8b8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ED8B8u;
    {
        const bool branch_taken_0x1ed8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed8b8) {
            ctx->pc = 0x1ED958u;
            goto label_1ed958;
        }
    }
    ctx->pc = 0x1ED8C0u;
    // 0x1ed8c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed8c4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED8C4u;
    SET_GPR_U32(ctx, 31, 0x1ED8CCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED8C4u, 0x1ED8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8CCu;
label_1ed8cc:
    // 0x1ed8cc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed8d0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed8d4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED8D4u;
    SET_GPR_U32(ctx, 31, 0x1ED8DCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED8D4u, 0x1ED8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8DCu;
label_1ed8dc:
    // 0x1ed8dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed8dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed8e0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1ED8E0u;
    SET_GPR_U32(ctx, 31, 0x1ED8E8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1ED8E0u, 0x1ED8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED8E8u;
label_1ed8e8:
    // 0x1ed8e8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed8ec: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ed8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1ed8f0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ed8f4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ed8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ed8f8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ED8F8u;
    {
        const bool branch_taken_0x1ed8f8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ed8f8) {
            ctx->pc = 0x1ED914u;
            goto label_1ed914;
        }
    }
    ctx->pc = 0x1ED900u;
    // 0x1ed900: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ed900u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed904: 0x0  nop
    ctx->pc = 0x1ed904u;
    // NOP
    // 0x1ed908: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed908u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed90c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED90Cu;
    {
        const bool branch_taken_0x1ed90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed90c) {
            ctx->pc = 0x1ED930u;
            goto label_1ed930;
        }
    }
    ctx->pc = 0x1ED914u;
label_1ed914:
    // 0x1ed914: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1ed914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ed918: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1ed918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ed91c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ed91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ed920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ed920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed924: 0x0  nop
    ctx->pc = 0x1ed924u;
    // NOP
    // 0x1ed928: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ed928u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ed92c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ed92cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ed930:
    // 0x1ed930: 0x3c0543e0  lui         $a1, 0x43E0
    ctx->pc = 0x1ed930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17376 << 16));
    // 0x1ed934: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ed934u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ed938: 0x0  nop
    ctx->pc = 0x1ed938u;
    // NOP
    // 0x1ed93c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ed93cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ed940: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed944: 0xc44000a8  lwc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ed944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ed948: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ed948u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ed94c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x1ed94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
    // 0x1ed950: 0x10000327  b           . + 4 + (0x327 << 2)
    ctx->pc = 0x1ED950u;
    {
        const bool branch_taken_0x1ed950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed950) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED958u;
label_1ed958:
    // 0x1ed958: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ed958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed95c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ed95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ed960: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ed960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ed964: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ed964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ed968: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1ed968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ed96c: 0x27859858  addiu       $a1, $gp, -0x67A8
    ctx->pc = 0x1ed96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940760));
    // 0x1ed970: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED970u;
    SET_GPR_U32(ctx, 31, 0x1ED978u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED970u, 0x1ED978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED978u;
label_1ed978:
    // 0x1ed978: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1ED978u;
    {
        const bool branch_taken_0x1ed978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed978) {
            ctx->pc = 0x1ED9B8u;
            goto label_1ed9b8;
        }
    }
    ctx->pc = 0x1ED980u;
    // 0x1ed980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed984: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED984u;
    SET_GPR_U32(ctx, 31, 0x1ED98Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED984u, 0x1ED98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED98Cu;
label_1ed98c:
    // 0x1ed98c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ed98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed990: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ed990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed994: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED994u;
    SET_GPR_U32(ctx, 31, 0x1ED99Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED994u, 0x1ED99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED99Cu;
label_1ed99c:
    // 0x1ed99c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9a0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1ED9A0u;
    SET_GPR_U32(ctx, 31, 0x1ED9A8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1ED9A0u, 0x1ED9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9A8u;
label_1ed9a8:
    // 0x1ed9a8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ed9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ed9ac: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x1ed9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x1ed9b0: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x1ED9B0u;
    {
        const bool branch_taken_0x1ed9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9b0) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1ED9B8u;
label_1ed9b8:
    // 0x1ed9b8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ed9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ed9bc: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ed9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ed9c0: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ed9c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ed9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ed9c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed9cc: 0x2785985c  addiu       $a1, $gp, -0x67A4
    ctx->pc = 0x1ed9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940764));
    // 0x1ed9d0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1ED9D0u;
    SET_GPR_U32(ctx, 31, 0x1ED9D8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1ED9D0u, 0x1ED9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9D8u;
label_1ed9d8:
    // 0x1ed9d8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1ED9D8u;
    {
        const bool branch_taken_0x1ed9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed9d8) {
            ctx->pc = 0x1EDA78u;
            goto label_1eda78;
        }
    }
    ctx->pc = 0x1ED9E0u;
    // 0x1ed9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ed9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed9e4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1ED9E4u;
    SET_GPR_U32(ctx, 31, 0x1ED9ECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1ED9E4u, 0x1ED9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9ECu;
label_1ed9ec:
    // 0x1ed9ec: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x1ed9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ed9f0: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x1ed9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ed9f4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1ED9F4u;
    SET_GPR_U32(ctx, 31, 0x1ED9FCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1ED9F4u, 0x1ED9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED9FCu;
label_1ed9fc:
    // 0x1ed9fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ed9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eda00: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDA00u;
    SET_GPR_U32(ctx, 31, 0x1EDA08u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDA00u, 0x1EDA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA08u;
label_1eda08:
    // 0x1eda08: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1eda08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eda0c: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1eda0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1eda10: 0x8f84bb80  lw          $a0, -0x4480($gp)
    ctx->pc = 0x1eda10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1eda14: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1eda14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1eda18: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDA18u;
    {
        const bool branch_taken_0x1eda18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eda18) {
            ctx->pc = 0x1EDA34u;
            goto label_1eda34;
        }
    }
    ctx->pc = 0x1EDA20u;
    // 0x1eda20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eda20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda24: 0x0  nop
    ctx->pc = 0x1eda24u;
    // NOP
    // 0x1eda28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eda28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eda2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDA2Cu;
    {
        const bool branch_taken_0x1eda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eda2c) {
            ctx->pc = 0x1EDA50u;
            goto label_1eda50;
        }
    }
    ctx->pc = 0x1EDA34u;
label_1eda34:
    // 0x1eda34: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eda34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eda38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eda38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1eda3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1eda3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1eda40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eda40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda44: 0x0  nop
    ctx->pc = 0x1eda44u;
    // NOP
    // 0x1eda48: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eda48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eda4c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eda4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eda50:
    // 0x1eda50: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1eda50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1eda54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1eda54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eda58: 0x0  nop
    ctx->pc = 0x1eda58u;
    // NOP
    // 0x1eda5c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eda5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1eda60: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1eda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eda64: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x1eda64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eda68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eda68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eda6c: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x1eda6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x1eda70: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x1EDA70u;
    {
        const bool branch_taken_0x1eda70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eda70) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDA78u;
label_1eda78:
    // 0x1eda78: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1eda78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1eda7c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1eda7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1eda80: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1eda80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1eda84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1eda84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1eda88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1eda88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eda8c: 0x27859860  addiu       $a1, $gp, -0x67A0
    ctx->pc = 0x1eda8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940768));
    // 0x1eda90: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDA90u;
    SET_GPR_U32(ctx, 31, 0x1EDA98u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDA90u, 0x1EDA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDA98u;
label_1eda98:
    // 0x1eda98: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EDA98u;
    {
        const bool branch_taken_0x1eda98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1eda98) {
            ctx->pc = 0x1EDB38u;
            goto label_1edb38;
        }
    }
    ctx->pc = 0x1EDAA0u;
    // 0x1edaa0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edaa4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDAA4u;
    SET_GPR_U32(ctx, 31, 0x1EDAACu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDAA4u, 0x1EDAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAACu;
label_1edaac:
    // 0x1edaac: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edab0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edab4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDAB4u;
    SET_GPR_U32(ctx, 31, 0x1EDABCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDAB4u, 0x1EDABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDABCu;
label_1edabc:
    // 0x1edabc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edac0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDAC0u;
    SET_GPR_U32(ctx, 31, 0x1EDAC8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDAC0u, 0x1EDAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDAC8u;
label_1edac8:
    // 0x1edac8: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1edac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edacc: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x1edaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x1edad0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1edad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1edad4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1edad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1edad8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDAD8u;
    {
        const bool branch_taken_0x1edad8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1edad8) {
            ctx->pc = 0x1EDAF4u;
            goto label_1edaf4;
        }
    }
    ctx->pc = 0x1EDAE0u;
    // 0x1edae0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edae0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edae4: 0x0  nop
    ctx->pc = 0x1edae4u;
    // NOP
    // 0x1edae8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edae8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edaec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDAECu;
    {
        const bool branch_taken_0x1edaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edaec) {
            ctx->pc = 0x1EDB10u;
            goto label_1edb10;
        }
    }
    ctx->pc = 0x1EDAF4u;
label_1edaf4:
    // 0x1edaf4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1edaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1edaf8: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1edaf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1edafc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1edafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1edb00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edb00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edb04: 0x0  nop
    ctx->pc = 0x1edb04u;
    // NOP
    // 0x1edb08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edb08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edb0c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1edb0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1edb10:
    // 0x1edb10: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1edb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1edb14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edb18: 0x0  nop
    ctx->pc = 0x1edb18u;
    // NOP
    // 0x1edb1c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1edb1cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1edb20: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edb24: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1edb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1edb28: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1edb28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1edb2c: 0xe440006c  swc1        $f0, 0x6C($v0)
    ctx->pc = 0x1edb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 108), bits); }
    // 0x1edb30: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x1EDB30u;
    {
        const bool branch_taken_0x1edb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb30) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDB38u;
label_1edb38:
    // 0x1edb38: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1edb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edb3c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1edb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1edb40: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1edb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1edb44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1edb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edb48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edb4c: 0x27859880  addiu       $a1, $gp, -0x6780
    ctx->pc = 0x1edb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940800));
    // 0x1edb50: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDB50u;
    SET_GPR_U32(ctx, 31, 0x1EDB58u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDB50u, 0x1EDB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB58u;
label_1edb58:
    // 0x1edb58: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDB58u;
    {
        const bool branch_taken_0x1edb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edb58) {
            ctx->pc = 0x1EDB98u;
            goto label_1edb98;
        }
    }
    ctx->pc = 0x1EDB60u;
    // 0x1edb60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb64: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDB64u;
    SET_GPR_U32(ctx, 31, 0x1EDB6Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDB64u, 0x1EDB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB6Cu;
label_1edb6c:
    // 0x1edb6c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edb70: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edb74: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDB74u;
    SET_GPR_U32(ctx, 31, 0x1EDB7Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDB74u, 0x1EDB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB7Cu;
label_1edb7c:
    // 0x1edb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edb80: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDB80u;
    SET_GPR_U32(ctx, 31, 0x1EDB88u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDB80u, 0x1EDB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDB88u;
label_1edb88:
    // 0x1edb88: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1edb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edb8c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1edb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1edb90: 0x10000297  b           . + 4 + (0x297 << 2)
    ctx->pc = 0x1EDB90u;
    {
        const bool branch_taken_0x1edb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edb90) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDB98u;
label_1edb98:
    // 0x1edb98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1edb98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edb9c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1edb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1edba0: 0x24848120  addiu       $a0, $a0, -0x7EE0
    ctx->pc = 0x1edba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1edba4: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1edba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1edba8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1edba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1edbac: 0x27859884  addiu       $a1, $gp, -0x677C
    ctx->pc = 0x1edbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940804));
    // 0x1edbb0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDBB0u;
    SET_GPR_U32(ctx, 31, 0x1EDBB8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDBB0u, 0x1EDBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBB8u;
label_1edbb8:
    // 0x1edbb8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EDBB8u;
    {
        const bool branch_taken_0x1edbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edbb8) {
            ctx->pc = 0x1EDBECu;
            goto label_1edbec;
        }
    }
    ctx->pc = 0x1EDBC0u;
    // 0x1edbc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edbc4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDBC4u;
    SET_GPR_U32(ctx, 31, 0x1EDBCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDBC4u, 0x1EDBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBCCu;
label_1edbcc:
    // 0x1edbcc: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x1edbccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edbd0: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1edbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1edbd4: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1EDBD4u;
    SET_GPR_U32(ctx, 31, 0x1EDBDCu);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1EDBD4u, 0x1EDBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDBDCu;
label_1edbdc:
    // 0x1edbdc: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1edbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edbe0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1edbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1edbe4: 0x10000282  b           . + 4 + (0x282 << 2)
    ctx->pc = 0x1EDBE4u;
    {
        const bool branch_taken_0x1edbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edbe4) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDBECu;
label_1edbec:
    // 0x1edbec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1edbecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edbf0: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x1edbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
    // 0x1edbf4: 0x24848120  addiu       $a0, $a0, -0x7EE0
    ctx->pc = 0x1edbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934816));
    // 0x1edbf8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1edbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1edbfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edc00: 0x27859888  addiu       $a1, $gp, -0x6778
    ctx->pc = 0x1edc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940808));
    // 0x1edc04: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDC04u;
    SET_GPR_U32(ctx, 31, 0x1EDC0Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDC04u, 0x1EDC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC0Cu;
label_1edc0c:
    // 0x1edc0c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EDC0Cu;
    {
        const bool branch_taken_0x1edc0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc0c) {
            ctx->pc = 0x1EDC44u;
            goto label_1edc44;
        }
    }
    ctx->pc = 0x1EDC14u;
    // 0x1edc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc18: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDC18u;
    SET_GPR_U32(ctx, 31, 0x1EDC20u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDC18u, 0x1EDC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC20u;
label_1edc20:
    // 0x1edc20: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1edc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edc24: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x1edc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1edc28: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1edc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc2c: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1EDC2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC34u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1EDC2Cu, 0x1EDC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC34u;
label_1edc34:
    // 0x1edc34: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1edc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edc38: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x1edc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x1edc3c: 0x1000026c  b           . + 4 + (0x26C << 2)
    ctx->pc = 0x1EDC3Cu;
    {
        const bool branch_taken_0x1edc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc3c) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDC44u;
label_1edc44:
    // 0x1edc44: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1edc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edc48: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1edc48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1edc4c: 0x24a58120  addiu       $a1, $a1, -0x7EE0
    ctx->pc = 0x1edc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1edc50: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1edc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1edc54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edc54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edc58: 0x278598b0  addiu       $a1, $gp, -0x6750
    ctx->pc = 0x1edc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940848));
    // 0x1edc5c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDC5Cu;
    SET_GPR_U32(ctx, 31, 0x1EDC64u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDC5Cu, 0x1EDC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC64u;
label_1edc64:
    // 0x1edc64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1EDC64u;
    {
        const bool branch_taken_0x1edc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edc64) {
            ctx->pc = 0x1EDC98u;
            goto label_1edc98;
        }
    }
    ctx->pc = 0x1EDC6Cu;
    // 0x1edc6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edc70: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDC70u;
    SET_GPR_U32(ctx, 31, 0x1EDC78u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDC70u, 0x1EDC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC78u;
label_1edc78:
    // 0x1edc78: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edc7c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edc80: 0xc0ba89e  jal         func_2EA278
    ctx->pc = 0x1EDC80u;
    SET_GPR_U32(ctx, 31, 0x1EDC88u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x1EDC80u, 0x1EDC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDC88u;
label_1edc88:
    // 0x1edc88: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1edc88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edc8c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1edc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x1edc90: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x1EDC90u;
    {
        const bool branch_taken_0x1edc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edc90) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDC98u;
label_1edc98:
    // 0x1edc98: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1edc98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edc9c: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1edc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1edca0: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1edca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1edca4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1edca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edca8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edcac: 0x27859828  addiu       $a1, $gp, -0x67D8
    ctx->pc = 0x1edcacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940712));
    // 0x1edcb0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDCB0u;
    SET_GPR_U32(ctx, 31, 0x1EDCB8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDCB0u, 0x1EDCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCB8u;
label_1edcb8:
    // 0x1edcb8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EDCB8u;
    {
        const bool branch_taken_0x1edcb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edcb8) {
            ctx->pc = 0x1EDD58u;
            goto label_1edd58;
        }
    }
    ctx->pc = 0x1EDCC0u;
    // 0x1edcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edcc4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDCC4u;
    SET_GPR_U32(ctx, 31, 0x1EDCCCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDCC4u, 0x1EDCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCCCu;
label_1edccc:
    // 0x1edccc: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edcd0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edcd4: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDCD4u;
    SET_GPR_U32(ctx, 31, 0x1EDCDCu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDCD4u, 0x1EDCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCDCu;
label_1edcdc:
    // 0x1edcdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edce0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDCE0u;
    SET_GPR_U32(ctx, 31, 0x1EDCE8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDCE0u, 0x1EDCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDCE8u;
label_1edce8:
    // 0x1edce8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edcec: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1edcecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1edcf0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1edcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1edcf4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1edcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1edcf8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDCF8u;
    {
        const bool branch_taken_0x1edcf8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1edcf8) {
            ctx->pc = 0x1EDD14u;
            goto label_1edd14;
        }
    }
    ctx->pc = 0x1EDD00u;
    // 0x1edd00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edd04: 0x0  nop
    ctx->pc = 0x1edd04u;
    // NOP
    // 0x1edd08: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edd08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edd0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDD0Cu;
    {
        const bool branch_taken_0x1edd0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd0c) {
            ctx->pc = 0x1EDD30u;
            goto label_1edd30;
        }
    }
    ctx->pc = 0x1EDD14u;
label_1edd14:
    // 0x1edd14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1edd14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1edd18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1edd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1edd1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1edd1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1edd20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edd20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edd24: 0x0  nop
    ctx->pc = 0x1edd24u;
    // NOP
    // 0x1edd28: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edd28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edd2c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1edd2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1edd30:
    // 0x1edd30: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1edd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1edd34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edd34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edd38: 0x0  nop
    ctx->pc = 0x1edd38u;
    // NOP
    // 0x1edd3c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1edd3cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1edd40: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edd44: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1edd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1edd48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1edd48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1edd4c: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x1edd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x1edd50: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x1EDD50u;
    {
        const bool branch_taken_0x1edd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edd50) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDD58u;
label_1edd58:
    // 0x1edd58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1edd58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edd5c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1edd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1edd60: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1edd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1edd64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edd68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edd6c: 0x2785982c  addiu       $a1, $gp, -0x67D4
    ctx->pc = 0x1edd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940716));
    // 0x1edd70: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDD70u;
    SET_GPR_U32(ctx, 31, 0x1EDD78u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDD70u, 0x1EDD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD78u;
label_1edd78:
    // 0x1edd78: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EDD78u;
    {
        const bool branch_taken_0x1edd78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edd78) {
            ctx->pc = 0x1EDE18u;
            goto label_1ede18;
        }
    }
    ctx->pc = 0x1EDD80u;
    // 0x1edd80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edd84: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDD84u;
    SET_GPR_U32(ctx, 31, 0x1EDD8Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDD84u, 0x1EDD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD8Cu;
label_1edd8c:
    // 0x1edd8c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edd90: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edd94: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDD94u;
    SET_GPR_U32(ctx, 31, 0x1EDD9Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDD94u, 0x1EDD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDD9Cu;
label_1edd9c:
    // 0x1edd9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edda0: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDDA0u;
    SET_GPR_U32(ctx, 31, 0x1EDDA8u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDDA0u, 0x1EDDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDDA8u;
label_1edda8:
    // 0x1edda8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eddac: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1eddacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1eddb0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1eddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1eddb4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1eddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1eddb8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDDB8u;
    {
        const bool branch_taken_0x1eddb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1eddb8) {
            ctx->pc = 0x1EDDD4u;
            goto label_1eddd4;
        }
    }
    ctx->pc = 0x1EDDC0u;
    // 0x1eddc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eddc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eddc4: 0x0  nop
    ctx->pc = 0x1eddc4u;
    // NOP
    // 0x1eddc8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1eddc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eddcc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDDCCu;
    {
        const bool branch_taken_0x1eddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eddcc) {
            ctx->pc = 0x1EDDF0u;
            goto label_1eddf0;
        }
    }
    ctx->pc = 0x1EDDD4u;
label_1eddd4:
    // 0x1eddd4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1eddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1eddd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1eddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1edddc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1edddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1edde0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edde0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edde4: 0x0  nop
    ctx->pc = 0x1edde4u;
    // NOP
    // 0x1edde8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1eddec: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1eddecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1eddf0:
    // 0x1eddf0: 0x3c0243e0  lui         $v0, 0x43E0
    ctx->pc = 0x1eddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17376 << 16));
    // 0x1eddf4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1eddf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1eddf8: 0x0  nop
    ctx->pc = 0x1eddf8u;
    // NOP
    // 0x1eddfc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1eddfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ede00: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ede00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ede04: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x1ede04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ede08: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ede08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ede0c: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1ede0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x1ede10: 0x100001f7  b           . + 4 + (0x1F7 << 2)
    ctx->pc = 0x1EDE10u;
    {
        const bool branch_taken_0x1ede10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede10) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDE18u;
label_1ede18:
    // 0x1ede18: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ede18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ede1c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ede1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ede20: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ede20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ede24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ede24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ede28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ede28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ede2c: 0x27859830  addiu       $a1, $gp, -0x67D0
    ctx->pc = 0x1ede2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940720));
    // 0x1ede30: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDE30u;
    SET_GPR_U32(ctx, 31, 0x1EDE38u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDE30u, 0x1EDE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE38u;
label_1ede38:
    // 0x1ede38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ede38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede3c: 0x14800029  bnez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EDE3Cu;
    {
        const bool branch_taken_0x1ede3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ede3c) {
            ctx->pc = 0x1EDEE4u;
            goto label_1edee4;
        }
    }
    ctx->pc = 0x1EDE44u;
    // 0x1ede44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ede44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede48: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDE48u;
    SET_GPR_U32(ctx, 31, 0x1EDE50u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDE48u, 0x1EDE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE50u;
label_1ede50:
    // 0x1ede50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ede50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede54: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ede54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ede58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1ede58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1ede5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ede5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede60: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDE60u;
    SET_GPR_U32(ctx, 31, 0x1EDE68u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDE60u, 0x1EDE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE68u;
label_1ede68:
    // 0x1ede68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ede68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ede6c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDE6Cu;
    SET_GPR_U32(ctx, 31, 0x1EDE74u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDE6Cu, 0x1EDE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDE74u;
label_1ede74:
    // 0x1ede74: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1ede74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ede78: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1ede78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1ede7c: 0x8f85bb80  lw          $a1, -0x4480($gp)
    ctx->pc = 0x1ede7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ede80: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ede80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ede84: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDE84u;
    {
        const bool branch_taken_0x1ede84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ede84) {
            ctx->pc = 0x1EDEA0u;
            goto label_1edea0;
        }
    }
    ctx->pc = 0x1EDE8Cu;
    // 0x1ede8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ede8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ede90: 0x0  nop
    ctx->pc = 0x1ede90u;
    // NOP
    // 0x1ede94: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ede94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ede98: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDE98u;
    {
        const bool branch_taken_0x1ede98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ede98) {
            ctx->pc = 0x1EDEBCu;
            goto label_1edebc;
        }
    }
    ctx->pc = 0x1EDEA0u;
label_1edea0:
    // 0x1edea0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1edea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1edea4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1edea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1edea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1edea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1edeac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edeacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edeb0: 0x0  nop
    ctx->pc = 0x1edeb0u;
    // NOP
    // 0x1edeb4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edeb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edeb8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1edeb8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1edebc:
    // 0x1edebc: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1edebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1edec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edec4: 0x0  nop
    ctx->pc = 0x1edec4u;
    // NOP
    // 0x1edec8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1edec8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1edecc: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1eded0: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x1eded0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eded4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1eded4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1eded8: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x1eded8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x1ededc: 0x100001c4  b           . + 4 + (0x1C4 << 2)
    ctx->pc = 0x1EDEDCu;
    {
        const bool branch_taken_0x1ededc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ededc) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDEE4u;
label_1edee4:
    // 0x1edee4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1edee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edee8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1edee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1edeec: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1edeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1edef0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1edef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edef4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1edef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1edef8: 0x27859834  addiu       $a1, $gp, -0x67CC
    ctx->pc = 0x1edef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940724));
    // 0x1edefc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDEFCu;
    SET_GPR_U32(ctx, 31, 0x1EDF04u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDEFCu, 0x1EDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF04u;
label_1edf04:
    // 0x1edf04: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1EDF04u;
    {
        const bool branch_taken_0x1edf04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edf04) {
            ctx->pc = 0x1EDFA4u;
            goto label_1edfa4;
        }
    }
    ctx->pc = 0x1EDF0Cu;
    // 0x1edf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf10: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDF10u;
    SET_GPR_U32(ctx, 31, 0x1EDF18u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDF10u, 0x1EDF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF18u;
label_1edf18:
    // 0x1edf18: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1edf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edf1c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1edf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1edf20: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDF20u;
    SET_GPR_U32(ctx, 31, 0x1EDF28u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDF20u, 0x1EDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF28u;
label_1edf28:
    // 0x1edf28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf2c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF34u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDF2Cu, 0x1EDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF34u;
label_1edf34:
    // 0x1edf34: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edf38: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1edf38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1edf3c: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1edf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1edf40: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1edf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1edf44: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EDF44u;
    {
        const bool branch_taken_0x1edf44 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1edf44) {
            ctx->pc = 0x1EDF60u;
            goto label_1edf60;
        }
    }
    ctx->pc = 0x1EDF4Cu;
    // 0x1edf4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1edf4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edf50: 0x0  nop
    ctx->pc = 0x1edf50u;
    // NOP
    // 0x1edf54: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edf54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edf58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDF58u;
    {
        const bool branch_taken_0x1edf58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf58) {
            ctx->pc = 0x1EDF7Cu;
            goto label_1edf7c;
        }
    }
    ctx->pc = 0x1EDF60u;
label_1edf60:
    // 0x1edf60: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1edf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1edf64: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1edf64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1edf68: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1edf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1edf6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1edf6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edf70: 0x0  nop
    ctx->pc = 0x1edf70u;
    // NOP
    // 0x1edf74: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1edf74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1edf78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1edf78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1edf7c:
    // 0x1edf7c: 0x3c0543e0  lui         $a1, 0x43E0
    ctx->pc = 0x1edf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17376 << 16));
    // 0x1edf80: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1edf80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1edf84: 0x0  nop
    ctx->pc = 0x1edf84u;
    // NOP
    // 0x1edf88: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1edf88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1edf8c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1edf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1edf90: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1edf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1edf94: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1edf94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1edf98: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x1edf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x1edf9c: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1EDF9Cu;
    {
        const bool branch_taken_0x1edf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edf9c) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EDFA4u;
label_1edfa4:
    // 0x1edfa4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1edfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1edfa8: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1edfac: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1edfacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1edfb0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1edfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edfb4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edfb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1edfb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfbc: 0x27859848  addiu       $a1, $gp, -0x67B8
    ctx->pc = 0x1edfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940744));
    // 0x1edfc0: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EDFC0u;
    SET_GPR_U32(ctx, 31, 0x1EDFC8u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EDFC0u, 0x1EDFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFC8u;
label_1edfc8:
    // 0x1edfc8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EDFC8u;
    {
        const bool branch_taken_0x1edfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1edfc8) {
            ctx->pc = 0x1EE010u;
            goto label_1ee010;
        }
    }
    ctx->pc = 0x1EDFD0u;
    // 0x1edfd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1edfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfd4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EDFD4u;
    SET_GPR_U32(ctx, 31, 0x1EDFDCu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EDFD4u, 0x1EDFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFDCu;
label_1edfdc:
    // 0x1edfdc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1edfdcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfe0: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1edfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1edfe4: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1edfe8: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EDFE8u;
    SET_GPR_U32(ctx, 31, 0x1EDFF0u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EDFE8u, 0x1EDFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDFF0u;
label_1edff0:
    // 0x1edff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edff4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1edff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edff8: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EDFF8u;
    SET_GPR_U32(ctx, 31, 0x1EE000u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EDFF8u, 0x1EE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE000u;
label_1ee000:
    // 0x1ee000: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee004: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x1ee004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x1ee008: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x1EE008u;
    {
        const bool branch_taken_0x1ee008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee008) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE010u;
label_1ee010:
    // 0x1ee010: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ee010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee014: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ee014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ee018: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ee018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ee01c: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ee01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee020: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee028: 0x2785984c  addiu       $a1, $gp, -0x67B4
    ctx->pc = 0x1ee028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940748));
    // 0x1ee02c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE02Cu;
    SET_GPR_U32(ctx, 31, 0x1EE034u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE02Cu, 0x1EE034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE034u;
label_1ee034:
    // 0x1ee034: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EE034u;
    {
        const bool branch_taken_0x1ee034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee034) {
            ctx->pc = 0x1EE0DCu;
            goto label_1ee0dc;
        }
    }
    ctx->pc = 0x1EE03Cu;
    // 0x1ee03c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee040: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE040u;
    SET_GPR_U32(ctx, 31, 0x1EE048u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE040u, 0x1EE048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE048u;
label_1ee048:
    // 0x1ee048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee04c: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ee04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee050: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ee050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee054: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EE054u;
    SET_GPR_U32(ctx, 31, 0x1EE05Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EE054u, 0x1EE05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE05Cu;
label_1ee05c:
    // 0x1ee05c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee064: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EE064u;
    SET_GPR_U32(ctx, 31, 0x1EE06Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EE064u, 0x1EE06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE06Cu;
label_1ee06c:
    // 0x1ee06c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee070: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ee070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1ee074: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ee074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee078: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1ee078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ee07c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE07Cu;
    {
        const bool branch_taken_0x1ee07c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ee07c) {
            ctx->pc = 0x1EE098u;
            goto label_1ee098;
        }
    }
    ctx->pc = 0x1EE084u;
    // 0x1ee084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee088: 0x0  nop
    ctx->pc = 0x1ee088u;
    // NOP
    // 0x1ee08c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee08cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE090u;
    {
        const bool branch_taken_0x1ee090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee090) {
            ctx->pc = 0x1EE0B4u;
            goto label_1ee0b4;
        }
    }
    ctx->pc = 0x1EE098u;
label_1ee098:
    // 0x1ee098: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x1ee098u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ee09c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1ee09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ee0a0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1ee0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1ee0a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1ee0a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee0a8: 0x0  nop
    ctx->pc = 0x1ee0a8u;
    // NOP
    // 0x1ee0ac: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee0acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee0b0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee0b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee0b4:
    // 0x1ee0b4: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x1ee0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x1ee0b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee0b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee0bc: 0x0  nop
    ctx->pc = 0x1ee0bcu;
    // NOP
    // 0x1ee0c0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee0c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee0c4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee0c8: 0xc440007c  lwc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ee0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee0d0: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x1ee0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
    // 0x1ee0d4: 0x10000146  b           . + 4 + (0x146 << 2)
    ctx->pc = 0x1EE0D4u;
    {
        const bool branch_taken_0x1ee0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee0d4) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE0DCu;
label_1ee0dc:
    // 0x1ee0dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ee0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee0e0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ee0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ee0e4: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ee0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ee0e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ee0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee0ec: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ee0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee0f0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0f4: 0x27829850  addiu       $v0, $gp, -0x67B0
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940752));
    // 0x1ee0f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0fc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE0FCu;
    SET_GPR_U32(ctx, 31, 0x1EE104u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE0FCu, 0x1EE104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE104u;
label_1ee104:
    // 0x1ee104: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EE104u;
    {
        const bool branch_taken_0x1ee104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee104) {
            ctx->pc = 0x1EE1ACu;
            goto label_1ee1ac;
        }
    }
    ctx->pc = 0x1EE10Cu;
    // 0x1ee10c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee110: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE110u;
    SET_GPR_U32(ctx, 31, 0x1EE118u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE110u, 0x1EE118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE118u;
label_1ee118:
    // 0x1ee118: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee11c: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x1ee11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee120: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1ee120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ee124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee128: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EE128u;
    SET_GPR_U32(ctx, 31, 0x1EE130u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EE128u, 0x1EE130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE130u;
label_1ee130:
    // 0x1ee130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee134: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EE134u;
    SET_GPR_U32(ctx, 31, 0x1EE13Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EE134u, 0x1EE13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE13Cu;
label_1ee13c:
    // 0x1ee13c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee140: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1ee140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1ee144: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x1ee144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee148: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1ee148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1ee14c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE14Cu;
    {
        const bool branch_taken_0x1ee14c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ee14c) {
            ctx->pc = 0x1EE168u;
            goto label_1ee168;
        }
    }
    ctx->pc = 0x1EE154u;
    // 0x1ee154: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee154u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee158: 0x0  nop
    ctx->pc = 0x1ee158u;
    // NOP
    // 0x1ee15c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee15cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee160: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE160u;
    {
        const bool branch_taken_0x1ee160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee160) {
            ctx->pc = 0x1EE184u;
            goto label_1ee184;
        }
    }
    ctx->pc = 0x1EE168u;
label_1ee168:
    // 0x1ee168: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ee168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ee16c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ee16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee170: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1ee170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1ee174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee178: 0x0  nop
    ctx->pc = 0x1ee178u;
    // NOP
    // 0x1ee17c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee17cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee180: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee184:
    // 0x1ee184: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ee184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee188: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee18c: 0x0  nop
    ctx->pc = 0x1ee18cu;
    // NOP
    // 0x1ee190: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee190u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee194: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee198: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x1ee198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee19c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee19cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee1a0: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x1ee1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x1ee1a4: 0x10000112  b           . + 4 + (0x112 << 2)
    ctx->pc = 0x1EE1A4u;
    {
        const bool branch_taken_0x1ee1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1a4) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE1ACu;
label_1ee1ac:
    // 0x1ee1ac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1ee1acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee1b0: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x1ee1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
    // 0x1ee1b4: 0x24428120  addiu       $v0, $v0, -0x7EE0
    ctx->pc = 0x1ee1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934816));
    // 0x1ee1b8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ee1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee1bc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1ee1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee1c0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1c4: 0x27829854  addiu       $v0, $gp, -0x67AC
    ctx->pc = 0x1ee1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940756));
    // 0x1ee1c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1cc: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE1CCu;
    SET_GPR_U32(ctx, 31, 0x1EE1D4u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE1CCu, 0x1EE1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1D4u;
label_1ee1d4:
    // 0x1ee1d4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1EE1D4u;
    {
        const bool branch_taken_0x1ee1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee1d4) {
            ctx->pc = 0x1EE250u;
            goto label_1ee250;
        }
    }
    ctx->pc = 0x1EE1DCu;
    // 0x1ee1dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ee1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ee1e0: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1EE1E0u;
    SET_GPR_U32(ctx, 31, 0x1EE1E8u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1EE1E0u, 0x1EE1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE1E8u;
label_1ee1e8:
    // 0x1ee1e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1ec: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee1f0: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1ee1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1ee1f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee1f8: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1ee1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ee1fc: 0xc061d44  jal         func_187510
    ctx->pc = 0x1EE1FCu;
    SET_GPR_U32(ctx, 31, 0x1EE204u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x1EE1FCu, 0x1EE204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE204u;
label_1ee204:
    // 0x1ee204: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x1ee204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee208: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ee208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee20c: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EE20Cu;
    {
        const bool branch_taken_0x1ee20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ee20c) {
            ctx->pc = 0x1EE234u;
            goto label_1ee234;
        }
    }
    ctx->pc = 0x1EE214u;
    // 0x1ee214: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1ee214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee218: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1ee218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1ee21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee220: 0x278298b4  addiu       $v0, $gp, -0x674C
    ctx->pc = 0x1ee220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940852));
    // 0x1ee224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee228: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x1EE228u;
    SET_GPR_U32(ctx, 31, 0x1EE230u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x1EE228u, 0x1EE230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE230u;
label_1ee230:
    // 0x1ee230: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ee234:
    // 0x1ee234: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1ee234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ee238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee23c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee23cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee240: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1EE240u;
    SET_GPR_U32(ctx, 31, 0x1EE248u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1EE240u, 0x1EE248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE248u;
label_1ee248:
    // 0x1ee248: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x1EE248u;
    {
        const bool branch_taken_0x1ee248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee248) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE250u;
label_1ee250:
    // 0x1ee250: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ee250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee254: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ee254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ee258: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ee258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ee25c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee260: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee264: 0x27859838  addiu       $a1, $gp, -0x67C8
    ctx->pc = 0x1ee264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940728));
    // 0x1ee268: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE268u;
    SET_GPR_U32(ctx, 31, 0x1EE270u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE268u, 0x1EE270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE270u;
label_1ee270:
    // 0x1ee270: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EE270u;
    {
        const bool branch_taken_0x1ee270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee270) {
            ctx->pc = 0x1EE320u;
            goto label_1ee320;
        }
    }
    ctx->pc = 0x1EE278u;
    // 0x1ee278: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee27c: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE27Cu;
    SET_GPR_U32(ctx, 31, 0x1EE284u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE27Cu, 0x1EE284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE284u;
label_1ee284:
    // 0x1ee284: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ee284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee288: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ee288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee28c: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EE28Cu;
    SET_GPR_U32(ctx, 31, 0x1EE294u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EE28Cu, 0x1EE294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE294u;
label_1ee294:
    // 0x1ee294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee298: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EE298u;
    SET_GPR_U32(ctx, 31, 0x1EE2A0u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EE298u, 0x1EE2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE2A0u;
label_1ee2a0:
    // 0x1ee2a0: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1ee2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee2a4: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x1ee2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x1ee2a8: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ee2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee2ac: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1ee2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ee2b0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE2B0u;
    {
        const bool branch_taken_0x1ee2b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1ee2b0) {
            ctx->pc = 0x1EE2CCu;
            goto label_1ee2cc;
        }
    }
    ctx->pc = 0x1EE2B8u;
    // 0x1ee2b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee2b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee2bc: 0x0  nop
    ctx->pc = 0x1ee2bcu;
    // NOP
    // 0x1ee2c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee2c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee2c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE2C4u;
    {
        const bool branch_taken_0x1ee2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee2c4) {
            ctx->pc = 0x1EE2E8u;
            goto label_1ee2e8;
        }
    }
    ctx->pc = 0x1EE2CCu;
label_1ee2cc:
    // 0x1ee2cc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1ee2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1ee2d0: 0x30440001  andi        $a0, $v0, 0x1
    ctx->pc = 0x1ee2d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ee2d4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ee2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ee2d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee2d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee2dc: 0x0  nop
    ctx->pc = 0x1ee2dcu;
    // NOP
    // 0x1ee2e0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee2e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee2e4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee2e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee2e8:
    // 0x1ee2e8: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ee2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee2f0: 0x0  nop
    ctx->pc = 0x1ee2f0u;
    // NOP
    // 0x1ee2f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee2f4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee2f8: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee2fc: 0xc4400044  lwc1        $f0, 0x44($v0)
    ctx->pc = 0x1ee2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee300: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee304: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x1ee304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x1ee308: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ee308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee30c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1ee30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1ee310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ee310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ee314: 0xac620030  sw          $v0, 0x30($v1)
    ctx->pc = 0x1ee314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    // 0x1ee318: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1EE318u;
    {
        const bool branch_taken_0x1ee318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee318) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE320u;
label_1ee320:
    // 0x1ee320: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1ee320u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee324: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x1ee324u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x1ee328: 0x24a58120  addiu       $a1, $a1, -0x7EE0
    ctx->pc = 0x1ee328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934816));
    // 0x1ee32c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x1ee32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1ee330: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ee330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee338: 0x2785983c  addiu       $a1, $gp, -0x67C4
    ctx->pc = 0x1ee338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940732));
    // 0x1ee33c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE33Cu;
    SET_GPR_U32(ctx, 31, 0x1EE344u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE33Cu, 0x1EE344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE344u;
label_1ee344:
    // 0x1ee344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee348: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EE348u;
    {
        const bool branch_taken_0x1ee348 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee348) {
            ctx->pc = 0x1EE3F8u;
            goto label_1ee3f8;
        }
    }
    ctx->pc = 0x1EE350u;
    // 0x1ee350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee354: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE354u;
    SET_GPR_U32(ctx, 31, 0x1EE35Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE354u, 0x1EE35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE35Cu;
label_1ee35c:
    // 0x1ee35c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ee35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee360: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ee360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee364: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EE364u;
    SET_GPR_U32(ctx, 31, 0x1EE36Cu);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EE364u, 0x1EE36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE36Cu;
label_1ee36c:
    // 0x1ee36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee370: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EE370u;
    SET_GPR_U32(ctx, 31, 0x1EE378u);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EE370u, 0x1EE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE378u;
label_1ee378:
    // 0x1ee378: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ee378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee37c: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x1ee37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1ee380: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ee380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee384: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ee384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ee388: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE388u;
    {
        const bool branch_taken_0x1ee388 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ee388) {
            ctx->pc = 0x1EE3A4u;
            goto label_1ee3a4;
        }
    }
    ctx->pc = 0x1EE390u;
    // 0x1ee390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee394: 0x0  nop
    ctx->pc = 0x1ee394u;
    // NOP
    // 0x1ee398: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee39c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE39Cu;
    {
        const bool branch_taken_0x1ee39c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee39c) {
            ctx->pc = 0x1EE3C0u;
            goto label_1ee3c0;
        }
    }
    ctx->pc = 0x1EE3A4u;
label_1ee3a4:
    // 0x1ee3a4: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1ee3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ee3a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1ee3a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ee3ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ee3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ee3b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3b4: 0x0  nop
    ctx->pc = 0x1ee3b4u;
    // NOP
    // 0x1ee3b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee3b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee3bc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee3bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee3c0:
    // 0x1ee3c0: 0x3c024420  lui         $v0, 0x4420
    ctx->pc = 0x1ee3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee3c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee3c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee3c8: 0x0  nop
    ctx->pc = 0x1ee3c8u;
    // NOP
    // 0x1ee3cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee3ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee3d0: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee3d4: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1ee3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee3dc: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x1ee3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x1ee3e0: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1ee3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee3e4: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x1ee3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ee3e8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1ee3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ee3ec: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x1ee3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x1ee3f0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1EE3F0u;
    {
        const bool branch_taken_0x1ee3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee3f0) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE3F8u;
label_1ee3f8:
    // 0x1ee3f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ee3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee3fc: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ee3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ee400: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ee400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ee404: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x1ee404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee408: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ee408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ee40c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee410: 0x27859840  addiu       $a1, $gp, -0x67C0
    ctx->pc = 0x1ee410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940736));
    // 0x1ee414: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE414u;
    SET_GPR_U32(ctx, 31, 0x1EE41Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE414u, 0x1EE41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE41Cu;
label_1ee41c:
    // 0x1ee41c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1EE41Cu;
    {
        const bool branch_taken_0x1ee41c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee41c) {
            ctx->pc = 0x1EE4CCu;
            goto label_1ee4cc;
        }
    }
    ctx->pc = 0x1EE424u;
    // 0x1ee424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ee424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee428: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE428u;
    SET_GPR_U32(ctx, 31, 0x1EE430u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE428u, 0x1EE430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE430u;
label_1ee430:
    // 0x1ee430: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ee430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee434: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1ee434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ee438: 0xc0ba898  jal         func_2EA260
    ctx->pc = 0x1EE438u;
    SET_GPR_U32(ctx, 31, 0x1EE440u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x1EE438u, 0x1EE440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE440u;
label_1ee440:
    // 0x1ee440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee444: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x1EE444u;
    SET_GPR_U32(ctx, 31, 0x1EE44Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x1EE444u, 0x1EE44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE44Cu;
label_1ee44c:
    // 0x1ee44c: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee450: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ee450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1ee454: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1ee454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1ee458: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1ee458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1ee45c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EE45Cu;
    {
        const bool branch_taken_0x1ee45c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1ee45c) {
            ctx->pc = 0x1EE478u;
            goto label_1ee478;
        }
    }
    ctx->pc = 0x1EE464u;
    // 0x1ee464: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ee464u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee468: 0x0  nop
    ctx->pc = 0x1ee468u;
    // NOP
    // 0x1ee46c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee46cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee470: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EE470u;
    {
        const bool branch_taken_0x1ee470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee470) {
            ctx->pc = 0x1EE494u;
            goto label_1ee494;
        }
    }
    ctx->pc = 0x1EE478u;
label_1ee478:
    // 0x1ee478: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x1ee478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x1ee47c: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x1ee47cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1ee480: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ee480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ee484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ee484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee488: 0x0  nop
    ctx->pc = 0x1ee488u;
    // NOP
    // 0x1ee48c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1ee48cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ee490: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ee490u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ee494:
    // 0x1ee494: 0x3c054420  lui         $a1, 0x4420
    ctx->pc = 0x1ee494u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17440 << 16));
    // 0x1ee498: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ee498u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee49c: 0x0  nop
    ctx->pc = 0x1ee49cu;
    // NOP
    // 0x1ee4a0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1ee4a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1ee4a4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee4a8: 0xc440004c  lwc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ee4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee4ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ee4acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1ee4b0: 0xe440004c  swc1        $f0, 0x4C($v0)
    ctx->pc = 0x1ee4b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x1ee4b4: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee4b8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x1ee4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1ee4bc: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x1ee4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1ee4c0: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1ee4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
    // 0x1ee4c4: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x1EE4C4u;
    {
        const bool branch_taken_0x1ee4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4c4) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE4CCu;
label_1ee4cc:
    // 0x1ee4cc: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1ee4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ee4d0: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x1ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
    // 0x1ee4d4: 0x24638120  addiu       $v1, $v1, -0x7EE0
    ctx->pc = 0x1ee4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934816));
    // 0x1ee4d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ee4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ee4dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ee4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ee4e0: 0x27859844  addiu       $a1, $gp, -0x67BC
    ctx->pc = 0x1ee4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940740));
    // 0x1ee4e4: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1EE4E4u;
    SET_GPR_U32(ctx, 31, 0x1EE4ECu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1EE4E4u, 0x1EE4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE4ECu;
label_1ee4ec:
    // 0x1ee4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee4f0: 0x1480003f  bnez        $a0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EE4F0u;
    {
        const bool branch_taken_0x1ee4f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee4f0) {
            ctx->pc = 0x1EE5F0u;
            goto label_1ee5f0;
        }
    }
    ctx->pc = 0x1EE4F8u;
    // 0x1ee4f8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1ee4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ee4fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee500: 0xc041b48  jal         func_106D20
    ctx->pc = 0x1EE500u;
    SET_GPR_U32(ctx, 31, 0x1EE508u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x1EE500u, 0x1EE508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE508u;
label_1ee508:
    // 0x1ee508: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1ee508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ee50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ee510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee514: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x1ee514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1ee518: 0xc061d44  jal         func_187510
    ctx->pc = 0x1EE518u;
    SET_GPR_U32(ctx, 31, 0x1EE520u);
    ctx->pc = 0x187510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187510u, 0x1EE518u, 0x1EE520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE520u;
label_1ee520:
    // 0x1ee520: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee524: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee528: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x1ee528u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ee52c: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x1ee52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x1ee530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ee530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee534: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1EE534u;
    {
        const bool branch_taken_0x1ee534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ee534) {
            ctx->pc = 0x1EE560u;
            goto label_1ee560;
        }
    }
    ctx->pc = 0x1EE53Cu;
    // 0x1ee53c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ee53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ee540: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x1EE540u;
    SET_GPR_U32(ctx, 31, 0x1EE548u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x1EE540u, 0x1EE548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE548u;
label_1ee548:
    // 0x1ee548: 0x8f84bb60  lw          $a0, -0x44A0($gp)
    ctx->pc = 0x1ee548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee54c: 0x24850060  addiu       $a1, $a0, 0x60
    ctx->pc = 0x1ee54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ee550: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ee550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee558: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x1EE558u;
    SET_GPR_U32(ctx, 31, 0x1EE560u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x1EE558u, 0x1EE560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE560u;
label_1ee560:
    // 0x1ee560: 0x8f82bb60  lw          $v0, -0x44A0($gp)
    ctx->pc = 0x1ee560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee564: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x1ee564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1ee568: 0x278598b8  addiu       $a1, $gp, -0x6748
    ctx->pc = 0x1ee568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940856));
    // 0x1ee56c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1EE56Cu;
    SET_GPR_U32(ctx, 31, 0x1EE574u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1EE56Cu, 0x1EE574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE574u;
label_1ee574:
    // 0x1ee574: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ee574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee578: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EE578u;
    {
        const bool branch_taken_0x1ee578 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee578) {
            ctx->pc = 0x1EE5DCu;
            goto label_1ee5dc;
        }
    }
    ctx->pc = 0x1EE580u;
    // 0x1ee580: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ee580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee584: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x1ee584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x1ee588: 0x278598bc  addiu       $a1, $gp, -0x6744
    ctx->pc = 0x1ee588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940860));
    // 0x1ee58c: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1EE58Cu;
    SET_GPR_U32(ctx, 31, 0x1EE594u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1EE58Cu, 0x1EE594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE594u;
label_1ee594:
    // 0x1ee594: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE594u;
    {
        const bool branch_taken_0x1ee594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee594) {
            ctx->pc = 0x1EE5ACu;
            goto label_1ee5ac;
        }
    }
    ctx->pc = 0x1EE59Cu;
    // 0x1ee59c: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1ee59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1ee5a0: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x1ee5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ee5a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EE5A4u;
    {
        const bool branch_taken_0x1ee5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5a4) {
            ctx->pc = 0x1EE5DCu;
            goto label_1ee5dc;
        }
    }
    ctx->pc = 0x1EE5ACu;
label_1ee5ac:
    // 0x1ee5ac: 0x8f85bb60  lw          $a1, -0x44A0($gp)
    ctx->pc = 0x1ee5acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ee5b0: 0x24a20060  addiu       $v0, $a1, 0x60
    ctx->pc = 0x1ee5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1ee5b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5b8: 0x278298c0  addiu       $v0, $gp, -0x6740
    ctx->pc = 0x1ee5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940864));
    // 0x1ee5bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ee5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5c0: 0xc0bc824  jal         func_2F2090
    ctx->pc = 0x1EE5C0u;
    SET_GPR_U32(ctx, 31, 0x1EE5C8u);
    ctx->pc = 0x2F2090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2090u, 0x1EE5C0u, 0x1EE5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5C8u;
label_1ee5c8:
    // 0x1ee5c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee5c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EE5CCu;
    {
        const bool branch_taken_0x1ee5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5cc) {
            ctx->pc = 0x1EE5DCu;
            goto label_1ee5dc;
        }
    }
    ctx->pc = 0x1EE5D4u;
    // 0x1ee5d4: 0x24040031  addiu       $a0, $zero, 0x31
    ctx->pc = 0x1ee5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x1ee5d8: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x1ee5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
label_1ee5dc:
    // 0x1ee5dc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x1ee5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ee5e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ee5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee5e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ee5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee5e8: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x1EE5E8u;
    SET_GPR_U32(ctx, 31, 0x1EE5F0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x1EE5E8u, 0x1EE5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE5F0u;
label_1ee5f0:
    // 0x1ee5f0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1ee5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ee5f4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1ee5f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ee5f8:
    // 0x1ee5f8: 0x2e020019  sltiu       $v0, $s0, 0x19
    ctx->pc = 0x1ee5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
    // 0x1ee5fc: 0x1440fbef  bnez        $v0, . + 4 + (-0x411 << 2)
    ctx->pc = 0x1EE5FCu;
    {
        const bool branch_taken_0x1ee5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ee5fc) {
            ctx->pc = 0x1ED5BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed5bc;
        }
    }
    ctx->pc = 0x1EE604u;
    // 0x1ee604: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ee604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee608: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ee608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee60c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ee60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ee614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ee618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee61c: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1ee61cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee620: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE628u;
    // 0x1ee628: 0x0  nop
    ctx->pc = 0x1ee628u;
    // NOP
    // 0x1ee62c: 0x0  nop
    ctx->pc = 0x1ee62cu;
    // NOP
    ctx->pc = 0x1ee630u;
}
