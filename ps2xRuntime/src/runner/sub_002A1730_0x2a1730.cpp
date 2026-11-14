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

// Function: sub_002A1730
// Address: 0x2a1730 - 0x2a1780
void sub_002A1730_0x2a1730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1730_0x2a1730");
#endif

    switch (ctx->pc) {
        case 0x2a1750u: goto label_2a1750;
        case 0x2a1764u: goto label_2a1764;
        default: break;
    }

    ctx->pc = 0x2a1730u;

    // 0x2a1730: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a1734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a1738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a1738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a173c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x2a173cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a1740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2a1740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1744: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2a1744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2a1748: 0xc121d18  jal         func_487460
    ctx->pc = 0x2A1748u;
    SET_GPR_U32(ctx, 31, 0x2A1750u);
    ctx->pc = 0x487460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487460u, 0x2A1748u, 0x2A1750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1750u;
label_2a1750:
    // 0x2a1750: 0x8f84bb84  lw          $a0, -0x447C($gp)
    ctx->pc = 0x2a1750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949764)));
    // 0x2a1754: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a1754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1758: 0x93a60020  lbu         $a2, 0x20($sp)
    ctx->pc = 0x2a1758u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a175c: 0xc08a758  jal         func_229D60
    ctx->pc = 0x2A175Cu;
    SET_GPR_U32(ctx, 31, 0x2A1764u);
    ctx->pc = 0x229D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229D60u, 0x2A175Cu, 0x2A1764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1764u;
label_2a1764:
    // 0x2a1764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2a1768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2a176c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A176Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A176Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1774u;
    // 0x2a1774: 0x0  nop
    ctx->pc = 0x2a1774u;
    // NOP
    // 0x2a1778: 0x0  nop
    ctx->pc = 0x2a1778u;
    // NOP
    // 0x2a177c: 0x0  nop
    ctx->pc = 0x2a177cu;
    // NOP
    ctx->pc = 0x2a1780u;
}
