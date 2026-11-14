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

// Function: sub_002110D0
// Address: 0x2110d0 - 0x211100
void sub_002110D0_0x2110d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002110D0_0x2110d0");
#endif

    ctx->pc = 0x2110d0u;

    // 0x2110d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2110d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2110d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2110d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2110d8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x2110d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2110dc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2110dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2110e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2110e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2110e4: 0xe460006c  swc1        $f0, 0x6C($v1)
    ctx->pc = 0x2110e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
    // 0x2110e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2110e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2110ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2110ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2110ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2110F4u;
    // 0x2110f4: 0x0  nop
    ctx->pc = 0x2110f4u;
    // NOP
    // 0x2110f8: 0x0  nop
    ctx->pc = 0x2110f8u;
    // NOP
    // 0x2110fc: 0x0  nop
    ctx->pc = 0x2110fcu;
    // NOP
    ctx->pc = 0x211100u;
}
