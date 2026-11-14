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

// Function: sub_005DF450
// Address: 0x5df450 - 0x5df470
void sub_005DF450_0x5df450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF450_0x5df450");
#endif

    ctx->pc = 0x5df450u;

    // 0x5df450: 0x53637464  beql        $k1, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF450u;
    {
        const bool branch_taken_0x5df450 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 3));
        if (branch_taken_0x5df450) {
            ctx->pc = 0x5DF454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF450u;
            // 0x5df454: 0x6e697274  ldr         $t1, 0x7274($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC5E4u;
            return;
        }
    }
    ctx->pc = 0x5DF458u;
    // 0x5df458: 0x69745567  ldl         $s4, 0x5567($t3)
    ctx->pc = 0x5df458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 21863); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x5df45c: 0x70632e6c  .word       0x70632E6C                   # INVALID     $v1, $v1, 0x2E6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df45cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x5DF45C raw=0x70632E6C");
    // 0x5df460: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5df460u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5df464: 0x0  nop
    ctx->pc = 0x5df464u;
    // NOP
    // 0x5df468: 0x0  nop
    ctx->pc = 0x5df468u;
    // NOP
    // 0x5df46c: 0x0  nop
    ctx->pc = 0x5df46cu;
    // NOP
    ctx->pc = 0x5df470u;
}
