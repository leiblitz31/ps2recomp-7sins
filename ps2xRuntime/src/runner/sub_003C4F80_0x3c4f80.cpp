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

// Function: sub_003C4F80
// Address: 0x3c4f80 - 0x3c5028
void sub_003C4F80_0x3c4f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C4F80_0x3c4f80");
#endif

    switch (ctx->pc) {
        case 0x3c4fc0u: goto label_3c4fc0;
        case 0x3c4fc8u: goto label_3c4fc8;
        case 0x3c4fe8u: goto label_3c4fe8;
        case 0x3c5004u: goto label_3c5004;
        default: break;
    }

    ctx->pc = 0x3c4f80u;

    // 0x3c4f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c4f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c4f84: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3c4f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3c4f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c4f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c4f8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c4f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4f90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c4f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c4f94: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x3c4f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3c4f98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C4F98u;
    {
        const bool branch_taken_0x3c4f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4F98u;
        // 0x3c4f9c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4f98) {
            ctx->pc = 0x3C4FACu;
            goto label_3c4fac;
        }
    }
    ctx->pc = 0x3C4FA0u;
    // 0x3c4fa0: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3c4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3c4fa4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C4FA4u;
    {
        const bool branch_taken_0x3c4fa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C4FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FA4u;
        // 0x3c4fa8: 0x8f82bd90  lw          $v0, -0x4270($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4fa4) {
            ctx->pc = 0x3C4FB4u;
            goto label_3c4fb4;
        }
    }
    ctx->pc = 0x3C4FACu;
label_3c4fac:
    // 0x3c4fac: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3C4FACu;
    {
        const bool branch_taken_0x3c4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FACu;
        // 0x3c4fb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4fac) {
            ctx->pc = 0x3C5010u;
            goto label_3c5010;
        }
    }
    ctx->pc = 0x3C4FB4u;
label_3c4fb4:
    // 0x3c4fb4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C4FB4u;
    {
        const bool branch_taken_0x3c4fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C4FB4u;
        // 0x3c4fb8: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c4fb4) {
            ctx->pc = 0x3C4FD4u;
            goto label_3c4fd4;
        }
    }
    ctx->pc = 0x3C4FBCu;
    // 0x3c4fbc: 0x0  nop
    ctx->pc = 0x3c4fbcu;
    // NOP
label_3c4fc0:
    // 0x3c4fc0: 0xc0bf7c0  jal         func_2FDF00
    ctx->pc = 0x3C4FC0u;
    SET_GPR_U32(ctx, 31, 0x3C4FC8u);
    ctx->pc = 0x3C4FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FC0u;
    // 0x3c4fc4: 0x8f84bd90  lw          $a0, -0x4270($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDF00u, 0x3C4FC0u, 0x3C4FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C4FC8u;
label_3c4fc8:
    // 0x3c4fc8: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x3C4FC8u;
    {
        const bool branch_taken_0x3c4fc8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3c4fc8) {
            ctx->pc = 0x3C4FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4fc0;
        }
    }
    ctx->pc = 0x3C4FD0u;
    // 0x3c4fd0: 0xaf80bd90  sw          $zero, -0x4270($gp)
    ctx->pc = 0x3c4fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950288), GPR_U32(ctx, 0));
label_3c4fd4:
    // 0x3c4fd4: 0x92020064  lbu         $v0, 0x64($s0)
    ctx->pc = 0x3c4fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3c4fd8: 0x2623e140  addiu       $v1, $s1, -0x1EC0
    ctx->pc = 0x3c4fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959424));
    // 0x3c4fdc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3c4fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3c4fe0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x3c4fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x3c4fe4: 0x0  nop
    ctx->pc = 0x3c4fe4u;
    // NOP
label_3c4fe8:
    // 0x3c4fe8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3c4fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c4fec: 0x2625e140  addiu       $a1, $s1, -0x1EC0
    ctx->pc = 0x3c4fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294959424));
    // 0x3c4ff0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3c4ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3c4ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c4ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ff8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3c4ff8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c4ffc: 0xc0c03aa  jal         func_300EA8
    ctx->pc = 0x3C4FFCu;
    SET_GPR_U32(ctx, 31, 0x3C5004u);
    ctx->pc = 0x3C5000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C4FFCu;
    // 0x3c5000: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x300EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x300EA8u, 0x3C4FFCu, 0x3C5004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C5004u;
label_3c5004:
    // 0x3c5004: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3C5004u;
    {
        const bool branch_taken_0x3c5004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C5004u;
        // 0x3c5008: 0xaf82bd90  sw          $v0, -0x4270($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c5004) {
            ctx->pc = 0x3C4FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c4fe8;
        }
    }
    ctx->pc = 0x3C500Cu;
    // 0x3c500c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c5010:
    // 0x3c5010: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3c5010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c5014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c5014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c5018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c501c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C501Cu;
        // 0x3c5020: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C5024u;
    // 0x3c5024: 0x0  nop
    ctx->pc = 0x3c5024u;
    // NOP
    ctx->pc = 0x3c5028u;
}
