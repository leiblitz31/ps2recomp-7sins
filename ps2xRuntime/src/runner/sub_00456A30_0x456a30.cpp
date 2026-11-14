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

// Function: sub_00456A30
// Address: 0x456a30 - 0x456ab0
void sub_00456A30_0x456a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456A30_0x456a30");
#endif

    switch (ctx->pc) {
        case 0x456a54u: goto label_456a54;
        case 0x456a64u: goto label_456a64;
        case 0x456a7cu: goto label_456a7c;
        case 0x456a8cu: goto label_456a8c;
        default: break;
    }

    ctx->pc = 0x456a30u;

    // 0x456a30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x456a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x456a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x456a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x456a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456a40: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x456a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x456a44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x456a44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456a48: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x456a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456a4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x456A4Cu;
    {
        const bool branch_taken_0x456a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456a4c) {
            ctx->pc = 0x456A80u;
            goto label_456a80;
        }
    }
    ctx->pc = 0x456A54u;
label_456a54:
    // 0x456a54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456a58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x456a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456a5c: 0xc1159d0  jal         func_456740
    ctx->pc = 0x456A5Cu;
    SET_GPR_U32(ctx, 31, 0x456A64u);
    ctx->pc = 0x456740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456740u, 0x456A5Cu, 0x456A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456A64u;
label_456a64:
    // 0x456a64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x456a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456a68: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x456A68u;
    {
        const bool branch_taken_0x456a68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x456a68) {
            ctx->pc = 0x456A7Cu;
            goto label_456a7c;
        }
    }
    ctx->pc = 0x456A70u;
    // 0x456a70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x456a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456a74: 0xc113808  jal         func_44E020
    ctx->pc = 0x456A74u;
    SET_GPR_U32(ctx, 31, 0x456A7Cu);
    ctx->pc = 0x44E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E020u, 0x456A74u, 0x456A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456A7Cu;
label_456a7c:
    // 0x456a7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x456a7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_456a80:
    // 0x456a80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456a84: 0xc1159c4  jal         func_456710
    ctx->pc = 0x456A84u;
    SET_GPR_U32(ctx, 31, 0x456A8Cu);
    ctx->pc = 0x456710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456710u, 0x456A84u, 0x456A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456A8Cu;
label_456a8c:
    // 0x456a8c: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x456a8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x456a90: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x456A90u;
    {
        const bool branch_taken_0x456a90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x456a90) {
            ctx->pc = 0x456A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_456a54;
        }
    }
    ctx->pc = 0x456A98u;
    // 0x456a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x456a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x456a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x456aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456aa4: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x456aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x456aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x456AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456AB0u;
}
