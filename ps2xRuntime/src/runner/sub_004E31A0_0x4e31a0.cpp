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

// Function: sub_004E31A0
// Address: 0x4e31a0 - 0x4e31b8
void sub_004E31A0_0x4e31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31A0_0x4e31a0");
#endif

    ctx->pc = 0x4e31a0u;

    // 0x4e31a0: 0x76657270  .word       0x76657270                   # INVALID     $s3, $a1, 0x7270 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31a0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31A0 raw=0x76657270");
    // 0x4e31a4: 0x73756f69  .word       0x73756F69                   # INVALID     $k1, $s5, 0x6F69 # 00000000 <InstrIdType: R5900_MMI_3>
    ctx->pc = 0x4e31a4u;
    throw std::runtime_error("Unhandled MMI3 instruction: function 0x1D at 0x4E31A4 raw=0x73756F69");
    // 0x4e31a8: 0x7463615f  .word       0x7463615F                   # INVALID     $v1, $v1, 0x615F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e31a8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E31A8 raw=0x7463615F");
    // 0x4e31ac: 0x326e6f69  andi        $t6, $s3, 0x6F69
    ctx->pc = 0x4e31acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)28521);
    // 0x4e31b0: 0x0  nop
    ctx->pc = 0x4e31b0u;
    // NOP
    // 0x4e31b4: 0x0  nop
    ctx->pc = 0x4e31b4u;
    // NOP
    ctx->pc = 0x4e31b8u;
}
