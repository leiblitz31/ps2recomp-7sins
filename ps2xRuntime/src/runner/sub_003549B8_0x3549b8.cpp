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

// Function: sub_003549B8
// Address: 0x3549b8 - 0x354bc0
void sub_003549B8_0x3549b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003549B8_0x3549b8");
#endif

    ctx->pc = 0x3549b8u;

    // 0x3549b8: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x3549b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x3549bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3549bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3549c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3549c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3549c4: 0x246e0050  addiu       $t6, $v1, 0x50
    ctx->pc = 0x3549c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3549c8: 0x8dcd004c  lw          $t5, 0x4C($t6)
    ctx->pc = 0x3549c8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 76)));
    // 0x3549cc: 0x8da200d8  lw          $v0, 0xD8($t5)
    ctx->pc = 0x3549ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 216)));
    // 0x3549d0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x3549D0u;
    {
        const bool branch_taken_0x3549d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3549d0) {
            ctx->pc = 0x354A80u;
            goto label_354a80;
        }
    }
    ctx->pc = 0x3549D8u;
    // 0x3549d8: 0x8da300e4  lw          $v1, 0xE4($t5)
    ctx->pc = 0x3549d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 228)));
    // 0x3549dc: 0x8da200e8  lw          $v0, 0xE8($t5)
    ctx->pc = 0x3549dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 232)));
    // 0x3549e0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3549e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3549e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3549E4u;
    {
        const bool branch_taken_0x3549e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3549E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549E4u;
        // 0x3549e8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549e4) {
            ctx->pc = 0x3549F4u;
            goto label_3549f4;
        }
    }
    ctx->pc = 0x3549ECu;
    // 0x3549ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3549ECu;
    {
        const bool branch_taken_0x3549ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3549F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549ECu;
        // 0x3549f0: 0xada200e4  sw          $v0, 0xE4($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549ec) {
            ctx->pc = 0x3549F8u;
            goto label_3549f8;
        }
    }
    ctx->pc = 0x3549F4u;
label_3549f4:
    // 0x3549f4: 0xada000e4  sw          $zero, 0xE4($t5)
    ctx->pc = 0x3549f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 228), GPR_U32(ctx, 0));
label_3549f8:
    // 0x3549f8: 0x8da200e8  lw          $v0, 0xE8($t5)
    ctx->pc = 0x3549f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 232)));
    // 0x3549fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3549FCu;
    {
        const bool branch_taken_0x3549fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x354A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3549FCu;
        // 0x354a00: 0x25a50140  addiu       $a1, $t5, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3549fc) {
            ctx->pc = 0x354A68u;
            goto label_354a68;
        }
    }
    ctx->pc = 0x354A04u;
    // 0x354a04: 0x8da300e4  lw          $v1, 0xE4($t5)
    ctx->pc = 0x354a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 228)));
    // 0x354a08: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x354a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x354a0c: 0x25c40004  addiu       $a0, $t6, 0x4
    ctx->pc = 0x354a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x354a10: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x354a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x354a14: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x354a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x354a18: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x354a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354a1c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x354a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x354a20: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x354a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x354a24: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x354a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x354a28: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x354a28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x354a2c: 0x8c48000c  lw          $t0, 0xC($v0)
    ctx->pc = 0x354a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x354a30: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x354a30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x354a34: 0x8c4a0014  lw          $t2, 0x14($v0)
    ctx->pc = 0x354a34u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x354a38: 0x8c4b0018  lw          $t3, 0x18($v0)
    ctx->pc = 0x354a38u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x354a3c: 0x8c4c001c  lw          $t4, 0x1C($v0)
    ctx->pc = 0x354a3cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x354a40: 0xadc50004  sw          $a1, 0x4($t6)
    ctx->pc = 0x354a40u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 5));
    // 0x354a44: 0xac860040  sw          $a2, 0x40($a0)
    ctx->pc = 0x354a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 6));
    // 0x354a48: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x354a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x354a4c: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x354a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
    // 0x354a50: 0xac880018  sw          $t0, 0x18($a0)
    ctx->pc = 0x354a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 8));
    // 0x354a54: 0xac890020  sw          $t1, 0x20($a0)
    ctx->pc = 0x354a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 9));
    // 0x354a58: 0xac8a0028  sw          $t2, 0x28($a0)
    ctx->pc = 0x354a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 10));
    // 0x354a5c: 0xac8b0030  sw          $t3, 0x30($a0)
    ctx->pc = 0x354a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 11));
    // 0x354a60: 0xac8c0038  sw          $t4, 0x38($a0)
    ctx->pc = 0x354a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 12));
    // 0x354a64: 0x0  nop
    ctx->pc = 0x354a64u;
    // NOP
label_354a68:
    // 0x354a68: 0x8da300e4  lw          $v1, 0xE4($t5)
    ctx->pc = 0x354a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 228)));
    // 0x354a6c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x354a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x354a70: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x354a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x354a74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x354a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x354a78: 0x3e00008  jr          $ra
    ctx->pc = 0x354A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A78u;
        // 0x354a7c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354A80u;
label_354a80:
    // 0x354a80: 0x3e00008  jr          $ra
    ctx->pc = 0x354A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354A80u;
        // 0x354a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354A88u;
    // 0x354a88: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354a8c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x354a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354a90: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x354a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354a94: 0x8c64009c  lw          $a0, 0x9C($v1)
    ctx->pc = 0x354a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x354a98: 0x8c8200d8  lw          $v0, 0xD8($a0)
    ctx->pc = 0x354a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x354a9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x354A9Cu;
    {
        const bool branch_taken_0x354a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x354a9c) {
            ctx->pc = 0x354AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x354A9Cu;
            // 0x354aa0: 0x8c8300e4  lw          $v1, 0xE4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x354AACu;
            goto label_354aac;
        }
    }
    ctx->pc = 0x354AA4u;
    // 0x354aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x354AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AA4u;
        // 0x354aa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354AACu;
