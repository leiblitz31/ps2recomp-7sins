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

// Function: sub_004E4298
// Address: 0x4e4298 - 0x4e42b0
void sub_004E4298_0x4e4298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4298_0x4e4298");
#endif

    ctx->pc = 0x4e4298u;

    // 0x4e4298: 0x6f676f6c  ldr         $a3, 0x6F6C($k1)
    ctx->pc = 0x4e4298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 28524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4e429c: 0x64256425  daddiu      $a1, $at, 0x6425
    ctx->pc = 0x4e429cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 1) + (int64_t)(int32_t)25637);
    // 0x4e42a0: 0x0  nop
    ctx->pc = 0x4e42a0u;
    // NOP
    // 0x4e42a4: 0x0  nop
    ctx->pc = 0x4e42a4u;
    // NOP
    // 0x4e42a8: 0x0  nop
    ctx->pc = 0x4e42a8u;
    // NOP
    // 0x4e42ac: 0x0  nop
    ctx->pc = 0x4e42acu;
    // NOP
    ctx->pc = 0x4e42b0u;
}
