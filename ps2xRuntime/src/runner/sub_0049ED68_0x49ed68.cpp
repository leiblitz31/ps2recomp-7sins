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

// Function: sub_0049ED68
// Address: 0x49ed68 - 0x49ee38
void sub_0049ED68_0x49ed68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049ED68_0x49ed68");
#endif

    switch (ctx->pc) {
        case 0x49ed70u: goto label_49ed70;
        case 0x49edc0u: goto label_49edc0;
        case 0x49edc8u: goto label_49edc8;
        case 0x49eddcu: goto label_49eddc;
        case 0x49edecu: goto label_49edec;
        case 0x49edf8u: goto label_49edf8;
        case 0x49ee08u: goto label_49ee08;
        case 0x49ee18u: goto label_49ee18;
        default: break;
    }

    ctx->pc = 0x49ed68u;

    // 0x49ed68: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49ED68u;
    {
        const bool branch_taken_0x49ed68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED68u;
        // 0x49ed6c: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed68) {
            ctx->pc = 0x49ED84u;
            goto label_49ed84;
        }
    }
    ctx->pc = 0x49ED70u;
label_49ed70:
    // 0x49ed70: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x49ED70u;
    {
        const bool branch_taken_0x49ed70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ed70) {
            ctx->pc = 0x49ED74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49ED70u;
            // 0x49ed74: 0x8c840018  lw          $a0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49ED80u;
            goto label_49ed80;
        }
    }
    ctx->pc = 0x49ED78u;
    // 0x49ed78: 0x3e00008  jr          $ra
    ctx->pc = 0x49ED78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED78u;
        // 0x49ed7c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ED78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ED80u;
label_49ed80:
    // 0x49ed80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x49ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_49ed84:
    // 0x49ed84: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x49ed84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x49ed88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x49ED88u;
    {
        const bool branch_taken_0x49ed88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED88u;
        // 0x49ed8c: 0x30622000  andi        $v0, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ed88) {
            ctx->pc = 0x49ED70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ed70;
        }
    }
    ctx->pc = 0x49ED90u;
    // 0x49ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x49ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49ED90u;
        // 0x49ed94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49ED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49ED98u;
    // 0x49ed98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49ed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49ed9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x49ed9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49eda0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49eda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49eda4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x49eda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x49eda8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49eda8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49edac: 0x24708330  addiu       $s0, $v1, -0x7CD0
    ctx->pc = 0x49edacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935344));
    // 0x49edb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49edb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49edb4: 0xaf82c1b0  sw          $v0, -0x3E50($gp)
    ctx->pc = 0x49edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951344), GPR_U32(ctx, 2));
    // 0x49edb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49edb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49edbc: 0x0  nop
    ctx->pc = 0x49edbcu;
    // NOP
label_49edc0:
    // 0x49edc0: 0xc127c70  jal         func_49F1C0
    ctx->pc = 0x49EDC0u;
    SET_GPR_U32(ctx, 31, 0x49EDC8u);
    ctx->pc = 0x49EDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDC0u;
    // 0x49edc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F1C0u, 0x49EDC0u, 0x49EDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDC8u;
label_49edc8:
    // 0x49edc8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x49EDC8u;
    {
        const bool branch_taken_0x49edc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49edc8) {
            ctx->pc = 0x49EDE4u;
            goto label_49ede4;
        }
    }
    ctx->pc = 0x49EDD0u;
    // 0x49edd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49edd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49edd4: 0xc127862  jal         func_49E188
    ctx->pc = 0x49EDD4u;
    SET_GPR_U32(ctx, 31, 0x49EDDCu);
    ctx->pc = 0x49EDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDD4u;
    // 0x49edd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E188u, 0x49EDD4u, 0x49EDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDDCu;
label_49eddc:
    // 0x49eddc: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x49EDDCu;
    {
        const bool branch_taken_0x49eddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EDDCu;
        // 0x49ede0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49eddc) {
            ctx->pc = 0x49EDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49edc0;
        }
    }
    ctx->pc = 0x49EDE4u;
label_49ede4:
    // 0x49ede4: 0xc127bf8  jal         func_49EFE0
    ctx->pc = 0x49EDE4u;
    SET_GPR_U32(ctx, 31, 0x49EDECu);
    ctx->pc = 0x49EDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDE4u;
    // 0x49ede8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFE0u, 0x49EDE4u, 0x49EDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDECu;
label_49edec:
    // 0x49edec: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x49edecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x49edf0: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x49EDF0u;
    SET_GPR_U32(ctx, 31, 0x49EDF8u);
    ctx->pc = 0x49EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EDF0u;
    // 0x49edf4: 0x24848340  addiu       $a0, $a0, -0x7CC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49EDF0u, 0x49EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EDF8u;
label_49edf8:
    // 0x49edf8: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49edfc: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x49edfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x49ee00: 0x24515ae8  addiu       $s1, $v0, 0x5AE8
    ctx->pc = 0x49ee00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
    // 0x49ee04: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x49ee04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_49ee08:
    // 0x49ee08: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x49ee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x49ee0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x49ee10: 0xc12aa86  jal         func_4AAA18
    ctx->pc = 0x49EE10u;
    SET_GPR_U32(ctx, 31, 0x49EE18u);
    ctx->pc = 0x49EE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EE10u;
    // 0x49ee14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAA18u, 0x49EE10u, 0x49EE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EE18u;
label_49ee18:
    // 0x49ee18: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49EE18u;
    {
        const bool branch_taken_0x49ee18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE18u;
        // 0x49ee1c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ee18) {
            ctx->pc = 0x49EE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ee08;
        }
    }
    ctx->pc = 0x49EE20u;
    // 0x49ee20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49ee20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49ee24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49ee24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49ee28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49ee28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49ee2c: 0xaf80b7c8  sw          $zero, -0x4838($gp)
    ctx->pc = 0x49ee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948808), GPR_U32(ctx, 0));
    // 0x49ee30: 0x3e00008  jr          $ra
    ctx->pc = 0x49EE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EE30u;
        // 0x49ee34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EE30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EE38u;
}
