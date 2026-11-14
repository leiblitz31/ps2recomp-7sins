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

// Function: sub_0041B6C0
// Address: 0x41b6c0 - 0x41b880
void sub_0041B6C0_0x41b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041B6C0_0x41b6c0");
#endif

    switch (ctx->pc) {
        case 0x41b6c0u: goto label_41b6c0;
        case 0x41b6c4u: goto label_41b6c4;
        case 0x41b6c8u: goto label_41b6c8;
        case 0x41b6ccu: goto label_41b6cc;
        case 0x41b6d0u: goto label_41b6d0;
        case 0x41b6d4u: goto label_41b6d4;
        case 0x41b6d8u: goto label_41b6d8;
        case 0x41b6dcu: goto label_41b6dc;
        case 0x41b6e0u: goto label_41b6e0;
        case 0x41b6e4u: goto label_41b6e4;
        case 0x41b6e8u: goto label_41b6e8;
        case 0x41b6ecu: goto label_41b6ec;
        case 0x41b6f0u: goto label_41b6f0;
        case 0x41b6f4u: goto label_41b6f4;
        case 0x41b6f8u: goto label_41b6f8;
        case 0x41b6fcu: goto label_41b6fc;
        case 0x41b700u: goto label_41b700;
        case 0x41b704u: goto label_41b704;
        case 0x41b708u: goto label_41b708;
        case 0x41b70cu: goto label_41b70c;
        case 0x41b710u: goto label_41b710;
        case 0x41b714u: goto label_41b714;
        case 0x41b718u: goto label_41b718;
        case 0x41b71cu: goto label_41b71c;
        case 0x41b720u: goto label_41b720;
        case 0x41b724u: goto label_41b724;
        case 0x41b728u: goto label_41b728;
        case 0x41b72cu: goto label_41b72c;
        case 0x41b730u: goto label_41b730;
        case 0x41b734u: goto label_41b734;
        case 0x41b738u: goto label_41b738;
        case 0x41b73cu: goto label_41b73c;
        case 0x41b740u: goto label_41b740;
        case 0x41b744u: goto label_41b744;
        case 0x41b748u: goto label_41b748;
        case 0x41b74cu: goto label_41b74c;
        case 0x41b750u: goto label_41b750;
        case 0x41b754u: goto label_41b754;
        case 0x41b758u: goto label_41b758;
        case 0x41b75cu: goto label_41b75c;
        case 0x41b760u: goto label_41b760;
        case 0x41b764u: goto label_41b764;
        case 0x41b768u: goto label_41b768;
        case 0x41b76cu: goto label_41b76c;
        case 0x41b770u: goto label_41b770;
        case 0x41b774u: goto label_41b774;
        case 0x41b778u: goto label_41b778;
        case 0x41b77cu: goto label_41b77c;
        case 0x41b780u: goto label_41b780;
        case 0x41b784u: goto label_41b784;
        case 0x41b788u: goto label_41b788;
        case 0x41b78cu: goto label_41b78c;
        case 0x41b790u: goto label_41b790;
        case 0x41b794u: goto label_41b794;
        case 0x41b798u: goto label_41b798;
        case 0x41b79cu: goto label_41b79c;
        case 0x41b7a0u: goto label_41b7a0;
        case 0x41b7a4u: goto label_41b7a4;
        case 0x41b7a8u: goto label_41b7a8;
        case 0x41b7acu: goto label_41b7ac;
        case 0x41b7b0u: goto label_41b7b0;
        case 0x41b7b4u: goto label_41b7b4;
        case 0x41b7b8u: goto label_41b7b8;
        case 0x41b7bcu: goto label_41b7bc;
        case 0x41b7c0u: goto label_41b7c0;
        case 0x41b7c4u: goto label_41b7c4;
        case 0x41b7c8u: goto label_41b7c8;
        case 0x41b7ccu: goto label_41b7cc;
        case 0x41b7d0u: goto label_41b7d0;
        case 0x41b7d4u: goto label_41b7d4;
        case 0x41b7d8u: goto label_41b7d8;
        case 0x41b7dcu: goto label_41b7dc;
        case 0x41b7e0u: goto label_41b7e0;
        case 0x41b7e4u: goto label_41b7e4;
        case 0x41b7e8u: goto label_41b7e8;
        case 0x41b7ecu: goto label_41b7ec;
        case 0x41b7f0u: goto label_41b7f0;
        case 0x41b7f4u: goto label_41b7f4;
        case 0x41b7f8u: goto label_41b7f8;
        case 0x41b7fcu: goto label_41b7fc;
        case 0x41b800u: goto label_41b800;
        case 0x41b804u: goto label_41b804;
        case 0x41b808u: goto label_41b808;
        case 0x41b80cu: goto label_41b80c;
        case 0x41b810u: goto label_41b810;
        case 0x41b814u: goto label_41b814;
        case 0x41b818u: goto label_41b818;
        case 0x41b81cu: goto label_41b81c;
        case 0x41b820u: goto label_41b820;
        case 0x41b824u: goto label_41b824;
        case 0x41b828u: goto label_41b828;
        case 0x41b82cu: goto label_41b82c;
        case 0x41b830u: goto label_41b830;
        case 0x41b834u: goto label_41b834;
        case 0x41b838u: goto label_41b838;
        case 0x41b83cu: goto label_41b83c;
        case 0x41b840u: goto label_41b840;
        case 0x41b844u: goto label_41b844;
        case 0x41b848u: goto label_41b848;
        case 0x41b84cu: goto label_41b84c;
        case 0x41b850u: goto label_41b850;
        case 0x41b854u: goto label_41b854;
        case 0x41b858u: goto label_41b858;
        case 0x41b85cu: goto label_41b85c;
        case 0x41b860u: goto label_41b860;
        case 0x41b864u: goto label_41b864;
        case 0x41b868u: goto label_41b868;
        case 0x41b86cu: goto label_41b86c;
        case 0x41b870u: goto label_41b870;
        case 0x41b874u: goto label_41b874;
        case 0x41b878u: goto label_41b878;
        case 0x41b87cu: goto label_41b87c;
        default: break;
    }

    ctx->pc = 0x41b6c0u;

