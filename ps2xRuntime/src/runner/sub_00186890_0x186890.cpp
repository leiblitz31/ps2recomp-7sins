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

// Function: sub_00186890
// Address: 0x186890 - 0x1868c0
void sub_00186890_0x186890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186890_0x186890");
#endif

    ctx->pc = 0x186890u;

    // 0x186890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x186894: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x186894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x186898: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x186898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18689c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x18689cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1868a0: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1868a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
    // 0x1868a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1868a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1868a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1868a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1868ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1868ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1868ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1868B4u;
    // 0x1868b4: 0x0  nop
    ctx->pc = 0x1868b4u;
    // NOP
    // 0x1868b8: 0x0  nop
    ctx->pc = 0x1868b8u;
    // NOP
    // 0x1868bc: 0x0  nop
    ctx->pc = 0x1868bcu;
    // NOP
    ctx->pc = 0x1868c0u;
}
