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

// Function: sub_001632B0
// Address: 0x1632b0 - 0x1632f0
void sub_001632B0_0x1632b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001632B0_0x1632b0");
#endif

    switch (ctx->pc) {
        case 0x1632d8u: goto label_1632d8;
        default: break;
    }

    ctx->pc = 0x1632b0u;

    // 0x1632b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1632b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1632b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1632b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1632b8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1632b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1632bc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1632bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1632c0: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x1632c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x1632c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1632c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1632c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1632c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1632cc: 0x27a6001c  addiu       $a2, $sp, 0x1C
    ctx->pc = 0x1632ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1632d0: 0xc058cbc  jal         func_1632F0
    ctx->pc = 0x1632D0u;
    SET_GPR_U32(ctx, 31, 0x1632D8u);
    ctx->pc = 0x1632F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1632F0u, 0x1632D0u, 0x1632D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1632D8u;
label_1632d8:
    // 0x1632d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1632d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1632dc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1632dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1632e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1632E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1632E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1632E8u;
    // 0x1632e8: 0x0  nop
    ctx->pc = 0x1632e8u;
    // NOP
    // 0x1632ec: 0x0  nop
    ctx->pc = 0x1632ecu;
    // NOP
    ctx->pc = 0x1632f0u;
}
