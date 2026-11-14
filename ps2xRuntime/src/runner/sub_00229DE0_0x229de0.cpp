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

// Function: sub_00229DE0
// Address: 0x229de0 - 0x229e10
void sub_00229DE0_0x229de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229DE0_0x229de0");
#endif

    ctx->pc = 0x229de0u;

    // 0x229de0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x229de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x229de4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x229de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x229de8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x229de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x229dec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x229decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229df0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x229df0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x229df4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x229df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229df8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x229df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x229dfc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x229dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x229e00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x229e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x229e04: 0x3e00008  jr          $ra
    ctx->pc = 0x229E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229E0Cu;
    // 0x229e0c: 0x0  nop
    ctx->pc = 0x229e0cu;
    // NOP
    ctx->pc = 0x229e10u;
}
