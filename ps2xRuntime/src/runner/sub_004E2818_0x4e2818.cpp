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

// Function: sub_004E2818
// Address: 0x4e2818 - 0x4e2830
void sub_004E2818_0x4e2818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2818_0x4e2818");
#endif

    ctx->pc = 0x4e2818u;

    // 0x4e2818: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e2818u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x4e281c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e281cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x4e2820: 0x0  nop
    ctx->pc = 0x4e2820u;
    // NOP
    // 0x4e2824: 0x0  nop
    ctx->pc = 0x4e2824u;
    // NOP
    // 0x4e2828: 0x0  nop
    ctx->pc = 0x4e2828u;
    // NOP
    // 0x4e282c: 0x0  nop
    ctx->pc = 0x4e282cu;
    // NOP
    ctx->pc = 0x4e2830u;
}
