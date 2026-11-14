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

// Function: sub_004E6A78
// Address: 0x4e6a78 - 0x4e6a88
void sub_004E6A78_0x4e6a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6A78_0x4e6a78");
#endif

    ctx->pc = 0x4e6a78u;

    // 0x4e6a78: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6a78u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6A78 raw=0x465F474D");
    // 0x4e6a7c: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6a7cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6A7C raw=0x74686769");
    // 0x4e6a80: 0x646e455f  daddiu      $t6, $v1, 0x455F
    ctx->pc = 0x4e6a80u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)17759);
    // 0x4e6a84: 0x0  nop
    ctx->pc = 0x4e6a84u;
    // NOP
    ctx->pc = 0x4e6a88u;
}
