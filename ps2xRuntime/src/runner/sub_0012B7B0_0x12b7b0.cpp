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

// Function: sub_0012B7B0
// Address: 0x12b7b0 - 0x12b880
void sub_0012B7B0_0x12b7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B7B0_0x12b7b0");
#endif

    switch (ctx->pc) {
        case 0x12b7dcu: goto label_12b7dc;
        case 0x12b7e8u: goto label_12b7e8;
        case 0x12b7f4u: goto label_12b7f4;
        case 0x12b804u: goto label_12b804;
        case 0x12b81cu: goto label_12b81c;
        case 0x12b83cu: goto label_12b83c;
        case 0x12b850u: goto label_12b850;
        default: break;
    }

    ctx->pc = 0x12b7b0u;

    // 0x12b7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b7b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12b7b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12b7bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12b7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x12b7c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x12b7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12b7c4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x12b7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x12b7c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b7cc: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12b7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b7d0: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x12b7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x12b7d4: 0xc04c670  jal         func_1319C0
    ctx->pc = 0x12B7D4u;
    SET_GPR_U32(ctx, 31, 0x12B7DCu);
    ctx->pc = 0x1319C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1319C0u, 0x12B7D4u, 0x12B7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7DCu;
label_12b7dc:
    // 0x12b7dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x12b7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7e0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12B7E0u;
    {
        const bool branch_taken_0x12b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b7e0) {
            ctx->pc = 0x12B858u;
            goto label_12b858;
        }
    }
    ctx->pc = 0x12B7E8u;
label_12b7e8:
    // 0x12b7e8: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x12b7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x12b7ec: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x12B7ECu;
    SET_GPR_U32(ctx, 31, 0x12B7F4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12B7ECu, 0x12B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7F4u;
label_12b7f4:
    // 0x12b7f4: 0x24040138  addiu       $a0, $zero, 0x138
    ctx->pc = 0x12b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x12b7f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12b7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x12B7FCu;
    SET_GPR_U32(ctx, 31, 0x12B804u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12B7FCu, 0x12B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B804u;
label_12b804:
    // 0x12b804: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b808: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B808u;
    {
        const bool branch_taken_0x12b808 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b808) {
            ctx->pc = 0x12B820u;
            goto label_12b820;
        }
    }
    ctx->pc = 0x12B810u;
    // 0x12b810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b814: 0xc04ae38  jal         func_12B8E0
    ctx->pc = 0x12B814u;
    SET_GPR_U32(ctx, 31, 0x12B81Cu);
    ctx->pc = 0x12B8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B8E0u, 0x12B814u, 0x12B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B81Cu;
label_12b81c:
    // 0x12b81c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12b81cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12b820:
    // 0x12b820: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x12b820u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b824: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x12b824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x12b828: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x12b828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x12b82c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x12b82cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x12b830: 0x24a52518  addiu       $a1, $a1, 0x2518
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9496));
    // 0x12b834: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x12B834u;
    SET_GPR_U32(ctx, 31, 0x12B83Cu);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x12B834u, 0x12B83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B83Cu;
label_12b83c:
    // 0x12b83c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b840: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12b844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12b844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b848: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x12B848u;
    SET_GPR_U32(ctx, 31, 0x12B850u);
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x12B848u, 0x12B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B850u;
label_12b850:
    // 0x12b850: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x12b850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x12b854: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_12b858:
    // 0x12b858: 0x2e03007f  sltiu       $v1, $s0, 0x7F
    ctx->pc = 0x12b858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x12b85c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x12B85Cu;
    {
        const bool branch_taken_0x12b85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b85c) {
            ctx->pc = 0x12B7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12b7e8;
        }
    }
    ctx->pc = 0x12B864u;
    // 0x12b864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12b864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b868: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b86c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12b86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b870: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12b870u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b874: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x12b874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12b878: 0x3e00008  jr          $ra
    ctx->pc = 0x12B878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B880u;
}
