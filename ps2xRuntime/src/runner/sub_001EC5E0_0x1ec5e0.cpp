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

// Function: sub_001EC5E0
// Address: 0x1ec5e0 - 0x1ec630
void sub_001EC5E0_0x1ec5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC5E0_0x1ec5e0");
#endif

    ctx->pc = 0x1ec5e0u;

    // 0x1ec5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ec5e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1ec5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1ec5e8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ec5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1ec5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ec5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec5f0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec5f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1ec5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1ec5f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ec5f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ec5fc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec600: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1ec600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1ec604: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec608: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1ec608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ec60c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec610: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ec610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1ec614: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec618: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1ec618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1ec61c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ec61cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec620: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ec624: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC62Cu;
    // 0x1ec62c: 0x0  nop
    ctx->pc = 0x1ec62cu;
    // NOP
    ctx->pc = 0x1ec630u;
}
