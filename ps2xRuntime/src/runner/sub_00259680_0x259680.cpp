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

// Function: sub_00259680
// Address: 0x259680 - 0x2596c0
void sub_00259680_0x259680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259680_0x259680");
#endif

    switch (ctx->pc) {
        case 0x259698u: goto label_259698;
        case 0x2596a8u: goto label_2596a8;
        default: break;
    }

    ctx->pc = 0x259680u;

    // 0x259680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x259680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x259684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x259684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x259688: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x259688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25968c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x25968cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x259690: 0xc0965f0  jal         func_2597C0
    ctx->pc = 0x259690u;
    SET_GPR_U32(ctx, 31, 0x259698u);
    ctx->pc = 0x2597C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2597C0u, 0x259690u, 0x259698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259698u;
label_259698:
    // 0x259698: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x259698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25969c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25969cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2596a0: 0xc0965b0  jal         func_2596C0
    ctx->pc = 0x2596A0u;
    SET_GPR_U32(ctx, 31, 0x2596A8u);
    ctx->pc = 0x2596C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2596C0u, 0x2596A0u, 0x2596A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596A8u;
label_2596a8:
    // 0x2596a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2596a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2596ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2596acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2596b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2596b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2596b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2596B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2596B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2596BCu;
    // 0x2596bc: 0x0  nop
    ctx->pc = 0x2596bcu;
    // NOP
    ctx->pc = 0x2596c0u;
}
