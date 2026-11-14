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

// Function: sub_004E5E28
// Address: 0x4e5e28 - 0x4e5e38
void sub_004E5E28_0x4e5e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5E28_0x4e5e28");
#endif

    ctx->pc = 0x4e5e28u;

    // 0x4e5e28: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5E28u;
    {
        const bool branch_taken_0x4e5e28 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5e28) {
            ctx->pc = 0x4E5E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5E28u;
            // 0x4e5e2c: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5013D0u;
            return;
        }
    }
    ctx->pc = 0x4E5E30u;
    // 0x4e5e30: 0x336c61  .word       0x00336C61                   # addu        $t5, $at, $s3 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5e30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 19)));
    // 0x4e5e34: 0x0  nop
    ctx->pc = 0x4e5e34u;
    // NOP
    ctx->pc = 0x4e5e38u;
}
