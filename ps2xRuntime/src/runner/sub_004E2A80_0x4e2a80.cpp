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

// Function: sub_004E2A80
// Address: 0x4e2a80 - 0x4e2a90
void sub_004E2A80_0x4e2a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2A80_0x4e2a80");
#endif

    ctx->pc = 0x4e2a80u;

    // 0x4e2a80: 0x722e676d  .word       0x722E676D                   # INVALID     $s1, $t6, 0x676D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2a80u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4E2A80 raw=0x722E676D");
    // 0x4e2a84: 0x6c757365  ldr         $s5, 0x7365($v1)
    ctx->pc = 0x4e2a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e2a88: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e2a88u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e2a8c: 0x0  nop
    ctx->pc = 0x4e2a8cu;
    // NOP
    ctx->pc = 0x4e2a90u;
}
