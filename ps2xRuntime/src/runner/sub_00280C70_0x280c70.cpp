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

// Function: sub_00280C70
// Address: 0x280c70 - 0x280cc0
void sub_00280C70_0x280c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280C70_0x280c70");
#endif

    switch (ctx->pc) {
        case 0x280c90u: goto label_280c90;
        case 0x280c9cu: goto label_280c9c;
        case 0x280cacu: goto label_280cac;
        default: break;
    }

    ctx->pc = 0x280c70u;

    // 0x280c70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x280c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x280c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280c78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x280c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x280c7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x280c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x280c80: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x280c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x280c84: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x280c84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280c88: 0xc0a030c  jal         func_280C30
    ctx->pc = 0x280C88u;
    SET_GPR_U32(ctx, 31, 0x280C90u);
    ctx->pc = 0x280C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280C30u, 0x280C88u, 0x280C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C90u;
label_280c90:
    // 0x280c90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x280c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x280c94: 0xc0a0330  jal         func_280CC0
    ctx->pc = 0x280C94u;
    SET_GPR_U32(ctx, 31, 0x280C9Cu);
    ctx->pc = 0x280CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280CC0u, 0x280C94u, 0x280C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280C9Cu;
label_280c9c:
    // 0x280c9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x280c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280ca0: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x280ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x280ca4: 0xc0a030c  jal         func_280C30
    ctx->pc = 0x280CA4u;
    SET_GPR_U32(ctx, 31, 0x280CACu);
    ctx->pc = 0x280C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280C30u, 0x280CA4u, 0x280CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x280CACu;
label_280cac:
    // 0x280cac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280cb0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x280cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x280CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280CBCu;
    // 0x280cbc: 0x0  nop
    ctx->pc = 0x280cbcu;
    // NOP
    ctx->pc = 0x280cc0u;
}
