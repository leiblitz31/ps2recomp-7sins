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

// Function: sub_00389B50
// Address: 0x389b50 - 0x389c00
void sub_00389B50_0x389b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00389B50_0x389b50");
#endif

    switch (ctx->pc) {
        case 0x389b50u: goto label_389b50;
        case 0x389b54u: goto label_389b54;
        case 0x389b58u: goto label_389b58;
        case 0x389b5cu: goto label_389b5c;
        case 0x389b60u: goto label_389b60;
        case 0x389b64u: goto label_389b64;
        case 0x389b68u: goto label_389b68;
        case 0x389b6cu: goto label_389b6c;
        case 0x389b70u: goto label_389b70;
        case 0x389b74u: goto label_389b74;
        case 0x389b78u: goto label_389b78;
        case 0x389b7cu: goto label_389b7c;
        case 0x389b80u: goto label_389b80;
        case 0x389b84u: goto label_389b84;
        case 0x389b88u: goto label_389b88;
        case 0x389b8cu: goto label_389b8c;
        case 0x389b90u: goto label_389b90;
        case 0x389b94u: goto label_389b94;
        case 0x389b98u: goto label_389b98;
        case 0x389b9cu: goto label_389b9c;
        case 0x389ba0u: goto label_389ba0;
        case 0x389ba4u: goto label_389ba4;
        case 0x389ba8u: goto label_389ba8;
        case 0x389bacu: goto label_389bac;
        case 0x389bb0u: goto label_389bb0;
        case 0x389bb4u: goto label_389bb4;
        case 0x389bb8u: goto label_389bb8;
        case 0x389bbcu: goto label_389bbc;
        case 0x389bc0u: goto label_389bc0;
        case 0x389bc4u: goto label_389bc4;
        case 0x389bc8u: goto label_389bc8;
        case 0x389bccu: goto label_389bcc;
        case 0x389bd0u: goto label_389bd0;
        case 0x389bd4u: goto label_389bd4;
        case 0x389bd8u: goto label_389bd8;
        case 0x389bdcu: goto label_389bdc;
        case 0x389be0u: goto label_389be0;
        case 0x389be4u: goto label_389be4;
        case 0x389be8u: goto label_389be8;
        case 0x389becu: goto label_389bec;
        case 0x389bf0u: goto label_389bf0;
        case 0x389bf4u: goto label_389bf4;
        case 0x389bf8u: goto label_389bf8;
        case 0x389bfcu: goto label_389bfc;
        default: break;
    }

    ctx->pc = 0x389b50u;

label_389b50:
    // 0x389b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x389b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_389b54:
    // 0x389b54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x389b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_389b58:
    // 0x389b58: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x389b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_389b5c:
    // 0x389b5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x389b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389b60:
    // 0x389b60: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x389b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_389b64:
    // 0x389b64: 0x26530008  addiu       $s3, $s2, 0x8
    ctx->pc = 0x389b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_389b68:
    // 0x389b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_389b6c:
    // 0x389b6c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x389b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_389b70:
    // 0x389b70: 0x8e510008  lw          $s1, 0x8($s2)
    ctx->pc = 0x389b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_389b74:
    // 0x389b74: 0x12330010  beq         $s1, $s3, . + 4 + (0x10 << 2)
label_389b78:
    if (ctx->pc == 0x389B78u) {
        ctx->pc = 0x389B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B74u;
        // 0x389b78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B7Cu;
        goto label_389b7c;
    }
    ctx->pc = 0x389B74u;
    {
        const bool branch_taken_0x389b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x389B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B74u;
        // 0x389b78: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b74) {
            ctx->pc = 0x389BB8u;
            goto label_389bb8;
        }
    }
    ctx->pc = 0x389B7Cu;
label_389b7c:
    // 0x389b7c: 0x2630ffc0  addiu       $s0, $s1, -0x40
    ctx->pc = 0x389b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
