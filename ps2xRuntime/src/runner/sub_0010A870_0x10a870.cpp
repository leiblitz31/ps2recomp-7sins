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

// Function: sub_0010A870
// Address: 0x10a870 - 0x10a8b0
void sub_0010A870_0x10a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A870_0x10a870");
#endif

    switch (ctx->pc) {
        case 0x10a888u: goto label_10a888;
        case 0x10a89cu: goto label_10a89c;
        default: break;
    }

    ctx->pc = 0x10a870u;

    // 0x10a870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10a878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10a87c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x10a87cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x10a880: 0xc042aac  jal         func_10AAB0
    ctx->pc = 0x10A880u;
    SET_GPR_U32(ctx, 31, 0x10A888u);
    ctx->pc = 0x10AAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AAB0u, 0x10A880u, 0x10A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A888u;
label_10a888:
    // 0x10a888: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10a888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a88c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x10a88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x10a890: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10a890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a894: 0xc042a2c  jal         func_10A8B0
    ctx->pc = 0x10A894u;
    SET_GPR_U32(ctx, 31, 0x10A89Cu);
    ctx->pc = 0x10A8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A8B0u, 0x10A894u, 0x10A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A89Cu;
label_10a89c:
    // 0x10a89c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10a89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a8a4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10a8a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10a8a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10A8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A8B0u;
}
