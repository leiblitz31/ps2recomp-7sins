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

// Function: sub_00216070
// Address: 0x216070 - 0x2160e0
void sub_00216070_0x216070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216070_0x216070");
#endif

    ctx->pc = 0x216070u;

    // 0x216070: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216074: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21607c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x21607cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216080: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x216080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x216084: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216084u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216088: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21608c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x21608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x216090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x216090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216094: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216098: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x216098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21609c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x21609cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2160a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2160a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2160a4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2160a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2160a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2160ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2160acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2160b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2160b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2160b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2160b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160b8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2160b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2160bc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2160bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160c0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2160c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2160c4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2160c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2160c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2160c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2160cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2160CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2160CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2160D4u;
    // 0x2160d4: 0x0  nop
    ctx->pc = 0x2160d4u;
    // NOP
    // 0x2160d8: 0x0  nop
    ctx->pc = 0x2160d8u;
    // NOP
    // 0x2160dc: 0x0  nop
    ctx->pc = 0x2160dcu;
    // NOP
    ctx->pc = 0x2160e0u;
}
