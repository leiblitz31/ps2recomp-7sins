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

// Function: sub_004E5E48
// Address: 0x4e5e48 - 0x4e5e60
void sub_004E5E48_0x4e5e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5E48_0x4e5e48");
#endif

    ctx->pc = 0x4e5e48u;

    // 0x4e5e48: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5E48u;
    {
        const bool branch_taken_0x4e5e48 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5e48) {
            ctx->pc = 0x4E5E4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5E48u;
            // 0x4e5e4c: 0x6d696e61  ldr         $t1, 0x6E61($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28257); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5013F0u;
            return;
        }
    }
    ctx->pc = 0x4E5E50u;
    // 0x4e5e50: 0x356c61  .word       0x00356C61                   # addu        $t5, $at, $s5 # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5e50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 21)));
    // 0x4e5e54: 0x0  nop
    ctx->pc = 0x4e5e54u;
    // NOP
    // 0x4e5e58: 0x0  nop
    ctx->pc = 0x4e5e58u;
    // NOP
    // 0x4e5e5c: 0x0  nop
    ctx->pc = 0x4e5e5cu;
    // NOP
    ctx->pc = 0x4e5e60u;
}
