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

// Function: sub_00280AD0
// Address: 0x280ad0 - 0x280b10
void sub_00280AD0_0x280ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280AD0_0x280ad0");
#endif

    ctx->pc = 0x280ad0u;

    // 0x280ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280ad4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x280ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x280ad8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x280ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x280adc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x280adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x280ae0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x280ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280ae4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280ae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x280ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x280aec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x280aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280af0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280af4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x280af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x280af8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x280af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280afc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280b00: 0x3e00008  jr          $ra
    ctx->pc = 0x280B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280B08u;
    // 0x280b08: 0x0  nop
    ctx->pc = 0x280b08u;
    // NOP
    // 0x280b0c: 0x0  nop
    ctx->pc = 0x280b0cu;
    // NOP
    ctx->pc = 0x280b10u;
}
