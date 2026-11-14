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

// Function: sub_004EC540
// Address: 0x4ec540 - 0x4ec560
void sub_004EC540_0x4ec540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC540_0x4ec540");
#endif

    ctx->pc = 0x4ec540u;

    // 0x4ec540: 0x67756167  daddiu      $s5, $k1, 0x6167
    ctx->pc = 0x4ec540u;
    SET_GPR_S64(ctx, 21, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)24935);
    // 0x4ec544: 0x65722e65  daddiu      $s2, $t3, 0x2E65
    ctx->pc = 0x4ec544u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)11877);
    // 0x4ec548: 0x6974616c  ldl         $s4, 0x616C($t3)
    ctx->pc = 0x4ec548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ec54c: 0x6c2e6e6f  ldr         $t6, 0x6E6F($at)
    ctx->pc = 0x4ec54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 28271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4ec550: 0x6c76  tne         $zero, $zero, 433
    ctx->pc = 0x4ec550u;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ec554: 0x0  nop
    ctx->pc = 0x4ec554u;
    // NOP
    // 0x4ec558: 0x0  nop
    ctx->pc = 0x4ec558u;
    // NOP
    // 0x4ec55c: 0x0  nop
    ctx->pc = 0x4ec55cu;
    // NOP
    ctx->pc = 0x4ec560u;
}
