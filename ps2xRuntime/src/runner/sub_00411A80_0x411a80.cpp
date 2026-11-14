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

// Function: sub_00411A80
// Address: 0x411a80 - 0x411c08
void sub_00411A80_0x411a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411A80_0x411a80");
#endif

    switch (ctx->pc) {
        case 0x411a80u: goto label_411a80;
        case 0x411a84u: goto label_411a84;
        case 0x411a88u: goto label_411a88;
        case 0x411a8cu: goto label_411a8c;
        case 0x411a90u: goto label_411a90;
        case 0x411a94u: goto label_411a94;
        case 0x411a98u: goto label_411a98;
        case 0x411a9cu: goto label_411a9c;
        case 0x411aa0u: goto label_411aa0;
        case 0x411aa4u: goto label_411aa4;
        case 0x411aa8u: goto label_411aa8;
        case 0x411aacu: goto label_411aac;
        case 0x411ab0u: goto label_411ab0;
        case 0x411ab4u: goto label_411ab4;
        case 0x411ab8u: goto label_411ab8;
        case 0x411abcu: goto label_411abc;
        case 0x411ac0u: goto label_411ac0;
        case 0x411ac4u: goto label_411ac4;
        case 0x411ac8u: goto label_411ac8;
        case 0x411accu: goto label_411acc;
        case 0x411ad0u: goto label_411ad0;
        case 0x411ad4u: goto label_411ad4;
        case 0x411ad8u: goto label_411ad8;
        case 0x411adcu: goto label_411adc;
        case 0x411ae0u: goto label_411ae0;
        case 0x411ae4u: goto label_411ae4;
        case 0x411ae8u: goto label_411ae8;
        case 0x411aecu: goto label_411aec;
        case 0x411af0u: goto label_411af0;
        case 0x411af4u: goto label_411af4;
        case 0x411af8u: goto label_411af8;
        case 0x411afcu: goto label_411afc;
        case 0x411b00u: goto label_411b00;
        case 0x411b04u: goto label_411b04;
        case 0x411b08u: goto label_411b08;
        case 0x411b0cu: goto label_411b0c;
        case 0x411b10u: goto label_411b10;
        case 0x411b14u: goto label_411b14;
        case 0x411b18u: goto label_411b18;
        case 0x411b1cu: goto label_411b1c;
        case 0x411b20u: goto label_411b20;
        case 0x411b24u: goto label_411b24;
        case 0x411b28u: goto label_411b28;
        case 0x411b2cu: goto label_411b2c;
        case 0x411b30u: goto label_411b30;
        case 0x411b34u: goto label_411b34;
        case 0x411b38u: goto label_411b38;
        case 0x411b3cu: goto label_411b3c;
        case 0x411b40u: goto label_411b40;
        case 0x411b44u: goto label_411b44;
        case 0x411b48u: goto label_411b48;
        case 0x411b4cu: goto label_411b4c;
        case 0x411b50u: goto label_411b50;
        case 0x411b54u: goto label_411b54;
        case 0x411b58u: goto label_411b58;
        case 0x411b5cu: goto label_411b5c;
        case 0x411b60u: goto label_411b60;
        case 0x411b64u: goto label_411b64;
        case 0x411b68u: goto label_411b68;
        case 0x411b6cu: goto label_411b6c;
        case 0x411b70u: goto label_411b70;
        case 0x411b74u: goto label_411b74;
        case 0x411b78u: goto label_411b78;
        case 0x411b7cu: goto label_411b7c;
        case 0x411b80u: goto label_411b80;
        case 0x411b84u: goto label_411b84;
        case 0x411b88u: goto label_411b88;
        case 0x411b8cu: goto label_411b8c;
        case 0x411b90u: goto label_411b90;
        case 0x411b94u: goto label_411b94;
        case 0x411b98u: goto label_411b98;
        case 0x411b9cu: goto label_411b9c;
        case 0x411ba0u: goto label_411ba0;
        case 0x411ba4u: goto label_411ba4;
        case 0x411ba8u: goto label_411ba8;
        case 0x411bacu: goto label_411bac;
        case 0x411bb0u: goto label_411bb0;
        case 0x411bb4u: goto label_411bb4;
        case 0x411bb8u: goto label_411bb8;
        case 0x411bbcu: goto label_411bbc;
        case 0x411bc0u: goto label_411bc0;
        case 0x411bc4u: goto label_411bc4;
        case 0x411bc8u: goto label_411bc8;
        case 0x411bccu: goto label_411bcc;
        case 0x411bd0u: goto label_411bd0;
        case 0x411bd4u: goto label_411bd4;
        case 0x411bd8u: goto label_411bd8;
        case 0x411bdcu: goto label_411bdc;
        case 0x411be0u: goto label_411be0;
        case 0x411be4u: goto label_411be4;
        case 0x411be8u: goto label_411be8;
        case 0x411becu: goto label_411bec;
        case 0x411bf0u: goto label_411bf0;
        case 0x411bf4u: goto label_411bf4;
        case 0x411bf8u: goto label_411bf8;
        case 0x411bfcu: goto label_411bfc;
        case 0x411c00u: goto label_411c00;
        case 0x411c04u: goto label_411c04;
        default: break;
    }

    ctx->pc = 0x411a80u;

