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

// Function: sub_00485BB0
// Address: 0x485bb0 - 0x485be0
void sub_00485BB0_0x485bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485BB0_0x485bb0");
#endif

    switch (ctx->pc) {
        case 0x485bc8u: goto label_485bc8;
        default: break;
    }

    ctx->pc = 0x485bb0u;

    // 0x485bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x485bb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x485bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x485bb8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x485bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x485bbc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x485bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485bc0: 0xc1216f8  jal         func_485BE0
    ctx->pc = 0x485BC0u;
    SET_GPR_U32(ctx, 31, 0x485BC8u);
    ctx->pc = 0x485BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x485BE0u, 0x485BC0u, 0x485BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x485BC8u;
label_485bc8:
    // 0x485bc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x485bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x485bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x485bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x485bd0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x485bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x485bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x485BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x485BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x485BDCu;
    // 0x485bdc: 0x0  nop
    ctx->pc = 0x485bdcu;
    // NOP
    ctx->pc = 0x485be0u;
}
