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

// Function: sub_002796E0
// Address: 0x2796e0 - 0x279720
void sub_002796E0_0x2796e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002796E0_0x2796e0");
#endif

    switch (ctx->pc) {
        case 0x2796f8u: goto label_2796f8;
        case 0x27970cu: goto label_27970c;
        default: break;
    }

    ctx->pc = 0x2796e0u;

    // 0x2796e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2796e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2796e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2796e8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2796e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2796ec: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x2796ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2796f0: 0xc09e648  jal         func_279920
    ctx->pc = 0x2796F0u;
    SET_GPR_U32(ctx, 31, 0x2796F8u);
    ctx->pc = 0x279920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279920u, 0x2796F0u, 0x2796F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2796F8u;
label_2796f8:
    // 0x2796f8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2796f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2796fc: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x2796fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x279700: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x279700u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x279704: 0xc09e5c8  jal         func_279720
    ctx->pc = 0x279704u;
    SET_GPR_U32(ctx, 31, 0x27970Cu);
    ctx->pc = 0x279720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279720u, 0x279704u, 0x27970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27970Cu;
label_27970c:
    // 0x27970c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x27970cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x279710: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x279710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279714: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x279714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x279718: 0x3e00008  jr          $ra
    ctx->pc = 0x279718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279720u;
}
