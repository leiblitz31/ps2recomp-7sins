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

// Function: sub_004E4A90
// Address: 0x4e4a90 - 0x4e4ab0
void sub_004E4A90_0x4e4a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4A90_0x4e4a90");
#endif

    switch (ctx->pc) {
        case 0x4e4a94u: goto label_4e4a94;
        default: break;
    }

    ctx->pc = 0x4e4a90u;

    // 0x4e4a90: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
label_4e4a94:
    if (ctx->pc == 0x4E4A94u) {
        ctx->pc = 0x4E4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E4A90u;
        // 0x4e4a94: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E4A98u;
        goto label_fallthrough_0x4e4a90;
    }
    ctx->pc = 0x4E4A90u;
    {
        const bool branch_taken_0x4e4a90 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4a90) {
            ctx->pc = 0x4E4A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4A90u;
            // 0x4e4a94: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500C4Cu;
            return;
        }
    }
label_fallthrough_0x4e4a90:
    ctx->pc = 0x4E4A98u;
    // 0x4e4a98: 0x6e65735f  ldr         $a1, 0x735F($s3)
    ctx->pc = 0x4e4a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4a9c: 0x31626973  andi        $v0, $t3, 0x6973
    ctx->pc = 0x4e4a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)26995);
    // 0x4e4aa0: 0x0  nop
    ctx->pc = 0x4e4aa0u;
    // NOP
    // 0x4e4aa4: 0x0  nop
    ctx->pc = 0x4e4aa4u;
    // NOP
    // 0x4e4aa8: 0x0  nop
    ctx->pc = 0x4e4aa8u;
    // NOP
    // 0x4e4aac: 0x0  nop
    ctx->pc = 0x4e4aacu;
    // NOP
    ctx->pc = 0x4e4ab0u;
}
