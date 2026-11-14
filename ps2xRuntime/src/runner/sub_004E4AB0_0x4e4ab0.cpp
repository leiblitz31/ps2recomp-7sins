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

// Function: sub_004E4AB0
// Address: 0x4e4ab0 - 0x4e4ad0
void sub_004E4AB0_0x4e4ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4AB0_0x4e4ab0");
#endif

    ctx->pc = 0x4e4ab0u;

    // 0x4e4ab0: 0x5f63706e  .word       0x5F63706E                   # bgtzl       $k1, . + 4 + (0x706E << 2) # 00030000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4AB0u;
    {
        const bool branch_taken_0x4e4ab0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ab0) {
            ctx->pc = 0x4E4AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4AB0u;
            // 0x4e4ab4: 0x6e6f6369  ldr         $t7, 0x6369($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x500C6Cu;
            return;
        }
    }
    ctx->pc = 0x4E4AB8u;
    // 0x4e4ab8: 0x6e65735f  ldr         $a1, 0x735F($s3)
    ctx->pc = 0x4e4ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4abc: 0x32626973  andi        $v0, $s3, 0x6973
    ctx->pc = 0x4e4abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)26995);
    // 0x4e4ac0: 0x0  nop
    ctx->pc = 0x4e4ac0u;
    // NOP
    // 0x4e4ac4: 0x0  nop
    ctx->pc = 0x4e4ac4u;
    // NOP
    // 0x4e4ac8: 0x0  nop
    ctx->pc = 0x4e4ac8u;
    // NOP
    // 0x4e4acc: 0x0  nop
    ctx->pc = 0x4e4accu;
    // NOP
    ctx->pc = 0x4e4ad0u;
}
