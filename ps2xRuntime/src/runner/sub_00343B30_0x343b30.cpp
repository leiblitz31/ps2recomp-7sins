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

// Function: sub_00343B30
// Address: 0x343b30 - 0x343cd8
void sub_00343B30_0x343b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343B30_0x343b30");
#endif

    switch (ctx->pc) {
        case 0x343b44u: goto label_343b44;
        case 0x343c00u: goto label_343c00;
        default: break;
    }

    ctx->pc = 0x343b30u;

    // 0x343b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x343b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x343b34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x343b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x343b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x343b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x343b3c: 0xc0d2612  jal         func_349848
    ctx->pc = 0x343B3Cu;
    SET_GPR_U32(ctx, 31, 0x343B44u);
    ctx->pc = 0x343B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B3Cu;
    // 0x343b40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349848u, 0x343B3Cu, 0x343B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B44u;
label_343b44:
    // 0x343b44: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x343b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x343b48: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x343B48u;
    {
        const bool branch_taken_0x343b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B48u;
        // 0x343b4c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b48) {
            ctx->pc = 0x343CC0u;
            goto label_343cc0;
        }
    }
    ctx->pc = 0x343B50u;
    // 0x343b50: 0x8e090020  lw          $t1, 0x20($s0)
    ctx->pc = 0x343b50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x343b54: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x343b54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x343b58: 0x11020059  beq         $t0, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x343B58u;
    {
        const bool branch_taken_0x343b58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x343B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B58u;
        // 0x343b5c: 0x8e0d0010  lw          $t5, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b58) {
            ctx->pc = 0x343CC0u;
            goto label_343cc0;
        }
    }
    ctx->pc = 0x343B60u;
    // 0x343b60: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x343b60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343b64: 0x18d102a  slt         $v0, $t4, $t5
    ctx->pc = 0x343b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x343b68: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x343B68u;
    {
        const bool branch_taken_0x343b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x343b68) {
            ctx->pc = 0x343B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343B68u;
            // 0x343b6c: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343CB4u;
            goto label_343cb4;
        }
    }
    ctx->pc = 0x343B70u;
    // 0x343b70: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x343b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x343b74: 0x3c0bffff  lui         $t3, 0xFFFF
    ctx->pc = 0x343b74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)65535 << 16));
    // 0x343b78: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x343b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x343b7c: 0x25acffff  addiu       $t4, $t5, -0x1
    ctx->pc = 0x343b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x343b80: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x343b80u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343b84: 0x356bfff0  ori         $t3, $t3, 0xFFF0
    ctx->pc = 0x343b84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65520);
    // 0x343b88: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x343b88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x343b8c: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x343b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343b90: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x343b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
    // 0x343b94: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x343B94u;
    {
        const bool branch_taken_0x343b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B94u;
        // 0x343b98: 0x24a60004  addiu       $a2, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b94) {
            ctx->pc = 0x343BF4u;
            goto label_343bf4;
        }
    }
    ctx->pc = 0x343B9Cu;
    // 0x343b9c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x343b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x343ba0: 0x148e0005  bne         $a0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x343BA0u;
    {
        const bool branch_taken_0x343ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x343BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BA0u;
        // 0x343ba4: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ba0) {
            ctx->pc = 0x343BB8u;
            goto label_343bb8;
        }
    }
    ctx->pc = 0x343BA8u;
    // 0x343ba8: 0x24620013  addiu       $v0, $v1, 0x13
    ctx->pc = 0x343ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x343bac: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343bb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x343BB0u;
    {
        const bool branch_taken_0x343bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BB0u;
        // 0x343bb4: 0x4b2024  and         $a0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bb0) {
            ctx->pc = 0x343BBCu;
            goto label_343bbc;
        }
    }
    ctx->pc = 0x343BB8u;
label_343bb8:
    // 0x343bb8: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x343bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_343bbc:
    // 0x343bbc: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x343bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x343bc0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x343bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x343bc4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x343bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x343bc8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x343bc8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x343bcc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x343bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x343bd0: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x343bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x343bd4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x343bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x343bd8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x343bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x343bdc: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x343bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x343be0: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x343be0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x343be4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x343be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x343be8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343bec: 0x1180002f  beqz        $t4, . + 4 + (0x2F << 2)
    ctx->pc = 0x343BECu;
    {
        const bool branch_taken_0x343bec = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x343BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343BECu;
        // 0x343bf0: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343bec) {
            ctx->pc = 0x343CACu;
            goto label_343cac;
        }
    }
    ctx->pc = 0x343BF4u;
