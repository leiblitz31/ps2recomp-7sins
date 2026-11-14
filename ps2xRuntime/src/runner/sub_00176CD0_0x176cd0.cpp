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

// Function: sub_00176CD0
// Address: 0x176cd0 - 0x176d10
void sub_00176CD0_0x176cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176CD0_0x176cd0");
#endif

    ctx->pc = 0x176cd0u;

    // 0x176cd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176cd4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176cd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x176cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x176cdc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ce0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x176ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x176ce4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ce8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x176ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x176cec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cf0: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x176cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x176cf4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cf8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x176cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x176cfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176d00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x176d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176d04: 0x3e00008  jr          $ra
    ctx->pc = 0x176D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176D0Cu;
    // 0x176d0c: 0x0  nop
    ctx->pc = 0x176d0cu;
    // NOP
    ctx->pc = 0x176d10u;
}
