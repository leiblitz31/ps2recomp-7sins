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

// Function: sub_004E4EF0
// Address: 0x4e4ef0 - 0x4e4f08
void sub_004E4EF0_0x4e4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4EF0_0x4e4ef0");
#endif

    ctx->pc = 0x4e4ef0u;

    // 0x4e4ef0: 0x5f726c70  .word       0x5F726C70                   # bgtzl       $k1, . + 4 + (0x6C70 << 2) # 00120000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E4EF0u;
    {
        const bool branch_taken_0x4e4ef0 = (GPR_S32(ctx, 27) > 0);
        if (branch_taken_0x4e4ef0) {
            ctx->pc = 0x4E4EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E4EF0u;
            // 0x4e4ef4: 0x74786574  .word       0x74786574                   # INVALID     $v1, $t8, 0x6574 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4EF4 raw=0x74786574");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5000B4u;
            return;
        }
    }
    ctx->pc = 0x4E4EF8u;
    // 0x4e4ef8: 0x6f69765f  ldr         $t1, 0x765F($k1)
    ctx->pc = 0x4e4ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e4efc: 0x636e656c  daddi       $t6, $k1, 0x656C
    ctx->pc = 0x4e4efcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)25964; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e4f00: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4f00u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e4f04: 0x0  nop
    ctx->pc = 0x4e4f04u;
    // NOP
    ctx->pc = 0x4e4f08u;
}
