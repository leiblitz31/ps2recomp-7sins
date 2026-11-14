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

// Function: sub_004E31D8
// Address: 0x4e31d8 - 0x4e31e8
void sub_004E31D8_0x4e31d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E31D8_0x4e31d8");
#endif

    switch (ctx->pc) {
        case 0x4e31e0u: goto label_4e31e0;
        default: break;
    }

    ctx->pc = 0x4e31d8u;

    // 0x4e31d8: 0x6e696f63  ldr         $t1, 0x6F63($s3)
    ctx->pc = 0x4e31d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4e31dc: 0x6f68675f  ldr         $t0, 0x675F($k1)
    ctx->pc = 0x4e31dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26463); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_4e31e0:
    // 0x4e31e0: 0x7473  tltu        $zero, $zero, 465
    ctx->pc = 0x4e31e0u;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e31e4: 0x0  nop
    ctx->pc = 0x4e31e4u;
    // NOP
    ctx->pc = 0x4e31e8u;
}
