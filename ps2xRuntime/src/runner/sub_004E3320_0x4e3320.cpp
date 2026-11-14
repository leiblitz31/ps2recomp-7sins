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

// Function: sub_004E3320
// Address: 0x4e3320 - 0x4e3330
void sub_004E3320_0x4e3320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3320_0x4e3320");
#endif

    ctx->pc = 0x4e3320u;

    // 0x4e3320: 0x5f434126  .word       0x5F434126                   # bgtzl       $k0, . + 4 + (0x4126 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3320u;
    {
        const bool branch_taken_0x4e3320 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3320) {
            ctx->pc = 0x4E3324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3320u;
            // 0x4e3324: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F37BCu;
            return;
        }
    }
    ctx->pc = 0x4E3328u;
    // 0x4e3328: 0x0  nop
    ctx->pc = 0x4e3328u;
    // NOP
    // 0x4e332c: 0x0  nop
    ctx->pc = 0x4e332cu;
    // NOP
    ctx->pc = 0x4e3330u;
}
