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

// Function: sub_00261E00
// Address: 0x261e00 - 0x261e40
void sub_00261E00_0x261e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261E00_0x261e00");
#endif

    switch (ctx->pc) {
        case 0x261e20u: goto label_261e20;
        default: break;
    }

    ctx->pc = 0x261e00u;

    // 0x261e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x261e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x261e0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x261e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x261e10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x261e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x261e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261e18: 0xc098790  jal         func_261E40
    ctx->pc = 0x261E18u;
    SET_GPR_U32(ctx, 31, 0x261E20u);
    ctx->pc = 0x261E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261E40u, 0x261E18u, 0x261E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261E20u;
label_261e20:
    // 0x261e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261e28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x261e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x261e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x261E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261E34u;
    // 0x261e34: 0x0  nop
    ctx->pc = 0x261e34u;
    // NOP
    // 0x261e38: 0x0  nop
    ctx->pc = 0x261e38u;
    // NOP
    // 0x261e3c: 0x0  nop
    ctx->pc = 0x261e3cu;
    // NOP
    ctx->pc = 0x261e40u;
}
