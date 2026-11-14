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

// Function: sub_00383A38
// Address: 0x383a38 - 0x383af8
void sub_00383A38_0x383a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383A38_0x383a38");
#endif

    switch (ctx->pc) {
        case 0x383a38u: goto label_383a38;
        case 0x383a3cu: goto label_383a3c;
        case 0x383a40u: goto label_383a40;
        case 0x383a44u: goto label_383a44;
        case 0x383a48u: goto label_383a48;
        case 0x383a4cu: goto label_383a4c;
        case 0x383a50u: goto label_383a50;
        case 0x383a54u: goto label_383a54;
        case 0x383a58u: goto label_383a58;
        case 0x383a5cu: goto label_383a5c;
        case 0x383a60u: goto label_383a60;
        case 0x383a64u: goto label_383a64;
        case 0x383a68u: goto label_383a68;
        case 0x383a6cu: goto label_383a6c;
        case 0x383a70u: goto label_383a70;
        case 0x383a74u: goto label_383a74;
        case 0x383a78u: goto label_383a78;
        case 0x383a7cu: goto label_383a7c;
        case 0x383a80u: goto label_383a80;
        case 0x383a84u: goto label_383a84;
        case 0x383a88u: goto label_383a88;
        case 0x383a8cu: goto label_383a8c;
        case 0x383a90u: goto label_383a90;
        case 0x383a94u: goto label_383a94;
        case 0x383a98u: goto label_383a98;
        case 0x383a9cu: goto label_383a9c;
        case 0x383aa0u: goto label_383aa0;
        case 0x383aa4u: goto label_383aa4;
        case 0x383aa8u: goto label_383aa8;
        case 0x383aacu: goto label_383aac;
        case 0x383ab0u: goto label_383ab0;
        case 0x383ab4u: goto label_383ab4;
        case 0x383ab8u: goto label_383ab8;
        case 0x383abcu: goto label_383abc;
        case 0x383ac0u: goto label_383ac0;
        case 0x383ac4u: goto label_383ac4;
        case 0x383ac8u: goto label_383ac8;
        case 0x383accu: goto label_383acc;
        case 0x383ad0u: goto label_383ad0;
        case 0x383ad4u: goto label_383ad4;
        case 0x383ad8u: goto label_383ad8;
        case 0x383adcu: goto label_383adc;
        case 0x383ae0u: goto label_383ae0;
        case 0x383ae4u: goto label_383ae4;
        case 0x383ae8u: goto label_383ae8;
        case 0x383aecu: goto label_383aec;
        case 0x383af0u: goto label_383af0;
        case 0x383af4u: goto label_383af4;
        default: break;
    }

    ctx->pc = 0x383a38u;

