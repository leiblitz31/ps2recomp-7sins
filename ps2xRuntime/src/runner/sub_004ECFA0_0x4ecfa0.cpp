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

// Function: sub_004ECFA0
// Address: 0x4ecfa0 - 0x4ecfb0
void sub_004ECFA0_0x4ecfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ECFA0_0x4ecfa0");
#endif

    ctx->pc = 0x4ecfa0u;

    // 0x4ecfa0: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ecfa0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ECFA0 raw=0x732E7866");
    // 0x4ecfa4: 0x61757469  daddi       $s5, $t3, 0x7469
    ctx->pc = 0x4ecfa4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29801; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
    // 0x4ecfa8: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4ecfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4ecfac: 0x0  nop
    ctx->pc = 0x4ecfacu;
    // NOP
    ctx->pc = 0x4ecfb0u;
}
