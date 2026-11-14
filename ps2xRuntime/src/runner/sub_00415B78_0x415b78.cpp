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

// Function: sub_00415B78
// Address: 0x415b78 - 0x415c70
void sub_00415B78_0x415b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00415B78_0x415b78");
#endif

    switch (ctx->pc) {
        case 0x415b78u: goto label_415b78;
        case 0x415b7cu: goto label_415b7c;
        case 0x415b80u: goto label_415b80;
        case 0x415b84u: goto label_415b84;
        case 0x415b88u: goto label_415b88;
        case 0x415b8cu: goto label_415b8c;
        case 0x415b90u: goto label_415b90;
        case 0x415b94u: goto label_415b94;
        case 0x415b98u: goto label_415b98;
        case 0x415b9cu: goto label_415b9c;
        case 0x415ba0u: goto label_415ba0;
        case 0x415ba4u: goto label_415ba4;
        case 0x415ba8u: goto label_415ba8;
        case 0x415bacu: goto label_415bac;
        case 0x415bb0u: goto label_415bb0;
        case 0x415bb4u: goto label_415bb4;
        case 0x415bb8u: goto label_415bb8;
        case 0x415bbcu: goto label_415bbc;
        case 0x415bc0u: goto label_415bc0;
        case 0x415bc4u: goto label_415bc4;
        case 0x415bc8u: goto label_415bc8;
        case 0x415bccu: goto label_415bcc;
        case 0x415bd0u: goto label_415bd0;
        case 0x415bd4u: goto label_415bd4;
        case 0x415bd8u: goto label_415bd8;
        case 0x415bdcu: goto label_415bdc;
        case 0x415be0u: goto label_415be0;
        case 0x415be4u: goto label_415be4;
        case 0x415be8u: goto label_415be8;
        case 0x415becu: goto label_415bec;
        case 0x415bf0u: goto label_415bf0;
        case 0x415bf4u: goto label_415bf4;
        case 0x415bf8u: goto label_415bf8;
        case 0x415bfcu: goto label_415bfc;
        case 0x415c00u: goto label_415c00;
        case 0x415c04u: goto label_415c04;
        case 0x415c08u: goto label_415c08;
        case 0x415c0cu: goto label_415c0c;
        case 0x415c10u: goto label_415c10;
        case 0x415c14u: goto label_415c14;
        case 0x415c18u: goto label_415c18;
        case 0x415c1cu: goto label_415c1c;
        case 0x415c20u: goto label_415c20;
        case 0x415c24u: goto label_415c24;
        case 0x415c28u: goto label_415c28;
        case 0x415c2cu: goto label_415c2c;
        case 0x415c30u: goto label_415c30;
        case 0x415c34u: goto label_415c34;
        case 0x415c38u: goto label_415c38;
        case 0x415c3cu: goto label_415c3c;
        case 0x415c40u: goto label_415c40;
        case 0x415c44u: goto label_415c44;
        case 0x415c48u: goto label_415c48;
        case 0x415c4cu: goto label_415c4c;
        case 0x415c50u: goto label_415c50;
        case 0x415c54u: goto label_415c54;
        case 0x415c58u: goto label_415c58;
        case 0x415c5cu: goto label_415c5c;
        case 0x415c60u: goto label_415c60;
        case 0x415c64u: goto label_415c64;
        case 0x415c68u: goto label_415c68;
        case 0x415c6cu: goto label_415c6c;
        default: break;
    }

    ctx->pc = 0x415b78u;

label_415b78:
    // 0x415b78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x415b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_415b7c:
    // 0x415b7c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x415b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_415b80:
    // 0x415b80: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x415b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_415b84:
    // 0x415b84: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x415b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_415b88:
    // 0x415b88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x415b88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_415b8c:
    // 0x415b8c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x415b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_415b90:
    // 0x415b90: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x415b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_415b94:
    // 0x415b94: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x415b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_415b98:
    // 0x415b98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x415b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_415b9c:
    // 0x415b9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x415b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_415ba0:
    // 0x415ba0: 0xc1067fa  jal         func_419FE8
