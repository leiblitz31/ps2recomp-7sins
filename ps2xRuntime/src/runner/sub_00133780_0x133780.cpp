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

// Function: sub_00133780
// Address: 0x133780 - 0x133a90
void sub_00133780_0x133780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133780_0x133780");
#endif

    switch (ctx->pc) {
        case 0x13379cu: goto label_13379c;
        case 0x1337c0u: goto label_1337c0;
        case 0x1337e8u: goto label_1337e8;
        case 0x133810u: goto label_133810;
        case 0x133834u: goto label_133834;
        case 0x13385cu: goto label_13385c;
        case 0x133884u: goto label_133884;
        case 0x1338a8u: goto label_1338a8;
        case 0x1338d0u: goto label_1338d0;
        case 0x1338f8u: goto label_1338f8;
        case 0x13391cu: goto label_13391c;
        case 0x133944u: goto label_133944;
        case 0x13396cu: goto label_13396c;
        case 0x133990u: goto label_133990;
        case 0x1339b4u: goto label_1339b4;
        case 0x1339d8u: goto label_1339d8;
        case 0x1339fcu: goto label_1339fc;
        case 0x133a20u: goto label_133a20;
        case 0x133a44u: goto label_133a44;
        case 0x133a68u: goto label_133a68;
        default: break;
    }

    ctx->pc = 0x133780u;

    // 0x133780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133788: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x133788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13378c: 0x27848be8  addiu       $a0, $gp, -0x7418
    ctx->pc = 0x13378cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937576));
    // 0x133790: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133794: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133794u;
    SET_GPR_U32(ctx, 31, 0x13379Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133794u, 0x13379Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13379Cu;
label_13379c:
    // 0x13379c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13379Cu;
    {
        const bool branch_taken_0x13379c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13379c) {
            ctx->pc = 0x1337B0u;
            goto label_1337b0;
        }
    }
    ctx->pc = 0x1337A4u;
    // 0x1337a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1337a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1337a8: 0x100000b5  b           . + 4 + (0xB5 << 2)
    ctx->pc = 0x1337A8u;
    {
        const bool branch_taken_0x1337a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337a8) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1337B0u;
label_1337b0:
    // 0x1337b0: 0x27848bf0  addiu       $a0, $gp, -0x7410
    ctx->pc = 0x1337b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937584));
    // 0x1337b4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1337b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337b8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1337B8u;
    SET_GPR_U32(ctx, 31, 0x1337C0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1337B8u, 0x1337C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337C0u;
label_1337c0:
    // 0x1337c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1337C0u;
    {
        const bool branch_taken_0x1337c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337c0) {
            ctx->pc = 0x1337D4u;
            goto label_1337d4;
        }
    }
    ctx->pc = 0x1337C8u;
    // 0x1337c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1337c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1337cc: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x1337CCu;
    {
        const bool branch_taken_0x1337cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337cc) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1337D4u;
label_1337d4:
    // 0x1337d4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1337d8: 0x24842620  addiu       $a0, $a0, 0x2620
    ctx->pc = 0x1337d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9760));
    // 0x1337dc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1337dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1337e0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1337E0u;
    SET_GPR_U32(ctx, 31, 0x1337E8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1337E0u, 0x1337E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1337E8u;
label_1337e8:
    // 0x1337e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1337E8u;
    {
        const bool branch_taken_0x1337e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1337e8) {
            ctx->pc = 0x1337FCu;
            goto label_1337fc;
        }
    }
    ctx->pc = 0x1337F0u;
    // 0x1337f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1337f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1337f4: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x1337F4u;
    {
        const bool branch_taken_0x1337f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1337f4) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1337FCu;
