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

// Function: sub_00155B50
// Address: 0x155b50 - 0x155ba0
void sub_00155B50_0x155b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155B50_0x155b50");
#endif

    switch (ctx->pc) {
        case 0x155b70u: goto label_155b70;
        case 0x155b80u: goto label_155b80;
        default: break;
    }

    ctx->pc = 0x155b50u;

    // 0x155b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x155b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x155b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x155b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x155b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x155b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x155b5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x155b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x155b60: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x155b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x155b64: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x155b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x155b68: 0xc055fa4  jal         func_157E90
    ctx->pc = 0x155B68u;
    SET_GPR_U32(ctx, 31, 0x155B70u);
    ctx->pc = 0x157E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E90u, 0x155B68u, 0x155B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B70u;
label_155b70:
    // 0x155b70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x155b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x155b74: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x155b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x155b78: 0xc055fa4  jal         func_157E90
    ctx->pc = 0x155B78u;
    SET_GPR_U32(ctx, 31, 0x155B80u);
    ctx->pc = 0x157E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157E90u, 0x155B78u, 0x155B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155B80u;
label_155b80:
    // 0x155b80: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x155b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x155b84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x155b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x155b88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x155b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155b8c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x155b8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x155b90: 0x3e00008  jr          $ra
    ctx->pc = 0x155B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155B98u;
    // 0x155b98: 0x0  nop
    ctx->pc = 0x155b98u;
    // NOP
    // 0x155b9c: 0x0  nop
    ctx->pc = 0x155b9cu;
    // NOP
    ctx->pc = 0x155ba0u;
}
