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

// Function: sub_00269660
// Address: 0x269660 - 0x2696a0
void sub_00269660_0x269660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269660_0x269660");
#endif

    ctx->pc = 0x269660u;

    // 0x269660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x269660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x269664: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x269664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x269668: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x269668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26966c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26966cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269670: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x269670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x269674: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x269674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269678: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x269678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26967c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26967cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x269680: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x269680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x269684: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x269684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269688: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x269688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x26968c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26968cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x269690: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x269690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x269694: 0x3e00008  jr          $ra
    ctx->pc = 0x269694u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269694u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26969Cu;
    // 0x26969c: 0x0  nop
    ctx->pc = 0x26969cu;
    // NOP
    ctx->pc = 0x2696a0u;
}
