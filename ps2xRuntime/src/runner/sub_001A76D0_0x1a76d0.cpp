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

// Function: sub_001A76D0
// Address: 0x1a76d0 - 0x1a7710
void sub_001A76D0_0x1a76d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A76D0_0x1a76d0");
#endif

    ctx->pc = 0x1a76d0u;

    // 0x1a76d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a76d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a76d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a76d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a76d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1a76d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1a76dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a76e0: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1a76e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a76e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a76e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a76e8: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1a76e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1a76ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a76ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a76f0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x1a76f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a76f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a76f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a76f8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1a76f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1a76fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a76fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a7700: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7708u;
    // 0x1a7708: 0x0  nop
    ctx->pc = 0x1a7708u;
    // NOP
    // 0x1a770c: 0x0  nop
    ctx->pc = 0x1a770cu;
    // NOP
    ctx->pc = 0x1a7710u;
}
