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

// Function: sub_0045AC00
// Address: 0x45ac00 - 0x45acc0
void sub_0045AC00_0x45ac00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045AC00_0x45ac00");
#endif

    switch (ctx->pc) {
        case 0x45ac30u: goto label_45ac30;
        case 0x45ac44u: goto label_45ac44;
        case 0x45ac78u: goto label_45ac78;
        case 0x45ac90u: goto label_45ac90;
        default: break;
    }

    ctx->pc = 0x45ac00u;

    // 0x45ac00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x45ac00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x45ac04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45ac04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45ac08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45ac08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x45ac0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45ac0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45ac10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45ac10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x45ac14: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x45ac14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x45ac18: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x45ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x45ac1c: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x45ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x45ac20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x45ac20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ac24: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x45ac24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ac28: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x45AC28u;
    {
        const bool branch_taken_0x45ac28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ac28) {
            ctx->pc = 0x45AC84u;
            goto label_45ac84;
        }
    }
    ctx->pc = 0x45AC30u;
label_45ac30:
    // 0x45ac30: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ac30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ac34: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ac34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ac38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ac3c: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AC3Cu;
    SET_GPR_U32(ctx, 31, 0x45AC44u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AC3Cu, 0x45AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AC44u;
label_45ac44:
    // 0x45ac44: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45ac44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ac48: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x45AC48u;
    {
        const bool branch_taken_0x45ac48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ac48) {
            ctx->pc = 0x45AC80u;
            goto label_45ac80;
        }
    }
    ctx->pc = 0x45AC50u;
    // 0x45ac50: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x45ac50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x45ac54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x45ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45ac58: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45AC58u;
    {
        const bool branch_taken_0x45ac58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45ac58) {
            ctx->pc = 0x45AC80u;
            goto label_45ac80;
        }
    }
    ctx->pc = 0x45AC60u;
    // 0x45ac60: 0x8fb20060  lw          $s2, 0x60($sp)
    ctx->pc = 0x45ac60u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45ac64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ac68: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x45ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x45ac6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45ac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45ac70: 0xc116864  jal         func_45A190
    ctx->pc = 0x45AC70u;
    SET_GPR_U32(ctx, 31, 0x45AC78u);
    ctx->pc = 0x45A190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A190u, 0x45AC70u, 0x45AC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AC78u;
label_45ac78:
    // 0x45ac78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45ac78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45ac7c: 0xac52012c  sw          $s2, 0x12C($v0)
    ctx->pc = 0x45ac7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 18));
label_45ac80:
    // 0x45ac80: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x45ac80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_45ac84:
    // 0x45ac84: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x45ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45ac88: 0xc116738  jal         func_459CE0
    ctx->pc = 0x45AC88u;
    SET_GPR_U32(ctx, 31, 0x45AC90u);
    ctx->pc = 0x459CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459CE0u, 0x45AC88u, 0x45AC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45AC90u;
label_45ac90:
    // 0x45ac90: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x45ac90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x45ac94: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x45AC94u;
    {
        const bool branch_taken_0x45ac94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x45ac94) {
            ctx->pc = 0x45AC30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45ac30;
        }
    }
    ctx->pc = 0x45AC9Cu;
    // 0x45ac9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45ac9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45aca0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45aca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45aca4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45aca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x45aca8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45aca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45acac: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x45acacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x45acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x45ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45ACB8u;
    // 0x45acb8: 0x0  nop
    ctx->pc = 0x45acb8u;
    // NOP
    // 0x45acbc: 0x0  nop
    ctx->pc = 0x45acbcu;
    // NOP
    ctx->pc = 0x45acc0u;
}
