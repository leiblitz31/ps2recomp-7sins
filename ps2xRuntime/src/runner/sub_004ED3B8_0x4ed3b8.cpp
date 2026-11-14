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

// Function: sub_004ED3B8
// Address: 0x4ed3b8 - 0x4ed3d0
void sub_004ED3B8_0x4ed3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED3B8_0x4ed3b8");
#endif

    ctx->pc = 0x4ed3b8u;

    // 0x4ed3b8: 0x6c6f6e2d  ldr         $t7, 0x6E2D($v1)
    ctx->pc = 0x4ed3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28205); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4ed3bc: 0x74686769  .word       0x74686769                   # INVALID     $v1, $t0, 0x6769 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ed3bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4ED3BC raw=0x74686769");
    // 0x4ed3c0: 0x70616d  .word       0x0070616D                   # daddu       $t4, $v1, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4ed3c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 16));
    // 0x4ed3c4: 0x0  nop
    ctx->pc = 0x4ed3c4u;
    // NOP
    // 0x4ed3c8: 0x0  nop
    ctx->pc = 0x4ed3c8u;
    // NOP
    // 0x4ed3cc: 0x0  nop
    ctx->pc = 0x4ed3ccu;
    // NOP
    ctx->pc = 0x4ed3d0u;
}
