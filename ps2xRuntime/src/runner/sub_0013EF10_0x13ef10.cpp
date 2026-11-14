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

// Function: sub_0013EF10
// Address: 0x13ef10 - 0x13ef40
void sub_0013EF10_0x13ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EF10_0x13ef10");
#endif

    ctx->pc = 0x13ef10u;

    // 0x13ef10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13ef14: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13ef14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13ef18: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13ef1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ef20: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ef24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13ef24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ef28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13ef2c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x13ef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13ef30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13ef30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13ef34: 0x3e00008  jr          $ra
    ctx->pc = 0x13EF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EF34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EF3Cu;
    // 0x13ef3c: 0x0  nop
    ctx->pc = 0x13ef3cu;
    // NOP
    ctx->pc = 0x13ef40u;
}
