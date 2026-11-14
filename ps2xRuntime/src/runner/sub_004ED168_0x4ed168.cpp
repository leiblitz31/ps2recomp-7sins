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

// Function: sub_004ED168
// Address: 0x4ed168 - 0x4ed180
void sub_004ED168_0x4ed168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED168_0x4ed168");
#endif

    ctx->pc = 0x4ed168u;

    // 0x4ed168: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4ed168u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x4ed16c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4ed16cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x4ed170: 0x0  nop
    ctx->pc = 0x4ed170u;
    // NOP
    // 0x4ed174: 0x0  nop
    ctx->pc = 0x4ed174u;
    // NOP
    // 0x4ed178: 0x0  nop
    ctx->pc = 0x4ed178u;
    // NOP
    // 0x4ed17c: 0x0  nop
    ctx->pc = 0x4ed17cu;
    // NOP
    ctx->pc = 0x4ed180u;
}
