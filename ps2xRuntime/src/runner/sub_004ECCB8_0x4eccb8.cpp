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

// Function: sub_004ECCB8
// Address: 0x4eccb8 - 0x4eccc8
void sub_004ECCB8_0x4eccb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECCB8_0x4eccb8");
#endif

    ctx->pc = 0x4eccb8u;

    // 0x4eccb8: 0x69727473  ldl         $s2, 0x7473($t3)
    ctx->pc = 0x4eccb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x4eccbc: 0x61657470  daddi       $a1, $t3, 0x7470
    ctx->pc = 0x4eccbcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29808; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4eccc0: 0x6573  tltu        $zero, $zero, 405
    ctx->pc = 0x4eccc0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4eccc4: 0x0  nop
    ctx->pc = 0x4eccc4u;
    // NOP
    ctx->pc = 0x4eccc8u;
}
