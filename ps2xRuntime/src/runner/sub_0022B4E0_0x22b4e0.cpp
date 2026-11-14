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

// Function: sub_0022B4E0
// Address: 0x22b4e0 - 0x22b520
void sub_0022B4E0_0x22b4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B4E0_0x22b4e0");
#endif

    switch (ctx->pc) {
        case 0x22b4fcu: goto label_22b4fc;
        default: break;
    }

    ctx->pc = 0x22b4e0u;

    // 0x22b4e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b4e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b4e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22b4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22b4ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b4f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22b4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22b4f4: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x22B4F4u;
    SET_GPR_U32(ctx, 31, 0x22B4FCu);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x22B4F4u, 0x22B4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B4FCu;
label_22b4fc:
    // 0x22b4fc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x22b4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b500: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22b500u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22b504: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b508: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b50c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x22b50cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x22b510: 0x3e00008  jr          $ra
    ctx->pc = 0x22B510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B518u;
    // 0x22b518: 0x0  nop
    ctx->pc = 0x22b518u;
    // NOP
    // 0x22b51c: 0x0  nop
    ctx->pc = 0x22b51cu;
    // NOP
    ctx->pc = 0x22b520u;
}
