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

// Function: sub_00117A40
// Address: 0x117a40 - 0x117a80
void sub_00117A40_0x117a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117A40_0x117a40");
#endif

    switch (ctx->pc) {
        case 0x117a5cu: goto label_117a5c;
        case 0x117a6cu: goto label_117a6c;
        default: break;
    }

    ctx->pc = 0x117a40u;

    // 0x117a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x117a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x117a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x117a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x117a4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x117a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x117a50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x117a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117a54: 0xc045578  jal         func_1155E0
    ctx->pc = 0x117A54u;
    SET_GPR_U32(ctx, 31, 0x117A5Cu);
    ctx->pc = 0x1155E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1155E0u, 0x117A54u, 0x117A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A5Cu;
label_117a5c:
    // 0x117a5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x117a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x117a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117a64: 0xc045ea0  jal         func_117A80
    ctx->pc = 0x117A64u;
    SET_GPR_U32(ctx, 31, 0x117A6Cu);
    ctx->pc = 0x117A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A80u, 0x117A64u, 0x117A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A6Cu;
label_117a6c:
    // 0x117a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117a70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x117a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x117a74: 0x3e00008  jr          $ra
    ctx->pc = 0x117A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A7Cu;
    // 0x117a7c: 0x0  nop
    ctx->pc = 0x117a7cu;
    // NOP
    ctx->pc = 0x117a80u;
}
