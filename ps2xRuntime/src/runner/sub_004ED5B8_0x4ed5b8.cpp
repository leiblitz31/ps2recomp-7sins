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

// Function: sub_004ED5B8
// Address: 0x4ed5b8 - 0x4ed5c8
void sub_004ED5B8_0x4ed5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED5B8_0x4ed5b8");
#endif

    ctx->pc = 0x4ed5b8u;

    // 0x4ed5b8: 0x6c637865  ldr         $v1, 0x7865($v1)
    ctx->pc = 0x4ed5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4ed5bc: 0x315f6d61  andi        $ra, $t2, 0x6D61
    ctx->pc = 0x4ed5bcu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)28001);
    // 0x4ed5c0: 0x0  nop
    ctx->pc = 0x4ed5c0u;
    // NOP
    // 0x4ed5c4: 0x0  nop
    ctx->pc = 0x4ed5c4u;
    // NOP
    ctx->pc = 0x4ed5c8u;
}
