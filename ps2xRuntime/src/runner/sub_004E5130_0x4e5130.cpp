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

// Function: sub_004E5130
// Address: 0x4e5130 - 0x4e5140
void sub_004E5130_0x4e5130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5130_0x4e5130");
#endif

    ctx->pc = 0x4e5130u;

    // 0x4e5130: 0x61706d69  daddi       $s0, $t3, 0x6D69
    ctx->pc = 0x4e5130u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28009; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 16, res); }
    // 0x4e5134: 0x34317463  ori         $s1, $at, 0x7463
    ctx->pc = 0x4e5134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29795);
    // 0x4e5138: 0x0  nop
    ctx->pc = 0x4e5138u;
    // NOP
    // 0x4e513c: 0x0  nop
    ctx->pc = 0x4e513cu;
    // NOP
    ctx->pc = 0x4e5140u;
}
