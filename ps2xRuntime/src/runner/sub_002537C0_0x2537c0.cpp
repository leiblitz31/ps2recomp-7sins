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

// Function: sub_002537C0
// Address: 0x2537c0 - 0x253830
void sub_002537C0_0x2537c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002537C0_0x2537c0");
#endif

    ctx->pc = 0x2537c0u;

    // 0x2537c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2537c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2537c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2537c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2537c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2537c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2537ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2537d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2537d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2537d4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2537d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537d8: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2537d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2537dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2537dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2537e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2537e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537e4: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x2537e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x2537e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2537e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537ec: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x2537ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x2537f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2537f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2537f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2537f8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2537f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2537fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2537fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253800: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253804: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x253804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x253808: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x253808u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25380c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x25380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253810: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x253810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x253814: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x253814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253818: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x253818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25381c: 0x3e00008  jr          $ra
    ctx->pc = 0x25381Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25381Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253824u;
    // 0x253824: 0x0  nop
    ctx->pc = 0x253824u;
    // NOP
    // 0x253828: 0x0  nop
    ctx->pc = 0x253828u;
    // NOP
    // 0x25382c: 0x0  nop
    ctx->pc = 0x25382cu;
    // NOP
    ctx->pc = 0x253830u;
}
