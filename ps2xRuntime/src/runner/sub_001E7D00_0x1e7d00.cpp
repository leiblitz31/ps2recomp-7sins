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

// Function: sub_001E7D00
// Address: 0x1e7d00 - 0x1e7d40
void sub_001E7D00_0x1e7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7D00_0x1e7d00");
#endif

    switch (ctx->pc) {
        case 0x1e7d20u: goto label_1e7d20;
        default: break;
    }

    ctx->pc = 0x1e7d00u;

    // 0x1e7d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e7d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e7d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e7d08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e7d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e7d0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e7d10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e7d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7d14: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e7d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7d18: 0xc079f50  jal         func_1E7D40
    ctx->pc = 0x1E7D18u;
    SET_GPR_U32(ctx, 31, 0x1E7D20u);
    ctx->pc = 0x1E7D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7D40u, 0x1E7D18u, 0x1E7D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7D20u;
label_1e7d20:
    // 0x1e7d20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7d24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7d24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7d28: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e7d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e7d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7D2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7D2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7D34u;
    // 0x1e7d34: 0x0  nop
    ctx->pc = 0x1e7d34u;
    // NOP
    // 0x1e7d38: 0x0  nop
    ctx->pc = 0x1e7d38u;
    // NOP
    // 0x1e7d3c: 0x0  nop
    ctx->pc = 0x1e7d3cu;
    // NOP
    ctx->pc = 0x1e7d40u;
}
