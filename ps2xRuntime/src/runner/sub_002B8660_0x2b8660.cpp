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

// Function: sub_002B8660
// Address: 0x2b8660 - 0x2b8700
void sub_002B8660_0x2b8660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8660_0x2b8660");
#endif

    switch (ctx->pc) {
        case 0x2b8660u: goto label_2b8660;
        case 0x2b8664u: goto label_2b8664;
        case 0x2b8668u: goto label_2b8668;
        case 0x2b866cu: goto label_2b866c;
        case 0x2b8670u: goto label_2b8670;
        case 0x2b8674u: goto label_2b8674;
        case 0x2b8678u: goto label_2b8678;
        case 0x2b867cu: goto label_2b867c;
        case 0x2b8680u: goto label_2b8680;
        case 0x2b8684u: goto label_2b8684;
        case 0x2b8688u: goto label_2b8688;
        case 0x2b868cu: goto label_2b868c;
        case 0x2b8690u: goto label_2b8690;
        case 0x2b8694u: goto label_2b8694;
        case 0x2b8698u: goto label_2b8698;
        case 0x2b869cu: goto label_2b869c;
        case 0x2b86a0u: goto label_2b86a0;
        case 0x2b86a4u: goto label_2b86a4;
        case 0x2b86a8u: goto label_2b86a8;
        case 0x2b86acu: goto label_2b86ac;
        case 0x2b86b0u: goto label_2b86b0;
        case 0x2b86b4u: goto label_2b86b4;
        case 0x2b86b8u: goto label_2b86b8;
        case 0x2b86bcu: goto label_2b86bc;
        case 0x2b86c0u: goto label_2b86c0;
        case 0x2b86c4u: goto label_2b86c4;
        case 0x2b86c8u: goto label_2b86c8;
        case 0x2b86ccu: goto label_2b86cc;
        case 0x2b86d0u: goto label_2b86d0;
        case 0x2b86d4u: goto label_2b86d4;
        case 0x2b86d8u: goto label_2b86d8;
        case 0x2b86dcu: goto label_2b86dc;
        case 0x2b86e0u: goto label_2b86e0;
        case 0x2b86e4u: goto label_2b86e4;
        case 0x2b86e8u: goto label_2b86e8;
        case 0x2b86ecu: goto label_2b86ec;
        case 0x2b86f0u: goto label_2b86f0;
        case 0x2b86f4u: goto label_2b86f4;
        case 0x2b86f8u: goto label_2b86f8;
        case 0x2b86fcu: goto label_2b86fc;
        default: break;
    }

    ctx->pc = 0x2b8660u;

label_2b8660:
    // 0x2b8660: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2b8660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2b8664:
    // 0x2b8664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b8664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2b8668:
    // 0x2b8668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b8668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b866c:
    // 0x2b866c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b866cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2b8670:
    // 0x2b8670: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2b8670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_2b8674:
    // 0x2b8674: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b8674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b8678:
    // 0x2b8678: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b867c:
    if (ctx->pc == 0x2B867Cu) {
        ctx->pc = 0x2B8680u;
        goto label_2b8680;
    }
    ctx->pc = 0x2B8678u;
    {
        const bool branch_taken_0x2b8678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8678) {
            ctx->pc = 0x2B8688u;
            goto label_2b8688;
        }
    }
    ctx->pc = 0x2B8680u;
label_2b8680:
    // 0x2b8680: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b8684:
    // 0x2b8684: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2b8684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2b8688:
    // 0x2b8688: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2b868c:
    // 0x2b868c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2b868cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2b8690:
    // 0x2b8690: 0xc119b68  jal         func_466DA0
