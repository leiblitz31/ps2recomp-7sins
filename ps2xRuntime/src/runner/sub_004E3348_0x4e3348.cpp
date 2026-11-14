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

// Function: sub_004E3348
// Address: 0x4e3348 - 0x4e3358
void sub_004E3348_0x4e3348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3348_0x4e3348");
#endif

    ctx->pc = 0x4e3348u;

    // 0x4e3348: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3348u;
    {
        const bool branch_taken_0x4e3348 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e3348) {
            ctx->pc = 0x4E334Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3348u;
            // 0x4e334c: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F4FE4u;
            return;
        }
    }
    ctx->pc = 0x4E3350u;
    // 0x4e3350: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e3350u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
    // 0x4e3354: 0x0  nop
    ctx->pc = 0x4e3354u;
    // NOP
    ctx->pc = 0x4e3358u;
}
