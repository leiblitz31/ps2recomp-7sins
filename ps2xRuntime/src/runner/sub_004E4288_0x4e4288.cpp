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

// Function: sub_004E4288
// Address: 0x4e4288 - 0x4e4298
void sub_004E4288_0x4e4288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4288_0x4e4288");
#endif

    ctx->pc = 0x4e4288u;

    // 0x4e4288: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4288u;
    {
        const bool branch_taken_0x4e4288 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4288) {
            ctx->pc = 0x4E428Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4288u;
            // 0x4e428c: 0x74706d65  .word       0x74706D65                   # INVALID     $v1, $s0, 0x6D65 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E428C raw=0x74706D65");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F8324u;
            return;
        }
    }
    ctx->pc = 0x4E4290u;
    // 0x4e4290: 0x79  .word       0x00000079                   # INVALID     $zero, $zero, 0x79 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4290u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x39 at 0x4E4290 raw=0x00000079");
    // 0x4e4294: 0x0  nop
    ctx->pc = 0x4e4294u;
    // NOP
    ctx->pc = 0x4e4298u;
}
