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

// Function: sub_00189420
// Address: 0x189420 - 0x189470
void sub_00189420_0x189420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189420_0x189420");
#endif

    switch (ctx->pc) {
        case 0x189444u: goto label_189444;
        default: break;
    }

    ctx->pc = 0x189420u;

    // 0x189420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189428: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x189428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18942c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x189430: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x189430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x189434: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x189434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189438: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x189438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18943c: 0xc06251c  jal         func_189470
    ctx->pc = 0x18943Cu;
    SET_GPR_U32(ctx, 31, 0x189444u);
    ctx->pc = 0x189470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189470u, 0x18943Cu, 0x189444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189444u;
label_189444:
    // 0x189444: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x189444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189448: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18944c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x18944cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x189450: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x189450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x189454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189458: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x189458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18945c: 0x3e00008  jr          $ra
    ctx->pc = 0x18945Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18945Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189464u;
    // 0x189464: 0x0  nop
    ctx->pc = 0x189464u;
    // NOP
    // 0x189468: 0x0  nop
    ctx->pc = 0x189468u;
    // NOP
    // 0x18946c: 0x0  nop
    ctx->pc = 0x18946cu;
    // NOP
    ctx->pc = 0x189470u;
}
