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

// Function: sub_00108FC0
// Address: 0x108fc0 - 0x109070
void sub_00108FC0_0x108fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108FC0_0x108fc0");
#endif

    switch (ctx->pc) {
        case 0x108fc0u: goto label_108fc0;
        case 0x108fc4u: goto label_108fc4;
        case 0x108fc8u: goto label_108fc8;
        case 0x108fccu: goto label_108fcc;
        case 0x108fd0u: goto label_108fd0;
        case 0x108fd4u: goto label_108fd4;
        case 0x108fd8u: goto label_108fd8;
        case 0x108fdcu: goto label_108fdc;
        case 0x108fe0u: goto label_108fe0;
        case 0x108fe4u: goto label_108fe4;
        case 0x108fe8u: goto label_108fe8;
        case 0x108fecu: goto label_108fec;
        case 0x108ff0u: goto label_108ff0;
        case 0x108ff4u: goto label_108ff4;
        case 0x108ff8u: goto label_108ff8;
        case 0x108ffcu: goto label_108ffc;
        case 0x109000u: goto label_109000;
        case 0x109004u: goto label_109004;
        case 0x109008u: goto label_109008;
        case 0x10900cu: goto label_10900c;
        case 0x109010u: goto label_109010;
        case 0x109014u: goto label_109014;
        case 0x109018u: goto label_109018;
        case 0x10901cu: goto label_10901c;
        case 0x109020u: goto label_109020;
        case 0x109024u: goto label_109024;
        case 0x109028u: goto label_109028;
        case 0x10902cu: goto label_10902c;
        case 0x109030u: goto label_109030;
        case 0x109034u: goto label_109034;
        case 0x109038u: goto label_109038;
        case 0x10903cu: goto label_10903c;
        case 0x109040u: goto label_109040;
        case 0x109044u: goto label_109044;
        case 0x109048u: goto label_109048;
        case 0x10904cu: goto label_10904c;
        case 0x109050u: goto label_109050;
        case 0x109054u: goto label_109054;
        case 0x109058u: goto label_109058;
        case 0x10905cu: goto label_10905c;
        case 0x109060u: goto label_109060;
        case 0x109064u: goto label_109064;
        case 0x109068u: goto label_109068;
        case 0x10906cu: goto label_10906c;
        default: break;
    }

    ctx->pc = 0x108fc0u;

label_108fc0:
    // 0x108fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x108fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_108fc4:
    // 0x108fc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_108fc8:
    // 0x108fc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x108fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_108fcc:
    // 0x108fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x108fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_108fd0:
    // 0x108fd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x108fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_108fd4:
    // 0x108fd4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x108fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_108fd8:
    // 0x108fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_108fdc:
    if (ctx->pc == 0x108FDCu) {
        ctx->pc = 0x108FE0u;
        goto label_108fe0;
    }
    ctx->pc = 0x108FD8u;
    {
        const bool branch_taken_0x108fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x108fd8) {
            ctx->pc = 0x108FE8u;
            goto label_108fe8;
        }
    }
    ctx->pc = 0x108FE0u;
label_108fe0:
    // 0x108fe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x108fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_108fe4:
    // 0x108fe4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x108fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_108fe8:
    // 0x108fe8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x108fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_108fec:
    // 0x108fec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x108fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_108ff0:
    // 0x108ff0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x108ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_108ff4:
    // 0x108ff4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x108ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_108ff8:
    // 0x108ff8: 0xc119b68  jal         func_466DA0
label_108ffc:
    if (ctx->pc == 0x108FFCu) {
        ctx->pc = 0x109000u;
        goto label_109000;
    }
    ctx->pc = 0x108FF8u;
    SET_GPR_U32(ctx, 31, 0x109000u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x108FF8u, 0x109000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109000u;
label_109000:
    // 0x109000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109004:
    // 0x109004: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_109008:
    if (ctx->pc == 0x109008u) {
        ctx->pc = 0x10900Cu;
        goto label_10900c;
    }
    ctx->pc = 0x109004u;
    {
        const bool branch_taken_0x109004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x109004) {
            ctx->pc = 0x109018u;
            goto label_109018;
        }
    }
    ctx->pc = 0x10900Cu;
label_10900c:
    // 0x10900c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10900cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_109010:
    // 0x109010: 0x1000000e  b           . + 4 + (0xE << 2)
label_109014:
    if (ctx->pc == 0x109014u) {
        ctx->pc = 0x109018u;
        goto label_109018;
    }
    ctx->pc = 0x109010u;
    {
        const bool branch_taken_0x109010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109010) {
            ctx->pc = 0x10904Cu;
            goto label_10904c;
        }
    }
    ctx->pc = 0x109018u;
label_109018:
    // 0x109018: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x109018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10901c:
    // 0x10901c: 0xc0ba088  jal         func_2E8220
label_109020:
    if (ctx->pc == 0x109020u) {
        ctx->pc = 0x109024u;
        goto label_109024;
    }
    ctx->pc = 0x10901Cu;
    SET_GPR_U32(ctx, 31, 0x109024u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10901Cu, 0x109024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109024u;
label_109024:
    // 0x109024: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_109028:
    // 0x109028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10902c:
    // 0x10902c: 0xc0ba088  jal         func_2E8220
label_109030:
    if (ctx->pc == 0x109030u) {
        ctx->pc = 0x109034u;
        goto label_109034;
    }
    ctx->pc = 0x10902Cu;
    SET_GPR_U32(ctx, 31, 0x109034u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x10902Cu, 0x109034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109034u;
label_109034:
    // 0x109034: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_109038:
    if (ctx->pc == 0x109038u) {
        ctx->pc = 0x10903Cu;
        goto label_10903c;
    }
    ctx->pc = 0x109034u;
    {
        const bool branch_taken_0x109034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x109034) {
            ctx->pc = 0x108FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108fe8;
        }
    }
    ctx->pc = 0x10903Cu;
label_10903c:
    // 0x10903c: 0x200f809  jalr        $s0
label_109040:
    if (ctx->pc == 0x109040u) {
        ctx->pc = 0x109044u;
        goto label_109044;
    }
    ctx->pc = 0x10903Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x109044u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10903Cu, 0x109044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x109044u;
label_109044:
    // 0x109044: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_109048:
    if (ctx->pc == 0x109048u) {
        ctx->pc = 0x10904Cu;
        goto label_10904c;
    }
    ctx->pc = 0x109044u;
    {
        const bool branch_taken_0x109044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x109044) {
            ctx->pc = 0x108FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108fe8;
        }
    }
    ctx->pc = 0x10904Cu;
label_10904c:
    // 0x10904c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10904cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_109050:
    // 0x109050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x109050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_109054:
    // 0x109054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x109054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_109058:
    // 0x109058: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x109058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_10905c:
    // 0x10905c: 0x3e00008  jr          $ra
label_109060:
    if (ctx->pc == 0x109060u) {
        ctx->pc = 0x109064u;
        goto label_109064;
    }
    ctx->pc = 0x10905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109064u;
label_109064:
    // 0x109064: 0x0  nop
    ctx->pc = 0x109064u;
    // NOP
label_109068:
    // 0x109068: 0x0  nop
    ctx->pc = 0x109068u;
    // NOP
label_10906c:
    // 0x10906c: 0x0  nop
    ctx->pc = 0x10906cu;
    // NOP
    ctx->pc = 0x109070u;
}
