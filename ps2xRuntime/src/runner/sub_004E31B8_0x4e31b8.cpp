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

// Function: sub_004E31B8
// Address: 0x4e31b8 - 0x4e31c8
void sub_004E31B8_0x4e31b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31B8_0x4e31b8");
#endif

    ctx->pc = 0x4e31b8u;

    // 0x4e31b8: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31b8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31B8 raw=0x7478656E");
    // 0x4e31bc: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31BC raw=0x7463615F");
    // 0x4e31c0: 0x316e6f69  andi        $t6, $t3, 0x6F69
    ctx->pc = 0x4e31c0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)28521);
    // 0x4e31c4: 0x0  nop
    ctx->pc = 0x4e31c4u;
    // NOP
    ctx->pc = 0x4e31c8u;
}
