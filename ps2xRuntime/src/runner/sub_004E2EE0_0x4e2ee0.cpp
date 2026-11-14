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

// Function: sub_004E2EE0
// Address: 0x4e2ee0 - 0x4e2f00
void sub_004E2EE0_0x4e2ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2EE0_0x4e2ee0");
#endif

    ctx->pc = 0x4e2ee0u;

    // 0x4e2ee0: 0x25206625  addiu       $zero, $t1, 0x6625
    ctx->pc = 0x4e2ee0u;
    // NOP (addiu $zero, ...)
    // 0x4e2ee4: 0x25202c66  addiu       $zero, $t1, 0x2C66
    ctx->pc = 0x4e2ee4u;
    // NOP (addiu $zero, ...)
    // 0x4e2ee8: 0x5e0d5e5b  .word       0x5E0D5E5B                   # bgtzl       $s0, . + 4 + (0x5E5B << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E2EE8u;
    {
        const bool branch_taken_0x4e2ee8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x4e2ee8) {
            ctx->pc = 0x4E2EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2EE8u;
            // 0x4e2eec: 0x5d005e0a  bgtzl       $t0, . + 4 + (0x5E0A << 2) (Delay Slot)
            // Likely branch instruction at 0x4E2EEC - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FA858u;
            return;
        }
    }
    ctx->pc = 0x4E2EF0u;
    // 0x4e2ef0: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e2ef0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2ef4: 0x0  nop
    ctx->pc = 0x4e2ef4u;
    // NOP
    // 0x4e2ef8: 0x0  nop
    ctx->pc = 0x4e2ef8u;
    // NOP
    // 0x4e2efc: 0x0  nop
    ctx->pc = 0x4e2efcu;
    // NOP
    ctx->pc = 0x4e2f00u;
}
