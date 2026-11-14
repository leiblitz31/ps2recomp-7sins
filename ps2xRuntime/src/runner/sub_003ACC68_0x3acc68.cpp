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

// Function: sub_003ACC68
// Address: 0x3acc68 - 0x3acd38
void sub_003ACC68_0x3acc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ACC68_0x3acc68");
#endif

    switch (ctx->pc) {
        case 0x3acc68u: goto label_3acc68;
        case 0x3acc6cu: goto label_3acc6c;
        case 0x3acc70u: goto label_3acc70;
        case 0x3acc74u: goto label_3acc74;
        case 0x3acc78u: goto label_3acc78;
        case 0x3acc7cu: goto label_3acc7c;
        case 0x3acc80u: goto label_3acc80;
        case 0x3acc84u: goto label_3acc84;
        case 0x3acc88u: goto label_3acc88;
        case 0x3acc8cu: goto label_3acc8c;
        case 0x3acc90u: goto label_3acc90;
        case 0x3acc94u: goto label_3acc94;
        case 0x3acc98u: goto label_3acc98;
        case 0x3acc9cu: goto label_3acc9c;
        case 0x3acca0u: goto label_3acca0;
        case 0x3acca4u: goto label_3acca4;
        case 0x3acca8u: goto label_3acca8;
        case 0x3accacu: goto label_3accac;
        case 0x3accb0u: goto label_3accb0;
        case 0x3accb4u: goto label_3accb4;
        case 0x3accb8u: goto label_3accb8;
        case 0x3accbcu: goto label_3accbc;
        case 0x3accc0u: goto label_3accc0;
        case 0x3accc4u: goto label_3accc4;
        case 0x3accc8u: goto label_3accc8;
        case 0x3accccu: goto label_3acccc;
        case 0x3accd0u: goto label_3accd0;
        case 0x3accd4u: goto label_3accd4;
        case 0x3accd8u: goto label_3accd8;
        case 0x3accdcu: goto label_3accdc;
        case 0x3acce0u: goto label_3acce0;
        case 0x3acce4u: goto label_3acce4;
        case 0x3acce8u: goto label_3acce8;
        case 0x3accecu: goto label_3accec;
        case 0x3accf0u: goto label_3accf0;
        case 0x3accf4u: goto label_3accf4;
        case 0x3accf8u: goto label_3accf8;
        case 0x3accfcu: goto label_3accfc;
        case 0x3acd00u: goto label_3acd00;
        case 0x3acd04u: goto label_3acd04;
        case 0x3acd08u: goto label_3acd08;
        case 0x3acd0cu: goto label_3acd0c;
        case 0x3acd10u: goto label_3acd10;
        case 0x3acd14u: goto label_3acd14;
        case 0x3acd18u: goto label_3acd18;
        case 0x3acd1cu: goto label_3acd1c;
        case 0x3acd20u: goto label_3acd20;
        case 0x3acd24u: goto label_3acd24;
        case 0x3acd28u: goto label_3acd28;
        case 0x3acd2cu: goto label_3acd2c;
        case 0x3acd30u: goto label_3acd30;
        case 0x3acd34u: goto label_3acd34;
        default: break;
    }

    ctx->pc = 0x3acc68u;

label_3acc68:
    // 0x3acc68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3acc68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3acc6c:
    // 0x3acc6c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3acc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3acc70:
    // 0x3acc70: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3acc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3acc74:
    // 0x3acc74: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3acc74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3acc78:
    // 0x3acc78: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3acc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3acc7c:
    // 0x3acc7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3acc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3acc80:
    // 0x3acc80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3acc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3acc84:
    // 0x3acc84: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x3acc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_3acc88:
    // 0x3acc88: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_3acc8c:
    if (ctx->pc == 0x3ACC8Cu) {
        ctx->pc = 0x3ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC88u;
        // 0x3acc8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACC90u;
        goto label_3acc90;
    }
    ctx->pc = 0x3ACC88u;
    {
        const bool branch_taken_0x3acc88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACC88u;
        // 0x3acc8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acc88) {
            ctx->pc = 0x3ACD0Cu;
            goto label_3acd0c;
        }
    }
    ctx->pc = 0x3ACC90u;
label_3acc90:
    // 0x3acc90: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3acc94:
    // 0x3acc94: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3acc94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3acc98:
    // 0x3acc98: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x3acc98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3acc9c:
    // 0x3acc9c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x3acc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_3acca0:
    // 0x3acca0: 0x40f809  jalr        $v0
label_3acca4:
    if (ctx->pc == 0x3ACCA4u) {
        ctx->pc = 0x3ACCA8u;
        goto label_3acca8;
    }
    ctx->pc = 0x3ACCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACCA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACCA0u, 0x3ACCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACCA8u;
label_3acca8:
    // 0x3acca8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3acca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3accac:
    // 0x3accac: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x3accacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3accb0:
    // 0x3accb0: 0x2471ce80  addiu       $s1, $v1, -0x3180
    ctx->pc = 0x3accb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_3accb4:
    // 0x3accb4: 0x8e220510  lw          $v0, 0x510($s1)
    ctx->pc = 0x3accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1296)));
