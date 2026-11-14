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

// Function: sub_00418BB8
// Address: 0x418bb8 - 0x418cc8
void sub_00418BB8_0x418bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00418BB8_0x418bb8");
#endif

    switch (ctx->pc) {
        case 0x418bb8u: goto label_418bb8;
        case 0x418bbcu: goto label_418bbc;
        case 0x418bc0u: goto label_418bc0;
        case 0x418bc4u: goto label_418bc4;
        case 0x418bc8u: goto label_418bc8;
        case 0x418bccu: goto label_418bcc;
        case 0x418bd0u: goto label_418bd0;
        case 0x418bd4u: goto label_418bd4;
        case 0x418bd8u: goto label_418bd8;
        case 0x418bdcu: goto label_418bdc;
        case 0x418be0u: goto label_418be0;
        case 0x418be4u: goto label_418be4;
        case 0x418be8u: goto label_418be8;
        case 0x418becu: goto label_418bec;
        case 0x418bf0u: goto label_418bf0;
        case 0x418bf4u: goto label_418bf4;
        case 0x418bf8u: goto label_418bf8;
        case 0x418bfcu: goto label_418bfc;
        case 0x418c00u: goto label_418c00;
        case 0x418c04u: goto label_418c04;
        case 0x418c08u: goto label_418c08;
        case 0x418c0cu: goto label_418c0c;
        case 0x418c10u: goto label_418c10;
        case 0x418c14u: goto label_418c14;
        case 0x418c18u: goto label_418c18;
        case 0x418c1cu: goto label_418c1c;
        case 0x418c20u: goto label_418c20;
        case 0x418c24u: goto label_418c24;
        case 0x418c28u: goto label_418c28;
        case 0x418c2cu: goto label_418c2c;
        case 0x418c30u: goto label_418c30;
        case 0x418c34u: goto label_418c34;
        case 0x418c38u: goto label_418c38;
        case 0x418c3cu: goto label_418c3c;
        case 0x418c40u: goto label_418c40;
        case 0x418c44u: goto label_418c44;
        case 0x418c48u: goto label_418c48;
        case 0x418c4cu: goto label_418c4c;
        case 0x418c50u: goto label_418c50;
        case 0x418c54u: goto label_418c54;
        case 0x418c58u: goto label_418c58;
        case 0x418c5cu: goto label_418c5c;
        case 0x418c60u: goto label_418c60;
        case 0x418c64u: goto label_418c64;
        case 0x418c68u: goto label_418c68;
        case 0x418c6cu: goto label_418c6c;
        case 0x418c70u: goto label_418c70;
        case 0x418c74u: goto label_418c74;
        case 0x418c78u: goto label_418c78;
        case 0x418c7cu: goto label_418c7c;
        case 0x418c80u: goto label_418c80;
        case 0x418c84u: goto label_418c84;
        case 0x418c88u: goto label_418c88;
        case 0x418c8cu: goto label_418c8c;
        case 0x418c90u: goto label_418c90;
        case 0x418c94u: goto label_418c94;
        case 0x418c98u: goto label_418c98;
        case 0x418c9cu: goto label_418c9c;
        case 0x418ca0u: goto label_418ca0;
        case 0x418ca4u: goto label_418ca4;
        case 0x418ca8u: goto label_418ca8;
        case 0x418cacu: goto label_418cac;
        case 0x418cb0u: goto label_418cb0;
        case 0x418cb4u: goto label_418cb4;
        case 0x418cb8u: goto label_418cb8;
        case 0x418cbcu: goto label_418cbc;
        case 0x418cc0u: goto label_418cc0;
        case 0x418cc4u: goto label_418cc4;
        default: break;
    }

    ctx->pc = 0x418bb8u;

label_418bb8:
    // 0x418bb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x418bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_418bbc:
    // 0x418bbc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x418bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_418bc0:
    // 0x418bc0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x418bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_418bc4:
    // 0x418bc4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x418bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_418bc8:
    // 0x418bc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x418bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_418bcc:
    // 0x418bcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418bd0:
    // 0x418bd0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x418bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_418bd4:
    // 0x418bd4: 0x2451e890  addiu       $s1, $v0, -0x1770
    ctx->pc = 0x418bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_418bd8:
    // 0x418bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418bdc:
    // 0x418bdc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x418bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_418be0:
    // 0x418be0: 0x40f809  jalr        $v0
