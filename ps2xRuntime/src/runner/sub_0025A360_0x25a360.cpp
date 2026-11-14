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

// Function: sub_0025A360
// Address: 0x25a360 - 0x25a3a0
void sub_0025A360_0x25a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A360_0x25a360");
#endif

    switch (ctx->pc) {
        case 0x25a384u: goto label_25a384;
        default: break;
    }

    ctx->pc = 0x25a360u;

    // 0x25a360: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25a364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a368: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25a368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25a36c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25a36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x25a370: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25a370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a374: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a378: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x25a378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a37c: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A37Cu;
    SET_GPR_U32(ctx, 31, 0x25A384u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A37Cu, 0x25A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A384u;
label_25a384:
    // 0x25a384: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a38c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25a38cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25a390: 0x3e00008  jr          $ra
    ctx->pc = 0x25A390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A398u;
    // 0x25a398: 0x0  nop
    ctx->pc = 0x25a398u;
    // NOP
    // 0x25a39c: 0x0  nop
    ctx->pc = 0x25a39cu;
    // NOP
    ctx->pc = 0x25a3a0u;
}
