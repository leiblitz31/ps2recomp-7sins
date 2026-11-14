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

// Function: sub_004ED2E8
// Address: 0x4ed2e8 - 0x4ed2f8
void sub_004ED2E8_0x4ed2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2E8_0x4ed2e8");
#endif

    ctx->pc = 0x4ed2e8u;

    // 0x4ed2e8: 0x742e7866  .word       0x742E7866                   # INVALID     $at, $t6, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed2e8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED2E8 raw=0x742E7866");
    // 0x4ed2ec: 0x65677261  daddiu      $a3, $t3, 0x7261
    ctx->pc = 0x4ed2ecu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
    // 0x4ed2f0: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4ed2f0u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed2f4: 0x0  nop
    ctx->pc = 0x4ed2f4u;
    // NOP
    ctx->pc = 0x4ed2f8u;
}
