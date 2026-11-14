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

// Function: sub_0027F5E0
// Address: 0x27f5e0 - 0x27f6a0
void sub_0027F5E0_0x27f5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F5E0_0x27f5e0");
#endif

    switch (ctx->pc) {
        case 0x27f5fcu: goto label_27f5fc;
        case 0x27f608u: goto label_27f608;
        case 0x27f618u: goto label_27f618;
        case 0x27f628u: goto label_27f628;
        case 0x27f634u: goto label_27f634;
        case 0x27f644u: goto label_27f644;
        case 0x27f660u: goto label_27f660;
        case 0x27f670u: goto label_27f670;
        default: break;
    }

    ctx->pc = 0x27f5e0u;

    // 0x27f5e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f5e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27f5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27f5e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f5ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f5f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f5f4: 0xc090864  jal         func_242190
    ctx->pc = 0x27F5F4u;
    SET_GPR_U32(ctx, 31, 0x27F5FCu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27F5F4u, 0x27F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F5FCu;
label_27f5fc:
    // 0x27f5fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f600: 0xc090590  jal         func_241640
    ctx->pc = 0x27F600u;
    SET_GPR_U32(ctx, 31, 0x27F608u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27F600u, 0x27F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F608u;
label_27f608:
    // 0x27f608: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f60c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27f60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f610: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27F610u;
    SET_GPR_U32(ctx, 31, 0x27F618u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27F610u, 0x27F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F618u;
label_27f618:
    // 0x27f618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f61c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f620: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27F620u;
    SET_GPR_U32(ctx, 31, 0x27F628u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27F620u, 0x27F628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F628u;
label_27f628:
    // 0x27f628: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f62c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27F62Cu;
    {
        const bool branch_taken_0x27f62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f62c) {
            ctx->pc = 0x27F664u;
            goto label_27f664;
        }
    }
    ctx->pc = 0x27F634u;
label_27f634:
    // 0x27f634: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f638: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27f638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f63c: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27F63Cu;
    SET_GPR_U32(ctx, 31, 0x27F644u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F63Cu, 0x27F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F644u;
label_27f644:
    // 0x27f644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f648: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F648u;
    {
        const bool branch_taken_0x27f648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x27f648) {
            ctx->pc = 0x27F660u;
            goto label_27f660;
        }
    }
    ctx->pc = 0x27F650u;
    // 0x27f650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f658: 0xc0a6484  jal         func_299210
    ctx->pc = 0x27F658u;
    SET_GPR_U32(ctx, 31, 0x27F660u);
    ctx->pc = 0x299210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299210u, 0x27F658u, 0x27F660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F660u;
label_27f660:
    // 0x27f660: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27f660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27f664:
    // 0x27f664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f668: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x27F668u;
    SET_GPR_U32(ctx, 31, 0x27F670u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27F668u, 0x27F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F670u;
label_27f670:
    // 0x27f670: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F670u;
    {
        const bool branch_taken_0x27f670 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f670) {
            ctx->pc = 0x27F634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f634;
        }
    }
    ctx->pc = 0x27F678u;
    // 0x27f678: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27f678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f67c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f67cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f680: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f680u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f684: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f688: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27f688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27f68c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F694u;
    // 0x27f694: 0x0  nop
    ctx->pc = 0x27f694u;
    // NOP
    // 0x27f698: 0x0  nop
    ctx->pc = 0x27f698u;
    // NOP
    // 0x27f69c: 0x0  nop
    ctx->pc = 0x27f69cu;
    // NOP
    ctx->pc = 0x27f6a0u;
}
