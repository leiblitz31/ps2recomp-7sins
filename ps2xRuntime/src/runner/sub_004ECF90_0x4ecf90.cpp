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

// Function: sub_004ECF90
// Address: 0x4ecf90 - 0x4ecfa0
void sub_004ECF90_0x4ecf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECF90_0x4ecf90");
#endif

    ctx->pc = 0x4ecf90u;

    // 0x4ecf90: 0x5f4e4547  .word       0x5F4E4547                   # bgtzl       $k0, . + 4 + (0x4547 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECF90u;
    {
        const bool branch_taken_0x4ecf90 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ecf90) {
            ctx->pc = 0x4ECF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECF90u;
            // 0x4ecf94: 0x6b6c6154  ldl         $t4, 0x6154($k1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24916); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FE4B0u;
            return;
        }
    }
    ctx->pc = 0x4ECF98u;
    // 0x4ecf98: 0x6e657241  ldr         $a1, 0x7241($s3)
    ctx->pc = 0x4ecf98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29249); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ecf9c: 0x6e4961  .word       0x006E4961                   # addu        $t1, $v1, $t6 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ecf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    ctx->pc = 0x4ecfa0u;
}
