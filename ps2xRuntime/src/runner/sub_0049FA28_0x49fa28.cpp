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

// Function: sub_0049FA28
// Address: 0x49fa28 - 0x49fd00
void sub_0049FA28_0x49fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049FA28_0x49fa28");
#endif

    switch (ctx->pc) {
        case 0x49fa4cu: goto label_49fa4c;
        case 0x49faa8u: goto label_49faa8;
        case 0x49fac4u: goto label_49fac4;
        case 0x49fad4u: goto label_49fad4;
        case 0x49faf8u: goto label_49faf8;
        case 0x49fb00u: goto label_49fb00;
        case 0x49fb14u: goto label_49fb14;
        case 0x49fbccu: goto label_49fbcc;
        case 0x49fc58u: goto label_49fc58;
        case 0x49fc6cu: goto label_49fc6c;
        case 0x49fc70u: goto label_49fc70;
        case 0x49fc80u: goto label_49fc80;
        case 0x49fc9cu: goto label_49fc9c;
        case 0x49fcb0u: goto label_49fcb0;
        case 0x49fcc8u: goto label_49fcc8;
        default: break;
    }

    ctx->pc = 0x49fa28u;

    // 0x49fa28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49fa2c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x49fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x49fa30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49fa34: 0x2442f9a0  addiu       $v0, $v0, -0x660
    ctx->pc = 0x49fa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965664));
    // 0x49fa38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x49fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x49fa3c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FA3Cu;
    {
        const bool branch_taken_0x49fa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FA3Cu;
        // 0x49fa40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fa3c) {
            ctx->pc = 0x49FA50u;
            goto label_49fa50;
        }
    }
    ctx->pc = 0x49FA44u;
    // 0x49fa44: 0xc127c84  jal         func_49F210
    ctx->pc = 0x49FA44u;
    SET_GPR_U32(ctx, 31, 0x49FA4Cu);
    ctx->pc = 0x49F210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F210u, 0x49FA44u, 0x49FA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FA4Cu;
label_49fa4c:
    // 0x49fa4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49fa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_49fa50:
    // 0x49fa50: 0x3e00008  jr          $ra
    ctx->pc = 0x49FA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FA50u;
        // 0x49fa54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FA58u;
    // 0x49fa58: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x49fa58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x49fa5c: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x49fa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x49fa60: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x49fa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x49fa64: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49fa64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa68: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x49fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
    // 0x49fa6c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x49fa6cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa70: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x49fa70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x49fa74: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x49fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x49fa78: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x49fa78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa7c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x49fa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x49fa80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49fa80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa84: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x49fa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x49fa88: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x49fa88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fa8c: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x49fa8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x49fa90: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x49fa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x49fa94: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x49fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x49fa98: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x49fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x49fa9c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x49fa9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x49faa0: 0xc1280c8  jal         func_4A0320
    ctx->pc = 0x49FAA0u;
    SET_GPR_U32(ctx, 31, 0x49FAA8u);
    ctx->pc = 0x49FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FAA0u;
    // 0x49faa4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0320u, 0x49FAA0u, 0x49FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FAA8u;
label_49faa8:
    // 0x49faa8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x49faa8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49faac: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x49FAACu;
    {
        const bool branch_taken_0x49faac = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FAACu;
        // 0x49fab0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49faac) {
            ctx->pc = 0x49FABCu;
            goto label_49fabc;
        }
    }
    ctx->pc = 0x49FAB4u;
    // 0x49fab4: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x49FAB4u;
    {
        const bool branch_taken_0x49fab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FAB4u;
        // 0x49fab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fab4) {
            ctx->pc = 0x49FCD0u;
            goto label_49fcd0;
        }
    }
    ctx->pc = 0x49FABCu;
label_49fabc:
    // 0x49fabc: 0xc12842c  jal         func_4A10B0
    ctx->pc = 0x49FABCu;
    SET_GPR_U32(ctx, 31, 0x49FAC4u);
    ctx->pc = 0x49FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FABCu;
    // 0x49fac0: 0x2670000c  addiu       $s0, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A10B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A10B0u, 0x49FABCu, 0x49FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FAC4u;
label_49fac4:
    // 0x49fac4: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x49fac4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fac8: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x49fac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
    // 0x49facc: 0xc12abbe  jal         func_4AAEF8
    ctx->pc = 0x49FACCu;
    SET_GPR_U32(ctx, 31, 0x49FAD4u);
    ctx->pc = 0x49FAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FACCu;
    // 0x49fad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAEF8u, 0x49FACCu, 0x49FAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FAD4u;
