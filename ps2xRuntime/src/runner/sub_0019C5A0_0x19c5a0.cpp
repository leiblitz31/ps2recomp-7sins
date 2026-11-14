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

// Function: sub_0019C5A0
// Address: 0x19c5a0 - 0x19c5d0
void sub_0019C5A0_0x19c5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C5A0_0x19c5a0");
#endif

    ctx->pc = 0x19c5a0u;

    // 0x19c5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c5a4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c5a8: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x19c5a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x19c5ac: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x19c5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19c5b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5b4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x19c5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x19c5b8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x19c5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C5C4u;
    // 0x19c5c4: 0x0  nop
    ctx->pc = 0x19c5c4u;
    // NOP
    // 0x19c5c8: 0x0  nop
    ctx->pc = 0x19c5c8u;
    // NOP
    // 0x19c5cc: 0x0  nop
    ctx->pc = 0x19c5ccu;
    // NOP
    ctx->pc = 0x19c5d0u;
}
