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

// Function: sub_004ECD50
// Address: 0x4ecd50 - 0x4ecd60
void sub_004ECD50_0x4ecd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD50_0x4ecd50");
#endif

    ctx->pc = 0x4ecd50u;

    // 0x4ecd50: 0x5a6f7247  .word       0x5A6F7247                   # blezl       $s3, . + 4 + (0x7247 << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECD50u;
    {
        const bool branch_taken_0x4ecd50 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x4ecd50) {
            ctx->pc = 0x4ECD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECD50u;
            // 0x4ecd54: 0x7661425a  .word       0x7661425A                   # INVALID     $s3, $at, 0x425A # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ECD54 raw=0x7661425A");
            ctx->in_delay_slot = false;
            ctx->pc = 0x509670u;
            return;
        }
    }
    ctx->pc = 0x4ECD58u;
    // 0x4ecd58: 0x525275  .word       0x00525275                   # INVALID     $v0, $s2, 0x5275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecd58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4ECD58 raw=0x00525275");
    // 0x4ecd5c: 0x0  nop
    ctx->pc = 0x4ecd5cu;
    // NOP
    ctx->pc = 0x4ecd60u;
}
