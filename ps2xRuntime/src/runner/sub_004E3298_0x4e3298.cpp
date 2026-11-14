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

// Function: sub_004E3298
// Address: 0x4e3298 - 0x4e32a8
void sub_004E3298_0x4e3298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3298_0x4e3298");
#endif

    ctx->pc = 0x4e3298u;

    // 0x4e3298: 0x6e6f6369  ldr         $t7, 0x6369($s3)
    ctx->pc = 0x4e3298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25449); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e329c: 0x6c6c615f  ldr         $t4, 0x615F($v1)
    ctx->pc = 0x4e329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24927); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x4e32a0: 0x0  nop
    ctx->pc = 0x4e32a0u;
    // NOP
    // 0x4e32a4: 0x0  nop
    ctx->pc = 0x4e32a4u;
    // NOP
    ctx->pc = 0x4e32a8u;
}
