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

// Function: sub_00109A80
// Address: 0x109a80 - 0x109ab0
void sub_00109A80_0x109a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109A80_0x109a80");
#endif

    ctx->pc = 0x109a80u;

    // 0x109a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109a84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x109a84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x109a88: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x109a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x109a8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x109a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x109a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x109a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x109a98: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x109a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109a9c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x109a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x109aa0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x109aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x109aa4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x109aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x109aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x109AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109AB0u;
}