label_418be4:
    if (ctx->pc == 0x418BE4u) {
        ctx->pc = 0x418BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BE0u;
        // 0x418be4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418BE8u;
        goto label_418be8;
    }
    ctx->pc = 0x418BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418BE8u);
        ctx->pc = 0x418BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BE0u;
        // 0x418be4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418BE0u, 0x418BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418BE8u;
label_418be8:
    // 0x418be8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x418be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418bec:
    // 0x418bec: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_418bf0:
    if (ctx->pc == 0x418BF0u) {
        ctx->pc = 0x418BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BECu;
        // 0x418bf0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418BF4u;
        goto label_418bf4;
    }
    ctx->pc = 0x418BECu;
    {
        const bool branch_taken_0x418bec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x418BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418BECu;
        // 0x418bf0: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418bec) {
            ctx->pc = 0x418C20u;
            goto label_418c20;
        }
    }
    ctx->pc = 0x418BF4u;
label_418bf4:
    // 0x418bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418bf8:
    // 0x418bf8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418bfc:
    // 0x418bfc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x418bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_418c00:
    // 0x418c00: 0xc1035f6  jal         func_40D7D8
label_418c04:
    if (ctx->pc == 0x418C04u) {
        ctx->pc = 0x418C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C00u;
        // 0x418c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C08u;
        goto label_418c08;
    }
    ctx->pc = 0x418C00u;
    SET_GPR_U32(ctx, 31, 0x418C08u);
    ctx->pc = 0x418C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C00u;
    // 0x418c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418C00u, 0x418C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C08u;
label_418c08:
    // 0x418c08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x418c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_418c0c:
    // 0x418c0c: 0xc103628  jal         func_40D8A0
label_418c10:
    if (ctx->pc == 0x418C10u) {
        ctx->pc = 0x418C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C0Cu;
        // 0x418c10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C14u;
        goto label_418c14;
    }
    ctx->pc = 0x418C0Cu;
    SET_GPR_U32(ctx, 31, 0x418C14u);
    ctx->pc = 0x418C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C0Cu;
    // 0x418c10: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418C0Cu, 0x418C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C14u;
label_418c14:
    // 0x418c14: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_418c18:
    if (ctx->pc == 0x418C18u) {
        ctx->pc = 0x418C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C14u;
        // 0x418c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C1Cu;
        goto label_418c1c;
    }
    ctx->pc = 0x418C14u;
    {
        const bool branch_taken_0x418c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x418C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C14u;
        // 0x418c18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c14) {
            ctx->pc = 0x418CB0u;
            goto label_418cb0;
        }
    }
    ctx->pc = 0x418C1Cu;
label_418c1c:
    // 0x418c1c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x418c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_418c20:
    // 0x418c20: 0x2630fff0  addiu       $s0, $s1, -0x10
    ctx->pc = 0x418c20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
label_418c24:
    // 0x418c24: 0x2484c8b0  addiu       $a0, $a0, -0x3750
    ctx->pc = 0x418c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953136));
label_418c28:
    // 0x418c28: 0xc104c80  jal         func_413200
label_418c2c:
    if (ctx->pc == 0x418C2Cu) {
        ctx->pc = 0x418C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C28u;
        // 0x418c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C30u;
        goto label_418c30;
    }
    ctx->pc = 0x418C28u;
    SET_GPR_U32(ctx, 31, 0x418C30u);
    ctx->pc = 0x418C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C28u;
    // 0x418c2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413200u, 0x418C28u, 0x418C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C30u;
label_418c30:
    // 0x418c30: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_418c34:
    if (ctx->pc == 0x418C34u) {
        ctx->pc = 0x418C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C30u;
        // 0x418c34: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C38u;
        goto label_418c38;
    }
    ctx->pc = 0x418C30u;
    {
        const bool branch_taken_0x418c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x418c30) {
            ctx->pc = 0x418C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x418C30u;
            // 0x418c34: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x418C68u;
            goto label_418c68;
        }
    }
    ctx->pc = 0x418C38u;
label_418c38:
    // 0x418c38: 0xc1071b6  jal         func_41C6D8
label_418c3c:
    if (ctx->pc == 0x418C3Cu) {
        ctx->pc = 0x418C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C38u;
        // 0x418c3c: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C40u;
        goto label_418c40;
    }
    ctx->pc = 0x418C38u;
    SET_GPR_U32(ctx, 31, 0x418C40u);
    ctx->pc = 0x418C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C38u;
    // 0x418c3c: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C6D8u, 0x418C38u, 0x418C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C40u;
