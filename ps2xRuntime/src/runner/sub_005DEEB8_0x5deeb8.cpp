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

// Function: sub_005DEEB8
// Address: 0x5deeb8 - 0x5deed0
void sub_005DEEB8_0x5deeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEEB8_0x5deeb8");
#endif

    ctx->pc = 0x5deeb8u;

    // 0x5deeb8: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5deeb8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5deebc: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5deebcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5deec0: 0x74617473  .word       0x74617473                   # INVALID     $v1, $at, 0x7473 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5deec0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEEC0 raw=0x74617473");
    // 0x5deec4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5deec4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5deec8: 0x0  nop
    ctx->pc = 0x5deec8u;
    // NOP
    // 0x5deecc: 0x0  nop
    ctx->pc = 0x5deeccu;
    // NOP
    ctx->pc = 0x5deed0u;
}
