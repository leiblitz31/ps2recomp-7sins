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

// Function: sub_004E4D30
// Address: 0x4e4d30 - 0x4e4d50
void sub_004E4D30_0x4e4d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4D30_0x4e4d30");
#endif

    ctx->pc = 0x4e4d30u;

    // 0x4e4d30: 0x695f6975  ldl         $ra, 0x6975($t2)
    ctx->pc = 0x4e4d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem << shift)); }
    // 0x4e4d34: 0x5f6f666e  .word       0x5F6F666E                   # bgtzl       $k1, . + 4 + (0x666E << 2) # 000F0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4D34u;
    {
        const bool branch_taken_0x4e4d34 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4d34) {
            ctx->pc = 0x4E4D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4D34u;
            // 0x4e4d38: 0x646e6977  daddiu      $t6, $v1, 0x6977 (Delay Slot)
            SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26999);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE6F0u;
            return;
        }
    }
    ctx->pc = 0x4E4D3Cu;
    // 0x4e4d3c: 0x6f5f776f  ldr         $ra, 0x776F($k0)
    ctx->pc = 0x4e4d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 30575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e4d40: 0x7475  .word       0x00007475                   # INVALID     $zero, $zero, 0x7475 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4d40u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E4D40 raw=0x00007475");
    // 0x4e4d44: 0x0  nop
    ctx->pc = 0x4e4d44u;
    // NOP
    // 0x4e4d48: 0x0  nop
    ctx->pc = 0x4e4d48u;
    // NOP
    // 0x4e4d4c: 0x0  nop
    ctx->pc = 0x4e4d4cu;
    // NOP
    ctx->pc = 0x4e4d50u;
}
