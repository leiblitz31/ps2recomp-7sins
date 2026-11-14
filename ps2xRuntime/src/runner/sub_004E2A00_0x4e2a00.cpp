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

// Function: sub_004E2A00
// Address: 0x4e2a00 - 0x4e2a20
void sub_004E2A00_0x4e2a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2A00_0x4e2a00");
#endif

    ctx->pc = 0x4e2a00u;

    // 0x4e2a00: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2a00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e2a04: 0x616c705f  daddi       $t4, $t3, 0x705F
    ctx->pc = 0x4e2a04u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x4e2a08: 0x73726579  .word       0x73726579                   # INVALID     $k1, $s2, 0x6579 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2a08u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x39 at 0x4E2A08 raw=0x73726579");
    // 0x4e2a0c: 0x74616c66  .word       0x74616C66                   # INVALID     $v1, $at, 0x6C66 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2a0cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2A0C raw=0x74616C66");
    // 0x4e2a10: 0x0  nop
    ctx->pc = 0x4e2a10u;
    // NOP
    // 0x4e2a14: 0x0  nop
    ctx->pc = 0x4e2a14u;
    // NOP
    // 0x4e2a18: 0x0  nop
    ctx->pc = 0x4e2a18u;
    // NOP
    // 0x4e2a1c: 0x0  nop
    ctx->pc = 0x4e2a1cu;
    // NOP
    ctx->pc = 0x4e2a20u;
}
