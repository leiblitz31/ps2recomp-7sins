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

// Function: sub_0011AA60
// Address: 0x11aa60 - 0x11aa90
void sub_0011AA60_0x11aa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AA60_0x11aa60");
#endif

    switch (ctx->pc) {
        case 0x11aa78u: goto label_11aa78;
        default: break;
    }

    ctx->pc = 0x11aa60u;

    // 0x11aa60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11aa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11aa64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11aa68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11aa6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11aa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11aa70: 0xc046aa4  jal         func_11AA90
    ctx->pc = 0x11AA70u;
    SET_GPR_U32(ctx, 31, 0x11AA78u);
    ctx->pc = 0x11AA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AA90u, 0x11AA70u, 0x11AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA78u;
label_11aa78:
    // 0x11aa78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11aa78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11aa7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x11aa7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11aa80: 0x3e00008  jr          $ra
    ctx->pc = 0x11AA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AA88u;
    // 0x11aa88: 0x0  nop
    ctx->pc = 0x11aa88u;
    // NOP
    // 0x11aa8c: 0x0  nop
    ctx->pc = 0x11aa8cu;
    // NOP
    ctx->pc = 0x11aa90u;
}
