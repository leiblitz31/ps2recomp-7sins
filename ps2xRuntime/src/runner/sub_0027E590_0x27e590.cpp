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

// Function: sub_0027E590
// Address: 0x27e590 - 0x27e5d0
void sub_0027E590_0x27e590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E590_0x27e590");
#endif

    switch (ctx->pc) {
        case 0x27e5b0u: goto label_27e5b0;
        default: break;
    }

    ctx->pc = 0x27e590u;

    // 0x27e590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27e590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27e594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27e594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27e598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27e59c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x27e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x27e5a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27e5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e5a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x27e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27e5a8: 0xc09f974  jal         func_27E5D0
    ctx->pc = 0x27E5A8u;
    SET_GPR_U32(ctx, 31, 0x27E5B0u);
    ctx->pc = 0x27E5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E5D0u, 0x27E5A8u, 0x27E5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E5B0u;
label_27e5b0:
    // 0x27e5b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27e5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27e5b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27e5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27e5bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27E5BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E5BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E5C4u;
    // 0x27e5c4: 0x0  nop
    ctx->pc = 0x27e5c4u;
    // NOP
    // 0x27e5c8: 0x0  nop
    ctx->pc = 0x27e5c8u;
    // NOP
    // 0x27e5cc: 0x0  nop
    ctx->pc = 0x27e5ccu;
    // NOP
    ctx->pc = 0x27e5d0u;
}
