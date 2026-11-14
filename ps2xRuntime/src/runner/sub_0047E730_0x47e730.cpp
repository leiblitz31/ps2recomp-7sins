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

// Function: sub_0047E730
// Address: 0x47e730 - 0x47e840
void sub_0047E730_0x47e730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047E730_0x47e730");
#endif

    switch (ctx->pc) {
        case 0x47e730u: goto label_47e730;
        case 0x47e734u: goto label_47e734;
        case 0x47e738u: goto label_47e738;
        case 0x47e73cu: goto label_47e73c;
        case 0x47e740u: goto label_47e740;
        case 0x47e744u: goto label_47e744;
        case 0x47e748u: goto label_47e748;
        case 0x47e74cu: goto label_47e74c;
        case 0x47e750u: goto label_47e750;
        case 0x47e754u: goto label_47e754;
        case 0x47e758u: goto label_47e758;
        case 0x47e75cu: goto label_47e75c;
        case 0x47e760u: goto label_47e760;
        case 0x47e764u: goto label_47e764;
        case 0x47e768u: goto label_47e768;
        case 0x47e76cu: goto label_47e76c;
        case 0x47e770u: goto label_47e770;
        case 0x47e774u: goto label_47e774;
        case 0x47e778u: goto label_47e778;
        case 0x47e77cu: goto label_47e77c;
        case 0x47e780u: goto label_47e780;
        case 0x47e784u: goto label_47e784;
        case 0x47e788u: goto label_47e788;
        case 0x47e78cu: goto label_47e78c;
        case 0x47e790u: goto label_47e790;
        case 0x47e794u: goto label_47e794;
        case 0x47e798u: goto label_47e798;
        case 0x47e79cu: goto label_47e79c;
        case 0x47e7a0u: goto label_47e7a0;
        case 0x47e7a4u: goto label_47e7a4;
        case 0x47e7a8u: goto label_47e7a8;
        case 0x47e7acu: goto label_47e7ac;
        case 0x47e7b0u: goto label_47e7b0;
        case 0x47e7b4u: goto label_47e7b4;
        case 0x47e7b8u: goto label_47e7b8;
        case 0x47e7bcu: goto label_47e7bc;
        case 0x47e7c0u: goto label_47e7c0;
        case 0x47e7c4u: goto label_47e7c4;
        case 0x47e7c8u: goto label_47e7c8;
        case 0x47e7ccu: goto label_47e7cc;
        case 0x47e7d0u: goto label_47e7d0;
        case 0x47e7d4u: goto label_47e7d4;
        case 0x47e7d8u: goto label_47e7d8;
        case 0x47e7dcu: goto label_47e7dc;
        case 0x47e7e0u: goto label_47e7e0;
        case 0x47e7e4u: goto label_47e7e4;
        case 0x47e7e8u: goto label_47e7e8;
        case 0x47e7ecu: goto label_47e7ec;
        case 0x47e7f0u: goto label_47e7f0;
        case 0x47e7f4u: goto label_47e7f4;
        case 0x47e7f8u: goto label_47e7f8;
        case 0x47e7fcu: goto label_47e7fc;
        case 0x47e800u: goto label_47e800;
        case 0x47e804u: goto label_47e804;
        case 0x47e808u: goto label_47e808;
        case 0x47e80cu: goto label_47e80c;
        case 0x47e810u: goto label_47e810;
        case 0x47e814u: goto label_47e814;
        case 0x47e818u: goto label_47e818;
        case 0x47e81cu: goto label_47e81c;
        case 0x47e820u: goto label_47e820;
        case 0x47e824u: goto label_47e824;
        case 0x47e828u: goto label_47e828;
        case 0x47e82cu: goto label_47e82c;
        case 0x47e830u: goto label_47e830;
        case 0x47e834u: goto label_47e834;
        case 0x47e838u: goto label_47e838;
        case 0x47e83cu: goto label_47e83c;
        default: break;
    }

    ctx->pc = 0x47e730u;

