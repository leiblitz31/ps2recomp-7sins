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

// Function: sub_004E45C8
// Address: 0x4e45c8 - 0x4e45d8
void sub_004E45C8_0x4e45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E45C8_0x4e45c8");
#endif

    ctx->pc = 0x4e45c8u;

    // 0x4e45c8: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E45C8u;
    {
        const bool branch_taken_0x4e45c8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e45c8) {
            ctx->pc = 0x4E45CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E45C8u;
            // 0x4e45cc: 0x6a626f6c  ldl         $v0, 0x6F6C($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50279Cu;
            return;
        }
    }
    ctx->pc = 0x4E45D0u;
    // 0x4e45d0: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4e45d0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e45d4: 0x0  nop
    ctx->pc = 0x4e45d4u;
    // NOP
    ctx->pc = 0x4e45d8u;
}
