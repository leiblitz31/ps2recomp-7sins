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

// Function: sub_00452020
// Address: 0x452020 - 0x4520c0
void sub_00452020_0x452020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452020_0x452020");
#endif

    switch (ctx->pc) {
        case 0x452020u: goto label_452020;
        case 0x452024u: goto label_452024;
        case 0x452028u: goto label_452028;
        case 0x45202cu: goto label_45202c;
        case 0x452030u: goto label_452030;
        case 0x452034u: goto label_452034;
        case 0x452038u: goto label_452038;
        case 0x45203cu: goto label_45203c;
        case 0x452040u: goto label_452040;
        case 0x452044u: goto label_452044;
        case 0x452048u: goto label_452048;
        case 0x45204cu: goto label_45204c;
        case 0x452050u: goto label_452050;
        case 0x452054u: goto label_452054;
        case 0x452058u: goto label_452058;
        case 0x45205cu: goto label_45205c;
        case 0x452060u: goto label_452060;
        case 0x452064u: goto label_452064;
        case 0x452068u: goto label_452068;
        case 0x45206cu: goto label_45206c;
        case 0x452070u: goto label_452070;
        case 0x452074u: goto label_452074;
        case 0x452078u: goto label_452078;
        case 0x45207cu: goto label_45207c;
        case 0x452080u: goto label_452080;
        case 0x452084u: goto label_452084;
        case 0x452088u: goto label_452088;
        case 0x45208cu: goto label_45208c;
        case 0x452090u: goto label_452090;
        case 0x452094u: goto label_452094;
        case 0x452098u: goto label_452098;
        case 0x45209cu: goto label_45209c;
        case 0x4520a0u: goto label_4520a0;
        case 0x4520a4u: goto label_4520a4;
        case 0x4520a8u: goto label_4520a8;
        case 0x4520acu: goto label_4520ac;
        case 0x4520b0u: goto label_4520b0;
        case 0x4520b4u: goto label_4520b4;
        case 0x4520b8u: goto label_4520b8;
        case 0x4520bcu: goto label_4520bc;
        default: break;
    }

    ctx->pc = 0x452020u;

label_452020:
    // 0x452020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x452020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_452024:
    // 0x452024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452028:
    // 0x452028: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45202c:
    // 0x45202c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45202cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452030:
    // 0x452030: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x452030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_452034:
    // 0x452034: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_452038:
    // 0x452038: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_45203c:
    if (ctx->pc == 0x45203Cu) {
        ctx->pc = 0x452040u;
        goto label_452040;
    }
    ctx->pc = 0x452038u;
    {
        const bool branch_taken_0x452038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452038) {
            ctx->pc = 0x452048u;
            goto label_452048;
        }
    }
    ctx->pc = 0x452040u;
label_452040:
    // 0x452040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x452040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_452044:
    // 0x452044: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x452044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_452048:
    // 0x452048: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45204c:
    // 0x45204c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45204cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_452050:
    // 0x452050: 0xc119b68  jal         func_466DA0
label_452054:
    if (ctx->pc == 0x452054u) {
        ctx->pc = 0x452058u;
        goto label_452058;
    }
    ctx->pc = 0x452050u;
    SET_GPR_U32(ctx, 31, 0x452058u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x452050u, 0x452058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452058u;
label_452058:
    // 0x452058: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x452058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45205c:
    // 0x45205c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_452060:
    if (ctx->pc == 0x452060u) {
        ctx->pc = 0x452064u;
        goto label_452064;
    }
    ctx->pc = 0x45205Cu;
    {
        const bool branch_taken_0x45205c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45205c) {
            ctx->pc = 0x452070u;
            goto label_452070;
        }
    }
    ctx->pc = 0x452064u;
label_452064:
    // 0x452064: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x452064u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452068:
    // 0x452068: 0x1000000e  b           . + 4 + (0xE << 2)
label_45206c:
    if (ctx->pc == 0x45206Cu) {
        ctx->pc = 0x452070u;
        goto label_452070;
    }
    ctx->pc = 0x452068u;
    {
        const bool branch_taken_0x452068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452068) {
            ctx->pc = 0x4520A4u;
            goto label_4520a4;
        }
    }
    ctx->pc = 0x452070u;
label_452070:
    // 0x452070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x452070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452074:
    // 0x452074: 0xc0ba088  jal         func_2E8220
label_452078:
    if (ctx->pc == 0x452078u) {
        ctx->pc = 0x45207Cu;
        goto label_45207c;
    }
    ctx->pc = 0x452074u;
    SET_GPR_U32(ctx, 31, 0x45207Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x452074u, 0x45207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45207Cu;
label_45207c:
    // 0x45207c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45207cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452080:
    // 0x452080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_452084:
    // 0x452084: 0xc0ba088  jal         func_2E8220
label_452088:
    if (ctx->pc == 0x452088u) {
        ctx->pc = 0x45208Cu;
        goto label_45208c;
    }
    ctx->pc = 0x452084u;
    SET_GPR_U32(ctx, 31, 0x45208Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x452084u, 0x45208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45208Cu;
label_45208c:
    // 0x45208c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_452090:
    if (ctx->pc == 0x452090u) {
        ctx->pc = 0x452094u;
        goto label_452094;
    }
    ctx->pc = 0x45208Cu;
    {
        const bool branch_taken_0x45208c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45208c) {
            ctx->pc = 0x452048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452048;
        }
    }
    ctx->pc = 0x452094u;
label_452094:
    // 0x452094: 0x200f809  jalr        $s0
label_452098:
    if (ctx->pc == 0x452098u) {
        ctx->pc = 0x45209Cu;
        goto label_45209c;
    }
    ctx->pc = 0x452094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x45209Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452094u, 0x45209Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45209Cu;
label_45209c:
    // 0x45209c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_4520a0:
    if (ctx->pc == 0x4520A0u) {
        ctx->pc = 0x4520A4u;
        goto label_4520a4;
    }
    ctx->pc = 0x45209Cu;
    {
        const bool branch_taken_0x45209c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45209c) {
            ctx->pc = 0x452048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452048;
        }
    }
    ctx->pc = 0x4520A4u;
label_4520a4:
    // 0x4520a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4520a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4520a8:
    // 0x4520a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4520a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4520ac:
    // 0x4520ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4520acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4520b0:
    // 0x4520b0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4520b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4520b4:
    // 0x4520b4: 0x3e00008  jr          $ra
label_4520b8:
    if (ctx->pc == 0x4520B8u) {
        ctx->pc = 0x4520BCu;
        goto label_4520bc;
    }
    ctx->pc = 0x4520B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4520B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4520BCu;
label_4520bc:
    // 0x4520bc: 0x0  nop
    ctx->pc = 0x4520bcu;
    // NOP
    ctx->pc = 0x4520c0u;
}