label_415ba4:
    if (ctx->pc == 0x415BA4u) {
        ctx->pc = 0x415BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BA0u;
        // 0x415ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BA8u;
        goto label_415ba8;
    }
    ctx->pc = 0x415BA0u;
    SET_GPR_U32(ctx, 31, 0x415BA8u);
    ctx->pc = 0x415BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415BA0u;
    // 0x415ba4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419FE8u, 0x415BA0u, 0x415BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415BA8u;
label_415ba8:
    // 0x415ba8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x415ba8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415bac:
    // 0x415bac: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x415bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_415bb0:
    // 0x415bb0: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x415bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_415bb4:
    // 0x415bb4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x415bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_415bb8:
    // 0x415bb8: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x415bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_415bbc:
    // 0x415bbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x415bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415bc0:
    // 0x415bc0: 0x40f809  jalr        $v0
label_415bc4:
    if (ctx->pc == 0x415BC4u) {
        ctx->pc = 0x415BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BC0u;
        // 0x415bc4: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BC8u;
        goto label_415bc8;
    }
    ctx->pc = 0x415BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x415BC8u);
        ctx->pc = 0x415BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BC0u;
        // 0x415bc4: 0x34a5000e  ori         $a1, $a1, 0xE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)14);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415BC0u, 0x415BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x415BC8u;
label_415bc8:
    // 0x415bc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x415bc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_415bcc:
    // 0x415bcc: 0x5620000c  bnel        $s1, $zero, . + 4 + (0xC << 2)
label_415bd0:
    if (ctx->pc == 0x415BD0u) {
        ctx->pc = 0x415BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BCCu;
        // 0x415bd0: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BD4u;
        goto label_415bd4;
    }
    ctx->pc = 0x415BCCu;
    {
        const bool branch_taken_0x415bcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x415bcc) {
            ctx->pc = 0x415BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x415BCCu;
            // 0x415bd0: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x415C00u;
            goto label_415c00;
        }
    }
    ctx->pc = 0x415BD4u;
label_415bd4:
    // 0x415bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x415bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_415bd8:
    // 0x415bd8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x415bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_415bdc:
    // 0x415bdc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x415bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_415be0:
    // 0x415be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x415be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_415be4:
    // 0x415be4: 0xc1035f6  jal         func_40D7D8
label_415be8:
    if (ctx->pc == 0x415BE8u) {
        ctx->pc = 0x415BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BE4u;
        // 0x415be8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BECu;
        goto label_415bec;
    }
    ctx->pc = 0x415BE4u;
    SET_GPR_U32(ctx, 31, 0x415BECu);
    ctx->pc = 0x415BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415BE4u;
    // 0x415be8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x415BE4u, 0x415BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415BECu;
label_415bec:
    // 0x415bec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x415becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_415bf0:
    // 0x415bf0: 0xc103628  jal         func_40D8A0
label_415bf4:
    if (ctx->pc == 0x415BF4u) {
        ctx->pc = 0x415BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BF0u;
        // 0x415bf4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415BF8u;
        goto label_415bf8;
    }
    ctx->pc = 0x415BF0u;
    SET_GPR_U32(ctx, 31, 0x415BF8u);
    ctx->pc = 0x415BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415BF0u;
    // 0x415bf4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x415BF0u, 0x415BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415BF8u;
label_415bf8:
    // 0x415bf8: 0x10000014  b           . + 4 + (0x14 << 2)
label_415bfc:
    if (ctx->pc == 0x415BFCu) {
        ctx->pc = 0x415BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BF8u;
        // 0x415bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C00u;
        goto label_415c00;
    }
    ctx->pc = 0x415BF8u;
    {
        const bool branch_taken_0x415bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x415BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415BF8u;
        // 0x415bfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415bf8) {
            ctx->pc = 0x415C4Cu;
            goto label_415c4c;
        }
    }
    ctx->pc = 0x415C00u;
