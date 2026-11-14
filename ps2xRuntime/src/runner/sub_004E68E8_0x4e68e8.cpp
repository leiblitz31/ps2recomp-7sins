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

// Function: sub_004E68E8
// Address: 0x4e68e8 - 0x4e68f8
void sub_004E68E8_0x4e68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68E8_0x4e68e8");
#endif

    ctx->pc = 0x4e68e8u;

    // 0x4e68e8: 0x72626d6f  .word       0x72626D6F                   # INVALID     $s3, $v0, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e68e8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E68E8 raw=0x72626D6F");
    // 0x4e68ec: 0x72745f65  .word       0x72745F65                   # INVALID     $s3, $s4, 0x5F65 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e68ecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E68EC raw=0x72745F65");
    // 0x4e68f0: 0x5f736569  .word       0x5F736569                   # bgtzl       $k1, . + 4 + (0x6569 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E68F0u;
    {
        const bool branch_taken_0x4e68f0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e68f0) {
            ctx->pc = 0x4E68F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E68F0u;
            // 0x4e68f4: 0x31  tgeu        $zero, $zero, 0 (Delay Slot)
            if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFE98u;
            return;
        }
    }
    ctx->pc = 0x4E68F8u;
}
