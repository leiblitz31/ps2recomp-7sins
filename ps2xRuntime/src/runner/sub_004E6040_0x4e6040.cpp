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

// Function: sub_004E6040
// Address: 0x4e6040 - 0x4e6058
void sub_004E6040_0x4e6040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6040_0x4e6040");
#endif

    ctx->pc = 0x4e6040u;

    // 0x4e6040: 0x5f676d69  .word       0x5F676D69                   # bgtzl       $k1, . + 4 + (0x6D69 << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6040u;
    {
        const bool branch_taken_0x4e6040 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e6040) {
            ctx->pc = 0x4E6044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6040u;
            // 0x4e6044: 0x6d616c66  ldr         $at, 0x6C66($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 27750); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5015E8u;
            return;
        }
    }
    ctx->pc = 0x4E6048u;
    // 0x4e6048: 0x72687465  .word       0x72687465                   # INVALID     $s3, $t0, 0x7465 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6048u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x25 at 0x4E6048 raw=0x72687465");
    // 0x4e604c: 0x7265776f  .word       0x7265776F                   # INVALID     $s3, $a1, 0x776F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e604cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E604C raw=0x7265776F");
    // 0x4e6050: 0x6f63695f  ldr         $v1, 0x695F($k1)
    ctx->pc = 0x4e6050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26975); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4e6054: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6054u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    ctx->pc = 0x4e6058u;
}
