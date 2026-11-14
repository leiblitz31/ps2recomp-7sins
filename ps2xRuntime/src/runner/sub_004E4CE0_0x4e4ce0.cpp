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

// Function: sub_004E4CE0
// Address: 0x4e4ce0 - 0x4e4cf0
void sub_004E4CE0_0x4e4ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CE0_0x4e4ce0");
#endif

    ctx->pc = 0x4e4ce0u;

    // 0x4e4ce0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4ce4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CE4u;
    {
        const bool branch_taken_0x4e4ce4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ce4) {
            ctx->pc = 0x4E4CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CE4u;
            // 0x4e4ce8: 0x5f54454a  .word       0x5F54454A                   # bgtzl       $k0, . + 4 + (0x454A << 2) # 00140000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E4CE8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A64u;
            return;
        }
    }
    ctx->pc = 0x4E4CECu;
    // 0x4e4cec: 0x544553  .word       0x00544553                   # mtlo        $v0 # 00144540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4cecu;
    ctx->lo = GPR_U64(ctx, 2);
    ctx->pc = 0x4e4cf0u;
}
