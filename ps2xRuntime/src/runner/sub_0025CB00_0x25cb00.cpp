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

// Function: sub_0025CB00
// Address: 0x25cb00 - 0x25cb50
void sub_0025CB00_0x25cb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB00_0x25cb00");
#endif

    ctx->pc = 0x25cb00u;

    // 0x25cb00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25cb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25cb04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25cb08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25cb0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x25cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x25cb10: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x25cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x25cb14: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25cb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb1c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x25cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x25cb20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25cb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25cb24: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25cb24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb28: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x25cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x25cb2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x25cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25cb30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cb34: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x25cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x25cb38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x25cb38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25cb3c: 0x3e00008  jr          $ra
    ctx->pc = 0x25CB3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CB3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CB44u;
    // 0x25cb44: 0x0  nop
    ctx->pc = 0x25cb44u;
    // NOP
    // 0x25cb48: 0x0  nop
    ctx->pc = 0x25cb48u;
    // NOP
    // 0x25cb4c: 0x0  nop
    ctx->pc = 0x25cb4cu;
    // NOP
    ctx->pc = 0x25cb50u;
}
