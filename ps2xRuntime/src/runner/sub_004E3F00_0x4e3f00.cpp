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

// Function: sub_004E3F00
// Address: 0x4e3f00 - 0x4e3f10
void sub_004E3F00_0x4e3f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F00_0x4e3f00");
#endif

    ctx->pc = 0x4e3f00u;

    // 0x4e3f00: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3F00u;
    {
        const bool branch_taken_0x4e3f00 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3f00) {
            ctx->pc = 0x4E3F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3F00u;
            // 0x4e3f04: 0x70616964  .word       0x70616964                   # INVALID     $v1, $at, 0x6964 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E3F04 raw=0x70616964");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF4A8u;
            return;
        }
    }
    ctx->pc = 0x4E3F08u;
    // 0x4e3f08: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3f08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e3f0c: 0x0  nop
    ctx->pc = 0x4e3f0cu;
    // NOP
    ctx->pc = 0x4e3f10u;
}
