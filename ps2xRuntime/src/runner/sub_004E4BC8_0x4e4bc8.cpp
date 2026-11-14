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

// Function: sub_004E4BC8
// Address: 0x4e4bc8 - 0x4e4bd8
void sub_004E4BC8_0x4e4bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BC8_0x4e4bc8");
#endif

    ctx->pc = 0x4e4bc8u;

    // 0x4e4bc8: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4BC8u;
    {
        const bool branch_taken_0x4e4bc8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4bc8) {
            ctx->pc = 0x4E4BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4BC8u;
            // 0x4e4bcc: 0x69797370  ldl         $t9, 0x7370($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29552); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D84u;
            return;
        }
    }
    ctx->pc = 0x4E4BD0u;
    // 0x4e4bd0: 0x306f666e  andi        $t7, $v1, 0x666E
    ctx->pc = 0x4e4bd0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)26222);
    // 0x4e4bd4: 0x0  nop
    ctx->pc = 0x4e4bd4u;
    // NOP
    ctx->pc = 0x4e4bd8u;
}
