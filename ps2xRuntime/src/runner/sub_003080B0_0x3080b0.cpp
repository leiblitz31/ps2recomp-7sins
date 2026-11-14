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

// Function: sub_003080B0
// Address: 0x3080b0 - 0x3080f0
void sub_003080B0_0x3080b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003080B0_0x3080b0");
#endif

    switch (ctx->pc) {
        case 0x3080b8u: goto label_3080b8;
        case 0x3080c0u: goto label_3080c0;
        case 0x3080c8u: goto label_3080c8;
        default: break;
    }

    ctx->pc = 0x3080b0u;

    // 0x3080b0: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x3080b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x3080b4: 0xc  syscall     0
    ctx->pc = 0x3080b4u;
    ctx->pc = 0x3080B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3080b8:
    // 0x3080b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3080B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3080B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3080C0u;
label_3080c0:
    // 0x3080c0: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x3080C0u;
    {
        const bool branch_taken_0x3080c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C0u;
        // 0x3080c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080c0) {
            ctx->pc = 0x3080E8u;
            goto label_3080e8;
        }
    }
    ctx->pc = 0x3080C8u;
label_3080c8:
    // 0x3080c8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3080c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3080cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3080ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3080d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3080d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3080d4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3080d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3080d8: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x3080d8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3080dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3080dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3080e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3080E0u;
    {
        const bool branch_taken_0x3080e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3080e0) {
            ctx->pc = 0x3080C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3080c8;
        }
    }
    ctx->pc = 0x3080E8u;
label_3080e8:
    // 0x3080e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3080E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E8u;
        // 0x3080ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3080E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3080F0u;
}
