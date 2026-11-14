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

// Function: sub_003B0B08
// Address: 0x3b0b08 - 0x3b0c88
void sub_003B0B08_0x3b0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0B08_0x3b0b08");
#endif

    switch (ctx->pc) {
        case 0x3b0b08u: goto label_3b0b08;
        case 0x3b0b0cu: goto label_3b0b0c;
        case 0x3b0b10u: goto label_3b0b10;
        case 0x3b0b14u: goto label_3b0b14;
        case 0x3b0b18u: goto label_3b0b18;
        case 0x3b0b1cu: goto label_3b0b1c;
        case 0x3b0b20u: goto label_3b0b20;
        case 0x3b0b24u: goto label_3b0b24;
        case 0x3b0b28u: goto label_3b0b28;
        case 0x3b0b2cu: goto label_3b0b2c;
        case 0x3b0b30u: goto label_3b0b30;
        case 0x3b0b34u: goto label_3b0b34;
        case 0x3b0b38u: goto label_3b0b38;
        case 0x3b0b3cu: goto label_3b0b3c;
        case 0x3b0b40u: goto label_3b0b40;
        case 0x3b0b44u: goto label_3b0b44;
        case 0x3b0b48u: goto label_3b0b48;
        case 0x3b0b4cu: goto label_3b0b4c;
        case 0x3b0b50u: goto label_3b0b50;
        case 0x3b0b54u: goto label_3b0b54;
        case 0x3b0b58u: goto label_3b0b58;
        case 0x3b0b5cu: goto label_3b0b5c;
        case 0x3b0b60u: goto label_3b0b60;
        case 0x3b0b64u: goto label_3b0b64;
        case 0x3b0b68u: goto label_3b0b68;
        case 0x3b0b6cu: goto label_3b0b6c;
        case 0x3b0b70u: goto label_3b0b70;
        case 0x3b0b74u: goto label_3b0b74;
        case 0x3b0b78u: goto label_3b0b78;
        case 0x3b0b7cu: goto label_3b0b7c;
        case 0x3b0b80u: goto label_3b0b80;
        case 0x3b0b84u: goto label_3b0b84;
        case 0x3b0b88u: goto label_3b0b88;
        case 0x3b0b8cu: goto label_3b0b8c;
        case 0x3b0b90u: goto label_3b0b90;
        case 0x3b0b94u: goto label_3b0b94;
        case 0x3b0b98u: goto label_3b0b98;
        case 0x3b0b9cu: goto label_3b0b9c;
        case 0x3b0ba0u: goto label_3b0ba0;
        case 0x3b0ba4u: goto label_3b0ba4;
        case 0x3b0ba8u: goto label_3b0ba8;
        case 0x3b0bacu: goto label_3b0bac;
        case 0x3b0bb0u: goto label_3b0bb0;
        case 0x3b0bb4u: goto label_3b0bb4;
        case 0x3b0bb8u: goto label_3b0bb8;
        case 0x3b0bbcu: goto label_3b0bbc;
        case 0x3b0bc0u: goto label_3b0bc0;
        case 0x3b0bc4u: goto label_3b0bc4;
        case 0x3b0bc8u: goto label_3b0bc8;
        case 0x3b0bccu: goto label_3b0bcc;
        case 0x3b0bd0u: goto label_3b0bd0;
        case 0x3b0bd4u: goto label_3b0bd4;
        case 0x3b0bd8u: goto label_3b0bd8;
        case 0x3b0bdcu: goto label_3b0bdc;
        case 0x3b0be0u: goto label_3b0be0;
        case 0x3b0be4u: goto label_3b0be4;
        case 0x3b0be8u: goto label_3b0be8;
        case 0x3b0becu: goto label_3b0bec;
        case 0x3b0bf0u: goto label_3b0bf0;
        case 0x3b0bf4u: goto label_3b0bf4;
        case 0x3b0bf8u: goto label_3b0bf8;
        case 0x3b0bfcu: goto label_3b0bfc;
        case 0x3b0c00u: goto label_3b0c00;
        case 0x3b0c04u: goto label_3b0c04;
        case 0x3b0c08u: goto label_3b0c08;
        case 0x3b0c0cu: goto label_3b0c0c;
        case 0x3b0c10u: goto label_3b0c10;
        case 0x3b0c14u: goto label_3b0c14;
        case 0x3b0c18u: goto label_3b0c18;
        case 0x3b0c1cu: goto label_3b0c1c;
        case 0x3b0c20u: goto label_3b0c20;
        case 0x3b0c24u: goto label_3b0c24;
        case 0x3b0c28u: goto label_3b0c28;
        case 0x3b0c2cu: goto label_3b0c2c;
        case 0x3b0c30u: goto label_3b0c30;
        case 0x3b0c34u: goto label_3b0c34;
        case 0x3b0c38u: goto label_3b0c38;
        case 0x3b0c3cu: goto label_3b0c3c;
        case 0x3b0c40u: goto label_3b0c40;
        case 0x3b0c44u: goto label_3b0c44;
        case 0x3b0c48u: goto label_3b0c48;
        case 0x3b0c4cu: goto label_3b0c4c;
        case 0x3b0c50u: goto label_3b0c50;
        case 0x3b0c54u: goto label_3b0c54;
        case 0x3b0c58u: goto label_3b0c58;
        case 0x3b0c5cu: goto label_3b0c5c;
        case 0x3b0c60u: goto label_3b0c60;
        case 0x3b0c64u: goto label_3b0c64;
        case 0x3b0c68u: goto label_3b0c68;
        case 0x3b0c6cu: goto label_3b0c6c;
        case 0x3b0c70u: goto label_3b0c70;
        case 0x3b0c74u: goto label_3b0c74;
        case 0x3b0c78u: goto label_3b0c78;
        case 0x3b0c7cu: goto label_3b0c7c;
        case 0x3b0c80u: goto label_3b0c80;
        case 0x3b0c84u: goto label_3b0c84;
        default: break;
    }

    ctx->pc = 0x3b0b08u;

