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

// Function: sub_004698E0
// Address: 0x4698e0 - 0x469910
void sub_004698E0_0x4698e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004698E0_0x4698e0");
#endif

    switch (ctx->pc) {
        case 0x4698fcu: goto label_4698fc;
        default: break;
    }

    ctx->pc = 0x4698e0u;

    // 0x4698e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4698e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4698e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4698e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4698e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4698e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4698ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4698ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4698f0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x4698f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4698f4: 0xc11a5bc  jal         func_4696F0
    ctx->pc = 0x4698F4u;
    SET_GPR_U32(ctx, 31, 0x4698FCu);
    ctx->pc = 0x4696F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4696F0u, 0x4698F4u, 0x4698FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4698FCu;
label_4698fc:
    // 0x4698fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4698fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469900: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x469900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x469904: 0x3e00008  jr          $ra
    ctx->pc = 0x469904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46990Cu;
    // 0x46990c: 0x0  nop
    ctx->pc = 0x46990cu;
    // NOP
    ctx->pc = 0x469910u;
}
