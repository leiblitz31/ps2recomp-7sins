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

// Function: sub_00469460
// Address: 0x469460 - 0x4694b0
void sub_00469460_0x469460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469460_0x469460");
#endif

    switch (ctx->pc) {
        case 0x469480u: goto label_469480;
        case 0x46948cu: goto label_46948c;
        case 0x46949cu: goto label_46949c;
        default: break;
    }

    ctx->pc = 0x469460u;

    // 0x469460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x469460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x469464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469468: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x469468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46946c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46946cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x469470: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x469470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x469474: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x469474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469478: 0xc11a548  jal         func_469520
    ctx->pc = 0x469478u;
    SET_GPR_U32(ctx, 31, 0x469480u);
    ctx->pc = 0x469520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469520u, 0x469478u, 0x469480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469480u;
label_469480:
    // 0x469480: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x469480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x469484: 0xc11a52c  jal         func_4694B0
    ctx->pc = 0x469484u;
    SET_GPR_U32(ctx, 31, 0x46948Cu);
    ctx->pc = 0x4694B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4694B0u, 0x469484u, 0x46948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46948Cu;
label_46948c:
    // 0x46948c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x46948cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469490: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x469490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x469494: 0xc11a548  jal         func_469520
    ctx->pc = 0x469494u;
    SET_GPR_U32(ctx, 31, 0x46949Cu);
    ctx->pc = 0x469520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469520u, 0x469494u, 0x46949Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46949Cu;
label_46949c:
    // 0x46949c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46949cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4694a0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4694a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4694a4: 0x3e00008  jr          $ra
    ctx->pc = 0x4694A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4694A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4694ACu;
    // 0x4694ac: 0x0  nop
    ctx->pc = 0x4694acu;
    // NOP
    ctx->pc = 0x4694b0u;
}
