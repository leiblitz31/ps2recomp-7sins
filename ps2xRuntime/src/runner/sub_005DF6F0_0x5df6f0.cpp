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

// Function: sub_005DF6F0
// Address: 0x5df6f0 - 0x5df700
void sub_005DF6F0_0x5df6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF6F0_0x5df6f0");
#endif

    ctx->pc = 0x5df6f0u;

    // 0x5df6f0: 0x46637464  .word       0x46637464                   # INVALID     $s3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df6f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x24 at 0x5DF6F0 raw=0x46637464");
    // 0x5df6f4: 0x2e656c69  sltiu       $a1, $s3, 0x6C69
    ctx->pc = 0x5df6f4u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)27753) ? 1 : 0);
    // 0x5df6f8: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df6f8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x5df6fc: 0x0  nop
    ctx->pc = 0x5df6fcu;
    // NOP
    ctx->pc = 0x5df700u;
}
