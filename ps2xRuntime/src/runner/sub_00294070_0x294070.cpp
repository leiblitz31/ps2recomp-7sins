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

// Function: sub_00294070
// Address: 0x294070 - 0x294110
void sub_00294070_0x294070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294070_0x294070");
#endif

    switch (ctx->pc) {
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        default: break;
    }

    ctx->pc = 0x294070u;

label_294070:
    // 0x294070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_294074:
    // 0x294074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x294074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_294078:
    // 0x294078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x294078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29407c:
    // 0x29407c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29407cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_294080:
    // 0x294080: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x294080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_294084:
    // 0x294084: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_294088:
    // 0x294088: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_29408c:
    if (ctx->pc == 0x29408Cu) {
        ctx->pc = 0x294090u;
        goto label_294090;
    }
    ctx->pc = 0x294088u;
    {
        const bool branch_taken_0x294088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x294088) {
            ctx->pc = 0x294098u;
            goto label_294098;
        }
    }
    ctx->pc = 0x294090u;
label_294090:
    // 0x294090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x294090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294094:
    // 0x294094: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x294094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_294098:
    // 0x294098: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x294098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29409c:
    // 0x29409c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x29409cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2940a0:
    // 0x2940a0: 0xc119b68  jal         func_466DA0
label_2940a4:
    if (ctx->pc == 0x2940A4u) {
        ctx->pc = 0x2940A8u;
        goto label_2940a8;
    }
    ctx->pc = 0x2940A0u;
    SET_GPR_U32(ctx, 31, 0x2940A8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2940A0u, 0x2940A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940A8u;
label_2940a8:
    // 0x2940a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2940a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2940ac:
    // 0x2940ac: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2940b0:
    if (ctx->pc == 0x2940B0u) {
        ctx->pc = 0x2940B4u;
        goto label_2940b4;
    }
    ctx->pc = 0x2940ACu;
    {
        const bool branch_taken_0x2940ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2940ac) {
            ctx->pc = 0x2940C0u;
            goto label_2940c0;
        }
    }
    ctx->pc = 0x2940B4u;
label_2940b4:
    // 0x2940b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2940b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2940b8:
    // 0x2940b8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2940bc:
    if (ctx->pc == 0x2940BCu) {
        ctx->pc = 0x2940C0u;
        goto label_2940c0;
    }
    ctx->pc = 0x2940B8u;
    {
        const bool branch_taken_0x2940b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2940b8) {
            ctx->pc = 0x2940F4u;
            goto label_2940f4;
        }
    }
    ctx->pc = 0x2940C0u;
label_2940c0:
    // 0x2940c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2940c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2940c4:
    // 0x2940c4: 0xc0ba088  jal         func_2E8220
label_2940c8:
    if (ctx->pc == 0x2940C8u) {
        ctx->pc = 0x2940CCu;
        goto label_2940cc;
    }
    ctx->pc = 0x2940C4u;
    SET_GPR_U32(ctx, 31, 0x2940CCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2940C4u, 0x2940CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940CCu;
label_2940cc:
    // 0x2940cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2940ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2940d0:
    // 0x2940d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2940d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2940d4:
    // 0x2940d4: 0xc0ba088  jal         func_2E8220
label_2940d8:
    if (ctx->pc == 0x2940D8u) {
        ctx->pc = 0x2940DCu;
        goto label_2940dc;
    }
    ctx->pc = 0x2940D4u;
    SET_GPR_U32(ctx, 31, 0x2940DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2940D4u, 0x2940DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2940DCu;
label_2940dc:
    // 0x2940dc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2940e0:
    if (ctx->pc == 0x2940E0u) {
        ctx->pc = 0x2940E4u;
        goto label_2940e4;
    }
    ctx->pc = 0x2940DCu;
    {
        const bool branch_taken_0x2940dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2940dc) {
            ctx->pc = 0x294098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294098;
        }
    }
    ctx->pc = 0x2940E4u;
label_2940e4:
    // 0x2940e4: 0x200f809  jalr        $s0
label_2940e8:
    if (ctx->pc == 0x2940E8u) {
        ctx->pc = 0x2940ECu;
        goto label_2940ec;
    }
    ctx->pc = 0x2940E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2940ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2940E4u, 0x2940ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2940ECu;
label_2940ec:
    // 0x2940ec: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2940f0:
    if (ctx->pc == 0x2940F0u) {
        ctx->pc = 0x2940F4u;
        goto label_2940f4;
    }
    ctx->pc = 0x2940ECu;
    {
        const bool branch_taken_0x2940ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2940ec) {
            ctx->pc = 0x294098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294098;
        }
    }
    ctx->pc = 0x2940F4u;
label_2940f4:
    // 0x2940f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2940f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2940f8:
    // 0x2940f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2940f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2940fc:
    // 0x2940fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2940fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_294100:
    // 0x294100: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x294100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_294104:
    // 0x294104: 0x3e00008  jr          $ra
label_294108:
    if (ctx->pc == 0x294108u) {
        ctx->pc = 0x29410Cu;
        goto label_29410c;
    }
    ctx->pc = 0x294104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29410Cu;
label_29410c:
    // 0x29410c: 0x0  nop
    ctx->pc = 0x29410cu;
    // NOP
    ctx->pc = 0x294110u;
}