label_47e730:
    // 0x47e730: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x47e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_47e734:
    // 0x47e734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_47e738:
    // 0x47e738: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x47e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_47e73c:
    // 0x47e73c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e740:
    // 0x47e740: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x47e740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_47e744:
    // 0x47e744: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x47e744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_47e748:
    // 0x47e748: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_47e74c:
    if (ctx->pc == 0x47E74Cu) {
        ctx->pc = 0x47E750u;
        goto label_47e750;
    }
    ctx->pc = 0x47E748u;
    {
        const bool branch_taken_0x47e748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47e748) {
            ctx->pc = 0x47E7F4u;
            goto label_47e7f4;
        }
    }
    ctx->pc = 0x47E750u;
label_47e750:
    // 0x47e750: 0x8f82b50c  lw          $v0, -0x4AF4($gp)
    ctx->pc = 0x47e750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948108)));
label_47e754:
    // 0x47e754: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_47e758:
    if (ctx->pc == 0x47E758u) {
        ctx->pc = 0x47E75Cu;
        goto label_47e75c;
    }
    ctx->pc = 0x47E754u;
    {
        const bool branch_taken_0x47e754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e754) {
            ctx->pc = 0x47E7F4u;
            goto label_47e7f4;
        }
    }
    ctx->pc = 0x47E75Cu;
label_47e75c:
    // 0x47e75c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_47e760:
    // 0x47e760: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e764:
    // 0x47e764: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x47e764u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_47e768:
    // 0x47e768: 0xc115ee8  jal         func_457BA0
label_47e76c:
    if (ctx->pc == 0x47E76Cu) {
        ctx->pc = 0x47E770u;
        goto label_47e770;
    }
    ctx->pc = 0x47E768u;
    SET_GPR_U32(ctx, 31, 0x47E770u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47E768u, 0x47E770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E770u;
label_47e770:
    // 0x47e770: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_47e774:
    if (ctx->pc == 0x47E774u) {
        ctx->pc = 0x47E778u;
        goto label_47e778;
    }
    ctx->pc = 0x47E770u;
    {
        const bool branch_taken_0x47e770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e770) {
            ctx->pc = 0x47E7F4u;
            goto label_47e7f4;
        }
    }
    ctx->pc = 0x47E778u;
label_47e778:
    // 0x47e778: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x47e778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_47e77c:
    // 0x47e77c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_47e780:
    if (ctx->pc == 0x47E780u) {
        ctx->pc = 0x47E784u;
        goto label_47e784;
    }
    ctx->pc = 0x47E77Cu;
    {
        const bool branch_taken_0x47e77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e77c) {
            ctx->pc = 0x47E7F4u;
            goto label_47e7f4;
        }
    }
    ctx->pc = 0x47E784u;
label_47e784:
    // 0x47e784: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47e784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47e788:
    // 0x47e788: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47e788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_47e78c:
    // 0x47e78c: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x47e78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_47e790:
    // 0x47e790: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x47e790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_47e794:
    // 0x47e794: 0x24e716f8  addiu       $a3, $a3, 0x16F8
    ctx->pc = 0x47e794u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5880));
label_47e798:
    // 0x47e798: 0x24080657  addiu       $t0, $zero, 0x657
    ctx->pc = 0x47e798u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1623));
label_47e79c:
    // 0x47e79c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x47e79cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_47e7a0:
    // 0x47e7a0: 0x25291800  addiu       $t1, $t1, 0x1800
    ctx->pc = 0x47e7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6144));
label_47e7a4:
    // 0x47e7a4: 0xc113940  jal         func_44E500
label_47e7a8:
    if (ctx->pc == 0x47E7A8u) {
        ctx->pc = 0x47E7ACu;
        goto label_47e7ac;
    }
    ctx->pc = 0x47E7A4u;
    SET_GPR_U32(ctx, 31, 0x47E7ACu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x47E7A4u, 0x47E7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7ACu;
label_47e7ac:
    // 0x47e7ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47e7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47e7b0:
    // 0x47e7b0: 0x2785b4e8  addiu       $a1, $gp, -0x4B18
    ctx->pc = 0x47e7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948072));
