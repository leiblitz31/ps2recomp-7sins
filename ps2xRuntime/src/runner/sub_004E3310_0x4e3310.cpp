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

// Function: sub_004E3310
// Address: 0x4e3310 - 0x4e3320
void sub_004E3310_0x4e3310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3310_0x4e3310");
#endif

    ctx->pc = 0x4e3310u;

    // 0x4e3310: 0x5f6c6572  .word       0x5F6C6572                   # bgtzl       $k1, . + 4 + (0x6572 << 2) # 000C0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3310u;
    {
        const bool branch_taken_0x4e3310 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e3310) {
            ctx->pc = 0x4E3314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3310u;
            // 0x4e3314: 0x69746361  ldl         $s4, 0x6361($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FC8DCu;
            return;
        }
    }
    ctx->pc = 0x4E3318u;
    // 0x4e3318: 0x6e6f  .word       0x00006E6F                   # dsubu       $t5, $zero, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3318u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e331c: 0x0  nop
    ctx->pc = 0x4e331cu;
    // NOP
    ctx->pc = 0x4e3320u;
}