label_411a80:
    // 0x411a80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411a84:
    // 0x411a84: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x411a84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_411a88:
    // 0x411a88: 0x2447e890  addiu       $a3, $v0, -0x1770
    ctx->pc = 0x411a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961296));
label_411a8c:
    // 0x411a8c: 0x8f85bdd0  lw          $a1, -0x4230($gp)
    ctx->pc = 0x411a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411a90:
    // 0x411a90: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x411a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_411a94:
    // 0x411a94: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x411a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_411a98:
    // 0x411a98: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x411a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_411a9c:
    // 0x411a9c: 0xa73021  addu        $a2, $a1, $a3
    ctx->pc = 0x411a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_411aa0:
    // 0x411aa0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x411aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_411aa4:
    // 0x411aa4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x411aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411aa8:
    // 0x411aa8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x411aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_411aac:
    // 0x411aac: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x411aacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_411ab0:
    // 0x411ab0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x411ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_411ab4:
    // 0x411ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x411ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_411ab8:
    // 0x411ab8: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x411ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_411abc:
    // 0x411abc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x411abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_411ac0:
    // 0x411ac0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x411ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_411ac4:
    // 0x411ac4: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x411ac4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_411ac8:
    // 0x411ac8: 0x12320021  beq         $s1, $s2, . + 4 + (0x21 << 2)
label_411acc:
    if (ctx->pc == 0x411ACCu) {
        ctx->pc = 0x411ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AC8u;
        // 0x411acc: 0x24f3fff0  addiu       $s3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AD0u;
        goto label_411ad0;
    }
    ctx->pc = 0x411AC8u;
    {
        const bool branch_taken_0x411ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x411ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AC8u;
        // 0x411acc: 0x24f3fff0  addiu       $s3, $a3, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ac8) {
            ctx->pc = 0x411B50u;
            goto label_411b50;
        }
    }
    ctx->pc = 0x411AD0u;
label_411ad0:
    // 0x411ad0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x411ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411ad4:
    // 0x411ad4: 0x0  nop
    ctx->pc = 0x411ad4u;
    // NOP
label_411ad8:
    // 0x411ad8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x411ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_411adc:
    // 0x411adc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_411ae0:
    if (ctx->pc == 0x411AE0u) {
        ctx->pc = 0x411AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411ADCu;
        // 0x411ae0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AE4u;
        goto label_411ae4;
    }
    ctx->pc = 0x411ADCu;
    {
        const bool branch_taken_0x411adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x411AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411ADCu;
        // 0x411ae0: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411adc) {
            ctx->pc = 0x411AECu;
            goto label_411aec;
        }
    }
    ctx->pc = 0x411AE4u;
label_411ae4:
    // 0x411ae4: 0x40f809  jalr        $v0
label_411ae8:
    if (ctx->pc == 0x411AE8u) {
        ctx->pc = 0x411AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AE4u;
        // 0x411ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AECu;
        goto label_411aec;
    }
    ctx->pc = 0x411AE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411AECu);
        ctx->pc = 0x411AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AE4u;
        // 0x411ae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411AE4u, 0x411AECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411AECu;
