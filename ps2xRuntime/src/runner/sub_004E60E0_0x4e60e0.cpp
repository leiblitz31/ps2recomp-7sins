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

// Function: sub_004E60E0
// Address: 0x4e60e0 - 0x4e60f0
void sub_004E60E0_0x4e60e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E60E0_0x4e60e0");
#endif

    ctx->pc = 0x4e60e0u;

    // 0x4e60e0: 0x636e756e  daddi       $t6, $k1, 0x756E
    ctx->pc = 0x4e60e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e60e4: 0x756b6168  .word       0x756B6168                   # INVALID     $t3, $t3, 0x6168 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e60e4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E60E4 raw=0x756B6168");
    // 0x4e60e8: 0x0  nop
    ctx->pc = 0x4e60e8u;
    // NOP
    // 0x4e60ec: 0x0  nop
    ctx->pc = 0x4e60ecu;
    // NOP
    ctx->pc = 0x4e60f0u;
}
