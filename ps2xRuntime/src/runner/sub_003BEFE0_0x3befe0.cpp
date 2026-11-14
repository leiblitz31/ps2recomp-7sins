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

// Function: sub_003BEFE0
// Address: 0x3befe0 - 0x3bf080
void sub_003BEFE0_0x3befe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BEFE0_0x3befe0");
#endif

    switch (ctx->pc) {
        case 0x3befe0u: goto label_3befe0;
        case 0x3befe4u: goto label_3befe4;
        case 0x3befe8u: goto label_3befe8;
        case 0x3befecu: goto label_3befec;
        case 0x3beff0u: goto label_3beff0;
        case 0x3beff4u: goto label_3beff4;
        case 0x3beff8u: goto label_3beff8;
        case 0x3beffcu: goto label_3beffc;
        case 0x3bf000u: goto label_3bf000;
        case 0x3bf004u: goto label_3bf004;
        case 0x3bf008u: goto label_3bf008;
        case 0x3bf00cu: goto label_3bf00c;
        case 0x3bf010u: goto label_3bf010;
        case 0x3bf014u: goto label_3bf014;
        case 0x3bf018u: goto label_3bf018;
        case 0x3bf01cu: goto label_3bf01c;
        case 0x3bf020u: goto label_3bf020;
        case 0x3bf024u: goto label_3bf024;
        case 0x3bf028u: goto label_3bf028;
        case 0x3bf02cu: goto label_3bf02c;
        case 0x3bf030u: goto label_3bf030;
        case 0x3bf034u: goto label_3bf034;
        case 0x3bf038u: goto label_3bf038;
        case 0x3bf03cu: goto label_3bf03c;
        case 0x3bf040u: goto label_3bf040;
        case 0x3bf044u: goto label_3bf044;
        case 0x3bf048u: goto label_3bf048;
        case 0x3bf04cu: goto label_3bf04c;
        case 0x3bf050u: goto label_3bf050;
        case 0x3bf054u: goto label_3bf054;
        case 0x3bf058u: goto label_3bf058;
        case 0x3bf05cu: goto label_3bf05c;
        case 0x3bf060u: goto label_3bf060;
        case 0x3bf064u: goto label_3bf064;
        case 0x3bf068u: goto label_3bf068;
        case 0x3bf06cu: goto label_3bf06c;
        case 0x3bf070u: goto label_3bf070;
        case 0x3bf074u: goto label_3bf074;
        case 0x3bf078u: goto label_3bf078;
        case 0x3bf07cu: goto label_3bf07c;
        default: break;
    }

    ctx->pc = 0x3befe0u;

label_3befe0:
    // 0x3befe0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3befe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3befe4:
    // 0x3befe4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3befe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3befe8:
    // 0x3befe8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3befe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3befec:
    // 0x3befec: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3befecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3beff0:
    // 0x3beff0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3beff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3beff4:
    // 0x3beff4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x3beff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
label_3beff8:
    // 0x3beff8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3beff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3beffc:
    // 0x3beffc: 0x2451e880  addiu       $s1, $v0, -0x1780
    ctx->pc = 0x3beffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3bf000:
    // 0x3bf000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3bf000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3bf004:
    // 0x3bf004: 0x34a50180  ori         $a1, $a1, 0x180
    ctx->pc = 0x3bf004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)384);
label_3bf008:
    // 0x3bf008: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x3bf008u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
label_3bf00c:
    // 0x3bf00c: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3bf00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3bf010:
    // 0x3bf010: 0x40f809  jalr        $v0
label_3bf014:
    if (ctx->pc == 0x3BF014u) {
        ctx->pc = 0x3BF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF010u;
        // 0x3bf014: 0x2650b180  addiu       $s0, $s2, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF018u;
        goto label_3bf018;
    }
    ctx->pc = 0x3BF010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF018u);
        ctx->pc = 0x3BF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF010u;
        // 0x3bf014: 0x2650b180  addiu       $s0, $s2, -0x4E80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294947200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF010u, 0x3BF018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF018u;
