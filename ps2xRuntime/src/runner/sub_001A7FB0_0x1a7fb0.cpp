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

// Function: sub_001A7FB0
// Address: 0x1a7fb0 - 0x1a8050
void sub_001A7FB0_0x1a7fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7FB0_0x1a7fb0");
#endif

    switch (ctx->pc) {
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fb4u: goto label_1a7fb4;
        case 0x1a7fb8u: goto label_1a7fb8;
        case 0x1a7fbcu: goto label_1a7fbc;
        case 0x1a7fc0u: goto label_1a7fc0;
        case 0x1a7fc4u: goto label_1a7fc4;
        case 0x1a7fc8u: goto label_1a7fc8;
        case 0x1a7fccu: goto label_1a7fcc;
        case 0x1a7fd0u: goto label_1a7fd0;
        case 0x1a7fd4u: goto label_1a7fd4;
        case 0x1a7fd8u: goto label_1a7fd8;
        case 0x1a7fdcu: goto label_1a7fdc;
        case 0x1a7fe0u: goto label_1a7fe0;
        case 0x1a7fe4u: goto label_1a7fe4;
        case 0x1a7fe8u: goto label_1a7fe8;
        case 0x1a7fecu: goto label_1a7fec;
        case 0x1a7ff0u: goto label_1a7ff0;
        case 0x1a7ff4u: goto label_1a7ff4;
        case 0x1a7ff8u: goto label_1a7ff8;
        case 0x1a7ffcu: goto label_1a7ffc;
        case 0x1a8000u: goto label_1a8000;
        case 0x1a8004u: goto label_1a8004;
        case 0x1a8008u: goto label_1a8008;
        case 0x1a800cu: goto label_1a800c;
        case 0x1a8010u: goto label_1a8010;
        case 0x1a8014u: goto label_1a8014;
        case 0x1a8018u: goto label_1a8018;
        case 0x1a801cu: goto label_1a801c;
        case 0x1a8020u: goto label_1a8020;
        case 0x1a8024u: goto label_1a8024;
        case 0x1a8028u: goto label_1a8028;
        case 0x1a802cu: goto label_1a802c;
        case 0x1a8030u: goto label_1a8030;
        case 0x1a8034u: goto label_1a8034;
        case 0x1a8038u: goto label_1a8038;
        case 0x1a803cu: goto label_1a803c;
        case 0x1a8040u: goto label_1a8040;
        case 0x1a8044u: goto label_1a8044;
        case 0x1a8048u: goto label_1a8048;
        case 0x1a804cu: goto label_1a804c;
        default: break;
    }

    ctx->pc = 0x1a7fb0u;

label_1a7fb0:
    // 0x1a7fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a7fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a7fb4:
    // 0x1a7fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a7fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1a7fb8:
    // 0x1a7fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a7fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a7fbc:
    // 0x1a7fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a7fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a7fc0:
    // 0x1a7fc0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x1a7fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_1a7fc4:
    // 0x1a7fc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7fc8:
    // 0x1a7fc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a7fcc:
    if (ctx->pc == 0x1A7FCCu) {
        ctx->pc = 0x1A7FD0u;
        goto label_1a7fd0;
    }
    ctx->pc = 0x1A7FC8u;
    {
        const bool branch_taken_0x1a7fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc8) {
            ctx->pc = 0x1A7FD8u;
            goto label_1a7fd8;
        }
    }
    ctx->pc = 0x1A7FD0u;
label_1a7fd0:
    // 0x1a7fd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a7fd4:
    // 0x1a7fd4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1a7fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_1a7fd8:
    // 0x1a7fd8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1a7fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1a7fdc:
    // 0x1a7fdc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1a7fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a7fe0:
    // 0x1a7fe0: 0xc119b68  jal         func_466DA0
