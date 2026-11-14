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

// Function: sub_0048E720
// Address: 0x48e720 - 0x48e760
void sub_0048E720_0x48e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E720_0x48e720");
#endif

    switch (ctx->pc) {
        case 0x48e748u: goto label_48e748;
        default: break;
    }

    ctx->pc = 0x48e720u;

    // 0x48e720: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48e720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48e724: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48e728: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x48e728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48e72c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x48e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x48e730: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x48e730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x48e734: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x48e734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e738: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x48e738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48e73c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x48e73cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48e740: 0xc1239d8  jal         func_48E760
    ctx->pc = 0x48E740u;
    SET_GPR_U32(ctx, 31, 0x48E748u);
    ctx->pc = 0x48E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E760u, 0x48E740u, 0x48E748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48E748u;
label_48e748:
    // 0x48e748: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x48e748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e74c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48e74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e750: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x48e750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x48e754: 0x3e00008  jr          $ra
    ctx->pc = 0x48E754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E75Cu;
    // 0x48e75c: 0x0  nop
    ctx->pc = 0x48e75cu;
    // NOP
    ctx->pc = 0x48e760u;
}
