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

// Function: sub_0011C1A0
// Address: 0x11c1a0 - 0x11c1d0
void sub_0011C1A0_0x11c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C1A0_0x11c1a0");
#endif

    ctx->pc = 0x11c1a0u;

    // 0x11c1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11c1a4: 0xa3a40000  sb          $a0, 0x0($sp)
    ctx->pc = 0x11c1a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x11c1a8: 0x93a30000  lbu         $v1, 0x0($sp)
    ctx->pc = 0x11c1a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c1ac: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x11c1acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11c1b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x11c1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x11c1b4: 0xa383b9bc  sb          $v1, -0x4644($gp)
    ctx->pc = 0x11c1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949308), (uint8_t)GPR_U32(ctx, 3));
    // 0x11c1b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11C1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11C1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11C1C4u;
    // 0x11c1c4: 0x0  nop
    ctx->pc = 0x11c1c4u;
    // NOP
    // 0x11c1c8: 0x0  nop
    ctx->pc = 0x11c1c8u;
    // NOP
    // 0x11c1cc: 0x0  nop
    ctx->pc = 0x11c1ccu;
    // NOP
    ctx->pc = 0x11c1d0u;
}
