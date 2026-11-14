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

// Function: sub_003BCB98
// Address: 0x3bcb98 - 0x3bcc80
void sub_003BCB98_0x3bcb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BCB98_0x3bcb98");
#endif

    switch (ctx->pc) {
        case 0x3bcbb8u: goto label_3bcbb8;
        case 0x3bcbd4u: goto label_3bcbd4;
        case 0x3bcbe4u: goto label_3bcbe4;
        case 0x3bcbf4u: goto label_3bcbf4;
        case 0x3bcc3cu: goto label_3bcc3c;
        case 0x3bcc50u: goto label_3bcc50;
        case 0x3bcc5cu: goto label_3bcc5c;
        default: break;
    }

    ctx->pc = 0x3bcb98u;

    // 0x3bcb98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bcb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bcb9c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3bcb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bcba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bcba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3bcba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bcba8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3bcba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3bcbac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bcbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bcbb0: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x3BCBB0u;
    SET_GPR_U32(ctx, 31, 0x3BCBB8u);
    ctx->pc = 0x3BCBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBB0u;
    // 0x3bcbb4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3BCBB0u, 0x3BCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBB8u;
label_3bcbb8:
    // 0x3bcbb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3bcbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbbc: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x3BCBBCu;
    {
        const bool branch_taken_0x3bcbbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCBBCu;
        // 0x3bcbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcbbc) {
            ctx->pc = 0x3BCBFCu;
            goto label_3bcbfc;
        }
    }
    ctx->pc = 0x3BCBC4u;
    // 0x3bcbc4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x3bcbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3bcbc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bcbc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbcc: 0xc103322  jal         func_40CC88
    ctx->pc = 0x3BCBCCu;
    SET_GPR_U32(ctx, 31, 0x3BCBD4u);
    ctx->pc = 0x3BCBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBCCu;
    // 0x3bcbd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3BCBCCu, 0x3BCBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBD4u;
label_3bcbd4:
    // 0x3bcbd4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3BCBD4u;
    {
        const bool branch_taken_0x3bcbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bcbd4) {
            ctx->pc = 0x3BCBD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BCBD4u;
            // 0x3bcbd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BCC00u;
            goto label_3bcc00;
        }
    }
    ctx->pc = 0x3BCBDCu;
    // 0x3bcbdc: 0xc0eeda8  jal         func_3BB6A0
    ctx->pc = 0x3BCBDCu;
    SET_GPR_U32(ctx, 31, 0x3BCBE4u);
    ctx->pc = 0x3BCBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBDCu;
    // 0x3bcbe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB6A0u, 0x3BCBDCu, 0x3BCBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBE4u;
label_3bcbe4:
    // 0x3bcbe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bcbe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbe8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3bcbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcbec: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x3BCBECu;
    SET_GPR_U32(ctx, 31, 0x3BCBF4u);
    ctx->pc = 0x3BCBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCBECu;
    // 0x3bcbf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3BCBECu, 0x3BCBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCBF4u;
label_3bcbf4:
    // 0x3bcbf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BCBF4u;
    {
        const bool branch_taken_0x3bcbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCBF4u;
        // 0x3bcbf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcbf4) {
            ctx->pc = 0x3BCC00u;
            goto label_3bcc00;
        }
    }
    ctx->pc = 0x3BCBFCu;
label_3bcbfc:
    // 0x3bcbfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bcbfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcc00:
    // 0x3bcc00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3bcc00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bcc04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bcc04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bcc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bcc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bcc0c: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCC0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC0Cu;
        // 0x3bcc10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCC0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCC14u;
    // 0x3bcc14: 0x0  nop
    ctx->pc = 0x3bcc14u;
    // NOP
    // 0x3bcc18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3bcc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3bcc1c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3bcc1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcc20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bcc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bcc24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3bcc24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bcc28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bcc28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcc2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3bcc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3bcc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bcc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3bcc34: 0xc10493e  jal         func_4124F8
    ctx->pc = 0x3BCC34u;
    SET_GPR_U32(ctx, 31, 0x3BCC3Cu);
    ctx->pc = 0x3BCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCC34u;
    // 0x3bcc38: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4124F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4124F8u, 0x3BCC34u, 0x3BCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCC3Cu;
label_3bcc3c:
    // 0x3bcc3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bcc3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcc40: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BCC40u;
    {
        const bool branch_taken_0x3bcc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC40u;
        // 0x3bcc44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcc40) {
            ctx->pc = 0x3BCC64u;
            goto label_3bcc64;
        }
    }
    ctx->pc = 0x3BCC48u;
    // 0x3bcc48: 0xc0ef320  jal         func_3BCC80
    ctx->pc = 0x3BCC48u;
    SET_GPR_U32(ctx, 31, 0x3BCC50u);
    ctx->pc = 0x3BCC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCC48u;
    // 0x3bcc4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCC80u, 0x3BCC48u, 0x3BCC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCC50u;
label_3bcc50:
    // 0x3bcc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bcc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bcc54: 0xc10496a  jal         func_4125A8
    ctx->pc = 0x3BCC54u;
    SET_GPR_U32(ctx, 31, 0x3BCC5Cu);
    ctx->pc = 0x3BCC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BCC54u;
    // 0x3bcc58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4125A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4125A8u, 0x3BCC54u, 0x3BCC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BCC5Cu;
label_3bcc5c:
    // 0x3bcc5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3BCC5Cu;
    {
        const bool branch_taken_0x3bcc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BCC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC5Cu;
        // 0x3bcc60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bcc5c) {
            ctx->pc = 0x3BCC68u;
            goto label_3bcc68;
        }
    }
    ctx->pc = 0x3BCC64u;
label_3bcc64:
    // 0x3bcc64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bcc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bcc68:
    // 0x3bcc68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3bcc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bcc6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bcc6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bcc70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bcc70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bcc74: 0x3e00008  jr          $ra
    ctx->pc = 0x3BCC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BCC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BCC74u;
        // 0x3bcc78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BCC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BCC7Cu;
    // 0x3bcc7c: 0x0  nop
    ctx->pc = 0x3bcc7cu;
    // NOP
    ctx->pc = 0x3bcc80u;
}
