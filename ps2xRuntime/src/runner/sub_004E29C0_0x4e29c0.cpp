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

// Function: sub_004E29C0
// Address: 0x4e29c0 - 0x4e29d0
void sub_004E29C0_0x4e29c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E29C0_0x4e29c0");
#endif

    ctx->pc = 0x4e29c0u;

    // 0x4e29c0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e29c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e29c4: 0x7361655f  .word       0x7361655F                   # INVALID     $k1, $at, 0x655F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e29c4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x1F at 0x4E29C4 raw=0x7361655F");
    // 0x4e29c8: 0x6e697774  ldr         $t1, 0x7774($s3)
    ctx->pc = 0x4e29c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 30580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e29cc: 0x67  .word       0x00000067                   # not         $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e29ccu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
    ctx->pc = 0x4e29d0u;
}
