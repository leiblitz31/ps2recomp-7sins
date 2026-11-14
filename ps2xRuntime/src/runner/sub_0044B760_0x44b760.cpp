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

// Function: sub_0044B760
// Address: 0x44b760 - 0x44b898
void sub_0044B760_0x44b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044B760_0x44b760");
#endif

    switch (ctx->pc) {
        case 0x44b778u: goto label_44b778;
        case 0x44b788u: goto label_44b788;
        case 0x44b79cu: goto label_44b79c;
        case 0x44b7b8u: goto label_44b7b8;
        case 0x44b7c0u: goto label_44b7c0;
        case 0x44b7c8u: goto label_44b7c8;
        case 0x44b7f8u: goto label_44b7f8;
        case 0x44b830u: goto label_44b830;
        case 0x44b840u: goto label_44b840;
        case 0x44b884u: goto label_44b884;
        default: break;
    }

    ctx->pc = 0x44b760u;

    // 0x44b760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44b764: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x44b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x44b768: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x44b768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x44b76c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44b76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44b770: 0xc1127ee  jal         func_449FB8
    ctx->pc = 0x44B770u;
    SET_GPR_U32(ctx, 31, 0x44B778u);
    ctx->pc = 0x44B774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B770u;
    // 0x44b774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449FB8u, 0x44B770u, 0x44B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B778u;
label_44b778:
    // 0x44b778: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x44B778u;
    {
        const bool branch_taken_0x44b778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b778) {
            ctx->pc = 0x44B77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B778u;
            // 0x44b77c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B888u;
            goto label_44b888;
        }
    }
    ctx->pc = 0x44B780u;
    // 0x44b780: 0xc1129d6  jal         func_44A758
    ctx->pc = 0x44B780u;
    SET_GPR_U32(ctx, 31, 0x44B788u);
    ctx->pc = 0x44B784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B780u;
    // 0x44b784: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44A758u, 0x44B780u, 0x44B788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B788u;
label_44b788:
    // 0x44b788: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x44B788u;
    {
        const bool branch_taken_0x44b788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b788) {
            ctx->pc = 0x44B78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B788u;
            // 0x44b78c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B888u;
            goto label_44b888;
        }
    }
    ctx->pc = 0x44B790u;
    // 0x44b790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b794: 0xc112b70  jal         func_44ADC0
    ctx->pc = 0x44B794u;
    SET_GPR_U32(ctx, 31, 0x44B79Cu);
    ctx->pc = 0x44B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B794u;
    // 0x44b798: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44ADC0u, 0x44B794u, 0x44B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B79Cu;
label_44b79c:
    // 0x44b79c: 0x5440003a  bnel        $v0, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x44B79Cu;
    {
        const bool branch_taken_0x44b79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b79c) {
            ctx->pc = 0x44B7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B79Cu;
            // 0x44b7a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B888u;
            goto label_44b888;
        }
    }
    ctx->pc = 0x44B7A4u;
    // 0x44b7a4: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x44b7a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b7a8: 0x11000032  beqz        $t0, . + 4 + (0x32 << 2)
    ctx->pc = 0x44B7A8u;
    {
        const bool branch_taken_0x44b7a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7A8u;
        // 0x44b7ac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7a8) {
            ctx->pc = 0x44B874u;
            goto label_44b874;
        }
    }
    ctx->pc = 0x44B7B0u;
    // 0x44b7b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x44b7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b7b4: 0x0  nop
    ctx->pc = 0x44b7b4u;
    // NOP
label_44b7b8:
    // 0x44b7b8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x44b7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b7bc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44b7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_44b7c0:
    // 0x44b7c0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44B7C0u;
    {
        const bool branch_taken_0x44b7c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7C0u;
        // 0x44b7c4: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7c0) {
            ctx->pc = 0x44B7E4u;
            goto label_44b7e4;
        }
    }
    ctx->pc = 0x44B7C8u;
label_44b7c8:
    // 0x44b7c8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x44b7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b7cc: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x44b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b7d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x44b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x44b7d4: 0x0  nop
    ctx->pc = 0x44b7d4u;
    // NOP
    // 0x44b7d8: 0x0  nop
    ctx->pc = 0x44b7d8u;
    // NOP
    // 0x44b7dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B7DCu;
    {
        const bool branch_taken_0x44b7dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7DCu;
        // 0x44b7e0: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7dc) {
            ctx->pc = 0x44B7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b7c8;
        }
    }
    ctx->pc = 0x44B7E4u;
