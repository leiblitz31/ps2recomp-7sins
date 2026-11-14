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

// Function: sub_002CF690
// Address: 0x2cf690 - 0x2cf6d0
void sub_002CF690_0x2cf690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF690_0x2cf690");
#endif

    switch (ctx->pc) {
        case 0x2cf6acu: goto label_2cf6ac;
        case 0x2cf6bcu: goto label_2cf6bc;
        default: break;
    }

    ctx->pc = 0x2cf690u;

    // 0x2cf690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cf690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cf694: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf698: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf69c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cf69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cf6a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2cf6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf6a4: 0xc040e7c  jal         func_1039F0
    ctx->pc = 0x2CF6A4u;
    SET_GPR_U32(ctx, 31, 0x2CF6ACu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2CF6A4u, 0x2CF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6ACu;
label_2cf6ac:
    // 0x2cf6ac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cf6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf6b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf6b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf6b4: 0xc0b3db4  jal         func_2CF6D0
    ctx->pc = 0x2CF6B4u;
    SET_GPR_U32(ctx, 31, 0x2CF6BCu);
    ctx->pc = 0x2CF6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6D0u, 0x2CF6B4u, 0x2CF6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF6BCu;
label_2cf6bc:
    // 0x2cf6bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf6bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf6c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cf6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF6CCu;
    // 0x2cf6cc: 0x0  nop
    ctx->pc = 0x2cf6ccu;
    // NOP
    ctx->pc = 0x2cf6d0u;
}
