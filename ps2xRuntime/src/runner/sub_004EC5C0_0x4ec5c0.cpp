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

// Function: sub_004EC5C0
// Address: 0x4ec5c0 - 0x4ec5d0
void sub_004EC5C0_0x4ec5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC5C0_0x4ec5c0");
#endif

    ctx->pc = 0x4ec5c0u;

    // 0x4ec5c0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec5c4: 0x6c662e6c  ldr         $a2, 0x2E6C($v1)
    ctx->pc = 0x4ec5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11884); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x4ec5c8: 0x65747461  daddiu      $s4, $t3, 0x7461
    ctx->pc = 0x4ec5c8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29793);
    // 0x4ec5cc: 0x656972  tlt         $v1, $a1, 421
    ctx->pc = 0x4ec5ccu;
    if (GPR_S64(ctx, 3) < GPR_S64(ctx, 5)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4ec5d0u;
}
