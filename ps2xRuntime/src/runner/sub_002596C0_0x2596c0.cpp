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

// Function: sub_002596C0
// Address: 0x2596c0 - 0x259700
void sub_002596C0_0x2596c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002596C0_0x2596c0");
#endif

    switch (ctx->pc) {
        case 0x2596e0u: goto label_2596e0;
        default: break;
    }

    ctx->pc = 0x2596c0u;

    // 0x2596c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2596c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2596c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2596c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2596c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2596c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2596cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2596ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2596d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2596d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2596d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2596d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2596d8: 0xc0965c0  jal         func_259700
    ctx->pc = 0x2596D8u;
    SET_GPR_U32(ctx, 31, 0x2596E0u);
    ctx->pc = 0x259700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259700u, 0x2596D8u, 0x2596E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596E0u;
label_2596e0:
    // 0x2596e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2596e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2596e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2596e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2596e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2596e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2596ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2596ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2596ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2596F4u;
    // 0x2596f4: 0x0  nop
    ctx->pc = 0x2596f4u;
    // NOP
    // 0x2596f8: 0x0  nop
    ctx->pc = 0x2596f8u;
    // NOP
    // 0x2596fc: 0x0  nop
    ctx->pc = 0x2596fcu;
    // NOP
    ctx->pc = 0x259700u;
}
