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

// Function: sub_004ED670
// Address: 0x4ed670 - 0x4ed680
void sub_004ED670_0x4ed670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED670_0x4ed670");
#endif

    ctx->pc = 0x4ed670u;

    // 0x4ed670: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed670u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed674: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed674u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed678: 0x7472705c  .word       0x7472705C                   # INVALID     $v1, $s2, 0x705C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed678u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED678 raw=0x7472705C");
    // 0x4ed67c: 0x737973  tltu        $v1, $s3, 485
    ctx->pc = 0x4ed67cu;
    if (GPR_U64(ctx, 3) < GPR_U64(ctx, 19)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4ed680u;
}