label_1a7fe4:
    if (ctx->pc == 0x1A7FE4u) {
        ctx->pc = 0x1A7FE8u;
        goto label_1a7fe8;
    }
    ctx->pc = 0x1A7FE0u;
    SET_GPR_U32(ctx, 31, 0x1A7FE8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1A7FE0u, 0x1A7FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FE8u;
label_1a7fe8:
    // 0x1a7fe8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a7fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a7fec:
    // 0x1a7fec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1a7ff0:
    if (ctx->pc == 0x1A7FF0u) {
        ctx->pc = 0x1A7FF4u;
        goto label_1a7ff4;
    }
    ctx->pc = 0x1A7FECu;
    {
        const bool branch_taken_0x1a7fec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fec) {
            ctx->pc = 0x1A8000u;
            goto label_1a8000;
        }
    }
    ctx->pc = 0x1A7FF4u;
label_1a7ff4:
    // 0x1a7ff4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a7ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a7ff8:
    // 0x1a7ff8: 0x1000000e  b           . + 4 + (0xE << 2)
label_1a7ffc:
    if (ctx->pc == 0x1A7FFCu) {
        ctx->pc = 0x1A8000u;
        goto label_1a8000;
    }
    ctx->pc = 0x1A7FF8u;
    {
        const bool branch_taken_0x1a7ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7ff8) {
            ctx->pc = 0x1A8034u;
            goto label_1a8034;
        }
    }
    ctx->pc = 0x1A8000u;
label_1a8000:
    // 0x1a8000: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a8000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8004:
    // 0x1a8004: 0xc0ba088  jal         func_2E8220
label_1a8008:
    if (ctx->pc == 0x1A8008u) {
        ctx->pc = 0x1A800Cu;
        goto label_1a800c;
    }
    ctx->pc = 0x1A8004u;
    SET_GPR_U32(ctx, 31, 0x1A800Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A8004u, 0x1A800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A800Cu;
label_1a800c:
    // 0x1a800c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a800cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8010:
    // 0x1a8010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a8010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a8014:
    // 0x1a8014: 0xc0ba088  jal         func_2E8220
label_1a8018:
    if (ctx->pc == 0x1A8018u) {
        ctx->pc = 0x1A801Cu;
        goto label_1a801c;
    }
    ctx->pc = 0x1A8014u;
    SET_GPR_U32(ctx, 31, 0x1A801Cu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1A8014u, 0x1A801Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A801Cu;
label_1a801c:
    // 0x1a801c: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_1a8020:
    if (ctx->pc == 0x1A8020u) {
        ctx->pc = 0x1A8024u;
        goto label_1a8024;
    }
    ctx->pc = 0x1A801Cu;
    {
        const bool branch_taken_0x1a801c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a801c) {
            ctx->pc = 0x1A7FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fd8;
        }
    }
    ctx->pc = 0x1A8024u;
label_1a8024:
    // 0x1a8024: 0x200f809  jalr        $s0
label_1a8028:
    if (ctx->pc == 0x1A8028u) {
        ctx->pc = 0x1A802Cu;
        goto label_1a802c;
    }
    ctx->pc = 0x1A8024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1A802Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8024u, 0x1A802Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A802Cu;
label_1a802c:
    // 0x1a802c: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_1a8030:
    if (ctx->pc == 0x1A8030u) {
        ctx->pc = 0x1A8034u;
        goto label_1a8034;
    }
    ctx->pc = 0x1A802Cu;
    {
        const bool branch_taken_0x1a802c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a802c) {
            ctx->pc = 0x1A7FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fd8;
        }
    }
    ctx->pc = 0x1A8034u;
label_1a8034:
    // 0x1a8034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a8034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8038:
    // 0x1a8038: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a8038u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a803c:
    // 0x1a803c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a803cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8040:
    // 0x1a8040: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1a8040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1a8044:
    // 0x1a8044: 0x3e00008  jr          $ra
label_1a8048:
    if (ctx->pc == 0x1A8048u) {
        ctx->pc = 0x1A804Cu;
        goto label_1a804c;
    }
    ctx->pc = 0x1A8044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A804Cu;
label_1a804c:
    // 0x1a804c: 0x0  nop
    ctx->pc = 0x1a804cu;
    // NOP
    ctx->pc = 0x1a8050u;
}
