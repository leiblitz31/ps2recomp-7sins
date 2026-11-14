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

// Function: sub_004A6960
// Address: 0x4a6960 - 0x4a69a8
void sub_004A6960_0x4a6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6960_0x4a6960");
#endif

    switch (ctx->pc) {
        case 0x4a6978u: goto label_4a6978;
        default: break;
    }

    ctx->pc = 0x4a6960u;

    // 0x4a6960: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x4a6960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x4a6964: 0x24a70020  addiu       $a3, $a1, 0x20
    ctx->pc = 0x4a6964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x4a6968: 0x1087000c  beq         $a0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x4A6968u;
    {
        const bool branch_taken_0x4a6968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x4A696Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6968u;
        // 0x4a696c: 0x2485ffc0  addiu       $a1, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6968) {
            ctx->pc = 0x4A699Cu;
            goto label_4a699c;
        }
    }
    ctx->pc = 0x4A6970u;
    // 0x4a6970: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x4a6970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a6974: 0x0  nop
    ctx->pc = 0x4a6974u;
    // NOP
label_4a6978:
    // 0x4a6978: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a6978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a697c: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x4a697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x4a6980: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A6980u;
    {
        const bool branch_taken_0x4a6980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a6980) {
            ctx->pc = 0x4A6984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A6980u;
            // 0x4a6984: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A6994u;
            goto label_4a6994;
        }
    }
    ctx->pc = 0x4A6988u;
    // 0x4a6988: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x4a6988u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x4a698c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A698Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A698Cu;
        // 0x4a6990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A698Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A6994u;
label_4a6994:
    // 0x4a6994: 0x1487fff8  bne         $a0, $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x4A6994u;
    {
        const bool branch_taken_0x4a6994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x4A6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A6994u;
        // 0x4a6998: 0x2485ffc0  addiu       $a1, $a0, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a6994) {
            ctx->pc = 0x4A6978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a6978;
        }
    }
    ctx->pc = 0x4A699Cu;
label_4a699c:
    // 0x4a699c: 0x3e00008  jr          $ra
    ctx->pc = 0x4A699Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A69A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A699Cu;
        // 0x4a69a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A699Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A69A4u;
    // 0x4a69a4: 0x0  nop
    ctx->pc = 0x4a69a4u;
    // NOP
    ctx->pc = 0x4a69a8u;
}
