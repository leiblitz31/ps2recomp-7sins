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

// Function: sub_00314808
// Address: 0x314808 - 0x314930
void sub_00314808_0x314808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314808_0x314808");
#endif

    switch (ctx->pc) {
        case 0x314838u: goto label_314838;
        case 0x314860u: goto label_314860;
        case 0x314894u: goto label_314894;
        case 0x3148bcu: goto label_3148bc;
        case 0x3148d8u: goto label_3148d8;
        case 0x314908u: goto label_314908;
        default: break;
    }

    ctx->pc = 0x314808u;

    // 0x314808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x314808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31480c: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x31480cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x314810: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x314814: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x314814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x314818: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x314818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31481c: 0x24c64a98  addiu       $a2, $a2, 0x4A98
    ctx->pc = 0x31481cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19096));
    // 0x314820: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x314820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x314824: 0x24e74ac0  addiu       $a3, $a3, 0x4AC0
    ctx->pc = 0x314824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19136));
    // 0x314828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31482c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x31482cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x314830: 0xc1063f6  jal         func_418FD8
    ctx->pc = 0x314830u;
    SET_GPR_U32(ctx, 31, 0x314838u);
    ctx->pc = 0x314834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314830u;
    // 0x314834: 0x2405011d  addiu       $a1, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418FD8u, 0x314830u, 0x314838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314838u;
label_314838:
    // 0x314838: 0x2802a  slt         $s0, $zero, $v0
    ctx->pc = 0x314838u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31483c: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
    ctx->pc = 0x31483Cu;
    {
        const bool branch_taken_0x31483c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31483Cu;
        // 0x314840: 0xaf82a5a8  sw          $v0, -0x5A58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31483c) {
            ctx->pc = 0x314914u;
            goto label_314914;
        }
    }
    ctx->pc = 0x314844u;
    // 0x314844: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x314844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x314848: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x314848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31484c: 0x24c64d60  addiu       $a2, $a2, 0x4D60
    ctx->pc = 0x31484cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19808));
    // 0x314850: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x314854: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x314854u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314858: 0xc0e28ec  jal         func_38A3B0
    ctx->pc = 0x314858u;
    SET_GPR_U32(ctx, 31, 0x314860u);
    ctx->pc = 0x31485Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314858u;
    // 0x31485c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3B0u, 0x314858u, 0x314860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314860u;
label_314860:
    // 0x314860: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x314860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314864: 0x1840002b  blez        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x314864u;
    {
        const bool branch_taken_0x314864 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x314868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314864u;
        // 0x314868: 0xaf82a5ac  sw          $v0, -0x5A54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314864) {
            ctx->pc = 0x314914u;
            goto label_314914;
        }
    }
    ctx->pc = 0x31486Cu;
    // 0x31486c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x31486cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x314870: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x314870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x314874: 0x24514b20  addiu       $s1, $v0, 0x4B20
    ctx->pc = 0x314874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 19232));
    // 0x314878: 0x24724ad8  addiu       $s2, $v1, 0x4AD8
    ctx->pc = 0x314878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 19160));
    // 0x31487c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x31487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x314880: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x314880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x314884: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x314884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314888: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x314888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31488c: 0xc0e63a2  jal         func_398E88
    ctx->pc = 0x31488Cu;
    SET_GPR_U32(ctx, 31, 0x314894u);
    ctx->pc = 0x314890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31488Cu;
    // 0x314890: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398E88u, 0x31488Cu, 0x314894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314894u;
label_314894:
    // 0x314894: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x314894u;
    {
        const bool branch_taken_0x314894 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x314898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314894u;
        // 0x314898: 0xaf82a5b4  sw          $v0, -0x5A4C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294944180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314894) {
            ctx->pc = 0x314914u;
            goto label_314914;
        }
    }
    ctx->pc = 0x31489Cu;
    // 0x31489c: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x31489cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x3148a0: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x3148a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x3148a4: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x3148a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x3148a8: 0x24a54bd8  addiu       $a1, $a1, 0x4BD8
    ctx->pc = 0x3148a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19416));
    // 0x3148ac: 0x24c64b60  addiu       $a2, $a2, 0x4B60
    ctx->pc = 0x3148acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19296));
    // 0x3148b0: 0x24e74b30  addiu       $a3, $a3, 0x4B30
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19248));
    // 0x3148b4: 0xc0e63b4  jal         func_398ED0
    ctx->pc = 0x3148B4u;
    SET_GPR_U32(ctx, 31, 0x3148BCu);
    ctx->pc = 0x3148B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148B4u;
    // 0x3148b8: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398ED0u, 0x3148B4u, 0x3148BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148BCu;
label_3148bc:
    // 0x3148bc: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3148BCu;
    {
        const bool branch_taken_0x3148bc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148BCu;
        // 0x3148c0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148bc) {
            ctx->pc = 0x314914u;
            goto label_314914;
        }
    }
    ctx->pc = 0x3148C4u;
    // 0x3148c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3148c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3148c8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3148cc: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x3148ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x3148d0: 0xc0e344a  jal         func_38D128
    ctx->pc = 0x3148D0u;
    SET_GPR_U32(ctx, 31, 0x3148D8u);
    ctx->pc = 0x3148D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148D0u;
    // 0x3148d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D128u, 0x3148D0u, 0x3148D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148D8u;
label_3148d8:
    // 0x3148d8: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x3148d8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3148dc: 0xaf82a5b0  sw          $v0, -0x5A50($gp)
    ctx->pc = 0x3148dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294944176), GPR_U32(ctx, 2));
    // 0x3148e0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3148e4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3148E4u;
    {
        const bool branch_taken_0x3148e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148E4u;
        // 0x3148e8: 0x3c050031  lui         $a1, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148e4) {
            ctx->pc = 0x314910u;
            goto label_314910;
        }
    }
    ctx->pc = 0x3148ECu;
    // 0x3148ec: 0x3c060031  lui         $a2, 0x31
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49 << 16));
    // 0x3148f0: 0x3c070031  lui         $a3, 0x31
    ctx->pc = 0x3148f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49 << 16));
    // 0x3148f4: 0x24a54bd8  addiu       $a1, $a1, 0x4BD8
    ctx->pc = 0x3148f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19416));
    // 0x3148f8: 0x24c64b60  addiu       $a2, $a2, 0x4B60
    ctx->pc = 0x3148f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19296));
    // 0x3148fc: 0x24e74b30  addiu       $a3, $a3, 0x4B30
    ctx->pc = 0x3148fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19248));
    // 0x314900: 0xc0e345c  jal         func_38D170
    ctx->pc = 0x314900u;
    SET_GPR_U32(ctx, 31, 0x314908u);
    ctx->pc = 0x314904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314900u;
    // 0x314904: 0x2404011d  addiu       $a0, $zero, 0x11D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D170u, 0x314900u, 0x314908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314908u;
label_314908:
    // 0x314908: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x314908u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x31490c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x31490cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_314910:
    // 0x314910: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314910u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314914:
    // 0x314914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x314914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314918: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x314918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31491c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x31491cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x314920: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x314920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x314924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314928: 0x3e00008  jr          $ra
    ctx->pc = 0x314928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314928u;
        // 0x31492c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314930u;
}
