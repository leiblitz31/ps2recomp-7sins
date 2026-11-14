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

// Function: sub_004E5D08
// Address: 0x4e5d08 - 0x4e5d20
void sub_004E5D08_0x4e5d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5D08_0x4e5d08");
#endif

    ctx->pc = 0x4e5d08u;

    // 0x4e5d08: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E5D08u;
    {
        const bool branch_taken_0x4e5d08 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e5d08) {
            ctx->pc = 0x4E5D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E5D08u;
            // 0x4e5d0c: 0x73726570  .word       0x73726570                   # INVALID     $k1, $s2, 0x6570 # 00000000 <InstrIdType: R5900_MMI_PMFHL> (Delay Slot)
            throw std::runtime_error("Unhandled PMFHL instruction: function 0x15 at 0x4E5D0C raw=0x73726570");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5012B0u;
            return;
        }
    }
    ctx->pc = 0x4E5D10u;
    // 0x4e5d10: 0x6f665f6f  ldr         $a2, 0x5F6F($k1)
    ctx->pc = 0x4e5d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24431); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4e5d14: 0x746f  .word       0x0000746F                   # dsubu       $t6, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5d14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    // 0x4e5d18: 0x0  nop
    ctx->pc = 0x4e5d18u;
    // NOP
    // 0x4e5d1c: 0x0  nop
    ctx->pc = 0x4e5d1cu;
    // NOP
    ctx->pc = 0x4e5d20u;
}
