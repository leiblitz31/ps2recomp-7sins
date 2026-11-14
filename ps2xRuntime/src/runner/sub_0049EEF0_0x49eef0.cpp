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

// Function: sub_0049EEF0
// Address: 0x49eef0 - 0x49efc8
void sub_0049EEF0_0x49eef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EEF0_0x49eef0");
#endif

    switch (ctx->pc) {
        case 0x49ef28u: goto label_49ef28;
        case 0x49ef38u: goto label_49ef38;
        case 0x49ef50u: goto label_49ef50;
        case 0x49ef78u: goto label_49ef78;
        case 0x49ef88u: goto label_49ef88;
        case 0x49efa0u: goto label_49efa0;
        default: break;
    }

    ctx->pc = 0x49eef0u;

    // 0x49eef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49eef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x49eef4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49eef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49eef8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x49eef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x49eefc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x49eefcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49ef04: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x49ef04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x49ef08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x49ef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x49ef0c: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x49EF0Cu;
    {
        const bool branch_taken_0x49ef0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF0Cu;
        // 0x49ef10: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef0c) {
            ctx->pc = 0x49EFB8u;
            goto label_49efb8;
        }
    }
    ctx->pc = 0x49EF14u;
    // 0x49ef14: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x49ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x49ef18: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x49EF18u;
    {
        const bool branch_taken_0x49ef18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ef18) {
            ctx->pc = 0x49EF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EF18u;
            // 0x49ef1c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EF68u;
            goto label_49ef68;
        }
    }
    ctx->pc = 0x49EF20u;
    // 0x49ef20: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49EF20u;
    SET_GPR_U32(ctx, 31, 0x49EF28u);
    ctx->pc = 0x49EF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF20u;
    // 0x49ef24: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49EF20u, 0x49EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF28u;
label_49ef28:
    // 0x49ef28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49ef28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49ef2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef30: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49ef30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49ef34: 0x24445ae8  addiu       $a0, $v0, 0x5AE8
    ctx->pc = 0x49ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
label_49ef38:
    // 0x49ef38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49ef3c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49EF3Cu;
    {
        const bool branch_taken_0x49ef3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x49EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF3Cu;
        // 0x49ef40: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef3c) {
            ctx->pc = 0x49EF58u;
            goto label_49ef58;
        }
    }
    ctx->pc = 0x49EF44u;
    // 0x49ef44: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ef48: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49EF48u;
    SET_GPR_U32(ctx, 31, 0x49EF50u);
    ctx->pc = 0x49EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF48u;
    // 0x49ef4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49EF48u, 0x49EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF50u;
label_49ef50:
    // 0x49ef50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49EF50u;
    {
        const bool branch_taken_0x49ef50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF50u;
        // 0x49ef54: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef50) {
            ctx->pc = 0x49EF68u;
            goto label_49ef68;
        }
    }
    ctx->pc = 0x49EF58u;
label_49ef58:
    // 0x49ef58: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49ef58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49ef5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x49EF5Cu;
    {
        const bool branch_taken_0x49ef5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF5Cu;
        // 0x49ef60: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef5c) {
            ctx->pc = 0x49EF38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ef38;
        }
    }
    ctx->pc = 0x49EF64u;
    // 0x49ef64: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x49ef64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_49ef68:
    // 0x49ef68: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x49EF68u;
    {
        const bool branch_taken_0x49ef68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ef68) {
            ctx->pc = 0x49EF6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49EF68u;
            // 0x49ef6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49EFB8u;
            goto label_49efb8;
        }
    }
    ctx->pc = 0x49EF70u;
    // 0x49ef70: 0xc127d08  jal         func_49F420
    ctx->pc = 0x49EF70u;
    SET_GPR_U32(ctx, 31, 0x49EF78u);
    ctx->pc = 0x49EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF70u;
    // 0x49ef74: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F420u, 0x49EF70u, 0x49EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EF78u;
label_49ef78:
    // 0x49ef78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x49ef78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x49ef7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49ef80: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x49ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x49ef84: 0x24445ae8  addiu       $a0, $v0, 0x5AE8
    ctx->pc = 0x49ef84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23272));
label_49ef88:
    // 0x49ef88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x49ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49ef8c: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x49EF8Cu;
    {
        const bool branch_taken_0x49ef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x49EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EF8Cu;
        // 0x49ef90: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ef8c) {
            ctx->pc = 0x49EFA8u;
            goto label_49efa8;
        }
    }
    ctx->pc = 0x49EF94u;
    // 0x49ef94: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49ef98: 0xc12a9a0  jal         func_4AA680
    ctx->pc = 0x49EF98u;
    SET_GPR_U32(ctx, 31, 0x49EFA0u);
    ctx->pc = 0x49EF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49EF98u;
    // 0x49ef9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA680u, 0x49EF98u, 0x49EFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49EFA0u;
label_49efa0:
    // 0x49efa0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49EFA0u;
    {
        const bool branch_taken_0x49efa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFA0u;
        // 0x49efa4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49efa0) {
            ctx->pc = 0x49EFB8u;
            goto label_49efb8;
        }
    }
    ctx->pc = 0x49EFA8u;
label_49efa8:
    // 0x49efa8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x49efa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49efac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x49EFACu;
    {
        const bool branch_taken_0x49efac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFACu;
        // 0x49efb0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49efac) {
            ctx->pc = 0x49EF88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49ef88;
        }
    }
    ctx->pc = 0x49EFB4u;
    // 0x49efb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x49efb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49efb8:
    // 0x49efb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49efb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49efbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49efbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49efc0: 0x3e00008  jr          $ra
    ctx->pc = 0x49EFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49EFC0u;
        // 0x49efc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49EFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49EFC8u;
}
