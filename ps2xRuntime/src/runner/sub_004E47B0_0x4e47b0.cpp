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

// Function: sub_004E47B0
// Address: 0x4e47b0 - 0x4e47c0
void sub_004E47B0_0x4e47b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E47B0_0x4e47b0");
#endif

    ctx->pc = 0x4e47b0u;

    // 0x4e47b0: 0x6c6c7562  ldr         $t4, 0x7562($v1)
    ctx->pc = 0x4e47b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30050); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e47b4: 0x6f707465  ldr         $s0, 0x7465($k1)
    ctx->pc = 0x4e47b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29797); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e47b8: 0x2e746e69  sltiu       $s4, $s3, 0x6E69
    ctx->pc = 0x4e47b8u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)28265) ? 1 : 0);
    // 0x4e47bc: 0x6b62  .word       0x00006B62                   # neg         $t5, $zero # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e47bcu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    ctx->pc = 0x4e47c0u;
}
