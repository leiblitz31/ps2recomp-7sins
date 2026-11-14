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

// Function: sub_00609C50
// Address: 0x609c50 - 0x609c68
void sub_00609C50_0x609c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00609C50_0x609c50");
#endif

    ctx->pc = 0x609c50u;

    // 0x609c50: 0x474e5089  .word       0x474E5089                   # INVALID     $k0, $t6, 0x5089 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x609c50u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1A, function 0x9 at 0x609C50 raw=0x474E5089");
    // 0x609c54: 0xa1a0a0d  j           func_8682834
    ctx->pc = 0x609C54u;
    ctx->pc = 0x8682834u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8682834u, 0x609C54u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x609C5Cu;
    // 0x609c5c: 0x0  nop
    ctx->pc = 0x609c5cu;
    // NOP
    // 0x609c60: 0x2e302e31  sltiu       $s0, $s1, 0x2E31
    ctx->pc = 0x609c60u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)11825) ? 1 : 0);
    // 0x609c64: 0x3231  tgeu        $zero, $zero, 200
    ctx->pc = 0x609c64u;
    if (GPR_U64(ctx, 0) >= GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x609c68u;
}
