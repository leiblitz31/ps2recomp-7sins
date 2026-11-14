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

// Function: sub_00139260
// Address: 0x139260 - 0x139290
void sub_00139260_0x139260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139260_0x139260");
#endif

    switch (ctx->pc) {
        case 0x139278u: goto label_139278;
        default: break;
    }

    ctx->pc = 0x139260u;

    // 0x139260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x139264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x139264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x139268: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x139268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13926c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13926cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139270: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x139270u;
    SET_GPR_U32(ctx, 31, 0x139278u);
    ctx->pc = 0x139290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139290u, 0x139270u, 0x139278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139278u;
label_139278:
    // 0x139278: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13927c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x13927cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x139280: 0x3e00008  jr          $ra
    ctx->pc = 0x139280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139288u;
    // 0x139288: 0x0  nop
    ctx->pc = 0x139288u;
    // NOP
    // 0x13928c: 0x0  nop
    ctx->pc = 0x13928cu;
    // NOP
    ctx->pc = 0x139290u;
}
