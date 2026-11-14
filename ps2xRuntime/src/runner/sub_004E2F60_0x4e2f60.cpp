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

// Function: sub_004E2F60
// Address: 0x4e2f60 - 0x4e2f70
void sub_004E2F60_0x4e2f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2F60_0x4e2f60");
#endif

    ctx->pc = 0x4e2f60u;

    // 0x4e2f60: 0x5f434126  .word       0x5F434126                   # bgtzl       $k0, . + 4 + (0x4126 << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E2F60u;
    {
        const bool branch_taken_0x4e2f60 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e2f60) {
            ctx->pc = 0x4E2F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E2F60u;
            // 0x4e2f64: 0x656d616e  daddiu      $t5, $t3, 0x616E (Delay Slot)
            SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F33FCu;
            return;
        }
    }
    ctx->pc = 0x4E2F68u;
    // 0x4e2f68: 0x0  nop
    ctx->pc = 0x4e2f68u;
    // NOP
    // 0x4e2f6c: 0x0  nop
    ctx->pc = 0x4e2f6cu;
    // NOP
    ctx->pc = 0x4e2f70u;
}
