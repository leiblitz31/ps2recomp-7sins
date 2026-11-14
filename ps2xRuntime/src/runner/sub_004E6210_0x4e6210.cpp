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

// Function: sub_004E6210
// Address: 0x4e6210 - 0x4e6220
void sub_004E6210_0x4e6210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6210_0x4e6210");
#endif

    ctx->pc = 0x4e6210u;

    // 0x4e6210: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6210u;
    {
        const bool branch_taken_0x4e6210 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6210) {
            ctx->pc = 0x4E6214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6210u;
            // 0x4e6214: 0x4e495244  .word       0x4E495244                   # INVALID     $s2, $t1, 0x5244 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6214 raw=0x4E495244");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5017B8u;
            return;
        }
    }
    ctx->pc = 0x4E6218u;
    // 0x4e6218: 0x4c475f4b  .word       0x4C475F4B                   # INVALID     $v0, $a3, 0x5F4B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6218u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6218 raw=0x4C475F4B");
    // 0x4e621c: 0x535341  .word       0x00535341                   # INVALID     $v0, $s3, 0x5341 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e621cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E621C raw=0x00535341");
    ctx->pc = 0x4e6220u;
}
