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

// Function: sub_00218560
// Address: 0x218560 - 0x218600
void sub_00218560_0x218560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218560_0x218560");
#endif

    switch (ctx->pc) {
        case 0x218560u: goto label_218560;
        case 0x218564u: goto label_218564;
        case 0x218568u: goto label_218568;
        case 0x21856cu: goto label_21856c;
        case 0x218570u: goto label_218570;
        case 0x218574u: goto label_218574;
        case 0x218578u: goto label_218578;
        case 0x21857cu: goto label_21857c;
        case 0x218580u: goto label_218580;
        case 0x218584u: goto label_218584;
        case 0x218588u: goto label_218588;
        case 0x21858cu: goto label_21858c;
        case 0x218590u: goto label_218590;
        case 0x218594u: goto label_218594;
        case 0x218598u: goto label_218598;
        case 0x21859cu: goto label_21859c;
        case 0x2185a0u: goto label_2185a0;
        case 0x2185a4u: goto label_2185a4;
        case 0x2185a8u: goto label_2185a8;
        case 0x2185acu: goto label_2185ac;
        case 0x2185b0u: goto label_2185b0;
        case 0x2185b4u: goto label_2185b4;
        case 0x2185b8u: goto label_2185b8;
        case 0x2185bcu: goto label_2185bc;
        case 0x2185c0u: goto label_2185c0;
        case 0x2185c4u: goto label_2185c4;
        case 0x2185c8u: goto label_2185c8;
        case 0x2185ccu: goto label_2185cc;
        case 0x2185d0u: goto label_2185d0;
        case 0x2185d4u: goto label_2185d4;
        case 0x2185d8u: goto label_2185d8;
        case 0x2185dcu: goto label_2185dc;
        case 0x2185e0u: goto label_2185e0;
        case 0x2185e4u: goto label_2185e4;
        case 0x2185e8u: goto label_2185e8;
        case 0x2185ecu: goto label_2185ec;
        case 0x2185f0u: goto label_2185f0;
        case 0x2185f4u: goto label_2185f4;
        case 0x2185f8u: goto label_2185f8;
        case 0x2185fcu: goto label_2185fc;
        default: break;
    }

    ctx->pc = 0x218560u;

label_218560:
    // 0x218560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x218560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_218564:
    // 0x218564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x218564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_218568:
    // 0x218568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x218568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21856c:
    // 0x21856c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_218570:
    // 0x218570: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x218570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_218574:
    // 0x218574: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x218574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_218578:
    // 0x218578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_21857c:
    if (ctx->pc == 0x21857Cu) {
        ctx->pc = 0x218580u;
        goto label_218580;
    }
    ctx->pc = 0x218578u;
    {
        const bool branch_taken_0x218578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218578) {
            ctx->pc = 0x218588u;
            goto label_218588;
        }
    }
    ctx->pc = 0x218580u;
label_218580:
    // 0x218580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218584:
    // 0x218584: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x218584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_218588:
    // 0x218588: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x218588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_21858c:
    // 0x21858c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x21858cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_218590:
    // 0x218590: 0xc119b68  jal         func_466DA0
label_218594:
    if (ctx->pc == 0x218594u) {
        ctx->pc = 0x218598u;
        goto label_218598;
    }
    ctx->pc = 0x218590u;
    SET_GPR_U32(ctx, 31, 0x218598u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x218590u, 0x218598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218598u;
label_218598:
    // 0x218598: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x218598u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21859c:
    // 0x21859c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2185a0:
    if (ctx->pc == 0x2185A0u) {
        ctx->pc = 0x2185A4u;
        goto label_2185a4;
    }
    ctx->pc = 0x21859Cu;
    {
        const bool branch_taken_0x21859c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21859c) {
            ctx->pc = 0x2185B0u;
            goto label_2185b0;
        }
    }
    ctx->pc = 0x2185A4u;
label_2185a4:
    // 0x2185a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2185a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2185a8:
    // 0x2185a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2185ac:
    if (ctx->pc == 0x2185ACu) {
        ctx->pc = 0x2185B0u;
        goto label_2185b0;
    }
    ctx->pc = 0x2185A8u;
    {
        const bool branch_taken_0x2185a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185a8) {
            ctx->pc = 0x2185E4u;
            goto label_2185e4;
        }
    }
    ctx->pc = 0x2185B0u;
label_2185b0:
    // 0x2185b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2185b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2185b4:
    // 0x2185b4: 0xc0ba088  jal         func_2E8220
label_2185b8:
    if (ctx->pc == 0x2185B8u) {
        ctx->pc = 0x2185BCu;
        goto label_2185bc;
    }
    ctx->pc = 0x2185B4u;
    SET_GPR_U32(ctx, 31, 0x2185BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2185B4u, 0x2185BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185BCu;
label_2185bc:
    // 0x2185bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2185bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2185c0:
    // 0x2185c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2185c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2185c4:
    // 0x2185c4: 0xc0ba088  jal         func_2E8220
label_2185c8:
    if (ctx->pc == 0x2185C8u) {
        ctx->pc = 0x2185CCu;
        goto label_2185cc;
    }
    ctx->pc = 0x2185C4u;
    SET_GPR_U32(ctx, 31, 0x2185CCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2185C4u, 0x2185CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2185CCu;
label_2185cc:
    // 0x2185cc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2185d0:
    if (ctx->pc == 0x2185D0u) {
        ctx->pc = 0x2185D4u;
        goto label_2185d4;
    }
    ctx->pc = 0x2185CCu;
    {
        const bool branch_taken_0x2185cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185cc) {
            ctx->pc = 0x218588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218588;
        }
    }
    ctx->pc = 0x2185D4u;
label_2185d4:
    // 0x2185d4: 0x200f809  jalr        $s0
label_2185d8:
    if (ctx->pc == 0x2185D8u) {
        ctx->pc = 0x2185DCu;
        goto label_2185dc;
    }
    ctx->pc = 0x2185D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2185DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2185D4u, 0x2185DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2185DCu;
label_2185dc:
    // 0x2185dc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2185e0:
    if (ctx->pc == 0x2185E0u) {
        ctx->pc = 0x2185E4u;
        goto label_2185e4;
    }
    ctx->pc = 0x2185DCu;
    {
        const bool branch_taken_0x2185dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2185dc) {
            ctx->pc = 0x218588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_218588;
        }
    }
    ctx->pc = 0x2185E4u;
label_2185e4:
    // 0x2185e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2185e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2185e8:
    // 0x2185e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2185e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2185ec:
    // 0x2185ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2185ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2185f0:
    // 0x2185f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2185f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2185f4:
    // 0x2185f4: 0x3e00008  jr          $ra
label_2185f8:
    if (ctx->pc == 0x2185F8u) {
        ctx->pc = 0x2185FCu;
        goto label_2185fc;
    }
    ctx->pc = 0x2185F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2185F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2185FCu;
label_2185fc:
    // 0x2185fc: 0x0  nop
    ctx->pc = 0x2185fcu;
    // NOP
    ctx->pc = 0x218600u;
}
