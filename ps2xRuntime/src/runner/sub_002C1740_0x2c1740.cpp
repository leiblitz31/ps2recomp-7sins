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

// Function: sub_002C1740
// Address: 0x2c1740 - 0x2c1790
void sub_002C1740_0x2c1740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1740_0x2c1740");
#endif

    switch (ctx->pc) {
        case 0x2c1778u: goto label_2c1778;
        default: break;
    }

    ctx->pc = 0x2c1740u;

    // 0x2c1740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c1740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2c1744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c1744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c1748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2c1748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2c174c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2c174cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2c1750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1754: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2c1754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2c1758: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c175c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2c175cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2c1760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1764: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2c1764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2c1768: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c1768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c176c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c176cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1770: 0xc0b05e4  jal         func_2C1790
    ctx->pc = 0x2C1770u;
    SET_GPR_U32(ctx, 31, 0x2C1778u);
    ctx->pc = 0x2C1790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1790u, 0x2C1770u, 0x2C1778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1778u;
label_2c1778:
    // 0x2c1778: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2c1778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c177c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c177cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c1780: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2c1780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2c1784: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C178Cu;
    // 0x2c178c: 0x0  nop
    ctx->pc = 0x2c178cu;
    // NOP
    ctx->pc = 0x2c1790u;
}
