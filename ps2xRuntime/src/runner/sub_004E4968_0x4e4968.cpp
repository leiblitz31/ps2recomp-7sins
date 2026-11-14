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

// Function: sub_004E4968
// Address: 0x4e4968 - 0x4e4978
void sub_004E4968_0x4e4968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4968_0x4e4968");
#endif

    ctx->pc = 0x4e4968u;

    // 0x4e4968: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4968u;
    {
        const bool branch_taken_0x4e4968 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4968) {
            ctx->pc = 0x4E496Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4968u;
            // 0x4e496c: 0x6b636162  ldl         $v1, 0x6162($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500B24u;
            return;
        }
    }
    ctx->pc = 0x4E4970u;
    // 0x4e4970: 0x0  nop
    ctx->pc = 0x4e4970u;
    // NOP
    // 0x4e4974: 0x0  nop
    ctx->pc = 0x4e4974u;
    // NOP
    ctx->pc = 0x4e4978u;
}
