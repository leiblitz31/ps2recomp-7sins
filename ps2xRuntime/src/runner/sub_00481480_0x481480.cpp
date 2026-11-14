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

// Function: sub_00481480
// Address: 0x481480 - 0x4814b0
void sub_00481480_0x481480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481480_0x481480");
#endif

    ctx->pc = 0x481480u;

    // 0x481480: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x481480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x481484: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x481484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x481488: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x481488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48148c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48148cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481490: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x481490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481494: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x481494u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x481498: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x481498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48149c: 0x3e00008  jr          $ra
    ctx->pc = 0x48149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4814A4u;
    // 0x4814a4: 0x0  nop
    ctx->pc = 0x4814a4u;
    // NOP
    // 0x4814a8: 0x0  nop
    ctx->pc = 0x4814a8u;
    // NOP
    // 0x4814ac: 0x0  nop
    ctx->pc = 0x4814acu;
    // NOP
    ctx->pc = 0x4814b0u;
}
