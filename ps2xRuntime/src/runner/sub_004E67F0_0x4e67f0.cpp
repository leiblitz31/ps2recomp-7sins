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

// Function: sub_004E67F0
// Address: 0x4e67f0 - 0x4e6808
void sub_004E67F0_0x4e67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E67F0_0x4e67f0");
#endif

    ctx->pc = 0x4e67f0u;

    // 0x4e67f0: 0x612e7866  daddi       $t6, $t1, 0x7866
    ctx->pc = 0x4e67f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)30822; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x4e67f4: 0x2e6d696e  sltiu       $t5, $s3, 0x696E
    ctx->pc = 0x4e67f4u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26990) ? 1 : 0);
    // 0x4e67f8: 0x6e69616d  ldr         $t1, 0x616D($s3)
    ctx->pc = 0x4e67f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24941); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e67fc: 0x6570732e  daddiu      $s0, $t3, 0x732E
    ctx->pc = 0x4e67fcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29486);
    // 0x4e6800: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e6800u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e6804: 0x0  nop
    ctx->pc = 0x4e6804u;
    // NOP
    ctx->pc = 0x4e6808u;
}
