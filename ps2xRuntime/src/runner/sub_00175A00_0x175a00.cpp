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

// Function: sub_00175A00
// Address: 0x175a00 - 0x175a30
void sub_00175A00_0x175a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175A00_0x175a00");
#endif

    ctx->pc = 0x175a00u;

    // 0x175a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175a04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x175a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x175a08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x175a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x175a0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x175a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175a10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x175a14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175a18: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x175a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175a1c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x175a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x175a20: 0x3e00008  jr          $ra
    ctx->pc = 0x175A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175A28u;
    // 0x175a28: 0x0  nop
    ctx->pc = 0x175a28u;
    // NOP
    // 0x175a2c: 0x0  nop
    ctx->pc = 0x175a2cu;
    // NOP
    ctx->pc = 0x175a30u;
}
