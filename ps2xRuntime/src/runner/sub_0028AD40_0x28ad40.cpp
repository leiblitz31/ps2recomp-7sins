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

// Function: sub_0028AD40
// Address: 0x28ad40 - 0x28ad70
void sub_0028AD40_0x28ad40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AD40_0x28ad40");
#endif

    switch (ctx->pc) {
        case 0x28ad58u: goto label_28ad58;
        default: break;
    }

    ctx->pc = 0x28ad40u;

    // 0x28ad40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ad40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ad44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28ad44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ad48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28ad48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28ad4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28ad4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ad50: 0xc0a2b5c  jal         func_28AD70
    ctx->pc = 0x28AD50u;
    SET_GPR_U32(ctx, 31, 0x28AD58u);
    ctx->pc = 0x28AD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AD70u, 0x28AD50u, 0x28AD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AD58u;
label_28ad58:
    // 0x28ad58: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28ad58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ad5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ad5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ad60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ad60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ad64: 0x3e00008  jr          $ra
    ctx->pc = 0x28AD64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AD64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AD6Cu;
    // 0x28ad6c: 0x0  nop
    ctx->pc = 0x28ad6cu;
    // NOP
    ctx->pc = 0x28ad70u;
}
