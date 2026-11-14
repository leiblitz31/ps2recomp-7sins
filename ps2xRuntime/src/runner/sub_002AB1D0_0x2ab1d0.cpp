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

// Function: sub_002AB1D0
// Address: 0x2ab1d0 - 0x2ab220
void sub_002AB1D0_0x2ab1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB1D0_0x2ab1d0");
#endif

    ctx->pc = 0x2ab1d0u;

    // 0x2ab1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab1d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ab1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ab1d8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2ab1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2ab1dc: 0x246364c0  addiu       $v1, $v1, 0x64C0
    ctx->pc = 0x2ab1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25792));
    // 0x2ab1e0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ab1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab1e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2ab1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2ab1e8: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2ab1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ab1ec: 0xa382bc5c  sb          $v0, -0x43A4($gp)
    ctx->pc = 0x2ab1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949980), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1f0: 0xa380a476  sb          $zero, -0x5B8A($gp)
    ctx->pc = 0x2ab1f0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943862), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ab1f4: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x2ab1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x2ab1f8: 0xa382a475  sb          $v0, -0x5B8B($gp)
    ctx->pc = 0x2ab1f8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943861), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab1fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2ab1fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2ab200: 0xa382a474  sb          $v0, -0x5B8C($gp)
    ctx->pc = 0x2ab200u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943860), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab204: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2ab208: 0xa382a477  sb          $v0, -0x5B89($gp)
    ctx->pc = 0x2ab208u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294943863), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ab20c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2ab20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab210: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2ab210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ab214: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB21Cu;
    // 0x2ab21c: 0x0  nop
    ctx->pc = 0x2ab21cu;
    // NOP
    ctx->pc = 0x2ab220u;
}