label_1337fc:
    // 0x1337fc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1337fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x133800: 0x24842630  addiu       $a0, $a0, 0x2630
    ctx->pc = 0x133800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9776));
    // 0x133804: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133808: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133808u;
    SET_GPR_U32(ctx, 31, 0x133810u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133808u, 0x133810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133810u;
label_133810:
    // 0x133810: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133810u;
    {
        const bool branch_taken_0x133810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133810) {
            ctx->pc = 0x133824u;
            goto label_133824;
        }
    }
    ctx->pc = 0x133818u;
    // 0x133818: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x133818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13381c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x13381Cu;
    {
        const bool branch_taken_0x13381c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13381c) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133824u;
label_133824:
    // 0x133824: 0x27848bf8  addiu       $a0, $gp, -0x7408
    ctx->pc = 0x133824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937592));
    // 0x133828: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13382c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x13382Cu;
    SET_GPR_U32(ctx, 31, 0x133834u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x13382Cu, 0x133834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133834u;
label_133834:
    // 0x133834: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133834u;
    {
        const bool branch_taken_0x133834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133834) {
            ctx->pc = 0x133848u;
            goto label_133848;
        }
    }
    ctx->pc = 0x13383Cu;
    // 0x13383c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133840: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x133840u;
    {
        const bool branch_taken_0x133840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133840) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133848u;
label_133848:
    // 0x133848: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x133848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x13384c: 0x24842640  addiu       $a0, $a0, 0x2640
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9792));
    // 0x133850: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133854: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133854u;
    SET_GPR_U32(ctx, 31, 0x13385Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133854u, 0x13385Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13385Cu;
label_13385c:
    // 0x13385c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13385Cu;
    {
        const bool branch_taken_0x13385c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13385c) {
            ctx->pc = 0x133870u;
            goto label_133870;
        }
    }
    ctx->pc = 0x133864u;
    // 0x133864: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x133864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x133868: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x133868u;
    {
        const bool branch_taken_0x133868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133868) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133870u;
label_133870:
    // 0x133870: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x133870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x133874: 0x24842650  addiu       $a0, $a0, 0x2650
    ctx->pc = 0x133874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9808));
    // 0x133878: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13387c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x13387Cu;
    SET_GPR_U32(ctx, 31, 0x133884u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x13387Cu, 0x133884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133884u;
label_133884:
    // 0x133884: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133884u;
    {
        const bool branch_taken_0x133884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133884) {
            ctx->pc = 0x133898u;
            goto label_133898;
        }
    }
    ctx->pc = 0x13388Cu;
    // 0x13388c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x13388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x133890: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x133890u;
    {
        const bool branch_taken_0x133890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133890) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133898u;
label_133898:
    // 0x133898: 0x27848c00  addiu       $a0, $gp, -0x7400
    ctx->pc = 0x133898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937600));
    // 0x13389c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x13389cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1338a0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1338A0u;
    SET_GPR_U32(ctx, 31, 0x1338A8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1338A0u, 0x1338A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338A8u;
label_1338a8:
    // 0x1338a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1338A8u;
    {
        const bool branch_taken_0x1338a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1338a8) {
            ctx->pc = 0x1338BCu;
            goto label_1338bc;
        }
    }
    ctx->pc = 0x1338B0u;
    // 0x1338b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1338b4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x1338B4u;
    {
        const bool branch_taken_0x1338b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338b4) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1338BCu;
label_1338bc:
    // 0x1338bc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1338bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1338c0: 0x24842660  addiu       $a0, $a0, 0x2660
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9824));
    // 0x1338c4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1338c8: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1338C8u, 0x1338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1338D0u;
    {
        const bool branch_taken_0x1338d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1338d0) {
            ctx->pc = 0x1338E4u;
            goto label_1338e4;
        }
    }
    ctx->pc = 0x1338D8u;
    // 0x1338d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1338d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1338dc: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x1338DCu;
    {
        const bool branch_taken_0x1338dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338dc) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1338E4u;
