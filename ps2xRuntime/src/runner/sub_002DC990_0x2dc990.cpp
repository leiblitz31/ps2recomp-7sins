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

// Function: sub_002DC990
// Address: 0x2dc990 - 0x2dc9e0
void sub_002DC990_0x2dc990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC990_0x2dc990");
#endif

    ctx->pc = 0x2dc990u;

    // 0x2dc990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dc990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dc994: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2dc994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2dc998: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2dc998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2dc99c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2dc99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2dc9a0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2dc9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2dc9a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2dc9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc9a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dc9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc9ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2dc9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2dc9b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2dc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc9b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dc9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc9b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2dc9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2dc9bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2dc9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc9c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2dc9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc9c4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2dc9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2dc9c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2dc9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2dc9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC9D4u;
    // 0x2dc9d4: 0x0  nop
    ctx->pc = 0x2dc9d4u;
    // NOP
    // 0x2dc9d8: 0x0  nop
    ctx->pc = 0x2dc9d8u;
    // NOP
    // 0x2dc9dc: 0x0  nop
    ctx->pc = 0x2dc9dcu;
    // NOP
    ctx->pc = 0x2dc9e0u;
}
