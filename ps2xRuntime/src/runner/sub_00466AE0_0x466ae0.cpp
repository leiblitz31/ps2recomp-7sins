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

// Function: sub_00466AE0
// Address: 0x466ae0 - 0x466b10
void sub_00466AE0_0x466ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00466AE0_0x466ae0");
#endif

    switch (ctx->pc) {
        case 0x466b00u: goto label_466b00;
        default: break;
    }

    ctx->pc = 0x466ae0u;

    // 0x466ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x466ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x466ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x466ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x466ae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x466ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x466aec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x466aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x466af0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x466af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x466af4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x466af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x466af8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x466AF8u;
    SET_GPR_U32(ctx, 31, 0x466B00u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x466AF8u, 0x466B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x466B00u;
label_466b00:
    // 0x466b00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x466b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x466b04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x466b04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x466b08: 0x3e00008  jr          $ra
    ctx->pc = 0x466B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x466B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x466B10u;
}
