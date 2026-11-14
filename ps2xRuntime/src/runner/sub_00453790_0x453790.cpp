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

// Function: sub_00453790
// Address: 0x453790 - 0x453860
void sub_00453790_0x453790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453790_0x453790");
#endif

    ctx->pc = 0x453790u;

    // 0x453790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x453790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x453794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x453794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x453798: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x453798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45379c: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x45379cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x4537a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4537a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4537a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537a8: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x4537a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x4537ac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537b0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x4537b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x4537b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537b8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x4537b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x4537bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4537bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4537c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537c4: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x4537c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x4537c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537cc: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x4537ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x4537d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537d4: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x4537d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x4537d8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4537d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4537dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537e0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x4537e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x4537e4: 0xc780816c  lwc1        $f0, -0x7E94($gp)
    ctx->pc = 0x4537e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4537e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537ec: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x4537ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x4537f0: 0xc7808170  lwc1        $f0, -0x7E90($gp)
    ctx->pc = 0x4537f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4537f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4537f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4537f8: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x4537f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x4537fc: 0xc7808174  lwc1        $f0, -0x7E8C($gp)
    ctx->pc = 0x4537fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453800: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x453800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453804: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x453804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x453808: 0xc7808178  lwc1        $f0, -0x7E88($gp)
    ctx->pc = 0x453808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45380c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45380cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453810: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x453810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x453814: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x453814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x453818: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45381c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45381cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453820: 0xe440003c  swc1        $f0, 0x3C($v0)
    ctx->pc = 0x453820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
    // 0x453824: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x453824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x453828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45382c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45382cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453830: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x453830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x453834: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x453834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x453838: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x453838u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x45383c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x45383cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453840: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x453840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x453844: 0xc780817c  lwc1        $f0, -0x7E84($gp)
    ctx->pc = 0x453844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x453848: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x453848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x45384c: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x45384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x453850: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x453850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453854: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x453854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x453858: 0x3e00008  jr          $ra
    ctx->pc = 0x453858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453860u;
}
