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

// Function: sub_001562E0
// Address: 0x1562e0 - 0x156320
void sub_001562E0_0x1562e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001562E0_0x1562e0");
#endif

    switch (ctx->pc) {
        case 0x1562f8u: goto label_1562f8;
        case 0x15630cu: goto label_15630c;
        default: break;
    }

    ctx->pc = 0x1562e0u;

    // 0x1562e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1562e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1562e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1562e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1562e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1562e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1562ec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x1562ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1562f0: 0xc055948  jal         func_156520
    ctx->pc = 0x1562F0u;
    SET_GPR_U32(ctx, 31, 0x1562F8u);
    ctx->pc = 0x156520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156520u, 0x1562F0u, 0x1562F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1562F8u;
label_1562f8:
    // 0x1562f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1562f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1562fc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x1562fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x156300: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x156300u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156304: 0xc0558c8  jal         func_156320
    ctx->pc = 0x156304u;
    SET_GPR_U32(ctx, 31, 0x15630Cu);
    ctx->pc = 0x156320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156320u, 0x156304u, 0x15630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15630Cu;
label_15630c:
    // 0x15630c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156314: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x156314u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x156318: 0x3e00008  jr          $ra
    ctx->pc = 0x156318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156320u;
}