label_354aac:
    // 0x354aac: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x354aacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x354ab0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x354ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x354ab4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x354ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x354ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x354AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AB8u;
        // 0x354abc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354AC0u;
    // 0x354ac0: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x354ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354ac4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x354ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354ac8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x354ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x354acc: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x354accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354ad0: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354AD0u;
    {
        const bool branch_taken_0x354ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x354AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354AD0u;
        // 0x354ad4: 0x8ce8009c  lw          $t0, 0x9C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354ad0) {
            ctx->pc = 0x354AECu;
            goto label_354aec;
        }
    }
    ctx->pc = 0x354AD8u;
    // 0x354ad8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354adc: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x354ADCu;
    {
        const bool branch_taken_0x354adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x354AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354ADCu;
        // 0x354ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354adc) {
            ctx->pc = 0x354B20u;
            goto label_354b20;
        }
    }
    ctx->pc = 0x354AE4u;
    // 0x354ae4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x354AE4u;
    {
        const bool branch_taken_0x354ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354ae4) {
            ctx->pc = 0x354B40u;
            goto label_354b40;
        }
    }
    ctx->pc = 0x354AECu;
label_354aec:
    // 0x354aec: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x354aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x354af0: 0x8ce50040  lw          $a1, 0x40($a3)
    ctx->pc = 0x354af0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x354af4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x354af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x354af8: 0x3c04efff  lui         $a0, 0xEFFF
    ctx->pc = 0x354af8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61439 << 16));
    // 0x354afc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x354afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x354b00: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x354b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x354b04: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x354b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x354b08: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x354b08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x354b0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x354b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x354b10: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x354b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x354b14: 0xfd0300b8  sd          $v1, 0xB8($t0)
    ctx->pc = 0x354b14u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 184), GPR_U64(ctx, 3));
    // 0x354b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x354B18u;
    {
        const bool branch_taken_0x354b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B18u;
        // 0x354b1c: 0xace50040  sw          $a1, 0x40($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b18) {
            ctx->pc = 0x354B38u;
            goto label_354b38;
        }
    }
    ctx->pc = 0x354B20u;
label_354b20:
    // 0x354b20: 0xdd0200c8  ld          $v0, 0xC8($t0)
    ctx->pc = 0x354b20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 200)));
    // 0x354b24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x354b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x354b28: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x354b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x354b2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x354b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x354b30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x354b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x354b34: 0xfd0200c8  sd          $v0, 0xC8($t0)
    ctx->pc = 0x354b34u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 200), GPR_U64(ctx, 2));
label_354b38:
    // 0x354b38: 0x3e00008  jr          $ra
    ctx->pc = 0x354B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B38u;
        // 0x354b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B40u;
label_354b40:
    // 0x354b40: 0x3e00008  jr          $ra
    ctx->pc = 0x354B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354B48u;
    // 0x354b48: 0x8f83a858  lw          $v1, -0x57A8($gp)
    ctx->pc = 0x354b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x354b4c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x354b4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354b50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x354b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x354b54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x354b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x354b58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x354b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354b5c: 0x10e50006  beq         $a3, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x354B5Cu;
    {
        const bool branch_taken_0x354b5c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        ctx->pc = 0x354B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B5Cu;
        // 0x354b60: 0x8c43009c  lw          $v1, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b5c) {
            ctx->pc = 0x354B78u;
            goto label_354b78;
        }
    }
    ctx->pc = 0x354B64u;
    // 0x354b64: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x354b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x354b68: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x354B68u;
    {
        const bool branch_taken_0x354b68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x354B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B68u;
        // 0x354b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b68) {
            ctx->pc = 0x354BA4u;
            goto label_354ba4;
        }
    }
    ctx->pc = 0x354B70u;
    // 0x354b70: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x354B70u;
    {
        const bool branch_taken_0x354b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x354b70) {
            ctx->pc = 0x354BB4u;
            goto label_354bb4;
        }
    }
    ctx->pc = 0x354B78u;
label_354b78:
    // 0x354b78: 0xdc6200b8  ld          $v0, 0xB8($v1)
    ctx->pc = 0x354b78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 184)));
    // 0x354b7c: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x354b7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x354b80: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x354b80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x354b84: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x354b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x354b88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x354b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x354b8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x354b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x354b90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x354b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x354b94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x354b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x354b98: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x354b98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x354b9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x354B9Cu;
    {
        const bool branch_taken_0x354b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x354BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354B9Cu;
        // 0x354ba0: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x354b9c) {
            ctx->pc = 0x354BACu;
            goto label_354bac;
        }
    }
    ctx->pc = 0x354BA4u;
label_354ba4:
    // 0x354ba4: 0x8c6200c8  lw          $v0, 0xC8($v1)
    ctx->pc = 0x354ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
    // 0x354ba8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x354ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_354bac:
    // 0x354bac: 0x3e00008  jr          $ra
    ctx->pc = 0x354BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354BACu;
        // 0x354bb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354BB4u;
label_354bb4:
    // 0x354bb4: 0x3e00008  jr          $ra
    ctx->pc = 0x354BB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354BB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354BBCu;
    // 0x354bbc: 0x0  nop
    ctx->pc = 0x354bbcu;
    // NOP
    ctx->pc = 0x354bc0u;
}
