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

// Function: sub_0025B900
// Address: 0x25b900 - 0x25b930
void sub_0025B900_0x25b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B900_0x25b900");
#endif

    ctx->pc = 0x25b900u;

    // 0x25b900: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25b900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b904: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25b904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25b908: 0xa3a50010  sb          $a1, 0x10($sp)
    ctx->pc = 0x25b908u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 5));
    // 0x25b90c: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x25b90cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b910: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b914: 0xa0640113  sb          $a0, 0x113($v1)
    ctx->pc = 0x25b914u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 275), (uint8_t)GPR_U32(ctx, 4));
    // 0x25b918: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25b91c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B924u;
    // 0x25b924: 0x0  nop
    ctx->pc = 0x25b924u;
    // NOP
    // 0x25b928: 0x0  nop
    ctx->pc = 0x25b928u;
    // NOP
    // 0x25b92c: 0x0  nop
    ctx->pc = 0x25b92cu;
    // NOP
    ctx->pc = 0x25b930u;
}
