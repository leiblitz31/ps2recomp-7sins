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

// Function: sub_004E6478
// Address: 0x4e6478 - 0x4e6488
void sub_004E6478_0x4e6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6478_0x4e6478");
#endif

    ctx->pc = 0x4e6478u;

    // 0x4e6478: 0x5f6c6d73  .word       0x5F6C6D73                   # bgtzl       $k1, . + 4 + (0x6D73 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6478u;
    {
        const bool branch_taken_0x4e6478 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6478) {
            ctx->pc = 0x4E647Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6478u;
            // 0x4e647c: 0x72656562  .word       0x72656562                   # INVALID     $s3, $a1, 0x6562 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x22 at 0x4E647C raw=0x72656562");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A48u;
            return;
        }
    }
    ctx->pc = 0x4E6480u;
    // 0x4e6480: 0x0  nop
    ctx->pc = 0x4e6480u;
    // NOP
    // 0x4e6484: 0x0  nop
    ctx->pc = 0x4e6484u;
    // NOP
    ctx->pc = 0x4e6488u;
}
