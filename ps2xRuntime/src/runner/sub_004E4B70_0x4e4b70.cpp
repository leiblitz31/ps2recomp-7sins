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

// Function: sub_004E4B70
// Address: 0x4e4b70 - 0x4e4b88
void sub_004E4B70_0x4e4b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4B70_0x4e4b70");
#endif

    ctx->pc = 0x4e4b70u;

    // 0x4e4b70: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4B70u;
    {
        const bool branch_taken_0x4e4b70 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4b70) {
            ctx->pc = 0x4E4B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4B70u;
            // 0x4e4b74: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D2Cu;
            return;
        }
    }
    ctx->pc = 0x4E4B78u;
    // 0x4e4b78: 0x6e65735f  ldr         $a1, 0x735F($s3)
    ctx->pc = 0x4e4b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4b7c: 0x38626973  xori        $v0, $v1, 0x6973
    ctx->pc = 0x4e4b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)26995);
    // 0x4e4b80: 0x0  nop
    ctx->pc = 0x4e4b80u;
    // NOP
    // 0x4e4b84: 0x0  nop
    ctx->pc = 0x4e4b84u;
    // NOP
    ctx->pc = 0x4e4b88u;
}
