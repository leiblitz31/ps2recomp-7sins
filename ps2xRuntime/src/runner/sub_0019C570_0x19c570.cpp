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

// Function: sub_0019C570
// Address: 0x19c570 - 0x19c5a0
void sub_0019C570_0x19c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C570_0x19c570");
#endif

    ctx->pc = 0x19c570u;

    // 0x19c570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c574: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19c574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19c578: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x19c578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19c57c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c580: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x19c580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x19c584: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19c584u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c588: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x19c588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c58c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x19c58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x19c590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19c594: 0x3e00008  jr          $ra
    ctx->pc = 0x19C594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C59Cu;
    // 0x19c59c: 0x0  nop
    ctx->pc = 0x19c59cu;
    // NOP
    ctx->pc = 0x19c5a0u;
}
