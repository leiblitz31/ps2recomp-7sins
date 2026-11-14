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

// Function: sub_0014EF10
// Address: 0x14ef10 - 0x14ef40
void sub_0014EF10_0x14ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EF10_0x14ef10");
#endif

    ctx->pc = 0x14ef10u;

    // 0x14ef10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14ef14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x14ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x14ef18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x14ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x14ef1c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x14ef1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ef20: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14ef20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x14ef28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ef2c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x14ef2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14ef30: 0x3e00008  jr          $ra
    ctx->pc = 0x14EF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EF38u;
    // 0x14ef38: 0x0  nop
    ctx->pc = 0x14ef38u;
    // NOP
    // 0x14ef3c: 0x0  nop
    ctx->pc = 0x14ef3cu;
    // NOP
    ctx->pc = 0x14ef40u;
}
