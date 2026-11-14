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

// Function: sub_00412B08
// Address: 0x412b08 - 0x412bb0
void sub_00412B08_0x412b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412B08_0x412b08");
#endif

    switch (ctx->pc) {
        case 0x412b34u: goto label_412b34;
        case 0x412b3cu: goto label_412b3c;
        case 0x412b50u: goto label_412b50;
        case 0x412b68u: goto label_412b68;
        case 0x412b78u: goto label_412b78;
        default: break;
    }

    ctx->pc = 0x412b08u;

    // 0x412b08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x412b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x412b0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x412b0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b10: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x412b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x412b14: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x412b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x412b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x412b1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x412b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x412b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x412b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x412b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b2c: 0xc103322  jal         func_40CC88
    ctx->pc = 0x412B2Cu;
    SET_GPR_U32(ctx, 31, 0x412B34u);
    ctx->pc = 0x412B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412B2Cu;
    // 0x412b30: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x412B2Cu, 0x412B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412B34u;
label_412b34:
    // 0x412b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x412B34u;
    {
        const bool branch_taken_0x412b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B34u;
        // 0x412b38: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b34) {
            ctx->pc = 0x412B44u;
            goto label_412b44;
        }
    }
    ctx->pc = 0x412B3Cu;
label_412b3c:
    // 0x412b3c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x412B3Cu;
    {
        const bool branch_taken_0x412b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B3Cu;
        // 0x412b40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b3c) {
            ctx->pc = 0x412B98u;
            goto label_412b98;
        }
    }
    ctx->pc = 0x412B44u;
label_412b44:
    // 0x412b44: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x412B44u;
    {
        const bool branch_taken_0x412b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B44u;
        // 0x412b48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b44) {
            ctx->pc = 0x412B98u;
            goto label_412b98;
        }
    }
    ctx->pc = 0x412B4Cu;
    // 0x412b4c: 0x0  nop
    ctx->pc = 0x412b4cu;
    // NOP
label_412b50:
    // 0x412b50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x412b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x412b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b58: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x412b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x412b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x412b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412b60: 0xc103490  jal         func_40D240
    ctx->pc = 0x412B60u;
    SET_GPR_U32(ctx, 31, 0x412B68u);
    ctx->pc = 0x412B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412B60u;
    // 0x412b64: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D240u, 0x412B60u, 0x412B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412B68u;
label_412b68:
    // 0x412b68: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x412B68u;
    {
        const bool branch_taken_0x412b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B68u;
        // 0x412b6c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b68) {
            ctx->pc = 0x412B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412b3c;
        }
    }
    ctx->pc = 0x412B70u;
    // 0x412b70: 0xc1048ec  jal         func_4123B0
    ctx->pc = 0x412B70u;
    SET_GPR_U32(ctx, 31, 0x412B78u);
    ctx->pc = 0x412B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412B70u;
    // 0x412b74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4123B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4123B0u, 0x412B70u, 0x412B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412B78u;
label_412b78:
    // 0x412b78: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x412B78u;
    {
        const bool branch_taken_0x412b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x412B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B78u;
        // 0x412b7c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b78) {
            ctx->pc = 0x412B3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412b3c;
        }
    }
    ctx->pc = 0x412B80u;
    // 0x412b80: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x412b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x412b84: 0x2442fff4  addiu       $v0, $v0, -0xC
    ctx->pc = 0x412b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x412b88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x412b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x412b8c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x412B8Cu;
    {
        const bool branch_taken_0x412b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412B8Cu;
        // 0x412b90: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412b8c) {
            ctx->pc = 0x412B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412b50;
        }
    }
    ctx->pc = 0x412B94u;
    // 0x412b94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x412b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_412b98:
    // 0x412b98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x412b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x412b9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x412b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x412ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x412ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x412ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x412BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412BA4u;
        // 0x412ba8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412BACu;
    // 0x412bac: 0x0  nop
    ctx->pc = 0x412bacu;
    // NOP
    ctx->pc = 0x412bb0u;
}
