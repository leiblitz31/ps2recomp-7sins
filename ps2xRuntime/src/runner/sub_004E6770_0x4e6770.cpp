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

// Function: sub_004E6770
// Address: 0x4e6770 - 0x4e6780
void sub_004E6770_0x4e6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6770_0x4e6770");
#endif

    ctx->pc = 0x4e6770u;

    // 0x4e6770: 0x5f6b6e69  .word       0x5F6B6E69                   # bgtzl       $k1, . + 4 + (0x6E69 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6770u;
    {
        const bool branch_taken_0x4e6770 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6770) {
            ctx->pc = 0x4E6774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6770u;
            // 0x4e6774: 0x6d617473  ldr         $at, 0x7473($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x502118u;
            return;
        }
    }
    ctx->pc = 0x4E6778u;
    // 0x4e6778: 0x6f645f70  ldr         $a0, 0x5F70($k1)
    ctx->pc = 0x4e6778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24432); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x4e677c: 0x6e77  .word       0x00006E77                   # INVALID     $zero, $zero, 0x6E77 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e677cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x4E677C raw=0x00006E77");
    ctx->pc = 0x4e6780u;
}
