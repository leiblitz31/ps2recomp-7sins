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

// Function: sub_001A6F20
// Address: 0x1a6f20 - 0x1a6f50
void sub_001A6F20_0x1a6f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6F20_0x1a6f20");
#endif

    ctx->pc = 0x1a6f20u;

    // 0x1a6f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a6f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a6f28: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1a6f28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a6f2c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1a6f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6f30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6f34: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1a6f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1a6f38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a6f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a6f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6F44u;
    // 0x1a6f44: 0x0  nop
    ctx->pc = 0x1a6f44u;
    // NOP
    // 0x1a6f48: 0x0  nop
    ctx->pc = 0x1a6f48u;
    // NOP
    // 0x1a6f4c: 0x0  nop
    ctx->pc = 0x1a6f4cu;
    // NOP
    ctx->pc = 0x1a6f50u;
}
