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

// Function: sub_005DF680
// Address: 0x5df680 - 0x5df690
void sub_005DF680_0x5df680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF680_0x5df680");
#endif

    ctx->pc = 0x5df680u;

    // 0x5df680: 0x46637464  .word       0x46637464                   # INVALID     $s3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df680u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x24 at 0x5DF680 raw=0x46637464");
    // 0x5df684: 0x74737269  .word       0x74737269                   # INVALID     $v1, $s3, 0x7269 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df684u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF684 raw=0x74737269");
    // 0x5df688: 0x2e746946  sltiu       $s4, $s3, 0x6946
    ctx->pc = 0x5df688u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26950) ? 1 : 0);
    // 0x5df68c: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df68cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->pc = 0x5df690u;
}
