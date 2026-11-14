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

// Function: sub_004E47A0
// Address: 0x4e47a0 - 0x4e47b0
void sub_004E47A0_0x4e47a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47A0_0x4e47a0");
#endif

    ctx->pc = 0x4e47a0u;

    // 0x4e47a0: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E47A0u;
    {
        const bool branch_taken_0x4e47a0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e47a0) {
            ctx->pc = 0x4E47A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E47A0u;
            // 0x4e47a4: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x502974u;
            return;
        }
    }
    ctx->pc = 0x4E47A8u;
    // 0x4e47a8: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e47a8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e47ac: 0x0  nop
    ctx->pc = 0x4e47acu;
    // NOP
    ctx->pc = 0x4e47b0u;
}
