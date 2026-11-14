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

// Function: sub_00246780
// Address: 0x246780 - 0x2468f0
void sub_00246780_0x246780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246780_0x246780");
#endif

    switch (ctx->pc) {
        case 0x2467a8u: goto label_2467a8;
        case 0x2467ccu: goto label_2467cc;
        case 0x2467e0u: goto label_2467e0;
        case 0x2467f4u: goto label_2467f4;
        case 0x246808u: goto label_246808;
        case 0x246824u: goto label_246824;
        case 0x246838u: goto label_246838;
        case 0x246868u: goto label_246868;
        case 0x246878u: goto label_246878;
        case 0x24688cu: goto label_24688c;
        case 0x2468a0u: goto label_2468a0;
        case 0x2468b4u: goto label_2468b4;
        case 0x2468d0u: goto label_2468d0;
        default: break;
    }

    ctx->pc = 0x246780u;

    // 0x246780: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x246780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x246784: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x246784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x246788: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x24678c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x246790: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x246794: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x246794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x246798: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x246798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x24679c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24679cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2467a0: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2467A0u;
    SET_GPR_U32(ctx, 31, 0x2467A8u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2467A0u, 0x2467A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467A8u;
label_2467a8:
    // 0x2467a8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2467a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2467ac: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2467ACu;
    {
        const bool branch_taken_0x2467ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2467ac) {
            ctx->pc = 0x2467BCu;
            goto label_2467bc;
        }
    }
    ctx->pc = 0x2467B4u;
    // 0x2467b4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2467B4u;
    {
        const bool branch_taken_0x2467b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2467b4) {
            ctx->pc = 0x24682Cu;
            goto label_24682c;
        }
    }
    ctx->pc = 0x2467BCu;
label_2467bc:
    // 0x2467bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2467bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2467c0: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2467c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2467c4: 0xc042290  jal         func_108A40
    ctx->pc = 0x2467C4u;
    SET_GPR_U32(ctx, 31, 0x2467CCu);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x2467C4u, 0x2467CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467CCu;
label_2467cc:
    // 0x2467cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2467ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467d0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2467d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2467d4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2467d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2467d8: 0xc042288  jal         func_108A20
    ctx->pc = 0x2467D8u;
    SET_GPR_U32(ctx, 31, 0x2467E0u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2467D8u, 0x2467E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467E0u;
label_2467e0:
    // 0x2467e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2467e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2467e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2467e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2467ec: 0xc050540  jal         func_141500
    ctx->pc = 0x2467ECu;
    SET_GPR_U32(ctx, 31, 0x2467F4u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x2467ECu, 0x2467F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2467F4u;
label_2467f4:
    // 0x2467f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2467f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2467f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2467f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2467fc: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x2467fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246800: 0xc042288  jal         func_108A20
    ctx->pc = 0x246800u;
    SET_GPR_U32(ctx, 31, 0x246808u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x246800u, 0x246808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246808u;
label_246808:
    // 0x246808: 0x12220031  beq         $s1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x246808u;
    {
        const bool branch_taken_0x246808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x246808) {
            ctx->pc = 0x2468D0u;
            goto label_2468d0;
        }
    }
    ctx->pc = 0x246810u;
    // 0x246810: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246814: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x246814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x246818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x246818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24681c: 0xc04fe98  jal         func_13FA60
    ctx->pc = 0x24681Cu;
    SET_GPR_U32(ctx, 31, 0x246824u);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x24681Cu, 0x246824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246824u;
label_246824:
    // 0x246824: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x246824u;
    {
        const bool branch_taken_0x246824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246824) {
            ctx->pc = 0x2468D0u;
            goto label_2468d0;
        }
    }
    ctx->pc = 0x24682Cu;
label_24682c:
    // 0x24682c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x24682cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246830: 0xc085530  jal         func_2154C0
    ctx->pc = 0x246830u;
    SET_GPR_U32(ctx, 31, 0x246838u);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x246830u, 0x246838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246838u;
label_246838:
    // 0x246838: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x246838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x24683c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24683Cu;
    {
        const bool branch_taken_0x24683c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x24683c) {
            ctx->pc = 0x246858u;
            goto label_246858;
        }
    }
    ctx->pc = 0x246844u;
    // 0x246844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x246848: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x246848u;
    {
        const bool branch_taken_0x246848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x246848) {
            ctx->pc = 0x246858u;
            goto label_246858;
        }
    }
    ctx->pc = 0x246850u;
    // 0x246850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x246850u;
    {
        const bool branch_taken_0x246850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246850) {
            ctx->pc = 0x246868u;
            goto label_246868;
        }
    }
    ctx->pc = 0x246858u;
label_246858:
    // 0x246858: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x246858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24685c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x24685cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x246860: 0xc091a3c  jal         func_2468F0
    ctx->pc = 0x246860u;
    SET_GPR_U32(ctx, 31, 0x246868u);
    ctx->pc = 0x2468F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2468F0u, 0x246860u, 0x246868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246868u;
label_246868:
    // 0x246868: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24686c: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x24686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x246870: 0xc042290  jal         func_108A40
    ctx->pc = 0x246870u;
    SET_GPR_U32(ctx, 31, 0x246878u);
    ctx->pc = 0x108A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A40u, 0x246870u, 0x246878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246878u;
label_246878:
    // 0x246878: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x246878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24687c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x24687cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x246880: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x246880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x246884: 0xc042288  jal         func_108A20
    ctx->pc = 0x246884u;
    SET_GPR_U32(ctx, 31, 0x24688Cu);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x246884u, 0x24688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24688Cu;
label_24688c:
    // 0x24688c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x24688cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246894: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x246894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x246898: 0xc050540  jal         func_141500
    ctx->pc = 0x246898u;
    SET_GPR_U32(ctx, 31, 0x2468A0u);
    ctx->pc = 0x141500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x141500u, 0x246898u, 0x2468A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468A0u;
label_2468a0:
    // 0x2468a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2468a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2468a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2468a8: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2468a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2468ac: 0xc042288  jal         func_108A20
    ctx->pc = 0x2468ACu;
    SET_GPR_U32(ctx, 31, 0x2468B4u);
    ctx->pc = 0x108A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A20u, 0x2468ACu, 0x2468B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468B4u;
label_2468b4:
    // 0x2468b4: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2468B4u;
    {
        const bool branch_taken_0x2468b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2468b4) {
            ctx->pc = 0x2468D0u;
            goto label_2468d0;
        }
    }
    ctx->pc = 0x2468BCu;
    // 0x2468bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2468bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2468c0: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2468c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2468c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2468c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2468c8: 0xc04fe98  jal         func_13FA60
    ctx->pc = 0x2468C8u;
    SET_GPR_U32(ctx, 31, 0x2468D0u);
    ctx->pc = 0x13FA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA60u, 0x2468C8u, 0x2468D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2468D0u;
label_2468d0:
    // 0x2468d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2468d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2468d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2468d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2468d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2468d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2468dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2468dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2468e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2468e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2468e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2468E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2468E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2468ECu;
    // 0x2468ec: 0x0  nop
    ctx->pc = 0x2468ecu;
    // NOP
    ctx->pc = 0x2468f0u;
}