label_418c40:
    // 0x418c40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x418c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_418c44:
    // 0x418c44: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x418c44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_418c48:
    // 0x418c48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418c4c:
    // 0x418c4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418c4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418c50:
    // 0x418c50: 0x40f809  jalr        $v0
label_418c54:
    if (ctx->pc == 0x418C54u) {
        ctx->pc = 0x418C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C50u;
        // 0x418c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C58u;
        goto label_418c58;
    }
    ctx->pc = 0x418C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418C58u);
        ctx->pc = 0x418C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C50u;
        // 0x418c54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418C50u, 0x418C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418C58u;
label_418c58:
    // 0x418c58: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x418c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_418c5c:
    // 0x418c5c: 0xae030124  sw          $v1, 0x124($s0)
    ctx->pc = 0x418c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 3));
label_418c60:
    // 0x418c60: 0x10000013  b           . + 4 + (0x13 << 2)
label_418c64:
    if (ctx->pc == 0x418C64u) {
        ctx->pc = 0x418C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C60u;
        // 0x418c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C68u;
        goto label_418c68;
    }
    ctx->pc = 0x418C60u;
    {
        const bool branch_taken_0x418c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C60u;
        // 0x418c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c60) {
            ctx->pc = 0x418CB0u;
            goto label_418cb0;
        }
    }
    ctx->pc = 0x418C68u;
label_418c68:
    // 0x418c68: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x418c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_418c6c:
    // 0x418c6c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x418c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_418c70:
    // 0x418c70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418c74:
    // 0x418c74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418c78:
    // 0x418c78: 0x40f809  jalr        $v0
label_418c7c:
    if (ctx->pc == 0x418C7Cu) {
        ctx->pc = 0x418C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C78u;
        // 0x418c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C80u;
        goto label_418c80;
    }
    ctx->pc = 0x418C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x418C80u);
        ctx->pc = 0x418C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C78u;
        // 0x418c7c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418C78u, 0x418C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x418C80u;
label_418c80:
    // 0x418c80: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_418c84:
    if (ctx->pc == 0x418C84u) {
        ctx->pc = 0x418C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C80u;
        // 0x418c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C88u;
        goto label_418c88;
    }
    ctx->pc = 0x418C80u;
    {
        const bool branch_taken_0x418c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C80u;
        // 0x418c84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c80) {
            ctx->pc = 0x418CB0u;
            goto label_418cb0;
        }
    }
    ctx->pc = 0x418C88u;
label_418c88:
    // 0x418c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418c8c:
    // 0x418c8c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x418c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_418c90:
    // 0x418c90: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x418c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_418c94:
    // 0x418c94: 0xc1035f6  jal         func_40D7D8
label_418c98:
    if (ctx->pc == 0x418C98u) {
        ctx->pc = 0x418C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418C94u;
        // 0x418c98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418C9Cu;
        goto label_418c9c;
    }
    ctx->pc = 0x418C94u;
    SET_GPR_U32(ctx, 31, 0x418C9Cu);
    ctx->pc = 0x418C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418C94u;
    // 0x418c98: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x418C94u, 0x418C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418C9Cu;
label_418c9c:
    // 0x418c9c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x418c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_418ca0:
    // 0x418ca0: 0xc103628  jal         func_40D8A0
label_418ca4:
    if (ctx->pc == 0x418CA4u) {
        ctx->pc = 0x418CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CA0u;
        // 0x418ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418CA8u;
        goto label_418ca8;
    }
    ctx->pc = 0x418CA0u;
    SET_GPR_U32(ctx, 31, 0x418CA8u);
    ctx->pc = 0x418CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x418CA0u;
    // 0x418ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x418CA0u, 0x418CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x418CA8u;
label_418ca8:
    // 0x418ca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x418ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418cac:
    // 0x418cac: 0x0  nop
    ctx->pc = 0x418cacu;
    // NOP
label_418cb0:
    // 0x418cb0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x418cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_418cb4:
    // 0x418cb4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x418cb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_418cb8:
    // 0x418cb8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x418cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_418cbc:
    // 0x418cbc: 0x3e00008  jr          $ra
label_418cc0:
    if (ctx->pc == 0x418CC0u) {
        ctx->pc = 0x418CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CBCu;
        // 0x418cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x418CC4u;
        goto label_418cc4;
    }
    ctx->pc = 0x418CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x418CBCu;
        // 0x418cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x418CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x418CC4u;
label_418cc4:
    // 0x418cc4: 0x0  nop
    ctx->pc = 0x418cc4u;
    // NOP
    ctx->pc = 0x418cc8u;
}
