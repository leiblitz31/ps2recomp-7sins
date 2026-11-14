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

// Function: sub_00176C90
// Address: 0x176c90 - 0x176cd0
void sub_00176C90_0x176c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176C90_0x176c90");
#endif

    ctx->pc = 0x176c90u;

    // 0x176c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x176c94: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x176c98: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x176c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x176c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x176c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176ca0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x176ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176ca4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176ca8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x176ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x176cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x176cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x176cb0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x176cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x176cb4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cb8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x176cb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x176cbc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x176cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x176cc0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x176cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x176cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x176CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176CCCu;
    // 0x176ccc: 0x0  nop
    ctx->pc = 0x176cccu;
    // NOP
    ctx->pc = 0x176cd0u;
}
