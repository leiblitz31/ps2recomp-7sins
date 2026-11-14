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

// Function: sub_00193790
// Address: 0x193790 - 0x1937c0
void sub_00193790_0x193790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193790_0x193790");
#endif

    ctx->pc = 0x193790u;

    // 0x193790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x193790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x193794: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x193794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x193798: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x193798u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19379c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1937a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1937a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1937a4: 0xe4600054  swc1        $f0, 0x54($v1)
    ctx->pc = 0x1937a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 84), bits); }
    // 0x1937a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1937a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1937ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1937ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1937ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1937B4u;
    // 0x1937b4: 0x0  nop
    ctx->pc = 0x1937b4u;
    // NOP
    // 0x1937b8: 0x0  nop
    ctx->pc = 0x1937b8u;
    // NOP
    // 0x1937bc: 0x0  nop
    ctx->pc = 0x1937bcu;
    // NOP
    ctx->pc = 0x1937c0u;
}
