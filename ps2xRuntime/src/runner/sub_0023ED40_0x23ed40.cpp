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

// Function: sub_0023ED40
// Address: 0x23ed40 - 0x23ed70
void sub_0023ED40_0x23ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023ED40_0x23ed40");
#endif

    switch (ctx->pc) {
        case 0x23ed5cu: goto label_23ed5c;
        default: break;
    }

    ctx->pc = 0x23ed40u;

    // 0x23ed40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ed44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23ed44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23ed48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x23ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x23ed4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x23ed4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23ed50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23ed50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ed54: 0xc08f338  jal         func_23CCE0
    ctx->pc = 0x23ED54u;
    SET_GPR_U32(ctx, 31, 0x23ED5Cu);
    ctx->pc = 0x23CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CCE0u, 0x23ED54u, 0x23ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED5Cu;
label_23ed5c:
    // 0x23ed5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23ed5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23ed60: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x23ed60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x23ed64: 0x3e00008  jr          $ra
    ctx->pc = 0x23ED64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23ED64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23ED6Cu;
    // 0x23ed6c: 0x0  nop
    ctx->pc = 0x23ed6cu;
    // NOP
    ctx->pc = 0x23ed70u;
}
