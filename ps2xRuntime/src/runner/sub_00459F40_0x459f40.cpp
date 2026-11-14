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

// Function: sub_00459F40
// Address: 0x459f40 - 0x459f90
void sub_00459F40_0x459f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459F40_0x459f40");
#endif

    ctx->pc = 0x459f40u;

    // 0x459f40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x459f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x459f44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x459f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x459f48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x459f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x459f4c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x459f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x459f50: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x459f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x459f54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x459f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459f58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x459f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459f5c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x459f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x459f60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x459f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459f64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x459f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459f68: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x459f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x459f6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x459f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459f70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x459f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459f74: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x459f74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x459f78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x459f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x459f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x459F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459F84u;
    // 0x459f84: 0x0  nop
    ctx->pc = 0x459f84u;
    // NOP
    // 0x459f88: 0x0  nop
    ctx->pc = 0x459f88u;
    // NOP
    // 0x459f8c: 0x0  nop
    ctx->pc = 0x459f8cu;
    // NOP
    ctx->pc = 0x459f90u;
}
