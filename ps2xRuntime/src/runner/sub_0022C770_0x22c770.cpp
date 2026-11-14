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

// Function: sub_0022C770
// Address: 0x22c770 - 0x22c7b0
void sub_0022C770_0x22c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C770_0x22c770");
#endif

    switch (ctx->pc) {
        case 0x22c790u: goto label_22c790;
        default: break;
    }

    ctx->pc = 0x22c770u;

    // 0x22c770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22c774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c778: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x22c778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x22c77c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22c77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x22c780: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x22c780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c784: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22c784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22c788: 0xc08b1ec  jal         func_22C7B0
    ctx->pc = 0x22C788u;
    SET_GPR_U32(ctx, 31, 0x22C790u);
    ctx->pc = 0x22C7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22C7B0u, 0x22C788u, 0x22C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22C790u;
label_22c790:
    // 0x22c790: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x22c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c798: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x22c798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C7A4u;
    // 0x22c7a4: 0x0  nop
    ctx->pc = 0x22c7a4u;
    // NOP
    // 0x22c7a8: 0x0  nop
    ctx->pc = 0x22c7a8u;
    // NOP
    // 0x22c7ac: 0x0  nop
    ctx->pc = 0x22c7acu;
    // NOP
    ctx->pc = 0x22c7b0u;
}
