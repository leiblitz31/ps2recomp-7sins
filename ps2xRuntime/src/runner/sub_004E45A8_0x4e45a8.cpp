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

// Function: sub_004E45A8
// Address: 0x4e45a8 - 0x4e45b8
void sub_004E45A8_0x4e45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E45A8_0x4e45a8");
#endif

    ctx->pc = 0x4e45a8u;

    // 0x4e45a8: 0x5f474d26  .word       0x5F474D26                   # bgtzl       $k0, . + 4 + (0x4D26 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E45A8u;
    {
        const bool branch_taken_0x4e45a8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4e45a8) {
            ctx->pc = 0x4E45ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E45A8u;
            // 0x4e45ac: 0x70776f6e  .word       0x70776F6E                   # INVALID     $v1, $s7, 0x6F6E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x4E45AC raw=0x70776F6E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x4F7A44u;
            return;
        }
    }
    ctx->pc = 0x4E45B0u;
    // 0x4e45b0: 0x6979616c  ldl         $t9, 0x616C($t3)
    ctx->pc = 0x4e45b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem << shift)); }
    // 0x4e45b4: 0x676e  .word       0x0000676E                   # dsub        $t4, $zero, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e45b4u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    ctx->pc = 0x4e45b8u;
}