label_3b0b08:
    // 0x3b0b08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b0b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b0b0c:
    // 0x3b0b0c: 0x8f85ab24  lw          $a1, -0x54DC($gp)
    ctx->pc = 0x3b0b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945572)));
label_3b0b10:
    // 0x3b0b10: 0x8f87ab28  lw          $a3, -0x54D8($gp)
    ctx->pc = 0x3b0b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945576)));
label_3b0b14:
    // 0x3b0b14: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3b0b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_3b0b18:
    // 0x3b0b18: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x3b0b18u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
label_3b0b1c:
    // 0x3b0b1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3b0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3b0b20:
    // 0x3b0b20: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b0b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b0b24:
    // 0x3b0b24: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x3b0b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3b0b28:
    // 0x3b0b28: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3b0b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3b0b2c:
    // 0x3b0b2c: 0x2508dc00  addiu       $t0, $t0, -0x2400
    ctx->pc = 0x3b0b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958080));
label_3b0b30:
    // 0x3b0b30: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b0b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b0b34:
    // 0x3b0b34: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3b0b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b0b38:
    // 0x3b0b38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3b0b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3b0b3c:
    // 0x3b0b3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b0b40:
    // 0x3b0b40: 0xc10408c  jal         func_410230
label_3b0b44:
    if (ctx->pc == 0x3B0B44u) {
        ctx->pc = 0x3B0B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B40u;
        // 0x3b0b44: 0x352901a1  ori         $t1, $t1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B48u;
        goto label_3b0b48;
    }
    ctx->pc = 0x3B0B40u;
    SET_GPR_U32(ctx, 31, 0x3B0B48u);
    ctx->pc = 0x3B0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B40u;
    // 0x3b0b44: 0x352901a1  ori         $t1, $t1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x3B0B40u, 0x3B0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0B48u;
label_3b0b48:
    // 0x3b0b48: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x3b0b48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_3b0b4c:
    // 0x3b0b4c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b0b50:
    // 0x3b0b50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b0b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b54:
    // 0x3b0b54: 0x2471ce80  addiu       $s1, $v1, -0x3180
    ctx->pc = 0x3b0b54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3b0b58:
    // 0x3b0b58: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x3b0b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
label_3b0b5c:
    // 0x3b0b5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b0b60:
    // 0x3b0b60: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x3b0b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
label_3b0b64:
    // 0x3b0b64: 0x34a501a1  ori         $a1, $a1, 0x1A1
    ctx->pc = 0x3b0b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
label_3b0b68:
    // 0x3b0b68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b6c:
    // 0x3b0b6c: 0x60f809  jalr        $v1
