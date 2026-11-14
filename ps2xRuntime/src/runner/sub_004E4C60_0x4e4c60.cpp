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

// Function: sub_004E4C60
// Address: 0x4e4c60 - 0x4e4c70
void sub_004E4C60_0x4e4c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C60_0x4e4c60");
#endif

    ctx->pc = 0x4e4c60u;

    // 0x4e4c60: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4c64: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C64u;
    {
        const bool branch_taken_0x4e4c64 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4c64) {
            ctx->pc = 0x4E4C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C64u;
            // 0x4e4c68: 0x544c5543  bnel        $v0, $t4, . + 4 + (0x5543 << 2) (Delay Slot)
            // Likely branch instruction at 0x4E4C68 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5019E4u;
            return;
        }
    }
    ctx->pc = 0x4E4C6Cu;
    // 0x4e4c6c: 0x455255  .word       0x00455255                   # INVALID     $v0, $a1, 0x5255 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4c6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x15 at 0x4E4C6C raw=0x00455255");
    ctx->pc = 0x4e4c70u;
}
