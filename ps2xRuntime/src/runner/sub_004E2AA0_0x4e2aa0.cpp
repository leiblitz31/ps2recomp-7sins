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

// Function: sub_004E2AA0
// Address: 0x4e2aa0 - 0x4e2ab0
void sub_004E2AA0_0x4e2aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2AA0_0x4e2aa0");
#endif

    ctx->pc = 0x4e2aa0u;

    // 0x4e2aa0: 0x6e696f70  ldr         $t1, 0x6F70($s3)
    ctx->pc = 0x4e2aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28528); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e2aa4: 0x632e7374  daddi       $t6, $t9, 0x7374
    ctx->pc = 0x4e2aa4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)29556; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e2aa8: 0x74706168  .word       0x74706168                   # INVALID     $v1, $s0, 0x6168 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2aa8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2AA8 raw=0x74706168");
    // 0x4e2aac: 0x7265  .word       0x00007265                   # move        $t6, $zero # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2aacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4e2ab0u;
}
