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

// Function: sub_004E6F08
// Address: 0x4e6f08 - 0x4e6f18
void sub_004E6F08_0x4e6f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F08_0x4e6f08");
#endif

    switch (ctx->pc) {
        case 0x4e6f0cu: goto label_4e6f0c;
        case 0x4e6f10u: goto label_4e6f10;
        default: break;
    }

    ctx->pc = 0x4e6f08u;

    // 0x4e6f08: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
label_4e6f0c:
    if (ctx->pc == 0x4E6F0Cu) {
        ctx->pc = 0x4E6F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6F08u;
        // 0x4e6f0c: 0x4c424154  .word       0x4C424154                   # INVALID     $v0, $v0, 0x4154 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6F0C raw=0x4C424154");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6F10u;
        goto label_4e6f10;
    }
    ctx->pc = 0x4E6F08u;
    {
        const bool branch_taken_0x4e6f08 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f08) {
            ctx->pc = 0x4E6F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F08u;
            // 0x4e6f0c: 0x4c424154  .word       0x4C424154                   # INVALID     $v0, $v0, 0x4154 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6F0C raw=0x4C424154");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024B0u;
            return;
        }
    }
    ctx->pc = 0x4E6F10u;
label_4e6f10:
    // 0x4e6f10: 0x45  .word       0x00000045                   # INVALID     $zero, $zero, 0x45 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E6F10 raw=0x00000045");
    // 0x4e6f14: 0x0  nop
    ctx->pc = 0x4e6f14u;
    // NOP
    ctx->pc = 0x4e6f18u;
}
