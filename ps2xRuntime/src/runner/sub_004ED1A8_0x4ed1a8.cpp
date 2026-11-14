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

// Function: sub_004ED1A8
// Address: 0x4ed1a8 - 0x4ed1b8
void sub_004ED1A8_0x4ed1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED1A8_0x4ed1a8");
#endif

    ctx->pc = 0x4ed1a8u;

    // 0x4ed1a8: 0x662e7866  daddiu      $t6, $s1, 0x7866
    ctx->pc = 0x4ed1a8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)30822);
    // 0x4ed1ac: 0x6e656972  ldr         $a1, 0x6972($s3)
    ctx->pc = 0x4ed1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed1b0: 0x69687364  ldl         $t0, 0x7364($t3)
    ctx->pc = 0x4ed1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4ed1b4: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x4ed1b4u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4ed1b8u;
}
