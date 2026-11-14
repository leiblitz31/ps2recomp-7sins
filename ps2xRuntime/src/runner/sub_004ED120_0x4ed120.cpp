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

// Function: sub_004ED120
// Address: 0x4ed120 - 0x4ed138
void sub_004ED120_0x4ed120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED120_0x4ed120");
#endif

    ctx->pc = 0x4ed120u;

    // 0x4ed120: 0x6c2e7866  ldr         $t6, 0x7866($at)
    ctx->pc = 0x4ed120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 30822); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4ed124: 0x65766165  daddiu      $s6, $t3, 0x6165
    ctx->pc = 0x4ed124u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x4ed128: 0x63726170  daddi       $s2, $k1, 0x6170
    ctx->pc = 0x4ed128u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24944; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x4ed12c: 0x656c6c65  daddiu      $t4, $t3, 0x6C65
    ctx->pc = 0x4ed12cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)27749);
    // 0x4ed130: 0x0  nop
    ctx->pc = 0x4ed130u;
    // NOP
    // 0x4ed134: 0x0  nop
    ctx->pc = 0x4ed134u;
    // NOP
    ctx->pc = 0x4ed138u;
}
