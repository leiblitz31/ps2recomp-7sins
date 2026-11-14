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

// Function: sub_0048A6E0
// Address: 0x48a6e0 - 0x48a7e0
void sub_0048A6E0_0x48a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A6E0_0x48a6e0");
#endif

    switch (ctx->pc) {
        case 0x48a6e0u: goto label_48a6e0;
        case 0x48a6e4u: goto label_48a6e4;
        case 0x48a6e8u: goto label_48a6e8;
        case 0x48a6ecu: goto label_48a6ec;
        case 0x48a6f0u: goto label_48a6f0;
        case 0x48a6f4u: goto label_48a6f4;
        case 0x48a6f8u: goto label_48a6f8;
        case 0x48a6fcu: goto label_48a6fc;
        case 0x48a700u: goto label_48a700;
        case 0x48a704u: goto label_48a704;
        case 0x48a708u: goto label_48a708;
        case 0x48a70cu: goto label_48a70c;
        case 0x48a710u: goto label_48a710;
        case 0x48a714u: goto label_48a714;
        case 0x48a718u: goto label_48a718;
        case 0x48a71cu: goto label_48a71c;
        case 0x48a720u: goto label_48a720;
        case 0x48a724u: goto label_48a724;
        case 0x48a728u: goto label_48a728;
        case 0x48a72cu: goto label_48a72c;
        case 0x48a730u: goto label_48a730;
        case 0x48a734u: goto label_48a734;
        case 0x48a738u: goto label_48a738;
        case 0x48a73cu: goto label_48a73c;
        case 0x48a740u: goto label_48a740;
        case 0x48a744u: goto label_48a744;
        case 0x48a748u: goto label_48a748;
        case 0x48a74cu: goto label_48a74c;
        case 0x48a750u: goto label_48a750;
        case 0x48a754u: goto label_48a754;
        case 0x48a758u: goto label_48a758;
        case 0x48a75cu: goto label_48a75c;
        case 0x48a760u: goto label_48a760;
        case 0x48a764u: goto label_48a764;
        case 0x48a768u: goto label_48a768;
        case 0x48a76cu: goto label_48a76c;
        case 0x48a770u: goto label_48a770;
        case 0x48a774u: goto label_48a774;
        case 0x48a778u: goto label_48a778;
        case 0x48a77cu: goto label_48a77c;
        case 0x48a780u: goto label_48a780;
        case 0x48a784u: goto label_48a784;
        case 0x48a788u: goto label_48a788;
        case 0x48a78cu: goto label_48a78c;
        case 0x48a790u: goto label_48a790;
        case 0x48a794u: goto label_48a794;
        case 0x48a798u: goto label_48a798;
        case 0x48a79cu: goto label_48a79c;
        case 0x48a7a0u: goto label_48a7a0;
        case 0x48a7a4u: goto label_48a7a4;
        case 0x48a7a8u: goto label_48a7a8;
        case 0x48a7acu: goto label_48a7ac;
        case 0x48a7b0u: goto label_48a7b0;
        case 0x48a7b4u: goto label_48a7b4;
        case 0x48a7b8u: goto label_48a7b8;
        case 0x48a7bcu: goto label_48a7bc;
        case 0x48a7c0u: goto label_48a7c0;
        case 0x48a7c4u: goto label_48a7c4;
        case 0x48a7c8u: goto label_48a7c8;
        case 0x48a7ccu: goto label_48a7cc;
        case 0x48a7d0u: goto label_48a7d0;
        case 0x48a7d4u: goto label_48a7d4;
        case 0x48a7d8u: goto label_48a7d8;
        case 0x48a7dcu: goto label_48a7dc;
        default: break;
    }

    ctx->pc = 0x48a6e0u;

label_48a6e0:
    // 0x48a6e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48a6e4:
    // 0x48a6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48a6e8:
    // 0x48a6e8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48a6ec:
    // 0x48a6ec: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48a6f0:
    // 0x48a6f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48a6f4:
    // 0x48a6f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48a6f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48a6f8:
    // 0x48a6f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48a6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48a6fc:
    // 0x48a6fc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_48a700:
    if (ctx->pc == 0x48A700u) {
        ctx->pc = 0x48A704u;
        goto label_48a704;
    }
    ctx->pc = 0x48A6FCu;
    {
        const bool branch_taken_0x48a6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a6fc) {
            ctx->pc = 0x48A7A8u;
            goto label_48a7a8;
        }
    }
    ctx->pc = 0x48A704u;
label_48a704:
    // 0x48a704: 0x8f82b61c  lw          $v0, -0x49E4($gp)
    ctx->pc = 0x48a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948380)));
label_48a708:
    // 0x48a708: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_48a70c:
    if (ctx->pc == 0x48A70Cu) {
        ctx->pc = 0x48A710u;
        goto label_48a710;
    }
    ctx->pc = 0x48A708u;
    {
        const bool branch_taken_0x48a708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a708) {
            ctx->pc = 0x48A7A8u;
            goto label_48a7a8;
        }
    }
    ctx->pc = 0x48A710u;
label_48a710:
    // 0x48a710: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48a714:
    // 0x48a714: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a718:
    // 0x48a718: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48a718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48a71c:
    // 0x48a71c: 0xc115ee8  jal         func_457BA0