label_3b0b70:
    if (ctx->pc == 0x3B0B70u) {
        ctx->pc = 0x3B0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B6Cu;
        // 0x3b0b70: 0xae220524  sw          $v0, 0x524($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B74u;
        goto label_3b0b74;
    }
    ctx->pc = 0x3B0B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B0B74u);
        ctx->pc = 0x3B0B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B6Cu;
        // 0x3b0b70: 0xae220524  sw          $v0, 0x524($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0B6Cu, 0x3B0B74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0B74u;
label_3b0b74:
    // 0x3b0b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b0b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b78:
    // 0x3b0b78: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_3b0b7c:
    if (ctx->pc == 0x3B0B7Cu) {
        ctx->pc = 0x3B0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B78u;
        // 0x3b0b7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0B80u;
        goto label_3b0b80;
    }
    ctx->pc = 0x3B0B78u;
    {
        const bool branch_taken_0x3b0b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B78u;
        // 0x3b0b7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0b78) {
            ctx->pc = 0x3B0BA4u;
            goto label_3b0ba4;
        }
    }
    ctx->pc = 0x3B0B80u;
label_3b0b80:
    // 0x3b0b80: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3b0b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3b0b84:
    // 0x3b0b84: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3b0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3b0b88:
    // 0x3b0b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b0b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0b8c:
    // 0x3b0b8c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b0b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3b0b90:
    // 0x3b0b90: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x3b0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_3b0b94:
    // 0x3b0b94: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
label_3b0b98:
    // 0x3b0b98: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x3b0b98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_3b0b9c:
    // 0x3b0b9c: 0xc0ec64a  jal         func_3B1928
label_3b0ba0:
    if (ctx->pc == 0x3B0BA0u) {
        ctx->pc = 0x3B0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B9Cu;
        // 0x3b0ba0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BA4u;
        goto label_3b0ba4;
    }
    ctx->pc = 0x3B0B9Cu;
    SET_GPR_U32(ctx, 31, 0x3B0BA4u);
    ctx->pc = 0x3B0BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0B9Cu;
    // 0x3b0ba0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B0B9Cu, 0x3B0BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BA4u;
label_3b0ba4:
    // 0x3b0ba4: 0xae300528  sw          $s0, 0x528($s1)
    ctx->pc = 0x3b0ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1320), GPR_U32(ctx, 16));
label_3b0ba8:
    // 0x3b0ba8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b0ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b0bac:
    // 0x3b0bac: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_3b0bb0:
    if (ctx->pc == 0x3B0BB0u) {
        ctx->pc = 0x3B0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BACu;
        // 0x3b0bb0: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BB4u;
        goto label_3b0bb4;
    }
    ctx->pc = 0x3B0BACu;
    {
        const bool branch_taken_0x3b0bac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BACu;
        // 0x3b0bb0: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bac) {
            ctx->pc = 0x3B0C64u;
            goto label_3b0c64;
        }
    }
    ctx->pc = 0x3B0BB4u;
label_3b0bb4:
    // 0x3b0bb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b0bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b0bb8:
    // 0x3b0bb8: 0x1052002a  beq         $v0, $s2, . + 4 + (0x2A << 2)
label_3b0bbc:
    if (ctx->pc == 0x3B0BBCu) {
        ctx->pc = 0x3B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BB8u;
        // 0x3b0bbc: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BC0u;
        goto label_3b0bc0;
    }
    ctx->pc = 0x3B0BB8u;
    {
        const bool branch_taken_0x3b0bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x3B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BB8u;
        // 0x3b0bbc: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bb8) {
            ctx->pc = 0x3B0C64u;
            goto label_3b0c64;
        }
    }
    ctx->pc = 0x3B0BC0u;
label_3b0bc0:
    // 0x3b0bc0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x3b0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0bc4:
    // 0x3b0bc4: 0xc103642  jal         func_40D908
label_3b0bc8:
    if (ctx->pc == 0x3B0BC8u) {
        ctx->pc = 0x3B0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BC4u;
        // 0x3b0bc8: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BCCu;
        goto label_3b0bcc;
    }
    ctx->pc = 0x3B0BC4u;
    SET_GPR_U32(ctx, 31, 0x3B0BCCu);
    ctx->pc = 0x3B0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BC4u;
    // 0x3b0bc8: 0x34a501a1  ori         $a1, $a1, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3B0BC4u, 0x3B0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BCCu;
