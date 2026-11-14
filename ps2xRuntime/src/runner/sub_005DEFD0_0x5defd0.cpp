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

// Function: sub_005DEFD0
// Address: 0x5defd0 - 0x5deff0
void sub_005DEFD0_0x5defd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEFD0_0x5defd0");
#endif

    ctx->pc = 0x5defd0u;

    // 0x5defd0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5defd0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5defd4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5defd4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5defd8: 0x74697773  .word       0x74697773                   # INVALID     $v1, $t1, 0x7773 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5defd8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEFD8 raw=0x74697773");
    // 0x5defdc: 0x63206863  daddi       $zero, $t9, 0x6863
    ctx->pc = 0x5defdcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)26723; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5defe0: 0x657361  .word       0x00657361                   # addu        $t6, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5defe0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5defe4: 0x0  nop
    ctx->pc = 0x5defe4u;
    // NOP
    // 0x5defe8: 0x0  nop
    ctx->pc = 0x5defe8u;
    // NOP
    // 0x5defec: 0x0  nop
    ctx->pc = 0x5defecu;
    // NOP
    ctx->pc = 0x5deff0u;
}
