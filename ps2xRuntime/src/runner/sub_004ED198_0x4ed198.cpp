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

// Function: sub_004ED198
// Address: 0x4ed198 - 0x4ed1a8
void sub_004ED198_0x4ed198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED198_0x4ed198");
#endif

    ctx->pc = 0x4ed198u;

    // 0x4ed198: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4ed198u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4ed19c: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed19cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4ED19C raw=0x726F7463");
    // 0x4ed1a0: 0x6d616e2e  ldr         $at, 0x6E2E($t3)
    ctx->pc = 0x4ed1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28206); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4ed1a4: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed1a4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x4ed1a8u;
}
