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

// Function: sub_004E3FA0
// Address: 0x4e3fa0 - 0x4e3fb0
void sub_004E3FA0_0x4e3fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3FA0_0x4e3fa0");
#endif

    switch (ctx->pc) {
        case 0x4e3fa4u: goto label_4e3fa4;
        default: break;
    }

    ctx->pc = 0x4e3fa0u;

    // 0x4e3fa0: 0x70616964  .word       0x70616964                   # INVALID     $v1, $at, 0x6964 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3fa0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4E3FA0 raw=0x70616964");
label_4e3fa4:
    // 0x4e3fa4: 0x3230256f  andi        $s0, $s1, 0x256F
    ctx->pc = 0x4e3fa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)9583);
    // 0x4e3fa8: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e3fa8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x4e3fac: 0x0  nop
    ctx->pc = 0x4e3facu;
    // NOP
    ctx->pc = 0x4e3fb0u;
}
