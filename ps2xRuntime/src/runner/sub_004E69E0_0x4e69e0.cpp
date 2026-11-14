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

// Function: sub_004E69E0
// Address: 0x4e69e0 - 0x4e69f8
void sub_004E69E0_0x4e69e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E69E0_0x4e69e0");
#endif

    ctx->pc = 0x4e69e0u;

    // 0x4e69e0: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e69e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E69E0 raw=0x465F474D");
    // 0x4e69e4: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e69e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E69E4 raw=0x74686769");
    // 0x4e69e8: 0x6e75505f  ldr         $s5, 0x505F($s3)
    ctx->pc = 0x4e69e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20575); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e69ec: 0x61626863  daddi       $v0, $t3, 0x6863
    ctx->pc = 0x4e69ecu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x4e69f0: 0x6b63  .word       0x00006B63                   # negu        $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e69f0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 0)));
    // 0x4e69f4: 0x0  nop
    ctx->pc = 0x4e69f4u;
    // NOP
    ctx->pc = 0x4e69f8u;
}
