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

// Function: sub_004E6B10
// Address: 0x4e6b10 - 0x4e6b30
void sub_004E6B10_0x4e6b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6B10_0x4e6b10");
#endif

    ctx->pc = 0x4e6b10u;

    // 0x4e6b10: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6b10u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6B10 raw=0x465F474D");
    // 0x4e6b14: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b14u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B14 raw=0x74686769");
    // 0x4e6b18: 0x61465f32  daddi       $a2, $t2, 0x5F32
    ctx->pc = 0x4e6b18u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)24370; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 6, res); }
    // 0x4e6b1c: 0x7550656b  .word       0x7550656B                   # INVALID     $t2, $s0, 0x656B # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6b1cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6B1C raw=0x7550656B");
    // 0x4e6b20: 0x68636e  .word       0x0068636E                   # dsub        $t4, $v1, $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6b20u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e6b24: 0x0  nop
    ctx->pc = 0x4e6b24u;
    // NOP
    // 0x4e6b28: 0x0  nop
    ctx->pc = 0x4e6b28u;
    // NOP
    // 0x4e6b2c: 0x0  nop
    ctx->pc = 0x4e6b2cu;
    // NOP
    ctx->pc = 0x4e6b30u;
}
