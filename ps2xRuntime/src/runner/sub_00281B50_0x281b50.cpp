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

// Function: sub_00281B50
// Address: 0x281b50 - 0x281b80
void sub_00281B50_0x281b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281B50_0x281b50");
#endif

    switch (ctx->pc) {
        case 0x281b6cu: goto label_281b6c;
        default: break;
    }

    ctx->pc = 0x281b50u;

    // 0x281b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x281b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x281b5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x281b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281b60: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x281b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x281b64: 0xc0a6ce4  jal         func_29B390
    ctx->pc = 0x281B64u;
    SET_GPR_U32(ctx, 31, 0x281B6Cu);
    ctx->pc = 0x29B390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B390u, 0x281B64u, 0x281B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281B6Cu;
label_281b6c:
    // 0x281b6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281b70: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x281b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x281b74: 0x3e00008  jr          $ra
    ctx->pc = 0x281B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281B7Cu;
    // 0x281b7c: 0x0  nop
    ctx->pc = 0x281b7cu;
    // NOP
    ctx->pc = 0x281b80u;
}
