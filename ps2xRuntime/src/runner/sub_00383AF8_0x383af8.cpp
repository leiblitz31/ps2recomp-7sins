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

// Function: sub_00383AF8
// Address: 0x383af8 - 0x383c70
void sub_00383AF8_0x383af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383AF8_0x383af8");
#endif

    switch (ctx->pc) {
        case 0x383ba8u: goto label_383ba8;
        case 0x383c00u: goto label_383c00;
        case 0x383c18u: goto label_383c18;
        case 0x383c34u: goto label_383c34;
        default: break;
    }

    ctx->pc = 0x383af8u;

    // 0x383af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x383af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x383afc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x383afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x383b00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x383b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x383b04: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x383b04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x383b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x383b0c: 0xc79021  addu        $s2, $a2, $a3
    ctx->pc = 0x383b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x383b10: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x383b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x383b14: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x383b14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b18: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x383b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x383b1c: 0x1240004b  beqz        $s2, . + 4 + (0x4B << 2)
    ctx->pc = 0x383B1Cu;
    {
        const bool branch_taken_0x383b1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B1Cu;
        // 0x383b20: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b1c) {
            ctx->pc = 0x383C4Cu;
            goto label_383c4c;
        }
    }
    ctx->pc = 0x383B24u;
    // 0x383b24: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x383b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x383b28: 0x58400049  blezl       $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x383B28u;
    {
        const bool branch_taken_0x383b28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x383b28) {
            ctx->pc = 0x383B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B28u;
            // 0x383b2c: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383C50u;
            goto label_383c50;
        }
    }
    ctx->pc = 0x383B30u;
    // 0x383b30: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x383B30u;
    {
        const bool branch_taken_0x383b30 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B30u;
        // 0x383b34: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b30) {
            ctx->pc = 0x383BE8u;
            goto label_383be8;
        }
    }
    ctx->pc = 0x383B38u;
    // 0x383b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x383b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b3c: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x383b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x383b40: 0x101023  negu        $v0, $s0
    ctx->pc = 0x383b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x383b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x383b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383b48: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x383b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x383b4c: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x383B4Cu;
    {
        const bool branch_taken_0x383b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B4Cu;
        // 0x383b50: 0x24c30004  addiu       $v1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b4c) {
            ctx->pc = 0x383BA8u;
            goto label_383ba8;
        }
    }
    ctx->pc = 0x383B54u;
    // 0x383b54: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x383b54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x383b58: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x383B58u;
    {
        const bool branch_taken_0x383b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383B58u;
        // 0x383b5c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383b58) {
            ctx->pc = 0x383B90u;
            goto label_383b90;
        }
    }
    ctx->pc = 0x383B60u;
    // 0x383b60: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x383B60u;
    {
        const bool branch_taken_0x383b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383b60) {
            ctx->pc = 0x383B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B60u;
            // 0x383b64: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B80u;
            goto label_383b80;
        }
    }
    ctx->pc = 0x383B68u;
    // 0x383b68: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x383b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x383b6c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383B6Cu;
    {
        const bool branch_taken_0x383b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383b6c) {
            ctx->pc = 0x383B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B6Cu;
            // 0x383b70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B74u;
            goto label_383b74;
        }
    }
    ctx->pc = 0x383B74u;
label_383b74:
    // 0x383b74: 0x24c30014  addiu       $v1, $a2, 0x14
    ctx->pc = 0x383b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    // 0x383b78: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x383b78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x383b7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x383b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_383b80:
    // 0x383b80: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383B80u;
    {
        const bool branch_taken_0x383b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383b80) {
            ctx->pc = 0x383B84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B80u;
            // 0x383b84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B88u;
            goto label_383b88;
        }
    }
    ctx->pc = 0x383B88u;
label_383b88:
    // 0x383b88: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x383b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x383b8c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x383b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_383b90:
    // 0x383b90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x383b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383b94: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383B94u;
    {
        const bool branch_taken_0x383b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383b94) {
            ctx->pc = 0x383B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383B94u;
            // 0x383b98: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B9Cu;
            goto label_383b9c;
        }
    }
    ctx->pc = 0x383B9Cu;
label_383b9c:
    // 0x383b9c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x383b9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x383ba0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x383BA0u;
    {
        const bool branch_taken_0x383ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BA0u;
        // 0x383ba4: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ba0) {
            ctx->pc = 0x383BE4u;
            goto label_383be4;
        }
    }
    ctx->pc = 0x383BA8u;
