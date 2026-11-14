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

// Function: sub_004ED638
// Address: 0x4ed638 - 0x4ed650
void sub_004ED638_0x4ed638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED638_0x4ed638");
#endif

    ctx->pc = 0x4ed638u;

    // 0x4ed638: 0x726f6f64  .word       0x726F6F64                   # INVALID     $s3, $t7, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ed638u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x4ED638 raw=0x726F6F64");
    // 0x4ed63c: 0x6f5f315f  ldr         $ra, 0x315F($k0)
    ctx->pc = 0x4ed63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 12639); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 31, (GPR_U64(ctx, 31) & keepMask) | (mem >> shift)); }
    // 0x4ed640: 0x6e6570  tge         $v1, $t6, 405
    ctx->pc = 0x4ed640u;
    if (GPR_S64(ctx, 3) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
    // 0x4ed644: 0x0  nop
    ctx->pc = 0x4ed644u;
    // NOP
    // 0x4ed648: 0x0  nop
    ctx->pc = 0x4ed648u;
    // NOP
    // 0x4ed64c: 0x0  nop
    ctx->pc = 0x4ed64cu;
    // NOP
    ctx->pc = 0x4ed650u;
}
