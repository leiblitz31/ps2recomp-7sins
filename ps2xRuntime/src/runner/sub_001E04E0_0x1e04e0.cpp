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

// Function: sub_001E04E0
// Address: 0x1e04e0 - 0x1e0530
void sub_001E04E0_0x1e04e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E04E0_0x1e04e0");
#endif

    switch (ctx->pc) {
        case 0x1e0504u: goto label_1e0504;
        default: break;
    }

    ctx->pc = 0x1e04e0u;

    // 0x1e04e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e04e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e04e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e04e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e04e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e04e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e04ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1e04ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1e04f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1e04f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1e04f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e04f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e04f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e04f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e04fc: 0xc07814c  jal         func_1E0530
    ctx->pc = 0x1E04FCu;
    SET_GPR_U32(ctx, 31, 0x1E0504u);
    ctx->pc = 0x1E0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0530u, 0x1E04FCu, 0x1E0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0504u;
label_1e0504:
    // 0x1e0504: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e0504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e0508: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e050c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1e050cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1e0510: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e0510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0518: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e0518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e051c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0524u;
    // 0x1e0524: 0x0  nop
    ctx->pc = 0x1e0524u;
    // NOP
    // 0x1e0528: 0x0  nop
    ctx->pc = 0x1e0528u;
    // NOP
    // 0x1e052c: 0x0  nop
    ctx->pc = 0x1e052cu;
    // NOP
    ctx->pc = 0x1e0530u;
}
