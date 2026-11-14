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

// Function: sub_00115930
// Address: 0x115930 - 0x115960
void sub_00115930_0x115930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115930_0x115930");
#endif

    ctx->pc = 0x115930u;

    // 0x115930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115934: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x115934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x115938: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x115938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x11593c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x11593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115940: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x115940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115944: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x115944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115948: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x115948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x11594c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115950: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x115950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x115954: 0x3e00008  jr          $ra
    ctx->pc = 0x115954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11595Cu;
    // 0x11595c: 0x0  nop
    ctx->pc = 0x11595cu;
    // NOP
    ctx->pc = 0x115960u;
}
