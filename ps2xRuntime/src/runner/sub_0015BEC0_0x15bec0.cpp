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

// Function: sub_0015BEC0
// Address: 0x15bec0 - 0x15bf10
void sub_0015BEC0_0x15bec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BEC0_0x15bec0");
#endif

    switch (ctx->pc) {
        case 0x15bef8u: goto label_15bef8;
        default: break;
    }

    ctx->pc = 0x15bec0u;

    // 0x15bec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15bec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15bec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x15bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x15becc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15beccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x15bed0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bed4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x15bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15bed8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bedc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x15bedcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x15bee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15bee4: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x15bee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x15bee8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x15bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15beec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15beecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15bef0: 0xc056fc4  jal         func_15BF10
    ctx->pc = 0x15BEF0u;
    SET_GPR_U32(ctx, 31, 0x15BEF8u);
    ctx->pc = 0x15BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BF10u, 0x15BEF0u, 0x15BEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BEF8u;
label_15bef8:
    // 0x15bef8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x15bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15befc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15befcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15bf00: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x15bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x15bf04: 0x3e00008  jr          $ra
    ctx->pc = 0x15BF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BF04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15BF0Cu;
    // 0x15bf0c: 0x0  nop
    ctx->pc = 0x15bf0cu;
    // NOP
    ctx->pc = 0x15bf10u;
}