label_1338e4:
    // 0x1338e4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1338e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1338e8: 0x24842670  addiu       $a0, $a0, 0x2670
    ctx->pc = 0x1338e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9840));
    // 0x1338ec: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1338ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1338f0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1338F0u;
    SET_GPR_U32(ctx, 31, 0x1338F8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1338F0u, 0x1338F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338F8u;
label_1338f8:
    // 0x1338f8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1338F8u;
    {
        const bool branch_taken_0x1338f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1338f8) {
            ctx->pc = 0x13390Cu;
            goto label_13390c;
        }
    }
    ctx->pc = 0x133900u;
    // 0x133900: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x133900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x133904: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x133904u;
    {
        const bool branch_taken_0x133904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133904) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x13390Cu;
label_13390c:
    // 0x13390c: 0x27848c08  addiu       $a0, $gp, -0x73F8
    ctx->pc = 0x13390cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937608));
    // 0x133910: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133914: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133914u;
    SET_GPR_U32(ctx, 31, 0x13391Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133914u, 0x13391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13391Cu;
label_13391c:
    // 0x13391c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13391Cu;
    {
        const bool branch_taken_0x13391c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13391c) {
            ctx->pc = 0x133930u;
            goto label_133930;
        }
    }
    ctx->pc = 0x133924u;
    // 0x133924: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x133924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x133928: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x133928u;
    {
        const bool branch_taken_0x133928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133928) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133930u;
label_133930:
    // 0x133930: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x133934: 0x24842680  addiu       $a0, $a0, 0x2680
    ctx->pc = 0x133934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9856));
    // 0x133938: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13393c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x13393Cu;
    SET_GPR_U32(ctx, 31, 0x133944u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x13393Cu, 0x133944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133944u;
label_133944:
    // 0x133944: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133944u;
    {
        const bool branch_taken_0x133944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133944) {
            ctx->pc = 0x133958u;
            goto label_133958;
        }
    }
    ctx->pc = 0x13394Cu;
    // 0x13394c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x133950: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x133950u;
    {
        const bool branch_taken_0x133950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133950) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133958u;
label_133958:
    // 0x133958: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x133958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x13395c: 0x24842690  addiu       $a0, $a0, 0x2690
    ctx->pc = 0x13395cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9872));
    // 0x133960: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133964: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133964u;
    SET_GPR_U32(ctx, 31, 0x13396Cu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133964u, 0x13396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13396Cu;
label_13396c:
    // 0x13396c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13396Cu;
    {
        const bool branch_taken_0x13396c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13396c) {
            ctx->pc = 0x133980u;
            goto label_133980;
        }
    }
    ctx->pc = 0x133974u;
    // 0x133974: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x133974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x133978: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x133978u;
    {
        const bool branch_taken_0x133978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133978) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133980u;
label_133980:
    // 0x133980: 0x27848c10  addiu       $a0, $gp, -0x73F0
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937616));
    // 0x133984: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133988: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133988u;
    SET_GPR_U32(ctx, 31, 0x133990u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133988u, 0x133990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133990u;
label_133990:
    // 0x133990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133990u;
    {
        const bool branch_taken_0x133990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133990) {
            ctx->pc = 0x1339A4u;
            goto label_1339a4;
        }
    }
    ctx->pc = 0x133998u;
    // 0x133998: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x133998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x13399c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13399Cu;
    {
        const bool branch_taken_0x13399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13399c) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1339A4u;
label_1339a4:
    // 0x1339a4: 0x27848c18  addiu       $a0, $gp, -0x73E8
    ctx->pc = 0x1339a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937624));
    // 0x1339a8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1339a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1339ac: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1339ACu;
    SET_GPR_U32(ctx, 31, 0x1339B4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1339ACu, 0x1339B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339B4u;
label_1339b4:
    // 0x1339b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1339B4u;
    {
        const bool branch_taken_0x1339b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1339b4) {
            ctx->pc = 0x1339C8u;
            goto label_1339c8;
        }
    }
    ctx->pc = 0x1339BCu;
    // 0x1339bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1339bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1339c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1339C0u;
    {
        const bool branch_taken_0x1339c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339c0) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1339C8u;
