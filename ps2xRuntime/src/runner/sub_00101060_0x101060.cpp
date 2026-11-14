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

// Function: sub_00101060
// Address: 0x101060 - 0x101090
void sub_00101060_0x101060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101060_0x101060");
#endif

    switch (ctx->pc) {
        case 0x10107cu: goto label_10107c;
        default: break;
    }

    ctx->pc = 0x101060u;

    // 0x101060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x101064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10106c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101070: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x101070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x101074: 0xc040988  jal         func_102620
    ctx->pc = 0x101074u;
    SET_GPR_U32(ctx, 31, 0x10107Cu);
    ctx->pc = 0x102620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102620u, 0x101074u, 0x10107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10107Cu;
label_10107c:
    // 0x10107c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x101084: 0x3e00008  jr          $ra
    ctx->pc = 0x101084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10108Cu;
    // 0x10108c: 0x0  nop
    ctx->pc = 0x10108cu;
    // NOP
    ctx->pc = 0x101090u;
}
