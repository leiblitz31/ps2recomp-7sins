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

// Function: sub_00457CC0
// Address: 0x457cc0 - 0x457d00
void sub_00457CC0_0x457cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457CC0_0x457cc0");
#endif

    ctx->pc = 0x457cc0u;

    // 0x457cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x457cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x457cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x457cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x457ccc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x457cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x457cd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457cd4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x457cd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x457cd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x457cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x457cdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x457cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x457ce0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x457ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x457ce4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x457ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x457ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x457cec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x457cecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x457cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x457CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x457CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x457CF8u;
    // 0x457cf8: 0x0  nop
    ctx->pc = 0x457cf8u;
    // NOP
    // 0x457cfc: 0x0  nop
    ctx->pc = 0x457cfcu;
    // NOP
    ctx->pc = 0x457d00u;
}
