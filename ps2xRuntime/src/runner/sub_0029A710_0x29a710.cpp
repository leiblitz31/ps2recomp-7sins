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

// Function: sub_0029A710
// Address: 0x29a710 - 0x29a7f0
void sub_0029A710_0x29a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A710_0x29a710");
#endif

    switch (ctx->pc) {
        case 0x29a73cu: goto label_29a73c;
        case 0x29a75cu: goto label_29a75c;
        case 0x29a768u: goto label_29a768;
        case 0x29a77cu: goto label_29a77c;
        case 0x29a7b4u: goto label_29a7b4;
        default: break;
    }

    ctx->pc = 0x29a710u;

    // 0x29a710: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29a714: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a718: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29a718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29a71c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29a71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29a720: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29a724: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x29a724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x29a728: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x29a728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x29a72c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29a72cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a730: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a730u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a734: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29A734u;
    {
        const bool branch_taken_0x29a734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a734) {
            ctx->pc = 0x29A7C0u;
            goto label_29a7c0;
        }
    }
    ctx->pc = 0x29A73Cu;
label_29a73c:
    // 0x29a73c: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x29a73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x29a740: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29a744: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a748: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a74c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a750: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a754: 0xc0a69a8  jal         func_29A6A0
    ctx->pc = 0x29A754u;
    SET_GPR_U32(ctx, 31, 0x29A75Cu);
    ctx->pc = 0x29A6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6A0u, 0x29A754u, 0x29A75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A75Cu;
label_29a75c:
    // 0x29a75c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29a75cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a760: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29A760u;
    {
        const bool branch_taken_0x29a760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a760) {
            ctx->pc = 0x29A794u;
            goto label_29a794;
        }
    }
    ctx->pc = 0x29A768u;
label_29a768:
    // 0x29a768: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a76c: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x29a76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x29a770: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x29a770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29a774: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x29A774u;
    SET_GPR_U32(ctx, 31, 0x29A77Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x29A774u, 0x29A77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A77Cu;
label_29a77c:
    // 0x29a77c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A77Cu;
    {
        const bool branch_taken_0x29a77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a77c) {
            ctx->pc = 0x29A790u;
            goto label_29a790;
        }
    }
    ctx->pc = 0x29A784u;
    // 0x29a784: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x29a784u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29a788: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29A788u;
    {
        const bool branch_taken_0x29a788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29a788) {
            ctx->pc = 0x29A7BCu;
            goto label_29a7bc;
        }
    }
    ctx->pc = 0x29A790u;
label_29a790:
    // 0x29a790: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x29a790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_29a794:
    // 0x29a794: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x29a794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x29a798: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29a79c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29a7a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29a7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29a7a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a7a8: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x29a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x29a7ac: 0xc0a6990  jal         func_29A640
    ctx->pc = 0x29A7ACu;
    SET_GPR_U32(ctx, 31, 0x29A7B4u);
    ctx->pc = 0x29A640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A640u, 0x29A7ACu, 0x29A7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7B4u;
label_29a7b4:
    // 0x29a7b4: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x29A7B4u;
    {
        const bool branch_taken_0x29a7b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x29a7b4) {
            ctx->pc = 0x29A768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a768;
        }
    }
    ctx->pc = 0x29A7BCu;
label_29a7bc:
    // 0x29a7bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a7bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29a7c0:
    // 0x29a7c0: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x29a7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29a7c4: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x29A7C4u;
    {
        const bool branch_taken_0x29a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a7c4) {
            ctx->pc = 0x29A73Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a73c;
        }
    }
    ctx->pc = 0x29A7CCu;
    // 0x29a7cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x29a7ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a7d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29a7d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a7d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29a7d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a7dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29a7dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a7e0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x29a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29a7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29A7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A7ECu;
    // 0x29a7ec: 0x0  nop
    ctx->pc = 0x29a7ecu;
    // NOP
    ctx->pc = 0x29a7f0u;
}