label_3bf018:
    // 0x3bf018: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3bf01c:
    if (ctx->pc == 0x3BF01Cu) {
        ctx->pc = 0x3BF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF018u;
        // 0x3bf01c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF020u;
        goto label_3bf020;
    }
    ctx->pc = 0x3BF018u;
    {
        const bool branch_taken_0x3bf018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF018u;
        // 0x3bf01c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf018) {
            ctx->pc = 0x3BF060u;
            goto label_3bf060;
        }
    }
    ctx->pc = 0x3BF020u;
label_3bf020:
    // 0x3bf020: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3bf020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3bf024:
    // 0x3bf024: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x3bf024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_3bf028:
    // 0x3bf028: 0x24043000  addiu       $a0, $zero, 0x3000
    ctx->pc = 0x3bf028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
label_3bf02c:
    // 0x3bf02c: 0x40f809  jalr        $v0
label_3bf030:
    if (ctx->pc == 0x3BF030u) {
        ctx->pc = 0x3BF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF02Cu;
        // 0x3bf030: 0x34a50180  ori         $a1, $a1, 0x180 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF034u;
        goto label_3bf034;
    }
    ctx->pc = 0x3BF02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF034u);
        ctx->pc = 0x3BF030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF02Cu;
        // 0x3bf030: 0x34a50180  ori         $a1, $a1, 0x180 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)384);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF02Cu, 0x3BF034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF034u;
label_3bf034:
    // 0x3bf034: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3bf038:
    if (ctx->pc == 0x3BF038u) {
        ctx->pc = 0x3BF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF034u;
        // 0x3bf038: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF03Cu;
        goto label_3bf03c;
    }
    ctx->pc = 0x3BF034u;
    {
        const bool branch_taken_0x3bf034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF034u;
        // 0x3bf038: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf034) {
            ctx->pc = 0x3BF050u;
            goto label_3bf050;
        }
    }
    ctx->pc = 0x3BF03Cu;
label_3bf03c:
    // 0x3bf03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bf040:
    // 0x3bf040: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3bf040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3bf044:
    // 0x3bf044: 0xae42b180  sw          $v0, -0x4E80($s2)
    ctx->pc = 0x3bf044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294947200), GPR_U32(ctx, 2));
label_3bf048:
    // 0x3bf048: 0x10000006  b           . + 4 + (0x6 << 2)
label_3bf04c:
    if (ctx->pc == 0x3BF04Cu) {
        ctx->pc = 0x3BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF048u;
        // 0x3bf04c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF050u;
        goto label_3bf050;
    }
    ctx->pc = 0x3BF048u;
    {
        const bool branch_taken_0x3bf048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BF04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF048u;
        // 0x3bf04c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bf048) {
            ctx->pc = 0x3BF064u;
            goto label_3bf064;
        }
    }
    ctx->pc = 0x3BF050u;
label_3bf050:
    // 0x3bf050: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3bf050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3bf054:
    // 0x3bf054: 0x40f809  jalr        $v0
label_3bf058:
    if (ctx->pc == 0x3BF058u) {
        ctx->pc = 0x3BF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF054u;
        // 0x3bf058: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF05Cu;
        goto label_3bf05c;
    }
    ctx->pc = 0x3BF054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3BF05Cu);
        ctx->pc = 0x3BF058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF054u;
        // 0x3bf058: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF054u, 0x3BF05Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3BF05Cu;
label_3bf05c:
    // 0x3bf05c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3bf05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3bf060:
    // 0x3bf060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bf060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bf064:
    // 0x3bf064: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3bf064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3bf068:
    // 0x3bf068: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3bf068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3bf06c:
    // 0x3bf06c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3bf06cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3bf070:
    // 0x3bf070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3bf070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3bf074:
    // 0x3bf074: 0x3e00008  jr          $ra
label_3bf078:
    if (ctx->pc == 0x3BF078u) {
        ctx->pc = 0x3BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF074u;
        // 0x3bf078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BF07Cu;
        goto label_3bf07c;
    }
    ctx->pc = 0x3BF074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF074u;
        // 0x3bf078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF07Cu;
label_3bf07c:
    // 0x3bf07c: 0x0  nop
    ctx->pc = 0x3bf07cu;
    // NOP
    ctx->pc = 0x3bf080u;
}
