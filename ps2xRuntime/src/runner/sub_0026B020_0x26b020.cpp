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

// Function: sub_0026B020
// Address: 0x26b020 - 0x26b060
void sub_0026B020_0x26b020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B020_0x26b020");
#endif

    ctx->pc = 0x26b020u;

    // 0x26b020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26b024: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26b024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26b028: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x26b028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x26b02c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b030: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x26b030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26b034: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b038: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26b038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x26b03c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b040: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x26b040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x26b044: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b048: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26b04c: 0x3e00008  jr          $ra
    ctx->pc = 0x26B04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B054u;
    // 0x26b054: 0x0  nop
    ctx->pc = 0x26b054u;
    // NOP
    // 0x26b058: 0x0  nop
    ctx->pc = 0x26b058u;
    // NOP
    // 0x26b05c: 0x0  nop
    ctx->pc = 0x26b05cu;
    // NOP
    ctx->pc = 0x26b060u;
}
