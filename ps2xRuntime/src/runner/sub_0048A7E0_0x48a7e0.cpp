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

// Function: sub_0048A7E0
// Address: 0x48a7e0 - 0x48a8e0
void sub_0048A7E0_0x48a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048A7E0_0x48a7e0");
#endif

    switch (ctx->pc) {
        case 0x48a7e0u: goto label_48a7e0;
        case 0x48a7e4u: goto label_48a7e4;
        case 0x48a7e8u: goto label_48a7e8;
        case 0x48a7ecu: goto label_48a7ec;
        case 0x48a7f0u: goto label_48a7f0;
        case 0x48a7f4u: goto label_48a7f4;
        case 0x48a7f8u: goto label_48a7f8;
        case 0x48a7fcu: goto label_48a7fc;
        case 0x48a800u: goto label_48a800;
        case 0x48a804u: goto label_48a804;
        case 0x48a808u: goto label_48a808;
        case 0x48a80cu: goto label_48a80c;
        case 0x48a810u: goto label_48a810;
        case 0x48a814u: goto label_48a814;
        case 0x48a818u: goto label_48a818;
        case 0x48a81cu: goto label_48a81c;
        case 0x48a820u: goto label_48a820;
        case 0x48a824u: goto label_48a824;
        case 0x48a828u: goto label_48a828;
        case 0x48a82cu: goto label_48a82c;
        case 0x48a830u: goto label_48a830;
        case 0x48a834u: goto label_48a834;
        case 0x48a838u: goto label_48a838;
        case 0x48a83cu: goto label_48a83c;
        case 0x48a840u: goto label_48a840;
        case 0x48a844u: goto label_48a844;
        case 0x48a848u: goto label_48a848;
        case 0x48a84cu: goto label_48a84c;
        case 0x48a850u: goto label_48a850;
        case 0x48a854u: goto label_48a854;
        case 0x48a858u: goto label_48a858;
        case 0x48a85cu: goto label_48a85c;
        case 0x48a860u: goto label_48a860;
        case 0x48a864u: goto label_48a864;
        case 0x48a868u: goto label_48a868;
        case 0x48a86cu: goto label_48a86c;
        case 0x48a870u: goto label_48a870;
        case 0x48a874u: goto label_48a874;
        case 0x48a878u: goto label_48a878;
        case 0x48a87cu: goto label_48a87c;
        case 0x48a880u: goto label_48a880;
        case 0x48a884u: goto label_48a884;
        case 0x48a888u: goto label_48a888;
        case 0x48a88cu: goto label_48a88c;
        case 0x48a890u: goto label_48a890;
        case 0x48a894u: goto label_48a894;
        case 0x48a898u: goto label_48a898;
        case 0x48a89cu: goto label_48a89c;
        case 0x48a8a0u: goto label_48a8a0;
        case 0x48a8a4u: goto label_48a8a4;
        case 0x48a8a8u: goto label_48a8a8;
        case 0x48a8acu: goto label_48a8ac;
        case 0x48a8b0u: goto label_48a8b0;
        case 0x48a8b4u: goto label_48a8b4;
        case 0x48a8b8u: goto label_48a8b8;
        case 0x48a8bcu: goto label_48a8bc;
        case 0x48a8c0u: goto label_48a8c0;
        case 0x48a8c4u: goto label_48a8c4;
        case 0x48a8c8u: goto label_48a8c8;
        case 0x48a8ccu: goto label_48a8cc;
        case 0x48a8d0u: goto label_48a8d0;
        case 0x48a8d4u: goto label_48a8d4;
        case 0x48a8d8u: goto label_48a8d8;
        case 0x48a8dcu: goto label_48a8dc;
        default: break;
    }

    ctx->pc = 0x48a7e0u;

label_48a7e0:
    // 0x48a7e0: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x48a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_48a7e4:
    // 0x48a7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_48a7e8:
    // 0x48a7e8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x48a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_48a7ec:
    // 0x48a7ec: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x48a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
