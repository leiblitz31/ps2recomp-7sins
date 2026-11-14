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

// Function: sub_004ED200
// Address: 0x4ed200 - 0x4ed220
void sub_004ED200_0x4ed200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED200_0x4ed200");
#endif

    ctx->pc = 0x4ed200u;

    // 0x4ed200: 0x702e7866  .word       0x702E7866                   # INVALID     $at, $t6, 0x7866 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed200u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x26 at 0x4ED200 raw=0x702E7866");
    // 0x4ed204: 0x6f69746f  ldr         $t1, 0x746F($k1)
    ctx->pc = 0x4ed204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ed208: 0x68632e6e  ldl         $v1, 0x2E6E($v1)
    ctx->pc = 0x4ed208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11886); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4ed20c: 0x65676e61  daddiu      $a3, $t3, 0x6E61
    ctx->pc = 0x4ed20cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28257);
    // 0x4ed210: 0x6f74  teq         $zero, $zero, 445
    ctx->pc = 0x4ed210u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed214: 0x0  nop
    ctx->pc = 0x4ed214u;
    // NOP
    // 0x4ed218: 0x0  nop
    ctx->pc = 0x4ed218u;
    // NOP
    // 0x4ed21c: 0x0  nop
    ctx->pc = 0x4ed21cu;
    // NOP
    ctx->pc = 0x4ed220u;
}
