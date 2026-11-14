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

// Function: sub_002662D0
// Address: 0x2662d0 - 0x266310
void sub_002662D0_0x2662d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002662D0_0x2662d0");
#endif

    switch (ctx->pc) {
        case 0x2662f8u: goto label_2662f8;
        default: break;
    }

    ctx->pc = 0x2662d0u;

    // 0x2662d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2662d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2662d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2662d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2662d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2662d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2662dc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2662dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2662e0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2662e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2662e4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2662e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2662e8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2662e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2662ec: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2662ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2662f0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2662F0u;
    SET_GPR_U32(ctx, 31, 0x2662F8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2662F0u, 0x2662F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2662F8u;
label_2662f8:
    // 0x2662f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2662f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2662fc: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2662fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x266300: 0x3e00008  jr          $ra
    ctx->pc = 0x266300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266308u;
    // 0x266308: 0x0  nop
    ctx->pc = 0x266308u;
    // NOP
    // 0x26630c: 0x0  nop
    ctx->pc = 0x26630cu;
    // NOP
    ctx->pc = 0x266310u;
}