label_41b6c0:
    // 0x41b6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x41b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_41b6c4:
    // 0x41b6c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_41b6c8:
    // 0x41b6c8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x41b6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_41b6cc:
    // 0x41b6cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x41b6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_41b6d0:
    // 0x41b6d0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x41b6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_41b6d4:
    // 0x41b6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41b6d8:
    // 0x41b6d8: 0xc106d02  jal         func_41B408
label_41b6dc:
    if (ctx->pc == 0x41B6DCu) {
        ctx->pc = 0x41B6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6D8u;
        // 0x41b6dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B6E0u;
        goto label_41b6e0;
    }
    ctx->pc = 0x41B6D8u;
    SET_GPR_U32(ctx, 31, 0x41B6E0u);
    ctx->pc = 0x41B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B6D8u;
    // 0x41b6dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B408u, 0x41B6D8u, 0x41B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B6E0u;
label_41b6e0:
    // 0x41b6e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x41b6e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b6e4:
    // 0x41b6e4: 0x1220005e  beqz        $s1, . + 4 + (0x5E << 2)
label_41b6e8:
    if (ctx->pc == 0x41B6E8u) {
        ctx->pc = 0x41B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6E4u;
        // 0x41b6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B6ECu;
        goto label_41b6ec;
    }
    ctx->pc = 0x41B6E4u;
    {
        const bool branch_taken_0x41b6e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6E4u;
        // 0x41b6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b6e4) {
            ctx->pc = 0x41B860u;
            goto label_41b860;
        }
    }
    ctx->pc = 0x41B6ECu;
label_41b6ec:
    // 0x41b6ec: 0x1200005c  beqz        $s0, . + 4 + (0x5C << 2)
label_41b6f0:
    if (ctx->pc == 0x41B6F0u) {
        ctx->pc = 0x41B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6ECu;
        // 0x41b6f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B6F4u;
        goto label_41b6f4;
    }
    ctx->pc = 0x41B6ECu;
    {
        const bool branch_taken_0x41b6ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6ECu;
        // 0x41b6f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b6ec) {
            ctx->pc = 0x41B860u;
            goto label_41b860;
        }
    }
    ctx->pc = 0x41B6F4u;
