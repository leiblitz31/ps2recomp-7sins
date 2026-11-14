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

// Function: sub_004E4448
// Address: 0x4e4448 - 0x4e4458
void sub_004E4448_0x4e4448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4448_0x4e4448");
#endif

    ctx->pc = 0x4e4448u;

    // 0x4e4448: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4448u;
    {
        const bool branch_taken_0x4e4448 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e4448) {
            ctx->pc = 0x4E444Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4448u;
            // 0x4e444c: 0x6e5f626d  ldr         $ra, 0x626D($s2) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 18), 25197); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F84E4u;
            return;
        }
    }
    ctx->pc = 0x4E4450u;
    // 0x4e4450: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4450u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e4454: 0x0  nop
    ctx->pc = 0x4e4454u;
    // NOP
    ctx->pc = 0x4e4458u;
}
