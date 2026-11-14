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

// Function: sub_004E6F28
// Address: 0x4e6f28 - 0x4e6f40
void sub_004E6F28_0x4e6f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6F28_0x4e6f28");
#endif

    switch (ctx->pc) {
        case 0x4e6f34u: goto label_4e6f34;
        default: break;
    }

    ctx->pc = 0x4e6f28u;

    // 0x4e6f28: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6F28u;
    {
        const bool branch_taken_0x4e6f28 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6f28) {
            ctx->pc = 0x4E6F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6F28u;
            // 0x4e6f2c: 0x4c495543  .word       0x4C495543                   # INVALID     $v0, $t1, 0x5543 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6F2C raw=0x4C495543");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5024D0u;
            return;
        }
    }
    ctx->pc = 0x4E6F30u;
    // 0x4e6f30: 0x52454c  .word       0x0052454C                   # syscall     277 # 00520000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6f30u;
    ctx->pc = 0x4E6F34u;
runtime->handleSyscall(rdram, ctx, 0x14915u);
label_4e6f34:
    // 0x4e6f34: 0x0  nop
    ctx->pc = 0x4e6f34u;
    // NOP
    // 0x4e6f38: 0x0  nop
    ctx->pc = 0x4e6f38u;
    // NOP
    // 0x4e6f3c: 0x0  nop
    ctx->pc = 0x4e6f3cu;
    // NOP
    ctx->pc = 0x4e6f40u;
}
