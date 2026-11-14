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

// Function: sub_001E81F0
// Address: 0x1e81f0 - 0x1e8240
void sub_001E81F0_0x1e81f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E81F0_0x1e81f0");
#endif

    ctx->pc = 0x1e81f0u;

    // 0x1e81f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e81f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e81f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1e81f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1e81f8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e81f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e81fc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x1e81fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x1e8200: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1e8200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1e8204: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e8204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8208: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e820c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1e820cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1e8210: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1e8210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8214: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8218: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x1e8218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x1e821c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1e821cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8220: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e8220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8224: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x1e8224u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x1e8228: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e8228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e822c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E822Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E822Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8234u;
    // 0x1e8234: 0x0  nop
    ctx->pc = 0x1e8234u;
    // NOP
    // 0x1e8238: 0x0  nop
    ctx->pc = 0x1e8238u;
    // NOP
    // 0x1e823c: 0x0  nop
    ctx->pc = 0x1e823cu;
    // NOP
    ctx->pc = 0x1e8240u;
}
