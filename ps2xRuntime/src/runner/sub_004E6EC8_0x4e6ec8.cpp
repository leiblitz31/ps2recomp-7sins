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

// Function: sub_004E6EC8
// Address: 0x4e6ec8 - 0x4e6ed8
void sub_004E6EC8_0x4e6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6EC8_0x4e6ec8");
#endif

    ctx->pc = 0x4e6ec8u;

    // 0x4e6ec8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6EC8u;
    {
        const bool branch_taken_0x4e6ec8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6ec8) {
            ctx->pc = 0x4E6ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6EC8u;
            // 0x4e6ecc: 0x44414548  .word       0x44414548                   # cfc1        $at, $8 # 00000548 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 1, 0); // Unimplemented FCR8
            ctx->in_delay_slot = false;
            ctx->pc = 0x502470u;
            return;
        }
    }
    ctx->pc = 0x4E6ED0u;
    // 0x4e6ed0: 0x0  nop
    ctx->pc = 0x4e6ed0u;
    // NOP
    // 0x4e6ed4: 0x0  nop
    ctx->pc = 0x4e6ed4u;
    // NOP
    ctx->pc = 0x4e6ed8u;
}