label_44b7e4:
    // 0x44b7e4: 0x54a0fff6  bnel        $a1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x44B7E4u;
    {
        const bool branch_taken_0x44b7e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b7e4) {
            ctx->pc = 0x44B7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B7E4u;
            // 0x44b7e8: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b7c0;
        }
    }
    ctx->pc = 0x44B7ECu;
    // 0x44b7ec: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x44b7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x44b7f0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x44B7F0u;
    {
        const bool branch_taken_0x44b7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44B7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B7F0u;
        // 0x44b7f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b7f0) {
            ctx->pc = 0x44B814u;
            goto label_44b814;
        }
    }
    ctx->pc = 0x44B7F8u;
label_44b7f8:
    // 0x44b7f8: 0x63042  srl         $a2, $a2, 1
    ctx->pc = 0x44b7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x44b7fc: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x44b7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x44b800: 0x0  nop
    ctx->pc = 0x44b800u;
    // NOP
    // 0x44b804: 0x0  nop
    ctx->pc = 0x44b804u;
    // NOP
    // 0x44b808: 0x0  nop
    ctx->pc = 0x44b808u;
    // NOP
    // 0x44b80c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B80Cu;
    {
        const bool branch_taken_0x44b80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B80Cu;
        // 0x44b810: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b80c) {
            ctx->pc = 0x44B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b7f8;
        }
    }
    ctx->pc = 0x44B814u;
label_44b814:
    // 0x44b814: 0xea182b  sltu        $v1, $a3, $t2
    ctx->pc = 0x44b814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x44b818: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x44b818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x44b81c: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x44b81cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 2));
    // 0x44b820: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x44b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b824: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x44b824u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x44b828: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x44b828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x44b82c: 0x0  nop
    ctx->pc = 0x44b82cu;
    // NOP
label_44b830:
    // 0x44b830: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x44B830u;
    {
        const bool branch_taken_0x44b830 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44b830) {
            ctx->pc = 0x44B834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B830u;
            // 0x44b834: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B860u;
            goto label_44b860;
        }
    }
    ctx->pc = 0x44B838u;
    // 0x44b838: 0xe93004  sllv        $a2, $t1, $a3
    ctx->pc = 0x44b838u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x44b83c: 0x0  nop
    ctx->pc = 0x44b83cu;
    // NOP
label_44b840:
    // 0x44b840: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x44b840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x44b844: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x44b844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x44b848: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x44b848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x44b84c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x44b84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x44b850: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x44b850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x44b854: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x44B854u;
    {
        const bool branch_taken_0x44b854 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B854u;
        // 0x44b858: 0xac620008  sw          $v0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b854) {
            ctx->pc = 0x44B840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b840;
        }
    }
    ctx->pc = 0x44B85Cu;
    // 0x44b85c: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x44b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_44b860:
    // 0x44b860: 0x54a0fff3  bnel        $a1, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x44B860u;
    {
        const bool branch_taken_0x44b860 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x44b860) {
            ctx->pc = 0x44B864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x44B860u;
            // 0x44b864: 0x8ca40000  lw          $a0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44B830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b830;
        }
    }
    ctx->pc = 0x44B868u;
    // 0x44b868: 0x8d080008  lw          $t0, 0x8($t0)
    ctx->pc = 0x44b868u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x44b86c: 0x1500ffd2  bnez        $t0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x44B86Cu;
    {
        const bool branch_taken_0x44b86c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x44B870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B86Cu;
        // 0x44b870: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44b86c) {
            ctx->pc = 0x44B7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44b7b8;
        }
    }
    ctx->pc = 0x44B874u;
label_44b874:
    // 0x44b874: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x44b874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44b878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44b878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44b87c: 0xc112c6e  jal         func_44B1B8
    ctx->pc = 0x44B87Cu;
    SET_GPR_U32(ctx, 31, 0x44B884u);
    ctx->pc = 0x44B880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44B87Cu;
    // 0x44b880: 0xae0a000c  sw          $t2, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44B1B8u, 0x44B87Cu, 0x44B884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44B884u;
label_44b884:
    // 0x44b884: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x44b884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_44b888:
    // 0x44b888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44b888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44b88c: 0x3e00008  jr          $ra
    ctx->pc = 0x44B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44B88Cu;
        // 0x44b890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44B894u;
    // 0x44b894: 0x0  nop
    ctx->pc = 0x44b894u;
    // NOP
    ctx->pc = 0x44b898u;
}