label_48a7f0:
    // 0x48a7f0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x48a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48a7f4:
    // 0x48a7f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48a7f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48a7f8:
    // 0x48a7f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x48a7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_48a7fc:
    // 0x48a7fc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_48a800:
    if (ctx->pc == 0x48A800u) {
        ctx->pc = 0x48A804u;
        goto label_48a804;
    }
    ctx->pc = 0x48A7FCu;
    {
        const bool branch_taken_0x48a7fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48a7fc) {
            ctx->pc = 0x48A8A8u;
            goto label_48a8a8;
        }
    }
    ctx->pc = 0x48A804u;
label_48a804:
    // 0x48a804: 0x8f82b620  lw          $v0, -0x49E0($gp)
    ctx->pc = 0x48a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948384)));
label_48a808:
    // 0x48a808: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_48a80c:
    if (ctx->pc == 0x48A80Cu) {
        ctx->pc = 0x48A810u;
        goto label_48a810;
    }
    ctx->pc = 0x48A808u;
    {
        const bool branch_taken_0x48a808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a808) {
            ctx->pc = 0x48A8A8u;
            goto label_48a8a8;
        }
    }
    ctx->pc = 0x48A810u;
label_48a810:
    // 0x48a810: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x48a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_48a814:
    // 0x48a814: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a818:
    // 0x48a818: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x48a818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_48a81c:
    // 0x48a81c: 0xc115ee8  jal         func_457BA0
label_48a820:
    if (ctx->pc == 0x48A820u) {
        ctx->pc = 0x48A824u;
        goto label_48a824;
    }
    ctx->pc = 0x48A81Cu;
    SET_GPR_U32(ctx, 31, 0x48A824u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x48A81Cu, 0x48A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A824u;
label_48a824:
    // 0x48a824: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_48a828:
    if (ctx->pc == 0x48A828u) {
        ctx->pc = 0x48A82Cu;
        goto label_48a82c;
    }
    ctx->pc = 0x48A824u;
    {
        const bool branch_taken_0x48a824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a824) {
            ctx->pc = 0x48A8A8u;
            goto label_48a8a8;
        }
    }
    ctx->pc = 0x48A82Cu;
label_48a82c:
    // 0x48a82c: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48a830:
    // 0x48a830: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_48a834:
    if (ctx->pc == 0x48A834u) {
        ctx->pc = 0x48A838u;
        goto label_48a838;
    }
    ctx->pc = 0x48A830u;
    {
        const bool branch_taken_0x48a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a830) {
            ctx->pc = 0x48A8A8u;
            goto label_48a8a8;
        }
    }
    ctx->pc = 0x48A838u;
label_48a838:
    // 0x48a838: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a83c:
    // 0x48a83c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x48a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_48a840:
    // 0x48a840: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x48a840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_48a844:
    // 0x48a844: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x48a844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_48a848:
    // 0x48a848: 0x24e74628  addiu       $a3, $a3, 0x4628
    ctx->pc = 0x48a848u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 17960));
label_48a84c:
    // 0x48a84c: 0x24080115  addiu       $t0, $zero, 0x115
    ctx->pc = 0x48a84cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
label_48a850:
    // 0x48a850: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x48a850u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_48a854:
    // 0x48a854: 0x252946c0  addiu       $t1, $t1, 0x46C0
    ctx->pc = 0x48a854u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 18112));
label_48a858:
    // 0x48a858: 0xc113940  jal         func_44E500
label_48a85c:
    if (ctx->pc == 0x48A85Cu) {
        ctx->pc = 0x48A860u;
        goto label_48a860;
    }
    ctx->pc = 0x48A858u;
    SET_GPR_U32(ctx, 31, 0x48A860u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x48A858u, 0x48A860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A860u;
label_48a860:
    // 0x48a860: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a864:
    // 0x48a864: 0x2785b618  addiu       $a1, $gp, -0x49E8
    ctx->pc = 0x48a864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948376));