label_3b0bcc:
    // 0x3b0bcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3b0bccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0bd0:
    // 0x3b0bd0: 0x52600025  beql        $s3, $zero, . + 4 + (0x25 << 2)
label_3b0bd4:
    if (ctx->pc == 0x3B0BD4u) {
        ctx->pc = 0x3B0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BD0u;
        // 0x3b0bd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BD8u;
        goto label_3b0bd8;
    }
    ctx->pc = 0x3B0BD0u;
    {
        const bool branch_taken_0x3b0bd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0bd0) {
            ctx->pc = 0x3B0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BD0u;
            // 0x3b0bd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0C68u;
            goto label_3b0c68;
        }
    }
    ctx->pc = 0x3B0BD8u;
label_3b0bd8:
    // 0x3b0bd8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3b0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b0bdc:
    // 0x3b0bdc: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_3b0be0:
    if (ctx->pc == 0x3B0BE0u) {
        ctx->pc = 0x3B0BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BDCu;
        // 0x3b0be0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BE4u;
        goto label_3b0be4;
    }
    ctx->pc = 0x3B0BDCu;
    {
        const bool branch_taken_0x3b0bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3b0bdc) {
            ctx->pc = 0x3B0BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0BDCu;
            // 0x3b0be0: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0BF0u;
            goto label_3b0bf0;
        }
    }
    ctx->pc = 0x3B0BE4u;
label_3b0be4:
    // 0x3b0be4: 0xc1036d2  jal         func_40DB48
label_3b0be8:
    if (ctx->pc == 0x3B0BE8u) {
        ctx->pc = 0x3B0BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BE4u;
        // 0x3b0be8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0BECu;
        goto label_3b0bec;
    }
    ctx->pc = 0x3B0BE4u;
    SET_GPR_U32(ctx, 31, 0x3B0BECu);
    ctx->pc = 0x3B0BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0BE4u;
    // 0x3b0be8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B0BE4u, 0x3B0BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0BECu;
label_3b0bec:
    // 0x3b0bec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3b0becu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0bf0:
    // 0x3b0bf0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3b0bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b0bf4:
    // 0x3b0bf4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0bf8:
    // 0x3b0bf8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_3b0bfc:
    if (ctx->pc == 0x3B0BFCu) {
        ctx->pc = 0x3B0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BF8u;
        // 0x3b0bfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C00u;
        goto label_3b0c00;
    }
    ctx->pc = 0x3B0BF8u;
    {
        const bool branch_taken_0x3b0bf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0BF8u;
        // 0x3b0bfc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0bf8) {
            ctx->pc = 0x3B0C0Cu;
            goto label_3b0c0c;
        }
    }
    ctx->pc = 0x3B0C00u;
label_3b0c00:
    // 0x3b0c00: 0xc10376a  jal         func_40DDA8
label_3b0c04:
    if (ctx->pc == 0x3B0C04u) {
        ctx->pc = 0x3B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C00u;
        // 0x3b0c04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C08u;
        goto label_3b0c08;
    }
    ctx->pc = 0x3B0C00u;
    SET_GPR_U32(ctx, 31, 0x3B0C08u);
    ctx->pc = 0x3B0C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C00u;
    // 0x3b0c04: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B0C00u, 0x3B0C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C08u;
label_3b0c08:
    // 0x3b0c08: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b0c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0c0c:
    // 0x3b0c0c: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_3b0c10:
    if (ctx->pc == 0x3B0C10u) {
        ctx->pc = 0x3B0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C0Cu;
        // 0x3b0c10: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C14u;
        goto label_3b0c14;
    }
    ctx->pc = 0x3B0C0Cu;
    {
        const bool branch_taken_0x3b0c0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C0Cu;
        // 0x3b0c10: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c0c) {
            ctx->pc = 0x3B0C50u;
            goto label_3b0c50;
        }
    }
    ctx->pc = 0x3B0C14u;
label_3b0c14:
    // 0x3b0c14: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3b0c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b0c18:
    // 0x3b0c18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b0c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b0c1c:
    // 0x3b0c1c: 0xc103722  jal         func_40DC88
