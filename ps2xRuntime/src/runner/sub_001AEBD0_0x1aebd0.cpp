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

// Function: sub_001AEBD0
// Address: 0x1aebd0 - 0x1aec10
void sub_001AEBD0_0x1aebd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEBD0_0x1aebd0");
#endif

    ctx->pc = 0x1aebd0u;

    // 0x1aebd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aebd4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1aebd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1aebd8: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x1aebd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1aebdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aebe0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1aebe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aebe4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1aebe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aebe8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1aebe8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1aebec: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1aebecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aebf0: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x1aebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aebf4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aebf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1aebf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1aebfc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x1aebfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aec00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aec00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aec04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1aec04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1aec08: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEC10u;
}