label_48a868:
    // 0x48a868: 0xc115c24  jal         func_457090
label_48a86c:
    if (ctx->pc == 0x48A86Cu) {
        ctx->pc = 0x48A870u;
        goto label_48a870;
    }
    ctx->pc = 0x48A868u;
    SET_GPR_U32(ctx, 31, 0x48A870u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x48A868u, 0x48A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A870u;
label_48a870:
    // 0x48a870: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a874:
    // 0x48a874: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x48a874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_48a878:
    // 0x48a878: 0x40f809  jalr        $v0
label_48a87c:
    if (ctx->pc == 0x48A87Cu) {
        ctx->pc = 0x48A880u;
        goto label_48a880;
    }
    ctx->pc = 0x48A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x48A880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A878u, 0x48A880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x48A880u;
label_48a880:
    // 0x48a880: 0xaf82b620  sw          $v0, -0x49E0($gp)
    ctx->pc = 0x48a880u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948384), GPR_U32(ctx, 2));
label_48a884:
    // 0x48a884: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_48a888:
    // 0x48a888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_48a88c:
    if (ctx->pc == 0x48A88Cu) {
        ctx->pc = 0x48A890u;
        goto label_48a890;
    }
    ctx->pc = 0x48A888u;
    {
        const bool branch_taken_0x48a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48a888) {
            ctx->pc = 0x48A898u;
            goto label_48a898;
        }
    }
    ctx->pc = 0x48A890u;
label_48a890:
    // 0x48a890: 0xd  break       0
    ctx->pc = 0x48a890u;
    runtime->handleBreak(rdram, ctx);
label_48a894:
    // 0x48a894: 0x0  nop
    ctx->pc = 0x48a894u;
    // NOP
label_48a898:
    // 0x48a898: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x48a898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_48a89c:
    // 0x48a89c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x48a89cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48a8a0:
    // 0x48a8a0: 0xc11392c  jal         func_44E4B0
label_48a8a4:
    if (ctx->pc == 0x48A8A4u) {
        ctx->pc = 0x48A8A8u;
        goto label_48a8a8;
    }
    ctx->pc = 0x48A8A0u;
    SET_GPR_U32(ctx, 31, 0x48A8A8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x48A8A0u, 0x48A8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A8A8u;
label_48a8a8:
    // 0x48a8a8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x48a8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a8ac:
    // 0x48a8ac: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x48a8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_48a8b0:
    // 0x48a8b0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x48a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_48a8b4:
    // 0x48a8b4: 0xc115020  jal         func_454080
label_48a8b8:
    if (ctx->pc == 0x48A8B8u) {
        ctx->pc = 0x48A8BCu;
        goto label_48a8bc;
    }
    ctx->pc = 0x48A8B4u;
    SET_GPR_U32(ctx, 31, 0x48A8BCu);
    ctx->pc = 0x454080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454080u, 0x48A8B4u, 0x48A8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48A8BCu;
label_48a8bc:
    // 0x48a8bc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48a8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a8c0:
    // 0x48a8c0: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x48a8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_48a8c4:
    // 0x48a8c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x48a8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48a8c8:
    // 0x48a8c8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x48a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_48a8cc:
    // 0x48a8cc: 0xac64008c  sw          $a0, 0x8C($v1)
    ctx->pc = 0x48a8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 4));
label_48a8d0:
    // 0x48a8d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48a8d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_48a8d4:
    // 0x48a8d4: 0x27bd0160  addiu       $sp, $sp, 0x160
    ctx->pc = 0x48a8d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_48a8d8:
    // 0x48a8d8: 0x3e00008  jr          $ra
label_48a8dc:
    if (ctx->pc == 0x48A8DCu) {
        ctx->pc = 0x48A8E0u;
        goto label_fallthrough_0x48a8d8;
    }
    ctx->pc = 0x48A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x48a8d8:
    ctx->pc = 0x48A8E0u;
}
