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

// Function: sub_003C0A98
// Address: 0x3c0a98 - 0x3c0b98
void sub_003C0A98_0x3c0a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0A98_0x3c0a98");
#endif

    switch (ctx->pc) {
        case 0x3c0ae8u: goto label_3c0ae8;
        case 0x3c0af8u: goto label_3c0af8;
        case 0x3c0b0cu: goto label_3c0b0c;
        case 0x3c0b14u: goto label_3c0b14;
        case 0x3c0b34u: goto label_3c0b34;
        case 0x3c0b64u: goto label_3c0b64;
        default: break;
    }

    ctx->pc = 0x3c0a98u;

    // 0x3c0a98: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c0a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3c0a9c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3c0a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3c0aa0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c0aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3c0aa4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c0aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0aa8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3c0aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3c0aac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3c0aacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0ab0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3c0ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3c0ab4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3c0ab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0ab8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3c0ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3c0abc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3c0abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3c0ac0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3c0ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3c0ac4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3c0ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3c0ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c0acc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x3c0accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3c0ad0: 0x8ed50010  lw          $s5, 0x10($s6)
    ctx->pc = 0x3c0ad0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x3c0ad4: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3C0AD4u;
    {
        const bool branch_taken_0x3c0ad4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C0AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AD4u;
        // 0x3c0ad8: 0x8ed70014  lw          $s7, 0x14($s6) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ad4) {
            ctx->pc = 0x3C0B54u;
            goto label_3c0b54;
        }
    }
    ctx->pc = 0x3C0ADCu;
    // 0x3c0adc: 0x26b30008  addiu       $s3, $s5, 0x8
    ctx->pc = 0x3c0adcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3c0ae0: 0x26b20004  addiu       $s2, $s5, 0x4
    ctx->pc = 0x3c0ae0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x3c0ae4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3c0ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c0ae8:
    // 0x3c0ae8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0aec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0af0: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3C0AF0u;
    SET_GPR_U32(ctx, 31, 0x3C0AF8u);
    ctx->pc = 0x3C0AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0AF0u;
    // 0x3c0af4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3C0AF0u, 0x3C0AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0AF8u;
label_3c0af8:
    // 0x3c0af8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C0AF8u;
    {
        const bool branch_taken_0x3c0af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AF8u;
        // 0x3c0afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0af8) {
            ctx->pc = 0x3C0B14u;
            goto label_3c0b14;
        }
    }
    ctx->pc = 0x3C0B00u;
    // 0x3c0b00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3c0b00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b04: 0xc10344a  jal         func_40D128
    ctx->pc = 0x3C0B04u;
    SET_GPR_U32(ctx, 31, 0x3C0B0Cu);
    ctx->pc = 0x3C0B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B04u;
    // 0x3c0b08: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D128u, 0x3C0B04u, 0x3C0B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B0Cu;
label_3c0b0c:
    // 0x3c0b0c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0B0Cu;
    {
        const bool branch_taken_0x3c0b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b0c) {
            ctx->pc = 0x3C0B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0B0Cu;
            // 0x3c0b10: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0B1Cu;
            goto label_3c0b1c;
        }
    }
    ctx->pc = 0x3C0B14u;
label_3c0b14:
    // 0x3c0b14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C0B14u;
    {
        const bool branch_taken_0x3c0b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B14u;
        // 0x3c0b18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b14) {
            ctx->pc = 0x3C0B68u;
            goto label_3c0b68;
        }
    }
    ctx->pc = 0x3C0B1Cu;
label_3c0b1c:
    // 0x3c0b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3c0b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b24: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3c0b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3c0b28: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x3c0b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3c0b2c: 0xc103440  jal         func_40D100
    ctx->pc = 0x3C0B2Cu;
    SET_GPR_U32(ctx, 31, 0x3C0B34u);
    ctx->pc = 0x3C0B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B2Cu;
    // 0x3c0b30: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x3C0B2Cu, 0x3C0B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B34u;
label_3c0b34:
    // 0x3c0b34: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3C0B34u;
    {
        const bool branch_taken_0x3c0b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B34u;
        // 0x3c0b38: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b34) {
            ctx->pc = 0x3C0B14u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0b14;
        }
    }
    ctx->pc = 0x3C0B3Cu;
    // 0x3c0b3c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x3c0b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x3c0b40: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3c0b40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x3c0b44: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3c0b44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x3c0b48: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x3c0b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3c0b4c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x3C0B4Cu;
    {
        const bool branch_taken_0x3c0b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B4Cu;
        // 0x3c0b50: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b4c) {
            ctx->pc = 0x3C0AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0ae8;
        }
    }
    ctx->pc = 0x3C0B54u;
label_3c0b54:
    // 0x3c0b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3c0b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b5c: 0xc10341a  jal         func_40D068
    ctx->pc = 0x3C0B5Cu;
    SET_GPR_U32(ctx, 31, 0x3C0B64u);
    ctx->pc = 0x3C0B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B5Cu;
    // 0x3c0b60: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x3C0B5Cu, 0x3C0B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B64u;
label_3c0b64:
    // 0x3c0b64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c0b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c0b68:
    // 0x3c0b68: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3c0b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3c0b6c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3c0b6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3c0b70: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3c0b70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c0b74: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3c0b74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0b78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c0b78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c0b7c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3c0b7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c0b80: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3c0b80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c0b84: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3c0b84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0b88: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0b8c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0B8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B8Cu;
        // 0x3c0b90: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0B8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0B94u;
    // 0x3c0b94: 0x0  nop
    ctx->pc = 0x3c0b94u;
    // NOP
    ctx->pc = 0x3c0b98u;
}