label_415c00:
    // 0x415c00: 0x1240000f  beqz        $s2, . + 4 + (0xF << 2)
label_415c04:
    if (ctx->pc == 0x415C04u) {
        ctx->pc = 0x415C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C00u;
        // 0x415c04: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C08u;
        goto label_415c08;
    }
    ctx->pc = 0x415C00u;
    {
        const bool branch_taken_0x415c00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x415C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C00u;
        // 0x415c04: 0x27b40010  addiu       $s4, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415c00) {
            ctx->pc = 0x415C40u;
            goto label_415c40;
        }
    }
    ctx->pc = 0x415C08u;
label_415c08:
    // 0x415c08: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x415c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_415c0c:
    // 0x415c0c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x415c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_415c10:
    // 0x415c10: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x415c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_415c14:
    // 0x415c14: 0x8e500098  lw          $s0, 0x98($s2)
    ctx->pc = 0x415c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
label_415c18:
    // 0x415c18: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_415c1c:
    if (ctx->pc == 0x415C1Cu) {
        ctx->pc = 0x415C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C18u;
        // 0x415c1c: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C20u;
        goto label_415c20;
    }
    ctx->pc = 0x415C18u;
    {
        const bool branch_taken_0x415c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x415C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C18u;
        // 0x415c1c: 0x26220008  addiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x415c18) {
            ctx->pc = 0x415C40u;
            goto label_415c40;
        }
    }
    ctx->pc = 0x415C20u;
label_415c20:
    // 0x415c20: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x415c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_415c24:
    // 0x415c24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x415c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_415c28:
    // 0x415c28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x415c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_415c2c:
    // 0x415c2c: 0xc105762  jal         func_415D88
label_415c30:
    if (ctx->pc == 0x415C30u) {
        ctx->pc = 0x415C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C2Cu;
        // 0x415c30: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C34u;
        goto label_415c34;
    }
    ctx->pc = 0x415C2Cu;
    SET_GPR_U32(ctx, 31, 0x415C34u);
    ctx->pc = 0x415C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415C2Cu;
    // 0x415c30: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D88u, 0x415C2Cu, 0x415C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415C34u;
label_415c34:
    // 0x415c34: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x415c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_415c38:
    // 0x415c38: 0xc105762  jal         func_415D88
label_415c3c:
    if (ctx->pc == 0x415C3Cu) {
        ctx->pc = 0x415C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C38u;
        // 0x415c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C40u;
        goto label_415c40;
    }
    ctx->pc = 0x415C38u;
    SET_GPR_U32(ctx, 31, 0x415C40u);
    ctx->pc = 0x415C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x415C38u;
    // 0x415c3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415D88u, 0x415C38u, 0x415C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x415C40u;
label_415c40:
    // 0x415c40: 0xae750004  sw          $s5, 0x4($s3)
    ctx->pc = 0x415c40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 21));
label_415c44:
    // 0x415c44: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x415c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_415c48:
    // 0x415c48: 0xae710000  sw          $s1, 0x0($s3)
    ctx->pc = 0x415c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
label_415c4c:
    // 0x415c4c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x415c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_415c50:
    // 0x415c50: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x415c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_415c54:
    // 0x415c54: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x415c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_415c58:
    // 0x415c58: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x415c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_415c5c:
    // 0x415c5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x415c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_415c60:
    // 0x415c60: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x415c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_415c64:
    // 0x415c64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x415c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_415c68:
    // 0x415c68: 0x3e00008  jr          $ra
label_415c6c:
    if (ctx->pc == 0x415C6Cu) {
        ctx->pc = 0x415C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C68u;
        // 0x415c6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x415C70u;
        goto label_fallthrough_0x415c68;
    }
    ctx->pc = 0x415C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x415C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x415C68u;
        // 0x415c6c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x415C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x415c68:
    ctx->pc = 0x415C70u;
}