label_2b8694:
    if (ctx->pc == 0x2B8694u) {
        ctx->pc = 0x2B8698u;
        goto label_2b8698;
    }
    ctx->pc = 0x2B8690u;
    SET_GPR_U32(ctx, 31, 0x2B8698u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2B8690u, 0x2B8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8698u;
label_2b8698:
    // 0x2b8698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b8698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b869c:
    // 0x2b869c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2b86a0:
    if (ctx->pc == 0x2B86A0u) {
        ctx->pc = 0x2B86A4u;
        goto label_2b86a4;
    }
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B86B0u;
            goto label_2b86b0;
        }
    }
    ctx->pc = 0x2B86A4u;
label_2b86a4:
    // 0x2b86a4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b86a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b86a8:
    // 0x2b86a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b86ac:
    if (ctx->pc == 0x2B86ACu) {
        ctx->pc = 0x2B86B0u;
        goto label_2b86b0;
    }
    ctx->pc = 0x2B86A8u;
    {
        const bool branch_taken_0x2b86a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b86a8) {
            ctx->pc = 0x2B86E4u;
            goto label_2b86e4;
        }
    }
    ctx->pc = 0x2B86B0u;
label_2b86b0:
    // 0x2b86b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b86b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b86b4:
    // 0x2b86b4: 0xc0ba088  jal         func_2E8220
label_2b86b8:
    if (ctx->pc == 0x2B86B8u) {
        ctx->pc = 0x2B86BCu;
        goto label_2b86bc;
    }
    ctx->pc = 0x2B86B4u;
    SET_GPR_U32(ctx, 31, 0x2B86BCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B86B4u, 0x2B86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86BCu;
label_2b86bc:
    // 0x2b86bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b86bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b86c0:
    // 0x2b86c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b86c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b86c4:
    // 0x2b86c4: 0xc0ba088  jal         func_2E8220
label_2b86c8:
    if (ctx->pc == 0x2B86C8u) {
        ctx->pc = 0x2B86CCu;
        goto label_2b86cc;
    }
    ctx->pc = 0x2B86C4u;
    SET_GPR_U32(ctx, 31, 0x2B86CCu);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x2B86C4u, 0x2B86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B86CCu;
label_2b86cc:
    // 0x2b86cc: 0x1200ffee  beqz        $s0, . + 4 + (-0x12 << 2)
label_2b86d0:
    if (ctx->pc == 0x2B86D0u) {
        ctx->pc = 0x2B86D4u;
        goto label_2b86d4;
    }
    ctx->pc = 0x2B86CCu;
    {
        const bool branch_taken_0x2b86cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b86cc) {
            ctx->pc = 0x2B8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8688;
        }
    }
    ctx->pc = 0x2B86D4u;
label_2b86d4:
    // 0x2b86d4: 0x200f809  jalr        $s0
label_2b86d8:
    if (ctx->pc == 0x2B86D8u) {
        ctx->pc = 0x2B86DCu;
        goto label_2b86dc;
    }
    ctx->pc = 0x2B86D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2B86DCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86D4u, 0x2B86DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B86DCu;
label_2b86dc:
    // 0x2b86dc: 0x1000ffea  b           . + 4 + (-0x16 << 2)
label_2b86e0:
    if (ctx->pc == 0x2B86E0u) {
        ctx->pc = 0x2B86E4u;
        goto label_2b86e4;
    }
    ctx->pc = 0x2B86DCu;
    {
        const bool branch_taken_0x2b86dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b86dc) {
            ctx->pc = 0x2B8688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8688;
        }
    }
    ctx->pc = 0x2B86E4u;
label_2b86e4:
    // 0x2b86e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b86e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b86e8:
    // 0x2b86e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b86e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b86ec:
    // 0x2b86ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b86ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b86f0:
    // 0x2b86f0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2b86f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2b86f4:
    // 0x2b86f4: 0x3e00008  jr          $ra
label_2b86f8:
    if (ctx->pc == 0x2B86F8u) {
        ctx->pc = 0x2B86FCu;
        goto label_2b86fc;
    }
    ctx->pc = 0x2B86F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86FCu;
label_2b86fc:
    // 0x2b86fc: 0x0  nop
    ctx->pc = 0x2b86fcu;
    // NOP
    ctx->pc = 0x2b8700u;
}
