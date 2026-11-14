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

// Function: sub_002A2250
// Address: 0x2a2250 - 0x2a2280
void sub_002A2250_0x2a2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2250_0x2a2250");
#endif

    ctx->pc = 0x2a2250u;

    // 0x2a2250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a2254: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a2254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a2258: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2a2258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2a225c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a225cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2260: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a2260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2264: 0xac640198  sw          $a0, 0x198($v1)
    ctx->pc = 0x2a2264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 408), GPR_U32(ctx, 4));
    // 0x2a2268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a2268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a226c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A226Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A226Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2274u;
    // 0x2a2274: 0x0  nop
    ctx->pc = 0x2a2274u;
    // NOP
    // 0x2a2278: 0x0  nop
    ctx->pc = 0x2a2278u;
    // NOP
    // 0x2a227c: 0x0  nop
    ctx->pc = 0x2a227cu;
    // NOP
    ctx->pc = 0x2a2280u;
}
