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

// Function: sub_004E4650
// Address: 0x4e4650 - 0x4e4660
void sub_004E4650_0x4e4650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4650_0x4e4650");
#endif

    ctx->pc = 0x4e4650u;

    // 0x4e4650: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4650u;
    {
        const bool branch_taken_0x4e4650 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4650) {
            ctx->pc = 0x4E4654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4650u;
            // 0x4e4654: 0x725f7368  .word       0x725F7368                   # INVALID     $s2, $ra, 0x7368 # 00000000 <InstrIdType: R5900_MMI_1> (Delay Slot)
            throw std::runtime_error("Unhandled MMI1 instruction: function 0xD at 0x4E4654 raw=0x725F7368");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7AECu;
            return;
        }
    }
    ctx->pc = 0x4E4658u;
    // 0x4e4658: 0x6c757365  ldr         $s5, 0x7365($v1)
    ctx->pc = 0x4e4658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e465c: 0x4274  teq         $zero, $zero, 265
    ctx->pc = 0x4e465cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e4660u;
}
