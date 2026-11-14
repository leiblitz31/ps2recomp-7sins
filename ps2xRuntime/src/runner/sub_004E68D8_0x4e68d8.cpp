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

// Function: sub_004E68D8
// Address: 0x4e68d8 - 0x4e68e8
void sub_004E68D8_0x4e68d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E68D8_0x4e68d8");
#endif

    ctx->pc = 0x4e68d8u;

    // 0x4e68d8: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E68D8u;
    {
        const bool branch_taken_0x4e68d8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e68d8) {
            ctx->pc = 0x4E68DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E68D8u;
            // 0x4e68dc: 0x6e69616d  ldr         $t1, 0x616D($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E80u;
            return;
        }
    }
    ctx->pc = 0x4E68E0u;
    // 0x4e68e0: 0x325f  .word       0x0000325F                   # ddivu       $a2, $zero, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e68e0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E68E0 raw=0x0000325F");
    // 0x4e68e4: 0x0  nop
    ctx->pc = 0x4e68e4u;
    // NOP
    ctx->pc = 0x4e68e8u;
}
