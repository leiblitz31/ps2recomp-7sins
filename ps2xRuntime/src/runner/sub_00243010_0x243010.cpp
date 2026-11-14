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

// Function: sub_00243010
// Address: 0x243010 - 0x243060
void sub_00243010_0x243010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243010_0x243010");
#endif

    ctx->pc = 0x243010u;

    // 0x243010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x243010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x243014: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x243014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x243018: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x243018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24301c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x24301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x243020: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x243020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x243024: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x243024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243028: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x243028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24302c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x24302cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x243030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x243030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243034: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x243034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243038: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x243038u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x24303c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x24303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243040: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243044: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x243044u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x243048: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x243048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24304c: 0x3e00008  jr          $ra
    ctx->pc = 0x24304Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24304Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x243054u;
    // 0x243054: 0x0  nop
    ctx->pc = 0x243054u;
    // NOP
    // 0x243058: 0x0  nop
    ctx->pc = 0x243058u;
    // NOP
    // 0x24305c: 0x0  nop
    ctx->pc = 0x24305cu;
    // NOP
    ctx->pc = 0x243060u;
}
