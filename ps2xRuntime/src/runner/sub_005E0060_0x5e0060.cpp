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

// Function: sub_005E0060
// Address: 0x5e0060 - 0x5e0070
void sub_005E0060_0x5e0060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005E0060_0x5e0060");
#endif

    ctx->pc = 0x5e0060u;

    // 0x5e0060: 0x6f46705f  ldr         $a2, 0x705F($k0)
    ctx->pc = 0x5e0060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 28767); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x5e0064: 0x2120746e  addi        $zero, $t1, 0x746E
    ctx->pc = 0x5e0064u;
    // NOP (addi to $zero)
    // 0x5e0068: 0x554e203d  bnel        $t2, $t6, . + 4 + (0x203D << 2)
    ctx->pc = 0x5E0068u;
    {
        const bool branch_taken_0x5e0068 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x5e0068) {
            ctx->pc = 0x5E006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5E0068u;
            // 0x5e006c: 0x4c4c  syscall     305 (Delay Slot)
            ctx->pc = 0x5E0070u;
            runtime->handleSyscall(rdram, ctx, 0x131u);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E8160u;
            return;
        }
    }
    ctx->pc = 0x5E0070u;
}
