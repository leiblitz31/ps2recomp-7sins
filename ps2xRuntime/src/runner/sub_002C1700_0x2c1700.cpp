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

// Function: sub_002C1700
// Address: 0x2c1700 - 0x2c1740
void sub_002C1700_0x2c1700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1700_0x2c1700");
#endif

    switch (ctx->pc) {
        case 0x2c1720u: goto label_2c1720;
        default: break;
    }

    ctx->pc = 0x2c1700u;

    // 0x2c1700: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1704: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1708: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c170c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c170cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c1710: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c1710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1714: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c1714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c1718: 0xc0b05d0  jal         func_2C1740
    ctx->pc = 0x2C1718u;
    SET_GPR_U32(ctx, 31, 0x2C1720u);
    ctx->pc = 0x2C1740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1740u, 0x2C1718u, 0x2C1720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1720u;
label_2c1720:
    // 0x2c1720: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c1724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1728: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c1728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c172c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C172Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1734u;
    // 0x2c1734: 0x0  nop
    ctx->pc = 0x2c1734u;
    // NOP
    // 0x2c1738: 0x0  nop
    ctx->pc = 0x2c1738u;
    // NOP
    // 0x2c173c: 0x0  nop
    ctx->pc = 0x2c173cu;
    // NOP
    ctx->pc = 0x2c1740u;
}