label_41b6f4:
    // 0x41b6f4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x41b6f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_41b6f8:
    // 0x41b6f8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_41b6fc:
    if (ctx->pc == 0x41B6FCu) {
        ctx->pc = 0x41B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6F8u;
        // 0x41b6fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B700u;
        goto label_41b700;
    }
    ctx->pc = 0x41B6F8u;
    {
        const bool branch_taken_0x41b6f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B6F8u;
        // 0x41b6fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b6f8) {
            ctx->pc = 0x41B860u;
            goto label_41b860;
        }
    }
    ctx->pc = 0x41B700u;
label_41b700:
    // 0x41b700: 0xc106d02  jal         func_41B408
label_41b704:
    if (ctx->pc == 0x41B704u) {
        ctx->pc = 0x41B704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B700u;
        // 0x41b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B708u;
        goto label_41b708;
    }
    ctx->pc = 0x41B700u;
    SET_GPR_U32(ctx, 31, 0x41B708u);
    ctx->pc = 0x41B704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B700u;
    // 0x41b704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41B408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41B408u, 0x41B700u, 0x41B708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B708u;
label_41b708:
    // 0x41b708: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x41b708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41b70c:
    // 0x41b70c: 0x16000015  bnez        $s0, . + 4 + (0x15 << 2)
label_41b710:
    if (ctx->pc == 0x41B710u) {
        ctx->pc = 0x41B714u;
        goto label_41b714;
    }
    ctx->pc = 0x41B70Cu;
    {
        const bool branch_taken_0x41b70c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x41b70c) {
            ctx->pc = 0x41B764u;
            goto label_41b764;
        }
    }
    ctx->pc = 0x41B714u;
label_41b714:
    // 0x41b714: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41b718:
    // 0x41b718: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41b718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41b71c:
    // 0x41b71c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41b720:
    if (ctx->pc == 0x41B720u) {
        ctx->pc = 0x41B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B71Cu;
        // 0x41b720: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B724u;
        goto label_41b724;
    }
    ctx->pc = 0x41B71Cu;
    {
        const bool branch_taken_0x41b71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B71Cu;
        // 0x41b720: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b71c) {
            ctx->pc = 0x41B730u;
            goto label_41b730;
        }
    }
    ctx->pc = 0x41B724u;
label_41b724:
    // 0x41b724: 0xc1070bc  jal         func_41C2F0
label_41b728:
    if (ctx->pc == 0x41B728u) {
        ctx->pc = 0x41B728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B724u;
        // 0x41b728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B72Cu;
        goto label_41b72c;
    }
    ctx->pc = 0x41B724u;
    SET_GPR_U32(ctx, 31, 0x41B72Cu);
    ctx->pc = 0x41B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B724u;
    // 0x41b728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41B724u, 0x41B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B72Cu;
label_41b72c:
    // 0x41b72c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41b72cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41b730:
    // 0x41b730: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b734:
    // 0x41b734: 0xc104ca6  jal         func_413298
label_41b738:
    if (ctx->pc == 0x41B738u) {
        ctx->pc = 0x41B738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B734u;
        // 0x41b738: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B73Cu;
        goto label_41b73c;
    }
    ctx->pc = 0x41B734u;
    SET_GPR_U32(ctx, 31, 0x41B73Cu);
    ctx->pc = 0x41B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B734u;
    // 0x41b738: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41B734u, 0x41B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B73Cu;
label_41b73c:
    // 0x41b73c: 0x8f86be08  lw          $a2, -0x41F8($gp)
    ctx->pc = 0x41b73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b740:
    // 0x41b740: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41b740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41b744:
    // 0x41b744: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41b744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41b748:
    // 0x41b748: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b74c:
    // 0x41b74c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x41b74cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41b750:
    // 0x41b750: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x41b750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_41b754:
    // 0x41b754: 0x40f809  jalr        $v0
label_41b758:
    if (ctx->pc == 0x41B758u) {
        ctx->pc = 0x41B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B754u;
        // 0x41b758: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B75Cu;
        goto label_41b75c;
    }
    ctx->pc = 0x41B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B75Cu);
        ctx->pc = 0x41B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B754u;
        // 0x41b758: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B754u, 0x41B75Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B75Cu;
