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

// Function: sub_0010A840
// Address: 0x10a840 - 0x10a870
void sub_0010A840_0x10a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A840_0x10a840");
#endif

    switch (ctx->pc) {
        case 0x10a858u: goto label_10a858;
        default: break;
    }

    ctx->pc = 0x10a840u;

    // 0x10a840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10a844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a848: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10a848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10a84c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a850: 0xc042a1c  jal         func_10A870
    ctx->pc = 0x10A850u;
    SET_GPR_U32(ctx, 31, 0x10A858u);
    ctx->pc = 0x10A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A870u, 0x10A850u, 0x10A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A858u;
label_10a858:
    // 0x10a858: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a85c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a85cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10a860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10a864: 0x3e00008  jr          $ra
    ctx->pc = 0x10A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A86Cu;
    // 0x10a86c: 0x0  nop
    ctx->pc = 0x10a86cu;
    // NOP
    ctx->pc = 0x10a870u;
}
