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

// Function: sub_00307F40
// Address: 0x307f40 - 0x307f88
void sub_00307F40_0x307f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307F40_0x307f40");
#endif

    switch (ctx->pc) {
        case 0x307f48u: goto label_307f48;
        case 0x307f50u: goto label_307f50;
        case 0x307f60u: goto label_307f60;
        default: break;
    }

    ctx->pc = 0x307f40u;

    // 0x307f40: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x307f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x307f44: 0xc  syscall     0
    ctx->pc = 0x307f44u;
    ctx->pc = 0x307F48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_307f48:
    // 0x307f48: 0x3e00008  jr          $ra
    ctx->pc = 0x307F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307F50u;
label_307f50:
    // 0x307f50: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x307f50u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
    // 0x307f54: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x307F54u;
    {
        const bool branch_taken_0x307f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x307F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F54u;
        // 0x307f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307f54) {
            ctx->pc = 0x307F80u;
            goto label_307f80;
        }
    }
    ctx->pc = 0x307F5Cu;
    // 0x307f5c: 0x0  nop
    ctx->pc = 0x307f5cu;
    // NOP
label_307f60:
    // 0x307f60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x307f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x307f64: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x307f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x307f68: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x307f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x307f6c: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x307f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x307f70: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x307f70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x307f74: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x307f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x307f78: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x307F78u;
    {
        const bool branch_taken_0x307f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x307f78) {
            ctx->pc = 0x307F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_307f60;
        }
    }
    ctx->pc = 0x307F80u;
label_307f80:
    // 0x307f80: 0x3e00008  jr          $ra
    ctx->pc = 0x307F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307F80u;
        // 0x307f84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307F88u;
}
