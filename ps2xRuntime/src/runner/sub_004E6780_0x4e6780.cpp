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

// Function: sub_004E6780
// Address: 0x4e6780 - 0x4e6790
void sub_004E6780_0x4e6780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6780_0x4e6780");
#endif

    ctx->pc = 0x4e6780u;

    // 0x4e6780: 0x5f6b6e69  .word       0x5F6B6E69                   # bgtzl       $k1, . + 4 + (0x6E69 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6780u;
    {
        const bool branch_taken_0x4e6780 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6780) {
            ctx->pc = 0x4E6784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6780u;
            // 0x4e6784: 0x6d617473  ldr         $at, 0x7473($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x502128u;
            return;
        }
    }
    ctx->pc = 0x4E6788u;
    // 0x4e6788: 0x70755f70  .word       0x70755F70                   # INVALID     $v1, $s5, 0x5F70 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e6788u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x1D at 0x4E6788 raw=0x70755F70");
    // 0x4e678c: 0x0  nop
    ctx->pc = 0x4e678cu;
    // NOP
    ctx->pc = 0x4e6790u;
}
