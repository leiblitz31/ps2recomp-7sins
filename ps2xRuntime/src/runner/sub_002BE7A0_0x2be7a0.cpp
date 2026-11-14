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

// Function: sub_002BE7A0
// Address: 0x2be7a0 - 0x2be7d0
void sub_002BE7A0_0x2be7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE7A0_0x2be7a0");
#endif

    switch (ctx->pc) {
        case 0x2be7b8u: goto label_2be7b8;
        default: break;
    }

    ctx->pc = 0x2be7a0u;

    // 0x2be7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2be7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2be7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2be7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2be7a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2be7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2be7ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2be7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2be7b0: 0xc0525e4  jal         func_149790
    ctx->pc = 0x2BE7B0u;
    SET_GPR_U32(ctx, 31, 0x2BE7B8u);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x2BE7B0u, 0x2BE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BE7B8u;
label_2be7b8:
    // 0x2be7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2be7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2be7bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2be7bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2be7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE7C8u;
    // 0x2be7c8: 0x0  nop
    ctx->pc = 0x2be7c8u;
    // NOP
    // 0x2be7cc: 0x0  nop
    ctx->pc = 0x2be7ccu;
    // NOP
    ctx->pc = 0x2be7d0u;
}
