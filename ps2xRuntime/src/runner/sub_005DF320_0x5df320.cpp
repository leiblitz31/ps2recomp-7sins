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

// Function: sub_005DF320
// Address: 0x5df320 - 0x5df340
void sub_005DF320_0x5df320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF320_0x5df320");
#endif

    ctx->pc = 0x5df320u;

    // 0x5df320: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df320u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5df324: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df324u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df328: 0x626d756e  daddi       $t5, $s3, 0x756E
    ctx->pc = 0x5df328u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)30062; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x5df32c: 0x6f207265  ldr         $zero, 0x7265($t9)
    ctx->pc = 0x5df32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df330: 0x69662066  ldl         $a2, 0x2066($t3)
    ctx->pc = 0x5df330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5df334: 0x6520656c  daddiu      $zero, $t1, 0x656C
    ctx->pc = 0x5df334u;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)25964);
    // 0x5df338: 0x6972746e  ldl         $s2, 0x746E($t3)
    ctx->pc = 0x5df338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x5df33c: 0x7365  .word       0x00007365                   # move        $t6, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df33cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x5df340u;
}
