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

// Function: sub_004E3F58
// Address: 0x4e3f58 - 0x4e3f68
void sub_004E3F58_0x4e3f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3F58_0x4e3f58");
#endif

    ctx->pc = 0x4e3f58u;

    // 0x4e3f58: 0x735f6975  .word       0x735F6975                   # INVALID     $k0, $ra, 0x6975 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e3f58u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x35 at 0x4E3F58 raw=0x735F6975");
    // 0x4e3f5c: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e3f5cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e3f60: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e3f60u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e3f64: 0x0  nop
    ctx->pc = 0x4e3f64u;
    // NOP
    ctx->pc = 0x4e3f68u;
}
