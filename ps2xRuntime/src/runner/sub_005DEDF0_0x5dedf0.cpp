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

// Function: sub_005DEDF0
// Address: 0x5dedf0 - 0x5dee00
void sub_005DEDF0_0x5dedf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DEDF0_0x5dedf0");
#endif

    ctx->pc = 0x5dedf0u;

    // 0x5dedf0: 0x6143705f  daddi       $v1, $t2, 0x705F
    ctx->pc = 0x5dedf0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)28767; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 3, res); }
    // 0x5dedf4: 0x74536472  .word       0x74536472                   # INVALID     $v0, $s3, 0x6472 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dedf4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DEDF4 raw=0x74536472");
    // 0x5dedf8: 0x73757461  .word       0x73757461                   # maddu1      $t6, $k1, $s5 # 00000440 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dedf8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 21); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5dedfc: 0x0  nop
    ctx->pc = 0x5dedfcu;
    // NOP
    ctx->pc = 0x5dee00u;
}
