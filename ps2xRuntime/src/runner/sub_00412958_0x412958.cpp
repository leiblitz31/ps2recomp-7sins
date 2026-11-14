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

// Function: sub_00412958
// Address: 0x412958 - 0x412990
void sub_00412958_0x412958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412958_0x412958");
#endif

    switch (ctx->pc) {
        case 0x412960u: goto label_412960;
        default: break;
    }

    ctx->pc = 0x412958u;

    // 0x412958: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x412958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x41295c: 0x0  nop
    ctx->pc = 0x41295cu;
    // NOP
label_412960:
    // 0x412960: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x412960u;
    {
        const bool branch_taken_0x412960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x412960) {
            ctx->pc = 0x41297Cu;
            goto label_41297c;
        }
    }
    ctx->pc = 0x412968u;
    // 0x412968: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x412968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x41296c: 0x5445fffc  bnel        $v0, $a1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x41296Cu;
    {
        const bool branch_taken_0x41296c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x41296c) {
            ctx->pc = 0x412970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41296Cu;
            // 0x412970: 0x8c630030  lw          $v1, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_412960;
        }
    }
    ctx->pc = 0x412974u;
    // 0x412974: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x412974u;
    {
        const bool branch_taken_0x412974 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x412974) {
            ctx->pc = 0x412978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x412974u;
            // 0x412978: 0xac660018  sw          $a2, 0x18($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x412984u;
            goto label_412984;
        }
    }
    ctx->pc = 0x41297Cu;
label_41297c:
    // 0x41297c: 0x3e00008  jr          $ra
    ctx->pc = 0x41297Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41297Cu;
        // 0x412980: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41297Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x412984u;
label_412984:
    // 0x412984: 0x3e00008  jr          $ra
    ctx->pc = 0x412984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412984u;
        // 0x412988: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41298Cu;
    // 0x41298c: 0x0  nop
    ctx->pc = 0x41298cu;
    // NOP
    ctx->pc = 0x412990u;
}
