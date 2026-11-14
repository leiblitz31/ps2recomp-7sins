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

// Function: sub_00166970
// Address: 0x166970 - 0x1669b0
void sub_00166970_0x166970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166970_0x166970");
#endif

    switch (ctx->pc) {
        case 0x1669a0u: goto label_1669a0;
        default: break;
    }

    ctx->pc = 0x166970u;

    // 0x166970: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x166970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x166974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x166974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x166978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16697c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16697cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x166980: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x166980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x166984: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x166984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x166988: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x166988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16698c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16698cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166990: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x166990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166994: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x166994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166998: 0xc059d20  jal         func_167480
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 31, 0x1669A0u);
    ctx->pc = 0x167480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167480u, 0x166998u, 0x1669A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1669A0u;
label_1669a0:
    // 0x1669a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1669a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1669a4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1669a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1669a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1669A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1669A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1669B0u;
}
