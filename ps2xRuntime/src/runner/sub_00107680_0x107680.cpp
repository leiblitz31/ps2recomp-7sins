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

// Function: sub_00107680
// Address: 0x107680 - 0x1076c0
void sub_00107680_0x107680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107680_0x107680");
#endif

    switch (ctx->pc) {
        case 0x1076a8u: goto label_1076a8;
        default: break;
    }

    ctx->pc = 0x107680u;

    // 0x107680: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x107680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x107684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x107684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x107688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x107688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10768c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x10768cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x107690: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x107690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x107694: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x107694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x107698: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x107698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10769c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x10769cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1076a0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1076A0u;
    SET_GPR_U32(ctx, 31, 0x1076A8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1076A0u, 0x1076A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076A8u;
label_1076a8:
    // 0x1076a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1076a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1076ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1076acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1076b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1076B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1076B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1076B8u;
    // 0x1076b8: 0x0  nop
    ctx->pc = 0x1076b8u;
    // NOP
    // 0x1076bc: 0x0  nop
    ctx->pc = 0x1076bcu;
    // NOP
    ctx->pc = 0x1076c0u;
}
