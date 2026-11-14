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

// Function: sub_004E40D0
// Address: 0x4e40d0 - 0x4e40e0
void sub_004E40D0_0x4e40d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E40D0_0x4e40d0");
#endif

    switch (ctx->pc) {
        case 0x4e40d4u: goto label_4e40d4;
        default: break;
    }

    ctx->pc = 0x4e40d0u;

    // 0x4e40d0: 0x5f646977  .word       0x5F646977                   # bgtzl       $k1, . + 4 + (0x6977 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
label_4e40d4:
    if (ctx->pc == 0x4E40D4u) {
        ctx->pc = 0x4E40D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E40D0u;
        // 0x4e40d4: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E40D8u;
        goto label_fallthrough_0x4e40d0;
    }
    ctx->pc = 0x4E40D0u;
    {
        const bool branch_taken_0x4e40d0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e40d0) {
            ctx->pc = 0x4E40D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E40D0u;
            // 0x4e40d4: 0x6d657469  ldr         $a1, 0x7469($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29801); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE6B0u;
            return;
        }
    }
label_fallthrough_0x4e40d0:
    ctx->pc = 0x4E40D8u;
    // 0x4e40d8: 0x0  nop
    ctx->pc = 0x4e40d8u;
    // NOP
    // 0x4e40dc: 0x0  nop
    ctx->pc = 0x4e40dcu;
    // NOP
    ctx->pc = 0x4e40e0u;
}
