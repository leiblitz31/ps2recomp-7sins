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

// Function: sub_004E67C0
// Address: 0x4e67c0 - 0x4e67d0
void sub_004E67C0_0x4e67c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67C0_0x4e67c0");
#endif

    ctx->pc = 0x4e67c0u;

    // 0x4e67c0: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E67C0u;
    {
        const bool branch_taken_0x4e67c0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e67c0) {
            ctx->pc = 0x4E67C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E67C0u;
            // 0x4e67c4: 0x6e69616d  ldr         $t1, 0x616D($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501D68u;
            return;
        }
    }
    ctx->pc = 0x4E67C8u;
    // 0x4e67c8: 0x315f  .word       0x0000315F                   # ddivu       $a2, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e67c8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E67C8 raw=0x0000315F");
    // 0x4e67cc: 0x0  nop
    ctx->pc = 0x4e67ccu;
    // NOP
    ctx->pc = 0x4e67d0u;
}
