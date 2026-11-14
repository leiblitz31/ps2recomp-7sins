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

// Function: sub_0020B7E0
// Address: 0x20b7e0 - 0x20b820
void sub_0020B7E0_0x20b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B7E0_0x20b7e0");
#endif

    switch (ctx->pc) {
        case 0x20b808u: goto label_20b808;
        default: break;
    }

    ctx->pc = 0x20b7e0u;

    // 0x20b7e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20b7e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x20b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x20b7ec: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x20b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x20b7f0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x20b7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x20b7f4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x20b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b7f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b7fc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x20b7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b800: 0xc041934  jal         func_1064D0
    ctx->pc = 0x20B800u;
    SET_GPR_U32(ctx, 31, 0x20B808u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x20B800u, 0x20B808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B808u;
label_20b808:
    // 0x20b808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20b808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20b80c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x20b80cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x20b810: 0x3e00008  jr          $ra
    ctx->pc = 0x20B810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B818u;
    // 0x20b818: 0x0  nop
    ctx->pc = 0x20b818u;
    // NOP
    // 0x20b81c: 0x0  nop
    ctx->pc = 0x20b81cu;
    // NOP
    ctx->pc = 0x20b820u;
}
