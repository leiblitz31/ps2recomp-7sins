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

// Function: sub_004E4998
// Address: 0x4e4998 - 0x4e49a8
void sub_004E4998_0x4e4998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4998_0x4e4998");
#endif

    ctx->pc = 0x4e4998u;

    // 0x4e4998: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4998u;
    {
        const bool branch_taken_0x4e4998 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4998) {
            ctx->pc = 0x4E499Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4998u;
            // 0x4e499c: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E499C raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B54u;
            return;
        }
    }
    ctx->pc = 0x4E49A0u;
    // 0x4e49a0: 0x7865735f  lq          $a1, 0x735F($v1)
    ctx->pc = 0x4e49a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29535)));
    // 0x4e49a4: 0x0  nop
    ctx->pc = 0x4e49a4u;
    // NOP
    ctx->pc = 0x4e49a8u;
}
