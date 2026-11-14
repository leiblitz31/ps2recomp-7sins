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

// Function: sub_0017F480
// Address: 0x17f480 - 0x17f4c0
void sub_0017F480_0x17f480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F480_0x17f480");
#endif

    switch (ctx->pc) {
        case 0x17f4a0u: goto label_17f4a0;
        default: break;
    }

    ctx->pc = 0x17f480u;

    // 0x17f480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17f480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17f484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x17f488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x17f48c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x17f48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x17f490: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17f490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f494: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f498: 0xc060084  jal         func_180210
    ctx->pc = 0x17F498u;
    SET_GPR_U32(ctx, 31, 0x17F4A0u);
    ctx->pc = 0x180210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180210u, 0x17F498u, 0x17F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F4A0u;
label_17f4a0:
    // 0x17f4a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f4a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x17F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F4B4u;
    // 0x17f4b4: 0x0  nop
    ctx->pc = 0x17f4b4u;
    // NOP
    // 0x17f4b8: 0x0  nop
    ctx->pc = 0x17f4b8u;
    // NOP
    // 0x17f4bc: 0x0  nop
    ctx->pc = 0x17f4bcu;
    // NOP
    ctx->pc = 0x17f4c0u;
}
