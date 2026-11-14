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

// Function: sub_004E48C0
// Address: 0x4e48c0 - 0x4e48d0
void sub_004E48C0_0x4e48c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E48C0_0x4e48c0");
#endif

    ctx->pc = 0x4e48c0u;

    // 0x4e48c0: 0x725f6270  .word       0x725F6270                   # INVALID     $s2, $ra, 0x6270 # 00000000 <InstrIdType: R5900_MMI_PMFHL>
    ctx->pc = 0x4e48c0u;
    throw std::runtime_error("Unhandled PMFHL instruction: function 0x9 at 0x4E48C0 raw=0x725F6270");
    // 0x4e48c4: 0x625f6c65  daddi       $ra, $s2, 0x6C65
    ctx->pc = 0x4e48c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 18); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4e48c8: 0x676b6361  daddiu      $t3, $k1, 0x6361
    ctx->pc = 0x4e48c8u;
    SET_GPR_S64(ctx, 11, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)25441);
    // 0x4e48cc: 0x0  nop
    ctx->pc = 0x4e48ccu;
    // NOP
    ctx->pc = 0x4e48d0u;
}
