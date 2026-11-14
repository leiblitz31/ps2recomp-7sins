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

// Function: sub_0047B680
// Address: 0x47b680 - 0x47b6d0
void sub_0047B680_0x47b680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047B680_0x47b680");
#endif

    ctx->pc = 0x47b680u;

    // 0x47b680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47b680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47b684: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x47b684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x47b688: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x47b688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x47b68c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x47b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x47b690: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x47b690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x47b694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47b694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47b698: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47b698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b69c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x47b69cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x47b6a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47b6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47b6a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47b6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b6a8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x47b6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x47b6ac: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x47b6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47b6b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x47b6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47b6b4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x47b6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x47b6b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x47b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x47b6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x47B6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47B6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47B6C4u;
    // 0x47b6c4: 0x0  nop
    ctx->pc = 0x47b6c4u;
    // NOP
    // 0x47b6c8: 0x0  nop
    ctx->pc = 0x47b6c8u;
    // NOP
    // 0x47b6cc: 0x0  nop
    ctx->pc = 0x47b6ccu;
    // NOP
    ctx->pc = 0x47b6d0u;
}
