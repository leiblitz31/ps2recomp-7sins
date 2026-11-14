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

// Function: sub_00412918
// Address: 0x412918 - 0x412958
void sub_00412918_0x412918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412918_0x412918");
#endif

    switch (ctx->pc) {
        case 0x412920u: goto label_412920;
        default: break;
    }

    ctx->pc = 0x412918u;

    // 0x412918: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x412918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x41291c: 0x0  nop
    ctx->pc = 0x41291cu;
    // NOP
label_412920:
    // 0x412920: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x412920u;
    {
        const bool branch_taken_0x412920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x412920) {
            ctx->pc = 0x41293Cu;
            goto label_41293c;
        }
    }
    ctx->pc = 0x412928u;
    // 0x412928: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x412928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x41292c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41292Cu;
    {
        const bool branch_taken_0x41292c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x41292c) {
            ctx->pc = 0x412930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41292Cu;
            // 0x412930: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412920;
        }
    }
    ctx->pc = 0x412934u;
    // 0x412934: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x412934u;
    {
        const bool branch_taken_0x412934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x412934) {
            ctx->pc = 0x412938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412934u;
            // 0x412938: 0xac66000c  sw          $a2, 0xC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412944u;
            goto label_412944;
        }
    }
    ctx->pc = 0x41293Cu;
label_41293c:
    // 0x41293c: 0x3e00008  jr          $ra
    ctx->pc = 0x41293Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41293Cu;
        // 0x412940: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41293Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412944u;
label_412944:
    // 0x412944: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x412944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x412948: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x412948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x41294c: 0x3e00008  jr          $ra
    ctx->pc = 0x41294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41294Cu;
        // 0x412950: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412954u;
    // 0x412954: 0x0  nop
    ctx->pc = 0x412954u;
    // NOP
    ctx->pc = 0x412958u;
}
