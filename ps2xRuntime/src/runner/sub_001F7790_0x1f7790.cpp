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

// Function: sub_001F7790
// Address: 0x1f7790 - 0x1f77d0
void sub_001F7790_0x1f7790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7790_0x1f7790");
#endif

    ctx->pc = 0x1f7790u;

    // 0x1f7790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1f7794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1f7798: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f7798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f779c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f779cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f77a0: 0xa06400f0  sb          $a0, 0xF0($v1)
    ctx->pc = 0x1f77a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 240), (uint8_t)GPR_U32(ctx, 4));
    // 0x1f77a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f77a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f77a8: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x1f77a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f77ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1f77acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1f77b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f77b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f77b4: 0x0  nop
    ctx->pc = 0x1f77b4u;
    // NOP
    // 0x1f77b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f77b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f77bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f77bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f77c0: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x1f77c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x1f77c4: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1f77c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f77c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F77C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F77C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F77D0u;
}
