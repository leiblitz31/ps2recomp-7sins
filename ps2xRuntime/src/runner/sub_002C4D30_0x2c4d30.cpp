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

// Function: sub_002C4D30
// Address: 0x2c4d30 - 0x2c4d60
void sub_002C4D30_0x2c4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4D30_0x2c4d30");
#endif

    ctx->pc = 0x2c4d30u;

    // 0x2c4d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4d34: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2c4d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2c4d38: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2c4d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2c4d3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2c4d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c4d40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c4d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4d44: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x2c4d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x2c4d48: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c4d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c4d4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4D54u;
    // 0x2c4d54: 0x0  nop
    ctx->pc = 0x2c4d54u;
    // NOP
    // 0x2c4d58: 0x0  nop
    ctx->pc = 0x2c4d58u;
    // NOP
    // 0x2c4d5c: 0x0  nop
    ctx->pc = 0x2c4d5cu;
    // NOP
    ctx->pc = 0x2c4d60u;
}
