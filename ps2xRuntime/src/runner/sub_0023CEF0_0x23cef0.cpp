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

// Function: sub_0023CEF0
// Address: 0x23cef0 - 0x23cf30
void sub_0023CEF0_0x23cef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023CEF0_0x23cef0");
#endif

    switch (ctx->pc) {
        case 0x23cf10u: goto label_23cf10;
        default: break;
    }

    ctx->pc = 0x23cef0u;

    // 0x23cef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23cef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23cef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23cef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23cefc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x23cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x23cf00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cf04: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x23cf04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23cf08: 0xc08f3cc  jal         func_23CF30
    ctx->pc = 0x23CF08u;
    SET_GPR_U32(ctx, 31, 0x23CF10u);
    ctx->pc = 0x23CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CF30u, 0x23CF08u, 0x23CF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF10u;
label_23cf10:
    // 0x23cf10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x23cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23cf14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23cf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23cf18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23cf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23cf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x23CF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23CF24u;
    // 0x23cf24: 0x0  nop
    ctx->pc = 0x23cf24u;
    // NOP
    // 0x23cf28: 0x0  nop
    ctx->pc = 0x23cf28u;
    // NOP
    // 0x23cf2c: 0x0  nop
    ctx->pc = 0x23cf2cu;
    // NOP
    ctx->pc = 0x23cf30u;
}
