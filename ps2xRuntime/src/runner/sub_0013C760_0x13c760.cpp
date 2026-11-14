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

// Function: sub_0013C760
// Address: 0x13c760 - 0x13c7a0
void sub_0013C760_0x13c760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C760_0x13c760");
#endif

    switch (ctx->pc) {
        case 0x13c788u: goto label_13c788;
        default: break;
    }

    ctx->pc = 0x13c760u;

    // 0x13c760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13c764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c768: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13c768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13c76c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13c76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13c770: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13c770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13c774: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13c774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c778: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13c778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c77c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x13c77cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13c780: 0xc04f1e8  jal         func_13C7A0
    ctx->pc = 0x13C780u;
    SET_GPR_U32(ctx, 31, 0x13C788u);
    ctx->pc = 0x13C7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7A0u, 0x13C780u, 0x13C788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C788u;
label_13c788:
    // 0x13c788: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c78c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13c78cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13c790: 0x3e00008  jr          $ra
    ctx->pc = 0x13C790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C798u;
    // 0x13c798: 0x0  nop
    ctx->pc = 0x13c798u;
    // NOP
    // 0x13c79c: 0x0  nop
    ctx->pc = 0x13c79cu;
    // NOP
    ctx->pc = 0x13c7a0u;
}
