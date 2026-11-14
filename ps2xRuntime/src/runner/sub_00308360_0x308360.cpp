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

// Function: sub_00308360
// Address: 0x308360 - 0x3083a8
void sub_00308360_0x308360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308360_0x308360");
#endif

    switch (ctx->pc) {
        case 0x308368u: goto label_308368;
        case 0x308370u: goto label_308370;
        case 0x308380u: goto label_308380;
        default: break;
    }

    ctx->pc = 0x308360u;

    // 0x308360: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x308360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x308364: 0xc  syscall     0
    ctx->pc = 0x308364u;
    ctx->pc = 0x308368u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_308368:
    // 0x308368: 0x3e00008  jr          $ra
    ctx->pc = 0x308368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308370u;
label_308370:
    // 0x308370: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x308370u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x308374: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x308374u;
    {
        const bool branch_taken_0x308374 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x308378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308374u;
        // 0x308378: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308374) {
            ctx->pc = 0x3083A0u;
            goto label_3083a0;
        }
    }
    ctx->pc = 0x30837Cu;
    // 0x30837c: 0x0  nop
    ctx->pc = 0x30837cu;
    // NOP
label_308380:
    // 0x308380: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x308380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308384: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x308384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x308388: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x308388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30838c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x30838cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x308390: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x308390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x308394: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x308394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x308398: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x308398u;
    {
        const bool branch_taken_0x308398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308398) {
            ctx->pc = 0x308380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308380;
        }
    }
    ctx->pc = 0x3083A0u;
label_3083a0:
    // 0x3083a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3083A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3083A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3083A0u;
        // 0x3083a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3083A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3083A8u;
}
