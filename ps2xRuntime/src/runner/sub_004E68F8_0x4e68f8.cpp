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

// Function: sub_004E68F8
// Address: 0x4e68f8 - 0x4e6908
void sub_004E68F8_0x4e68f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68F8_0x4e68f8");
#endif

    switch (ctx->pc) {
        case 0x4e68fcu: goto label_4e68fc;
        default: break;
    }

    ctx->pc = 0x4e68f8u;

    // 0x4e68f8: 0x72626d6f  .word       0x72626D6F                   # INVALID     $s3, $v0, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e68f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E68F8 raw=0x72626D6F");
label_4e68fc:
    // 0x4e68fc: 0x72745f65  .word       0x72745F65                   # INVALID     $s3, $s4, 0x5F65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e68fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E68FC raw=0x72745F65");
    // 0x4e6900: 0x5f736569  .word       0x5F736569                   # bgtzl       $k1, . + 4 + (0x6569 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6900u;
    {
        const bool branch_taken_0x4e6900 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6900) {
            ctx->pc = 0x4E6904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6900u;
            // 0x4e6904: 0x32  tlt         $zero, $zero, 0 (Delay Slot)
            if (GPR_S64(ctx, 0) < GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFEA8u;
            return;
        }
    }
    ctx->pc = 0x4E6908u;
}
