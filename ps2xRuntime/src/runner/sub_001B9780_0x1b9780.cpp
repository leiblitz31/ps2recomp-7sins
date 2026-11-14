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

// Function: sub_001B9780
// Address: 0x1b9780 - 0x1b97d0
void sub_001B9780_0x1b9780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9780_0x1b9780");
#endif

    ctx->pc = 0x1b9780u;

    // 0x1b9780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b9784: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b9784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b9788: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b9788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1b978c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b978cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9790: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9794: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b9794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1b9798: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b979c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1b979cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1b97a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b97a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b97a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b97a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b97a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1b97a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1b97ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b97acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b97b0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1b97b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1b97b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b97b8: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1b97b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1b97bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b97bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b97c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b97c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b97c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B97C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B97C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B97CCu;
    // 0x1b97cc: 0x0  nop
    ctx->pc = 0x1b97ccu;
    // NOP
    ctx->pc = 0x1b97d0u;
}
