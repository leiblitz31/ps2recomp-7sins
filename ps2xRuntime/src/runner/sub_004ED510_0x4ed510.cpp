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

// Function: sub_004ED510
// Address: 0x4ed510 - 0x4ed520
void sub_004ED510_0x4ed510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED510_0x4ed510");
#endif

    ctx->pc = 0x4ed510u;

    // 0x4ed510: 0x656d6f6e  daddiu      $t5, $t3, 0x6F6E
    ctx->pc = 0x4ed510u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
    // 0x4ed514: 0x315f6873  andi        $ra, $t2, 0x6873
    ctx->pc = 0x4ed514u;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)26739);
    // 0x4ed518: 0x0  nop
    ctx->pc = 0x4ed518u;
    // NOP
    // 0x4ed51c: 0x0  nop
    ctx->pc = 0x4ed51cu;
    // NOP
    ctx->pc = 0x4ed520u;
}
