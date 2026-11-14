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

// Function: sub_00234450
// Address: 0x234450 - 0x234490
void sub_00234450_0x234450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234450_0x234450");
#endif

    ctx->pc = 0x234450u;

    // 0x234450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x234450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x234454: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234458: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x234458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x23445c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x23445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x234460: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x234460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234464: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x234464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234468: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x234468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
    // 0x23446c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x23446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234470: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x234470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234474: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x234474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x234478: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x234478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23447c: 0x3e00008  jr          $ra
    ctx->pc = 0x23447Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23447Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234484u;
    // 0x234484: 0x0  nop
    ctx->pc = 0x234484u;
    // NOP
    // 0x234488: 0x0  nop
    ctx->pc = 0x234488u;
    // NOP
    // 0x23448c: 0x0  nop
    ctx->pc = 0x23448cu;
    // NOP
    ctx->pc = 0x234490u;
}
