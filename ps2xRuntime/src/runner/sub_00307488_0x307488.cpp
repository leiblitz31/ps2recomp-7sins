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

// Function: sub_00307488
// Address: 0x307488 - 0x3074d0
void sub_00307488_0x307488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307488_0x307488");
#endif

    switch (ctx->pc) {
        case 0x307490u: goto label_307490;
        case 0x307498u: goto label_307498;
        case 0x3074a8u: goto label_3074a8;
        default: break;
    }

    ctx->pc = 0x307488u;

    // 0x307488: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x307488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x30748c: 0xc  syscall     0
    ctx->pc = 0x30748cu;
    ctx->pc = 0x307490u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307490:
    // 0x307490: 0x3e00008  jr          $ra
    ctx->pc = 0x307490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307498u;
label_307498:
    // 0x307498: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x307498u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x30749c: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x30749Cu;
    {
        const bool branch_taken_0x30749c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3074A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30749Cu;
        // 0x3074a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30749c) {
            ctx->pc = 0x3074C8u;
            goto label_3074c8;
        }
    }
    ctx->pc = 0x3074A4u;
    // 0x3074a4: 0x0  nop
    ctx->pc = 0x3074a4u;
    // NOP
label_3074a8:
    // 0x3074a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3074a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3074ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3074acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x3074b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3074b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3074b4: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x3074b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3074b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3074b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3074bc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3074bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3074c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3074C0u;
    {
        const bool branch_taken_0x3074c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3074c0) {
            ctx->pc = 0x3074A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3074a8;
        }
    }
    ctx->pc = 0x3074C8u;
label_3074c8:
    // 0x3074c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3074C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3074CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3074C8u;
        // 0x3074cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3074C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3074D0u;
}
