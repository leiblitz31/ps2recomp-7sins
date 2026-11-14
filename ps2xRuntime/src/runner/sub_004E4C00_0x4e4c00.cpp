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

// Function: sub_004E4C00
// Address: 0x4e4c00 - 0x4e4c10
void sub_004E4C00_0x4e4c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C00_0x4e4c00");
#endif

    ctx->pc = 0x4e4c00u;

    // 0x4e4c00: 0x5f424726  .word       0x5F424726                   # bgtzl       $k0, . + 4 + (0x4726 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C00u;
    {
        const bool branch_taken_0x4e4c00 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4c00) {
            ctx->pc = 0x4E4C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C00u;
            // 0x4e4c04: 0x65746f6e  daddiu      $s4, $t3, 0x6F6E (Delay Slot)
            SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F689Cu;
            return;
        }
    }
    ctx->pc = 0x4E4C08u;
    // 0x4e4c08: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e4c08u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
    // 0x4e4c0c: 0x0  nop
    ctx->pc = 0x4e4c0cu;
    // NOP
    ctx->pc = 0x4e4c10u;
}
