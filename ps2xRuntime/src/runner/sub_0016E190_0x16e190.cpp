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

// Function: sub_0016E190
// Address: 0x16e190 - 0x16e1d0
void sub_0016E190_0x16e190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E190_0x16e190");
#endif

    switch (ctx->pc) {
        case 0x16e1b4u: goto label_16e1b4;
        default: break;
    }

    ctx->pc = 0x16e190u;

    // 0x16e190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e19c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x16e19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x16e1a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e1a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x16e1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e1a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16e1a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e1ac: 0xc05b874  jal         func_16E1D0
    ctx->pc = 0x16E1ACu;
    SET_GPR_U32(ctx, 31, 0x16E1B4u);
    ctx->pc = 0x16E1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E1D0u, 0x16E1ACu, 0x16E1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E1B4u;
label_16e1b4:
    // 0x16e1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e1b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16E1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E1BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E1C4u;
    // 0x16e1c4: 0x0  nop
    ctx->pc = 0x16e1c4u;
    // NOP
    // 0x16e1c8: 0x0  nop
    ctx->pc = 0x16e1c8u;
    // NOP
    // 0x16e1cc: 0x0  nop
    ctx->pc = 0x16e1ccu;
    // NOP
    ctx->pc = 0x16e1d0u;
}
