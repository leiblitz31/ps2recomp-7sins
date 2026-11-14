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

// Function: sub_004ECF70
// Address: 0x4ecf70 - 0x4ecf80
void sub_004ECF70_0x4ecf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF70_0x4ecf70");
#endif

    ctx->pc = 0x4ecf70u;

    // 0x4ecf70: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECF70u;
    {
        const bool branch_taken_0x4ecf70 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecf70) {
            ctx->pc = 0x4ECF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF70u;
            // 0x4ecf74: 0x69766e49  ldl         $s6, 0x6E49($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28233); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE490u;
            return;
        }
    }
    ctx->pc = 0x4ECF78u;
    // 0x4ecf78: 0x6574  teq         $zero, $zero, 405
    ctx->pc = 0x4ecf78u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ecf7c: 0x0  nop
    ctx->pc = 0x4ecf7cu;
    // NOP
    ctx->pc = 0x4ecf80u;
}
