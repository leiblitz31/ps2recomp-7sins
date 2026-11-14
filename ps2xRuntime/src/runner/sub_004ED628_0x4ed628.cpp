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

// Function: sub_004ED628
// Address: 0x4ed628 - 0x4ed638
void sub_004ED628_0x4ed628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED628_0x4ed628");
#endif

    ctx->pc = 0x4ed628u;

    // 0x4ed628: 0x726f6f64  .word       0x726F6F64                   # INVALID     $s3, $t7, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed628u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4ED628 raw=0x726F6F64");
    // 0x4ed62c: 0x635f315f  daddi       $ra, $k0, 0x315F
    ctx->pc = 0x4ed62cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 26); int64_t imm = (int64_t)(int32_t)12639; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 31, res); }
    // 0x4ed630: 0x65736f6c  daddiu      $s3, $t3, 0x6F6C
    ctx->pc = 0x4ed630u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28524);
    // 0x4ed634: 0x0  nop
    ctx->pc = 0x4ed634u;
    // NOP
    ctx->pc = 0x4ed638u;
}