label_3accb8:
    // 0x3accb8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3accb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3accbc:
    // 0x3accbc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3accc0:
    if (ctx->pc == 0x3ACCC0u) {
        ctx->pc = 0x3ACCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCBCu;
        // 0x3accc0: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCC4u;
        goto label_3accc4;
    }
    ctx->pc = 0x3ACCBCu;
    {
        const bool branch_taken_0x3accbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCBCu;
        // 0x3accc0: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3accbc) {
            ctx->pc = 0x3ACCECu;
            goto label_3accec;
        }
    }
    ctx->pc = 0x3ACCC4u;
label_3accc4:
    // 0x3accc4: 0x3c060104  lui         $a2, 0x104
    ctx->pc = 0x3accc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)260 << 16));
label_3accc8:
    // 0x3accc8: 0x8e620110  lw          $v0, 0x110($s3)
    ctx->pc = 0x3accc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_3acccc:
    // 0x3acccc: 0x8e24050c  lw          $a0, 0x50C($s1)
    ctx->pc = 0x3accccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1292)));
label_3accd0:
    // 0x3accd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3accd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3accd4:
    // 0x3accd4: 0x40f809  jalr        $v0
label_3accd8:
    if (ctx->pc == 0x3ACCD8u) {
        ctx->pc = 0x3ACCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCD4u;
        // 0x3accd8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCDCu;
        goto label_3accdc;
    }
    ctx->pc = 0x3ACCD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACCDCu);
        ctx->pc = 0x3ACCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCD4u;
        // 0x3accd8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACCD4u, 0x3ACCDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACCDCu;
label_3accdc:
    // 0x3accdc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3acce0:
    if (ctx->pc == 0x3ACCE0u) {
        ctx->pc = 0x3ACCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCDCu;
        // 0x3acce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACCE4u;
        goto label_3acce4;
    }
    ctx->pc = 0x3ACCDCu;
    {
        const bool branch_taken_0x3accdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3accdc) {
            ctx->pc = 0x3ACCE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ACCDCu;
            // 0x3acce0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ACD10u;
            goto label_3acd10;
        }
    }
    ctx->pc = 0x3ACCE4u;
label_3acce4:
    // 0x3acce4: 0xae300510  sw          $s0, 0x510($s1)
    ctx->pc = 0x3acce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1296), GPR_U32(ctx, 16));
label_3acce8:
    // 0x3acce8: 0xae22050c  sw          $v0, 0x50C($s1)
    ctx->pc = 0x3acce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1292), GPR_U32(ctx, 2));
label_3accec:
    // 0x3accec: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x3accecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_3accf0:
    // 0x3accf0: 0x2686ce80  addiu       $a2, $s4, -0x3180
    ctx->pc = 0x3accf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
label_3accf4:
    // 0x3accf4: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x3accf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_3accf8:
    // 0x3accf8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3accf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3accfc:
    // 0x3accfc: 0x40f809  jalr        $v0
label_3acd00:
    if (ctx->pc == 0x3ACD00u) {
        ctx->pc = 0x3ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCFCu;
        // 0x3acd00: 0x8cc4050c  lw          $a0, 0x50C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD04u;
        goto label_3acd04;
    }
    ctx->pc = 0x3ACCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ACD04u);
        ctx->pc = 0x3ACD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACCFCu;
        // 0x3acd00: 0x8cc4050c  lw          $a0, 0x50C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1292)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACCFCu, 0x3ACD04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ACD04u;
label_3acd04:
    // 0x3acd04: 0x10000002  b           . + 4 + (0x2 << 2)
label_3acd08:
    if (ctx->pc == 0x3ACD08u) {
        ctx->pc = 0x3ACD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD04u;
        // 0x3acd08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD0Cu;
        goto label_3acd0c;
    }
    ctx->pc = 0x3ACD04u;
    {
        const bool branch_taken_0x3acd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ACD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD04u;
        // 0x3acd08: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3acd04) {
            ctx->pc = 0x3ACD10u;
            goto label_3acd10;
        }
    }
    ctx->pc = 0x3ACD0Cu;
label_3acd0c:
    // 0x3acd0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3acd0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3acd10:
    // 0x3acd10: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3acd10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3acd14:
    // 0x3acd14: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3acd14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3acd18:
    // 0x3acd18: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3acd18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3acd1c:
    // 0x3acd1c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3acd1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3acd20:
    // 0x3acd20: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3acd20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3acd24:
    // 0x3acd24: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x3acd24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3acd28:
    // 0x3acd28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3acd28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3acd2c:
    // 0x3acd2c: 0x3e00008  jr          $ra
label_3acd30:
    if (ctx->pc == 0x3ACD30u) {
        ctx->pc = 0x3ACD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD2Cu;
        // 0x3acd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ACD34u;
        goto label_3acd34;
    }
    ctx->pc = 0x3ACD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ACD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ACD2Cu;
        // 0x3acd30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ACD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ACD34u;
label_3acd34:
    // 0x3acd34: 0x0  nop
    ctx->pc = 0x3acd34u;
    // NOP
    ctx->pc = 0x3acd38u;
}
