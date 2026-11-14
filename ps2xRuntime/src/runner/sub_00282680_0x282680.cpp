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

// Function: sub_00282680
// Address: 0x282680 - 0x2826d0
void sub_00282680_0x282680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282680_0x282680");
#endif

    switch (ctx->pc) {
        case 0x2826a8u: goto label_2826a8;
        default: break;
    }

    ctx->pc = 0x282680u;

    // 0x282680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x282680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x282684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x282684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x282688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x282688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28268c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x28268cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x282690: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x282690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x282694: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x282694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282698: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28269c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28269cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2826a0: 0xc0a09b4  jal         func_2826D0
    ctx->pc = 0x2826A0u;
    SET_GPR_U32(ctx, 31, 0x2826A8u);
    ctx->pc = 0x2826D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2826D0u, 0x2826A0u, 0x2826A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2826A8u;
label_2826a8:
    // 0x2826a8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2826a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2826ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2826acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2826b0: 0x1010  mfhi        $v0
    ctx->pc = 0x2826b0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2826b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2826b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2826b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2826b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2826bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2826BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2826BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2826C4u;
    // 0x2826c4: 0x0  nop
    ctx->pc = 0x2826c4u;
    // NOP
    // 0x2826c8: 0x0  nop
    ctx->pc = 0x2826c8u;
    // NOP
    // 0x2826cc: 0x0  nop
    ctx->pc = 0x2826ccu;
    // NOP
    ctx->pc = 0x2826d0u;
}
