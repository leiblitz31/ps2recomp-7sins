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

// Function: sub_004A0B30
// Address: 0x4a0b30 - 0x4a0bb0
void sub_004A0B30_0x4a0b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0B30_0x4a0b30");
#endif

    switch (ctx->pc) {
        case 0x4a0b60u: goto label_4a0b60;
        case 0x4a0b74u: goto label_4a0b74;
        default: break;
    }

    ctx->pc = 0x4a0b30u;

    // 0x4a0b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4a0b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4a0b34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a0b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4a0b38: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4a0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x4a0b3c: 0x2492000c  addiu       $s2, $a0, 0xC
    ctx->pc = 0x4a0b3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4a0b40: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4a0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x4a0b44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0b48: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4a0b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x4a0b4c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x4a0b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x4a0b50: 0x1212000e  beq         $s0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x4A0B50u;
    {
        const bool branch_taken_0x4a0b50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x4A0B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B50u;
        // 0x4a0b54: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b50) {
            ctx->pc = 0x4A0B8Cu;
            goto label_4a0b8c;
        }
    }
    ctx->pc = 0x4A0B58u;
    // 0x4a0b58: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x4a0b58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4a0b5c: 0x0  nop
    ctx->pc = 0x4a0b5cu;
    // NOP
label_4a0b60:
    // 0x4a0b60: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a0b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4a0b64: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A0B64u;
    {
        const bool branch_taken_0x4a0b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a0b64) {
            ctx->pc = 0x4A0B68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0B64u;
            // 0x4a0b68: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B84u;
            goto label_4a0b84;
        }
    }
    ctx->pc = 0x4A0B6Cu;
    // 0x4a0b6c: 0xc12a3f8  jal         func_4A8FE0
    ctx->pc = 0x4A0B6Cu;
    SET_GPR_U32(ctx, 31, 0x4A0B74u);
    ctx->pc = 0x4A0B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0B6Cu;
    // 0x4a0b70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FE0u, 0x4A0B6Cu, 0x4A0B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0B74u;
label_4a0b74:
    // 0x4a0b74: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0B74u;
    {
        const bool branch_taken_0x4a0b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0b74) {
            ctx->pc = 0x4A0B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0B74u;
            // 0x4a0b78: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B84u;
            goto label_4a0b84;
        }
    }
    ctx->pc = 0x4A0B7Cu;
    // 0x4a0b7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0B7Cu;
    {
        const bool branch_taken_0x4a0b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0B7Cu;
        // 0x4a0b80: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0b7c) {
            ctx->pc = 0x4A0B90u;
            goto label_4a0b90;
        }
    }
    ctx->pc = 0x4A0B84u;
label_4a0b84:
    // 0x4a0b84: 0x5612fff6  bnel        $s0, $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A0B84u;
    {
        const bool branch_taken_0x4a0b84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x4a0b84) {
            ctx->pc = 0x4A0B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0B84u;
            // 0x4a0b88: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0b60;
        }
    }
    ctx->pc = 0x4A0B8Cu;
label_4a0b8c:
    // 0x4a0b8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4a0b8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a0b90:
    // 0x4a0b90: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4a0b90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0b94: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4a0b94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0b98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a0b98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0b9c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4a0b9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0BA4u;
        // 0x4a0ba8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0BACu;
    // 0x4a0bac: 0x0  nop
    ctx->pc = 0x4a0bacu;
    // NOP
    ctx->pc = 0x4a0bb0u;
}
