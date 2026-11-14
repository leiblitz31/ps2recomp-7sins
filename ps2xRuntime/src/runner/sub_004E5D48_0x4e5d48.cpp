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

// Function: sub_004E5D48
// Address: 0x4e5d48 - 0x4e5d58
void sub_004E5D48_0x4e5d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D48_0x4e5d48");
#endif

    ctx->pc = 0x4e5d48u;

    // 0x4e5d48: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D48u;
    {
        const bool branch_taken_0x4e5d48 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d48) {
            ctx->pc = 0x4E5D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D48u;
            // 0x4e5d4c: 0x6d616c66  ldr         $at, 0x6C66($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5012F0u;
            return;
        }
    }
    ctx->pc = 0x4E5D50u;
    // 0x4e5d50: 0x656d  .word       0x0000656D                   # daddu       $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5d50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4e5d54: 0x0  nop
    ctx->pc = 0x4e5d54u;
    // NOP
    ctx->pc = 0x4e5d58u;
}
