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

// Function: sub_004E5238
// Address: 0x4e5238 - 0x4e5248
void sub_004E5238_0x4e5238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5238_0x4e5238");
#endif

    ctx->pc = 0x4e5238u;

    // 0x4e5238: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5238u;
    {
        const bool branch_taken_0x4e5238 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e5238) {
            ctx->pc = 0x4E523Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5238u;
            // 0x4e523c: 0x735f706f  .word       0x735F706F                   # INVALID     $k0, $ra, 0x706F # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E523C raw=0x735F706F");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F92D4u;
            return;
        }
    }
    ctx->pc = 0x4E5240u;
    // 0x4e5240: 0x657661  .word       0x00657661                   # addu        $t6, $v1, $a1 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5240u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4e5244: 0x0  nop
    ctx->pc = 0x4e5244u;
    // NOP
    ctx->pc = 0x4e5248u;
}
