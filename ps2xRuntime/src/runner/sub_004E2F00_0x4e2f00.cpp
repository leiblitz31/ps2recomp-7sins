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

// Function: sub_004E2F00
// Address: 0x4e2f00 - 0x4e2f10
void sub_004E2F00_0x4e2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2F00_0x4e2f00");
#endif

    ctx->pc = 0x4e2f00u;

    // 0x4e2f00: 0x25206625  addiu       $zero, $t1, 0x6625
    ctx->pc = 0x4e2f00u;
    // NOP (addiu $zero, ...)
    // 0x4e2f04: 0x66252066  daddiu      $a1, $s1, 0x2066
    ctx->pc = 0x4e2f04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)8294);
    // 0x4e2f08: 0x2c662520  sltiu       $a2, $v1, 0x2520
    ctx->pc = 0x4e2f08u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9504) ? 1 : 0);
    // 0x4e2f0c: 0x732520  .word       0x00732520                   # add         $a0, $v1, $s3 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2f0cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 19);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    ctx->pc = 0x4e2f10u;
}
