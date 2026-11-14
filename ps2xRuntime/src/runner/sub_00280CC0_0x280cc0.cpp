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

// Function: sub_00280CC0
// Address: 0x280cc0 - 0x280d30
void sub_00280CC0_0x280cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280CC0_0x280cc0");
#endif

    switch (ctx->pc) {
        case 0x280d00u: goto label_280d00;
        default: break;
    }

    ctx->pc = 0x280cc0u;

    // 0x280cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280cc4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x280cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x280cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x280cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x280ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x280cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x280cd0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x280cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x280cd4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x280cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280cd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x280cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280cdc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x280cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x280ce0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x280CE0u;
    {
        const bool branch_taken_0x280ce0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x280ce0) {
            ctx->pc = 0x280CF4u;
            goto label_280cf4;
        }
    }
    ctx->pc = 0x280CE8u;
    // 0x280ce8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x280ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x280CECu;
    {
        const bool branch_taken_0x280cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x280cec) {
            ctx->pc = 0x280D04u;
            goto label_280d04;
        }
    }
    ctx->pc = 0x280CF4u;
label_280cf4:
    // 0x280cf4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x280cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280cf8: 0xc0a09e4  jal         func_282790
    ctx->pc = 0x280CF8u;
    SET_GPR_U32(ctx, 31, 0x280D00u);
    ctx->pc = 0x282790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282790u, 0x280CF8u, 0x280D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280D00u;
label_280d00:
    // 0x280d00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x280d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_280d04:
    // 0x280d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280d08: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x280d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x280d0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x280d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x280d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280d14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280d14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280d1c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280d20: 0x3e00008  jr          $ra
    ctx->pc = 0x280D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280D28u;
    // 0x280d28: 0x0  nop
    ctx->pc = 0x280d28u;
    // NOP
    // 0x280d2c: 0x0  nop
    ctx->pc = 0x280d2cu;
    // NOP
    ctx->pc = 0x280d30u;
}
