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

// Function: sub_00469EA0
// Address: 0x469ea0 - 0x469ee0
void sub_00469EA0_0x469ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469EA0_0x469ea0");
#endif

    switch (ctx->pc) {
        case 0x469ed0u: goto label_469ed0;
        default: break;
    }

    ctx->pc = 0x469ea0u;

    // 0x469ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x469ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x469ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469ea8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x469eac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x469eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x469eb0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x469eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x469eb4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x469eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x469eb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469ebc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x469ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469ec0: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x469ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469ec4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x469ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x469ec8: 0xc11aa94  jal         func_46AA50
    ctx->pc = 0x469EC8u;
    SET_GPR_U32(ctx, 31, 0x469ED0u);
    ctx->pc = 0x46AA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AA50u, 0x469EC8u, 0x469ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469ED0u;
label_469ed0:
    // 0x469ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469ed4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x469ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x469ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x469ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469EE0u;
}
