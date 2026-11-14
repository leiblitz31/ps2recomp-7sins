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

// Function: sub_00609C68
// Address: 0x609c68 - 0x609c70
void sub_00609C68_0x609c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00609C68_0x609c68");
#endif

    ctx->pc = 0x609c68u;

    // 0x609c68: 0x2e312e31  sltiu       $s1, $s1, 0x2E31
    ctx->pc = 0x609c68u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
    // 0x609c6c: 0x33  tltu        $zero, $zero, 0
    ctx->pc = 0x609c6cu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x609c70u;
}
