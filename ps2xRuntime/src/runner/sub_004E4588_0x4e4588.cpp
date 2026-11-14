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

// Function: sub_004E4588
// Address: 0x4e4588 - 0x4e4598
void sub_004E4588_0x4e4588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4588_0x4e4588");
#endif

    ctx->pc = 0x4e4588u;

    // 0x4e4588: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4588u;
    {
        const bool branch_taken_0x4e4588 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4588) {
            ctx->pc = 0x4E458Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4588u;
            // 0x4e458c: 0x306c7474  andi        $t4, $v1, 0x7474 (Delay Slot)
            SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)29812);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50275Cu;
            return;
        }
    }
    ctx->pc = 0x4E4590u;
    // 0x4e4590: 0x0  nop
    ctx->pc = 0x4e4590u;
    // NOP
    // 0x4e4594: 0x0  nop
    ctx->pc = 0x4e4594u;
    // NOP
    ctx->pc = 0x4e4598u;
}
