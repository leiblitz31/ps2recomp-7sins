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

// Function: sub_004AAC10
// Address: 0x4aac10 - 0x4aacb0
void sub_004AAC10_0x4aac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AAC10_0x4aac10");
#endif

    switch (ctx->pc) {
        case 0x4aac38u: goto label_4aac38;
        case 0x4aac54u: goto label_4aac54;
        case 0x4aac8cu: goto label_4aac8c;
        case 0x4aac9cu: goto label_4aac9c;
        default: break;
    }

    ctx->pc = 0x4aac10u;

    // 0x4aac10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4aac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4aac14: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4aac14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x4aac18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aac18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aac1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4aac1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aac20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aac20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aac24: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x4aac24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4aac28: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4aac28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aac2c: 0x50d1000d  beql        $a2, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x4AAC2Cu;
    {
        const bool branch_taken_0x4aac2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 17));
        if (branch_taken_0x4aac2c) {
            ctx->pc = 0x4AAC30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAC2Cu;
            // 0x4aac30: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAC64u;
            goto label_4aac64;
        }
    }
    ctx->pc = 0x4AAC34u;
    // 0x4aac34: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4aac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4aac38:
    // 0x4aac38: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4aac38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aac3c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x4aac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aac40: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4aac40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4aac44: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4aac44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aac48: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4aac48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4aac4c: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AAC4Cu;
    SET_GPR_U32(ctx, 31, 0x4AAC54u);
    ctx->pc = 0x4AAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAC4Cu;
    // 0x4aac50: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AAC4Cu, 0x4AAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAC54u;
label_4aac54:
    // 0x4aac54: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x4aac54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x4aac58: 0x54d1fff7  bnel        $a2, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AAC58u;
    {
        const bool branch_taken_0x4aac58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 17));
        if (branch_taken_0x4aac58) {
            ctx->pc = 0x4AAC5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAC58u;
            // 0x4aac5c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AAC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4aac38;
        }
    }
    ctx->pc = 0x4AAC60u;
    // 0x4aac60: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4aac60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4aac64:
    // 0x4aac64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4aac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4aac68: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4AAC68u;
    {
        const bool branch_taken_0x4aac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aac68) {
            ctx->pc = 0x4AAC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AAC68u;
            // 0x4aac6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AACA0u;
            goto label_4aaca0;
        }
    }
    ctx->pc = 0x4AAC70u;
    // 0x4aac70: 0x8f84b898  lw          $a0, -0x4768($gp)
    ctx->pc = 0x4aac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949016)));
    // 0x4aac74: 0x10900003  beq         $a0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AAC74u;
    {
        const bool branch_taken_0x4aac74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        if (branch_taken_0x4aac74) {
            ctx->pc = 0x4AAC84u;
            goto label_4aac84;
        }
    }
    ctx->pc = 0x4AAC7Cu;
    // 0x4aac7c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AAC7Cu;
    {
        const bool branch_taken_0x4aac7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aac7c) {
            ctx->pc = 0x4AAC94u;
            goto label_4aac94;
        }
    }
    ctx->pc = 0x4AAC84u;
label_4aac84:
    // 0x4aac84: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4AAC84u;
    SET_GPR_U32(ctx, 31, 0x4AAC8Cu);
    ctx->pc = 0x4AAC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAC84u;
    // 0x4aac88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4AAC84u, 0x4AAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAC8Cu;
label_4aac8c:
    // 0x4aac8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AAC8Cu;
    {
        const bool branch_taken_0x4aac8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AAC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AAC8Cu;
        // 0x4aac90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aac8c) {
            ctx->pc = 0x4AACA0u;
            goto label_4aaca0;
        }
    }
    ctx->pc = 0x4AAC94u;
label_4aac94:
    // 0x4aac94: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x4AAC94u;
    SET_GPR_U32(ctx, 31, 0x4AAC9Cu);
    ctx->pc = 0x4AAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AAC94u;
    // 0x4aac98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x4AAC94u, 0x4AAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AAC9Cu;
label_4aac9c:
    // 0x4aac9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4aac9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4aaca0:
    // 0x4aaca0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aaca0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aaca4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4aaca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aaca8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AACA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AACA8u;
        // 0x4aacac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AACA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AACB0u;
}
