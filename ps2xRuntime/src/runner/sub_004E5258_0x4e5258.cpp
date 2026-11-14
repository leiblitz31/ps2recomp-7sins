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

// Function: sub_004E5258
// Address: 0x4e5258 - 0x4e5268
void sub_004E5258_0x4e5258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5258_0x4e5258");
#endif

    ctx->pc = 0x4e5258u;

    // 0x4e5258: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5258u;
    {
        const bool branch_taken_0x4e5258 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5258) {
            ctx->pc = 0x4E525Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5258u;
            // 0x4e525c: 0x3230636d  andi        $s0, $s1, 0x636D (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)25453);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50342Cu;
            return;
        }
    }
    ctx->pc = 0x4E5260u;
    // 0x4e5260: 0x0  nop
    ctx->pc = 0x4e5260u;
    // NOP
    // 0x4e5264: 0x0  nop
    ctx->pc = 0x4e5264u;
    // NOP
    ctx->pc = 0x4e5268u;
}
