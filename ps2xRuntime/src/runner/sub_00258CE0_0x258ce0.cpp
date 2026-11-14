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

// Function: sub_00258CE0
// Address: 0x258ce0 - 0x258d20
void sub_00258CE0_0x258ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258CE0_0x258ce0");
#endif

    switch (ctx->pc) {
        case 0x258d10u: goto label_258d10;
        default: break;
    }

    ctx->pc = 0x258ce0u;

    // 0x258ce0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x258ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x258ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258ce8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258cec: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x258cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x258cf0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x258cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x258cf4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258cf8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x258cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258cfc: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x258cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x258d00: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x258d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x258d04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x258d04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258d08: 0xc096348  jal         func_258D20
    ctx->pc = 0x258D08u;
    SET_GPR_U32(ctx, 31, 0x258D10u);
    ctx->pc = 0x258D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258D20u, 0x258D08u, 0x258D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258D10u;
label_258d10:
    // 0x258d10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258d14: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x258d14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x258d18: 0x3e00008  jr          $ra
    ctx->pc = 0x258D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258D20u;
}
