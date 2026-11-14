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

// Function: sub_002AC970
// Address: 0x2ac970 - 0x2ac9b0
void sub_002AC970_0x2ac970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC970_0x2ac970");
#endif

    switch (ctx->pc) {
        case 0x2ac990u: goto label_2ac990;
        default: break;
    }

    ctx->pc = 0x2ac970u;

    // 0x2ac970: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac978: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2ac978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2ac97c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2ac97cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2ac980: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2ac980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac984: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2ac984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ac988: 0xc0ab26c  jal         func_2AC9B0
    ctx->pc = 0x2AC988u;
    SET_GPR_U32(ctx, 31, 0x2AC990u);
    ctx->pc = 0x2AC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B0u, 0x2AC988u, 0x2AC990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC990u;
label_2ac990:
    // 0x2ac990: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2ac990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac998: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2ac998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2ac99c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC99Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC99Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC9A4u;
    // 0x2ac9a4: 0x0  nop
    ctx->pc = 0x2ac9a4u;
    // NOP
    // 0x2ac9a8: 0x0  nop
    ctx->pc = 0x2ac9a8u;
    // NOP
    // 0x2ac9ac: 0x0  nop
    ctx->pc = 0x2ac9acu;
    // NOP
    ctx->pc = 0x2ac9b0u;
}
