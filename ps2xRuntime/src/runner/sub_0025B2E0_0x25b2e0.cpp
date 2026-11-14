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

// Function: sub_0025B2E0
// Address: 0x25b2e0 - 0x25b330
void sub_0025B2E0_0x25b2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B2E0_0x25b2e0");
#endif

    ctx->pc = 0x25b2e0u;

    // 0x25b2e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25b2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25b2e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25b2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25b2e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25b2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25b2ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25b2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25b2f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x25b2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x25b2f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b2f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b2fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25b2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25b300: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25b300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25b304: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b308: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x25b308u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25b30c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25b310: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b314: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x25b314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x25b318: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25b318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25b31c: 0x3e00008  jr          $ra
    ctx->pc = 0x25B31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B324u;
    // 0x25b324: 0x0  nop
    ctx->pc = 0x25b324u;
    // NOP
    // 0x25b328: 0x0  nop
    ctx->pc = 0x25b328u;
    // NOP
    // 0x25b32c: 0x0  nop
    ctx->pc = 0x25b32cu;
    // NOP
    ctx->pc = 0x25b330u;
}