label_383ba8:
    // 0x383ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x383ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383bac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383BACu;
    {
        const bool branch_taken_0x383bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383bac) {
            ctx->pc = 0x383BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383BACu;
            // 0x383bb0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383BB4u;
            goto label_383bb4;
        }
    }
    ctx->pc = 0x383BB4u;
label_383bb4:
    // 0x383bb4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x383bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x383bb8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383BB8u;
    {
        const bool branch_taken_0x383bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383bb8) {
            ctx->pc = 0x383BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383BB8u;
            // 0x383bbc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383BC0u;
            goto label_383bc0;
        }
    }
    ctx->pc = 0x383BC0u;
label_383bc0:
    // 0x383bc0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x383bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x383bc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383BC4u;
    {
        const bool branch_taken_0x383bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383bc4) {
            ctx->pc = 0x383BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383BC4u;
            // 0x383bc8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383BCCu;
            goto label_383bcc;
        }
    }
    ctx->pc = 0x383BCCu;
label_383bcc:
    // 0x383bcc: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x383bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x383bd0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x383BD0u;
    {
        const bool branch_taken_0x383bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383bd0) {
            ctx->pc = 0x383BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383BD0u;
            // 0x383bd4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383BD8u;
            goto label_383bd8;
        }
    }
    ctx->pc = 0x383BD8u;
label_383bd8:
    // 0x383bd8: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x383bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x383bdc: 0x1600fff2  bnez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x383BDCu;
    {
        const bool branch_taken_0x383bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x383BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BDCu;
        // 0x383be0: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bdc) {
            ctx->pc = 0x383BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ba8;
        }
    }
    ctx->pc = 0x383BE4u;
label_383be4:
    // 0x383be4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x383be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_383be8:
    // 0x383be8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x383be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383bec: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x383BECu;
    {
        const bool branch_taken_0x383bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383BECu;
        // 0x383bf0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383bec) {
            ctx->pc = 0x383C4Cu;
            goto label_383c4c;
        }
    }
    ctx->pc = 0x383BF4u;
    // 0x383bf4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x383bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383bf8: 0xc103440  jal         func_40D100
    ctx->pc = 0x383BF8u;
    SET_GPR_U32(ctx, 31, 0x383C00u);
    ctx->pc = 0x383BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383BF8u;
    // 0x383bfc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x383BF8u, 0x383C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C00u;
label_383c00:
    // 0x383c00: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x383C00u;
    {
        const bool branch_taken_0x383c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C00u;
        // 0x383c04: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c00) {
            ctx->pc = 0x383C50u;
            goto label_383c50;
        }
    }
    ctx->pc = 0x383C08u;
    // 0x383c08: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x383c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x383c0c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x383C0Cu;
    {
        const bool branch_taken_0x383c0c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C0Cu;
        // 0x383c10: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c0c) {
            ctx->pc = 0x383C4Cu;
            goto label_383c4c;
        }
    }
    ctx->pc = 0x383C14u;
    // 0x383c14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x383c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383c18:
    // 0x383c18: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x383c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x383c1c: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x383c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x383c20: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x383c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x383c24: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x383C24u;
    {
        const bool branch_taken_0x383c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x383c24) {
            ctx->pc = 0x383C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383C24u;
            // 0x383c28: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383C3Cu;
            goto label_383c3c;
        }
    }
    ctx->pc = 0x383C2Cu;
    // 0x383c2c: 0xc0e08c2  jal         func_382308
    ctx->pc = 0x383C2Cu;
    SET_GPR_U32(ctx, 31, 0x383C34u);
    ctx->pc = 0x383C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383C2Cu;
    // 0x383c30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x382308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x382308u, 0x383C2Cu, 0x383C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383C34u;
label_383c34:
    // 0x383c34: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x383c34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383c38: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x383c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_383c3c:
    // 0x383c3c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x383c3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x383c40: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x383c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x383c44: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x383C44u;
    {
        const bool branch_taken_0x383c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C44u;
        // 0x383c48: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383c44) {
            ctx->pc = 0x383C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383c18;
        }
    }
    ctx->pc = 0x383C4Cu;
label_383c4c:
    // 0x383c4c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x383c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383c50:
    // 0x383c50: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x383c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x383c54: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x383c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383c58: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x383c58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383c5c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383c5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383c60: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x383c60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x383c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383c68: 0x3e00008  jr          $ra
    ctx->pc = 0x383C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383C68u;
        // 0x383c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383C70u;
}
