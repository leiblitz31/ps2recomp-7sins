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

// Function: sub_004E48F0
// Address: 0x4e48f0 - 0x4e4900
void sub_004E48F0_0x4e48f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E48F0_0x4e48f0");
#endif

    ctx->pc = 0x4e48f0u;

    // 0x4e48f0: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e48f0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E48F0 raw=0x725F6270");
    // 0x4e48f4: 0x635f6c65  daddi       $ra, $k0, 0x6C65
    ctx->pc = 0x4e48f4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4e48f8: 0x25657361  addiu       $a1, $t3, 0x7361
    ctx->pc = 0x4e48f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 29537));
    // 0x4e48fc: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e48fcu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    ctx->pc = 0x4e4900u;
}
