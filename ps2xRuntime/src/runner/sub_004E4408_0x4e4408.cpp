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

// Function: sub_004E4408
// Address: 0x4e4408 - 0x4e4418
void sub_004E4408_0x4e4408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4408_0x4e4408");
#endif

    ctx->pc = 0x4e4408u;

    // 0x4e4408: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4408u;
    {
        const bool branch_taken_0x4e4408 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4408) {
            ctx->pc = 0x4E440Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4408u;
            // 0x4e440c: 0x6b726164  ldl         $s2, 0x6164($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24932); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF9B0u;
            return;
        }
    }
    ctx->pc = 0x4E4410u;
    // 0x4e4410: 0x6e65  .word       0x00006E65                   # move        $t5, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4410u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4414: 0x0  nop
    ctx->pc = 0x4e4414u;
    // NOP
    ctx->pc = 0x4e4418u;
}
