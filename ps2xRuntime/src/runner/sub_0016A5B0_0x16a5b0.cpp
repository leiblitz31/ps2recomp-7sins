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

// Function: sub_0016A5B0
// Address: 0x16a5b0 - 0x16a7f0
void sub_0016A5B0_0x16a5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A5B0_0x16a5b0");
#endif

    switch (ctx->pc) {
        case 0x16a618u: goto label_16a618;
        case 0x16a624u: goto label_16a624;
        case 0x16a638u: goto label_16a638;
        case 0x16a64cu: goto label_16a64c;
        case 0x16a65cu: goto label_16a65c;
        case 0x16a66cu: goto label_16a66c;
        case 0x16a6b0u: goto label_16a6b0;
        case 0x16a6bcu: goto label_16a6bc;
        case 0x16a6d0u: goto label_16a6d0;
        case 0x16a6e4u: goto label_16a6e4;
        case 0x16a6fcu: goto label_16a6fc;
        case 0x16a70cu: goto label_16a70c;
        case 0x16a71cu: goto label_16a71c;
        case 0x16a730u: goto label_16a730;
        case 0x16a748u: goto label_16a748;
        case 0x16a75cu: goto label_16a75c;
        case 0x16a76cu: goto label_16a76c;
        case 0x16a77cu: goto label_16a77c;
        case 0x16a790u: goto label_16a790;
        case 0x16a7a8u: goto label_16a7a8;
        case 0x16a7bcu: goto label_16a7bc;
        case 0x16a7ccu: goto label_16a7cc;
        case 0x16a7dcu: goto label_16a7dc;
        default: break;
    }

    ctx->pc = 0x16a5b0u;

    // 0x16a5b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16a5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16a5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16a5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16a5bc: 0x8f84bac4  lw          $a0, -0x453C($gp)
    ctx->pc = 0x16a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a5c0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a5c4: 0x1083006f  beq         $a0, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16A784u;
            goto label_16a784;
        }
    }
    ctx->pc = 0x16A5CCu;
    // 0x16a5cc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16a5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16a5d0: 0x10830054  beq         $a0, $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x16A5D0u;
    {
        const bool branch_taken_0x16a5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5d0) {
            ctx->pc = 0x16A724u;
            goto label_16a724;
        }
    }
    ctx->pc = 0x16A5D8u;
    // 0x16a5d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a5dc: 0x10830025  beq         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x16A5DCu;
    {
        const bool branch_taken_0x16a5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5dc) {
            ctx->pc = 0x16A674u;
            goto label_16a674;
        }
    }
    ctx->pc = 0x16A5E4u;
    // 0x16a5e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x16a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a5e8: 0x10830022  beq         $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16A5E8u;
    {
        const bool branch_taken_0x16a5e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a5e8) {
            ctx->pc = 0x16A674u;
            goto label_16a674;
        }
    }
    ctx->pc = 0x16A5F0u;
    // 0x16a5f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A5F0u;
    {
        const bool branch_taken_0x16a5f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5f0) {
            ctx->pc = 0x16A600u;
            goto label_16a600;
        }
    }
    ctx->pc = 0x16A5F8u;
    // 0x16a5f8: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x16A5F8u;
    {
        const bool branch_taken_0x16a5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a5f8) {
            ctx->pc = 0x16A7DCu;
            goto label_16a7dc;
        }
    }
    ctx->pc = 0x16A600u;
