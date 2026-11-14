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

// Function: sub_004E4F48
// Address: 0x4e4f48 - 0x4e4f58
void sub_004E4F48_0x4e4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4F48_0x4e4f48");
#endif

    ctx->pc = 0x4e4f48u;

    // 0x4e4f48: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4F48u;
    {
        const bool branch_taken_0x4e4f48 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4f48) {
            ctx->pc = 0x4E4F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4F48u;
            // 0x4e4f4c: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4F4C raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50010Cu;
            return;
        }
    }
    ctx->pc = 0x4E4F50u;
    // 0x4e4f50: 0x6e69735f  ldr         $t1, 0x735F($s3)
    ctx->pc = 0x4e4f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4f54: 0x0  nop
    ctx->pc = 0x4e4f54u;
    // NOP
    ctx->pc = 0x4e4f58u;
}
