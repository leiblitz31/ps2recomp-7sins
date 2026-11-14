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

// Function: sub_0039D010
// Address: 0x39d010 - 0x39d098
void sub_0039D010_0x39d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D010_0x39d010");
#endif

    switch (ctx->pc) {
        case 0x39d010u: goto label_39d010;
        case 0x39d014u: goto label_39d014;
        case 0x39d018u: goto label_39d018;
        case 0x39d01cu: goto label_39d01c;
        case 0x39d020u: goto label_39d020;
        case 0x39d024u: goto label_39d024;
        case 0x39d028u: goto label_39d028;
        case 0x39d02cu: goto label_39d02c;
        case 0x39d030u: goto label_39d030;
        case 0x39d034u: goto label_39d034;
        case 0x39d038u: goto label_39d038;
        case 0x39d03cu: goto label_39d03c;
        case 0x39d040u: goto label_39d040;
        case 0x39d044u: goto label_39d044;
        case 0x39d048u: goto label_39d048;
        case 0x39d04cu: goto label_39d04c;
        case 0x39d050u: goto label_39d050;
        case 0x39d054u: goto label_39d054;
        case 0x39d058u: goto label_39d058;
        case 0x39d05cu: goto label_39d05c;
        case 0x39d060u: goto label_39d060;
        case 0x39d064u: goto label_39d064;
        case 0x39d068u: goto label_39d068;
        case 0x39d06cu: goto label_39d06c;
        case 0x39d070u: goto label_39d070;
        case 0x39d074u: goto label_39d074;
        case 0x39d078u: goto label_39d078;
        case 0x39d07cu: goto label_39d07c;
        case 0x39d080u: goto label_39d080;
        case 0x39d084u: goto label_39d084;
        case 0x39d088u: goto label_39d088;
        case 0x39d08cu: goto label_39d08c;
        case 0x39d090u: goto label_39d090;
        case 0x39d094u: goto label_39d094;
        default: break;
    }

    ctx->pc = 0x39d010u;

label_39d010:
    // 0x39d010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39d014:
    // 0x39d014: 0x8f82a9e0  lw          $v0, -0x5620($gp)
    ctx->pc = 0x39d014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945248)));
label_39d018:
    // 0x39d018: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39d01c:
    // 0x39d01c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39d020:
    // 0x39d020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39d020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d024:
    // 0x39d024: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39d028:
    // 0x39d028: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x39d028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39d02c:
    // 0x39d02c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d030:
    // 0x39d030: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x39d030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_39d034:
    // 0x39d034: 0x40f809  jalr        $v0
label_39d038:
    if (ctx->pc == 0x39D038u) {
        ctx->pc = 0x39D03Cu;
        goto label_39d03c;
    }
    ctx->pc = 0x39D034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D03Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D034u, 0x39D03Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D03Cu;
label_39d03c:
    // 0x39d03c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_39d040:
    if (ctx->pc == 0x39D040u) {
        ctx->pc = 0x39D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D03Cu;
        // 0x39d040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D044u;
        goto label_39d044;
    }
    ctx->pc = 0x39D03Cu;
    {
        const bool branch_taken_0x39d03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d03c) {
            ctx->pc = 0x39D040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D03Cu;
            // 0x39d040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D07Cu;
            goto label_39d07c;
        }
    }
    ctx->pc = 0x39D044u;
label_39d044:
    // 0x39d044: 0x8e11000c  lw          $s1, 0xC($s0)
    ctx->pc = 0x39d044u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39d048:
    // 0x39d048: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_39d04c:
    if (ctx->pc == 0x39D04Cu) {
        ctx->pc = 0x39D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D048u;
        // 0x39d04c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D050u;
        goto label_39d050;
    }
    ctx->pc = 0x39D048u;
    {
        const bool branch_taken_0x39d048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D048u;
        // 0x39d04c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d048) {
            ctx->pc = 0x39D078u;
            goto label_39d078;
        }
    }
    ctx->pc = 0x39D050u;
label_39d050:
    // 0x39d050: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d054:
    // 0x39d054: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d058:
    // 0x39d058: 0xc0e6c1a  jal         func_39B068
label_39d05c:
    if (ctx->pc == 0x39D05Cu) {
        ctx->pc = 0x39D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D058u;
        // 0x39d05c: 0x8c50e920  lw          $s0, -0x16E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961440)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D060u;
        goto label_39d060;
    }
    ctx->pc = 0x39D058u;
    SET_GPR_U32(ctx, 31, 0x39D060u);
    ctx->pc = 0x39D05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D058u;
    // 0x39d05c: 0x8c50e920  lw          $s0, -0x16E0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961440)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B068u, 0x39D058u, 0x39D060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D060u;
label_39d060:
    // 0x39d060: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x39d060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39d064:
    // 0x39d064: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39d064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d068:
    // 0x39d068: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d06c:
    // 0x39d06c: 0x38c60001  xori        $a2, $a2, 0x1
    ctx->pc = 0x39d06cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_39d070:
    // 0x39d070: 0x200f809  jalr        $s0
label_39d074:
    if (ctx->pc == 0x39D074u) {
        ctx->pc = 0x39D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D070u;
        // 0x39d074: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D078u;
        goto label_39d078;
    }
    ctx->pc = 0x39D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x39D078u);
        ctx->pc = 0x39D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D070u;
        // 0x39d074: 0x2cc60001  sltiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D070u, 0x39D078u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D078u;
label_39d078:
    // 0x39d078: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39d078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d07c:
    // 0x39d07c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39d07cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d080:
    // 0x39d080: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39d080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d084:
    // 0x39d084: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39d084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d088:
    // 0x39d088: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d08c:
    // 0x39d08c: 0x3e00008  jr          $ra
label_39d090:
    if (ctx->pc == 0x39D090u) {
        ctx->pc = 0x39D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D08Cu;
        // 0x39d090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D094u;
        goto label_39d094;
    }
    ctx->pc = 0x39D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D08Cu;
        // 0x39d090: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D094u;
label_39d094:
    // 0x39d094: 0x0  nop
    ctx->pc = 0x39d094u;
    // NOP
    ctx->pc = 0x39d098u;
}
