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

// Function: sub_004817A0
// Address: 0x4817a0 - 0x4817d0
void sub_004817A0_0x4817a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004817A0_0x4817a0");
#endif

    ctx->pc = 0x4817a0u;

    // 0x4817a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4817a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4817a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4817a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4817a8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x4817a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x4817ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4817acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4817b0: 0xaf83b588  sw          $v1, -0x4A78($gp)
    ctx->pc = 0x4817b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948232), GPR_U32(ctx, 3));
    // 0x4817b4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4817b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4817b8: 0xaf83b58c  sw          $v1, -0x4A74($gp)
    ctx->pc = 0x4817b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948236), GPR_U32(ctx, 3));
    // 0x4817bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x4817bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4817c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4817C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4817C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4817C8u;
    // 0x4817c8: 0x0  nop
    ctx->pc = 0x4817c8u;
    // NOP
    // 0x4817cc: 0x0  nop
    ctx->pc = 0x4817ccu;
    // NOP
    ctx->pc = 0x4817d0u;
}
