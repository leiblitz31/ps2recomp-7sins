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

// Function: sub_00482D20
// Address: 0x482d20 - 0x482d70
void sub_00482D20_0x482d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482D20_0x482d20");
#endif

    ctx->pc = 0x482d20u;

    // 0x482d20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x482d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x482d24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x482d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x482d28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x482d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x482d2c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x482d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x482d30: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x482d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x482d34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x482d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482d3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x482d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x482d40: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x482d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482d44: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x482d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482d48: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x482d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x482d4c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x482d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x482d50: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x482d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482d54: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x482d54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x482d58: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x482d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x482d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x482D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x482D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482D64u;
    // 0x482d64: 0x0  nop
    ctx->pc = 0x482d64u;
    // NOP
    // 0x482d68: 0x0  nop
    ctx->pc = 0x482d68u;
    // NOP
    // 0x482d6c: 0x0  nop
    ctx->pc = 0x482d6cu;
    // NOP
    ctx->pc = 0x482d70u;
}
