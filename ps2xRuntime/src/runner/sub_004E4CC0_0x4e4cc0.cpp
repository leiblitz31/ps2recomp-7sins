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

// Function: sub_004E4CC0
// Address: 0x4e4cc0 - 0x4e4cd0
void sub_004E4CC0_0x4e4cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CC0_0x4e4cc0");
#endif

    ctx->pc = 0x4e4cc0u;

    // 0x4e4cc0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4cc4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CC4u;
    {
        const bool branch_taken_0x4e4cc4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4cc4) {
            ctx->pc = 0x4E4CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CC4u;
            // 0x4e4cc8: 0x45475241  .word       0x45475241                   # INVALID     $t2, $a3, 0x5241 # 00000000 <InstrIdType: R5900_COP1> (Delay Slot)
            throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x1 at 0x4E4CC8 raw=0x45475241");
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A44u;
            return;
        }
    }
    ctx->pc = 0x4E4CCCu;
    // 0x4e4ccc: 0x544e  .word       0x0000544E                   # INVALID     $zero, $zero, 0x544E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4cccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E4CCC raw=0x0000544E");
    ctx->pc = 0x4e4cd0u;
}
