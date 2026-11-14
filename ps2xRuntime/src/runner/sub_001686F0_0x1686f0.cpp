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

// Function: sub_001686F0
// Address: 0x1686f0 - 0x1687b0
void sub_001686F0_0x1686f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001686F0_0x1686f0");
#endif

    switch (ctx->pc) {
        case 0x168704u: goto label_168704;
        case 0x168714u: goto label_168714;
        case 0x168728u: goto label_168728;
        case 0x16873cu: goto label_16873c;
        case 0x168750u: goto label_168750;
        case 0x168764u: goto label_168764;
        case 0x16877cu: goto label_16877c;
        case 0x16878cu: goto label_16878c;
        case 0x16879cu: goto label_16879c;
        default: break;
    }

    ctx->pc = 0x1686f0u;

    // 0x1686f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1686f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1686f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1686f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1686f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1686f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1686fc: 0xc08ef64  jal         func_23BD90
    ctx->pc = 0x1686FCu;
    SET_GPR_U32(ctx, 31, 0x168704u);
    ctx->pc = 0x23BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD90u, 0x1686FCu, 0x168704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168704u;
label_168704:
    // 0x168704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x168704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168708: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16870c: 0xc088560  jal         func_221580
    ctx->pc = 0x16870Cu;
    SET_GPR_U32(ctx, 31, 0x168714u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x16870Cu, 0x168714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168714u;
label_168714:
    // 0x168714: 0x10100009  beq         $zero, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x168714u;
    {
        const bool branch_taken_0x168714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        if (branch_taken_0x168714) {
            ctx->pc = 0x16873Cu;
            goto label_16873c;
        }
    }
    ctx->pc = 0x16871Cu;
    // 0x16871c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16871cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168720: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x168720u;
    SET_GPR_U32(ctx, 31, 0x168728u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x168720u, 0x168728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168728u;
label_168728:
    // 0x168728: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16872c: 0x24050568  addiu       $a1, $zero, 0x568
    ctx->pc = 0x16872cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
    // 0x168730: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x168730u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168734: 0xc040924  jal         func_102490
    ctx->pc = 0x168734u;
    SET_GPR_U32(ctx, 31, 0x16873Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x168734u, 0x16873Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16873Cu;
label_16873c:
    // 0x16873c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16873cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168740: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x168740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x168744: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x168744u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x168748: 0xc040924  jal         func_102490
    ctx->pc = 0x168748u;
    SET_GPR_U32(ctx, 31, 0x168750u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x168748u, 0x168750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168750u;
label_168750:
    // 0x168750: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x168750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168754: 0x24050567  addiu       $a1, $zero, 0x567
    ctx->pc = 0x168754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
    // 0x168758: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x168758u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x16875c: 0xc040924  jal         func_102490
    ctx->pc = 0x16875Cu;
    SET_GPR_U32(ctx, 31, 0x168764u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x16875Cu, 0x168764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168764u;
label_168764:
    // 0x168764: 0x8f82bbb4  lw          $v0, -0x444C($gp)
    ctx->pc = 0x168764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x168768: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x168768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x16876c: 0x24050566  addiu       $a1, $zero, 0x566
    ctx->pc = 0x16876cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1382));
    // 0x168770: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x168770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x168774: 0xc040924  jal         func_102490
    ctx->pc = 0x168774u;
    SET_GPR_U32(ctx, 31, 0x16877Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x168774u, 0x16877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16877Cu;
label_16877c:
    // 0x16877c: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x16877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x168780: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x168780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168784: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x168784u;
    SET_GPR_U32(ctx, 31, 0x16878Cu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x168784u, 0x16878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16878Cu;
label_16878c:
    // 0x16878c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x16878cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x168790: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x168790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x168794: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x168794u;
    SET_GPR_U32(ctx, 31, 0x16879Cu);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x168794u, 0x16879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16879Cu;
label_16879c:
    // 0x16879c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16879cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1687a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1687a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1687a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1687a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1687a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1687A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1687A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1687B0u;
}
