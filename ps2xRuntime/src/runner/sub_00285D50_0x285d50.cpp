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

// Function: sub_00285D50
// Address: 0x285d50 - 0x285d80
void sub_00285D50_0x285d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285D50_0x285d50");
#endif

    ctx->pc = 0x285d50u;

    // 0x285d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x285d54: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x285d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x285d58: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x285d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x285d5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x285d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285d60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285d64: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x285d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x285d68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x285d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285d6c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x285d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x285d70: 0x3e00008  jr          $ra
    ctx->pc = 0x285D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x285D78u;
    // 0x285d78: 0x0  nop
    ctx->pc = 0x285d78u;
    // NOP
    // 0x285d7c: 0x0  nop
    ctx->pc = 0x285d7cu;
    // NOP
    ctx->pc = 0x285d80u;
}
