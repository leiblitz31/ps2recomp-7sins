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

// Function: sub_004E2928
// Address: 0x4e2928 - 0x4e2940
void sub_004E2928_0x4e2928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2928_0x4e2928");
#endif

    ctx->pc = 0x4e2928u;

    // 0x4e2928: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x4e2928u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x4e292c: 0x656d616e  daddiu      $t5, $t3, 0x616E
    ctx->pc = 0x4e292cu;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x4e2930: 0x0  nop
    ctx->pc = 0x4e2930u;
    // NOP
    // 0x4e2934: 0x0  nop
    ctx->pc = 0x4e2934u;
    // NOP
    // 0x4e2938: 0x0  nop
    ctx->pc = 0x4e2938u;
    // NOP
    // 0x4e293c: 0x0  nop
    ctx->pc = 0x4e293cu;
    // NOP
    ctx->pc = 0x4e2940u;
}
