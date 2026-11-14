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

// Function: sub_004ECC08
// Address: 0x4ecc08 - 0x4ecc18
void sub_004ECC08_0x4ecc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECC08_0x4ecc08");
#endif

    ctx->pc = 0x4ecc08u;

    // 0x4ecc08: 0x67726174  daddiu      $s2, $k1, 0x6174
    ctx->pc = 0x4ecc08u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24948);
    // 0x4ecc0c: 0x253d7465  addiu       $sp, $t1, 0x7465
    ctx->pc = 0x4ecc0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 29797));
    // 0x4ecc10: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4ecc10u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ecc14: 0x0  nop
    ctx->pc = 0x4ecc14u;
    // NOP
    ctx->pc = 0x4ecc18u;
}