label_41b75c:
    // 0x41b75c: 0x10000040  b           . + 4 + (0x40 << 2)
label_41b760:
    if (ctx->pc == 0x41B760u) {
        ctx->pc = 0x41B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B75Cu;
        // 0x41b760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B764u;
        goto label_41b764;
    }
    ctx->pc = 0x41B75Cu;
    {
        const bool branch_taken_0x41b75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B75Cu;
        // 0x41b760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b75c) {
            ctx->pc = 0x41B860u;
            goto label_41b860;
        }
    }
    ctx->pc = 0x41B764u;
label_41b764:
    // 0x41b764: 0xc106a80  jal         func_41AA00
label_41b768:
    if (ctx->pc == 0x41B768u) {
        ctx->pc = 0x41B768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B764u;
        // 0x41b768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B76Cu;
        goto label_41b76c;
    }
    ctx->pc = 0x41B764u;
    SET_GPR_U32(ctx, 31, 0x41B76Cu);
    ctx->pc = 0x41B768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B764u;
    // 0x41b768: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AA00u, 0x41B764u, 0x41B76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B76Cu;
label_41b76c:
    // 0x41b76c: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_41b770:
    if (ctx->pc == 0x41B770u) {
        ctx->pc = 0x41B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B76Cu;
        // 0x41b770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B774u;
        goto label_41b774;
    }
    ctx->pc = 0x41B76Cu;
    {
        const bool branch_taken_0x41b76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x41B770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B76Cu;
        // 0x41b770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b76c) {
            ctx->pc = 0x41B804u;
            goto label_41b804;
        }
    }
    ctx->pc = 0x41B774u;
label_41b774:
    // 0x41b774: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x41b774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_41b778:
    // 0x41b778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41b77c:
    // 0x41b77c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41b780:
    if (ctx->pc == 0x41B780u) {
        ctx->pc = 0x41B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B77Cu;
        // 0x41b780: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B784u;
        goto label_41b784;
    }
    ctx->pc = 0x41B77Cu;
    {
        const bool branch_taken_0x41b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B77Cu;
        // 0x41b780: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b77c) {
            ctx->pc = 0x41B790u;
            goto label_41b790;
        }
    }
    ctx->pc = 0x41B784u;
label_41b784:
    // 0x41b784: 0xc1070bc  jal         func_41C2F0
label_41b788:
    if (ctx->pc == 0x41B788u) {
        ctx->pc = 0x41B788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B784u;
        // 0x41b788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B78Cu;
        goto label_41b78c;
    }
    ctx->pc = 0x41B784u;
    SET_GPR_U32(ctx, 31, 0x41B78Cu);
    ctx->pc = 0x41B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B784u;
    // 0x41b788: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41B784u, 0x41B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B78Cu;
label_41b78c:
    // 0x41b78c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_41b790:
    // 0x41b790: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b794:
    // 0x41b794: 0x2453c9e0  addiu       $s3, $v0, -0x3620
    ctx->pc = 0x41b794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953440));
label_41b798:
    // 0x41b798: 0xc104ca6  jal         func_413298
label_41b79c:
    if (ctx->pc == 0x41B79Cu) {
        ctx->pc = 0x41B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B798u;
        // 0x41b79c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7A0u;
        goto label_41b7a0;
    }
    ctx->pc = 0x41B798u;
    SET_GPR_U32(ctx, 31, 0x41B7A0u);
    ctx->pc = 0x41B79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B798u;
    // 0x41b79c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41B798u, 0x41B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B7A0u;
label_41b7a0:
    // 0x41b7a0: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b7a4:
    // 0x41b7a4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x41b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_41b7a8:
    // 0x41b7a8: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x41b7a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_41b7ac:
    // 0x41b7ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x41b7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b7b0:
    // 0x41b7b0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41b7b4:
    // 0x41b7b4: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x41b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_41b7b8:
    // 0x41b7b8: 0x40f809  jalr        $v0