label_49fad4:
    // 0x49fad4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x49fad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fad8: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x49fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x49fadc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x49fadcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fae0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x49fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x49fae4: 0x24760018  addiu       $s6, $v1, 0x18
    ctx->pc = 0x49fae4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x49fae8: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x49FAE8u;
    {
        const bool branch_taken_0x49fae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FAE8u;
        // 0x49faec: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fae8) {
            ctx->pc = 0x49FB24u;
            goto label_49fb24;
        }
    }
    ctx->pc = 0x49FAF0u;
    // 0x49faf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x49faf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49faf4: 0x0  nop
    ctx->pc = 0x49faf4u;
    // NOP
label_49faf8:
    // 0x49faf8: 0xc12ab84  jal         func_4AAE10
    ctx->pc = 0x49FAF8u;
    SET_GPR_U32(ctx, 31, 0x49FB00u);
    ctx->pc = 0x49FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FAF8u;
    // 0x49fafc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE10u, 0x49FAF8u, 0x49FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FB00u;
label_49fb00:
    // 0x49fb00: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x49fb00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x49fb04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x49fb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb08: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x49fb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb0c: 0xc12a1dc  jal         func_4A8770
    ctx->pc = 0x49FB0Cu;
    SET_GPR_U32(ctx, 31, 0x49FB14u);
    ctx->pc = 0x49FB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FB0Cu;
    // 0x49fb10: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8770u, 0x49FB0Cu, 0x49FB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FB14u;
label_49fb14:
    // 0x49fb14: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x49fb14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x49fb18: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x49fb18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x49fb1c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x49FB1Cu;
    {
        const bool branch_taken_0x49fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FB1Cu;
        // 0x49fb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fb1c) {
            ctx->pc = 0x49FAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49faf8;
        }
    }
    ctx->pc = 0x49FB24u;
label_49fb24:
    // 0x49fb24: 0x24020809  addiu       $v0, $zero, 0x809
    ctx->pc = 0x49fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2057));
    // 0x49fb28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49fb2c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x49fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x49fb30: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x49fb30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x49fb34: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x49fb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x49fb38: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x49fb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49fb3c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x49fb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x49fb40: 0x240d080a  addiu       $t5, $zero, 0x80A
    ctx->pc = 0x49fb40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2058));
    // 0x49fb44: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x49fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x49fb48: 0x240c080c  addiu       $t4, $zero, 0x80C
    ctx->pc = 0x49fb48u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2060));
    // 0x49fb4c: 0x2d2b021  addu        $s6, $s6, $s2
    ctx->pc = 0x49fb4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x49fb50: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x49fb50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x49fb54: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x49fb54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x49fb58: 0x3c0a004a  lui         $t2, 0x4A
    ctx->pc = 0x49fb58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)74 << 16));
    // 0x49fb5c: 0xafbe0018  sw          $fp, 0x18($sp)
    ctx->pc = 0x49fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 30));
    // 0x49fb60: 0x254a1110  addiu       $t2, $t2, 0x1110
    ctx->pc = 0x49fb60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4368));
    // 0x49fb64: 0xafb70014  sw          $s7, 0x14($sp)
    ctx->pc = 0x49fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 23));
    // 0x49fb68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x49fb68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x49fb6c: 0xafb1001c  sw          $s1, 0x1C($sp)
    ctx->pc = 0x49fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 17));
    // 0x49fb70: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x49fb70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb74: 0xafb60034  sw          $s6, 0x34($sp)
    ctx->pc = 0x49fb74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 22));
    // 0x49fb78: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x49fb78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb7c: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x49fb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
    // 0x49fb80: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x49fb80u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb84: 0xafad0058  sw          $t5, 0x58($sp)
    ctx->pc = 0x49fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 13));
    // 0x49fb88: 0x27ab0010  addiu       $t3, $sp, 0x10
    ctx->pc = 0x49fb88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x49fb8c: 0xafb20064  sw          $s2, 0x64($sp)
    ctx->pc = 0x49fb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 18));
    // 0x49fb90: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x49fb90u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fb94: 0xafac0068  sw          $t4, 0x68($sp)
    ctx->pc = 0x49fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 12));
    // 0x49fb98: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x49fb98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x49fb9c: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x49fb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x49fba0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x49fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x49fba4: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x49fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x49fba8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x49fba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x49fbac: 0xafb00040  sw          $s0, 0x40($sp)
    ctx->pc = 0x49fbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
    // 0x49fbb0: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x49fbb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x49fbb4: 0xafad0048  sw          $t5, 0x48($sp)
    ctx->pc = 0x49fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 13));
    // 0x49fbb8: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x49fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x49fbbc: 0xafb3005c  sw          $s3, 0x5C($sp)
    ctx->pc = 0x49fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
    // 0x49fbc0: 0xafb00060  sw          $s0, 0x60($sp)
    ctx->pc = 0x49fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 16));
    // 0x49fbc4: 0xc12aec4  jal         func_4ABB10
    ctx->pc = 0x49FBC4u;
    SET_GPR_U32(ctx, 31, 0x49FBCCu);
    ctx->pc = 0x49FBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FBC4u;
    // 0x49fbc8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ABB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ABB10u, 0x49FBC4u, 0x49FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FBCCu;
