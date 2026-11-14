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

// Function: sub_00120460
// Address: 0x120460 - 0x1204a0
void sub_00120460_0x120460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120460_0x120460");
#endif

    switch (ctx->pc) {
        case 0x12048cu: goto label_12048c;
        default: break;
    }

    ctx->pc = 0x120460u;

    // 0x120460: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x120460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x120464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x120464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x120468: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x120468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x12046c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x12046cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x120470: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x120470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x120474: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x120474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120478: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x120478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12047c: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x12047cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x120480: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x120480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x120484: 0xc048128  jal         func_1204A0
    ctx->pc = 0x120484u;
    SET_GPR_U32(ctx, 31, 0x12048Cu);
    ctx->pc = 0x1204A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1204A0u, 0x120484u, 0x12048Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12048Cu;
label_12048c:
    // 0x12048c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12048cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120490: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x120490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x120494: 0x3e00008  jr          $ra
    ctx->pc = 0x120494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12049Cu;
    // 0x12049c: 0x0  nop
    ctx->pc = 0x12049cu;
    // NOP
    ctx->pc = 0x1204a0u;
}