label_1339c8:
    // 0x1339c8: 0x27848c20  addiu       $a0, $gp, -0x73E0
    ctx->pc = 0x1339c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937632));
    // 0x1339cc: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1339ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1339d0: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1339D0u;
    SET_GPR_U32(ctx, 31, 0x1339D8u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1339D0u, 0x1339D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339D8u;
label_1339d8:
    // 0x1339d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1339D8u;
    {
        const bool branch_taken_0x1339d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1339d8) {
            ctx->pc = 0x1339ECu;
            goto label_1339ec;
        }
    }
    ctx->pc = 0x1339E0u;
    // 0x1339e0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1339e4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1339E4u;
    {
        const bool branch_taken_0x1339e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339e4) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x1339ECu;
label_1339ec:
    // 0x1339ec: 0x27848c28  addiu       $a0, $gp, -0x73D8
    ctx->pc = 0x1339ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937640));
    // 0x1339f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1339f4: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x1339F4u;
    SET_GPR_U32(ctx, 31, 0x1339FCu);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x1339F4u, 0x1339FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1339FCu;
label_1339fc:
    // 0x1339fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1339FCu;
    {
        const bool branch_taken_0x1339fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1339fc) {
            ctx->pc = 0x133A10u;
            goto label_133a10;
        }
    }
    ctx->pc = 0x133A04u;
    // 0x133a04: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x133a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x133a08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x133A08u;
    {
        const bool branch_taken_0x133a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a08) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133A10u;
label_133a10:
    // 0x133a10: 0x27848c30  addiu       $a0, $gp, -0x73D0
    ctx->pc = 0x133a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937648));
    // 0x133a14: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133a18: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133A18u;
    SET_GPR_U32(ctx, 31, 0x133A20u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133A18u, 0x133A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A20u;
label_133a20:
    // 0x133a20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133A20u;
    {
        const bool branch_taken_0x133a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a20) {
            ctx->pc = 0x133A34u;
            goto label_133a34;
        }
    }
    ctx->pc = 0x133A28u;
    // 0x133a28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x133a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x133a2c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x133A2Cu;
    {
        const bool branch_taken_0x133a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a2c) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133A34u;
label_133a34:
    // 0x133a34: 0x27848c38  addiu       $a0, $gp, -0x73C8
    ctx->pc = 0x133a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937656));
    // 0x133a38: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133a3c: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133A3Cu;
    SET_GPR_U32(ctx, 31, 0x133A44u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133A3Cu, 0x133A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A44u;
label_133a44:
    // 0x133a44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133A44u;
    {
        const bool branch_taken_0x133a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a44) {
            ctx->pc = 0x133A58u;
            goto label_133a58;
        }
    }
    ctx->pc = 0x133A4Cu;
    // 0x133a4c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x133a50: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x133A50u;
    {
        const bool branch_taken_0x133a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a50) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133A58u;
label_133a58:
    // 0x133a58: 0x27848c40  addiu       $a0, $gp, -0x73C0
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937664));
    // 0x133a5c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x133a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133a60: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x133A60u;
    SET_GPR_U32(ctx, 31, 0x133A68u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x133A60u, 0x133A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133A68u;
label_133a68:
    // 0x133a68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133A68u;
    {
        const bool branch_taken_0x133a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a68) {
            ctx->pc = 0x133A7Cu;
            goto label_133a7c;
        }
    }
    ctx->pc = 0x133A70u;
    // 0x133a70: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133a74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133A74u;
    {
        const bool branch_taken_0x133a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x133a74) {
            ctx->pc = 0x133A80u;
            goto label_133a80;
        }
    }
    ctx->pc = 0x133A7Cu;
label_133a7c:
    // 0x133a7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_133a80:
    // 0x133a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133a84: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x133a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x133a88: 0x3e00008  jr          $ra
    ctx->pc = 0x133A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133A90u;
}
