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

// Function: sub_004A0EA0
// Address: 0x4a0ea0 - 0x4a0fa0
void sub_004A0EA0_0x4a0ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0EA0_0x4a0ea0");
#endif

    switch (ctx->pc) {
        case 0x4a0edcu: goto label_4a0edc;
        case 0x4a0ee8u: goto label_4a0ee8;
        case 0x4a0ef8u: goto label_4a0ef8;
        case 0x4a0f00u: goto label_4a0f00;
        case 0x4a0f14u: goto label_4a0f14;
        case 0x4a0f68u: goto label_4a0f68;
        case 0x4a0f78u: goto label_4a0f78;
        default: break;
    }

    ctx->pc = 0x4a0ea0u;

    // 0x4a0ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0EA0u;
        // 0x4a0ea4: 0x8f82b844  lw          $v0, -0x47BC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0EA8u;
    // 0x4a0ea8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4a0ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4a0eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a0eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4a0eb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x4a0eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x4a0eb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a0eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0eb8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x4a0eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x4a0ebc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a0ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0ec0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x4a0ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x4a0ec4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x4a0ec4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0ec8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x4a0ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x4a0ecc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x4a0eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x4a0ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a0ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0ed4: 0xc12842c  jal         func_4A10B0
    ctx->pc = 0x4A0ED4u;
    SET_GPR_U32(ctx, 31, 0x4A0EDCu);
    ctx->pc = 0x4A0ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0ED4u;
    // 0x4a0ed8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A10B0u, 0x4A0ED4u, 0x4A0EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0EDCu;
label_4a0edc:
    // 0x4a0edc: 0x24510024  addiu       $s1, $v0, 0x24
    ctx->pc = 0x4a0edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x4a0ee0: 0xc12abbe  jal         func_4AAEF8
    ctx->pc = 0x4A0EE0u;
    SET_GPR_U32(ctx, 31, 0x4A0EE8u);
    ctx->pc = 0x4A0EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0EE0u;
    // 0x4a0ee4: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAEF8u, 0x4A0EE0u, 0x4A0EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0EE8u;
label_4a0ee8:
    // 0x4a0ee8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a0ee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0eec: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x4A0EECu;
    {
        const bool branch_taken_0x4a0eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0EECu;
        // 0x4a0ef0: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0eec) {
            ctx->pc = 0x4A0F28u;
            goto label_4a0f28;
        }
    }
    ctx->pc = 0x4A0EF4u;
    // 0x4a0ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a0ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a0ef8:
    // 0x4a0ef8: 0xc12ab84  jal         func_4AAE10
    ctx->pc = 0x4A0EF8u;
    SET_GPR_U32(ctx, 31, 0x4A0F00u);
    ctx->pc = 0x4A0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0EF8u;
    // 0x4a0efc: 0x2664000c  addiu       $a0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE10u, 0x4A0EF8u, 0x4A0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0F00u;
label_4a0f00:
    // 0x4a0f00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4a0f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4a0f04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a0f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0f08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4a0f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0f0c: 0xc12a1dc  jal         func_4A8770
    ctx->pc = 0x4A0F0Cu;
    SET_GPR_U32(ctx, 31, 0x4A0F14u);
    ctx->pc = 0x4A0F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0F0Cu;
    // 0x4a0f10: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8770u, 0x4A0F0Cu, 0x4A0F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0F14u;
label_4a0f14:
    // 0x4a0f14: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x4a0f14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4a0f18: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x4a0f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x4a0f1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x4A0F1Cu;
    {
        const bool branch_taken_0x4a0f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F1Cu;
        // 0x4a0f20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0f1c) {
            ctx->pc = 0x4A0EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0ef8;
        }
    }
    ctx->pc = 0x4A0F24u;
    // 0x4a0f24: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x4a0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4a0f28:
    // 0x4a0f28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x4a0f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a0f2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x4a0f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a0f30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x4a0f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a0f34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a0f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a0f38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x4a0f38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0f3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x4a0f3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0f44: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0F44u;
        // 0x4a0f48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0F4Cu;
    // 0x4a0f4c: 0x0  nop
    ctx->pc = 0x4a0f4cu;
    // NOP
    // 0x4a0f50: 0x8f86c1f0  lw          $a2, -0x3E10($gp)
    ctx->pc = 0x4a0f50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
    // 0x4a0f54: 0x2788c1f0  addiu       $t0, $gp, -0x3E10
    ctx->pc = 0x4a0f54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
    // 0x4a0f58: 0x10c8000f  beq         $a2, $t0, . + 4 + (0xF << 2)
    ctx->pc = 0x4A0F58u;
    {
        const bool branch_taken_0x4a0f58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x4a0f58) {
            ctx->pc = 0x4A0F98u;
            goto label_4a0f98;
        }
    }
    ctx->pc = 0x4A0F60u;
    // 0x4a0f60: 0x8cc3fff4  lw          $v1, -0xC($a2)
    ctx->pc = 0x4a0f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
    // 0x4a0f64: 0x0  nop
    ctx->pc = 0x4a0f64u;
    // NOP
label_4a0f68:
    // 0x4a0f68: 0x24c7fff0  addiu       $a3, $a2, -0x10
    ctx->pc = 0x4a0f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x4a0f6c: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A0F6Cu;
    {
        const bool branch_taken_0x4a0f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a0f6c) {
            ctx->pc = 0x4A0F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0F6Cu;
            // 0x4a0f70: 0x8cc60000  lw          $a2, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0F90u;
            goto label_4a0f90;
        }
    }
    ctx->pc = 0x4A0F74u;
    // 0x4a0f74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x4a0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4a0f78:
    // 0x4a0f78: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A0F78u;
    {
        const bool branch_taken_0x4a0f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4a0f78) {
            ctx->pc = 0x4A0F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0F78u;
            // 0x4a0f7c: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0F80u;
            goto label_4a0f80;
        }
    }
    ctx->pc = 0x4A0F80u;
label_4a0f80:
    // 0x4a0f80: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x4a0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4a0f84: 0x5467fffc  bnel        $v1, $a3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x4A0F84u;
    {
        const bool branch_taken_0x4a0f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x4a0f84) {
            ctx->pc = 0x4A0F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0F84u;
            // 0x4a0f88: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0f78;
        }
    }
    ctx->pc = 0x4A0F8Cu;
    // 0x4a0f8c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x4a0f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4a0f90:
    // 0x4a0f90: 0x54c8fff5  bnel        $a2, $t0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A0F90u;
    {
        const bool branch_taken_0x4a0f90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x4a0f90) {
            ctx->pc = 0x4A0F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0F90u;
            // 0x4a0f94: 0x8cc3fff4  lw          $v1, -0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a0f68;
        }
    }
    ctx->pc = 0x4A0F98u;
label_4a0f98:
    // 0x4a0f98: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0FA0u;
}
