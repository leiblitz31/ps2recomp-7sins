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

// Function: sub_004ED280
// Address: 0x4ed280 - 0x4ed2a0
void sub_004ED280_0x4ed280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED280_0x4ed280");
#endif

    ctx->pc = 0x4ed280u;

    // 0x4ed280: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed280u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED280 raw=0x732E7866");
    // 0x4ed284: 0x69736e65  ldl         $s3, 0x6E65($t3)
    ctx->pc = 0x4ed284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4ed288: 0x696c6962  ldl         $t4, 0x6962($t3)
    ctx->pc = 0x4ed288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26978); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x4ed28c: 0x662e7974  daddiu      $t6, $s1, 0x7974
    ctx->pc = 0x4ed28cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)31092);
    // 0x4ed290: 0x6e656972  ldr         $a1, 0x6972($s3)
    ctx->pc = 0x4ed290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed294: 0x69687364  ldl         $t0, 0x7364($t3)
    ctx->pc = 0x4ed294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29540); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x4ed298: 0x70  tge         $zero, $zero, 1
    ctx->pc = 0x4ed298u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed29c: 0x0  nop
    ctx->pc = 0x4ed29cu;
    // NOP
    ctx->pc = 0x4ed2a0u;
}
