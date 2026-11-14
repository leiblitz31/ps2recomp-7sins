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

// Function: sub_004E6D98
// Address: 0x4e6d98 - 0x4e6db0
void sub_004E6D98_0x4e6d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6D98_0x4e6d98");
#endif

    ctx->pc = 0x4e6d98u;

    // 0x4e6d98: 0x46474d26  .word       0x46474D26                   # INVALID     $s2, $a3, 0x4D26 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e6d98u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x26 at 0x4E6D98 raw=0x46474D26");
    // 0x4e6d9c: 0x4c465f4c  .word       0x4C465F4C                   # INVALID     $v0, $a2, 0x5F4C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6d9cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E6D9C raw=0x4C465F4C");
    // 0x4e6da0: 0x59424d41  .word       0x59424D41                   # blezl       $t2, . + 4 + (0x4D41 << 2) # 00020000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6DA0u;
    {
        const bool branch_taken_0x4e6da0 = (GPR_S32(ctx, 10) <= 0);
        if (branch_taken_0x4e6da0) {
            ctx->pc = 0x4FA2A8u;
            return;
        }
    }
    ctx->pc = 0x4E6DA8u;
    // 0x4e6da8: 0x0  nop
    ctx->pc = 0x4e6da8u;
    // NOP
    // 0x4e6dac: 0x0  nop
    ctx->pc = 0x4e6dacu;
    // NOP
    ctx->pc = 0x4e6db0u;
}
