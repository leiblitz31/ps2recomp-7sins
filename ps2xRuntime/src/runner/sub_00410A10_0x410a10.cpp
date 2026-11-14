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

// Function: sub_00410A10
// Address: 0x410a10 - 0x410b10
void sub_00410A10_0x410a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410A10_0x410a10");
#endif

    switch (ctx->pc) {
        case 0x410a10u: goto label_410a10;
        case 0x410a14u: goto label_410a14;
        case 0x410a18u: goto label_410a18;
        case 0x410a1cu: goto label_410a1c;
        case 0x410a20u: goto label_410a20;
        case 0x410a24u: goto label_410a24;
        case 0x410a28u: goto label_410a28;
        case 0x410a2cu: goto label_410a2c;
        case 0x410a30u: goto label_410a30;
        case 0x410a34u: goto label_410a34;
        case 0x410a38u: goto label_410a38;
        case 0x410a3cu: goto label_410a3c;
        case 0x410a40u: goto label_410a40;
        case 0x410a44u: goto label_410a44;
        case 0x410a48u: goto label_410a48;
        case 0x410a4cu: goto label_410a4c;
        case 0x410a50u: goto label_410a50;
        case 0x410a54u: goto label_410a54;
        case 0x410a58u: goto label_410a58;
        case 0x410a5cu: goto label_410a5c;
        case 0x410a60u: goto label_410a60;
        case 0x410a64u: goto label_410a64;
        case 0x410a68u: goto label_410a68;
        case 0x410a6cu: goto label_410a6c;
        case 0x410a70u: goto label_410a70;
        case 0x410a74u: goto label_410a74;
        case 0x410a78u: goto label_410a78;
        case 0x410a7cu: goto label_410a7c;
        case 0x410a80u: goto label_410a80;
        case 0x410a84u: goto label_410a84;
        case 0x410a88u: goto label_410a88;
        case 0x410a8cu: goto label_410a8c;
        case 0x410a90u: goto label_410a90;
        case 0x410a94u: goto label_410a94;
        case 0x410a98u: goto label_410a98;
        case 0x410a9cu: goto label_410a9c;
        case 0x410aa0u: goto label_410aa0;
        case 0x410aa4u: goto label_410aa4;
        case 0x410aa8u: goto label_410aa8;
        case 0x410aacu: goto label_410aac;
        case 0x410ab0u: goto label_410ab0;
        case 0x410ab4u: goto label_410ab4;
        case 0x410ab8u: goto label_410ab8;
        case 0x410abcu: goto label_410abc;
        case 0x410ac0u: goto label_410ac0;
        case 0x410ac4u: goto label_410ac4;
        case 0x410ac8u: goto label_410ac8;
        case 0x410accu: goto label_410acc;
        case 0x410ad0u: goto label_410ad0;
        case 0x410ad4u: goto label_410ad4;
        case 0x410ad8u: goto label_410ad8;
        case 0x410adcu: goto label_410adc;
        case 0x410ae0u: goto label_410ae0;
        case 0x410ae4u: goto label_410ae4;
        case 0x410ae8u: goto label_410ae8;
        case 0x410aecu: goto label_410aec;
        case 0x410af0u: goto label_410af0;
        case 0x410af4u: goto label_410af4;
        case 0x410af8u: goto label_410af8;
        case 0x410afcu: goto label_410afc;
        case 0x410b00u: goto label_410b00;
        case 0x410b04u: goto label_410b04;
        case 0x410b08u: goto label_410b08;
        case 0x410b0cu: goto label_410b0c;
        default: break;
    }

    ctx->pc = 0x410a10u;

