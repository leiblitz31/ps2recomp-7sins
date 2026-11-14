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

// Function: sub_004E2AB0
// Address: 0x4e2ab0 - 0x4e2ac0
void sub_004E2AB0_0x4e2ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2AB0_0x4e2ab0");
#endif

    ctx->pc = 0x4e2ab0u;

    // 0x4e2ab0: 0x742e7866  .word       0x742E7866                   # INVALID     $at, $t6, 0x7866 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2ab0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2AB0 raw=0x742E7866");
    // 0x4e2ab4: 0x65677261  daddiu      $a3, $t3, 0x7261
    ctx->pc = 0x4e2ab4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29281);
    // 0x4e2ab8: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e2ab8u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2abc: 0x0  nop
    ctx->pc = 0x4e2abcu;
    // NOP
    ctx->pc = 0x4e2ac0u;
}
