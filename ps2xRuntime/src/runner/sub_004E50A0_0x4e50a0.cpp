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

// Function: sub_004E50A0
// Address: 0x4e50a0 - 0x4e50b0
void sub_004E50A0_0x4e50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E50A0_0x4e50a0");
#endif

    ctx->pc = 0x4e50a0u;

    // 0x4e50a0: 0x5f6e7462  .word       0x5F6E7462                   # bgtzl       $k1, . + 4 + (0x7462 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E50A0u;
    {
        const bool branch_taken_0x4e50a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e50a0) {
            ctx->pc = 0x4E50A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E50A0u;
            // 0x4e50a4: 0x69617274  ldl         $at, 0x7274($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50222Cu;
            return;
        }
    }
    ctx->pc = 0x4E50A8u;
    // 0x4e50a8: 0x656c676e  daddiu      $t4, $t3, 0x676E
    ctx->pc = 0x4e50a8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26478);
    // 0x4e50ac: 0x0  nop
    ctx->pc = 0x4e50acu;
    // NOP
    ctx->pc = 0x4e50b0u;
}