label_410a10:
    // 0x410a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x410a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_410a14:
    // 0x410a14: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x410a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_410a18:
    // 0x410a18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x410a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_410a1c:
    // 0x410a1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x410a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410a20:
    // 0x410a20: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x410a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_410a24:
    // 0x410a24: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x410a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_410a28:
    // 0x410a28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x410a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_410a2c:
    // 0x410a2c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x410a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_410a30:
    // 0x410a30: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x410a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_410a34:
    // 0x410a34: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x410a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_410a38:
    // 0x410a38: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x410a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_410a3c:
    // 0x410a3c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x410a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_410a40:
    // 0x410a40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x410a40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_410a44:
    // 0x410a44: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x410a44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410a48:
    // 0x410a48: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
label_410a4c:
    if (ctx->pc == 0x410A4Cu) {
        ctx->pc = 0x410A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A48u;
        // 0x410a4c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A50u;
        goto label_410a50;
    }
    ctx->pc = 0x410A48u;
    {
        const bool branch_taken_0x410a48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x410A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A48u;
        // 0x410a4c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410a48) {
            ctx->pc = 0x410A84u;
            goto label_410a84;
        }
    }
    ctx->pc = 0x410A50u;
label_410a50:
    // 0x410a50: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x410a50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_410a54:
    // 0x410a54: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x410a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410a58:
    // 0x410a58: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x410a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_410a5c:
    // 0x410a5c: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x410a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_410a60:
    // 0x410a60: 0x8e46010c  lw          $a2, 0x10C($s2)
    ctx->pc = 0x410a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_410a64:
    // 0x410a64: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x410a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_410a68:
    // 0x410a68: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x410a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_410a6c:
    // 0x410a6c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x410a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_410a70:
    // 0x410a70: 0xc0f809  jalr        $a2
label_410a74:
    if (ctx->pc == 0x410A74u) {
        ctx->pc = 0x410A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A70u;
        // 0x410a74: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A78u;
        goto label_410a78;
    }
    ctx->pc = 0x410A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x410A78u);
        ctx->pc = 0x410A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A70u;
        // 0x410a74: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410A70u, 0x410A78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410A78u;
label_410a78:
    // 0x410a78: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x410a78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410a7c:
    // 0x410a7c: 0x54f1fff6  bnel        $a3, $s1, . + 4 + (-0xA << 2)
label_410a80:
    if (ctx->pc == 0x410A80u) {
        ctx->pc = 0x410A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A7Cu;
        // 0x410a80: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A84u;
        goto label_410a84;
    }
    ctx->pc = 0x410A7Cu;
    {
        const bool branch_taken_0x410a7c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x410a7c) {
            ctx->pc = 0x410A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410A7Cu;
            // 0x410a80: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_410a58;
        }
    }
    ctx->pc = 0x410A84u;
label_410a84:
    // 0x410a84: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x410a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_410a88:
    // 0x410a88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x410a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_410a8c:
    // 0x410a8c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_410a90:
    if (ctx->pc == 0x410A90u) {
        ctx->pc = 0x410A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A8Cu;
        // 0x410a90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410A94u;
        goto label_410a94;
    }
    ctx->pc = 0x410A8Cu;
    {
        const bool branch_taken_0x410a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410a8c) {
            ctx->pc = 0x410A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x410A8Cu;
            // 0x410a90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x410AD0u;
            goto label_410ad0;
        }
    }
    ctx->pc = 0x410A94u;
label_410a94:
    // 0x410a94: 0x8f84ad30  lw          $a0, -0x52D0($gp)
    ctx->pc = 0x410a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
label_410a98:
    // 0x410a98: 0x10900004  beq         $a0, $s0, . + 4 + (0x4 << 2)
label_410a9c:
    if (ctx->pc == 0x410A9Cu) {
        ctx->pc = 0x410A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A98u;
        // 0x410a9c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AA0u;
        goto label_410aa0;
    }
    ctx->pc = 0x410A98u;
    {
        const bool branch_taken_0x410a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x410A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410A98u;
        // 0x410a9c: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410a98) {
            ctx->pc = 0x410AACu;
            goto label_410aac;
        }
    }
    ctx->pc = 0x410AA0u;
