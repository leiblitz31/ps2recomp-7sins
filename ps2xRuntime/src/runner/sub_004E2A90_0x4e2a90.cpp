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

// Function: sub_004E2A90
// Address: 0x4e2a90 - 0x4e2aa0
void sub_004E2A90_0x4e2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2A90_0x4e2a90");
#endif

    ctx->pc = 0x4e2a90u;

    // 0x4e2a90: 0x6d2e626e  ldr         $t6, 0x626E($t1)
    ctx->pc = 0x4e2a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25198); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e2a94: 0x69737369  ldl         $s3, 0x7369($t3)
    ctx->pc = 0x4e2a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29545); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 19, (GPR_U64(ctx, 19) & keepMask) | (mem << shift)); }
    // 0x4e2a98: 0x736e6f  .word       0x00736E6F                   # dsubu       $t5, $v1, $s3 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2a98u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) - GPR_U64(ctx, 19));
    // 0x4e2a9c: 0x0  nop
    ctx->pc = 0x4e2a9cu;
    // NOP
    ctx->pc = 0x4e2aa0u;
}
