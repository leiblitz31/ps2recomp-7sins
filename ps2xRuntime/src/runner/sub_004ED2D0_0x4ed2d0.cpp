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

// Function: sub_004ED2D0
// Address: 0x4ed2d0 - 0x4ed2e8
void sub_004ED2D0_0x4ed2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED2D0_0x4ed2d0");
#endif

    ctx->pc = 0x4ed2d0u;

    // 0x4ed2d0: 0x732e7866  .word       0x732E7866                   # INVALID     $t9, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed2d0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED2D0 raw=0x732E7866");
    // 0x4ed2d4: 0x6c6c696b  ldr         $t4, 0x696B($v1)
    ctx->pc = 0x4ed2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26987); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4ed2d8: 0x6e65732e  ldr         $a1, 0x732E($s3)
    ctx->pc = 0x4ed2d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ed2dc: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x4ed2dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ed2e0: 0x79746976  lq          $s4, 0x6976($t3)
    ctx->pc = 0x4ed2e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 26998)));
    // 0x4ed2e4: 0x0  nop
    ctx->pc = 0x4ed2e4u;
    // NOP
    ctx->pc = 0x4ed2e8u;
}