label_3b0c20:
    if (ctx->pc == 0x3B0C20u) {
        ctx->pc = 0x3B0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C1Cu;
        // 0x3b0c20: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C24u;
        goto label_3b0c24;
    }
    ctx->pc = 0x3B0C1Cu;
    SET_GPR_U32(ctx, 31, 0x3B0C24u);
    ctx->pc = 0x3B0C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C1Cu;
    // 0x3b0c20: 0x34c601a1  ori         $a2, $a2, 0x1A1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)417);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B0C1Cu, 0x3B0C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C24u;
label_3b0c24:
    // 0x3b0c24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3b0c28:
    if (ctx->pc == 0x3B0C28u) {
        ctx->pc = 0x3B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C24u;
        // 0x3b0c28: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C2Cu;
        goto label_3b0c2c;
    }
    ctx->pc = 0x3B0C24u;
    {
        const bool branch_taken_0x3b0c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C24u;
        // 0x3b0c28: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0c24) {
            ctx->pc = 0x3B0C40u;
            goto label_3b0c40;
        }
    }
    ctx->pc = 0x3B0C2Cu;
label_3b0c2c:
    // 0x3b0c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0c30:
    // 0x3b0c30: 0x2260018  mult        $zero, $s1, $a2
    ctx->pc = 0x3b0c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b0c34:
    // 0x3b0c34: 0x3012  mflo        $a2
    ctx->pc = 0x3b0c34u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_3b0c38:
    // 0x3b0c38: 0xc0bb778  jal         func_2EDDE0
label_3b0c3c:
    if (ctx->pc == 0x3B0C3Cu) {
        ctx->pc = 0x3B0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C38u;
        // 0x3b0c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C40u;
        goto label_3b0c40;
    }
    ctx->pc = 0x3B0C38u;
    SET_GPR_U32(ctx, 31, 0x3B0C40u);
    ctx->pc = 0x3B0C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C38u;
    // 0x3b0c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B0C38u, 0x3B0C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C40u;
label_3b0c40:
    // 0x3b0c40: 0x2683e880  addiu       $v1, $s4, -0x1780
    ctx->pc = 0x3b0c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961280));
label_3b0c44:
    // 0x3b0c44: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3b0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3b0c48:
    // 0x3b0c48: 0x40f809  jalr        $v0
label_3b0c4c:
    if (ctx->pc == 0x3B0C4Cu) {
        ctx->pc = 0x3B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C48u;
        // 0x3b0c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C50u;
        goto label_3b0c50;
    }
    ctx->pc = 0x3B0C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B0C50u);
        ctx->pc = 0x3B0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C48u;
        // 0x3b0c4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0C48u, 0x3B0C50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B0C50u;
label_3b0c50:
    // 0x3b0c50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3b0c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3b0c54:
    // 0x3b0c54: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x3b0c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_3b0c58:
    // 0x3b0c58: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x3b0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3b0c5c:
    // 0x3b0c5c: 0xc0ec64a  jal         func_3B1928
label_3b0c60:
    if (ctx->pc == 0x3B0C60u) {
        ctx->pc = 0x3B0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C5Cu;
        // 0x3b0c60: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C64u;
        goto label_3b0c64;
    }
    ctx->pc = 0x3B0C5Cu;
    SET_GPR_U32(ctx, 31, 0x3B0C64u);
    ctx->pc = 0x3B0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0C5Cu;
    // 0x3b0c60: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1928u, 0x3B0C5Cu, 0x3B0C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0C64u;
label_3b0c64:
    // 0x3b0c64: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3b0c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b0c68:
    // 0x3b0c68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b0c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b0c6c:
    // 0x3b0c6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b0c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b0c70:
    // 0x3b0c70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b0c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b0c74:
    // 0x3b0c74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3b0c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b0c78:
    // 0x3b0c78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3b0c78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b0c7c:
    // 0x3b0c7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b0c80:
    // 0x3b0c80: 0x3e00008  jr          $ra
label_3b0c84:
    if (ctx->pc == 0x3B0C84u) {
        ctx->pc = 0x3B0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C80u;
        // 0x3b0c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B0C88u;
        goto label_fallthrough_0x3b0c80;
    }
    ctx->pc = 0x3B0C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0C80u;
        // 0x3b0c84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b0c80:
    ctx->pc = 0x3B0C88u;
}
