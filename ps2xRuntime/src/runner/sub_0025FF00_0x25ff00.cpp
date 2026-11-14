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

// Function: sub_0025FF00
// Address: 0x25ff00 - 0x25ff40
void sub_0025FF00_0x25ff00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF00_0x25ff00");
#endif

    switch (ctx->pc) {
        case 0x25ff28u: goto label_25ff28;
        default: break;
    }

    ctx->pc = 0x25ff00u;

    // 0x25ff00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25ff00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25ff04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ff04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ff08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25ff0c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25ff10: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x25ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x25ff14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ff18: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ff1c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25ff1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25ff20: 0xc041934  jal         func_1064D0
    ctx->pc = 0x25FF20u;
    SET_GPR_U32(ctx, 31, 0x25FF28u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x25FF20u, 0x25FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FF28u;
label_25ff28:
    // 0x25ff28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ff28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff2c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x25ff2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25ff30: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF38u;
    // 0x25ff38: 0x0  nop
    ctx->pc = 0x25ff38u;
    // NOP
    // 0x25ff3c: 0x0  nop
    ctx->pc = 0x25ff3cu;
    // NOP
    ctx->pc = 0x25ff40u;
}
