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

// Function: sub_005DFB90
// Address: 0x5dfb90 - 0x5dfbb0
void sub_005DFB90_0x5dfb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFB90_0x5dfb90");
#endif

    ctx->pc = 0x5dfb90u;

    // 0x5dfb90: 0x4c637464  .word       0x4C637464                   # INVALID     $v1, $v1, 0x7464 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfb90u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFB90 raw=0x4C637464");
    // 0x5dfb94: 0x614d636f  daddi       $t5, $t2, 0x636F
    ctx->pc = 0x5dfb94u;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)25455; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5dfb98: 0x6567616e  daddiu      $a3, $t3, 0x616E
    ctx->pc = 0x5dfb98u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x5dfb9c: 0x70632e72  .word       0x70632E72                   # INVALID     $v1, $v1, 0x2E72 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfb9cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x32 at 0x5DFB9C raw=0x70632E72");
    // 0x5dfba0: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x5dfba0u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x5dfba4: 0x0  nop
    ctx->pc = 0x5dfba4u;
    // NOP
    // 0x5dfba8: 0x0  nop
    ctx->pc = 0x5dfba8u;
    // NOP
    // 0x5dfbac: 0x0  nop
    ctx->pc = 0x5dfbacu;
    // NOP
    ctx->pc = 0x5dfbb0u;
}
