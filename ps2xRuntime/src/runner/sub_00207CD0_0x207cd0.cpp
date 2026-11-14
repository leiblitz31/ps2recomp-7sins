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

// Function: sub_00207CD0
// Address: 0x207cd0 - 0x207d10
void sub_00207CD0_0x207cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207CD0_0x207cd0");
#endif

    switch (ctx->pc) {
        case 0x207cf8u: goto label_207cf8;
        default: break;
    }

    ctx->pc = 0x207cd0u;

    // 0x207cd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x207cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x207cd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207cd8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x207cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x207cdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x207cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x207ce0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x207ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x207ce4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x207ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207ce8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x207ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207cec: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x207cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x207cf0: 0xc081f44  jal         func_207D10
    ctx->pc = 0x207CF0u;
    SET_GPR_U32(ctx, 31, 0x207CF8u);
    ctx->pc = 0x207D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207D10u, 0x207CF0u, 0x207CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207CF8u;
label_207cf8:
    // 0x207cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207cfc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x207cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x207d00: 0x3e00008  jr          $ra
    ctx->pc = 0x207D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207D08u;
    // 0x207d08: 0x0  nop
    ctx->pc = 0x207d08u;
    // NOP
    // 0x207d0c: 0x0  nop
    ctx->pc = 0x207d0cu;
    // NOP
    ctx->pc = 0x207d10u;
}
