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

// Function: sub_004E4030
// Address: 0x4e4030 - 0x4e4050
void sub_004E4030_0x4e4030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4030_0x4e4030");
#endif

    ctx->pc = 0x4e4030u;

    // 0x4e4030: 0x6f5f6975  ldr         $ra, 0x6975($k0)
    ctx->pc = 0x4e4030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 26997); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4e4034: 0x61677475  daddi       $a3, $t3, 0x7475
    ctx->pc = 0x4e4034u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 7, res); }
    // 0x4e4038: 0x735f656d  .word       0x735F656D                   # INVALID     $k0, $ra, 0x656D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e4038u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E4038 raw=0x735F656D");
    // 0x4e403c: 0x63656c65  daddi       $a1, $k1, 0x6C65
    ctx->pc = 0x4e403cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27749; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e4040: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e4040u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e4044: 0x0  nop
    ctx->pc = 0x4e4044u;
    // NOP
    // 0x4e4048: 0x0  nop
    ctx->pc = 0x4e4048u;
    // NOP
    // 0x4e404c: 0x0  nop
    ctx->pc = 0x4e404cu;
    // NOP
    ctx->pc = 0x4e4050u;
}
