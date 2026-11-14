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

// Function: sub_002269B0
// Address: 0x2269b0 - 0x2269f0
void sub_002269B0_0x2269b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002269B0_0x2269b0");
#endif

    switch (ctx->pc) {
        case 0x2269d4u: goto label_2269d4;
        default: break;
    }

    ctx->pc = 0x2269b0u;

    // 0x2269b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2269b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2269b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2269b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2269b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2269b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2269bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2269bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2269c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2269c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2269c4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2269c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x2269c8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2269c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2269cc: 0xc041d58  jal         func_107560
    ctx->pc = 0x2269CCu;
    SET_GPR_U32(ctx, 31, 0x2269D4u);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x2269CCu, 0x2269D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2269D4u;
label_2269d4:
    // 0x2269d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2269d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2269d8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2269d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2269dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2269DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2269DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2269E4u;
    // 0x2269e4: 0x0  nop
    ctx->pc = 0x2269e4u;
    // NOP
    // 0x2269e8: 0x0  nop
    ctx->pc = 0x2269e8u;
    // NOP
    // 0x2269ec: 0x0  nop
    ctx->pc = 0x2269ecu;
    // NOP
    ctx->pc = 0x2269f0u;
}
