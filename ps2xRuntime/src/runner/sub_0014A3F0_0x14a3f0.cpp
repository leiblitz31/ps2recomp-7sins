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

// Function: sub_0014A3F0
// Address: 0x14a3f0 - 0x14a430
void sub_0014A3F0_0x14a3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A3F0_0x14a3f0");
#endif

    switch (ctx->pc) {
        case 0x14a408u: goto label_14a408;
        case 0x14a41cu: goto label_14a41c;
        default: break;
    }

    ctx->pc = 0x14a3f0u;

    // 0x14a3f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14a3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14a3f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a3f8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x14a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x14a3fc: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x14a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x14a400: 0xc05298c  jal         func_14A630
    ctx->pc = 0x14A400u;
    SET_GPR_U32(ctx, 31, 0x14A408u);
    ctx->pc = 0x14A630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A630u, 0x14A400u, 0x14A408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A408u;
label_14a408:
    // 0x14a408: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x14a408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a40c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x14a40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x14a410: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14a410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a414: 0xc05290c  jal         func_14A430
    ctx->pc = 0x14A414u;
    SET_GPR_U32(ctx, 31, 0x14A41Cu);
    ctx->pc = 0x14A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A430u, 0x14A414u, 0x14A41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A41Cu;
label_14a41c:
    // 0x14a41c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x14a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a424: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x14a424u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x14a428: 0x3e00008  jr          $ra
    ctx->pc = 0x14A428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A430u;
}
