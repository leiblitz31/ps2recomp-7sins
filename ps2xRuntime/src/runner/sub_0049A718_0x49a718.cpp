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

// Function: sub_0049A718
// Address: 0x49a718 - 0x49a830
void sub_0049A718_0x49a718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A718_0x49a718");
#endif

    switch (ctx->pc) {
        case 0x49a718u: goto label_49a718;
        case 0x49a71cu: goto label_49a71c;
        case 0x49a720u: goto label_49a720;
        case 0x49a724u: goto label_49a724;
        case 0x49a728u: goto label_49a728;
        case 0x49a72cu: goto label_49a72c;
        case 0x49a730u: goto label_49a730;
        case 0x49a734u: goto label_49a734;
        case 0x49a738u: goto label_49a738;
        case 0x49a73cu: goto label_49a73c;
        case 0x49a740u: goto label_49a740;
        case 0x49a744u: goto label_49a744;
        case 0x49a748u: goto label_49a748;
        case 0x49a74cu: goto label_49a74c;
        case 0x49a750u: goto label_49a750;
        case 0x49a754u: goto label_49a754;
        case 0x49a758u: goto label_49a758;
        case 0x49a75cu: goto label_49a75c;
        case 0x49a760u: goto label_49a760;
        case 0x49a764u: goto label_49a764;
        case 0x49a768u: goto label_49a768;
        case 0x49a76cu: goto label_49a76c;
        case 0x49a770u: goto label_49a770;
        case 0x49a774u: goto label_49a774;
        case 0x49a778u: goto label_49a778;
        case 0x49a77cu: goto label_49a77c;
        case 0x49a780u: goto label_49a780;
        case 0x49a784u: goto label_49a784;
        case 0x49a788u: goto label_49a788;
        case 0x49a78cu: goto label_49a78c;
        case 0x49a790u: goto label_49a790;
        case 0x49a794u: goto label_49a794;
        case 0x49a798u: goto label_49a798;
        case 0x49a79cu: goto label_49a79c;
        case 0x49a7a0u: goto label_49a7a0;
        case 0x49a7a4u: goto label_49a7a4;
        case 0x49a7a8u: goto label_49a7a8;
        case 0x49a7acu: goto label_49a7ac;
        case 0x49a7b0u: goto label_49a7b0;
        case 0x49a7b4u: goto label_49a7b4;
        case 0x49a7b8u: goto label_49a7b8;
        case 0x49a7bcu: goto label_49a7bc;
        case 0x49a7c0u: goto label_49a7c0;
        case 0x49a7c4u: goto label_49a7c4;
        case 0x49a7c8u: goto label_49a7c8;
        case 0x49a7ccu: goto label_49a7cc;
        case 0x49a7d0u: goto label_49a7d0;
        case 0x49a7d4u: goto label_49a7d4;
        case 0x49a7d8u: goto label_49a7d8;
        case 0x49a7dcu: goto label_49a7dc;
        case 0x49a7e0u: goto label_49a7e0;
        case 0x49a7e4u: goto label_49a7e4;
        case 0x49a7e8u: goto label_49a7e8;
        case 0x49a7ecu: goto label_49a7ec;
        case 0x49a7f0u: goto label_49a7f0;
        case 0x49a7f4u: goto label_49a7f4;
        case 0x49a7f8u: goto label_49a7f8;
        case 0x49a7fcu: goto label_49a7fc;
        case 0x49a800u: goto label_49a800;
        case 0x49a804u: goto label_49a804;
        case 0x49a808u: goto label_49a808;
        case 0x49a80cu: goto label_49a80c;
        case 0x49a810u: goto label_49a810;
        case 0x49a814u: goto label_49a814;
        case 0x49a818u: goto label_49a818;
        case 0x49a81cu: goto label_49a81c;
        case 0x49a820u: goto label_49a820;
        case 0x49a824u: goto label_49a824;
        case 0x49a828u: goto label_49a828;
        case 0x49a82cu: goto label_49a82c;
        default: break;
    }

    ctx->pc = 0x49a718u;

label_49a718:
    // 0x49a718: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x49a718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_49a71c:
    // 0x49a71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49a720:
    // 0x49a720: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x49a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_49a724:
    // 0x49a724: 0x8f90c190  lw          $s0, -0x3E70($gp)
    ctx->pc = 0x49a724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951312)));
label_49a728:
    // 0x49a728: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x49a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_49a72c:
    // 0x49a72c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x49a72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_49a730:
    // 0x49a730: 0x84800b  movn        $s0, $a0, $a0
    ctx->pc = 0x49a730u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
label_49a734:
    // 0x49a734: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49a734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49a738:
    // 0x49a738: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x49a738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49a73c:
    // 0x49a73c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x49a73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_49a740:
    // 0x49a740: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x49a740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_49a744:
    // 0x49a744: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x49a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_49a748:
    // 0x49a748: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x49a748u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_49a74c:
    // 0x49a74c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x49a74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_49a750:
    // 0x49a750: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x49a750u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_49a754:
    // 0x49a754: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x49a754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_49a758:
    // 0x49a758: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x49a758u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a75c:
    // 0x49a75c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
