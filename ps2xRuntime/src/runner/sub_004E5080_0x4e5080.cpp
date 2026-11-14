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

// Function: sub_004E5080
// Address: 0x4e5080 - 0x4e5090
void sub_004E5080_0x4e5080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5080_0x4e5080");
#endif

    ctx->pc = 0x4e5080u;

    // 0x4e5080: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5080u;
    {
        const bool branch_taken_0x4e5080 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5080) {
            ctx->pc = 0x4E5084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5080u;
            // 0x4e5084: 0x696f7263  ldl         $t7, 0x7263($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50220Cu;
            return;
        }
    }
    ctx->pc = 0x4E5088u;
    // 0x4e5088: 0x78  dsll        $zero, $zero, 1
    ctx->pc = 0x4e5088u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << 1);
    // 0x4e508c: 0x0  nop
    ctx->pc = 0x4e508cu;
    // NOP
    ctx->pc = 0x4e5090u;
}
