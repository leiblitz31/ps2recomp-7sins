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

// Function: sub_004ED400
// Address: 0x4ed400 - 0x4ed420
void sub_004ED400_0x4ed400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED400_0x4ed400");
#endif

    ctx->pc = 0x4ed400u;

    // 0x4ed400: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ed400u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ed404: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ed404u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ed408: 0x7469625c  .word       0x7469625C                   # INVALID     $v1, $t1, 0x625C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed408u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED408 raw=0x7469625C");
    // 0x4ed40c: 0x7370616d  .word       0x7370616D                   # INVALID     $k1, $s0, 0x616D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed40cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4ED40C raw=0x7370616D");
    // 0x4ed410: 0x3273705c  andi        $s3, $s3, 0x705C
    ctx->pc = 0x4ed410u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28764);
    // 0x4ed414: 0x7865745c  lq          $a1, 0x745C($v1)
    ctx->pc = 0x4ed414u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 29788)));
    // 0x4ed418: 0x65727574  daddiu      $s2, $t3, 0x7574
    ctx->pc = 0x4ed418u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30068);
    // 0x4ed41c: 0x5c73  tltu        $zero, $zero, 369
    ctx->pc = 0x4ed41cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4ed420u;
}
