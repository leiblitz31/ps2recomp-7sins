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

// Function: sub_0033F9C8
// Address: 0x33f9c8 - 0x33fa88
void sub_0033F9C8_0x33f9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F9C8_0x33f9c8");
#endif

    switch (ctx->pc) {
        case 0x33f9fcu: goto label_33f9fc;
        case 0x33fa14u: goto label_33fa14;
        case 0x33fa24u: goto label_33fa24;
        case 0x33fa34u: goto label_33fa34;
        case 0x33fa44u: goto label_33fa44;
        case 0x33fa68u: goto label_33fa68;
        default: break;
    }

    ctx->pc = 0x33f9c8u;

    // 0x33f9c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x33f9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33f9cc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x33f9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x33f9d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33f9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33f9d4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33f9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x33f9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x33f9dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33f9dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f9e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33f9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33f9e4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f9e8: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x33f9e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
    // 0x33f9ec: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33f9f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x33f9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x33f9f4: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F9F4u;
    SET_GPR_U32(ctx, 31, 0x33F9FCu);
    ctx->pc = 0x33F9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F9F4u;
    // 0x33f9f8: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F9F4u, 0x33F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F9FCu;
label_33f9fc:
    // 0x33f9fc: 0x440001a  bltz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33F9FCu;
    {
        const bool branch_taken_0x33f9fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33FA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F9FCu;
        // 0x33fa00: 0x2428021  addu        $s0, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f9fc) {
            ctx->pc = 0x33FA68u;
            goto label_33fa68;
        }
    }
    ctx->pc = 0x33FA04u;
    // 0x33fa04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33fa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa0c: 0xc103454  jal         func_40D150
    ctx->pc = 0x33FA0Cu;
    SET_GPR_U32(ctx, 31, 0x33FA14u);
    ctx->pc = 0x33FA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA0Cu;
    // 0x33fa10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33FA0Cu, 0x33FA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA14u;
label_33fa14:
    // 0x33fa14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa18: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x33fa18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33fa1c: 0xc103454  jal         func_40D150
    ctx->pc = 0x33FA1Cu;
    SET_GPR_U32(ctx, 31, 0x33FA24u);
    ctx->pc = 0x33FA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA1Cu;
    // 0x33fa20: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33FA1Cu, 0x33FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA24u;
label_33fa24:
    // 0x33fa24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa28: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x33fa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x33fa2c: 0xc103454  jal         func_40D150
    ctx->pc = 0x33FA2Cu;
    SET_GPR_U32(ctx, 31, 0x33FA34u);
    ctx->pc = 0x33FA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA2Cu;
    // 0x33fa30: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33FA2Cu, 0x33FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA34u;
label_33fa34:
    // 0x33fa34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33fa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa3c: 0xc103468  jal         func_40D1A0
    ctx->pc = 0x33FA3Cu;
    SET_GPR_U32(ctx, 31, 0x33FA44u);
    ctx->pc = 0x33FA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA3Cu;
    // 0x33fa40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x33FA3Cu, 0x33FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA44u;
label_33fa44:
    // 0x33fa44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33fa48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33fa4c: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33FA4Cu;
    {
        const bool branch_taken_0x33fa4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33fa4c) {
            ctx->pc = 0x33FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33FA4Cu;
            // 0x33fa50: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33FA58u;
            goto label_33fa58;
        }
    }
    ctx->pc = 0x33FA54u;
    // 0x33fa54: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x33fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_33fa58:
    // 0x33fa58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x33fa58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa5c: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x33fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33fa60: 0xc103454  jal         func_40D150
    ctx->pc = 0x33FA60u;
    SET_GPR_U32(ctx, 31, 0x33FA68u);
    ctx->pc = 0x33FA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33FA60u;
    // 0x33fa64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D150u, 0x33FA60u, 0x33FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33FA68u;
label_33fa68:
    // 0x33fa68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x33fa68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33fa6c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x33fa6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33fa70: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x33fa70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33fa74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33fa74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33fa78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33fa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33fa7c: 0x3e00008  jr          $ra
    ctx->pc = 0x33FA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33FA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33FA7Cu;
        // 0x33fa80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33FA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33FA84u;
    // 0x33fa84: 0x0  nop
    ctx->pc = 0x33fa84u;
    // NOP
    ctx->pc = 0x33fa88u;
}
