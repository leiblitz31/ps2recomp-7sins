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

// Function: sub_0044E500
// Address: 0x44e500 - 0x44e570
void sub_0044E500_0x44e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044E500_0x44e500");
#endif

    ctx->pc = 0x44e500u;

    // 0x44e500: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x44e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x44e504: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x44e504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x44e508: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x44e508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x44e50c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x44e50cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x44e510: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x44e510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x44e514: 0xafa80040  sw          $t0, 0x40($sp)
    ctx->pc = 0x44e514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 8));
    // 0x44e518: 0xafa90050  sw          $t1, 0x50($sp)
    ctx->pc = 0x44e518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 9));
    // 0x44e51c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e520: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x44e520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x44e524: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x44e524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44e528: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e52c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x44e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x44e530: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x44e530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44e534: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e538: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x44e538u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x44e53c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x44e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x44e540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e544: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x44e544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x44e548: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x44e548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x44e54c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e550: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x44e550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x44e554: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x44e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x44e558: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e55c: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x44e55cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x44e560: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x44e560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44e564: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x44e564u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x44e568: 0x3e00008  jr          $ra
    ctx->pc = 0x44E568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44E568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44E570u;
}
