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

// Function: sub_0013CFF0
// Address: 0x13cff0 - 0x13d0a0
void sub_0013CFF0_0x13cff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CFF0_0x13cff0");
#endif

    switch (ctx->pc) {
        case 0x13cff0u: goto label_13cff0;
        case 0x13cff4u: goto label_13cff4;
        case 0x13cff8u: goto label_13cff8;
        case 0x13cffcu: goto label_13cffc;
        case 0x13d000u: goto label_13d000;
        case 0x13d004u: goto label_13d004;
        case 0x13d008u: goto label_13d008;
        case 0x13d00cu: goto label_13d00c;
        case 0x13d010u: goto label_13d010;
        case 0x13d014u: goto label_13d014;
        case 0x13d018u: goto label_13d018;
        case 0x13d01cu: goto label_13d01c;
        case 0x13d020u: goto label_13d020;
        case 0x13d024u: goto label_13d024;
        case 0x13d028u: goto label_13d028;
        case 0x13d02cu: goto label_13d02c;
        case 0x13d030u: goto label_13d030;
        case 0x13d034u: goto label_13d034;
        case 0x13d038u: goto label_13d038;
        case 0x13d03cu: goto label_13d03c;
        case 0x13d040u: goto label_13d040;
        case 0x13d044u: goto label_13d044;
        case 0x13d048u: goto label_13d048;
        case 0x13d04cu: goto label_13d04c;
        case 0x13d050u: goto label_13d050;
        case 0x13d054u: goto label_13d054;
        case 0x13d058u: goto label_13d058;
        case 0x13d05cu: goto label_13d05c;
        case 0x13d060u: goto label_13d060;
        case 0x13d064u: goto label_13d064;
        case 0x13d068u: goto label_13d068;
        case 0x13d06cu: goto label_13d06c;
        case 0x13d070u: goto label_13d070;
        case 0x13d074u: goto label_13d074;
        case 0x13d078u: goto label_13d078;
        case 0x13d07cu: goto label_13d07c;
        case 0x13d080u: goto label_13d080;
        case 0x13d084u: goto label_13d084;
        case 0x13d088u: goto label_13d088;
        case 0x13d08cu: goto label_13d08c;
        case 0x13d090u: goto label_13d090;
        case 0x13d094u: goto label_13d094;
        case 0x13d098u: goto label_13d098;
        case 0x13d09cu: goto label_13d09c;
        default: break;
    }

    ctx->pc = 0x13cff0u;

label_13cff0:
    // 0x13cff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13cff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_13cff4:
    // 0x13cff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13cff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_13cff8:
    // 0x13cff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13cff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_13cffc:
    // 0x13cffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13d000:
    // 0x13d000: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_13d004:
    // 0x13d004: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13d004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d008:
    // 0x13d008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_13d00c:
    if (ctx->pc == 0x13D00Cu) {
        ctx->pc = 0x13D010u;
        goto label_13d010;
    }
    ctx->pc = 0x13D008u;
    {
        const bool branch_taken_0x13d008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d008) {
            ctx->pc = 0x13D018u;
            goto label_13d018;
        }
    }
    ctx->pc = 0x13D010u;
label_13d010:
    // 0x13d010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13d014:
    // 0x13d014: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x13d014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_13d018:
    // 0x13d018: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x13d018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13d01c:
    // 0x13d01c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13d01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_13d020:
    // 0x13d020: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13d020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13d024:
    // 0x13d024: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13d024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_13d028:
    // 0x13d028: 0xc119b68  jal         func_466DA0