label_410aa0:
    // 0x410aa0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_410aa4:
    if (ctx->pc == 0x410AA4u) {
        ctx->pc = 0x410AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AA0u;
        // 0x410aa4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AA8u;
        goto label_410aa8;
    }
    ctx->pc = 0x410AA0u;
    {
        const bool branch_taken_0x410aa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x410AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AA0u;
        // 0x410aa4: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410aa0) {
            ctx->pc = 0x410AC0u;
            goto label_410ac0;
        }
    }
    ctx->pc = 0x410AA8u;
label_410aa8:
    // 0x410aa8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x410aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_410aac:
    // 0x410aac: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x410aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_410ab0:
    // 0x410ab0: 0x40f809  jalr        $v0
label_410ab4:
    if (ctx->pc == 0x410AB4u) {
        ctx->pc = 0x410AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AB0u;
        // 0x410ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AB8u;
        goto label_410ab8;
    }
    ctx->pc = 0x410AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410AB8u);
        ctx->pc = 0x410AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AB0u;
        // 0x410ab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410AB0u, 0x410AB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410AB8u;
label_410ab8:
    // 0x410ab8: 0x10000005  b           . + 4 + (0x5 << 2)
label_410abc:
    if (ctx->pc == 0x410ABCu) {
        ctx->pc = 0x410ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AB8u;
        // 0x410abc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AC0u;
        goto label_410ac0;
    }
    ctx->pc = 0x410AB8u;
    {
        const bool branch_taken_0x410ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AB8u;
        // 0x410abc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410ab8) {
            ctx->pc = 0x410AD0u;
            goto label_410ad0;
        }
    }
    ctx->pc = 0x410AC0u;
label_410ac0:
    // 0x410ac0: 0x8c62e99c  lw          $v0, -0x1664($v1)
    ctx->pc = 0x410ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961564)));
label_410ac4:
    // 0x410ac4: 0x40f809  jalr        $v0
label_410ac8:
    if (ctx->pc == 0x410AC8u) {
        ctx->pc = 0x410AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AC4u;
        // 0x410ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410ACCu;
        goto label_410acc;
    }
    ctx->pc = 0x410AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410ACCu);
        ctx->pc = 0x410AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AC4u;
        // 0x410ac8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410AC4u, 0x410ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410ACCu;
label_410acc:
    // 0x410acc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x410accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410ad0:
    // 0x410ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x410ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410ad4:
    // 0x410ad4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x410ad4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410ad8:
    // 0x410ad8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x410ad8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410adc:
    // 0x410adc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410ae0:
    // 0x410ae0: 0x3e00008  jr          $ra
label_410ae4:
    if (ctx->pc == 0x410AE4u) {
        ctx->pc = 0x410AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AE0u;
        // 0x410ae4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410AE8u;
        goto label_410ae8;
    }
    ctx->pc = 0x410AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AE0u;
        // 0x410ae4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410AE8u;
label_410ae8:
    // 0x410ae8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x410ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_410aec:
    // 0x410aec: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x410aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_410af0:
    // 0x410af0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x410af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_410af4:
    // 0x410af4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x410af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_410af8:
    // 0x410af8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x410af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_410afc:
    // 0x410afc: 0x3e00008  jr          $ra
label_410b00:
    if (ctx->pc == 0x410B00u) {
        ctx->pc = 0x410B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AFCu;
        // 0x410b00: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B04u;
        goto label_410b04;
    }
    ctx->pc = 0x410AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410AFCu;
        // 0x410b00: 0xac830018  sw          $v1, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x410B04u;
label_410b04:
    // 0x410b04: 0x0  nop
    ctx->pc = 0x410b04u;
    // NOP
label_410b08:
    // 0x410b08: 0x3e00008  jr          $ra
label_410b0c:
    if (ctx->pc == 0x410B0Cu) {
        ctx->pc = 0x410B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B08u;
        // 0x410b0c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410B10u;
        goto label_fallthrough_0x410b08;
    }
    ctx->pc = 0x410B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410B08u;
        // 0x410b0c: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x410b08:
    ctx->pc = 0x410B10u;
}