label_41b7bc:
    if (ctx->pc == 0x41B7BCu) {
        ctx->pc = 0x41B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7B8u;
        // 0x41b7bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7C0u;
        goto label_41b7c0;
    }
    ctx->pc = 0x41B7B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B7C0u);
        ctx->pc = 0x41B7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7B8u;
        // 0x41b7bc: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B7B8u, 0x41B7C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B7C0u;
label_41b7c0:
    // 0x41b7c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41b7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41b7c4:
    // 0x41b7c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x41b7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_41b7c8:
    // 0x41b7c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_41b7cc:
    if (ctx->pc == 0x41B7CCu) {
        ctx->pc = 0x41B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7C8u;
        // 0x41b7cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7D0u;
        goto label_41b7d0;
    }
    ctx->pc = 0x41B7C8u;
    {
        const bool branch_taken_0x41b7c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7C8u;
        // 0x41b7cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b7c8) {
            ctx->pc = 0x41B7DCu;
            goto label_41b7dc;
        }
    }
    ctx->pc = 0x41B7D0u;
label_41b7d0:
    // 0x41b7d0: 0xc1070bc  jal         func_41C2F0
label_41b7d4:
    if (ctx->pc == 0x41B7D4u) {
        ctx->pc = 0x41B7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7D0u;
        // 0x41b7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7D8u;
        goto label_41b7d8;
    }
    ctx->pc = 0x41B7D0u;
    SET_GPR_U32(ctx, 31, 0x41B7D8u);
    ctx->pc = 0x41B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B7D0u;
    // 0x41b7d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41B7D0u, 0x41B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B7D8u;
label_41b7d8:
    // 0x41b7d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x41b7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41b7dc:
    // 0x41b7dc: 0xc104ca6  jal         func_413298
label_41b7e0:
    if (ctx->pc == 0x41B7E0u) {
        ctx->pc = 0x41B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7DCu;
        // 0x41b7e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7E4u;
        goto label_41b7e4;
    }
    ctx->pc = 0x41B7DCu;
    SET_GPR_U32(ctx, 31, 0x41B7E4u);
    ctx->pc = 0x41B7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B7DCu;
    // 0x41b7e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41B7DCu, 0x41B7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B7E4u;
label_41b7e4:
    // 0x41b7e4: 0x8f83be08  lw          $v1, -0x41F8($gp)
    ctx->pc = 0x41b7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b7e8:
    // 0x41b7e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b7e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b7ec:
    // 0x41b7ec: 0x8e42011c  lw          $v0, 0x11C($s2)
    ctx->pc = 0x41b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 284)));
label_41b7f0:
    // 0x41b7f0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x41b7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_41b7f4:
    // 0x41b7f4: 0x40f809  jalr        $v0
label_41b7f8:
    if (ctx->pc == 0x41B7F8u) {
        ctx->pc = 0x41B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7F4u;
        // 0x41b7f8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B7FCu;
        goto label_41b7fc;
    }
    ctx->pc = 0x41B7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B7FCu);
        ctx->pc = 0x41B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7F4u;
        // 0x41b7f8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B7F4u, 0x41B7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B7FCu;
label_41b7fc:
    // 0x41b7fc: 0x10000018  b           . + 4 + (0x18 << 2)
label_41b800:
    if (ctx->pc == 0x41B800u) {
        ctx->pc = 0x41B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7FCu;
        // 0x41b800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B804u;
        goto label_41b804;
    }
    ctx->pc = 0x41B7FCu;
    {
        const bool branch_taken_0x41b7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B7FCu;
        // 0x41b800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b7fc) {
            ctx->pc = 0x41B860u;
            goto label_41b860;
        }
    }
    ctx->pc = 0x41B804u;
label_41b804:
    // 0x41b804: 0xc106b0a  jal         func_41AC28
label_41b808:
    if (ctx->pc == 0x41B808u) {
        ctx->pc = 0x41B808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B804u;
        // 0x41b808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B80Cu;
        goto label_41b80c;
    }
    ctx->pc = 0x41B804u;
    SET_GPR_U32(ctx, 31, 0x41B80Cu);
    ctx->pc = 0x41B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B804u;
    // 0x41b808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41AC28u, 0x41B804u, 0x41B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B80Cu;