label_383a38:
    // 0x383a38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x383a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_383a3c:
    // 0x383a3c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x383a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_383a40:
    // 0x383a40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x383a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_383a44:
    // 0x383a44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x383a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383a48:
    // 0x383a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x383a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_383a4c:
    // 0x383a4c: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x383a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_383a50:
    // 0x383a50: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x383a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_383a54:
    // 0x383a54: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x383a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383a58:
    // 0x383a58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x383a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_383a5c:
    // 0x383a5c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_383a60:
    if (ctx->pc == 0x383A60u) {
        ctx->pc = 0x383A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A5Cu;
        // 0x383a60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A64u;
        goto label_383a64;
    }
    ctx->pc = 0x383A5Cu;
    {
        const bool branch_taken_0x383a5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A5Cu;
        // 0x383a60: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a5c) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383A64u;
label_383a64:
    // 0x383a64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x383a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_383a68:
    // 0x383a68: 0xc103468  jal         func_40D1A0
label_383a6c:
    if (ctx->pc == 0x383A6Cu) {
        ctx->pc = 0x383A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A68u;
        // 0x383a6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A70u;
        goto label_383a70;
    }
    ctx->pc = 0x383A68u;
    SET_GPR_U32(ctx, 31, 0x383A70u);
    ctx->pc = 0x383A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383A68u;
    // 0x383a6c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x383A68u, 0x383A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383A70u;
label_383a70:
    // 0x383a70: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_383a74:
    if (ctx->pc == 0x383A74u) {
        ctx->pc = 0x383A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A70u;
        // 0x383a74: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A78u;
        goto label_383a78;
    }
    ctx->pc = 0x383A70u;
    {
        const bool branch_taken_0x383a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A70u;
        // 0x383a74: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a70) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383A78u;
label_383a78:
    // 0x383a78: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x383a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_383a7c:
    // 0x383a7c: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x383a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_383a80:
    // 0x383a80: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x383a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_383a84:
    // 0x383a84: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x383a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_383a88:
    // 0x383a88: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x383a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_383a8c:
    // 0x383a8c: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x383a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_383a90:
    // 0x383a90: 0x40f809  jalr        $v0
label_383a94:
    if (ctx->pc == 0x383A94u) {
        ctx->pc = 0x383A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A90u;
        // 0x383a94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A98u;
        goto label_383a98;
    }
    ctx->pc = 0x383A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383A98u);
        ctx->pc = 0x383A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A90u;
        // 0x383a94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383A90u, 0x383A98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383A98u;
label_383a98:
    // 0x383a98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x383a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_383a9c:
    // 0x383a9c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_383aa0:
    if (ctx->pc == 0x383AA0u) {
        ctx->pc = 0x383AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A9Cu;
        // 0x383aa0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AA4u;
        goto label_383aa4;
    }
    ctx->pc = 0x383A9Cu;
    {
        const bool branch_taken_0x383a9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x383AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A9Cu;
        // 0x383aa0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383a9c) {
            ctx->pc = 0x383AD0u;
            goto label_383ad0;
        }
    }
    ctx->pc = 0x383AA4u;
label_383aa4:
    // 0x383aa4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x383aa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383aa8:
    // 0x383aa8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x383aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_383aac:
    // 0x383aac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x383aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_383ab0:
    // 0x383ab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x383ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_383ab4:
    // 0x383ab4: 0xc0e0836  jal         func_3820D8
label_383ab8:
    if (ctx->pc == 0x383AB8u) {
        ctx->pc = 0x383AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AB4u;
        // 0x383ab8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383ABCu;
        goto label_383abc;
    }
    ctx->pc = 0x383AB4u;
    SET_GPR_U32(ctx, 31, 0x383ABCu);
    ctx->pc = 0x383AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383AB4u;
    // 0x383ab8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3820D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3820D8u, 0x383AB4u, 0x383ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383ABCu;
label_383abc:
    // 0x383abc: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x383abcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_383ac0:
    // 0x383ac0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x383ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_383ac4:
    // 0x383ac4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x383ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_383ac8:
    // 0x383ac8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_383acc:
    if (ctx->pc == 0x383ACCu) {
        ctx->pc = 0x383ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AC8u;
        // 0x383acc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AD0u;
        goto label_383ad0;
    }
    ctx->pc = 0x383AC8u;
    {
        const bool branch_taken_0x383ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x383ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AC8u;
        // 0x383acc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383ac8) {
            ctx->pc = 0x383AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383aa8;
        }
    }
    ctx->pc = 0x383AD0u;
label_383ad0:
    // 0x383ad0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x383ad0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_383ad4:
    // 0x383ad4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x383ad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383ad8:
    // 0x383ad8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x383ad8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383adc:
    // 0x383adc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x383adcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383ae0:
    // 0x383ae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x383ae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_383ae4:
    // 0x383ae4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x383ae4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_383ae8:
    // 0x383ae8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_383aec:
    // 0x383aec: 0x3e00008  jr          $ra
label_383af0:
    if (ctx->pc == 0x383AF0u) {
        ctx->pc = 0x383AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AECu;
        // 0x383af0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383AF4u;
        goto label_383af4;
    }
    ctx->pc = 0x383AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383AECu;
        // 0x383af0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383AF4u;
label_383af4:
    // 0x383af4: 0x0  nop
    ctx->pc = 0x383af4u;
    // NOP
    ctx->pc = 0x383af8u;
}
