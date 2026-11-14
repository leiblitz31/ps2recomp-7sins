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

// Function: sub_00268770
// Address: 0x268770 - 0x2687b0
void sub_00268770_0x268770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00268770_0x268770");
#endif

    switch (ctx->pc) {
        case 0x268788u: goto label_268788;
        case 0x268798u: goto label_268798;
        default: break;
    }

    ctx->pc = 0x268770u;

    // 0x268770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x268774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x268774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x268778: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x268778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26877c: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x26877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x268780: 0xc09a2b4  jal         func_268AD0
    ctx->pc = 0x268780u;
    SET_GPR_U32(ctx, 31, 0x268788u);
    ctx->pc = 0x268AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268AD0u, 0x268780u, 0x268788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268788u;
label_268788:
    // 0x268788: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26878c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26878cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268790: 0xc09a274  jal         func_2689D0
    ctx->pc = 0x268790u;
    SET_GPR_U32(ctx, 31, 0x268798u);
    ctx->pc = 0x2689D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689D0u, 0x268790u, 0x268798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268798u;
label_268798:
    // 0x268798: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x268798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26879c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26879cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2687a0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2687a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2687a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2687A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2687A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2687ACu;
    // 0x2687ac: 0x0  nop
    ctx->pc = 0x2687acu;
    // NOP
    ctx->pc = 0x2687b0u;
}