label_49fbcc:
    // 0x49fbcc: 0x1275003e  beq         $s3, $s5, . + 4 + (0x3E << 2)
    ctx->pc = 0x49FBCCu;
    {
        const bool branch_taken_0x49fbcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 21));
        ctx->pc = 0x49FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FBCCu;
        // 0x49fbd0: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fbcc) {
            ctx->pc = 0x49FCC8u;
            goto label_49fcc8;
        }
    }
    ctx->pc = 0x49FBD4u;
    // 0x49fbd4: 0x26a3000c  addiu       $v1, $s5, 0xC
    ctx->pc = 0x49fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x49fbd8: 0xaea00014  sw          $zero, 0x14($s5)
    ctx->pc = 0x49fbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 0));
    // 0x49fbdc: 0xaea3000c  sw          $v1, 0xC($s5)
    ctx->pc = 0x49fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 3));
    // 0x49fbe0: 0xaea30010  sw          $v1, 0x10($s5)
    ctx->pc = 0x49fbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 3));
    // 0x49fbe4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x49fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49fbe8: 0x10540003  beq         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x49FBE8u;
    {
        const bool branch_taken_0x49fbe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x49FBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FBE8u;
        // 0x49fbec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fbe8) {
            ctx->pc = 0x49FBF8u;
            goto label_49fbf8;
        }
    }
    ctx->pc = 0x49FBF0u;
    // 0x49fbf0: 0xaea20010  sw          $v0, 0x10($s5)
    ctx->pc = 0x49fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 16), GPR_U32(ctx, 2));
    // 0x49fbf4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x49fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_49fbf8:
    // 0x49fbf8: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x49fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x49fbfc: 0x50540004  beql        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FBFCu;
    {
        const bool branch_taken_0x49fbfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x49fbfc) {
            ctx->pc = 0x49FC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FBFCu;
            // 0x49fc00: 0xae74000c  sw          $s4, 0xC($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FC10u;
            goto label_49fc10;
        }
    }
    ctx->pc = 0x49FC04u;
    // 0x49fc04: 0xaea2000c  sw          $v0, 0xC($s5)
    ctx->pc = 0x49fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 12), GPR_U32(ctx, 2));
    // 0x49fc08: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x49fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x49fc0c: 0xae74000c  sw          $s4, 0xC($s3)
    ctx->pc = 0x49fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 20));
label_49fc10:
    // 0x49fc10: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x49fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x49fc14: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x49fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x49fc18: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x49fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fc1c: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fc20: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49fc20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49fc24: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x49fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fc28: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x49fc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fc2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x49fc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x49fc30: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x49fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fc34: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x49fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fc38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x49fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x49fc3c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x49fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x49fc40: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x49fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x49fc44: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x49fc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x49fc48: 0x8e720010  lw          $s2, 0x10($s3)
    ctx->pc = 0x49fc48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x49fc4c: 0x12540016  beq         $s2, $s4, . + 4 + (0x16 << 2)
    ctx->pc = 0x49FC4Cu;
    {
        const bool branch_taken_0x49fc4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x49FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FC4Cu;
        // 0x49fc50: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fc4c) {
            ctx->pc = 0x49FCA8u;
            goto label_49fca8;
        }
    }
    ctx->pc = 0x49FC54u;
    // 0x49fc54: 0x2797c1f0  addiu       $s7, $gp, -0x3E10
    ctx->pc = 0x49fc54u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951408));
label_49fc58:
    // 0x49fc58: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x49fc58u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fc5c: 0x16170004  bne         $s0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FC5Cu;
    {
        const bool branch_taken_0x49fc5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x49FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FC5Cu;
        // 0x49fc60: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fc5c) {
            ctx->pc = 0x49FC70u;
            goto label_49fc70;
        }
    }
    ctx->pc = 0x49FC64u;
    // 0x49fc64: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FC64u;
    SET_GPR_U32(ctx, 31, 0x49FC6Cu);
    ctx->pc = 0x49FC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FC64u;
    // 0x49fc68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FC64u, 0x49FC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FC6Cu;
