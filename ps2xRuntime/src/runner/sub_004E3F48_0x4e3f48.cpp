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

// Function: sub_004E3F48
// Address: 0x4e3f48 - 0x4e3f58
void sub_004E3F48_0x4e3f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F48_0x4e3f48");
#endif

    ctx->pc = 0x4e3f48u;

    // 0x4e3f48: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3F48u;
    {
        const bool branch_taken_0x4e3f48 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3f48) {
            ctx->pc = 0x4E3F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3F48u;
            // 0x4e3f4c: 0x656e696c  daddiu      $t6, $t3, 0x696C (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
            ctx->in_delay_slot = false;
            ctx->pc = 0x50211Cu;
            return;
        }
    }
    ctx->pc = 0x4E3F50u;
    // 0x4e3f50: 0x0  nop
    ctx->pc = 0x4e3f50u;
    // NOP
    // 0x4e3f54: 0x0  nop
    ctx->pc = 0x4e3f54u;
    // NOP
    ctx->pc = 0x4e3f58u;
}
