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

// Function: sub_001414C0
// Address: 0x1414c0 - 0x141500
void sub_001414C0_0x1414c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001414C0_0x1414c0");
#endif

    ctx->pc = 0x1414c0u;

    // 0x1414c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1414c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1414c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1414c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1414c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1414c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1414cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1414ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414d0: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x1414d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1414d4: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x1414d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x1414d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1414d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1414dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1414dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414e0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1414e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x1414e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1414e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1414e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1414e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414ec: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1414ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1414f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1414f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1414f4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1414f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1414f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1414F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1414F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141500u;
}
