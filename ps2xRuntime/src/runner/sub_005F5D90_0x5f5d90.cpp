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

// Function: sub_005F5D90
// Address: 0x5f5d90 - 0x5f5da0
void sub_005F5D90_0x5f5d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F5D90_0x5f5d90");
#endif

    ctx->pc = 0x5f5d90u;

    // 0x5f5d90: 0x4ac180  .word       0x004AC180                   # sll         $t8, $t2, 6 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d90u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 10), 6));
    // 0x5f5d94: 0x4ac0f0  tge         $v0, $t2, 771
    ctx->pc = 0x5f5d94u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x5f5d98: 0x4ac060  .word       0x004AC060                   # add         $t8, $v0, $t2 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f5d98u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    // 0x5f5d9c: 0x0  nop
    ctx->pc = 0x5f5d9cu;
    // NOP
    ctx->pc = 0x5f5da0u;
}
