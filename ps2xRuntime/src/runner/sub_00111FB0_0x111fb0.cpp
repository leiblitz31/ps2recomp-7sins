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

// Function: sub_00111FB0
// Address: 0x111fb0 - 0x111ff0
void sub_00111FB0_0x111fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111FB0_0x111fb0");
#endif

    switch (ctx->pc) {
        case 0x111fc8u: goto label_111fc8;
        case 0x111fd8u: goto label_111fd8;
        default: break;
    }

    ctx->pc = 0x111fb0u;

    // 0x111fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x111fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x111fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111fb8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x111fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x111fbc: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111fc0: 0xc04483c  jal         func_1120F0
    ctx->pc = 0x111FC0u;
    SET_GPR_U32(ctx, 31, 0x111FC8u);
    ctx->pc = 0x1120F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1120F0u, 0x111FC0u, 0x111FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FC8u;
label_111fc8:
    // 0x111fc8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x111fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111fcc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111fd0: 0xc0447fc  jal         func_111FF0
    ctx->pc = 0x111FD0u;
    SET_GPR_U32(ctx, 31, 0x111FD8u);
    ctx->pc = 0x111FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FF0u, 0x111FD0u, 0x111FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111FD8u;
label_111fd8:
    // 0x111fd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x111fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111fe0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x111fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x111FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111FECu;
    // 0x111fec: 0x0  nop
    ctx->pc = 0x111fecu;
    // NOP
    ctx->pc = 0x111ff0u;
}
