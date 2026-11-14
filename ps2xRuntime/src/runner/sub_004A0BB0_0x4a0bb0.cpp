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

// Function: sub_004A0BB0
// Address: 0x4a0bb0 - 0x4a0ca0
void sub_004A0BB0_0x4a0bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0BB0_0x4a0bb0");
#endif

    switch (ctx->pc) {
        case 0x4a0be0u: goto label_4a0be0;
        case 0x4a0bf4u: goto label_4a0bf4;
        case 0x4a0c38u: goto label_4a0c38;
        case 0x4a0c58u: goto label_4a0c58;
        case 0x4a0c90u: goto label_4a0c90;
        default: break;
    }

    ctx->pc = 0x4a0bb0u;

    // 0x4a0bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a0bb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a0bb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a0bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a0bbc: 0x2492000c  addiu       $s2, $a0, 0xC
    ctx->pc = 0x4a0bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4a0bc0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a0bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a0bc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0bc8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a0bcc: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4a0bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a0bd0: 0x1212000c  beq         $s0, $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x4A0BD0u;
    {
        const bool branch_taken_0x4a0bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BD0u;
        // 0x4a0bd4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0bd0) {
            ctx->pc = 0x4A0C04u;
            goto label_4a0c04;
        }
    }
    ctx->pc = 0x4A0BD8u;
    // 0x4a0bd8: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4a0bd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a0bdc: 0x0  nop
    ctx->pc = 0x4a0bdcu;
    // NOP
label_4a0be0:
    // 0x4a0be0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4a0be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a0be4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A0BE4u;
    {
        const bool branch_taken_0x4a0be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BE4u;
        // 0x4a0be8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0be4) {
            ctx->pc = 0x4A0BFCu;
            goto label_4a0bfc;
        }
    }
    ctx->pc = 0x4A0BECu;
    // 0x4a0bec: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A0BECu;
    SET_GPR_U32(ctx, 31, 0x4A0BF4u);
    ctx->pc = 0x4A0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0BECu;
    // 0x4a0bf0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A0BECu, 0x4A0BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0BF4u;
label_4a0bf4:
    // 0x4a0bf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0BF4u;
    {
        const bool branch_taken_0x4a0bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BF4u;
        // 0x4a0bf8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0bf4) {
            ctx->pc = 0x4A0C08u;
            goto label_4a0c08;
        }
    }
    ctx->pc = 0x4A0BFCu;
label_4a0bfc:
    // 0x4a0bfc: 0x5612fff8  bnel        $s0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A0BFCu;
    {
        const bool branch_taken_0x4a0bfc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x4a0bfc) {
            ctx->pc = 0x4A0C00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0BFCu;
            // 0x4a0c00: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0be0;
        }
    }
    ctx->pc = 0x4A0C04u;
label_4a0c04:
    // 0x4a0c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a0c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0c08:
    // 0x4a0c08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a0c08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0c0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a0c0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0c10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0c10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0c14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a0c14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C1Cu;
        // 0x4a0c20: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C24u;
    // 0x4a0c24: 0x0  nop
    ctx->pc = 0x4a0c24u;
    // NOP
    // 0x4a0c28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a0c2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0c30: 0xc12ab84  jal         func_4AAE10
    ctx->pc = 0x4A0C30u;
    SET_GPR_U32(ctx, 31, 0x4A0C38u);
    ctx->pc = 0x4A0C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0C30u;
    // 0x4a0c34: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE10u, 0x4A0C30u, 0x4A0C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0C38u;
label_4a0c38:
    // 0x4a0c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C3Cu;
        // 0x4a0c40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C44u;
    // 0x4a0c44: 0x0  nop
    ctx->pc = 0x4a0c44u;
    // NOP
    // 0x4a0c48: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x4a0c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4a0c4c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x4a0c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a0c50: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A0C50u;
    {
        const bool branch_taken_0x4a0c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4A0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C50u;
        // 0x4a0c54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c50) {
            ctx->pc = 0x4A0C74u;
            goto label_4a0c74;
        }
    }
    ctx->pc = 0x4A0C58u;
label_4a0c58:
    // 0x4a0c58: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4a0c5c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0C5Cu;
    {
        const bool branch_taken_0x4a0c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4a0c5c) {
            ctx->pc = 0x4A0C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0C5Cu;
            // 0x4a0c60: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0C6Cu;
            goto label_4a0c6c;
        }
    }
    ctx->pc = 0x4A0C64u;
    // 0x4a0c64: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C64u;
        // 0x4a0c68: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C6Cu;
label_4a0c6c:
    // 0x4a0c6c: 0x1466fffa  bne         $v1, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4A0C6Cu;
    {
        const bool branch_taken_0x4a0c6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x4A0C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C6Cu;
        // 0x4a0c70: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c6c) {
            ctx->pc = 0x4A0C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0c58;
        }
    }
    ctx->pc = 0x4A0C74u;
label_4a0c74:
    // 0x4a0c74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a0c78: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C78u;
        // 0x4a0c7c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C80u;
    // 0x4a0c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a0c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0c88: 0xc12abbe  jal         func_4AAEF8
    ctx->pc = 0x4A0C88u;
    SET_GPR_U32(ctx, 31, 0x4A0C90u);
    ctx->pc = 0x4A0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0C88u;
    // 0x4a0c8c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAEF8u, 0x4A0C88u, 0x4A0C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0C90u;
label_4a0c90:
    // 0x4a0c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0c94: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C94u;
        // 0x4a0c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0C9Cu;
    // 0x4a0c9c: 0x0  nop
    ctx->pc = 0x4a0c9cu;
    // NOP
    ctx->pc = 0x4a0ca0u;
}
