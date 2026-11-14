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

// Function: sub_00299B50
// Address: 0x299b50 - 0x299bb0
void sub_00299B50_0x299b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299B50_0x299b50");
#endif

    switch (ctx->pc) {
        case 0x299b80u: goto label_299b80;
        case 0x299b94u: goto label_299b94;
        default: break;
    }

    ctx->pc = 0x299b50u;

    // 0x299b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299b5c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x299b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x299b60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299b64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x299b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299b68: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x299b68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299b6c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x299b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299b70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b78: 0xc0e39e0  jal         func_38E780
    ctx->pc = 0x299B78u;
    SET_GPR_U32(ctx, 31, 0x299B80u);
    ctx->pc = 0x38E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E780u, 0x299B78u, 0x299B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B80u;
label_299b80:
    // 0x299b80: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299B80u;
    {
        const bool branch_taken_0x299b80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x299b80) {
            ctx->pc = 0x299B94u;
            goto label_299b94;
        }
    }
    ctx->pc = 0x299B88u;
    // 0x299b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x299b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299b8c: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x299B8Cu;
    SET_GPR_U32(ctx, 31, 0x299B94u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x299B8Cu, 0x299B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299B94u;
label_299b94:
    // 0x299b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299b9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299b9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x299BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299BA8u;
    // 0x299ba8: 0x0  nop
    ctx->pc = 0x299ba8u;
    // NOP
    // 0x299bac: 0x0  nop
    ctx->pc = 0x299bacu;
    // NOP
    ctx->pc = 0x299bb0u;
}
