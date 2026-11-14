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

// Function: sub_00246100
// Address: 0x246100 - 0x2461a0
void sub_00246100_0x246100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246100_0x246100");
#endif

    switch (ctx->pc) {
        case 0x246100u: goto label_246100;
        case 0x246104u: goto label_246104;
        case 0x246108u: goto label_246108;
        case 0x24610cu: goto label_24610c;
        case 0x246110u: goto label_246110;
        case 0x246114u: goto label_246114;
        case 0x246118u: goto label_246118;
        case 0x24611cu: goto label_24611c;
        case 0x246120u: goto label_246120;
        case 0x246124u: goto label_246124;
        case 0x246128u: goto label_246128;
        case 0x24612cu: goto label_24612c;
        case 0x246130u: goto label_246130;
        case 0x246134u: goto label_246134;
        case 0x246138u: goto label_246138;
        case 0x24613cu: goto label_24613c;
        case 0x246140u: goto label_246140;
        case 0x246144u: goto label_246144;
        case 0x246148u: goto label_246148;
        case 0x24614cu: goto label_24614c;
        case 0x246150u: goto label_246150;
        case 0x246154u: goto label_246154;
        case 0x246158u: goto label_246158;
        case 0x24615cu: goto label_24615c;
        case 0x246160u: goto label_246160;
        case 0x246164u: goto label_246164;
        case 0x246168u: goto label_246168;
        case 0x24616cu: goto label_24616c;
        case 0x246170u: goto label_246170;
        case 0x246174u: goto label_246174;
        case 0x246178u: goto label_246178;
        case 0x24617cu: goto label_24617c;
        case 0x246180u: goto label_246180;
        case 0x246184u: goto label_246184;
        case 0x246188u: goto label_246188;
        case 0x24618cu: goto label_24618c;
        case 0x246190u: goto label_246190;
        case 0x246194u: goto label_246194;
        case 0x246198u: goto label_246198;
        case 0x24619cu: goto label_24619c;
        default: break;
    }

    ctx->pc = 0x246100u;

label_246100:
    // 0x246100: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x246100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_246104:
    // 0x246104: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x246104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_246108:
    // 0x246108: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24610c:
    // 0x24610c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_246110:
    // 0x246110: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x246110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_246114:
    // 0x246114: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_246118:
    // 0x246118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24611c:
    if (ctx->pc == 0x24611Cu) {
        ctx->pc = 0x246120u;
        goto label_246120;
    }
    ctx->pc = 0x246118u;
    {
        const bool branch_taken_0x246118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246118) {
            ctx->pc = 0x246128u;
            goto label_246128;
        }
    }
    ctx->pc = 0x246120u;
label_246120:
    // 0x246120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246124:
    // 0x246124: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x246124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_246128:
    // 0x246128: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x246128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_24612c:
    // 0x24612c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x24612cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_246130:
    // 0x246130: 0xc119b68  jal         func_466DA0
label_246134:
    if (ctx->pc == 0x246134u) {
        ctx->pc = 0x246138u;
        goto label_246138;
    }
    ctx->pc = 0x246130u;
    SET_GPR_U32(ctx, 31, 0x246138u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x246130u, 0x246138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246138u;
label_246138:
    // 0x246138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x246138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24613c:
    // 0x24613c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_246140:
    if (ctx->pc == 0x246140u) {
        ctx->pc = 0x246144u;
        goto label_246144;
    }
    ctx->pc = 0x24613Cu;
    {
        const bool branch_taken_0x24613c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24613c) {
            ctx->pc = 0x246150u;
            goto label_246150;
        }
    }
    ctx->pc = 0x246144u;
label_246144:
    // 0x246144: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x246144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246148:
    // 0x246148: 0x1000000e  b           . + 4 + (0xE << 2)
label_24614c:
    if (ctx->pc == 0x24614Cu) {
        ctx->pc = 0x246150u;
        goto label_246150;
    }
    ctx->pc = 0x246148u;
    {
        const bool branch_taken_0x246148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246148) {
            ctx->pc = 0x246184u;
            goto label_246184;
        }
    }
    ctx->pc = 0x246150u;
label_246150:
    // 0x246150: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x246150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246154:
    // 0x246154: 0xc0ba088  jal         func_2E8220
label_246158:
    if (ctx->pc == 0x246158u) {
        ctx->pc = 0x24615Cu;
        goto label_24615c;
    }
    ctx->pc = 0x246154u;
    SET_GPR_U32(ctx, 31, 0x24615Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x246154u, 0x24615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24615Cu;
label_24615c:
    // 0x24615c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24615cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246160:
    // 0x246160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246164:
    // 0x246164: 0xc0ba088  jal         func_2E8220
label_246168:
    if (ctx->pc == 0x246168u) {
        ctx->pc = 0x24616Cu;
        goto label_24616c;
    }
    ctx->pc = 0x246164u;
    SET_GPR_U32(ctx, 31, 0x24616Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x246164u, 0x24616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24616Cu;
label_24616c:
    // 0x24616c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_246170:
    if (ctx->pc == 0x246170u) {
        ctx->pc = 0x246174u;
        goto label_246174;
    }
    ctx->pc = 0x24616Cu;
    {
        const bool branch_taken_0x24616c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24616c) {
            ctx->pc = 0x246128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246128;
        }
    }
    ctx->pc = 0x246174u;
label_246174:
    // 0x246174: 0x200f809  jalr        $s0
label_246178:
    if (ctx->pc == 0x246178u) {
        ctx->pc = 0x24617Cu;
        goto label_24617c;
    }
    ctx->pc = 0x246174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x24617Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246174u, 0x24617Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24617Cu;
label_24617c:
    // 0x24617c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_246180:
    if (ctx->pc == 0x246180u) {
        ctx->pc = 0x246184u;
        goto label_246184;
    }
    ctx->pc = 0x24617Cu;
    {
        const bool branch_taken_0x24617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24617c) {
            ctx->pc = 0x246128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246128;
        }
    }
    ctx->pc = 0x246184u;
label_246184:
    // 0x246184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x246184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_246188:
    // 0x246188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24618c:
    // 0x24618c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24618cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_246190:
    // 0x246190: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x246190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_246194:
    // 0x246194: 0x3e00008  jr          $ra
label_246198:
    if (ctx->pc == 0x246198u) {
        ctx->pc = 0x24619Cu;
        goto label_24619c;
    }
    ctx->pc = 0x246194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24619Cu;
label_24619c:
    // 0x24619c: 0x0  nop
    ctx->pc = 0x24619cu;
    // NOP
    ctx->pc = 0x2461a0u;
}
