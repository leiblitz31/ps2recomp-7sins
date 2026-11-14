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

// Function: sub_004ED0F8
// Address: 0x4ed0f8 - 0x4ed108
void sub_004ED0F8_0x4ed0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED0F8_0x4ed0f8");
#endif

    ctx->pc = 0x4ed0f8u;

    // 0x4ed0f8: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4ed0f8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x4ed0fc: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4ed0fcu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x4ed100: 0x0  nop
    ctx->pc = 0x4ed100u;
    // NOP
    // 0x4ed104: 0x0  nop
    ctx->pc = 0x4ed104u;
    // NOP
    ctx->pc = 0x4ed108u;
}
