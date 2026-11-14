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

// Function: sub_00418AF0
// Address: 0x418af0 - 0x418bb8
void sub_00418AF0_0x418af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418AF0_0x418af0");
#endif

    switch (ctx->pc) {
        case 0x418af0u: goto label_418af0;
        case 0x418af4u: goto label_418af4;
        case 0x418af8u: goto label_418af8;
        case 0x418afcu: goto label_418afc;
        case 0x418b00u: goto label_418b00;
        case 0x418b04u: goto label_418b04;
        case 0x418b08u: goto label_418b08;
        case 0x418b0cu: goto label_418b0c;
        case 0x418b10u: goto label_418b10;
        case 0x418b14u: goto label_418b14;
        case 0x418b18u: goto label_418b18;
        case 0x418b1cu: goto label_418b1c;
        case 0x418b20u: goto label_418b20;
        case 0x418b24u: goto label_418b24;
        case 0x418b28u: goto label_418b28;
        case 0x418b2cu: goto label_418b2c;
        case 0x418b30u: goto label_418b30;
        case 0x418b34u: goto label_418b34;
        case 0x418b38u: goto label_418b38;
        case 0x418b3cu: goto label_418b3c;
        case 0x418b40u: goto label_418b40;
        case 0x418b44u: goto label_418b44;
        case 0x418b48u: goto label_418b48;
        case 0x418b4cu: goto label_418b4c;
        case 0x418b50u: goto label_418b50;
        case 0x418b54u: goto label_418b54;
        case 0x418b58u: goto label_418b58;
        case 0x418b5cu: goto label_418b5c;
        case 0x418b60u: goto label_418b60;
        case 0x418b64u: goto label_418b64;
        case 0x418b68u: goto label_418b68;
        case 0x418b6cu: goto label_418b6c;
        case 0x418b70u: goto label_418b70;
        case 0x418b74u: goto label_418b74;
        case 0x418b78u: goto label_418b78;
        case 0x418b7cu: goto label_418b7c;
        case 0x418b80u: goto label_418b80;
        case 0x418b84u: goto label_418b84;
        case 0x418b88u: goto label_418b88;
        case 0x418b8cu: goto label_418b8c;
        case 0x418b90u: goto label_418b90;
        case 0x418b94u: goto label_418b94;
        case 0x418b98u: goto label_418b98;
        case 0x418b9cu: goto label_418b9c;
        case 0x418ba0u: goto label_418ba0;
        case 0x418ba4u: goto label_418ba4;
        case 0x418ba8u: goto label_418ba8;
        case 0x418bacu: goto label_418bac;
        case 0x418bb0u: goto label_418bb0;
        case 0x418bb4u: goto label_418bb4;
        default: break;
    }

    ctx->pc = 0x418af0u;

label_418af0:
    // 0x418af0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x418af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_418af4:
    // 0x418af4: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x418af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_418af8:
    // 0x418af8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x418af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_418afc:
    // 0x418afc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418b00:
    // 0x418b00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x418b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_418b04:
    // 0x418b04: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x418b04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
label_418b08:
    // 0x418b08: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x418b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_418b0c:
    // 0x418b0c: 0x2610e890  addiu       $s0, $s0, -0x1770
    ctx->pc = 0x418b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961296));
label_418b10:
    // 0x418b10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x418b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_418b14:
    // 0x418b14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418b14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418b18:
    // 0x418b18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_418b1c:
    // 0x418b1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x418b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418b20:
    // 0x418b20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x418b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_418b24:
    // 0x418b24: 0x40f809  jalr        $v0
label_418b28:
    if (ctx->pc == 0x418B28u) {
        ctx->pc = 0x418B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B24u;
        // 0x418b28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B2Cu;
        goto label_418b2c;
    }
    ctx->pc = 0x418B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418B2Cu);
        ctx->pc = 0x418B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B24u;
        // 0x418b28: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418B24u, 0x418B2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418B2Cu;
label_418b2c:
    // 0x418b2c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x418b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_418b30:
    // 0x418b30: 0x2613fff0  addiu       $s3, $s0, -0x10
    ctx->pc = 0x418b30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_418b34:
    // 0x418b34: 0x2484c8b0  addiu       $a0, $a0, -0x3750
    ctx->pc = 0x418b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
label_418b38:
    // 0x418b38: 0xc104ca6  jal         func_413298
