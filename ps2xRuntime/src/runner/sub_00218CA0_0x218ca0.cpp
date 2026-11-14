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

// Function: sub_00218CA0
// Address: 0x218ca0 - 0x218ce0
void sub_00218CA0_0x218ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218CA0_0x218ca0");
#endif

    switch (ctx->pc) {
        case 0x218cc8u: goto label_218cc8;
        default: break;
    }

    ctx->pc = 0x218ca0u;

    // 0x218ca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x218ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x218ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x218ca8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x218ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x218cac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x218cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x218cb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x218cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x218cb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x218cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218cb8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x218cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218cbc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x218cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218cc0: 0xc086338  jal         func_218CE0
    ctx->pc = 0x218CC0u;
    SET_GPR_U32(ctx, 31, 0x218CC8u);
    ctx->pc = 0x218CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218CE0u, 0x218CC0u, 0x218CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x218CC8u;
label_218cc8:
    // 0x218cc8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x218cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x218cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218cd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x218cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x218cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x218CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218CDCu;
    // 0x218cdc: 0x0  nop
    ctx->pc = 0x218cdcu;
    // NOP
    ctx->pc = 0x218ce0u;
}
