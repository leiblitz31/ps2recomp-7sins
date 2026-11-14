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

// Function: sub_0045B010
// Address: 0x45b010 - 0x45b0b0
void sub_0045B010_0x45b010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045B010_0x45b010");
#endif

    switch (ctx->pc) {
        case 0x45b010u: goto label_45b010;
        case 0x45b014u: goto label_45b014;
        case 0x45b018u: goto label_45b018;
        case 0x45b01cu: goto label_45b01c;
        case 0x45b020u: goto label_45b020;
        case 0x45b024u: goto label_45b024;
        case 0x45b028u: goto label_45b028;
        case 0x45b02cu: goto label_45b02c;
        case 0x45b030u: goto label_45b030;
        case 0x45b034u: goto label_45b034;
        case 0x45b038u: goto label_45b038;
        case 0x45b03cu: goto label_45b03c;
        case 0x45b040u: goto label_45b040;
        case 0x45b044u: goto label_45b044;
        case 0x45b048u: goto label_45b048;
        case 0x45b04cu: goto label_45b04c;
        case 0x45b050u: goto label_45b050;
        case 0x45b054u: goto label_45b054;
        case 0x45b058u: goto label_45b058;
        case 0x45b05cu: goto label_45b05c;
        case 0x45b060u: goto label_45b060;
        case 0x45b064u: goto label_45b064;
        case 0x45b068u: goto label_45b068;
        case 0x45b06cu: goto label_45b06c;
        case 0x45b070u: goto label_45b070;
        case 0x45b074u: goto label_45b074;
        case 0x45b078u: goto label_45b078;
        case 0x45b07cu: goto label_45b07c;
        case 0x45b080u: goto label_45b080;
        case 0x45b084u: goto label_45b084;
        case 0x45b088u: goto label_45b088;
        case 0x45b08cu: goto label_45b08c;
        case 0x45b090u: goto label_45b090;
        case 0x45b094u: goto label_45b094;
        case 0x45b098u: goto label_45b098;
        case 0x45b09cu: goto label_45b09c;
        case 0x45b0a0u: goto label_45b0a0;
        case 0x45b0a4u: goto label_45b0a4;
        case 0x45b0a8u: goto label_45b0a8;
        case 0x45b0acu: goto label_45b0ac;
        default: break;
    }

    ctx->pc = 0x45b010u;

label_45b010:
    // 0x45b010: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x45b010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_45b014:
    // 0x45b014: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45b014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45b018:
    // 0x45b018: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45b018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45b01c:
    // 0x45b01c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45b01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45b020:
    // 0x45b020: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x45b020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_45b024:
    // 0x45b024: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45b024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45b028:
    // 0x45b028: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_45b02c:
    if (ctx->pc == 0x45B02Cu) {
        ctx->pc = 0x45B030u;
        goto label_45b030;
    }
    ctx->pc = 0x45B028u;
    {
        const bool branch_taken_0x45b028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45b028) {
            ctx->pc = 0x45B038u;
            goto label_45b038;
        }
    }
    ctx->pc = 0x45B030u;
label_45b030:
    // 0x45b030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45b030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45b034:
    // 0x45b034: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x45b034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_45b038:
    // 0x45b038: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45b038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45b03c:
    // 0x45b03c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45b040:
    // 0x45b040: 0xc119b68  jal         func_466DA0
label_45b044:
    if (ctx->pc == 0x45B044u) {
        ctx->pc = 0x45B048u;
        goto label_45b048;
    }
    ctx->pc = 0x45B040u;
    SET_GPR_U32(ctx, 31, 0x45B048u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x45B040u, 0x45B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B048u;
label_45b048:
    // 0x45b048: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45b048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b04c:
    // 0x45b04c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_45b050:
    if (ctx->pc == 0x45B050u) {
        ctx->pc = 0x45B054u;
        goto label_45b054;
    }
    ctx->pc = 0x45B04Cu;
    {
        const bool branch_taken_0x45b04c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b04c) {
            ctx->pc = 0x45B060u;
            goto label_45b060;
        }
    }
    ctx->pc = 0x45B054u;
label_45b054:
    // 0x45b054: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x45b054u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45b058:
    // 0x45b058: 0x1000000e  b           . + 4 + (0xE << 2)
label_45b05c:
    if (ctx->pc == 0x45B05Cu) {
        ctx->pc = 0x45B060u;
        goto label_45b060;
    }
    ctx->pc = 0x45B058u;
    {
        const bool branch_taken_0x45b058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b058) {
            ctx->pc = 0x45B094u;
            goto label_45b094;
        }
    }
    ctx->pc = 0x45B060u;
label_45b060:
    // 0x45b060: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45b060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45b064:
    // 0x45b064: 0xc0ba088  jal         func_2E8220
label_45b068:
    if (ctx->pc == 0x45B068u) {
        ctx->pc = 0x45B06Cu;
        goto label_45b06c;
    }
    ctx->pc = 0x45B064u;
    SET_GPR_U32(ctx, 31, 0x45B06Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x45B064u, 0x45B06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B06Cu;
label_45b06c:
    // 0x45b06c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45b06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45b070:
    // 0x45b070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45b070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45b074:
    // 0x45b074: 0xc0ba088  jal         func_2E8220
label_45b078:
    if (ctx->pc == 0x45B078u) {
        ctx->pc = 0x45B07Cu;
        goto label_45b07c;
    }
    ctx->pc = 0x45B074u;
    SET_GPR_U32(ctx, 31, 0x45B07Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x45B074u, 0x45B07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45B07Cu;
label_45b07c:
    // 0x45b07c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_45b080:
    if (ctx->pc == 0x45B080u) {
        ctx->pc = 0x45B084u;
        goto label_45b084;
    }
    ctx->pc = 0x45B07Cu;
    {
        const bool branch_taken_0x45b07c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b07c) {
            ctx->pc = 0x45B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b038;
        }
    }
    ctx->pc = 0x45B084u;
label_45b084:
    // 0x45b084: 0x200f809  jalr        $s0
label_45b088:
    if (ctx->pc == 0x45B088u) {
        ctx->pc = 0x45B08Cu;
        goto label_45b08c;
    }
    ctx->pc = 0x45B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x45B08Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B084u, 0x45B08Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45B08Cu;
label_45b08c:
    // 0x45b08c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_45b090:
    if (ctx->pc == 0x45B090u) {
        ctx->pc = 0x45B094u;
        goto label_45b094;
    }
    ctx->pc = 0x45B08Cu;
    {
        const bool branch_taken_0x45b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45b08c) {
            ctx->pc = 0x45B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45b038;
        }
    }
    ctx->pc = 0x45B094u;
label_45b094:
    // 0x45b094: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x45b094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_45b098:
    // 0x45b098: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45b098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45b09c:
    // 0x45b09c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45b09cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45b0a0:
    // 0x45b0a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x45b0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45b0a4:
    // 0x45b0a4: 0x3e00008  jr          $ra
label_45b0a8:
    if (ctx->pc == 0x45B0A8u) {
        ctx->pc = 0x45B0ACu;
        goto label_45b0ac;
    }
    ctx->pc = 0x45B0A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45B0A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45B0ACu;
label_45b0ac:
    // 0x45b0ac: 0x0  nop
    ctx->pc = 0x45b0acu;
    // NOP
    ctx->pc = 0x45b0b0u;
}
