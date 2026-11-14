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

// Function: sub_00452110
// Address: 0x452110 - 0x4521b0
void sub_00452110_0x452110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00452110_0x452110");
#endif

    switch (ctx->pc) {
        case 0x452110u: goto label_452110;
        case 0x452114u: goto label_452114;
        case 0x452118u: goto label_452118;
        case 0x45211cu: goto label_45211c;
        case 0x452120u: goto label_452120;
        case 0x452124u: goto label_452124;
        case 0x452128u: goto label_452128;
        case 0x45212cu: goto label_45212c;
        case 0x452130u: goto label_452130;
        case 0x452134u: goto label_452134;
        case 0x452138u: goto label_452138;
        case 0x45213cu: goto label_45213c;
        case 0x452140u: goto label_452140;
        case 0x452144u: goto label_452144;
        case 0x452148u: goto label_452148;
        case 0x45214cu: goto label_45214c;
        case 0x452150u: goto label_452150;
        case 0x452154u: goto label_452154;
        case 0x452158u: goto label_452158;
        case 0x45215cu: goto label_45215c;
        case 0x452160u: goto label_452160;
        case 0x452164u: goto label_452164;
        case 0x452168u: goto label_452168;
        case 0x45216cu: goto label_45216c;
        case 0x452170u: goto label_452170;
        case 0x452174u: goto label_452174;
        case 0x452178u: goto label_452178;
        case 0x45217cu: goto label_45217c;
        case 0x452180u: goto label_452180;
        case 0x452184u: goto label_452184;
        case 0x452188u: goto label_452188;
        case 0x45218cu: goto label_45218c;
        case 0x452190u: goto label_452190;
        case 0x452194u: goto label_452194;
        case 0x452198u: goto label_452198;
        case 0x45219cu: goto label_45219c;
        case 0x4521a0u: goto label_4521a0;
        case 0x4521a4u: goto label_4521a4;
        case 0x4521a8u: goto label_4521a8;
        case 0x4521acu: goto label_4521ac;
        default: break;
    }

    ctx->pc = 0x452110u;

label_452110:
    // 0x452110: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x452110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_452114:
    // 0x452114: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x452114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_452118:
    // 0x452118: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x452118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45211c:
    // 0x45211c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_452120:
    // 0x452120: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x452120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_452124:
    // 0x452124: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_452128:
    // 0x452128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_45212c:
    if (ctx->pc == 0x45212Cu) {
        ctx->pc = 0x452130u;
        goto label_452130;
    }
    ctx->pc = 0x452128u;
    {
        const bool branch_taken_0x452128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x452128) {
            ctx->pc = 0x452138u;
            goto label_452138;
        }
    }
    ctx->pc = 0x452130u;
label_452130:
    // 0x452130: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x452130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_452134:
    // 0x452134: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x452134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_452138:
    // 0x452138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x452138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_45213c:
    // 0x45213c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x45213cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_452140:
    // 0x452140: 0xc119b68  jal         func_466DA0
label_452144:
    if (ctx->pc == 0x452144u) {
        ctx->pc = 0x452148u;
        goto label_452148;
    }
    ctx->pc = 0x452140u;
    SET_GPR_U32(ctx, 31, 0x452148u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x452140u, 0x452148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x452148u;
label_452148:
    // 0x452148: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x452148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45214c:
    // 0x45214c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_452150:
    if (ctx->pc == 0x452150u) {
        ctx->pc = 0x452154u;
        goto label_452154;
    }
    ctx->pc = 0x45214Cu;
    {
        const bool branch_taken_0x45214c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45214c) {
            ctx->pc = 0x452160u;
            goto label_452160;
        }
    }
    ctx->pc = 0x452154u;
label_452154:
    // 0x452154: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x452154u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_452158:
    // 0x452158: 0x1000000e  b           . + 4 + (0xE << 2)
label_45215c:
    if (ctx->pc == 0x45215Cu) {
        ctx->pc = 0x452160u;
        goto label_452160;
    }
    ctx->pc = 0x452158u;
    {
        const bool branch_taken_0x452158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x452158) {
            ctx->pc = 0x452194u;
            goto label_452194;
        }
    }
    ctx->pc = 0x452160u;
label_452160:
    // 0x452160: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x452160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_452164:
    // 0x452164: 0xc0ba088  jal         func_2E8220
label_452168:
    if (ctx->pc == 0x452168u) {
        ctx->pc = 0x45216Cu;
        goto label_45216c;
    }
    ctx->pc = 0x452164u;
    SET_GPR_U32(ctx, 31, 0x45216Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x452164u, 0x45216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45216Cu;
label_45216c:
    // 0x45216c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45216cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_452170:
    // 0x452170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x452170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_452174:
    // 0x452174: 0xc0ba088  jal         func_2E8220
label_452178:
    if (ctx->pc == 0x452178u) {
        ctx->pc = 0x45217Cu;
        goto label_45217c;
    }
    ctx->pc = 0x452174u;
    SET_GPR_U32(ctx, 31, 0x45217Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x452174u, 0x45217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45217Cu;
label_45217c:
    // 0x45217c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_452180:
    if (ctx->pc == 0x452180u) {
        ctx->pc = 0x452184u;
        goto label_452184;
    }
    ctx->pc = 0x45217Cu;
    {
        const bool branch_taken_0x45217c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45217c) {
            ctx->pc = 0x452138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452138;
        }
    }
    ctx->pc = 0x452184u;
label_452184:
    // 0x452184: 0x200f809  jalr        $s0
label_452188:
    if (ctx->pc == 0x452188u) {
        ctx->pc = 0x45218Cu;
        goto label_45218c;
    }
    ctx->pc = 0x452184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x45218Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x452184u, 0x45218Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45218Cu;
label_45218c:
    // 0x45218c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_452190:
    if (ctx->pc == 0x452190u) {
        ctx->pc = 0x452194u;
        goto label_452194;
    }
    ctx->pc = 0x45218Cu;
    {
        const bool branch_taken_0x45218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45218c) {
            ctx->pc = 0x452138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_452138;
        }
    }
    ctx->pc = 0x452194u;
label_452194:
    // 0x452194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x452194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_452198:
    // 0x452198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x452198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45219c:
    // 0x45219c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45219cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4521a0:
    // 0x4521a0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4521a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4521a4:
    // 0x4521a4: 0x3e00008  jr          $ra
label_4521a8:
    if (ctx->pc == 0x4521A8u) {
        ctx->pc = 0x4521ACu;
        goto label_4521ac;
    }
    ctx->pc = 0x4521A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4521A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4521ACu;
label_4521ac:
    // 0x4521ac: 0x0  nop
    ctx->pc = 0x4521acu;
    // NOP
    ctx->pc = 0x4521b0u;
}
