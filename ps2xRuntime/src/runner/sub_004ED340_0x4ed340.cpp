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

// Function: sub_004ED340
// Address: 0x4ed340 - 0x4ed360
void sub_004ED340_0x4ed340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED340_0x4ed340");
#endif

    ctx->pc = 0x4ed340u;

    // 0x4ed340: 0x6f746361  ldr         $s4, 0x6361($k1)
    ctx->pc = 0x4ed340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25441); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x4ed344: 0x61656872  daddi       $a1, $t3, 0x6872
    ctx->pc = 0x4ed344u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26738; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4ed348: 0x72702e64  .word       0x72702E64                   # INVALID     $s3, $s0, 0x2E64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed348u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4ED348 raw=0x72702E64");
    // 0x4ed34c: 0x73797374  .word       0x73797374                   # psllh       $t6, $t9, 13 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed34cu;
    SET_GPR_VEC(ctx, 14, _mm_slli_epi16(GPR_VEC(ctx, 25), 13));
    // 0x4ed350: 0x6d616e2e  ldr         $at, 0x6E2E($t3)
    ctx->pc = 0x4ed350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28206); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4ed354: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed354u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4ed358: 0x0  nop
    ctx->pc = 0x4ed358u;
    // NOP
    // 0x4ed35c: 0x0  nop
    ctx->pc = 0x4ed35cu;
    // NOP
    ctx->pc = 0x4ed360u;
}
