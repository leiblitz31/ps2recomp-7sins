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

// Function: sub_00453A00
// Address: 0x453a00 - 0x453a50
void sub_00453A00_0x453a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453A00_0x453a00");
#endif

    ctx->pc = 0x453a00u;

    // 0x453a00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x453a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x453a04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x453a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x453a08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x453a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x453a0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x453a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x453a10: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x453a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x453a14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x453a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x453a18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x453a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453a1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x453a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x453a20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x453a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x453a24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x453a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453a28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x453a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x453a2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x453a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x453a30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x453a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x453a34: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x453a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x453a38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x453a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x453a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x453A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x453A44u;
    // 0x453a44: 0x0  nop
    ctx->pc = 0x453a44u;
    // NOP
    // 0x453a48: 0x0  nop
    ctx->pc = 0x453a48u;
    // NOP
    // 0x453a4c: 0x0  nop
    ctx->pc = 0x453a4cu;
    // NOP
    ctx->pc = 0x453a50u;
}
