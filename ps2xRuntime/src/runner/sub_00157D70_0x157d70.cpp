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

// Function: sub_00157D70
// Address: 0x157d70 - 0x157da0
void sub_00157D70_0x157d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157D70_0x157d70");
#endif

    ctx->pc = 0x157d70u;

    // 0x157d70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x157d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x157d74: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x157d74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x157d78: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x157d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x157d7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x157d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157d80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x157d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d88: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x157d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x157d8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x157d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157d90: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157d94: 0x3e00008  jr          $ra
    ctx->pc = 0x157D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157D9Cu;
    // 0x157d9c: 0x0  nop
    ctx->pc = 0x157d9cu;
    // NOP
    ctx->pc = 0x157da0u;
}
