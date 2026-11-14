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

// Function: sub_004E4748
// Address: 0x4e4748 - 0x4e4760
void sub_004E4748_0x4e4748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4748_0x4e4748");
#endif

    ctx->pc = 0x4e4748u;

    // 0x4e4748: 0x5f747874  .word       0x5F747874                   # bgtzl       $k1, . + 4 + (0x7874 << 2) # 00140000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4748u;
    {
        const bool branch_taken_0x4e4748 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4748) {
            ctx->pc = 0x4E474Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4748u;
            // 0x4e474c: 0x6c6c7562  ldr         $t4, 0x7562($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50291Cu;
            return;
        }
    }
    ctx->pc = 0x4E4750u;
    // 0x4e4750: 0x30307465  andi        $s0, $at, 0x7465
    ctx->pc = 0x4e4750u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)29797);
    // 0x4e4754: 0x0  nop
    ctx->pc = 0x4e4754u;
    // NOP
    // 0x4e4758: 0x0  nop
    ctx->pc = 0x4e4758u;
    // NOP
    // 0x4e475c: 0x0  nop
    ctx->pc = 0x4e475cu;
    // NOP
    ctx->pc = 0x4e4760u;
}
