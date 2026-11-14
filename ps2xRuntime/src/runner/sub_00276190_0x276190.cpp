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

// Function: sub_00276190
// Address: 0x276190 - 0x2761d0
void sub_00276190_0x276190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276190_0x276190");
#endif

    ctx->pc = 0x276190u;

    // 0x276190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x276194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x276194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x276198: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x276198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27619c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x27619cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2761a0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2761a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2761a4: 0x0  nop
    ctx->pc = 0x2761a4u;
    // NOP
    // 0x2761a8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2761a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2761ac: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2761ACu;
    {
        const bool branch_taken_0x2761ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2761ac) {
            ctx->pc = 0x2761C0u;
            goto label_2761c0;
        }
    }
    ctx->pc = 0x2761B4u;
    // 0x2761b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2761b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2761b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2761b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2761bc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2761bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2761c0:
    // 0x2761c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2761c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2761c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2761C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2761C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2761CCu;
    // 0x2761cc: 0x0  nop
    ctx->pc = 0x2761ccu;
    // NOP
    ctx->pc = 0x2761d0u;
}
