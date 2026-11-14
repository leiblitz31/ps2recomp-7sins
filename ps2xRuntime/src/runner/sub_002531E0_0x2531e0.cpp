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

// Function: sub_002531E0
// Address: 0x2531e0 - 0x253230
void sub_002531E0_0x2531e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002531E0_0x2531e0");
#endif

    ctx->pc = 0x2531e0u;

    // 0x2531e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2531e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2531e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2531e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2531e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2531e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2531ec: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2531ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2531f0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2531f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2531f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2531f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2531f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2531f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2531fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2531fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x253200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x253200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253204: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253208: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x253208u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25320c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253210: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x253210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253214: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x253214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x253218: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25321c: 0x3e00008  jr          $ra
    ctx->pc = 0x25321Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25321Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253224u;
    // 0x253224: 0x0  nop
    ctx->pc = 0x253224u;
    // NOP
    // 0x253228: 0x0  nop
    ctx->pc = 0x253228u;
    // NOP
    // 0x25322c: 0x0  nop
    ctx->pc = 0x25322cu;
    // NOP
    ctx->pc = 0x253230u;
}