label_16a600:
    // 0x16a600: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16a600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a604: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x16a604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16a608: 0x27858f40  addiu       $a1, $gp, -0x70C0
    ctx->pc = 0x16a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938432));
    // 0x16a60c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16a60cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a610: 0xc047314  jal         func_11CC50
    ctx->pc = 0x16A610u;
    SET_GPR_U32(ctx, 31, 0x16A618u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16A610u, 0x16A618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A618u;
label_16a618:
    // 0x16a618: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16a618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a61c: 0xc088560  jal         func_221580
    ctx->pc = 0x16A61Cu;
    SET_GPR_U32(ctx, 31, 0x16A624u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16A61Cu, 0x16A624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A624u;
label_16a624:
    // 0x16a624: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16a624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a628: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16a628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16a62c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x16a62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16a630: 0xc040924  jal         func_102490
    ctx->pc = 0x16A630u;
    SET_GPR_U32(ctx, 31, 0x16A638u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16A630u, 0x16A638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A638u;
label_16a638:
    // 0x16a638: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16a638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a63c: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x16a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    // 0x16a640: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x16a640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x16a644: 0xc040924  jal         func_102490
    ctx->pc = 0x16A644u;
    SET_GPR_U32(ctx, 31, 0x16A64Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16A644u, 0x16A64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A64Cu;
label_16a64c:
    // 0x16a64c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16a650: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x16a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a654: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16A654u;
    SET_GPR_U32(ctx, 31, 0x16A65Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16A654u, 0x16A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A65Cu;
label_16a65c:
    // 0x16a65c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x16a65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x16a660: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a664: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16A664u;
    SET_GPR_U32(ctx, 31, 0x16A66Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16A664u, 0x16A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A66Cu;
label_16a66c:
    // 0x16a66c: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x16A66Cu;
    {
        const bool branch_taken_0x16a66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a66c) {
            ctx->pc = 0x16A7DCu;
            goto label_16a7dc;
        }
    }
    ctx->pc = 0x16A674u;
label_16a674:
    // 0x16a674: 0x8f83bac4  lw          $v1, -0x453C($gp)
    ctx->pc = 0x16a674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949572)));
    // 0x16a678: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16a67c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A67Cu;
    {
        const bool branch_taken_0x16a67c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16a67c) {
            ctx->pc = 0x16A694u;
            goto label_16a694;
        }
    }
    ctx->pc = 0x16A684u;
    // 0x16a684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a688: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x16a688u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16a68c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16A68Cu;
    {
        const bool branch_taken_0x16a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a68c) {
            ctx->pc = 0x16A698u;
            goto label_16a698;
        }
    }
    ctx->pc = 0x16A694u;