label_49a760:
    if (ctx->pc == 0x49A760u) {
        ctx->pc = 0x49A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A75Cu;
        // 0x49a760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A764u;
        goto label_49a764;
    }
    ctx->pc = 0x49A75Cu;
    {
        const bool branch_taken_0x49a75c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x49A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A75Cu;
        // 0x49a760: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a75c) {
            ctx->pc = 0x49A78Cu;
            goto label_49a78c;
        }
    }
    ctx->pc = 0x49A764u;
label_49a764:
    // 0x49a764: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49a764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a768:
    // 0x49a768: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49a768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a76c:
    // 0x49a76c: 0x2a0f809  jalr        $s5
label_49a770:
    if (ctx->pc == 0x49A770u) {
        ctx->pc = 0x49A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A76Cu;
        // 0x49a770: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A774u;
        goto label_49a774;
    }
    ctx->pc = 0x49A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x49A774u);
        ctx->pc = 0x49A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A76Cu;
        // 0x49a770: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A76Cu, 0x49A774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A774u;
label_49a774:
    // 0x49a774: 0x54510006  bnel        $v0, $s1, . + 4 + (0x6 << 2)
label_49a778:
    if (ctx->pc == 0x49A778u) {
        ctx->pc = 0x49A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A774u;
        // 0x49a778: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A77Cu;
        goto label_49a77c;
    }
    ctx->pc = 0x49A774u;
    {
        const bool branch_taken_0x49a774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x49a774) {
            ctx->pc = 0x49A778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A774u;
            // 0x49a778: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A790u;
            goto label_49a790;
        }
    }
    ctx->pc = 0x49A77Cu;
label_49a77c:
    // 0x49a77c: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
label_49a780:
    if (ctx->pc == 0x49A780u) {
        ctx->pc = 0x49A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A77Cu;
        // 0x49a780: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A784u;
        goto label_49a784;
    }
    ctx->pc = 0x49A77Cu;
    {
        const bool branch_taken_0x49a77c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a77c) {
            ctx->pc = 0x49A780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A77Cu;
            // 0x49a780: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A7C0u;
            goto label_49a7c0;
        }
    }
    ctx->pc = 0x49A784u;
label_49a784:
    // 0x49a784: 0x1000001e  b           . + 4 + (0x1E << 2)
label_49a788:
    if (ctx->pc == 0x49A788u) {
        ctx->pc = 0x49A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A784u;
        // 0x49a788: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A78Cu;
        goto label_49a78c;
    }
    ctx->pc = 0x49A784u;
    {
        const bool branch_taken_0x49a784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A784u;
        // 0x49a788: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a784) {
            ctx->pc = 0x49A800u;
            goto label_49a800;
        }
    }
    ctx->pc = 0x49A78Cu;
label_49a78c:
    // 0x49a78c: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x49a78cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_49a790:
    // 0x49a790: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x49a790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_49a794:
    // 0x49a794: 0x12330017  beq         $s1, $s3, . + 4 + (0x17 << 2)
label_49a798:
    if (ctx->pc == 0x49A798u) {
        ctx->pc = 0x49A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A794u;
        // 0x49a798: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A79Cu;
        goto label_49a79c;
    }
    ctx->pc = 0x49A794u;
    {
        const bool branch_taken_0x49a794 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x49A798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A794u;
        // 0x49a798: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a794) {
            ctx->pc = 0x49A7F4u;
            goto label_49a7f4;
        }
    }
    ctx->pc = 0x49A79Cu;
label_49a79c:
    // 0x49a79c: 0x2630ffe8  addiu       $s0, $s1, -0x18
    ctx->pc = 0x49a79cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
label_49a7a0:
    // 0x49a7a0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x49a7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_49a7a4:
    // 0x49a7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49a7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49a7a8:
    // 0x49a7a8: 0x2a0f809  jalr        $s5
label_49a7ac:
    if (ctx->pc == 0x49A7ACu) {
        ctx->pc = 0x49A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7A8u;
        // 0x49a7ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7B0u;
        goto label_49a7b0;
    }
    ctx->pc = 0x49A7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x49A7B0u);
        ctx->pc = 0x49A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7A8u;
        // 0x49a7ac: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A7A8u, 0x49A7B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49A7B0u;
label_49a7b0:
    // 0x49a7b0: 0x14570005  bne         $v0, $s7, . + 4 + (0x5 << 2)
label_49a7b4:
    if (ctx->pc == 0x49A7B4u) {
        ctx->pc = 0x49A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7B0u;
        // 0x49a7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7B8u;
        goto label_49a7b8;
    }
    ctx->pc = 0x49A7B0u;
    {
        const bool branch_taken_0x49a7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x49A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7B0u;
        // 0x49a7b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7b0) {
            ctx->pc = 0x49A7C8u;
            goto label_49a7c8;
        }
    }
    ctx->pc = 0x49A7B8u;