label_343bf4:
    // 0x343bf4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x343bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343bf8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x343bf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343bfc: 0x0  nop
    ctx->pc = 0x343bfcu;
    // NOP
label_343c00:
    // 0x343c00: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x343c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x343c04: 0x148e0005  bne         $a0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x343C04u;
    {
        const bool branch_taken_0x343c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x343C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C04u;
        // 0x343c08: 0x8ce30000  lw          $v1, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c04) {
            ctx->pc = 0x343C1Cu;
            goto label_343c1c;
        }
    }
    ctx->pc = 0x343C0Cu;
    // 0x343c0c: 0x24620013  addiu       $v0, $v1, 0x13
    ctx->pc = 0x343c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x343c10: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343c14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x343C14u;
    {
        const bool branch_taken_0x343c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C14u;
        // 0x343c18: 0x4b2024  and         $a0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c14) {
            ctx->pc = 0x343C28u;
            goto label_343c28;
        }
    }
    ctx->pc = 0x343C1Cu;
label_343c1c:
    // 0x343c1c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x343c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x343c20: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x343c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x343c24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x343c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_343c28:
    // 0x343c28: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x343c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x343c2c: 0x25460004  addiu       $a2, $t2, 0x4
    ctx->pc = 0x343c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x343c30: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x343c30u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x343c34: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x343c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x343c38: 0x1451821  addu        $v1, $t2, $a1
    ctx->pc = 0x343c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x343c3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x343c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x343c40: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x343c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x343c44: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x343c44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x343c48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343c4c: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x343c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x343c50: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x343c50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x343c54: 0x148e0005  bne         $a0, $t6, . + 4 + (0x5 << 2)
    ctx->pc = 0x343C54u;
    {
        const bool branch_taken_0x343c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x343C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C54u;
        // 0x343c58: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c54) {
            ctx->pc = 0x343C6Cu;
            goto label_343c6c;
        }
    }
    ctx->pc = 0x343C5Cu;
    // 0x343c5c: 0x24620013  addiu       $v0, $v1, 0x13
    ctx->pc = 0x343c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 19));
    // 0x343c60: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x343c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x343c64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x343C64u;
    {
        const bool branch_taken_0x343c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C64u;
        // 0x343c68: 0x4b2024  and         $a0, $v0, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c64) {
            ctx->pc = 0x343C74u;
            goto label_343c74;
        }
    }
    ctx->pc = 0x343C6Cu;
label_343c6c:
    // 0x343c6c: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x343c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x343c70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x343c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_343c74:
    // 0x343c74: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x343c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x343c78: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x343c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x343c7c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x343c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x343c80: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x343c80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x343c84: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x343c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x343c88: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x343c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x343c8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x343c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x343c90: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x343c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x343c94: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x343c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x343c98: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x343c98u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x343c9c: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x343c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x343ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x343ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343ca4: 0x1580ffd6  bnez        $t4, . + 4 + (-0x2A << 2)
    ctx->pc = 0x343CA4u;
    {
        const bool branch_taken_0x343ca4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x343CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CA4u;
        // 0x343ca8: 0x1024021  addu        $t0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ca4) {
            ctx->pc = 0x343C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343c00;
        }
    }
    ctx->pc = 0x343CACu;
label_343cac:
    // 0x343cac: 0x1a0602d  daddu       $t4, $t5, $zero
    ctx->pc = 0x343cacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cb0: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x343cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_343cb4:
    // 0x343cb4: 0xc1080  sll         $v0, $t4, 2
    ctx->pc = 0x343cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x343cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x343cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343cbc: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x343cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
label_343cc0:
    // 0x343cc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x343cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343cc8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x343cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x343CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343CCCu;
        // 0x343cd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343CD4u;
    // 0x343cd4: 0x0  nop
    ctx->pc = 0x343cd4u;
    // NOP
    ctx->pc = 0x343cd8u;
}
