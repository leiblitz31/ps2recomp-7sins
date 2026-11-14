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

// Function: sub_004ED380
// Address: 0x4ed380 - 0x4ed3a0
void sub_004ED380_0x4ed380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED380_0x4ed380");
#endif

    ctx->pc = 0x4ed380u;

    // 0x4ed380: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ED380u;
    {
        const bool branch_taken_0x4ed380 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ed380) {
            ctx->pc = 0x4ED384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED380u;
            // 0x4ed384: 0x6867696c  ldl         $a3, 0x696C($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x50141Cu;
            return;
        }
    }
    ctx->pc = 0x4ED388u;
    // 0x4ed388: 0x70616d74  .word       0x70616D74                   # psllh       $t5, $at, 21 # 00600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed388u;
    SET_GPR_VEC(ctx, 13, _mm_slli_epi16(GPR_VEC(ctx, 1), 21));
    // 0x4ed38c: 0x676e6970  daddiu      $t6, $k1, 0x6970
    ctx->pc = 0x4ed38cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26992);
    // 0x4ed390: 0x0  nop
    ctx->pc = 0x4ed390u;
    // NOP
    // 0x4ed394: 0x0  nop
    ctx->pc = 0x4ed394u;
    // NOP
    // 0x4ed398: 0x0  nop
    ctx->pc = 0x4ed398u;
    // NOP
    // 0x4ed39c: 0x0  nop
    ctx->pc = 0x4ed39cu;
    // NOP
    ctx->pc = 0x4ed3a0u;
}
