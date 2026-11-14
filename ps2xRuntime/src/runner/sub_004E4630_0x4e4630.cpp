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

// Function: sub_004E4630
// Address: 0x4e4630 - 0x4e4640
void sub_004E4630_0x4e4630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4630_0x4e4630");
#endif

    switch (ctx->pc) {
        case 0x4e4634u: goto label_4e4634;
        default: break;
    }

    ctx->pc = 0x4e4630u;

    // 0x4e4630: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
label_4e4634:
    if (ctx->pc == 0x4E4634u) {
        ctx->pc = 0x4E4634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4630u;
        // 0x4e4634: 0x746c7372  .word       0x746C7372                   # INVALID     $v1, $t4, 0x7372 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4634 raw=0x746C7372");
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4638u;
        goto label_fallthrough_0x4e4630;
    }
    ctx->pc = 0x4E4630u;
    {
        const bool branch_taken_0x4e4630 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4630) {
            ctx->pc = 0x4E4634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4630u;
            // 0x4e4634: 0x746c7372  .word       0x746C7372                   # INVALID     $v1, $t4, 0x7372 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4634 raw=0x746C7372");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502804u;
            return;
        }
    }
label_fallthrough_0x4e4630:
    ctx->pc = 0x4E4638u;
    // 0x4e4638: 0x0  nop
    ctx->pc = 0x4e4638u;
    // NOP
    // 0x4e463c: 0x0  nop
    ctx->pc = 0x4e463cu;
    // NOP
    ctx->pc = 0x4e4640u;
}
