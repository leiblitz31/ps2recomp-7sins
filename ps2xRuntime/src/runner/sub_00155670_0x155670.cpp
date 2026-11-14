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

// Function: sub_00155670
// Address: 0x155670 - 0x155720
void sub_00155670_0x155670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155670_0x155670");
#endif

    switch (ctx->pc) {
        case 0x155670u: goto label_155670;
        case 0x155674u: goto label_155674;
        case 0x155678u: goto label_155678;
        case 0x15567cu: goto label_15567c;
        case 0x155680u: goto label_155680;
        case 0x155684u: goto label_155684;
        case 0x155688u: goto label_155688;
        case 0x15568cu: goto label_15568c;
        case 0x155690u: goto label_155690;
        case 0x155694u: goto label_155694;
        case 0x155698u: goto label_155698;
        case 0x15569cu: goto label_15569c;
        case 0x1556a0u: goto label_1556a0;
        case 0x1556a4u: goto label_1556a4;
        case 0x1556a8u: goto label_1556a8;
        case 0x1556acu: goto label_1556ac;
        case 0x1556b0u: goto label_1556b0;
        case 0x1556b4u: goto label_1556b4;
        case 0x1556b8u: goto label_1556b8;
        case 0x1556bcu: goto label_1556bc;
        case 0x1556c0u: goto label_1556c0;
        case 0x1556c4u: goto label_1556c4;
        case 0x1556c8u: goto label_1556c8;
        case 0x1556ccu: goto label_1556cc;
        case 0x1556d0u: goto label_1556d0;
        case 0x1556d4u: goto label_1556d4;
        case 0x1556d8u: goto label_1556d8;
        case 0x1556dcu: goto label_1556dc;
        case 0x1556e0u: goto label_1556e0;
        case 0x1556e4u: goto label_1556e4;
        case 0x1556e8u: goto label_1556e8;
        case 0x1556ecu: goto label_1556ec;
        case 0x1556f0u: goto label_1556f0;
        case 0x1556f4u: goto label_1556f4;
        case 0x1556f8u: goto label_1556f8;
        case 0x1556fcu: goto label_1556fc;
        case 0x155700u: goto label_155700;
        case 0x155704u: goto label_155704;
        case 0x155708u: goto label_155708;
        case 0x15570cu: goto label_15570c;
        case 0x155710u: goto label_155710;
        case 0x155714u: goto label_155714;
        case 0x155718u: goto label_155718;
        case 0x15571cu: goto label_15571c;
        default: break;
    }

    ctx->pc = 0x155670u;

label_155670:
    // 0x155670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x155670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_155674:
    // 0x155674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x155674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_155678:
    // 0x155678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x155678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_15567c:
    // 0x15567c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_155680:
    // 0x155680: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x155680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_155684:
    // 0x155684: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x155684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_155688:
    // 0x155688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_15568c:
    if (ctx->pc == 0x15568Cu) {
        ctx->pc = 0x155690u;
        goto label_155690;
    }
    ctx->pc = 0x155688u;
    {
        const bool branch_taken_0x155688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155688) {
            ctx->pc = 0x155698u;
            goto label_155698;
        }
    }
    ctx->pc = 0x155690u;
label_155690:
    // 0x155690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155694:
    // 0x155694: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x155694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_155698:
    // 0x155698: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x155698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_15569c:
    // 0x15569c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15569cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1556a0:
    // 0x1556a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1556a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1556a4:
    // 0x1556a4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1556a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1556a8:
    // 0x1556a8: 0xc119b68  jal         func_466DA0
