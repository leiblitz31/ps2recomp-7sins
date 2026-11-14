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

// Function: sub_00350FF8
// Address: 0x350ff8 - 0x351098
void sub_00350FF8_0x350ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350FF8_0x350ff8");
#endif

    switch (ctx->pc) {
        case 0x350ff8u: goto label_350ff8;
        case 0x350ffcu: goto label_350ffc;
        case 0x351000u: goto label_351000;
        case 0x351004u: goto label_351004;
        case 0x351008u: goto label_351008;
        case 0x35100cu: goto label_35100c;
        case 0x351010u: goto label_351010;
        case 0x351014u: goto label_351014;
        case 0x351018u: goto label_351018;
        case 0x35101cu: goto label_35101c;
        case 0x351020u: goto label_351020;
        case 0x351024u: goto label_351024;
        case 0x351028u: goto label_351028;
        case 0x35102cu: goto label_35102c;
        case 0x351030u: goto label_351030;
        case 0x351034u: goto label_351034;
        case 0x351038u: goto label_351038;
        case 0x35103cu: goto label_35103c;
        case 0x351040u: goto label_351040;
        case 0x351044u: goto label_351044;
        case 0x351048u: goto label_351048;
        case 0x35104cu: goto label_35104c;
        case 0x351050u: goto label_351050;
        case 0x351054u: goto label_351054;
        case 0x351058u: goto label_351058;
        case 0x35105cu: goto label_35105c;
        case 0x351060u: goto label_351060;
        case 0x351064u: goto label_351064;
        case 0x351068u: goto label_351068;
        case 0x35106cu: goto label_35106c;
        case 0x351070u: goto label_351070;
        case 0x351074u: goto label_351074;
        case 0x351078u: goto label_351078;
        case 0x35107cu: goto label_35107c;
        case 0x351080u: goto label_351080;
        case 0x351084u: goto label_351084;
        case 0x351088u: goto label_351088;
        case 0x35108cu: goto label_35108c;
        case 0x351090u: goto label_351090;
        case 0x351094u: goto label_351094;
        default: break;
    }

    ctx->pc = 0x350ff8u;

label_350ff8:
    // 0x350ff8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x350ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_350ffc:
    // 0x350ffc: 0x8f82a858  lw          $v0, -0x57A8($gp)
    ctx->pc = 0x350ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
label_351000:
    // 0x351000: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x351000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_351004:
    // 0x351004: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x351004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_351008:
    // 0x351008: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x351008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35100c:
    // 0x35100c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x35100cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_351010:
    // 0x351010: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x351010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_351014:
    // 0x351014: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x351014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_351018:
    // 0x351018: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x351018u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_35101c:
    // 0x35101c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x35101cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_351020:
    // 0x351020: 0x18c00015  blez        $a2, . + 4 + (0x15 << 2)
label_351024:
    if (ctx->pc == 0x351024u) {
        ctx->pc = 0x351024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351020u;
        // 0x351024: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351028u;
        goto label_351028;
    }
    ctx->pc = 0x351020u;
    {
        const bool branch_taken_0x351020 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x351024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351020u;
        // 0x351024: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351020) {
            ctx->pc = 0x351078u;
            goto label_351078;
        }
    }
    ctx->pc = 0x351028u;
label_351028:
    // 0x351028: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x351028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_35102c:
    // 0x35102c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_351030:
    if (ctx->pc == 0x351030u) {
        ctx->pc = 0x351030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35102Cu;
        // 0x351030: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351034u;
        goto label_351034;
    }
    ctx->pc = 0x35102Cu;
    {
        const bool branch_taken_0x35102c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35102c) {
            ctx->pc = 0x351030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35102Cu;
            // 0x351030: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351048u;
            goto label_351048;
        }
    }
    ctx->pc = 0x351034u;
label_351034:
    // 0x351034: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x351034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_351038:
    // 0x351038: 0x40f809  jalr        $v0
label_35103c:
    if (ctx->pc == 0x35103Cu) {
        ctx->pc = 0x35103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351038u;
        // 0x35103c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351040u;
        goto label_351040;
    }
    ctx->pc = 0x351038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351040u);
        ctx->pc = 0x35103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351038u;
        // 0x35103c: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351038u, 0x351040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351040u;
label_351040:
    // 0x351040: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x351040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_351044:
    // 0x351044: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x351044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_351048:
    // 0x351048: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_35104c:
    if (ctx->pc == 0x35104Cu) {
        ctx->pc = 0x35104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351048u;
        // 0x35104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351050u;
        goto label_351050;
    }
    ctx->pc = 0x351048u;
    {
        const bool branch_taken_0x351048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351048u;
        // 0x35104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351048) {
            ctx->pc = 0x351060u;
            goto label_351060;
        }
    }
    ctx->pc = 0x351050u;
label_351050:
    // 0x351050: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x351050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_351054:
    // 0x351054: 0x40f809  jalr        $v0
label_351058:
    if (ctx->pc == 0x351058u) {
        ctx->pc = 0x351058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351054u;
        // 0x351058: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35105Cu;
        goto label_35105c;
    }
    ctx->pc = 0x351054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35105Cu);
        ctx->pc = 0x351058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351054u;
        // 0x351058: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351054u, 0x35105Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35105Cu;
label_35105c:
    // 0x35105c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35105cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351060:
    // 0x351060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351064:
    // 0x351064: 0x16420005  bne         $s2, $v0, . + 4 + (0x5 << 2)
label_351068:
    if (ctx->pc == 0x351068u) {
        ctx->pc = 0x351068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351064u;
        // 0x351068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35106Cu;
        goto label_35106c;
    }
    ctx->pc = 0x351064u;
    {
        const bool branch_taken_0x351064 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x351068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351064u;
        // 0x351068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351064) {
            ctx->pc = 0x35107Cu;
            goto label_35107c;
        }
    }
    ctx->pc = 0x35106Cu;
label_35106c:
    // 0x35106c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_351070:
    // 0x351070: 0x40f809  jalr        $v0
label_351074:
    if (ctx->pc == 0x351074u) {
        ctx->pc = 0x351074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351070u;
        // 0x351074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351078u;
        goto label_351078;
    }
    ctx->pc = 0x351070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x351078u);
        ctx->pc = 0x351074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351070u;
        // 0x351074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351070u, 0x351078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x351078u;
label_351078:
    // 0x351078: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x351078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35107c:
    // 0x35107c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x35107cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_351080:
    // 0x351080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x351080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_351084:
    // 0x351084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x351084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351088:
    // 0x351088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35108c:
    // 0x35108c: 0x3e00008  jr          $ra
label_351090:
    if (ctx->pc == 0x351090u) {
        ctx->pc = 0x351090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35108Cu;
        // 0x351090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x351094u;
        goto label_351094;
    }
    ctx->pc = 0x35108Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35108Cu;
        // 0x351090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35108Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351094u;
label_351094:
    // 0x351094: 0x0  nop
    ctx->pc = 0x351094u;
    // NOP
    ctx->pc = 0x351098u;
}
