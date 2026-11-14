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

// Function: sub_004E5140
// Address: 0x4e5140 - 0x4e5160
void sub_004E5140_0x4e5140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E5140_0x4e5140");
#endif

    ctx->pc = 0x4e5140u;

    // 0x4e5140: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e5140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e5144: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e5144u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e5148: 0x636f6c5c  daddi       $t7, $k1, 0x6C5C
    ctx->pc = 0x4e5148u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27740; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x4e514c: 0x6572635c  daddiu      $s2, $t3, 0x635C
    ctx->pc = 0x4e514cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25436);
    // 0x4e5150: 0x73746964  .word       0x73746964                   # INVALID     $k1, $s4, 0x6964 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e5150u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E5150 raw=0x73746964");
    // 0x4e5154: 0x73252e  .word       0x0073252E                   # dsub        $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e5154u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 19); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 4, r); }
    // 0x4e5158: 0x0  nop
    ctx->pc = 0x4e5158u;
    // NOP
    // 0x4e515c: 0x0  nop
    ctx->pc = 0x4e515cu;
    // NOP
    ctx->pc = 0x4e5160u;
}