label_49a7b8:
    // 0x49a7b8: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_49a7bc:
    if (ctx->pc == 0x49A7BCu) {
        ctx->pc = 0x49A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7B8u;
        // 0x49a7bc: 0xae560000  sw          $s6, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7C0u;
        goto label_49a7c0;
    }
    ctx->pc = 0x49A7B8u;
    {
        const bool branch_taken_0x49a7b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a7b8) {
            ctx->pc = 0x49A7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A7B8u;
            // 0x49a7bc: 0xae560000  sw          $s6, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A7C0u;
            goto label_49a7c0;
        }
    }
    ctx->pc = 0x49A7C0u;
label_49a7c0:
    // 0x49a7c0: 0x1000000f  b           . + 4 + (0xF << 2)
label_49a7c4:
    if (ctx->pc == 0x49A7C4u) {
        ctx->pc = 0x49A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7C0u;
        // 0x49a7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7C8u;
        goto label_49a7c8;
    }
    ctx->pc = 0x49A7C0u;
    {
        const bool branch_taken_0x49a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7C0u;
        // 0x49a7c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7c0) {
            ctx->pc = 0x49A800u;
            goto label_49a800;
        }
    }
    ctx->pc = 0x49A7C8u;
label_49a7c8:
    // 0x49a7c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x49a7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_49a7cc:
    // 0x49a7cc: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x49a7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_49a7d0:
    // 0x49a7d0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x49a7d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_49a7d4:
    // 0x49a7d4: 0xc1269c6  jal         func_49A718
label_49a7d8:
    if (ctx->pc == 0x49A7D8u) {
        ctx->pc = 0x49A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7D4u;
        // 0x49a7d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7DCu;
        goto label_49a7dc;
    }
    ctx->pc = 0x49A7D4u;
    SET_GPR_U32(ctx, 31, 0x49A7DCu);
    ctx->pc = 0x49A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A7D4u;
    // 0x49a7d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49A718u;
    goto label_49a718;
    ctx->pc = 0x49A7DCu;
label_49a7dc:
    // 0x49a7dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49a7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49a7e0:
    // 0x49a7e0: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
label_49a7e4:
    if (ctx->pc == 0x49A7E4u) {
        ctx->pc = 0x49A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7E0u;
        // 0x49a7e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7E8u;
        goto label_49a7e8;
    }
    ctx->pc = 0x49A7E0u;
    {
        const bool branch_taken_0x49a7e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a7e0) {
            ctx->pc = 0x49A7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A7E0u;
            // 0x49a7e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A800u;
            goto label_49a800;
        }
    }
    ctx->pc = 0x49A7E8u;
label_49a7e8:
    // 0x49a7e8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x49a7e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_49a7ec:
    // 0x49a7ec: 0x1633ffec  bne         $s1, $s3, . + 4 + (-0x14 << 2)
label_49a7f0:
    if (ctx->pc == 0x49A7F0u) {
        ctx->pc = 0x49A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7ECu;
        // 0x49a7f0: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7F4u;
        goto label_49a7f4;
    }
    ctx->pc = 0x49A7ECu;
    {
        const bool branch_taken_0x49a7ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x49A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7ECu;
        // 0x49a7f0: 0x2630ffe8  addiu       $s0, $s1, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a7ec) {
            ctx->pc = 0x49A7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a7a0;
        }
    }
    ctx->pc = 0x49A7F4u;
label_49a7f4:
    // 0x49a7f4: 0x56400001  bnel        $s2, $zero, . + 4 + (0x1 << 2)
label_49a7f8:
    if (ctx->pc == 0x49A7F8u) {
        ctx->pc = 0x49A7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A7F4u;
        // 0x49a7f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A7FCu;
        goto label_49a7fc;
    }
    ctx->pc = 0x49A7F4u;
    {
        const bool branch_taken_0x49a7f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x49a7f4) {
            ctx->pc = 0x49A7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49A7F4u;
            // 0x49a7f8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49A7FCu;
            goto label_49a7fc;
        }
    }
    ctx->pc = 0x49A7FCu;
label_49a7fc:
    // 0x49a7fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a7fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49a800:
    // 0x49a800: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x49a800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_49a804:
    // 0x49a804: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x49a804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_49a808:
    // 0x49a808: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x49a808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_49a80c:
    // 0x49a80c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x49a80cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_49a810:
    // 0x49a810: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49a810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49a814:
    // 0x49a814: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x49a814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49a818:
    // 0x49a818: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x49a818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49a81c:
    // 0x49a81c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x49a81cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49a820:
    // 0x49a820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49a824:
    // 0x49a824: 0x3e00008  jr          $ra
label_49a828:
    if (ctx->pc == 0x49A828u) {
        ctx->pc = 0x49A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A824u;
        // 0x49a828: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x49A82Cu;
        goto label_49a82c;
    }
    ctx->pc = 0x49A824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A824u;
        // 0x49a828: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A82Cu;
label_49a82c:
    // 0x49a82c: 0x0  nop
    ctx->pc = 0x49a82cu;
    // NOP
    ctx->pc = 0x49a830u;
}
