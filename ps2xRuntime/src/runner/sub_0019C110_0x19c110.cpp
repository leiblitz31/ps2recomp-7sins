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

// Function: sub_0019C110
// Address: 0x19c110 - 0x19c150
void sub_0019C110_0x19c110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C110_0x19c110");
#endif

    ctx->pc = 0x19c110u;

    // 0x19c110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c114: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c11c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c120: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19c120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19c124: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c128: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c12c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c130: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x19c130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x19c134: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c138: 0xa0400008  sb          $zero, 0x8($v0)
    ctx->pc = 0x19c138u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c13c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c140: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c144: 0x3e00008  jr          $ra
    ctx->pc = 0x19C144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C14Cu;
    // 0x19c14c: 0x0  nop
    ctx->pc = 0x19c14cu;
    // NOP
    ctx->pc = 0x19c150u;
}