label_41b80c:
    // 0x41b80c: 0x5040ffda  beql        $v0, $zero, . + 4 + (-0x26 << 2)
label_41b810:
    if (ctx->pc == 0x41B810u) {
        ctx->pc = 0x41B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B80Cu;
        // 0x41b810: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B814u;
        goto label_41b814;
    }
    ctx->pc = 0x41B80Cu;
    {
        const bool branch_taken_0x41b80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41b80c) {
            ctx->pc = 0x41B810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41B80Cu;
            // 0x41b810: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x41B778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_41b778;
        }
    }
    ctx->pc = 0x41B814u;
label_41b814:
    // 0x41b814: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x41b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41b818:
    // 0x41b818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x41b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_41b81c:
    // 0x41b81c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_41b820:
    if (ctx->pc == 0x41B820u) {
        ctx->pc = 0x41B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B81Cu;
        // 0x41b820: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B824u;
        goto label_41b824;
    }
    ctx->pc = 0x41B81Cu;
    {
        const bool branch_taken_0x41b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B81Cu;
        // 0x41b820: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41b81c) {
            ctx->pc = 0x41B830u;
            goto label_41b830;
        }
    }
    ctx->pc = 0x41B824u;
label_41b824:
    // 0x41b824: 0xc1070bc  jal         func_41C2F0
label_41b828:
    if (ctx->pc == 0x41B828u) {
        ctx->pc = 0x41B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B824u;
        // 0x41b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B82Cu;
        goto label_41b82c;
    }
    ctx->pc = 0x41B824u;
    SET_GPR_U32(ctx, 31, 0x41B82Cu);
    ctx->pc = 0x41B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B824u;
    // 0x41b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C2F0u, 0x41B824u, 0x41B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B82Cu;
label_41b82c:
    // 0x41b82c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x41b82cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_41b830:
    // 0x41b830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b834:
    // 0x41b834: 0xc104ca6  jal         func_413298
label_41b838:
    if (ctx->pc == 0x41B838u) {
        ctx->pc = 0x41B838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B834u;
        // 0x41b838: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B83Cu;
        goto label_41b83c;
    }
    ctx->pc = 0x41B834u;
    SET_GPR_U32(ctx, 31, 0x41B83Cu);
    ctx->pc = 0x41B838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41B834u;
    // 0x41b838: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x41B834u, 0x41B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41B83Cu;
label_41b83c:
    // 0x41b83c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x41b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_41b840:
    // 0x41b840: 0x8f86be08  lw          $a2, -0x41F8($gp)
    ctx->pc = 0x41b840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950408)));
label_41b844:
    // 0x41b844: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x41b844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_41b848:
    // 0x41b848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41b848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41b84c:
    // 0x41b84c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x41b84cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_41b850:
    // 0x41b850: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x41b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_41b854:
    // 0x41b854: 0x40f809  jalr        $v0
label_41b858:
    if (ctx->pc == 0x41B858u) {
        ctx->pc = 0x41B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B854u;
        // 0x41b858: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B85Cu;
        goto label_41b85c;
    }
    ctx->pc = 0x41B854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41B85Cu);
        ctx->pc = 0x41B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B854u;
        // 0x41b858: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B854u, 0x41B85Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41B85Cu;
label_41b85c:
    // 0x41b85c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x41b85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_41b860:
    // 0x41b860: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x41b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41b864:
    // 0x41b864: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x41b864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41b868:
    // 0x41b868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41b868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41b86c:
    // 0x41b86c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x41b86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41b870:
    // 0x41b870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41b870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41b874:
    // 0x41b874: 0x3e00008  jr          $ra
label_41b878:
    if (ctx->pc == 0x41B878u) {
        ctx->pc = 0x41B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B874u;
        // 0x41b878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41B87Cu;
        goto label_41b87c;
    }
    ctx->pc = 0x41B874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41B878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41B874u;
        // 0x41b878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41B874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41B87Cu;
label_41b87c:
    // 0x41b87c: 0x0  nop
    ctx->pc = 0x41b87cu;
    // NOP
    ctx->pc = 0x41b880u;
}