label_411aec:
    // 0x411aec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x411aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_411af0:
    // 0x411af0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_411af4:
    if (ctx->pc == 0x411AF4u) {
        ctx->pc = 0x411AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AF0u;
        // 0x411af4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AF8u;
        goto label_411af8;
    }
    ctx->pc = 0x411AF0u;
    {
        const bool branch_taken_0x411af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x411af0) {
            ctx->pc = 0x411AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x411AF0u;
            // 0x411af4: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x411AF8u;
            goto label_411af8;
        }
    }
    ctx->pc = 0x411AF8u;
label_411af8:
    // 0x411af8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x411af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411afc:
    // 0x411afc: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_411b00:
    if (ctx->pc == 0x411B00u) {
        ctx->pc = 0x411B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AFCu;
        // 0x411b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411B04u;
        goto label_411b04;
    }
    ctx->pc = 0x411AFCu;
    {
        const bool branch_taken_0x411afc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x411B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AFCu;
        // 0x411b00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411afc) {
            ctx->pc = 0x411B3Cu;
            goto label_411b3c;
        }
    }
    ctx->pc = 0x411B04u;
label_411b04:
    // 0x411b04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x411b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_411b08:
    // 0x411b08: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411b0c:
    // 0x411b0c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x411b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_411b10:
    // 0x411b10: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x411b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_411b14:
    // 0x411b14: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x411b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_411b18:
    // 0x411b18: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x411b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411b1c:
    // 0x411b1c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x411b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_411b20:
    // 0x411b20: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x411b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_411b24:
    // 0x411b24: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x411b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_411b28:
    // 0x411b28: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x411b28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_411b2c:
    // 0x411b2c: 0xc105088  jal         func_414220
label_411b30:
    if (ctx->pc == 0x411B30u) {
        ctx->pc = 0x411B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B2Cu;
        // 0x411b30: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411B34u;
        goto label_411b34;
    }
    ctx->pc = 0x411B2Cu;
    SET_GPR_U32(ctx, 31, 0x411B34u);
    ctx->pc = 0x411B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411B2Cu;
    // 0x411b30: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414220u, 0x411B2Cu, 0x411B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411B34u;
label_411b34:
    // 0x411b34: 0x10000004  b           . + 4 + (0x4 << 2)
label_411b38:
    if (ctx->pc == 0x411B38u) {
        ctx->pc = 0x411B3Cu;
        goto label_411b3c;
    }
    ctx->pc = 0x411B34u;
    {
        const bool branch_taken_0x411b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411b34) {
            ctx->pc = 0x411B48u;
            goto label_411b48;
        }
    }
    ctx->pc = 0x411B3Cu;
label_411b3c:
    // 0x411b3c: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x411b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_411b40:
    // 0x411b40: 0x40f809  jalr        $v0
label_411b44:
    if (ctx->pc == 0x411B44u) {
        ctx->pc = 0x411B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B40u;
        // 0x411b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411B48u;
        goto label_411b48;
    }
    ctx->pc = 0x411B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411B48u);
        ctx->pc = 0x411B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B40u;
        // 0x411b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411B40u, 0x411B48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411B48u;
label_411b48:
    // 0x411b48: 0x1632ffe3  bne         $s1, $s2, . + 4 + (-0x1D << 2)
label_411b4c:
    if (ctx->pc == 0x411B4Cu) {
        ctx->pc = 0x411B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B48u;
        // 0x411b4c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411B50u;
        goto label_411b50;
    }
    ctx->pc = 0x411B48u;
    {
        const bool branch_taken_0x411b48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x411B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B48u;
        // 0x411b4c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411b48) {
            ctx->pc = 0x411AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411ad8;
        }
    }
    ctx->pc = 0x411B50u;
label_411b50:
    // 0x411b50: 0x8f84bdd0  lw          $a0, -0x4230($gp)
    ctx->pc = 0x411b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411b54:
    // 0x411b54: 0x2685e890  addiu       $a1, $s4, -0x1770
    ctx->pc = 0x411b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961296));
label_411b58:
    // 0x411b58: 0x24a60008  addiu       $a2, $a1, 0x8
    ctx->pc = 0x411b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_411b5c:
    // 0x411b5c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x411b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_411b60:
    // 0x411b60: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x411b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_411b64:
    // 0x411b64: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x411b64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411b68:
    // 0x411b68: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x411b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_411b6c:
    // 0x411b6c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x411b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
