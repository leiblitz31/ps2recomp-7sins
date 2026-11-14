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

// Function: sub_0013B210
// Address: 0x13b210 - 0x13b240
void sub_0013B210_0x13b210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B210_0x13b210");
#endif

    ctx->pc = 0x13b210u;

    // 0x13b210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13b210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13b214: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13b214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13b218: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13b218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13b21c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b220: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b224: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x13b224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
    // 0x13b228: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13b228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b22c: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x13b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
    // 0x13b230: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b234: 0x3e00008  jr          $ra
    ctx->pc = 0x13B234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B23Cu;
    // 0x13b23c: 0x0  nop
    ctx->pc = 0x13b23cu;
    // NOP
    ctx->pc = 0x13b240u;
}
