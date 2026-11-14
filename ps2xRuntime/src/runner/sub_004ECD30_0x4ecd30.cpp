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

// Function: sub_004ECD30
// Address: 0x4ecd30 - 0x4ecd50
void sub_004ECD30_0x4ecd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECD30_0x4ecd30");
#endif

    ctx->pc = 0x4ecd30u;

    // 0x4ecd30: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4ecd30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4ecd34: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4ecd34u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4ecd38: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4ecd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4ecd3c: 0x6f5c736d  ldr         $gp, 0x736D($k0)
    ctx->pc = 0x4ecd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 29549); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 28, (GPR_U64(ctx, 28) & keepMask) | (mem >> shift)); }
    // 0x4ecd40: 0x63656a62  daddi       $a1, $k1, 0x6A62
    ctx->pc = 0x4ecd40u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)27234; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4ecd44: 0x255c7374  addiu       $gp, $t2, 0x7374
    ctx->pc = 0x4ecd44u;
    SET_GPR_S32(ctx, 28, (int32_t)ADD32(GPR_U32(ctx, 10), 29556));
    // 0x4ecd48: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x4ecd48u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ecd4c: 0x0  nop
    ctx->pc = 0x4ecd4cu;
    // NOP
    ctx->pc = 0x4ecd50u;
}
