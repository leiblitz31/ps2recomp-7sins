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

// Function: sub_00234D40
// Address: 0x234d40 - 0x234da0
void sub_00234D40_0x234d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234D40_0x234d40");
#endif

    ctx->pc = 0x234d40u;

    // 0x234d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x234d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x234d44: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x234d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x234d48: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x234d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x234d4c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x234d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x234d50: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x234d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x234d54: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d58: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x234d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x234d5c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x234d60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x234d64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d68: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x234d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x234d6c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x234d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234d70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x234d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x234d78: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x234d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234d7c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d80: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x234d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x234d84: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x234d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234d88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d8c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x234d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x234d90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234d94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x234d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x234d98: 0x3e00008  jr          $ra
    ctx->pc = 0x234D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234DA0u;
}
