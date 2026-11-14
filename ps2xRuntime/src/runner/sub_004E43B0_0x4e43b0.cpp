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

// Function: sub_004E43B0
// Address: 0x4e43b0 - 0x4e43d0
void sub_004E43B0_0x4e43b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E43B0_0x4e43b0");
#endif

    ctx->pc = 0x4e43b0u;

    // 0x4e43b0: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e43b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e43b4: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e43b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
    // 0x4e43b8: 0x765f656d  .word       0x765F656D                   # INVALID     $s2, $ra, 0x656D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e43b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E43B8 raw=0x765F656D");
    // 0x4e43bc: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x4e43bcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
    // 0x4e43c0: 0x0  nop
    ctx->pc = 0x4e43c0u;
    // NOP
    // 0x4e43c4: 0x0  nop
    ctx->pc = 0x4e43c4u;
    // NOP
    // 0x4e43c8: 0x0  nop
    ctx->pc = 0x4e43c8u;
    // NOP
    // 0x4e43cc: 0x0  nop
    ctx->pc = 0x4e43ccu;
    // NOP
    ctx->pc = 0x4e43d0u;
}
