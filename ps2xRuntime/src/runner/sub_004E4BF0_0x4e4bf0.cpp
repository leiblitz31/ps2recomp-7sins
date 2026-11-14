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

// Function: sub_004E4BF0
// Address: 0x4e4bf0 - 0x4e4c00
void sub_004E4BF0_0x4e4bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4BF0_0x4e4bf0");
#endif

    ctx->pc = 0x4e4bf0u;

    // 0x4e4bf0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4bf4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4BF4u;
    {
        const bool branch_taken_0x4e4bf4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4bf4) {
            ctx->pc = 0x4E4BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4BF4u;
            // 0x4e4bf8: 0x45544e49  .word       0x45544E49                   # INVALID     $t2, $s4, 0x4E49 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x4E4BF8 raw=0x45544E49");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501974u;
            return;
        }
    }
    ctx->pc = 0x4E4BFCu;
    // 0x4e4bfc: 0x474f52  .word       0x00474F52                   # mflo        $t1 # 00470740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4bfcu;
    SET_GPR_U64(ctx, 9, ctx->lo);
    ctx->pc = 0x4e4c00u;
}
