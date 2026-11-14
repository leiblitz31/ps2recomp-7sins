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

// Function: sub_004E5248
// Address: 0x4e5248 - 0x4e5258
void sub_004E5248_0x4e5248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5248_0x4e5248");
#endif

    ctx->pc = 0x4e5248u;

    // 0x4e5248: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5248u;
    {
        const bool branch_taken_0x4e5248 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5248) {
            ctx->pc = 0x4E524Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5248u;
            // 0x4e524c: 0x3130706f  andi        $s0, $t1, 0x706F (Delay Slot)
            SET_GPR_U64(ctx, 16, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)28783);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F92E4u;
            return;
        }
    }
    ctx->pc = 0x4E5250u;
    // 0x4e5250: 0x0  nop
    ctx->pc = 0x4e5250u;
    // NOP
    // 0x4e5254: 0x0  nop
    ctx->pc = 0x4e5254u;
    // NOP
    ctx->pc = 0x4e5258u;
}
