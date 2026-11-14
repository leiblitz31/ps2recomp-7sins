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

// Function: sub_004E6198
// Address: 0x4e6198 - 0x4e61a8
void sub_004E6198_0x4e6198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6198_0x4e6198");
#endif

    ctx->pc = 0x4e6198u;

    // 0x4e6198: 0x6c6c6966  ldr         $t4, 0x6966($v1)
    ctx->pc = 0x4e6198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26982); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e619c: 0x616c675f  daddi       $t4, $t3, 0x675F
    ctx->pc = 0x4e619cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26463; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, res); }
    // 0x4e61a0: 0x7373  tltu        $zero, $zero, 461
    ctx->pc = 0x4e61a0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e61a4: 0x0  nop
    ctx->pc = 0x4e61a4u;
    // NOP
    ctx->pc = 0x4e61a8u;
}
