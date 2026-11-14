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

// Function: sub_004AB8F8
// Address: 0x4ab8f8 - 0x4ab950
void sub_004AB8F8_0x4ab8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AB8F8_0x4ab8f8");
#endif

    switch (ctx->pc) {
        case 0x4ab900u: goto label_4ab900;
        default: break;
    }

    ctx->pc = 0x4ab8f8u;

    // 0x4ab8f8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x4ab8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ab8fc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x4ab8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_4ab900:
    // 0x4ab900: 0x5445000e  bnel        $v0, $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x4AB900u;
    {
        const bool branch_taken_0x4ab900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x4ab900) {
            ctx->pc = 0x4AB904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB900u;
            // 0x4ab904: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB93Cu;
            goto label_4ab93c;
        }
    }
    ctx->pc = 0x4AB908u;
    // 0x4ab908: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x4ab908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ab90c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ab910: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AB910u;
    {
        const bool branch_taken_0x4ab910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ab910) {
            ctx->pc = 0x4AB914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AB910u;
            // 0x4ab914: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AB928u;
            goto label_4ab928;
        }
    }
    ctx->pc = 0x4AB918u;
    // 0x4ab918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4ab918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ab91c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ab91cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ab920: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ab924: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4ab924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4ab928:
    // 0x4ab928: 0x10a20007  beq         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AB928u;
    {
        const bool branch_taken_0x4ab928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ab928) {
            ctx->pc = 0x4AB948u;
            goto label_4ab948;
        }
    }
    ctx->pc = 0x4AB930u;
    // 0x4ab930: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4ab930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4ab934: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AB938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB934u;
        // 0x4ab938: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB93Cu;
label_4ab93c:
    // 0x4ab93c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x4ab93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x4ab940: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4AB940u;
    {
        const bool branch_taken_0x4ab940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AB940u;
        // 0x4ab944: 0x2462000c  addiu       $v0, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ab940) {
            ctx->pc = 0x4AB900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ab900;
        }
    }
    ctx->pc = 0x4AB948u;
label_4ab948:
    // 0x4ab948: 0x3e00008  jr          $ra
    ctx->pc = 0x4AB948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AB948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AB950u;
}
