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

// Function: sub_00197FB0
// Address: 0x197fb0 - 0x197fe0
void sub_00197FB0_0x197fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197FB0_0x197fb0");
#endif

    ctx->pc = 0x197fb0u;

    // 0x197fb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197fb4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x197fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x197fb8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x197fb8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x197fbc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x197fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197fc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x197fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197fc4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x197fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x197fc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x197fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x197fcc: 0x3e00008  jr          $ra
    ctx->pc = 0x197FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x197FCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x197FD4u;
    // 0x197fd4: 0x0  nop
    ctx->pc = 0x197fd4u;
    // NOP
    // 0x197fd8: 0x0  nop
    ctx->pc = 0x197fd8u;
    // NOP
    // 0x197fdc: 0x0  nop
    ctx->pc = 0x197fdcu;
    // NOP
    ctx->pc = 0x197fe0u;
}
