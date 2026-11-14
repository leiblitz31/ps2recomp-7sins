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

// Function: sub_002C16C0
// Address: 0x2c16c0 - 0x2c1700
void sub_002C16C0_0x2c16c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C16C0_0x2c16c0");
#endif

    switch (ctx->pc) {
        case 0x2c16d8u: goto label_2c16d8;
        case 0x2c16e8u: goto label_2c16e8;
        default: break;
    }

    ctx->pc = 0x2c16c0u;

    // 0x2c16c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c16c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c16c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c16c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c16c8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2c16c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2c16cc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x2c16ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2c16d0: 0xc0b0600  jal         func_2C1800
    ctx->pc = 0x2C16D0u;
    SET_GPR_U32(ctx, 31, 0x2C16D8u);
    ctx->pc = 0x2C1800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1800u, 0x2C16D0u, 0x2C16D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16D8u;
label_2c16d8:
    // 0x2c16d8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2c16d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c16dc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c16dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c16e0: 0xc0b05c0  jal         func_2C1700
    ctx->pc = 0x2C16E0u;
    SET_GPR_U32(ctx, 31, 0x2C16E8u);
    ctx->pc = 0x2C1700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1700u, 0x2C16E0u, 0x2C16E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C16E8u;
label_2c16e8:
    // 0x2c16e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2c16e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c16ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c16ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c16f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c16f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c16f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C16F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C16F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C16FCu;
    // 0x2c16fc: 0x0  nop
    ctx->pc = 0x2c16fcu;
    // NOP
    ctx->pc = 0x2c1700u;
}
