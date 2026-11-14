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

// Function: sub_004E5D98
// Address: 0x4e5d98 - 0x4e5da8
void sub_004E5D98_0x4e5d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D98_0x4e5d98");
#endif

    ctx->pc = 0x4e5d98u;

    // 0x4e5d98: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D98u;
    {
        const bool branch_taken_0x4e5d98 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d98) {
            ctx->pc = 0x4E5D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D98u;
            // 0x4e5d9c: 0x686c6f63  ldl         $t4, 0x6F63($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501340u;
            return;
        }
    }
    ctx->pc = 0x4E5DA0u;
    // 0x4e5da0: 0x646165  .word       0x00646165                   # or          $t4, $v1, $a0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5da0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e5da4: 0x0  nop
    ctx->pc = 0x4e5da4u;
    // NOP
    ctx->pc = 0x4e5da8u;
}
