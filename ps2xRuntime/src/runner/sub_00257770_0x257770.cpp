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

// Function: sub_00257770
// Address: 0x257770 - 0x2577b0
void sub_00257770_0x257770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257770_0x257770");
#endif

    switch (ctx->pc) {
        case 0x257788u: goto label_257788;
        case 0x257798u: goto label_257798;
        default: break;
    }

    ctx->pc = 0x257770u;

    // 0x257770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x257774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x257778: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x257778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25777c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25777cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257780: 0xc095dec  jal         func_2577B0
    ctx->pc = 0x257780u;
    SET_GPR_U32(ctx, 31, 0x257788u);
    ctx->pc = 0x2577B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2577B0u, 0x257780u, 0x257788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257788u;
label_257788:
    // 0x257788: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x257788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x25778c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x25778cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257790: 0xc095e6c  jal         func_2579B0
    ctx->pc = 0x257790u;
    SET_GPR_U32(ctx, 31, 0x257798u);
    ctx->pc = 0x2579B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2579B0u, 0x257790u, 0x257798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257798u;
label_257798:
    // 0x257798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x257798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25779c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x25779cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2577a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2577A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2577A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2577A8u;
    // 0x2577a8: 0x0  nop
    ctx->pc = 0x2577a8u;
    // NOP
    // 0x2577ac: 0x0  nop
    ctx->pc = 0x2577acu;
    // NOP
    ctx->pc = 0x2577b0u;
}
