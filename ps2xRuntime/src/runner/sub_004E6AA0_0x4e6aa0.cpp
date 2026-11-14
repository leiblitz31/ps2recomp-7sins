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

// Function: sub_004E6AA0
// Address: 0x4e6aa0 - 0x4e6ab0
void sub_004E6AA0_0x4e6aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AA0_0x4e6aa0");
#endif

    ctx->pc = 0x4e6aa0u;

    // 0x4e6aa0: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6aa0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6AA0 raw=0x465F474D");
    // 0x4e6aa4: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6aa4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AA4 raw=0x74686769");
    // 0x4e6aa8: 0x75505f32  .word       0x75505F32                   # INVALID     $t2, $s0, 0x5F32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6aa8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6AA8 raw=0x75505F32");
    // 0x4e6aac: 0x68636e  .word       0x0068636E                   # dsub        $t4, $v1, $t0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6aacu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 8); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    ctx->pc = 0x4e6ab0u;
}
