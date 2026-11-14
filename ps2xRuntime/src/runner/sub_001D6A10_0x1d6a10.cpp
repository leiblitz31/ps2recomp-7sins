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

// Function: sub_001D6A10
// Address: 0x1d6a10 - 0x1d6a40
void sub_001D6A10_0x1d6a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6A10_0x1d6a10");
#endif

    switch (ctx->pc) {
        case 0x1d6a2cu: goto label_1d6a2c;
        default: break;
    }

    ctx->pc = 0x1d6a10u;

    // 0x1d6a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d6a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d6a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d6a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1d6a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1d6a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1d6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d6a20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d6a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d6a24: 0xc075a90  jal         func_1D6A40
    ctx->pc = 0x1D6A24u;
    SET_GPR_U32(ctx, 31, 0x1D6A2Cu);
    ctx->pc = 0x1D6A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A40u, 0x1D6A24u, 0x1D6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6A2Cu;
label_1d6a2c:
    // 0x1d6a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d6a30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d6a34: 0x3e00008  jr          $ra
    ctx->pc = 0x1D6A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D6A3Cu;
    // 0x1d6a3c: 0x0  nop
    ctx->pc = 0x1d6a3cu;
    // NOP
    ctx->pc = 0x1d6a40u;
}
