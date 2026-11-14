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

// Function: sub_004ED1C8
// Address: 0x4ed1c8 - 0x4ed1e0
void sub_004ED1C8_0x4ed1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1C8_0x4ed1c8");
#endif

    ctx->pc = 0x4ed1c8u;

    // 0x4ed1c8: 0x762e7866  .word       0x762E7866                   # INVALID     $s1, $t6, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed1c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED1C8 raw=0x762E7866");
    // 0x4ed1cc: 0x656c6f69  daddiu      $t4, $t3, 0x6F69
    ctx->pc = 0x4ed1ccu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28521);
    // 0x4ed1d0: 0x65636e  .word       0x0065636E                   # dsub        $t4, $v1, $a1 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed1d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4ed1d4: 0x0  nop
    ctx->pc = 0x4ed1d4u;
    // NOP
    // 0x4ed1d8: 0x0  nop
    ctx->pc = 0x4ed1d8u;
    // NOP
    // 0x4ed1dc: 0x0  nop
    ctx->pc = 0x4ed1dcu;
    // NOP
    ctx->pc = 0x4ed1e0u;
}
