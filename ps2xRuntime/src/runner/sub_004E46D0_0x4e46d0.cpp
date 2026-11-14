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

// Function: sub_004E46D0
// Address: 0x4e46d0 - 0x4e46e0
void sub_004E46D0_0x4e46d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E46D0_0x4e46d0");
#endif

    ctx->pc = 0x4e46d0u;

    // 0x4e46d0: 0x6f676f6c  ldr         $a3, 0x6F6C($k1)
    ctx->pc = 0x4e46d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4e46d4: 0x64256425  daddiu      $a1, $at, 0x6425
    ctx->pc = 0x4e46d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25637);
    // 0x4e46d8: 0x0  nop
    ctx->pc = 0x4e46d8u;
    // NOP
    // 0x4e46dc: 0x0  nop
    ctx->pc = 0x4e46dcu;
    // NOP
    ctx->pc = 0x4e46e0u;
}
