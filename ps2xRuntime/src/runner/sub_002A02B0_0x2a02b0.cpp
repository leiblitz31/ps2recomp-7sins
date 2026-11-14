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

// Function: sub_002A02B0
// Address: 0x2a02b0 - 0x2a02e0
void sub_002A02B0_0x2a02b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A02B0_0x2a02b0");
#endif

    ctx->pc = 0x2a02b0u;

    // 0x2a02b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a02b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a02b4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2a02b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2a02b8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2a02b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2a02bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2a02bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a02c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a02c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a02c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2a02c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a02c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a02cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a02ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a02d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A02D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A02D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A02D8u;
    // 0x2a02d8: 0x0  nop
    ctx->pc = 0x2a02d8u;
    // NOP
    // 0x2a02dc: 0x0  nop
    ctx->pc = 0x2a02dcu;
    // NOP
    ctx->pc = 0x2a02e0u;
}