label_49fc6c:
    // 0x49fc6c: 0x0  nop
    ctx->pc = 0x49fc6cu;
    // NOP
label_49fc70:
    // 0x49fc70: 0x12170006  beq         $s0, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x49FC70u;
    {
        const bool branch_taken_0x49fc70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x49FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FC70u;
        // 0x49fc74: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fc70) {
            ctx->pc = 0x49FC8Cu;
            goto label_49fc8c;
        }
    }
    ctx->pc = 0x49FC78u;
    // 0x49fc78: 0xc1282be  jal         func_4A0AF8
    ctx->pc = 0x49FC78u;
    SET_GPR_U32(ctx, 31, 0x49FC80u);
    ctx->pc = 0x49FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FC78u;
    // 0x49fc7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0AF8u, 0x49FC78u, 0x49FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FC80u;
label_49fc80:
    // 0x49fc80: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x49FC80u;
    {
        const bool branch_taken_0x49fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49fc80) {
            ctx->pc = 0x49FC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FC80u;
            // 0x49fc84: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FC70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fc70;
        }
    }
    ctx->pc = 0x49FC88u;
    // 0x49fc88: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x49fc88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49fc8c:
    // 0x49fc8c: 0x56c00004  bnel        $s6, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x49FC8Cu;
    {
        const bool branch_taken_0x49fc8c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x49fc8c) {
            ctx->pc = 0x49FC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x49FC8Cu;
            // 0x49fc90: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49FCA0u;
            goto label_49fca0;
        }
    }
    ctx->pc = 0x49FC94u;
    // 0x49fc94: 0xc12a0c4  jal         func_4A8310
    ctx->pc = 0x49FC94u;
    SET_GPR_U32(ctx, 31, 0x49FC9Cu);
    ctx->pc = 0x49FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FC94u;
    // 0x49fc98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8310u, 0x49FC94u, 0x49FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FC9Cu;
label_49fc9c:
    // 0x49fc9c: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x49fc9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_49fca0:
    // 0x49fca0: 0x1654ffed  bne         $s2, $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x49FCA0u;
    {
        const bool branch_taken_0x49fca0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x49FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FCA0u;
        // 0x49fca4: 0x8f90c1f0  lw          $s0, -0x3E10($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fca0) {
            ctx->pc = 0x49FC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49fc58;
        }
    }
    ctx->pc = 0x49FCA8u;
label_49fca8:
    // 0x49fca8: 0xc12aba0  jal         func_4AAE80
    ctx->pc = 0x49FCA8u;
    SET_GPR_U32(ctx, 31, 0x49FCB0u);
    ctx->pc = 0x49FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FCA8u;
    // 0x49fcac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAE80u, 0x49FCA8u, 0x49FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FCB0u;
label_49fcb0:
    // 0x49fcb0: 0x8f82b844  lw          $v0, -0x47BC($gp)
    ctx->pc = 0x49fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948932)));
    // 0x49fcb4: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x49FCB4u;
    {
        const bool branch_taken_0x49fcb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x49FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FCB4u;
        // 0x49fcb8: 0x8f82b840  lw          $v0, -0x47C0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49fcb4) {
            ctx->pc = 0x49FCC0u;
            goto label_49fcc0;
        }
    }
    ctx->pc = 0x49FCBCu;
    // 0x49fcbc: 0xaf82b844  sw          $v0, -0x47BC($gp)
    ctx->pc = 0x49fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948932), GPR_U32(ctx, 2));
label_49fcc0:
    // 0x49fcc0: 0xc128486  jal         func_4A1218
    ctx->pc = 0x49FCC0u;
    SET_GPR_U32(ctx, 31, 0x49FCC8u);
    ctx->pc = 0x49FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49FCC0u;
    // 0x49fcc4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1218u, 0x49FCC0u, 0x49FCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49FCC8u;
label_49fcc8:
    // 0x49fcc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x49fcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49fccc: 0x2be100b  movn        $v0, $s5, $fp
    ctx->pc = 0x49fcccu;
    if (GPR_U64(ctx, 30) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 21));
label_49fcd0:
    // 0x49fcd0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x49fcd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x49fcd4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x49fcd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x49fcd8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x49fcd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x49fcdc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x49fcdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x49fce0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x49fce0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x49fce4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x49fce4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x49fce8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x49fce8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x49fcec: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x49fcecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x49fcf0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x49fcf0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x49fcf4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x49fcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x49fcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x49FCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49FCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49FCF8u;
        // 0x49fcfc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49FCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49FD00u;
}
