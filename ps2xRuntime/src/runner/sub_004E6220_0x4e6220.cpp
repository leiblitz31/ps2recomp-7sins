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

// Function: sub_004E6220
// Address: 0x4e6220 - 0x4e6240
void sub_004E6220_0x4e6220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6220_0x4e6220");
#endif

    ctx->pc = 0x4e6220u;

    // 0x4e6220: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6220u;
    {
        const bool branch_taken_0x4e6220 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6220) {
            ctx->pc = 0x4E6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6220u;
            // 0x4e6224: 0x4e495244  .word       0x4E495244                   # INVALID     $s2, $t1, 0x5244 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6224 raw=0x4E495244");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5017C8u;
            return;
        }
    }
    ctx->pc = 0x4E6228u;
    // 0x4e6228: 0x55435f4b  bnel        $t2, $v1, . + 4 + (0x5F4B << 2)
    ctx->pc = 0x4E6228u;
    {
        const bool branch_taken_0x4e6228 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e6228) {
            ctx->pc = 0x4E622Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6228u;
            // 0x4e622c: 0x524f5352  beql        $s2, $t7, . + 4 + (0x5352 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E622C - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FDF58u;
            return;
        }
    }
    ctx->pc = 0x4E6230u;
    // 0x4e6230: 0x0  nop
    ctx->pc = 0x4e6230u;
    // NOP
    // 0x4e6234: 0x0  nop
    ctx->pc = 0x4e6234u;
    // NOP
    // 0x4e6238: 0x0  nop
    ctx->pc = 0x4e6238u;
    // NOP
    // 0x4e623c: 0x0  nop
    ctx->pc = 0x4e623cu;
    // NOP
    ctx->pc = 0x4e6240u;
}
