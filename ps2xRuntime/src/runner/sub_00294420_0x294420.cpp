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

// Function: sub_00294420
// Address: 0x294420 - 0x294460
void sub_00294420_0x294420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294420_0x294420");
#endif

    switch (ctx->pc) {
        case 0x294448u: goto label_294448;
        default: break;
    }

    ctx->pc = 0x294420u;

    // 0x294420: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x294424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294428: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x294428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29442c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29442cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x294430: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x294430u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x294434: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x294438: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x294438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29443c: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x29443cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x294440: 0xc0a5118  jal         func_294460
    ctx->pc = 0x294440u;
    SET_GPR_U32(ctx, 31, 0x294448u);
    ctx->pc = 0x294460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294460u, 0x294440u, 0x294448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294448u;
label_294448:
    // 0x294448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29444c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x29444cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x294450: 0x3e00008  jr          $ra
    ctx->pc = 0x294450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294458u;
    // 0x294458: 0x0  nop
    ctx->pc = 0x294458u;
    // NOP
    // 0x29445c: 0x0  nop
    ctx->pc = 0x29445cu;
    // NOP
    ctx->pc = 0x294460u;
}
