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

// Function: sub_004E6790
// Address: 0x4e6790 - 0x4e67a0
void sub_004E6790_0x4e6790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6790_0x4e6790");
#endif

    ctx->pc = 0x4e6790u;

    // 0x4e6790: 0x736e6563  .word       0x736E6563                   # INVALID     $k1, $t6, 0x6563 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6790u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E6790 raw=0x736E6563");
    // 0x4e6794: 0x6465726f  daddiu      $a1, $v1, 0x726F
    ctx->pc = 0x4e6794u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)29295);
    // 0x4e6798: 0x0  nop
    ctx->pc = 0x4e6798u;
    // NOP
    // 0x4e679c: 0x0  nop
    ctx->pc = 0x4e679cu;
    // NOP
    ctx->pc = 0x4e67a0u;
}
