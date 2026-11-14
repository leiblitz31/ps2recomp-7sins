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

// Function: sub_004ECE98
// Address: 0x4ece98 - 0x4ecea8
void sub_004ECE98_0x4ece98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE98_0x4ece98");
#endif

    ctx->pc = 0x4ece98u;

    // 0x4ece98: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ece98u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ece9c: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4ece9cu;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
    // 0x4ecea0: 0x65707974  daddiu      $s0, $t3, 0x7974
    ctx->pc = 0x4ecea0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)31092);
    // 0x4ecea4: 0x0  nop
    ctx->pc = 0x4ecea4u;
    // NOP
    ctx->pc = 0x4ecea8u;
}
