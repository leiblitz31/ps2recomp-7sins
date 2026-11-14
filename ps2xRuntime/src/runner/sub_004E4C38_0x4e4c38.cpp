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

// Function: sub_004E4C38
// Address: 0x4e4c38 - 0x4e4c48
void sub_004E4C38_0x4e4c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4C38_0x4e4c38");
#endif

    ctx->pc = 0x4e4c38u;

    // 0x4e4c38: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e4c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4c3c: 0x5f6b735f  .word       0x5F6B735F                   # bgtzl       $k1, . + 4 + (0x735F << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4C3Cu;
    {
        const bool branch_taken_0x4e4c3c = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4c3c) {
            ctx->pc = 0x4E4C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4C3Cu;
            // 0x4e4c40: 0x4843414d  .word       0x4843414D                   # cfc2.i      $v1, $vi8 # 0000014C <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            SET_GPR_U32(ctx, 3, static_cast<uint32_t>(ctx->vi[8]));
            ctx->in_delay_slot = false;
            ctx->pc = 0x5019BCu;
            return;
        }
    }
    ctx->pc = 0x4E4C44u;
    // 0x4e4c44: 0x4f  sync
    ctx->pc = 0x4e4c44u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x4e4c48u;
}
