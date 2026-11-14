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

// Function: sub_004ECE80
// Address: 0x4ece80 - 0x4ece98
void sub_004ECE80_0x4ece80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE80_0x4ece80");
#endif

    ctx->pc = 0x4ece80u;

    // 0x4ece80: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ece80u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ece84: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4ece84u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
    // 0x4ece88: 0x706f6f6c  .word       0x706F6F6C                   # INVALID     $v1, $t7, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ece88u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4ECE88 raw=0x706F6F6C");
    // 0x4ece8c: 0x656d6974  daddiu      $t5, $t3, 0x6974
    ctx->pc = 0x4ece8cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26996);
    // 0x4ece90: 0x0  nop
    ctx->pc = 0x4ece90u;
    // NOP
    // 0x4ece94: 0x0  nop
    ctx->pc = 0x4ece94u;
    // NOP
    ctx->pc = 0x4ece98u;
}
