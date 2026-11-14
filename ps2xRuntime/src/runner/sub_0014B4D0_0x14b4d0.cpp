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

// Function: sub_0014B4D0
// Address: 0x14b4d0 - 0x14b530
void sub_0014B4D0_0x14b4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B4D0_0x14b4d0");
#endif

    switch (ctx->pc) {
        case 0x14b4f0u: goto label_14b4f0;
        case 0x14b500u: goto label_14b500;
        case 0x14b518u: goto label_14b518;
        default: break;
    }

    ctx->pc = 0x14b4d0u;

    // 0x14b4d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14b4d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14b4d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b4d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14b4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14b4dc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x14b4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x14b4e0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x14b4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b4e4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x14b4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b4e8: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x14B4E8u;
    SET_GPR_U32(ctx, 31, 0x14B4F0u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x14B4E8u, 0x14B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4F0u;
label_14b4f0:
    // 0x14b4f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x14b4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b4f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14b4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14b4f8: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x14B4F8u;
    SET_GPR_U32(ctx, 31, 0x14B500u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x14B4F8u, 0x14B500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B500u;
label_14b500:
    // 0x14b500: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x14b500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14b504: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14b504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14b508: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14b508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14b50c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x14b50cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14b510: 0xc052d28  jal         func_14B4A0
    ctx->pc = 0x14B510u;
    SET_GPR_U32(ctx, 31, 0x14B518u);
    ctx->pc = 0x14B4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B4A0u, 0x14B510u, 0x14B518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B518u;
label_14b518:
    // 0x14b518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b51c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14b51cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14b520: 0x3e00008  jr          $ra
    ctx->pc = 0x14B520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B528u;
    // 0x14b528: 0x0  nop
    ctx->pc = 0x14b528u;
    // NOP
    // 0x14b52c: 0x0  nop
    ctx->pc = 0x14b52cu;
    // NOP
    ctx->pc = 0x14b530u;
}
