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

// Function: sub_004E4FC8
// Address: 0x4e4fc8 - 0x4e4fd8
void sub_004E4FC8_0x4e4fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4FC8_0x4e4fc8");
#endif

    ctx->pc = 0x4e4fc8u;

    // 0x4e4fc8: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4FC8u;
    {
        const bool branch_taken_0x4e4fc8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4fc8) {
            ctx->pc = 0x4E4FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4FC8u;
            // 0x4e4fcc: 0x7473756c  .word       0x7473756C                   # INVALID     $v1, $s3, 0x756C # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4FCC raw=0x7473756C");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F9064u;
            return;
        }
    }
    ctx->pc = 0x4E4FD0u;
    // 0x4e4fd0: 0x0  nop
    ctx->pc = 0x4e4fd0u;
    // NOP
    // 0x4e4fd4: 0x0  nop
    ctx->pc = 0x4e4fd4u;
    // NOP
    ctx->pc = 0x4e4fd8u;
}
