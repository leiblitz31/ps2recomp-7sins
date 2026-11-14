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

// Function: sub_0010EA00
// Address: 0x10ea00 - 0x10ea40
void sub_0010EA00_0x10ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA00_0x10ea00");
#endif

    switch (ctx->pc) {
        case 0x10ea1cu: goto label_10ea1c;
        case 0x10ea2cu: goto label_10ea2c;
        default: break;
    }

    ctx->pc = 0x10ea00u;

    // 0x10ea00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ea04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ea04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ea08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ea08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ea0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10ea10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ea14: 0xc043834  jal         func_10E0D0
    ctx->pc = 0x10EA14u;
    SET_GPR_U32(ctx, 31, 0x10EA1Cu);
    ctx->pc = 0x10E0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0D0u, 0x10EA14u, 0x10EA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA1Cu;
label_10ea1c:
    // 0x10ea1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ea1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ea20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10ea20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ea24: 0xc043980  jal         func_10E600
    ctx->pc = 0x10EA24u;
    SET_GPR_U32(ctx, 31, 0x10EA2Cu);
    ctx->pc = 0x10E600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E600u, 0x10EA24u, 0x10EA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EA2Cu;
label_10ea2c:
    // 0x10ea2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ea2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ea30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10ea30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10ea34: 0x3e00008  jr          $ra
    ctx->pc = 0x10EA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EA3Cu;
    // 0x10ea3c: 0x0  nop
    ctx->pc = 0x10ea3cu;
    // NOP
    ctx->pc = 0x10ea40u;
}
