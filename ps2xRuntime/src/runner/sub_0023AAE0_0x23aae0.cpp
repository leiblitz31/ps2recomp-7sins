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

// Function: sub_0023AAE0
// Address: 0x23aae0 - 0x23ab10
void sub_0023AAE0_0x23aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AAE0_0x23aae0");
#endif

    switch (ctx->pc) {
        case 0x23aaf8u: goto label_23aaf8;
        default: break;
    }

    ctx->pc = 0x23aae0u;

    // 0x23aae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23aae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23aae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23aae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23aae8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23aaec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aaf0: 0xc08eb80  jal         func_23AE00
    ctx->pc = 0x23AAF0u;
    SET_GPR_U32(ctx, 31, 0x23AAF8u);
    ctx->pc = 0x23AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AE00u, 0x23AAF0u, 0x23AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAF8u;
label_23aaf8:
    // 0x23aaf8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x23aaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aafc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ab00: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ab04: 0x3e00008  jr          $ra
    ctx->pc = 0x23AB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AB0Cu;
    // 0x23ab0c: 0x0  nop
    ctx->pc = 0x23ab0cu;
    // NOP
    ctx->pc = 0x23ab10u;
}