label_418b3c:
    if (ctx->pc == 0x418B3Cu) {
        ctx->pc = 0x418B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B38u;
        // 0x418b3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B40u;
        goto label_418b40;
    }
    ctx->pc = 0x418B38u;
    SET_GPR_U32(ctx, 31, 0x418B40u);
    ctx->pc = 0x418B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418B38u;
    // 0x418b3c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413298u, 0x418B38u, 0x418B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418B40u;
label_418b40:
    // 0x418b40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x418b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_418b44:
    // 0x418b44: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x418b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_418b48:
    // 0x418b48: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x418b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_418b4c:
    // 0x418b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418b50:
    // 0x418b50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418b54:
    // 0x418b54: 0x40f809  jalr        $v0
label_418b58:
    if (ctx->pc == 0x418B58u) {
        ctx->pc = 0x418B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B54u;
        // 0x418b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B5Cu;
        goto label_418b5c;
    }
    ctx->pc = 0x418B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418B5Cu);
        ctx->pc = 0x418B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B54u;
        // 0x418b58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418B54u, 0x418B5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418B5Cu;
label_418b5c:
    // 0x418b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418b60:
    // 0x418b60: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_418b64:
    if (ctx->pc == 0x418B64u) {
        ctx->pc = 0x418B68u;
        goto label_418b68;
    }
    ctx->pc = 0x418B60u;
    {
        const bool branch_taken_0x418b60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x418b60) {
            ctx->pc = 0x418B88u;
            goto label_418b88;
        }
    }
    ctx->pc = 0x418B68u;
label_418b68:
    // 0x418b68: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418b6c:
    // 0x418b6c: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x418b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_418b70:
    // 0x418b70: 0xc1035f6  jal         func_40D7D8
label_418b74:
    if (ctx->pc == 0x418B74u) {
        ctx->pc = 0x418B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B70u;
        // 0x418b74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B78u;
        goto label_418b78;
    }
    ctx->pc = 0x418B70u;
    SET_GPR_U32(ctx, 31, 0x418B78u);
    ctx->pc = 0x418B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418B70u;
    // 0x418b74: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418B70u, 0x418B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418B78u;
label_418b78:
    // 0x418b78: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x418b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_418b7c:
    // 0x418b7c: 0xc103628  jal         func_40D8A0
label_418b80:
    if (ctx->pc == 0x418B80u) {
        ctx->pc = 0x418B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B7Cu;
        // 0x418b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B84u;
        goto label_418b84;
    }
    ctx->pc = 0x418B7Cu;
    SET_GPR_U32(ctx, 31, 0x418B84u);
    ctx->pc = 0x418B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418B7Cu;
    // 0x418b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418B7Cu, 0x418B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418B84u;
label_418b84:
    // 0x418b84: 0x0  nop
    ctx->pc = 0x418b84u;
    // NOP
label_418b88:
    // 0x418b88: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_418b8c:
    if (ctx->pc == 0x418B8Cu) {
        ctx->pc = 0x418B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B88u;
        // 0x418b8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418B90u;
        goto label_418b90;
    }
    ctx->pc = 0x418B88u;
    {
        const bool branch_taken_0x418b88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418B88u;
        // 0x418b8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418b88) {
            ctx->pc = 0x418B94u;
            goto label_418b94;
        }
    }
    ctx->pc = 0x418B90u;
label_418b90:
    // 0x418b90: 0xae620124  sw          $v0, 0x124($s3)
    ctx->pc = 0x418b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 2));
label_418b94:
    // 0x418b94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x418b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_418b98:
    // 0x418b98: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x418b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_418b9c:
    // 0x418b9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x418b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_418ba0:
    // 0x418ba0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x418ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_418ba4:
    // 0x418ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x418ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418ba8:
    // 0x418ba8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418bac:
    // 0x418bac: 0x3e00008  jr          $ra
label_418bb0:
    if (ctx->pc == 0x418BB0u) {
        ctx->pc = 0x418BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BACu;
        // 0x418bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418BB4u;
        goto label_418bb4;
    }
    ctx->pc = 0x418BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BACu;
        // 0x418bb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418BB4u;
label_418bb4:
    // 0x418bb4: 0x0  nop
    ctx->pc = 0x418bb4u;
    // NOP
    ctx->pc = 0x418bb8u;
}
