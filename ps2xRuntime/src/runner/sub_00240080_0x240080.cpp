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

// Function: sub_00240080
// Address: 0x240080 - 0x240120
void sub_00240080_0x240080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240080_0x240080");
#endif

    switch (ctx->pc) {
        case 0x240080u: goto label_240080;
        case 0x240084u: goto label_240084;
        case 0x240088u: goto label_240088;
        case 0x24008cu: goto label_24008c;
        case 0x240090u: goto label_240090;
        case 0x240094u: goto label_240094;
        case 0x240098u: goto label_240098;
        case 0x24009cu: goto label_24009c;
        case 0x2400a0u: goto label_2400a0;
        case 0x2400a4u: goto label_2400a4;
        case 0x2400a8u: goto label_2400a8;
        case 0x2400acu: goto label_2400ac;
        case 0x2400b0u: goto label_2400b0;
        case 0x2400b4u: goto label_2400b4;
        case 0x2400b8u: goto label_2400b8;
        case 0x2400bcu: goto label_2400bc;
        case 0x2400c0u: goto label_2400c0;
        case 0x2400c4u: goto label_2400c4;
        case 0x2400c8u: goto label_2400c8;
        case 0x2400ccu: goto label_2400cc;
        case 0x2400d0u: goto label_2400d0;
        case 0x2400d4u: goto label_2400d4;
        case 0x2400d8u: goto label_2400d8;
        case 0x2400dcu: goto label_2400dc;
        case 0x2400e0u: goto label_2400e0;
        case 0x2400e4u: goto label_2400e4;
        case 0x2400e8u: goto label_2400e8;
        case 0x2400ecu: goto label_2400ec;
        case 0x2400f0u: goto label_2400f0;
        case 0x2400f4u: goto label_2400f4;
        case 0x2400f8u: goto label_2400f8;
        case 0x2400fcu: goto label_2400fc;
        case 0x240100u: goto label_240100;
        case 0x240104u: goto label_240104;
        case 0x240108u: goto label_240108;
        case 0x24010cu: goto label_24010c;
        case 0x240110u: goto label_240110;
        case 0x240114u: goto label_240114;
        case 0x240118u: goto label_240118;
        case 0x24011cu: goto label_24011c;
        default: break;
    }

    ctx->pc = 0x240080u;

label_240080:
    // 0x240080: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x240080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_240084:
    // 0x240084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x240084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_240088:
    // 0x240088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_24008c:
    // 0x24008c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240090:
    // 0x240090: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x240090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_240094:
    // 0x240094: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x240094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_240098:
    // 0x240098: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_24009c:
    if (ctx->pc == 0x24009Cu) {
        ctx->pc = 0x2400A0u;
        goto label_2400a0;
    }
    ctx->pc = 0x240098u;
    {
        const bool branch_taken_0x240098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240098) {
            ctx->pc = 0x2400A8u;
            goto label_2400a8;
        }
    }
    ctx->pc = 0x2400A0u;
label_2400a0:
    // 0x2400a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2400a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2400a4:
    // 0x2400a4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2400a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2400a8:
    // 0x2400a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2400a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2400ac:
    // 0x2400ac: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x2400acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2400b0:
    // 0x2400b0: 0xc119b68  jal         func_466DA0
label_2400b4:
    if (ctx->pc == 0x2400B4u) {
        ctx->pc = 0x2400B8u;
        goto label_2400b8;
    }
    ctx->pc = 0x2400B0u;
    SET_GPR_U32(ctx, 31, 0x2400B8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2400B0u, 0x2400B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400B8u;
label_2400b8:
    // 0x2400b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2400b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2400bc:
    // 0x2400bc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2400c0:
    if (ctx->pc == 0x2400C0u) {
        ctx->pc = 0x2400C4u;
        goto label_2400c4;
    }
    ctx->pc = 0x2400BCu;
    {
        const bool branch_taken_0x2400bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400bc) {
            ctx->pc = 0x2400D0u;
            goto label_2400d0;
        }
    }
    ctx->pc = 0x2400C4u;
label_2400c4:
    // 0x2400c4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2400c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2400c8:
    // 0x2400c8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2400cc:
    if (ctx->pc == 0x2400CCu) {
        ctx->pc = 0x2400D0u;
        goto label_2400d0;
    }
    ctx->pc = 0x2400C8u;
    {
        const bool branch_taken_0x2400c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400c8) {
            ctx->pc = 0x240104u;
            goto label_240104;
        }
    }
    ctx->pc = 0x2400D0u;
label_2400d0:
    // 0x2400d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2400d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2400d4:
    // 0x2400d4: 0xc0ba088  jal         func_2E8220
label_2400d8:
    if (ctx->pc == 0x2400D8u) {
        ctx->pc = 0x2400DCu;
        goto label_2400dc;
    }
    ctx->pc = 0x2400D4u;
    SET_GPR_U32(ctx, 31, 0x2400DCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2400D4u, 0x2400DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400DCu;
label_2400dc:
    // 0x2400dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2400dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2400e0:
    // 0x2400e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2400e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2400e4:
    // 0x2400e4: 0xc0ba088  jal         func_2E8220
label_2400e8:
    if (ctx->pc == 0x2400E8u) {
        ctx->pc = 0x2400ECu;
        goto label_2400ec;
    }
    ctx->pc = 0x2400E4u;
    SET_GPR_U32(ctx, 31, 0x2400ECu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2400E4u, 0x2400ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400ECu;
label_2400ec:
    // 0x2400ec: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2400f0:
    if (ctx->pc == 0x2400F0u) {
        ctx->pc = 0x2400F4u;
        goto label_2400f4;
    }
    ctx->pc = 0x2400ECu;
    {
        const bool branch_taken_0x2400ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400ec) {
            ctx->pc = 0x2400A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2400a8;
        }
    }
    ctx->pc = 0x2400F4u;
label_2400f4:
    // 0x2400f4: 0x200f809  jalr        $s0
label_2400f8:
    if (ctx->pc == 0x2400F8u) {
        ctx->pc = 0x2400FCu;
        goto label_2400fc;
    }
    ctx->pc = 0x2400F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2400FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2400F4u, 0x2400FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2400FCu;
label_2400fc:
    // 0x2400fc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_240100:
    if (ctx->pc == 0x240100u) {
        ctx->pc = 0x240104u;
        goto label_240104;
    }
    ctx->pc = 0x2400FCu;
    {
        const bool branch_taken_0x2400fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2400fc) {
            ctx->pc = 0x2400A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2400a8;
        }
    }
    ctx->pc = 0x240104u;
label_240104:
    // 0x240104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x240104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_240108:
    // 0x240108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x240108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24010c:
    // 0x24010c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24010cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_240110:
    // 0x240110: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x240110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_240114:
    // 0x240114: 0x3e00008  jr          $ra
label_240118:
    if (ctx->pc == 0x240118u) {
        ctx->pc = 0x24011Cu;
        goto label_24011c;
    }
    ctx->pc = 0x240114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24011Cu;
label_24011c:
    // 0x24011c: 0x0  nop
    ctx->pc = 0x24011cu;
    // NOP
    ctx->pc = 0x240120u;
}
