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

// Function: sub_0010E930
// Address: 0x10e930 - 0x10e960
void sub_0010E930_0x10e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E930_0x10e930");
#endif

    switch (ctx->pc) {
        case 0x10e948u: goto label_10e948;
        default: break;
    }

    ctx->pc = 0x10e930u;

    // 0x10e930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10e934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e938: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10e938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10e93c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e940: 0xc043a58  jal         func_10E960
    ctx->pc = 0x10E940u;
    SET_GPR_U32(ctx, 31, 0x10E948u);
    ctx->pc = 0x10E960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E960u, 0x10E940u, 0x10E948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E948u;
label_10e948:
    // 0x10e948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e94c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10e94cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10e950: 0x3e00008  jr          $ra
    ctx->pc = 0x10E950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E958u;
    // 0x10e958: 0x0  nop
    ctx->pc = 0x10e958u;
    // NOP
    // 0x10e95c: 0x0  nop
    ctx->pc = 0x10e95cu;
    // NOP
    ctx->pc = 0x10e960u;
}
