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

// Function: sub_004E2E40
// Address: 0x4e2e40 - 0x4e2e58
void sub_004E2E40_0x4e2e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2E40_0x4e2e40");
#endif

    switch (ctx->pc) {
        case 0x4e2e54u: goto label_4e2e54;
        default: break;
    }

    ctx->pc = 0x4e2e40u;

    // 0x4e2e40: 0x3d207325  .word       0x3D207325                   # lui         $zero, 0x7325 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2e40u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)29477 << 16));
    // 0x4e2e44: 0x5e5b2520  .word       0x5E5B2520                   # bgtzl       $s2, . + 4 + (0x2520 << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E2E44u;
    {
        const bool branch_taken_0x4e2e44 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x4e2e44) {
            ctx->pc = 0x4E2E48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2E44u;
            // 0x4e2e48: 0x5e0a5e0d  .word       0x5E0A5E0D                   # bgtzl       $s0, . + 4 + (0x5E0D << 2) # 000A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E2E48 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EC2C8u;
            return;
        }
    }
    ctx->pc = 0x4E2E4Cu;
    // 0x4e2e4c: 0xa735d00  j           func_9CD7400
    ctx->pc = 0x4E2E4Cu;
    ctx->pc = 0x9CD7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9CD7400u, 0x4E2E4Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E2E54u;
label_4e2e54:
    // 0x4e2e54: 0x0  nop
    ctx->pc = 0x4e2e54u;
    // NOP
    ctx->pc = 0x4e2e58u;
}
