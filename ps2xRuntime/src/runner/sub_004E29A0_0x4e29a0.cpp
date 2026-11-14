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

// Function: sub_004E29A0
// Address: 0x4e29a0 - 0x4e29b0
void sub_004E29A0_0x4e29a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E29A0_0x4e29a0");
#endif

    ctx->pc = 0x4e29a0u;

    // 0x4e29a0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e29a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e29a4: 0x78756c5f  lq          $s5, 0x6C5F($v1)
    ctx->pc = 0x4e29a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 3), 27743)));
    // 0x4e29a8: 0x73797275  .word       0x73797275                   # INVALID     $k1, $t9, 0x7275 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e29a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E29A8 raw=0x73797275");
    // 0x4e29ac: 0x706f68  .word       0x00706F68                   # mfsa        $t5 # 00700740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e29acu;
    SET_GPR_U32(ctx, 13, ctx->sa);
    ctx->pc = 0x4e29b0u;
}
