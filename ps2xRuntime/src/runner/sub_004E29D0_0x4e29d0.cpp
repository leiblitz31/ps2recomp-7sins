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

// Function: sub_004E29D0
// Address: 0x4e29d0 - 0x4e29e0
void sub_004E29D0_0x4e29d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E29D0_0x4e29d0");
#endif

    ctx->pc = 0x4e29d0u;

    // 0x4e29d0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e29d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e29d4: 0x6f70735f  ldr         $s0, 0x735F($k1)
    ctx->pc = 0x4e29d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e29d8: 0x6c637472  ldr         $v1, 0x7472($v1)
    ctx->pc = 0x4e29d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29810); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4e29dc: 0x6275  .word       0x00006275                   # INVALID     $zero, $zero, 0x6275 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e29dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x4E29DC raw=0x00006275");
    ctx->pc = 0x4e29e0u;
}
