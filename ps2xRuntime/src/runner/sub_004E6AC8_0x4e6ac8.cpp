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

// Function: sub_004E6AC8
// Address: 0x4e6ac8 - 0x4e6ae0
void sub_004E6AC8_0x4e6ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6AC8_0x4e6ac8");
#endif

    ctx->pc = 0x4e6ac8u;

    // 0x4e6ac8: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6ac8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E6AC8 raw=0x465F474D");
    // 0x4e6acc: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6accu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6ACC raw=0x74686769");
    // 0x4e6ad0: 0x4f4b5f32  .word       0x4F4B5F32                   # INVALID     $k0, $t3, 0x5F32 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ad0u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6AD0 raw=0x4F4B5F32");
    // 0x4e6ad4: 0x0  nop
    ctx->pc = 0x4e6ad4u;
    // NOP
    // 0x4e6ad8: 0x0  nop
    ctx->pc = 0x4e6ad8u;
    // NOP
    // 0x4e6adc: 0x0  nop
    ctx->pc = 0x4e6adcu;
    // NOP
    ctx->pc = 0x4e6ae0u;
}
