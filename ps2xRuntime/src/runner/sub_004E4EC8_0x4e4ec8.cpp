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

// Function: sub_004E4EC8
// Address: 0x4e4ec8 - 0x4e4ed8
void sub_004E4EC8_0x4e4ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4EC8_0x4e4ec8");
#endif

    ctx->pc = 0x4e4ec8u;

    // 0x4e4ec8: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4EC8u;
    {
        const bool branch_taken_0x4e4ec8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ec8) {
            ctx->pc = 0x4E4ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4EC8u;
            // 0x4e4ecc: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4ECC raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50008Cu;
            return;
        }
    }
    ctx->pc = 0x4E4ED0u;
    // 0x4e4ed0: 0x7865735f  lq          $a1, 0x735F($v1)
    ctx->pc = 0x4e4ed0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29535)));
    // 0x4e4ed4: 0x0  nop
    ctx->pc = 0x4e4ed4u;
    // NOP
    ctx->pc = 0x4e4ed8u;
}
