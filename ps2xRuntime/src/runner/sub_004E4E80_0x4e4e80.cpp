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

// Function: sub_004E4E80
// Address: 0x4e4e80 - 0x4e4e90
void sub_004E4E80_0x4e4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E80_0x4e4e80");
#endif

    ctx->pc = 0x4e4e80u;

    // 0x4e4e80: 0x73697263  .word       0x73697263                   # INVALID     $k1, $t1, 0x7263 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4e80u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E4E80 raw=0x73697263");
    // 0x4e4e84: 0x765f7369  .word       0x765F7369                   # INVALID     $s2, $ra, 0x7369 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e4e84u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E4E84 raw=0x765F7369");
    // 0x4e4e88: 0x656c6f69  daddiu      $t4, $t3, 0x6F69
    ctx->pc = 0x4e4e88u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
    // 0x4e4e8c: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e4e8cu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    ctx->pc = 0x4e4e90u;
}
