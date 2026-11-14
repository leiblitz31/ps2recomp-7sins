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

// Function: sub_001380C0
// Address: 0x1380c0 - 0x138100
void sub_001380C0_0x1380c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001380C0_0x1380c0");
#endif

    switch (ctx->pc) {
        case 0x1380e8u: goto label_1380e8;
        default: break;
    }

    ctx->pc = 0x1380c0u;

    // 0x1380c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1380c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1380c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1380c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1380c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1380c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1380cc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1380ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1380d0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1380d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1380d4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1380d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1380d8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1380d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1380dc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1380dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1380e0: 0xc04e040  jal         func_138100
    ctx->pc = 0x1380E0u;
    SET_GPR_U32(ctx, 31, 0x1380E8u);
    ctx->pc = 0x138100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138100u, 0x1380E0u, 0x1380E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1380E8u;
label_1380e8:
    // 0x1380e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1380e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1380ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1380ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1380f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1380F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1380F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1380F8u;
    // 0x1380f8: 0x0  nop
    ctx->pc = 0x1380f8u;
    // NOP
    // 0x1380fc: 0x0  nop
    ctx->pc = 0x1380fcu;
    // NOP
    ctx->pc = 0x138100u;
}
