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

// Function: sub_004E3F68
// Address: 0x4e3f68 - 0x4e3f80
void sub_004E3F68_0x4e3f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F68_0x4e3f68");
#endif

    switch (ctx->pc) {
        case 0x4e3f6cu: goto label_4e3f6c;
        case 0x4e3f74u: goto label_4e3f74;
        default: break;
    }

    ctx->pc = 0x4e3f68u;

    // 0x4e3f68: 0x765f6975  .word       0x765F6975                   # INVALID     $s2, $ra, 0x6975 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3f68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E3F68 raw=0x765F6975");
label_4e3f6c:
    // 0x4e3f6c: 0x64696c61  daddiu      $t1, $v1, 0x6C61
    ctx->pc = 0x4e3f6cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27745);
    // 0x4e3f70: 0x0  nop
    ctx->pc = 0x4e3f70u;
    // NOP
label_4e3f74:
    // 0x4e3f74: 0x0  nop
    ctx->pc = 0x4e3f74u;
    // NOP
    // 0x4e3f78: 0x0  nop
    ctx->pc = 0x4e3f78u;
    // NOP
    // 0x4e3f7c: 0x0  nop
    ctx->pc = 0x4e3f7cu;
    // NOP
    ctx->pc = 0x4e3f80u;
}
