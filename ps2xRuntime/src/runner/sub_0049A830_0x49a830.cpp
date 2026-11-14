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

// Function: sub_0049A830
// Address: 0x49a830 - 0x49a8f8
void sub_0049A830_0x49a830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A830_0x49a830");
#endif

    switch (ctx->pc) {
        case 0x49a88cu: goto label_49a88c;
        case 0x49a8c0u: goto label_49a8c0;
        default: break;
    }

    ctx->pc = 0x49a830u;

    // 0x49a830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49a830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49a834: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x49a834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x49a838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49a838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49a83c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49a83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a840: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x49a840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x49a844: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x49A844u;
    {
        const bool branch_taken_0x49a844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A844u;
        // 0x49a848: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a844) {
            ctx->pc = 0x49A854u;
            goto label_49a854;
        }
    }
    ctx->pc = 0x49A84Cu;
    // 0x49a84c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x49A84Cu;
    {
        const bool branch_taken_0x49a84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A84Cu;
        // 0x49a850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a84c) {
            ctx->pc = 0x49A8E4u;
            goto label_49a8e4;
        }
    }
    ctx->pc = 0x49A854u;
label_49a854:
    // 0x49a854: 0x96020046  lhu         $v0, 0x46($s0)
    ctx->pc = 0x49a854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x49a858: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x49a858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x49a85c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x49A85Cu;
    {
        const bool branch_taken_0x49a85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49A860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A85Cu;
        // 0x49a860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a85c) {
            ctx->pc = 0x49A8D4u;
            goto label_49a8d4;
        }
    }
    ctx->pc = 0x49A864u;
    // 0x49a864: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x49A864u;
    {
        const bool branch_taken_0x49a864 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A864u;
        // 0x49a868: 0x3c090003  lui         $t1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a864) {
            ctx->pc = 0x49A8A0u;
            goto label_49a8a0;
        }
    }
    ctx->pc = 0x49A86Cu;
    // 0x49a86c: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x49a86cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x49a870: 0x96050046  lhu         $a1, 0x46($s0)
    ctx->pc = 0x49a870u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x49a874: 0x63702  srl         $a2, $a2, 28
    ctx->pc = 0x49a874u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x49a878: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49a878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a87c: 0xc23004  sllv        $a2, $v0, $a2
    ctx->pc = 0x49a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x49a880: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49a880u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a884: 0xc12aa26  jal         func_4AA898
    ctx->pc = 0x49A884u;
    SET_GPR_U32(ctx, 31, 0x49A88Cu);
    ctx->pc = 0x49A888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A884u;
    // 0x49a888: 0x35290809  ori         $t1, $t1, 0x809 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2057);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA898u, 0x49A884u, 0x49A88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A88Cu;
label_49a88c:
    // 0x49a88c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49a88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49a890: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x49a890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x49a894: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x49a894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x49a898: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x49A898u;
    {
        const bool branch_taken_0x49a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A898u;
        // 0x49a89c: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a898) {
            ctx->pc = 0x49A8D8u;
            goto label_49a8d8;
        }
    }
    ctx->pc = 0x49A8A0u;
label_49a8a0:
    // 0x49a8a0: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x49a8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x49a8a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a8a8: 0x96050046  lhu         $a1, 0x46($s0)
    ctx->pc = 0x49a8a8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 70)));
    // 0x49a8ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x49a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49a8b0: 0x63702  srl         $a2, $a2, 28
    ctx->pc = 0x49a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 28));
    // 0x49a8b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49a8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a8b8: 0xc12ad0c  jal         func_4AB430
    ctx->pc = 0x49A8B8u;
    SET_GPR_U32(ctx, 31, 0x49A8C0u);
    ctx->pc = 0x49A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A8B8u;
    // 0x49a8bc: 0xc23004  sllv        $a2, $v0, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB430u, 0x49A8B8u, 0x49A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A8C0u;
label_49a8c0:
    // 0x49a8c0: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x49a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x49a8c4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x49a8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x49a8c8: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x49a8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x49a8cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49A8CCu;
    {
        const bool branch_taken_0x49a8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A8CCu;
        // 0x49a8d0: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a8cc) {
            ctx->pc = 0x49A8D8u;
            goto label_49a8d8;
        }
    }
    ctx->pc = 0x49A8D4u;
label_49a8d4:
    // 0x49a8d4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x49a8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_49a8d8:
    // 0x49a8d8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x49a8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x49a8dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49a8dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49a8e0: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x49a8e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
label_49a8e4:
    // 0x49a8e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x49a8e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49a8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x49A8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A8ECu;
        // 0x49a8f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A8F4u;
    // 0x49a8f4: 0x0  nop
    ctx->pc = 0x49a8f4u;
    // NOP
    ctx->pc = 0x49a8f8u;
}
