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

// Function: sub_0025A270
// Address: 0x25a270 - 0x25a2a0
void sub_0025A270_0x25a270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A270_0x25a270");
#endif

    ctx->pc = 0x25a270u;

    // 0x25a270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a274: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25a274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25a278: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25a27c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25a27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a280: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25a280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a284: 0xac640188  sw          $a0, 0x188($v1)
    ctx->pc = 0x25a284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 392), GPR_U32(ctx, 4));
    // 0x25a288: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25a28c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A294u;
    // 0x25a294: 0x0  nop
    ctx->pc = 0x25a294u;
    // NOP
    // 0x25a298: 0x0  nop
    ctx->pc = 0x25a298u;
    // NOP
    // 0x25a29c: 0x0  nop
    ctx->pc = 0x25a29cu;
    // NOP
    ctx->pc = 0x25a2a0u;
}
