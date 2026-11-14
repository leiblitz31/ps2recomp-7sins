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

// Function: sub_004E4F18
// Address: 0x4e4f18 - 0x4e4f30
void sub_004E4F18_0x4e4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F18_0x4e4f18");
#endif

    ctx->pc = 0x4e4f18u;

    // 0x4e4f18: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4F18u;
    {
        const bool branch_taken_0x4e4f18 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4f18) {
            ctx->pc = 0x4E4F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F18u;
            // 0x4e4f1c: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5000DCu;
            return;
        }
    }
    ctx->pc = 0x4E4F20u;
    // 0x4e4f20: 0x7865735f  lq          $a1, 0x735F($v1)
    ctx->pc = 0x4e4f20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29535)));
    // 0x4e4f24: 0x0  nop
    ctx->pc = 0x4e4f24u;
    // NOP
    // 0x4e4f28: 0x0  nop
    ctx->pc = 0x4e4f28u;
    // NOP
    // 0x4e4f2c: 0x0  nop
    ctx->pc = 0x4e4f2cu;
    // NOP
    ctx->pc = 0x4e4f30u;
}
