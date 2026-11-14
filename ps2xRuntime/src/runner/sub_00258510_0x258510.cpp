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

// Function: sub_00258510
// Address: 0x258510 - 0x258560
void sub_00258510_0x258510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258510_0x258510");
#endif

    switch (ctx->pc) {
        case 0x258528u: goto label_258528;
        case 0x258534u: goto label_258534;
        default: break;
    }

    ctx->pc = 0x258510u;

    // 0x258510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258514: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258518: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25851c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x25851cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258520: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x258520u;
    {
        const bool branch_taken_0x258520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258520) {
            ctx->pc = 0x258540u;
            goto label_258540;
        }
    }
    ctx->pc = 0x258528u;
label_258528:
    // 0x258528: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25852c: 0xc096158  jal         func_258560
    ctx->pc = 0x25852Cu;
    SET_GPR_U32(ctx, 31, 0x258534u);
    ctx->pc = 0x258560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258560u, 0x25852Cu, 0x258534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258534u;
label_258534:
    // 0x258534: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x258534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258538: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x258538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x25853c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x25853cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_258540:
    // 0x258540: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258544: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258548: 0x1483fff7  bne         $a0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x258548u;
    {
        const bool branch_taken_0x258548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x258548) {
            ctx->pc = 0x258528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_258528;
        }
    }
    ctx->pc = 0x258550u;
    // 0x258550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258554: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258554u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258558: 0x3e00008  jr          $ra
    ctx->pc = 0x258558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258560u;
}
