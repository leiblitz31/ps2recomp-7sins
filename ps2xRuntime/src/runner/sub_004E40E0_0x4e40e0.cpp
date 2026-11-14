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

// Function: sub_004E40E0
// Address: 0x4e40e0 - 0x4e4100
void sub_004E40E0_0x4e40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E40E0_0x4e40e0");
#endif

    ctx->pc = 0x4e40e0u;

    // 0x4e40e0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e40e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e40e4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e40e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e40e8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e40e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e40ec: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E40ECu;
    {
        const bool branch_taken_0x4e40ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e40ec) {
            ctx->pc = 0x4E40F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E40ECu;
            // 0x4e40f0: 0x5f6c6e70  .word       0x5F6C6E70                   # bgtzl       $k1, . + 4 + (0x6E70 << 2) # 000C0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x4E40F0 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF284u;
            return;
        }
    }
    ctx->pc = 0x4E40F4u;
    // 0x4e40f4: 0x74727473  .word       0x74727473                   # INVALID     $v1, $s2, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e40f4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E40F4 raw=0x74727473");
    // 0x4e40f8: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e40f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E40F8 raw=0x7478742E");
    // 0x4e40fc: 0x0  nop
    ctx->pc = 0x4e40fcu;
    // NOP
    ctx->pc = 0x4e4100u;
}
