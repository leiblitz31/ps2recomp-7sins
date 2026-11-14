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

// Function: sub_004E52D0
// Address: 0x4e52d0 - 0x4e52e0
void sub_004E52D0_0x4e52d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E52D0_0x4e52d0");
#endif

    ctx->pc = 0x4e52d0u;

    // 0x4e52d0: 0x6772415f  daddiu      $s2, $k1, 0x415F
    ctx->pc = 0x4e52d0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)16735);
    // 0x4e52d4: 0x746f6c53  .word       0x746F6C53                   # INVALID     $v1, $t7, 0x6C53 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e52d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E52D4 raw=0x746F6C53");
    // 0x4e52d8: 0x6f4e  .word       0x00006F4E                   # INVALID     $zero, $zero, 0x6F4E # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e52d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0xE at 0x4E52D8 raw=0x00006F4E");
    // 0x4e52dc: 0x0  nop
    ctx->pc = 0x4e52dcu;
    // NOP
    ctx->pc = 0x4e52e0u;
}