label_48a720:
    if (ctx->pc == 0x48A720u) {
        ctx->pc = 0x48A724u;
        goto label_48a724;
    }
    ctx->pc = 0x48A71Cu;
    SET_GPR_U32(ctx, 31, 0x48A724u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48A71Cu, 0x48A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A724u;
label_48a724:
    // 0x48a724: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48a728:
    if (ctx->pc == 0x48A728u) {
        ctx->pc = 0x48A72Cu;
        goto label_48a72c;
    }
    ctx->pc = 0x48A724u;
    {
        const bool branch_taken_0x48a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a724) {
            ctx->pc = 0x48A7A8u;
            goto label_48a7a8;
        }
    }
    ctx->pc = 0x48A72Cu;
label_48a72c:
    // 0x48a72c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48a730:
    // 0x48a730: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_48a734:
    if (ctx->pc == 0x48A734u) {
        ctx->pc = 0x48A738u;
        goto label_48a738;
    }
    ctx->pc = 0x48A730u;
    {
        const bool branch_taken_0x48a730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a730) {
            ctx->pc = 0x48A7A8u;
            goto label_48a7a8;
        }
    }
    ctx->pc = 0x48A738u;
label_48a738:
    // 0x48a738: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a73c:
    // 0x48a73c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a740:
    // 0x48a740: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48a740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48a744:
    // 0x48a744: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48a744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48a748:
    // 0x48a748: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48a748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48a74c:
    // 0x48a74c: 0x24080107  addiu       $t0, $zero, 0x107
    ctx->pc = 0x48a74cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
label_48a750:
    // 0x48a750: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48a750u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48a754:
    // 0x48a754: 0x252946a0  addiu       $t1, $t1, 0x46A0
    ctx->pc = 0x48a754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18080));
label_48a758:
    // 0x48a758: 0xc113940  jal         func_44E500
label_48a75c:
    if (ctx->pc == 0x48A75Cu) {
        ctx->pc = 0x48A760u;
        goto label_48a760;
    }
    ctx->pc = 0x48A758u;
    SET_GPR_U32(ctx, 31, 0x48A760u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48A758u, 0x48A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A760u;
label_48a760:
    // 0x48a760: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a764:
    // 0x48a764: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48a764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48a768:
    // 0x48a768: 0xc115c24  jal         func_457090
label_48a76c:
    if (ctx->pc == 0x48A76Cu) {
        ctx->pc = 0x48A770u;
        goto label_48a770;
    }
    ctx->pc = 0x48A768u;
    SET_GPR_U32(ctx, 31, 0x48A770u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48A768u, 0x48A770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A770u;
label_48a770:
    // 0x48a770: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a774:
    // 0x48a774: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48a774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48a778:
    // 0x48a778: 0x40f809  jalr        $v0
label_48a77c:
    if (ctx->pc == 0x48A77Cu) {
        ctx->pc = 0x48A780u;
        goto label_48a780;
    }
    ctx->pc = 0x48A778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48A780u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A778u, 0x48A780u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48A780u;
label_48a780:
    // 0x48a780: 0xaf82b61c  sw          $v0, -0x49E4($gp)
    ctx->pc = 0x48a780u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948380), GPR_U32(ctx, 2));
label_48a784:
    // 0x48a784: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48a784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48a788:
    // 0x48a788: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48a78c:
    if (ctx->pc == 0x48A78Cu) {
        ctx->pc = 0x48A790u;
        goto label_48a790;
    }
    ctx->pc = 0x48A788u;
    {
        const bool branch_taken_0x48a788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a788) {
            ctx->pc = 0x48A798u;
            goto label_48a798;
        }
    }
    ctx->pc = 0x48A790u;
label_48a790:
    // 0x48a790: 0xd  break       0
    ctx->pc = 0x48a790u;
    runtime->handleBreak(rdram, ctx);
label_48a794:
    // 0x48a794: 0x0  nop
    ctx->pc = 0x48a794u;
    // NOP
label_48a798:
    // 0x48a798: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a79c:
    // 0x48a79c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48a79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a7a0:
    // 0x48a7a0: 0xc11392c  jal         func_44E4B0
label_48a7a4:
    if (ctx->pc == 0x48A7A4u) {
        ctx->pc = 0x48A7A8u;
        goto label_48a7a8;
    }
    ctx->pc = 0x48A7A0u;
    SET_GPR_U32(ctx, 31, 0x48A7A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48A7A0u, 0x48A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A7A8u;
label_48a7a8:
    // 0x48a7a8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48a7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a7ac:
    // 0x48a7ac: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x48a7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_48a7b0:
    // 0x48a7b0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x48a7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48a7b4:
    // 0x48a7b4: 0xc041d58  jal         func_107560
label_48a7b8:
    if (ctx->pc == 0x48A7B8u) {
        ctx->pc = 0x48A7BCu;
        goto label_48a7bc;
    }
    ctx->pc = 0x48A7B4u;
    SET_GPR_U32(ctx, 31, 0x48A7BCu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x48A7B4u, 0x48A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A7BCu;
label_48a7bc:
    // 0x48a7bc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48a7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a7c0:
    // 0x48a7c0: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x48a7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
label_48a7c4:
    // 0x48a7c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48a7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a7c8:
    // 0x48a7c8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a7cc:
    // 0x48a7cc: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
label_48a7d0:
    // 0x48a7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48a7d4:
    // 0x48a7d4: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48a7d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48a7d8:
    // 0x48a7d8: 0x3e00008  jr          $ra
label_48a7dc:
    if (ctx->pc == 0x48A7DCu) {
        ctx->pc = 0x48A7E0u;
        goto label_fallthrough_0x48a7d8;
    }
    ctx->pc = 0x48A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48a7d8:
    ctx->pc = 0x48A7E0u;
}
