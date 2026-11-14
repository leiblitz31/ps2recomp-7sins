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

// Function: sub_004E6A88
// Address: 0x4e6a88 - 0x4e6aa0
void sub_004E6A88_0x4e6a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A88_0x4e6a88");
#endif

    ctx->pc = 0x4e6a88u;

    // 0x4e6a88: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6a88u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6A88 raw=0x465F474D");
    // 0x4e6a8c: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a8cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A8C raw=0x74686769");
    // 0x4e6a90: 0x64495f32  daddiu      $t1, $v0, 0x5F32
    ctx->pc = 0x4e6a90u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24370);
    // 0x4e6a94: 0x656c  .word       0x0000656C                   # dadd        $t4, $zero, $zero # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6a94u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    // 0x4e6a98: 0x0  nop
    ctx->pc = 0x4e6a98u;
    // NOP
    // 0x4e6a9c: 0x0  nop
    ctx->pc = 0x4e6a9cu;
    // NOP
    ctx->pc = 0x4e6aa0u;
}
