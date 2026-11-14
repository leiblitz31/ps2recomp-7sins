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

// Function: sub_004ED030
// Address: 0x4ed030 - 0x4ed048
void sub_004ED030_0x4ed030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED030_0x4ed030");
#endif

    ctx->pc = 0x4ed030u;

    // 0x4ed030: 0x642e7172  daddiu      $t6, $at, 0x7172
    ctx->pc = 0x4ed030u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)29042);
    // 0x4ed034: 0x2e747369  sltiu       $s4, $s3, 0x7369
    ctx->pc = 0x4ed034u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)29545) ? 1 : 0);
    // 0x4ed038: 0x656c6f74  daddiu      $t4, $t3, 0x6F74
    ctx->pc = 0x4ed038u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28532);
    // 0x4ed03c: 0x636e6172  daddi       $t6, $k1, 0x6172
    ctx->pc = 0x4ed03cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)24946; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ed040: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed040u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed044: 0x0  nop
    ctx->pc = 0x4ed044u;
    // NOP
    ctx->pc = 0x4ed048u;
}
