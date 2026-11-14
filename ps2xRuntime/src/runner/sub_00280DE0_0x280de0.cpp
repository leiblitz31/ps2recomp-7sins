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

// Function: sub_00280DE0
// Address: 0x280de0 - 0x280e20
void sub_00280DE0_0x280de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280DE0_0x280de0");
#endif

    switch (ctx->pc) {
        case 0x280e08u: goto label_280e08;
        default: break;
    }

    ctx->pc = 0x280de0u;

    // 0x280de0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x280de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x280de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280de8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280dec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280df0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x280df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x280df4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280df8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x280df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280dfc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x280dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280e00: 0xc0a0388  jal         func_280E20
    ctx->pc = 0x280E00u;
    SET_GPR_U32(ctx, 31, 0x280E08u);
    ctx->pc = 0x280E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E20u, 0x280E00u, 0x280E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280E08u;
label_280e08:
    // 0x280e08: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x280e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280e10: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x280e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x280e14: 0x3e00008  jr          $ra
    ctx->pc = 0x280E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280E1Cu;
    // 0x280e1c: 0x0  nop
    ctx->pc = 0x280e1cu;
    // NOP
    ctx->pc = 0x280e20u;
}
