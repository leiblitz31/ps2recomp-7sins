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

// Function: sub_002A2CF0
// Address: 0x2a2cf0 - 0x2a2d30
void sub_002A2CF0_0x2a2cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2CF0_0x2a2cf0");
#endif

    switch (ctx->pc) {
        case 0x2a2d20u: goto label_2a2d20;
        default: break;
    }

    ctx->pc = 0x2a2cf0u;

    // 0x2a2cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a2cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a2cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a2cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a2cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a2cfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2a2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2a2d00: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2a2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2a2d04: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2a2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2a2d08: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2a2d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a2d0c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2a2d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a2d10: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2a2d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a2d14: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x2a2d14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a2d18: 0xc0a8c10  jal         func_2A3040
    ctx->pc = 0x2A2D18u;
    SET_GPR_U32(ctx, 31, 0x2A2D20u);
    ctx->pc = 0x2A3040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3040u, 0x2A2D18u, 0x2A2D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2D20u;
label_2a2d20:
    // 0x2a2d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a2d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a2d24: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2a2d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a2d28: 0x3e00008  jr          $ra
    ctx->pc = 0x2A2D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2D30u;
}
