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

// Function: sub_005DF3C0
// Address: 0x5df3c0 - 0x5df3e0
void sub_005DF3C0_0x5df3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF3C0_0x5df3c0");
#endif

    ctx->pc = 0x5df3c0u;

    // 0x5df3c0: 0x75746572  .word       0x75746572                   # INVALID     $t3, $s4, 0x6572 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df3c0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF3C0 raw=0x75746572");
    // 0x5df3c4: 0x61566e72  daddi       $s6, $t2, 0x6E72
    ctx->pc = 0x5df3c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28274; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5df3c8: 0x3d3d206c  .word       0x3D3D206C                   # lui         $sp, 0x206C # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8300 << 16));
    // 0x5df3cc: 0x65637320  daddiu      $v1, $t3, 0x7320
    ctx->pc = 0x5df3ccu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29472);
    // 0x5df3d0: 0x6552634d  daddiu      $s2, $t2, 0x634D
    ctx->pc = 0x5df3d0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)25421);
    // 0x5df3d4: 0x63755373  daddi       $s5, $k1, 0x5373
    ctx->pc = 0x5df3d4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)21363; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
    // 0x5df3d8: 0x64656563  daddiu      $a1, $v1, 0x6563
    ctx->pc = 0x5df3d8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25955);
    // 0x5df3dc: 0x0  nop
    ctx->pc = 0x5df3dcu;
    // NOP
    ctx->pc = 0x5df3e0u;
}
