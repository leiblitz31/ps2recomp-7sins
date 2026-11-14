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

// Function: sub_004ED3A0
// Address: 0x4ed3a0 - 0x4ed3b8
void sub_004ED3A0_0x4ed3a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED3A0_0x4ed3a0");
#endif

    ctx->pc = 0x4ed3a0u;

    // 0x4ed3a0: 0x5f4e5026  .word       0x5F4E5026                   # bgtzl       $k0, . + 4 + (0x5026 << 2) # 000E0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ED3A0u;
    {
        const bool branch_taken_0x4ed3a0 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x4ed3a0) {
            ctx->pc = 0x4ED3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ED3A0u;
            // 0x4ed3a4: 0x74696e69  .word       0x74696E69                   # INVALID     $v1, $t1, 0x6E69 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED3A4 raw=0x74696E69");
            ctx->in_delay_slot = false;
            ctx->pc = 0x50143Cu;
            return;
        }
    }
    ctx->pc = 0x4ED3A8u;
    // 0x4ed3a8: 0x696c6169  ldl         $t4, 0x6169($t3)
    ctx->pc = 0x4ed3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24937); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ed3ac: 0x676e697a  daddiu      $t6, $k1, 0x697A
    ctx->pc = 0x4ed3acu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)27002);
    // 0x4ed3b0: 0x0  nop
    ctx->pc = 0x4ed3b0u;
    // NOP
    // 0x4ed3b4: 0x0  nop
    ctx->pc = 0x4ed3b4u;
    // NOP
    ctx->pc = 0x4ed3b8u;
}
