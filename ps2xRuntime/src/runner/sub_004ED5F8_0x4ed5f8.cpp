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

// Function: sub_004ED5F8
// Address: 0x4ed5f8 - 0x4ed610
void sub_004ED5F8_0x4ed5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED5F8_0x4ed5f8");
#endif

    ctx->pc = 0x4ed5f8u;

    // 0x4ed5f8: 0x656d6f6e  daddiu      $t5, $t3, 0x6F6E
    ctx->pc = 0x4ed5f8u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28526);
    // 0x4ed5fc: 0x315f6873  andi        $ra, $t2, 0x6873
    ctx->pc = 0x4ed5fcu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)26739);
    // 0x4ed600: 0x0  nop
    ctx->pc = 0x4ed600u;
    // NOP
    // 0x4ed604: 0x0  nop
    ctx->pc = 0x4ed604u;
    // NOP
    // 0x4ed608: 0x0  nop
    ctx->pc = 0x4ed608u;
    // NOP
    // 0x4ed60c: 0x0  nop
    ctx->pc = 0x4ed60cu;
    // NOP
    ctx->pc = 0x4ed610u;
}
