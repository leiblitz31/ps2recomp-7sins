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

// Function: sub_004ECFF0
// Address: 0x4ecff0 - 0x4ed010
void sub_004ECFF0_0x4ecff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECFF0_0x4ecff0");
#endif

    ctx->pc = 0x4ecff0u;

    // 0x4ecff0: 0x6e6f642d  ldr         $t7, 0x642D($s3)
    ctx->pc = 0x4ecff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25645); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4ecff4: 0x68635f74  ldl         $v1, 0x5F74($v1)
    ctx->pc = 0x4ecff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ecff8: 0x5f6b6365  .word       0x5F6B6365                   # bgtzl       $k1, . + 4 + (0x6365 << 2) # 000B0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ECFF8u;
    {
        const bool branch_taken_0x4ecff8 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ecff8) {
            ctx->pc = 0x4ECFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ECFF8u;
            // 0x4ecffc: 0x67756167  daddiu      $s5, $k1, 0x6167 (Delay Slot)
            SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
            ctx->in_delay_slot = false;
            ctx->pc = 0x505D90u;
            return;
        }
    }
    ctx->pc = 0x4ED000u;
    // 0x4ed000: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed000u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed004: 0x0  nop
    ctx->pc = 0x4ed004u;
    // NOP
    // 0x4ed008: 0x0  nop
    ctx->pc = 0x4ed008u;
    // NOP
    // 0x4ed00c: 0x0  nop
    ctx->pc = 0x4ed00cu;
    // NOP
    ctx->pc = 0x4ed010u;
}
