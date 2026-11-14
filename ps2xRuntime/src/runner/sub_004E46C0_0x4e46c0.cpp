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

// Function: sub_004E46C0
// Address: 0x4e46c0 - 0x4e46d0
void sub_004E46C0_0x4e46c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E46C0_0x4e46c0");
#endif

    ctx->pc = 0x4e46c0u;

    // 0x4e46c0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E46C0u;
    {
        const bool branch_taken_0x4e46c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e46c0) {
            ctx->pc = 0x4E46C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E46C0u;
            // 0x4e46c4: 0x726f6373  .word       0x726F6373                   # INVALID     $s3, $t7, 0x6373 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E46C4 raw=0x726F6373");
            ctx->in_delay_slot = false;
            ctx->pc = 0x502894u;
            return;
        }
    }
    ctx->pc = 0x4E46C8u;
    // 0x4e46c8: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e46c8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e46cc: 0x0  nop
    ctx->pc = 0x4e46ccu;
    // NOP
    ctx->pc = 0x4e46d0u;
}
