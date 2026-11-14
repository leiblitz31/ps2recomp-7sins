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

// Function: sub_004E6C58
// Address: 0x4e6c58 - 0x4e6c68
void sub_004E6C58_0x4e6c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C58_0x4e6c58");
#endif

    ctx->pc = 0x4e6c58u;

    // 0x4e6c58: 0x74756f62  .word       0x74756F62                   # INVALID     $v1, $s5, 0x6F62 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6c58u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6C58 raw=0x74756F62");
    // 0x4e6c5c: 0x725f6e6f  .word       0x725F6E6F                   # INVALID     $s2, $ra, 0x6E6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6c5cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x4E6C5C raw=0x725F6E6F");
    // 0x4e6c60: 0x6567756f  daddiu      $a3, $t3, 0x756F
    ctx->pc = 0x4e6c60u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)30063);
    // 0x4e6c64: 0x0  nop
    ctx->pc = 0x4e6c64u;
    // NOP
    ctx->pc = 0x4e6c68u;
}
