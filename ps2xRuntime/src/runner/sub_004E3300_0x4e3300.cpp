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

// Function: sub_004E3300
// Address: 0x4e3300 - 0x4e3310
void sub_004E3300_0x4e3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3300_0x4e3300");
#endif

    ctx->pc = 0x4e3300u;

    // 0x4e3300: 0x7661656c  .word       0x7661656C                   # INVALID     $s3, $at, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3300u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3300 raw=0x7661656C");
    // 0x4e3304: 0x63615f65  daddi       $at, $k1, 0x5F65
    ctx->pc = 0x4e3304u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24421; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x4e3308: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e330c: 0x0  nop
    ctx->pc = 0x4e330cu;
    // NOP
    ctx->pc = 0x4e3310u;
}
