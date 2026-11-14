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

// Function: sub_004E29B0
// Address: 0x4e29b0 - 0x4e29c0
void sub_004E29B0_0x4e29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E29B0_0x4e29b0");
#endif

    ctx->pc = 0x4e29b0u;

    // 0x4e29b0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e29b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e29b4: 0x6564655f  daddiu      $a0, $t3, 0x655F
    ctx->pc = 0x4e29b4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25951);
    // 0x4e29b8: 0x756c636e  .word       0x756C636E                   # INVALID     $t3, $t4, 0x636E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e29b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E29B8 raw=0x756C636E");
    // 0x4e29bc: 0x62  .word       0x00000062                   # neg         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e29bcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    ctx->pc = 0x4e29c0u;
}