label_411b70:
    // 0x411b70: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x411b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_411b74:
    // 0x411b74: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x411b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
label_411b78:
    // 0x411b78: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x411b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411b7c:
    // 0x411b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x411b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411b80:
    // 0x411b80: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x411b80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_411b84:
    // 0x411b84: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x411b84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_411b88:
    // 0x411b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x411b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_411b8c:
    // 0x411b8c: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x411b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
label_411b90:
    // 0x411b90: 0xaca0fff8  sw          $zero, -0x8($a1)
    ctx->pc = 0x411b90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 0));
label_411b94:
    // 0x411b94: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x411b94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
label_411b98:
    // 0x411b98: 0x3e00008  jr          $ra
label_411b9c:
    if (ctx->pc == 0x411B9Cu) {
        ctx->pc = 0x411B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B98u;
        // 0x411b9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411BA0u;
        goto label_411ba0;
    }
    ctx->pc = 0x411B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B98u;
        // 0x411b9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411BA0u;
label_411ba0:
    // 0x411ba0: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411ba4:
    // 0x411ba4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411ba8:
    // 0x411ba8: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x411ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411bac:
    // 0x411bac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x411bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_411bb0:
    // 0x411bb0: 0x3e00008  jr          $ra
label_411bb4:
    if (ctx->pc == 0x411BB4u) {
        ctx->pc = 0x411BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BB0u;
        // 0x411bb4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411BB8u;
        goto label_411bb8;
    }
    ctx->pc = 0x411BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BB0u;
        // 0x411bb4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411BB8u;
label_411bb8:
    // 0x411bb8: 0x8f83bdd0  lw          $v1, -0x4230($gp)
    ctx->pc = 0x411bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950352)));
label_411bbc:
    // 0x411bbc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x411bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_411bc0:
    // 0x411bc0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x411bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_411bc4:
    // 0x411bc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x411bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_411bc8:
    // 0x411bc8: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x411bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_411bcc:
    // 0x411bcc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x411bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_411bd0:
    // 0x411bd0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x411bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_411bd4:
    // 0x411bd4: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
label_411bd8:
    if (ctx->pc == 0x411BD8u) {
        ctx->pc = 0x411BDCu;
        goto label_411bdc;
    }
    ctx->pc = 0x411BD4u;
    {
        const bool branch_taken_0x411bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x411bd4) {
            ctx->pc = 0x411BFCu;
            goto label_411bfc;
        }
    }
    ctx->pc = 0x411BDCu;
label_411bdc:
    // 0x411bdc: 0x0  nop
    ctx->pc = 0x411bdcu;
    // NOP
label_411be0:
    // 0x411be0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x411be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_411be4:
    // 0x411be4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x411be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_411be8:
    // 0x411be8: 0x0  nop
    ctx->pc = 0x411be8u;
    // NOP
label_411bec:
    // 0x411bec: 0x0  nop
    ctx->pc = 0x411becu;
    // NOP
label_411bf0:
    // 0x411bf0: 0x0  nop
    ctx->pc = 0x411bf0u;
    // NOP
label_411bf4:
    // 0x411bf4: 0x1465fffa  bne         $v1, $a1, . + 4 + (-0x6 << 2)
label_411bf8:
    if (ctx->pc == 0x411BF8u) {
        ctx->pc = 0x411BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BF4u;
        // 0x411bf8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411BFCu;
        goto label_411bfc;
    }
    ctx->pc = 0x411BF4u;
    {
        const bool branch_taken_0x411bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x411BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BF4u;
        // 0x411bf8: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411bf4) {
            ctx->pc = 0x411BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_411be0;
        }
    }
    ctx->pc = 0x411BFCu;
label_411bfc:
    // 0x411bfc: 0x3e00008  jr          $ra
label_411c00:
    if (ctx->pc == 0x411C00u) {
        ctx->pc = 0x411C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BFCu;
        // 0x411c00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411C04u;
        goto label_411c04;
    }
    ctx->pc = 0x411BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411BFCu;
        // 0x411c00: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x411C04u;
label_411c04:
    // 0x411c04: 0x0  nop
    ctx->pc = 0x411c04u;
    // NOP
    ctx->pc = 0x411c08u;
}
