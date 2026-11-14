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

// Function: sub_004ECE70
// Address: 0x4ece70 - 0x4ece80
void sub_004ECE70_0x4ece70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECE70_0x4ece70");
#endif

    ctx->pc = 0x4ece70u;

    // 0x4ece70: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ece70u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ece74: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4ece74u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
    // 0x4ece78: 0x706f6f6c  .word       0x706F6F6C                   # INVALID     $v1, $t7, 0x6F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ece78u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4ECE78 raw=0x706F6F6C");
    // 0x4ece7c: 0x0  nop
    ctx->pc = 0x4ece7cu;
    // NOP
    ctx->pc = 0x4ece80u;
}
