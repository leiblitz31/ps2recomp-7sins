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

// Function: sub_001E16F0
// Address: 0x1e16f0 - 0x1e1730
void sub_001E16F0_0x1e16f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E16F0_0x1e16f0");
#endif

    switch (ctx->pc) {
        case 0x1e1720u: goto label_1e1720;
        default: break;
    }

    ctx->pc = 0x1e16f0u;

    // 0x1e16f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e16f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e16f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e16f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e16fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e16fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e1700: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e1700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e1704: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e1704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e1708: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e1708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e170c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x1e170cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e1710: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x1e1710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1e1714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e1714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e1718: 0xc0785cc  jal         func_1E1730
    ctx->pc = 0x1E1718u;
    SET_GPR_U32(ctx, 31, 0x1E1720u);
    ctx->pc = 0x1E1730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1730u, 0x1E1718u, 0x1E1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E1720u;
label_1e1720:
    // 0x1e1720: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e1724: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1e1724u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1e1728: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1730u;
}