label_1556ac:
    if (ctx->pc == 0x1556ACu) {
        ctx->pc = 0x1556B0u;
        goto label_1556b0;
    }
    ctx->pc = 0x1556A8u;
    SET_GPR_U32(ctx, 31, 0x1556B0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1556A8u, 0x1556B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556B0u;
label_1556b0:
    // 0x1556b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1556b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1556b4:
    // 0x1556b4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1556b8:
    if (ctx->pc == 0x1556B8u) {
        ctx->pc = 0x1556BCu;
        goto label_1556bc;
    }
    ctx->pc = 0x1556B4u;
    {
        const bool branch_taken_0x1556b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556b4) {
            ctx->pc = 0x1556C8u;
            goto label_1556c8;
        }
    }
    ctx->pc = 0x1556BCu;
label_1556bc:
    // 0x1556bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1556bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1556c0:
    // 0x1556c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_1556c4:
    if (ctx->pc == 0x1556C4u) {
        ctx->pc = 0x1556C8u;
        goto label_1556c8;
    }
    ctx->pc = 0x1556C0u;
    {
        const bool branch_taken_0x1556c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556c0) {
            ctx->pc = 0x1556FCu;
            goto label_1556fc;
        }
    }
    ctx->pc = 0x1556C8u;
label_1556c8:
    // 0x1556c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1556c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1556cc:
    // 0x1556cc: 0xc0ba088  jal         func_2E8220
label_1556d0:
    if (ctx->pc == 0x1556D0u) {
        ctx->pc = 0x1556D4u;
        goto label_1556d4;
    }
    ctx->pc = 0x1556CCu;
    SET_GPR_U32(ctx, 31, 0x1556D4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1556CCu, 0x1556D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556D4u;
label_1556d4:
    // 0x1556d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1556d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1556d8:
    // 0x1556d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1556d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1556dc:
    // 0x1556dc: 0xc0ba088  jal         func_2E8220
label_1556e0:
    if (ctx->pc == 0x1556E0u) {
        ctx->pc = 0x1556E4u;
        goto label_1556e4;
    }
    ctx->pc = 0x1556DCu;
    SET_GPR_U32(ctx, 31, 0x1556E4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x1556DCu, 0x1556E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1556E4u;
label_1556e4:
    // 0x1556e4: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_1556e8:
    if (ctx->pc == 0x1556E8u) {
        ctx->pc = 0x1556ECu;
        goto label_1556ec;
    }
    ctx->pc = 0x1556E4u;
    {
        const bool branch_taken_0x1556e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556e4) {
            ctx->pc = 0x155698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155698;
        }
    }
    ctx->pc = 0x1556ECu;
label_1556ec:
    // 0x1556ec: 0x200f809  jalr        $s0
label_1556f0:
    if (ctx->pc == 0x1556F0u) {
        ctx->pc = 0x1556F4u;
        goto label_1556f4;
    }
    ctx->pc = 0x1556ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1556F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1556ECu, 0x1556F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1556F4u;
label_1556f4:
    // 0x1556f4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_1556f8:
    if (ctx->pc == 0x1556F8u) {
        ctx->pc = 0x1556FCu;
        goto label_1556fc;
    }
    ctx->pc = 0x1556F4u;
    {
        const bool branch_taken_0x1556f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1556f4) {
            ctx->pc = 0x155698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_155698;
        }
    }
    ctx->pc = 0x1556FCu;
label_1556fc:
    // 0x1556fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1556fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_155700:
    // 0x155700: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x155700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155704:
    // 0x155704: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_155708:
    // 0x155708: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x155708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_15570c:
    // 0x15570c: 0x3e00008  jr          $ra
label_155710:
    if (ctx->pc == 0x155710u) {
        ctx->pc = 0x155714u;
        goto label_155714;
    }
    ctx->pc = 0x15570Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15570Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155714u;
label_155714:
    // 0x155714: 0x0  nop
    ctx->pc = 0x155714u;
    // NOP
label_155718:
    // 0x155718: 0x0  nop
    ctx->pc = 0x155718u;
    // NOP
label_15571c:
    // 0x15571c: 0x0  nop
    ctx->pc = 0x15571cu;
    // NOP
    ctx->pc = 0x155720u;
}
