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

// Function: sub_004E5DA8
// Address: 0x4e5da8 - 0x4e5db8
void sub_004E5DA8_0x4e5da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5DA8_0x4e5da8");
#endif

    ctx->pc = 0x4e5da8u;

    // 0x4e5da8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5DA8u;
    {
        const bool branch_taken_0x4e5da8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5da8) {
            ctx->pc = 0x4E5DACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5DA8u;
            // 0x4e5dac: 0x6c6c6f63  ldr         $t4, 0x6F63($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501350u;
            return;
        }
    }
    ctx->pc = 0x4E5DB0u;
    // 0x4e5db0: 0x6765  .word       0x00006765                   # move        $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5db0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e5db4: 0x0  nop
    ctx->pc = 0x4e5db4u;
    // NOP
    ctx->pc = 0x4e5db8u;
}
