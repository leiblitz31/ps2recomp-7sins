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

// Function: sub_004E3EB0
// Address: 0x4e3eb0 - 0x4e3ed0
void sub_004E3EB0_0x4e3eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3EB0_0x4e3eb0");
#endif

    ctx->pc = 0x4e3eb0u;

    // 0x4e3eb0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e3eb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e3eb4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e3eb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e3eb8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e3eb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e3ebc: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E3EBCu;
    {
        const bool branch_taken_0x4e3ebc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e3ebc) {
            ctx->pc = 0x4E3EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E3EBCu;
            // 0x4e3ec0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E3EC0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF054u;
            return;
        }
    }
    ctx->pc = 0x4E3EC4u;
    // 0x4e3ec4: 0x6c6c6167  ldr         $t4, 0x6167($v1)
    ctx->pc = 0x4e3ec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24935); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e3ec8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3ec8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3EC8 raw=0x7478742E");
    // 0x4e3ecc: 0x0  nop
    ctx->pc = 0x4e3eccu;
    // NOP
    ctx->pc = 0x4e3ed0u;
}
