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

// Function: sub_004ED650
// Address: 0x4ed650 - 0x4ed670
void sub_004ED650_0x4ed650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED650_0x4ed650");
#endif

    ctx->pc = 0x4ed650u;

    // 0x4ed650: 0x5f6e706f  .word       0x5F6E706F                   # bgtzl       $k1, . + 4 + (0x706F << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ED650u;
    {
        const bool branch_taken_0x4ed650 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4ed650) {
            ctx->pc = 0x4ED654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED650u;
            // 0x4ed654: 0x73757274  .word       0x73757274                   # psllh       $t6, $s5, 9 # 03600000 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 21), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509810u;
            return;
        }
    }
    ctx->pc = 0x4ED658u;
    // 0x4ed658: 0x6f705f74  ldr         $s0, 0x5F74($k1)
    ctx->pc = 0x4ed658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24436); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4ed65c: 0x6c657472  ldr         $a1, 0x7472($v1)
    ctx->pc = 0x4ed65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29810); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed660: 0x746669  .word       0x00746669                   # mtsa        $v1 # 00146640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4ed660u;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4ed664: 0x0  nop
    ctx->pc = 0x4ed664u;
    // NOP
    // 0x4ed668: 0x0  nop
    ctx->pc = 0x4ed668u;
    // NOP
    // 0x4ed66c: 0x0  nop
    ctx->pc = 0x4ed66cu;
    // NOP
    ctx->pc = 0x4ed670u;
}
