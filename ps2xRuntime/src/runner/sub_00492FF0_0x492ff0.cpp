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

// Function: sub_00492FF0
// Address: 0x492ff0 - 0x493090
void sub_00492FF0_0x492ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492FF0_0x492ff0");
#endif

    switch (ctx->pc) {
        case 0x492ff0u: goto label_492ff0;
        case 0x492ff4u: goto label_492ff4;
        case 0x492ff8u: goto label_492ff8;
        case 0x492ffcu: goto label_492ffc;
        case 0x493000u: goto label_493000;
        case 0x493004u: goto label_493004;
        case 0x493008u: goto label_493008;
        case 0x49300cu: goto label_49300c;
        case 0x493010u: goto label_493010;
        case 0x493014u: goto label_493014;
        case 0x493018u: goto label_493018;
        case 0x49301cu: goto label_49301c;
        case 0x493020u: goto label_493020;
        case 0x493024u: goto label_493024;
        case 0x493028u: goto label_493028;
        case 0x49302cu: goto label_49302c;
        case 0x493030u: goto label_493030;
        case 0x493034u: goto label_493034;
        case 0x493038u: goto label_493038;
        case 0x49303cu: goto label_49303c;
        case 0x493040u: goto label_493040;
        case 0x493044u: goto label_493044;
        case 0x493048u: goto label_493048;
        case 0x49304cu: goto label_49304c;
        case 0x493050u: goto label_493050;
        case 0x493054u: goto label_493054;
        case 0x493058u: goto label_493058;
        case 0x49305cu: goto label_49305c;
        case 0x493060u: goto label_493060;
        case 0x493064u: goto label_493064;
        case 0x493068u: goto label_493068;
        case 0x49306cu: goto label_49306c;
        case 0x493070u: goto label_493070;
        case 0x493074u: goto label_493074;
        case 0x493078u: goto label_493078;
        case 0x49307cu: goto label_49307c;
        case 0x493080u: goto label_493080;
        case 0x493084u: goto label_493084;
        case 0x493088u: goto label_493088;
        case 0x49308cu: goto label_49308c;
        default: break;
    }

    ctx->pc = 0x492ff0u;

label_492ff0:
    // 0x492ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x492ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_492ff4:
    // 0x492ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x492ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_492ff8:
    // 0x492ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x492ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_492ffc:
    // 0x492ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x492ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_493000:
    // 0x493000: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x493000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_493004:
    // 0x493004: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x493004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_493008:
    // 0x493008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_49300c:
    if (ctx->pc == 0x49300Cu) {
        ctx->pc = 0x493010u;
        goto label_493010;
    }
    ctx->pc = 0x493008u;
    {
        const bool branch_taken_0x493008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x493008) {
            ctx->pc = 0x493018u;
            goto label_493018;
        }
    }
    ctx->pc = 0x493010u;
label_493010:
    // 0x493010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x493010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_493014:
    // 0x493014: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x493014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_493018:
    // 0x493018: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x493018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_49301c:
    // 0x49301c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x49301cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_493020:
    // 0x493020: 0xc119b68  jal         func_466DA0
label_493024:
    if (ctx->pc == 0x493024u) {
        ctx->pc = 0x493028u;
        goto label_493028;
    }
    ctx->pc = 0x493020u;
    SET_GPR_U32(ctx, 31, 0x493028u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x493020u, 0x493028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x493028u;
label_493028:
    // 0x493028: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x493028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49302c:
    // 0x49302c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_493030:
    if (ctx->pc == 0x493030u) {
        ctx->pc = 0x493034u;
        goto label_493034;
    }
    ctx->pc = 0x49302Cu;
    {
        const bool branch_taken_0x49302c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x49302c) {
            ctx->pc = 0x493040u;
            goto label_493040;
        }
    }
    ctx->pc = 0x493034u;
label_493034:
    // 0x493034: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x493034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_493038:
    // 0x493038: 0x1000000e  b           . + 4 + (0xE << 2)
label_49303c:
    if (ctx->pc == 0x49303Cu) {
        ctx->pc = 0x493040u;
        goto label_493040;
    }
    ctx->pc = 0x493038u;
    {
        const bool branch_taken_0x493038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x493038) {
            ctx->pc = 0x493074u;
            goto label_493074;
        }
    }
    ctx->pc = 0x493040u;
label_493040:
    // 0x493040: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x493040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_493044:
    // 0x493044: 0xc0ba088  jal         func_2E8220
label_493048:
    if (ctx->pc == 0x493048u) {
        ctx->pc = 0x49304Cu;
        goto label_49304c;
    }
    ctx->pc = 0x493044u;
    SET_GPR_U32(ctx, 31, 0x49304Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x493044u, 0x49304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49304Cu;
label_49304c:
    // 0x49304c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x49304cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_493050:
    // 0x493050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x493050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_493054:
    // 0x493054: 0xc0ba088  jal         func_2E8220
label_493058:
    if (ctx->pc == 0x493058u) {
        ctx->pc = 0x49305Cu;
        goto label_49305c;
    }
    ctx->pc = 0x493054u;
    SET_GPR_U32(ctx, 31, 0x49305Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x493054u, 0x49305Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49305Cu;
label_49305c:
    // 0x49305c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_493060:
    if (ctx->pc == 0x493060u) {
        ctx->pc = 0x493064u;
        goto label_493064;
    }
    ctx->pc = 0x49305Cu;
    {
        const bool branch_taken_0x49305c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x49305c) {
            ctx->pc = 0x493018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493018;
        }
    }
    ctx->pc = 0x493064u;
label_493064:
    // 0x493064: 0x200f809  jalr        $s0
label_493068:
    if (ctx->pc == 0x493068u) {
        ctx->pc = 0x49306Cu;
        goto label_49306c;
    }
    ctx->pc = 0x493064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x49306Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493064u, 0x49306Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x49306Cu;
label_49306c:
    // 0x49306c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_493070:
    if (ctx->pc == 0x493070u) {
        ctx->pc = 0x493074u;
        goto label_493074;
    }
    ctx->pc = 0x49306Cu;
    {
        const bool branch_taken_0x49306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49306c) {
            ctx->pc = 0x493018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_493018;
        }
    }
    ctx->pc = 0x493074u;
label_493074:
    // 0x493074: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x493074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_493078:
    // 0x493078: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x493078u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49307c:
    // 0x49307c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49307cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_493080:
    // 0x493080: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x493080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_493084:
    // 0x493084: 0x3e00008  jr          $ra
label_493088:
    if (ctx->pc == 0x493088u) {
        ctx->pc = 0x49308Cu;
        goto label_49308c;
    }
    ctx->pc = 0x493084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x493084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49308Cu;
label_49308c:
    // 0x49308c: 0x0  nop
    ctx->pc = 0x49308cu;
    // NOP
    ctx->pc = 0x493090u;
}
