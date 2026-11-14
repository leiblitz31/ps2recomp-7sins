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

// Function: sub_002817D0
// Address: 0x2817d0 - 0x281810
void sub_002817D0_0x2817d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002817D0_0x2817d0");
#endif

    switch (ctx->pc) {
        case 0x2817e8u: goto label_2817e8;
        case 0x2817fcu: goto label_2817fc;
        default: break;
    }

    ctx->pc = 0x2817d0u;

    // 0x2817d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2817d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2817d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2817d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2817d8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2817d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2817dc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2817dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2817e0: 0xc0a0684  jal         func_281A10
    ctx->pc = 0x2817E0u;
    SET_GPR_U32(ctx, 31, 0x2817E8u);
    ctx->pc = 0x281A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281A10u, 0x2817E0u, 0x2817E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817E8u;
label_2817e8:
    // 0x2817e8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2817e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2817ec: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x2817ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2817f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2817f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2817f4: 0xc0a0604  jal         func_281810
    ctx->pc = 0x2817F4u;
    SET_GPR_U32(ctx, 31, 0x2817FCu);
    ctx->pc = 0x281810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281810u, 0x2817F4u, 0x2817FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2817FCu;
label_2817fc:
    // 0x2817fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2817fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281804: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x281804u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281808: 0x3e00008  jr          $ra
    ctx->pc = 0x281808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281810u;
}
