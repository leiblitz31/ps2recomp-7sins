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

// Function: sub_0024D510
// Address: 0x24d510 - 0x24d570
void sub_0024D510_0x24d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D510_0x24d510");
#endif

    switch (ctx->pc) {
        case 0x24d530u: goto label_24d530;
        case 0x24d540u: goto label_24d540;
        case 0x24d558u: goto label_24d558;
        default: break;
    }

    ctx->pc = 0x24d510u;

    // 0x24d510: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x24d510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24d514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d518: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24d518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x24d51c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x24d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x24d520: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x24d520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24d524: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24d524u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d528: 0xc0923a4  jal         func_248E90
    ctx->pc = 0x24D528u;
    SET_GPR_U32(ctx, 31, 0x24D530u);
    ctx->pc = 0x248E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E90u, 0x24D528u, 0x24D530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D530u;
label_24d530:
    // 0x24d530: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d534: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d538: 0xc0423c4  jal         func_108F10
    ctx->pc = 0x24D538u;
    SET_GPR_U32(ctx, 31, 0x24D540u);
    ctx->pc = 0x108F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108F10u, 0x24D538u, 0x24D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D540u;
label_24d540:
    // 0x24d540: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x24d540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d544: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24d544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x24d548: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x24d548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d54c: 0x27a5001c  addiu       $a1, $sp, 0x1C
    ctx->pc = 0x24d54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x24d550: 0xc0923a4  jal         func_248E90
    ctx->pc = 0x24D550u;
    SET_GPR_U32(ctx, 31, 0x24D558u);
    ctx->pc = 0x248E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248E90u, 0x24D550u, 0x24D558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D558u;
label_24d558:
    // 0x24d558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d55c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x24d55cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x24d560: 0x3e00008  jr          $ra
    ctx->pc = 0x24D560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D568u;
    // 0x24d568: 0x0  nop
    ctx->pc = 0x24d568u;
    // NOP
    // 0x24d56c: 0x0  nop
    ctx->pc = 0x24d56cu;
    // NOP
    ctx->pc = 0x24d570u;
}
