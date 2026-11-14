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

// Function: sub_004E69F8
// Address: 0x4e69f8 - 0x4e6a10
void sub_004E69F8_0x4e69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E69F8_0x4e69f8");
#endif

    ctx->pc = 0x4e69f8u;

    // 0x4e69f8: 0x465f474d  .word       0x465F474D                   # INVALID     $s2, $ra, 0x474D # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e69f8u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0xD at 0x4E69F8 raw=0x465F474D");
    // 0x4e69fc: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e69fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E69FC raw=0x74686769");
    // 0x4e6a00: 0x4f4b5f  .word       0x004F4B5F                   # ddivu       $t1, $v0, $t7 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6a00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x4E6A00 raw=0x004F4B5F");
    // 0x4e6a04: 0x0  nop
    ctx->pc = 0x4e6a04u;
    // NOP
    // 0x4e6a08: 0x0  nop
    ctx->pc = 0x4e6a08u;
    // NOP
    // 0x4e6a0c: 0x0  nop
    ctx->pc = 0x4e6a0cu;
    // NOP
    ctx->pc = 0x4e6a10u;
}
