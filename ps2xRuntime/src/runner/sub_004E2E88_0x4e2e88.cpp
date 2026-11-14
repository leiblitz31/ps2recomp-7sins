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

// Function: sub_004E2E88
// Address: 0x4e2e88 - 0x4e2e98
void sub_004E2E88_0x4e2e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2E88_0x4e2e88");
#endif

    ctx->pc = 0x4e2e88u;

    // 0x4e2e88: 0x25207525  addiu       $zero, $t1, 0x7525
    ctx->pc = 0x4e2e88u;
    // NOP (addiu $zero, ...)
    // 0x4e2e8c: 0x75252075  .word       0x75252075                   # INVALID     $t1, $a1, 0x2075 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2e8cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2E8C raw=0x75252075");
    // 0x4e2e90: 0x752520  .word       0x00752520                   # add         $a0, $v1, $s5 # 00000500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2e90u;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 4, (int32_t)result);     } }
    // 0x4e2e94: 0x0  nop
    ctx->pc = 0x4e2e94u;
    // NOP
    ctx->pc = 0x4e2e98u;
}
