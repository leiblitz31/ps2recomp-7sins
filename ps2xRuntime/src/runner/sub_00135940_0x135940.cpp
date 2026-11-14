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

// Function: sub_00135940
// Address: 0x135940 - 0x1359f0
void sub_00135940_0x135940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135940_0x135940");
#endif

    ctx->pc = 0x135940u;

    // 0x135940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x135940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x135944: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x135944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x135948: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13594c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13594cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x135950: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x135950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x135954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135958: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13595c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x13595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x135960: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x135964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135968: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13596c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x13596cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x135970: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135974: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x135974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x135978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13597c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135980: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x135980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x135984: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x135984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x135988: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135988u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13598c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135990: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x135990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x135994: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x135994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x135998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x135998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13599c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359a0: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x1359a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x1359a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359a8: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x1359a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x1359ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1359acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1359b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359b4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1359b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1359b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1359b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1359bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359c0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1359c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1359c4: 0x3c024234  lui         $v0, 0x4234
    ctx->pc = 0x1359c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16948 << 16));
    // 0x1359c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1359c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1359cc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359d0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1359d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x1359d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1359d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1359d8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359dc: 0xa043002c  sb          $v1, 0x2C($v0)
    ctx->pc = 0x1359dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 44), (uint8_t)GPR_U32(ctx, 3));
    // 0x1359e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1359e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1359e4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1359e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1359e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1359E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1359E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1359F0u;
}
