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

// Function: sub_004E4CA0
// Address: 0x4e4ca0 - 0x4e4cb0
void sub_004E4CA0_0x4e4ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CA0_0x4e4ca0");
#endif

    ctx->pc = 0x4e4ca0u;

    // 0x4e4ca0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4ca4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CA4u;
    {
        const bool branch_taken_0x4e4ca4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ca4) {
            ctx->pc = 0x4E4CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CA4u;
            // 0x4e4ca8: 0x49524553  .word       0x49524553                   # INVALID     $t2, $s2, 0x4553 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x4E4CA8 raw=0x49524553");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A24u;
            return;
        }
    }
    ctx->pc = 0x4E4CACu;
    // 0x4e4cac: 0x585545  .word       0x00585545                   # INVALID     $v0, $t8, 0x5545 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4cacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x4E4CAC raw=0x00585545");
    ctx->pc = 0x4e4cb0u;
}
