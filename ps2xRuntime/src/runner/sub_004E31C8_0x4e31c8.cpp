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

// Function: sub_004E31C8
// Address: 0x4e31c8 - 0x4e31d8
void sub_004E31C8_0x4e31c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31C8_0x4e31c8");
#endif

    ctx->pc = 0x4e31c8u;

    // 0x4e31c8: 0x7478656e  .word       0x7478656E                   # INVALID     $v1, $t8, 0x656E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31C8 raw=0x7478656E");
    // 0x4e31cc: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31CC raw=0x7463615F");
    // 0x4e31d0: 0x326e6f69  andi        $t6, $s3, 0x6F69
    ctx->pc = 0x4e31d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28521);
    // 0x4e31d4: 0x0  nop
    ctx->pc = 0x4e31d4u;
    // NOP
    ctx->pc = 0x4e31d8u;
}
