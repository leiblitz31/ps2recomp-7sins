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

// Function: sub_001939A0
// Address: 0x1939a0 - 0x1939d0
void sub_001939A0_0x1939a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001939A0_0x1939a0");
#endif

    ctx->pc = 0x1939a0u;

    // 0x1939a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1939a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1939a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1939a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1939a8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1939a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1939ac: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x1939acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1939b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1939b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1939b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1939B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1939BCu;
    // 0x1939bc: 0x0  nop
    ctx->pc = 0x1939bcu;
    // NOP
    // 0x1939c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1939c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1939c4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1939c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1939c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1939C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1939C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1939D0u;
}
