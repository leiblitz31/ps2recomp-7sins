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

// Function: sub_00280BB0
// Address: 0x280bb0 - 0x280bf0
void sub_00280BB0_0x280bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280BB0_0x280bb0");
#endif

    switch (ctx->pc) {
        case 0x280bd0u: goto label_280bd0;
        default: break;
    }

    ctx->pc = 0x280bb0u;

    // 0x280bb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x280bbc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x280bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x280bc0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280bc4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x280bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280bc8: 0xc0a02fc  jal         func_280BF0
    ctx->pc = 0x280BC8u;
    SET_GPR_U32(ctx, 31, 0x280BD0u);
    ctx->pc = 0x280BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280BF0u, 0x280BC8u, 0x280BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280BD0u;
label_280bd0:
    // 0x280bd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280bd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280bd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x280BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280BE4u;
    // 0x280be4: 0x0  nop
    ctx->pc = 0x280be4u;
    // NOP
    // 0x280be8: 0x0  nop
    ctx->pc = 0x280be8u;
    // NOP
    // 0x280bec: 0x0  nop
    ctx->pc = 0x280becu;
    // NOP
    ctx->pc = 0x280bf0u;
}
