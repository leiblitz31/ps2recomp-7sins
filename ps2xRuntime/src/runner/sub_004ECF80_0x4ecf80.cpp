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

// Function: sub_004ECF80
// Address: 0x4ecf80 - 0x4ecf90
void sub_004ECF80_0x4ecf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF80_0x4ecf80");
#endif

    ctx->pc = 0x4ecf80u;

    // 0x4ecf80: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECF80u;
    {
        const bool branch_taken_0x4ecf80 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecf80) {
            ctx->pc = 0x4ECF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF80u;
            // 0x4ecf84: 0x6e696e55  ldr         $t1, 0x6E55($s3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28245); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE4A0u;
            return;
        }
    }
    ctx->pc = 0x4ECF88u;
    // 0x4ecf88: 0x65746976  daddiu      $s4, $t3, 0x6976
    ctx->pc = 0x4ecf88u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26998);
    // 0x4ecf8c: 0x0  nop
    ctx->pc = 0x4ecf8cu;
    // NOP
    ctx->pc = 0x4ecf90u;
}
