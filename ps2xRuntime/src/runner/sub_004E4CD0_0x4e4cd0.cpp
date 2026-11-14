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

// Function: sub_004E4CD0
// Address: 0x4e4cd0 - 0x4e4ce0
void sub_004E4CD0_0x4e4cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CD0_0x4e4cd0");
#endif

    ctx->pc = 0x4e4cd0u;

    // 0x4e4cd0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4cd4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CD4u;
    {
        const bool branch_taken_0x4e4cd4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4cd4) {
            ctx->pc = 0x4E4CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CD4u;
            // 0x4e4cd8: 0x474f5244  .word       0x474F5244                   # INVALID     $k0, $t7, 0x5244 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x4 at 0x4E4CD8 raw=0x474F5244");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A54u;
            return;
        }
    }
    ctx->pc = 0x4E4CDCu;
    // 0x4e4cdc: 0x4555  .word       0x00004555                   # INVALID     $zero, $zero, 0x4555 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4cdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4E4CDC raw=0x00004555");
    ctx->pc = 0x4e4ce0u;
}
