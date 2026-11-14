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

// Function: sub_004E3EF0
// Address: 0x4e3ef0 - 0x4e3f00
void sub_004E3EF0_0x4e3ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3EF0_0x4e3ef0");
#endif

    ctx->pc = 0x4e3ef0u;

    // 0x4e3ef0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3EF0u;
    {
        const bool branch_taken_0x4e3ef0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3ef0) {
            ctx->pc = 0x4E3EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3EF0u;
            // 0x4e3ef4: 0x73727563  .word       0x73727563                   # INVALID     $k1, $s2, 0x7563 # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E3EF4 raw=0x73727563");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF498u;
            return;
        }
    }
    ctx->pc = 0x4E3EF8u;
    // 0x4e3ef8: 0x726f  .word       0x0000726F                   # dsubu       $t6, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3ef8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e3efc: 0x0  nop
    ctx->pc = 0x4e3efcu;
    // NOP
    ctx->pc = 0x4e3f00u;
}
