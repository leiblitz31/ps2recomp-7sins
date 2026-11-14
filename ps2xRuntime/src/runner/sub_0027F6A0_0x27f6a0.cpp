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

// Function: sub_0027F6A0
// Address: 0x27f6a0 - 0x27f760
void sub_0027F6A0_0x27f6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F6A0_0x27f6a0");
#endif

    switch (ctx->pc) {
        case 0x27f6bcu: goto label_27f6bc;
        case 0x27f6c8u: goto label_27f6c8;
        case 0x27f6d8u: goto label_27f6d8;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f704u: goto label_27f704;
        case 0x27f720u: goto label_27f720;
        case 0x27f730u: goto label_27f730;
        default: break;
    }

    ctx->pc = 0x27f6a0u;

    // 0x27f6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f6a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27f6a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f6ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f6b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f6b4: 0xc090864  jal         func_242190
    ctx->pc = 0x27F6B4u;
    SET_GPR_U32(ctx, 31, 0x27F6BCu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x27F6B4u, 0x27F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6BCu;
label_27f6bc:
    // 0x27f6bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6c0: 0xc090590  jal         func_241640
    ctx->pc = 0x27F6C0u;
    SET_GPR_U32(ctx, 31, 0x27F6C8u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x27F6C0u, 0x27F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6C8u;
label_27f6c8:
    // 0x27f6c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27f6c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x27f6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27f6d0: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x27F6D0u;
    SET_GPR_U32(ctx, 31, 0x27F6D8u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x27F6D0u, 0x27F6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6D8u;
label_27f6d8:
    // 0x27f6d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27f6d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6e0: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x27F6E0u;
    SET_GPR_U32(ctx, 31, 0x27F6E8u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x27F6E0u, 0x27F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F6E8u;
label_27f6e8:
    // 0x27f6e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f6e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f6ec: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27F6ECu;
    {
        const bool branch_taken_0x27f6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f6ec) {
            ctx->pc = 0x27F724u;
            goto label_27f724;
        }
    }
    ctx->pc = 0x27F6F4u;
label_27f6f4:
    // 0x27f6f4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27f6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27f6f8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x27f6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x27f6fc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x27F6FCu;
    SET_GPR_U32(ctx, 31, 0x27F704u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x27F6FCu, 0x27F704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F704u;
label_27f704:
    // 0x27f704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f708: 0x10110005  beq         $zero, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27F708u;
    {
        const bool branch_taken_0x27f708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 17));
        if (branch_taken_0x27f708) {
            ctx->pc = 0x27F720u;
            goto label_27f720;
        }
    }
    ctx->pc = 0x27F710u;
    // 0x27f710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f718: 0xc0a6484  jal         func_299210
    ctx->pc = 0x27F718u;
    SET_GPR_U32(ctx, 31, 0x27F720u);
    ctx->pc = 0x299210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299210u, 0x27F718u, 0x27F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F720u;
label_27f720:
    // 0x27f720: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x27f720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27f724:
    // 0x27f724: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27f724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f728: 0xc04147c  jal         func_1051F0
    ctx->pc = 0x27F728u;
    SET_GPR_U32(ctx, 31, 0x27F730u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x27F728u, 0x27F730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F730u;
label_27f730:
    // 0x27f730: 0x1602fff0  bne         $s0, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x27F730u;
    {
        const bool branch_taken_0x27f730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f730) {
            ctx->pc = 0x27F6F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f6f4;
        }
    }
    ctx->pc = 0x27F738u;
    // 0x27f738: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27f738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f73c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27f73cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f740: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27f740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f744: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27f744u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f748: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27f748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27f74c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F754u;
    // 0x27f754: 0x0  nop
    ctx->pc = 0x27f754u;
    // NOP
    // 0x27f758: 0x0  nop
    ctx->pc = 0x27f758u;
    // NOP
    // 0x27f75c: 0x0  nop
    ctx->pc = 0x27f75cu;
    // NOP
    ctx->pc = 0x27f760u;
}
