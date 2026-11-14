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

// Function: sub_002CFEA0
// Address: 0x2cfea0 - 0x2cfef0
void sub_002CFEA0_0x2cfea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFEA0_0x2cfea0");
#endif

    ctx->pc = 0x2cfea0u;

    // 0x2cfea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cfea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cfea4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cfea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cfea8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cfea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cfeac: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x2cfeacu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2cfeb0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2cfeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2cfeb4: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x2cfeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cfeb8: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2cfeb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cfebc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cfebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cfec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfec4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2CFEC4u;
    {
        const bool branch_taken_0x2cfec4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cfec4) {
            ctx->pc = 0x2CFEDCu;
            goto label_2cfedc;
        }
    }
    ctx->pc = 0x2CFECCu;
    // 0x2cfecc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cfeccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cfed0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2cfed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2cfed4: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x2cfed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2cfed8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x2cfed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_2cfedc:
    // 0x2cfedc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cfedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfee0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cfee0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfee4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cfee4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cfee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFEF0u;
}
