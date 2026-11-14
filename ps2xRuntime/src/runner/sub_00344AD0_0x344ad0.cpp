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

// Function: sub_00344AD0
// Address: 0x344ad0 - 0x344bb8
void sub_00344AD0_0x344ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344AD0_0x344ad0");
#endif

    switch (ctx->pc) {
        case 0x344b38u: goto label_344b38;
        case 0x344b40u: goto label_344b40;
        case 0x344b44u: goto label_344b44;
        default: break;
    }

    ctx->pc = 0x344ad0u;

    // 0x344ad0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x344ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x344ad4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344AD4u;
    {
        const bool branch_taken_0x344ad4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x344AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AD4u;
        // 0x344ad8: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ad4) {
            ctx->pc = 0x344AE4u;
            goto label_344ae4;
        }
    }
    ctx->pc = 0x344ADCu;
    // 0x344adc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x344adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x344ae0: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x344ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_344ae4:
    // 0x344ae4: 0x3e00008  jr          $ra
    ctx->pc = 0x344AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AE4u;
        // 0x344ae8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344AE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344AECu;
    // 0x344aec: 0x0  nop
    ctx->pc = 0x344aecu;
    // NOP
    // 0x344af0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x344AF0u;
    {
        const bool branch_taken_0x344af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x344af0) {
            ctx->pc = 0x344AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344AF0u;
            // 0x344af4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344B00u;
            goto label_344b00;
        }
    }
    ctx->pc = 0x344AF8u;
    // 0x344af8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x344AF8u;
    {
        const bool branch_taken_0x344af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344AF8u;
        // 0x344afc: 0xaca50004  sw          $a1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344af8) {
            ctx->pc = 0x344B08u;
            goto label_344b08;
        }
    }
    ctx->pc = 0x344B00u;
label_344b00:
    // 0x344b00: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x344b00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x344b04: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x344b04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_344b08:
    // 0x344b08: 0x3e00008  jr          $ra
    ctx->pc = 0x344B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B08u;
        // 0x344b0c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B10u;
    // 0x344b10: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x344b10u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b14: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x344b14u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b18: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x344b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x344b1c: 0x14580024  bne         $v0, $t8, . + 4 + (0x24 << 2)
    ctx->pc = 0x344B1Cu;
    {
        const bool branch_taken_0x344b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 24));
        ctx->pc = 0x344B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B1Cu;
        // 0x344b20: 0x240d0001  addiu       $t5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b1c) {
            ctx->pc = 0x344BB0u;
            goto label_344bb0;
        }
    }
    ctx->pc = 0x344B24u;
    // 0x344b24: 0x1b000022  blez        $t8, . + 4 + (0x22 << 2)
    ctx->pc = 0x344B24u;
    {
        const bool branch_taken_0x344b24 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x344B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B24u;
        // 0x344b28: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b24) {
            ctx->pc = 0x344BB0u;
            goto label_344bb0;
        }
    }
    ctx->pc = 0x344B2Cu;
    // 0x344b2c: 0x300782d  daddu       $t7, $t8, $zero
    ctx->pc = 0x344b2cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b30: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x344b30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344b34: 0x0  nop
    ctx->pc = 0x344b34u;
    // NOP
label_344b38:
    // 0x344b38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x344B38u;
    {
        const bool branch_taken_0x344b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B38u;
        // 0x344b3c: 0x256e0001  addiu       $t6, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b38) {
            ctx->pc = 0x344B44u;
            goto label_344b44;
        }
    }
    ctx->pc = 0x344B40u;
label_344b40:
    // 0x344b40: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x344b40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_344b44:
    // 0x344b44: 0x11a00014  beqz        $t5, . + 4 + (0x14 << 2)
    ctx->pc = 0x344B44u;
    {
        const bool branch_taken_0x344b44 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B44u;
        // 0x344b48: 0x14f102a  slt         $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b44) {
            ctx->pc = 0x344B98u;
            goto label_344b98;
        }
    }
    ctx->pc = 0x344B4Cu;
    // 0x344b4c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x344B4Cu;
    {
        const bool branch_taken_0x344b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B4Cu;
        // 0x344b50: 0xb4080  sll         $t0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b4c) {
            ctx->pc = 0x344B98u;
            goto label_344b98;
        }
    }
    ctx->pc = 0x344B54u;
    // 0x344b54: 0x8d830018  lw          $v1, 0x18($t4)
    ctx->pc = 0x344b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x344b58: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x344b58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x344b5c: 0x1062021  addu        $a0, $t0, $a2
    ctx->pc = 0x344b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x344b60: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x344b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x344b64: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x344b64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x344b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344b6c: 0x54a2fff5  bnel        $a1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x344B6Cu;
    {
        const bool branch_taken_0x344b6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x344b6c) {
            ctx->pc = 0x344B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344B6Cu;
            // 0x344b70: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344B44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344b44;
        }
    }
    ctx->pc = 0x344B74u;
    // 0x344b74: 0x8d830020  lw          $v1, 0x20($t4)
    ctx->pc = 0x344b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 32)));
    // 0x344b78: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x344b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x344b7c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x344b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344b80: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x344b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x344b84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x344b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x344b88: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x344B88u;
    {
        const bool branch_taken_0x344b88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x344B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B88u;
        // 0x344b8c: 0x14f102a  slt         $v0, $t2, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b88) {
            ctx->pc = 0x344B98u;
            goto label_344b98;
        }
    }
    ctx->pc = 0x344B90u;
    // 0x344b90: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x344B90u;
    {
        const bool branch_taken_0x344b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B90u;
        // 0x344b94: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b90) {
            ctx->pc = 0x344B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344b40;
        }
    }
    ctx->pc = 0x344B98u;
label_344b98:
    // 0x344b98: 0x2680a  movz        $t5, $zero, $v0
    ctx->pc = 0x344b98u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 0));
    // 0x344b9c: 0x11a00004  beqz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x344B9Cu;
    {
        const bool branch_taken_0x344b9c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x344BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B9Cu;
        // 0x344ba0: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b9c) {
            ctx->pc = 0x344BB0u;
            goto label_344bb0;
        }
    }
    ctx->pc = 0x344BA4u;
    // 0x344ba4: 0x1d8102a  slt         $v0, $t6, $t8
    ctx->pc = 0x344ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 24)) ? 1 : 0);
    // 0x344ba8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x344BA8u;
    {
        const bool branch_taken_0x344ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BA8u;
        // 0x344bac: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ba8) {
            ctx->pc = 0x344B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_344b38;
        }
    }
    ctx->pc = 0x344BB0u;
label_344bb0:
    // 0x344bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x344BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344BB0u;
        // 0x344bb4: 0x1a0102d  daddu       $v0, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344BB8u;
}
