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

// Function: sub_002460C0
// Address: 0x2460c0 - 0x246100
void sub_002460C0_0x2460c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002460C0_0x2460c0");
#endif

    switch (ctx->pc) {
        case 0x2460e8u: goto label_2460e8;
        default: break;
    }

    ctx->pc = 0x2460c0u;

    // 0x2460c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2460c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2460c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2460c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2460c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2460c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2460cc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2460ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2460d0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2460d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2460d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2460d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2460d8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2460d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2460dc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2460dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2460e0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2460E0u;
    SET_GPR_U32(ctx, 31, 0x2460E8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2460E0u, 0x2460E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2460E8u;
label_2460e8:
    // 0x2460e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2460e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2460ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2460ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2460f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2460F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2460F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2460F8u;
    // 0x2460f8: 0x0  nop
    ctx->pc = 0x2460f8u;
    // NOP
    // 0x2460fc: 0x0  nop
    ctx->pc = 0x2460fcu;
    // NOP
    ctx->pc = 0x246100u;
}