label_47e7b4:
    // 0x47e7b4: 0xc115c24  jal         func_457090
label_47e7b8:
    if (ctx->pc == 0x47E7B8u) {
        ctx->pc = 0x47E7BCu;
        goto label_47e7bc;
    }
    ctx->pc = 0x47E7B4u;
    SET_GPR_U32(ctx, 31, 0x47E7BCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x47E7B4u, 0x47E7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7BCu;
label_47e7bc:
    // 0x47e7bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47e7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47e7c0:
    // 0x47e7c0: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x47e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_47e7c4:
    // 0x47e7c4: 0x40f809  jalr        $v0
label_47e7c8:
    if (ctx->pc == 0x47E7C8u) {
        ctx->pc = 0x47E7CCu;
        goto label_47e7cc;
    }
    ctx->pc = 0x47E7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47E7CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E7C4u, 0x47E7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47E7CCu;
label_47e7cc:
    // 0x47e7cc: 0xaf82b50c  sw          $v0, -0x4AF4($gp)
    ctx->pc = 0x47e7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948108), GPR_U32(ctx, 2));
label_47e7d0:
    // 0x47e7d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_47e7d4:
    // 0x47e7d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47e7d8:
    if (ctx->pc == 0x47E7D8u) {
        ctx->pc = 0x47E7DCu;
        goto label_47e7dc;
    }
    ctx->pc = 0x47E7D4u;
    {
        const bool branch_taken_0x47e7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47e7d4) {
            ctx->pc = 0x47E7E4u;
            goto label_47e7e4;
        }
    }
    ctx->pc = 0x47E7DCu;
label_47e7dc:
    // 0x47e7dc: 0xd  break       0
    ctx->pc = 0x47e7dcu;
    runtime->handleBreak(rdram, ctx);
label_47e7e0:
    // 0x47e7e0: 0x0  nop
    ctx->pc = 0x47e7e0u;
    // NOP
label_47e7e4:
    // 0x47e7e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x47e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47e7e8:
    // 0x47e7e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47e7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47e7ec:
    // 0x47e7ec: 0xc11392c  jal         func_44E4B0
label_47e7f0:
    if (ctx->pc == 0x47E7F0u) {
        ctx->pc = 0x47E7F4u;
        goto label_47e7f4;
    }
    ctx->pc = 0x47E7ECu;
    SET_GPR_U32(ctx, 31, 0x47E7F4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47E7ECu, 0x47E7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E7F4u;
label_47e7f4:
    // 0x47e7f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e7f8:
    // 0x47e7f8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x47e7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_47e7fc:
    // 0x47e7fc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e800:
    // 0x47e800: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x47e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_47e804:
    // 0x47e804: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e808:
    // 0x47e808: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x47e808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_47e80c:
    // 0x47e80c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e810:
    // 0x47e810: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x47e810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_47e814:
    // 0x47e814: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x47e814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47e818:
    // 0x47e818: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x47e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_47e81c:
    // 0x47e81c: 0x2785b6bc  addiu       $a1, $gp, -0x4944
    ctx->pc = 0x47e81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948540));
label_47e820:
    // 0x47e820: 0xc052608  jal         func_149820
label_47e824:
    if (ctx->pc == 0x47E824u) {
        ctx->pc = 0x47E828u;
        goto label_47e828;
    }
    ctx->pc = 0x47E820u;
    SET_GPR_U32(ctx, 31, 0x47E828u);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47E820u, 0x47E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47E828u;
label_47e828:
    // 0x47e828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47e828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47e82c:
    // 0x47e82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47e82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_47e830:
    // 0x47e830: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x47e830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_47e834:
    // 0x47e834: 0x3e00008  jr          $ra
label_47e838:
    if (ctx->pc == 0x47E838u) {
        ctx->pc = 0x47E83Cu;
        goto label_47e83c;
    }
    ctx->pc = 0x47E834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47E834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47E83Cu;
label_47e83c:
    // 0x47e83c: 0x0  nop
    ctx->pc = 0x47e83cu;
    // NOP
    ctx->pc = 0x47e840u;
}
