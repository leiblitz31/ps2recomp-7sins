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

// Function: sub_0010CEC0
// Address: 0x10cec0 - 0x10cf00
void sub_0010CEC0_0x10cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CEC0_0x10cec0");
#endif

    switch (ctx->pc) {
        case 0x10cee4u: goto label_10cee4;
        default: break;
    }

    ctx->pc = 0x10cec0u;

    // 0x10cec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10cec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10cec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10cecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x10ced0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10ced0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ced4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ced4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ced8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10ced8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cedc: 0xc0433c0  jal         func_10CF00
    ctx->pc = 0x10CEDCu;
    SET_GPR_U32(ctx, 31, 0x10CEE4u);
    ctx->pc = 0x10CF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF00u, 0x10CEDCu, 0x10CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CEE4u;
label_10cee4:
    // 0x10cee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10cee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cee8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10cee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10ceec: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CEF4u;
    // 0x10cef4: 0x0  nop
    ctx->pc = 0x10cef4u;
    // NOP
    // 0x10cef8: 0x0  nop
    ctx->pc = 0x10cef8u;
    // NOP
    // 0x10cefc: 0x0  nop
    ctx->pc = 0x10cefcu;
    // NOP
    ctx->pc = 0x10cf00u;
}
