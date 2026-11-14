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

// Function: sub_00264690
// Address: 0x264690 - 0x2646e0
void sub_00264690_0x264690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264690_0x264690");
#endif

    ctx->pc = 0x264690u;

    // 0x264690: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x264690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x264694: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x264694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x264698: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x264698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x26469c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x26469cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2646a0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2646a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2646a4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2646a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2646a8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2646a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2646acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2646b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2646b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2646b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2646b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646b8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2646b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2646bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2646bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2646c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2646c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2646c4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2646c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2646c8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2646c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2646cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2646CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2646CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2646D4u;
    // 0x2646d4: 0x0  nop
    ctx->pc = 0x2646d4u;
    // NOP
    // 0x2646d8: 0x0  nop
    ctx->pc = 0x2646d8u;
    // NOP
    // 0x2646dc: 0x0  nop
    ctx->pc = 0x2646dcu;
    // NOP
    ctx->pc = 0x2646e0u;
}
