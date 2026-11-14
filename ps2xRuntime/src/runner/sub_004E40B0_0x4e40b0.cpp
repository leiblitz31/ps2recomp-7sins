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

// Function: sub_004E40B0
// Address: 0x4e40b0 - 0x4e40c0
void sub_004E40B0_0x4e40b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E40B0_0x4e40b0");
#endif

    switch (ctx->pc) {
        case 0x4e40b8u: goto label_4e40b8;
        case 0x4e40bcu: goto label_4e40bc;
        default: break;
    }

    ctx->pc = 0x4e40b0u;

    // 0x4e40b0: 0x676f7270  daddiu      $t7, $k1, 0x7270
    ctx->pc = 0x4e40b0u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)29296);
    // 0x4e40b4: 0x73736572  .word       0x73736572                   # INVALID     $k1, $s3, 0x6572 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e40b4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x4E40B4 raw=0x73736572");
label_4e40b8:
    // 0x4e40b8: 0x0  nop
    ctx->pc = 0x4e40b8u;
    // NOP
label_4e40bc:
    // 0x4e40bc: 0x0  nop
    ctx->pc = 0x4e40bcu;
    // NOP
    ctx->pc = 0x4e40c0u;
}
