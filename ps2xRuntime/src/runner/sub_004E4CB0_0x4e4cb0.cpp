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

// Function: sub_004E4CB0
// Address: 0x4e4cb0 - 0x4e4cc0
void sub_004E4CB0_0x4e4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4CB0_0x4e4cb0");
#endif

    switch (ctx->pc) {
        case 0x4e4cbcu: goto label_4e4cbc;
        default: break;
    }

    ctx->pc = 0x4e4cb0u;

    // 0x4e4cb0: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4cb4: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4CB4u;
    {
        const bool branch_taken_0x4e4cb4 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4cb4) {
            ctx->pc = 0x4E4CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4CB4u;
            // 0x4e4cb8: 0x5f57454e  .word       0x5F57454E                   # bgtzl       $k0, . + 4 + (0x454E << 2) # 00170000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E4CB8 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x501A34u;
            return;
        }
    }
    ctx->pc = 0x4E4CBCu;
label_4e4cbc:
    // 0x4e4cbc: 0x454741  .word       0x00454741                   # INVALID     $v0, $a1, 0x4741 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4cbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x4E4CBC raw=0x00454741");
    ctx->pc = 0x4e4cc0u;
}
