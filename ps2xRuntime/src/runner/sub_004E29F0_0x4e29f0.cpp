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

// Function: sub_004E29F0
// Address: 0x4e29f0 - 0x4e2a00
void sub_004E29F0_0x4e29f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E29F0_0x4e29f0");
#endif

    ctx->pc = 0x4e29f0u;

    // 0x4e29f0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e29f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e29f4: 0x6572665f  daddiu      $s2, $t3, 0x665F
    ctx->pc = 0x4e29f4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26207);
    // 0x4e29f8: 0x72706873  .word       0x72706873                   # INVALID     $s3, $s0, 0x6873 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e29f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x4E29F8 raw=0x72706873");
    // 0x4e29fc: 0x646f  .word       0x0000646F                   # dsubu       $t4, $zero, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e29fcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
    ctx->pc = 0x4e2a00u;
}
