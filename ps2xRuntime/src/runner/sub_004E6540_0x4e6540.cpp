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

// Function: sub_004E6540
// Address: 0x4e6540 - 0x4e6560
void sub_004E6540_0x4e6540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6540_0x4e6540");
#endif

    ctx->pc = 0x4e6540u;

    // 0x4e6540: 0x45474d26  .word       0x45474D26                   # INVALID     $t2, $a3, 0x4D26 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6540u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x26 at 0x4E6540 raw=0x45474D26");
    // 0x4e6544: 0x52455f44  beql        $s2, $a1, . + 4 + (0x5F44 << 2)
    ctx->pc = 0x4E6544u;
    {
        const bool branch_taken_0x4e6544 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x4e6544) {
            ctx->pc = 0x4E6548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6544u;
            // 0x4e6548: 0x4349544f  .word       0x4349544F                   # INVALID     $k0, $t1, 0x544F # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x4E6548 raw=0x4349544F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE258u;
            return;
        }
    }
    ctx->pc = 0x4E654Cu;
    // 0x4e654c: 0x41455244  .word       0x41455244                   # INVALID     $t2, $a1, 0x5244 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x4e654cu;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x4E654C raw=0x41455244");
    // 0x4e6550: 0x4d  break       0, 1
    ctx->pc = 0x4e6550u;
    runtime->handleBreak(rdram, ctx);
    // 0x4e6554: 0x0  nop
    ctx->pc = 0x4e6554u;
    // NOP
    // 0x4e6558: 0x0  nop
    ctx->pc = 0x4e6558u;
    // NOP
    // 0x4e655c: 0x0  nop
    ctx->pc = 0x4e655cu;
    // NOP
    ctx->pc = 0x4e6560u;
}
