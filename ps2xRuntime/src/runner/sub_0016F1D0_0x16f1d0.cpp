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

// Function: sub_0016F1D0
// Address: 0x16f1d0 - 0x16f220
void sub_0016F1D0_0x16f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F1D0_0x16f1d0");
#endif

    ctx->pc = 0x16f1d0u;

    // 0x16f1d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f1d4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x16f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x16f1d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x16f1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x16f1dc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x16f1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x16f1e0: 0xa3a70030  sb          $a3, 0x30($sp)
    ctx->pc = 0x16f1e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 7));
    // 0x16f1e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16f1e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f1ec: 0xac6400b0  sw          $a0, 0xB0($v1)
    ctx->pc = 0x16f1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 4));
    // 0x16f1f0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x16f1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f1f4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f1f8: 0xac6400b4  sw          $a0, 0xB4($v1)
    ctx->pc = 0x16f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 4));
    // 0x16f1fc: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x16f1fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f200: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x16f200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16f204: 0xa06400b8  sb          $a0, 0xB8($v1)
    ctx->pc = 0x16f204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 184), (uint8_t)GPR_U32(ctx, 4));
    // 0x16f208: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x16f208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x16f20c: 0x3e00008  jr          $ra
    ctx->pc = 0x16F20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F214u;
    // 0x16f214: 0x0  nop
    ctx->pc = 0x16f214u;
    // NOP
    // 0x16f218: 0x0  nop
    ctx->pc = 0x16f218u;
    // NOP
    // 0x16f21c: 0x0  nop
    ctx->pc = 0x16f21cu;
    // NOP
    ctx->pc = 0x16f220u;
}
