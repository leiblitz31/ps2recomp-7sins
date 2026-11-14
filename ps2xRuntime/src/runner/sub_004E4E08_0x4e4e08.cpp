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

// Function: sub_004E4E08
// Address: 0x4e4e08 - 0x4e4e20
void sub_004E4E08_0x4e4e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E08_0x4e4e08");
#endif

    ctx->pc = 0x4e4e08u;

    // 0x4e4e08: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4E08u;
    {
        const bool branch_taken_0x4e4e08 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4e08) {
            ctx->pc = 0x4E4E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4E08u;
            // 0x4e4e0c: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4E0C raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FFFCCu;
            return;
        }
    }
    ctx->pc = 0x4E4E10u;
    // 0x4e4e10: 0x6e6f6d5f  ldr         $t7, 0x6D5F($s3)
    ctx->pc = 0x4e4e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27999); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e4e14: 0x7965  .word       0x00007965                   # move        $t7, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4e14u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4e18: 0x0  nop
    ctx->pc = 0x4e4e18u;
    // NOP
    // 0x4e4e1c: 0x0  nop
    ctx->pc = 0x4e4e1cu;
    // NOP
    ctx->pc = 0x4e4e20u;
}
