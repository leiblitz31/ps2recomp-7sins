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

// Function: sub_004ECBE0
// Address: 0x4ecbe0 - 0x4ecbf8
void sub_004ECBE0_0x4ecbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECBE0_0x4ecbe0");
#endif

    ctx->pc = 0x4ecbe0u;

    // 0x4ecbe0: 0x252c6425  addiu       $t4, $t1, 0x6425
    ctx->pc = 0x4ecbe0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 25637));
    // 0x4ecbe4: 0x5b253b64  .word       0x5B253B64                   # blezl       $t9, . + 4 + (0x3B64 << 2) # 00050000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECBE4u;
    {
        const bool branch_taken_0x4ecbe4 = (GPR_S32(ctx, 25) <= 0);
        if (branch_taken_0x4ecbe4) {
            ctx->pc = 0x4ECBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECBE4u;
            // 0x4ecbe8: 0xa5e0d5e  j           func_9783578 (Delay Slot)
            // J 0x9783578 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FB978u;
            return;
        }
    }
    ctx->pc = 0x4ECBECu;
    // 0x4ecbec: 0x735d005e  .word       0x735D005E                   # INVALID     $k0, $sp, 0x5E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecbecu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1E at 0x4ECBEC raw=0x735D005E");
    // 0x4ecbf0: 0x0  nop
    ctx->pc = 0x4ecbf0u;
    // NOP
    // 0x4ecbf4: 0x0  nop
    ctx->pc = 0x4ecbf4u;
    // NOP
    ctx->pc = 0x4ecbf8u;
}
