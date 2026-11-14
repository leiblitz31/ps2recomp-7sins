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

// Function: sub_00293CC0
// Address: 0x293cc0 - 0x293d10
void sub_00293CC0_0x293cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293CC0_0x293cc0");
#endif

    ctx->pc = 0x293cc0u;

    // 0x293cc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x293cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x293cc4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x293cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x293cc8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x293cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x293ccc: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x293cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x293cd0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x293cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x293cd4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293cd8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x293cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293cdc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x293cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x293ce0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x293ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293ce4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x293ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293ce8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x293ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x293cec: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x293cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293cf0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293cf4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x293cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x293cf8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x293cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x293CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293D04u;
    // 0x293d04: 0x0  nop
    ctx->pc = 0x293d04u;
    // NOP
    // 0x293d08: 0x0  nop
    ctx->pc = 0x293d08u;
    // NOP
    // 0x293d0c: 0x0  nop
    ctx->pc = 0x293d0cu;
    // NOP
    ctx->pc = 0x293d10u;
}
