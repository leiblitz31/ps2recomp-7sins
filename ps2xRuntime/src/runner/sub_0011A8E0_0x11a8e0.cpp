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

// Function: sub_0011A8E0
// Address: 0x11a8e0 - 0x11a920
void sub_0011A8E0_0x11a8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A8E0_0x11a8e0");
#endif

    switch (ctx->pc) {
        case 0x11a908u: goto label_11a908;
        default: break;
    }

    ctx->pc = 0x11a8e0u;

    // 0x11a8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11a8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11a8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11a8e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11a8ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11a8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11a8f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x11a8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x11a8f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11a8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11a8f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11a8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11a8fc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x11a8fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11a900: 0xc041934  jal         func_1064D0
    ctx->pc = 0x11A900u;
    SET_GPR_U32(ctx, 31, 0x11A908u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x11A900u, 0x11A908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A908u;
label_11a908:
    // 0x11a908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11a908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11a90c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11a910: 0x3e00008  jr          $ra
    ctx->pc = 0x11A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A918u;
    // 0x11a918: 0x0  nop
    ctx->pc = 0x11a918u;
    // NOP
    // 0x11a91c: 0x0  nop
    ctx->pc = 0x11a91cu;
    // NOP
    ctx->pc = 0x11a920u;
}
