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

// Function: sub_00126CC0
// Address: 0x126cc0 - 0x126cf0
void sub_00126CC0_0x126cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126CC0_0x126cc0");
#endif

    switch (ctx->pc) {
        case 0x126cd8u: goto label_126cd8;
        default: break;
    }

    ctx->pc = 0x126cc0u;

    // 0x126cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x126cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x126cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x126cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x126ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x126cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126cd0: 0xc08d5f4  jal         func_2357D0
    ctx->pc = 0x126CD0u;
    SET_GPR_U32(ctx, 31, 0x126CD8u);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x126CD0u, 0x126CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126CD8u;
label_126cd8:
    // 0x126cd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x126cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126ce0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x126ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x126ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x126CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126CECu;
    // 0x126cec: 0x0  nop
    ctx->pc = 0x126cecu;
    // NOP
    ctx->pc = 0x126cf0u;
}
