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

// Function: sub_004E4B50
// Address: 0x4e4b50 - 0x4e4b70
void sub_004E4B50_0x4e4b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4B50_0x4e4b50");
#endif

    ctx->pc = 0x4e4b50u;

    // 0x4e4b50: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4B50u;
    {
        const bool branch_taken_0x4e4b50 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4b50) {
            ctx->pc = 0x4E4B54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4B50u;
            // 0x4e4b54: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500D0Cu;
            return;
        }
    }
    ctx->pc = 0x4E4B58u;
    // 0x4e4b58: 0x6e65735f  ldr         $a1, 0x735F($s3)
    ctx->pc = 0x4e4b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4b5c: 0x37626973  ori         $v0, $k1, 0x6973
    ctx->pc = 0x4e4b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 27) | (uint64_t)(uint16_t)26995);
    // 0x4e4b60: 0x0  nop
    ctx->pc = 0x4e4b60u;
    // NOP
    // 0x4e4b64: 0x0  nop
    ctx->pc = 0x4e4b64u;
    // NOP
    // 0x4e4b68: 0x0  nop
    ctx->pc = 0x4e4b68u;
    // NOP
    // 0x4e4b6c: 0x0  nop
    ctx->pc = 0x4e4b6cu;
    // NOP
    ctx->pc = 0x4e4b70u;
}
