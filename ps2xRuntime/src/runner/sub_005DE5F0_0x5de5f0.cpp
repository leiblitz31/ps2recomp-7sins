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

// Function: sub_005DE5F0
// Address: 0x5de5f0 - 0x5de610
void sub_005DE5F0_0x5de5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DE5F0_0x5de5f0");
#endif

    ctx->pc = 0x5de5f0u;

    // 0x5de5f0: 0x746e6144  .word       0x746E6144                   # INVALID     $v1, $t6, 0x6144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5de5f0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DE5F0 raw=0x746E6144");
    // 0x5de5f4: 0x45207365  .word       0x45207365                   # INVALID     $t1, $zero, 0x7365 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5de5f4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x25 at 0x5DE5F4 raw=0x45207365");
    // 0x5de5f8: 0x726f7272  .word       0x726F7272                   # INVALID     $s3, $t7, 0x7272 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de5f8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DE5F8 raw=0x726F7272");
    // 0x5de5fc: 0x73654d20  .word       0x73654D20                   # madd1       $t1, $k1, $a1 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5de5fcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 27) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x5de600: 0x65676173  daddiu      $a3, $t3, 0x6173
    ctx->pc = 0x5de600u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24947);
    // 0x5de604: 0x732520  .word       0x00732520                   # add         $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5de604u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x5de608: 0x0  nop
    ctx->pc = 0x5de608u;
    // NOP
    // 0x5de60c: 0x0  nop
    ctx->pc = 0x5de60cu;
    // NOP
    ctx->pc = 0x5de610u;
}
