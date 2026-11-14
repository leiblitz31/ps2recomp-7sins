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

// Function: sub_0019C240
// Address: 0x19c240 - 0x19c2f0
void sub_0019C240_0x19c240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C240_0x19c240");
#endif

    ctx->pc = 0x19c240u;

    // 0x19c240: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c244: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c248: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c24c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x19c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x19c250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c254: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c258: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x19c258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x19c25c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19c260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c264: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c268: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x19c268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x19c26c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x19c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
    // 0x19c270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c274: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c278: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x19c278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x19c27c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c280: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c284: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x19c284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x19c288: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c28c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c290: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x19c290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x19c294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c298: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c29c: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x19c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x19c2a0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c2a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2a8: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x19c2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x19c2ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2b0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x19c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x19c2b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2b8: 0xa0400028  sb          $zero, 0x28($v0)
    ctx->pc = 0x19c2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c2bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c2bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c2c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2c4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x19c2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x19c2c8: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x19c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x19c2cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c2ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c2d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2d4: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x19c2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x19c2d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2dc: 0xa0400029  sb          $zero, 0x29($v0)
    ctx->pc = 0x19c2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x19c2e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x19c2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c2e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19c2e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C2F0u;
}