label_16a694:
    // 0x16a694: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16a694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16a698:
    // 0x16a698: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16a698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a69c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x16a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16a6a0: 0x27858f40  addiu       $a1, $gp, -0x70C0
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938432));
    // 0x16a6a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16a6a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6a8: 0xc047314  jal         func_11CC50
    ctx->pc = 0x16A6A8u;
    SET_GPR_U32(ctx, 31, 0x16A6B0u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16A6A8u, 0x16A6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6B0u;
label_16a6b0:
    // 0x16a6b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a6b4: 0xc088560  jal         func_221580
    ctx->pc = 0x16A6B4u;
    SET_GPR_U32(ctx, 31, 0x16A6BCu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16A6B4u, 0x16A6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6BCu;
label_16a6bc:
    // 0x16a6bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a6c0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x16a6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x16a6c4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x16a6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x16a6c8: 0xc040924  jal         func_102490
    ctx->pc = 0x16A6C8u;
    SET_GPR_U32(ctx, 31, 0x16A6D0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16A6C8u, 0x16A6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6D0u;
label_16a6d0:
    // 0x16a6d0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a6d4: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x16a6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    // 0x16a6d8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x16a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x16a6dc: 0xc040924  jal         func_102490
    ctx->pc = 0x16A6DCu;
    SET_GPR_U32(ctx, 31, 0x16A6E4u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16A6DCu, 0x16A6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6E4u;
label_16a6e4:
    // 0x16a6e4: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x16a6e8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x16a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16a6ec: 0x24050566  addiu       $a1, $zero, 0x566
    ctx->pc = 0x16a6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
    // 0x16a6f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a6f4: 0xc040924  jal         func_102490
    ctx->pc = 0x16A6F4u;
    SET_GPR_U32(ctx, 31, 0x16A6FCu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16A6F4u, 0x16A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A6FCu;
label_16a6fc:
    // 0x16a6fc: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16a700: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x16a700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a704: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16A704u;
    SET_GPR_U32(ctx, 31, 0x16A70Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16A704u, 0x16A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A70Cu;
label_16a70c:
    // 0x16a70c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x16a70cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16a710: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a714: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16A714u;
    SET_GPR_U32(ctx, 31, 0x16A71Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16A714u, 0x16A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A71Cu;
label_16a71c:
    // 0x16a71c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x16A71Cu;
    {
        const bool branch_taken_0x16a71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a71c) {
            ctx->pc = 0x16A7DCu;
            goto label_16a7dc;
        }
    }
    ctx->pc = 0x16A724u;
label_16a724:
    // 0x16a724: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16a724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a728: 0xc088560  jal         func_221580
    ctx->pc = 0x16A728u;
    SET_GPR_U32(ctx, 31, 0x16A730u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16A728u, 0x16A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A730u;
label_16a730:
    // 0x16a730: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a734: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16a734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16a738: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x16a738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
    // 0x16a73c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x16a73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16a740: 0xc041b24  jal         func_106C90
    ctx->pc = 0x16A740u;
    SET_GPR_U32(ctx, 31, 0x16A748u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x16A740u, 0x16A748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A748u;
label_16a748:
    // 0x16a748: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16a748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a74c: 0x27858ef8  addiu       $a1, $gp, -0x7108
    ctx->pc = 0x16a74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938360));
    // 0x16a750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a754: 0xc047314  jal         func_11CC50
    ctx->pc = 0x16A754u;
    SET_GPR_U32(ctx, 31, 0x16A75Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16A754u, 0x16A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A75Cu;
label_16a75c:
    // 0x16a75c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x16a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16a760: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x16a760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a764: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16A764u;
    SET_GPR_U32(ctx, 31, 0x16A76Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16A764u, 0x16A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A76Cu;
label_16a76c:
    // 0x16a76c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x16a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16a770: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a774: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16A774u;
    SET_GPR_U32(ctx, 31, 0x16A77Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16A774u, 0x16A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A77Cu;
label_16a77c:
    // 0x16a77c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x16A77Cu;
    {
        const bool branch_taken_0x16a77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16a77c) {
            ctx->pc = 0x16A7DCu;
            goto label_16a7dc;
        }
    }
    ctx->pc = 0x16A784u;
label_16a784:
    // 0x16a784: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a788: 0xc088560  jal         func_221580
    ctx->pc = 0x16A788u;
    SET_GPR_U32(ctx, 31, 0x16A790u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16A788u, 0x16A790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A790u;
label_16a790:
    // 0x16a790: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a794: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x16a794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x16a798: 0x24a541b0  addiu       $a1, $a1, 0x41B0
    ctx->pc = 0x16a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16816));
    // 0x16a79c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x16a79cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a7a0: 0xc041b24  jal         func_106C90
    ctx->pc = 0x16A7A0u;
    SET_GPR_U32(ctx, 31, 0x16A7A8u);
    ctx->pc = 0x106C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C90u, 0x16A7A0u, 0x16A7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7A8u;
label_16a7a8:
    // 0x16a7a8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a7ac: 0x27858ef8  addiu       $a1, $gp, -0x7108
    ctx->pc = 0x16a7acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938360));
    // 0x16a7b0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a7b4: 0xc047314  jal         func_11CC50
    ctx->pc = 0x16A7B4u;
    SET_GPR_U32(ctx, 31, 0x16A7BCu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x16A7B4u, 0x16A7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7BCu;
label_16a7bc:
    // 0x16a7bc: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x16a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x16a7c0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a7c4: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x16A7C4u;
    SET_GPR_U32(ctx, 31, 0x16A7CCu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x16A7C4u, 0x16A7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7CCu;
label_16a7cc:
    // 0x16a7cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16a7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16a7d0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x16a7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a7d4: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x16A7D4u;
    SET_GPR_U32(ctx, 31, 0x16A7DCu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x16A7D4u, 0x16A7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7DCu;
label_16a7dc:
    // 0x16a7dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a7e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x16a7e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a7e4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x16a7e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x16a7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A7F0u;
}
