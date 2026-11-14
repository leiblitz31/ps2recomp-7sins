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

// Function: sub_002D2430
// Address: 0x2d2430 - 0x2d2480
void sub_002D2430_0x2d2430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2430_0x2d2430");
#endif

    ctx->pc = 0x2d2430u;

    // 0x2d2430: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d2430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d2434: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2d2434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2d2438: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2d2438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2d243c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2d243cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2d2440: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x2d2440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x2d2444: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d2444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2448: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d2448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d244c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2d244cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2d2450: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d2450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2454: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d2454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2458: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2d2458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2d245c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2d245cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2460: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2d2460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2464: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x2d2464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x2d2468: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d2468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d246c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D246Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D246Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2474u;
    // 0x2d2474: 0x0  nop
    ctx->pc = 0x2d2474u;
    // NOP
    // 0x2d2478: 0x0  nop
    ctx->pc = 0x2d2478u;
    // NOP
    // 0x2d247c: 0x0  nop
    ctx->pc = 0x2d247cu;
    // NOP
    ctx->pc = 0x2d2480u;
}