label_13d02c:
    if (ctx->pc == 0x13D02Cu) {
        ctx->pc = 0x13D030u;
        goto label_13d030;
    }
    ctx->pc = 0x13D028u;
    SET_GPR_U32(ctx, 31, 0x13D030u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x13D028u, 0x13D030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D030u;
label_13d030:
    // 0x13d030: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13d030u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d034:
    // 0x13d034: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_13d038:
    if (ctx->pc == 0x13D038u) {
        ctx->pc = 0x13D03Cu;
        goto label_13d03c;
    }
    ctx->pc = 0x13D034u;
    {
        const bool branch_taken_0x13d034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d034) {
            ctx->pc = 0x13D048u;
            goto label_13d048;
        }
    }
    ctx->pc = 0x13D03Cu;
label_13d03c:
    // 0x13d03c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13d03cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13d040:
    // 0x13d040: 0x1000000e  b           . + 4 + (0xE << 2)
label_13d044:
    if (ctx->pc == 0x13D044u) {
        ctx->pc = 0x13D048u;
        goto label_13d048;
    }
    ctx->pc = 0x13D040u;
    {
        const bool branch_taken_0x13d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d040) {
            ctx->pc = 0x13D07Cu;
            goto label_13d07c;
        }
    }
    ctx->pc = 0x13D048u;
label_13d048:
    // 0x13d048: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13d04c:
    // 0x13d04c: 0xc0ba088  jal         func_2E8220
label_13d050:
    if (ctx->pc == 0x13D050u) {
        ctx->pc = 0x13D054u;
        goto label_13d054;
    }
    ctx->pc = 0x13D04Cu;
    SET_GPR_U32(ctx, 31, 0x13D054u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x13D04Cu, 0x13D054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D054u;
label_13d054:
    // 0x13d054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13d054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13d058:
    // 0x13d058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13d058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13d05c:
    // 0x13d05c: 0xc0ba088  jal         func_2E8220
label_13d060:
    if (ctx->pc == 0x13D060u) {
        ctx->pc = 0x13D064u;
        goto label_13d064;
    }
    ctx->pc = 0x13D05Cu;
    SET_GPR_U32(ctx, 31, 0x13D064u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x13D05Cu, 0x13D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D064u;
label_13d064:
    // 0x13d064: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_13d068:
    if (ctx->pc == 0x13D068u) {
        ctx->pc = 0x13D06Cu;
        goto label_13d06c;
    }
    ctx->pc = 0x13D064u;
    {
        const bool branch_taken_0x13d064 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d064) {
            ctx->pc = 0x13D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d018;
        }
    }
    ctx->pc = 0x13D06Cu;
label_13d06c:
    // 0x13d06c: 0x200f809  jalr        $s0
label_13d070:
    if (ctx->pc == 0x13D070u) {
        ctx->pc = 0x13D074u;
        goto label_13d074;
    }
    ctx->pc = 0x13D06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x13D074u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D06Cu, 0x13D074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13D074u;
label_13d074:
    // 0x13d074: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_13d078:
    if (ctx->pc == 0x13D078u) {
        ctx->pc = 0x13D07Cu;
        goto label_13d07c;
    }
    ctx->pc = 0x13D074u;
    {
        const bool branch_taken_0x13d074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d074) {
            ctx->pc = 0x13D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d018;
        }
    }
    ctx->pc = 0x13D07Cu;
label_13d07c:
    // 0x13d07c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13d07cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13d080:
    // 0x13d080: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d080u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d084:
    // 0x13d084: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13d084u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13d088:
    // 0x13d088: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x13d088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13d08c:
    // 0x13d08c: 0x3e00008  jr          $ra
label_13d090:
    if (ctx->pc == 0x13D090u) {
        ctx->pc = 0x13D094u;
        goto label_13d094;
    }
    ctx->pc = 0x13D08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D094u;
label_13d094:
    // 0x13d094: 0x0  nop
    ctx->pc = 0x13d094u;
    // NOP
label_13d098:
    // 0x13d098: 0x0  nop
    ctx->pc = 0x13d098u;
    // NOP
label_13d09c:
    // 0x13d09c: 0x0  nop
    ctx->pc = 0x13d09cu;
    // NOP
    ctx->pc = 0x13d0a0u;
}
