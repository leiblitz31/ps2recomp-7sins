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

// Function: sub_005DFBF0
// Address: 0x5dfbf0 - 0x5dfc00
void sub_005DFBF0_0x5dfbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFBF0_0x5dfbf0");
#endif

    ctx->pc = 0x5dfbf0u;

    // 0x5dfbf0: 0x42677464  .word       0x42677464                   # INVALID     $s3, $a3, 0x7464 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5dfbf0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DFBF0 raw=0x42677464");
    // 0x5dfbf4: 0x68737572  ldl         $s3, 0x7572($v1)
    ctx->pc = 0x5dfbf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30066); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x5dfbf8: 0x632e6432  daddi       $t6, $t9, 0x6432
    ctx->pc = 0x5dfbf8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)25650; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5dfbfc: 0x7070  tge         $zero, $zero, 449
    ctx->pc = 0x5dfbfcu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x5dfc00u;
}
