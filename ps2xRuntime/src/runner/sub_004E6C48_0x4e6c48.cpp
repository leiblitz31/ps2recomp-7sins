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

// Function: sub_004E6C48
// Address: 0x4e6c48 - 0x4e6c58
void sub_004E6C48_0x4e6c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C48_0x4e6c48");
#endif

    ctx->pc = 0x4e6c48u;

    // 0x4e6c48: 0x74756f62  .word       0x74756F62                   # INVALID     $v1, $s5, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6c48u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6C48 raw=0x74756F62");
    // 0x4e6c4c: 0x765f6e6f  .word       0x765F6E6F                   # INVALID     $s2, $ra, 0x6E6F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6c4cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6C4C raw=0x765F6E6F");
    // 0x4e6c50: 0x747265  .word       0x00747265                   # or          $t6, $v1, $s4 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6c50u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4e6c54: 0x0  nop
    ctx->pc = 0x4e6c54u;
    // NOP
    ctx->pc = 0x4e6c58u;
}