label_389b80:
    // 0x389b80: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x389b80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_389b84:
    // 0x389b84: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x389b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_389b88:
    // 0x389b88: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_389b8c:
    if (ctx->pc == 0x389B8Cu) {
        ctx->pc = 0x389B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B88u;
        // 0x389b8c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B90u;
        goto label_389b90;
    }
    ctx->pc = 0x389B88u;
    {
        const bool branch_taken_0x389b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x389b88) {
            ctx->pc = 0x389B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x389B88u;
            // 0x389b8c: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389BACu;
            goto label_389bac;
        }
    }
    ctx->pc = 0x389B90u;
label_389b90:
    // 0x389b90: 0xc106784  jal         func_419E10
label_389b94:
    if (ctx->pc == 0x389B94u) {
        ctx->pc = 0x389B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B90u;
        // 0x389b94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389B98u;
        goto label_389b98;
    }
    ctx->pc = 0x389B90u;
    SET_GPR_U32(ctx, 31, 0x389B98u);
    ctx->pc = 0x389B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389B90u;
    // 0x389b94: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x389B90u, 0x389B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389B98u;
label_389b98:
    // 0x389b98: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x389b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_389b9c:
    // 0x389b9c: 0x40f809  jalr        $v0
label_389ba0:
    if (ctx->pc == 0x389BA0u) {
        ctx->pc = 0x389BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B9Cu;
        // 0x389ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389BA4u;
        goto label_389ba4;
    }
    ctx->pc = 0x389B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x389BA4u);
        ctx->pc = 0x389BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B9Cu;
        // 0x389ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389B9Cu, 0x389BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x389BA4u;
label_389ba4:
    // 0x389ba4: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x389ba4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_389ba8:
    // 0x389ba8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x389ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_389bac:
    // 0x389bac: 0x1633fff4  bne         $s1, $s3, . + 4 + (-0xC << 2)
label_389bb0:
    if (ctx->pc == 0x389BB0u) {
        ctx->pc = 0x389BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BACu;
        // 0x389bb0: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389BB4u;
        goto label_389bb4;
    }
    ctx->pc = 0x389BACu;
    {
        const bool branch_taken_0x389bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x389BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BACu;
        // 0x389bb0: 0x2630ffc0  addiu       $s0, $s1, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bac) {
            ctx->pc = 0x389B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389b80;
        }
    }
    ctx->pc = 0x389BB4u;
label_389bb4:
    // 0x389bb4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x389bb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_389bb8:
    // 0x389bb8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x389bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_389bbc:
    // 0x389bbc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x389bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_389bc0:
    // 0x389bc0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x389bc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_389bc4:
    // 0x389bc4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x389bc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_389bc8:
    // 0x389bc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x389bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_389bcc:
    // 0x389bcc: 0x3e00008  jr          $ra
label_389bd0:
    if (ctx->pc == 0x389BD0u) {
        ctx->pc = 0x389BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BCCu;
        // 0x389bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389BD4u;
        goto label_389bd4;
    }
    ctx->pc = 0x389BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BCCu;
        // 0x389bd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389BD4u;
label_389bd4:
    // 0x389bd4: 0x0  nop
    ctx->pc = 0x389bd4u;
    // NOP
label_389bd8:
    // 0x389bd8: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x389bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_389bdc:
    // 0x389bdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x389bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_389be0:
    // 0x389be0: 0x8ca60044  lw          $a2, 0x44($a1)
    ctx->pc = 0x389be0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_389be4:
    // 0x389be4: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x389be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
label_389be8:
    // 0x389be8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x389be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_389bec:
    // 0x389bec: 0x8ca40040  lw          $a0, 0x40($a1)
    ctx->pc = 0x389becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_389bf0:
    // 0x389bf0: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x389bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_389bf4:
    // 0x389bf4: 0x3e00008  jr          $ra
label_389bf8:
    if (ctx->pc == 0x389BF8u) {
        ctx->pc = 0x389BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BF4u;
        // 0x389bf8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x389BFCu;
        goto label_389bfc;
    }
    ctx->pc = 0x389BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BF4u;
        // 0x389bf8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389BFCu;
label_389bfc:
    // 0x389bfc: 0x0  nop
    ctx->pc = 0x389bfcu;
    // NOP
    ctx->pc = 0x389c00u;
}
