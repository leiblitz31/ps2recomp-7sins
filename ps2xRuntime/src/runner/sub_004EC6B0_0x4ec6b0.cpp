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

// Function: sub_004EC6B0
// Address: 0x4ec6b0 - 0x4ec6d0
void sub_004EC6B0_0x4ec6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EC6B0_0x4ec6b0");
#endif

    ctx->pc = 0x4ec6b0u;

    // 0x4ec6b0: 0x6c696b73  ldr         $t1, 0x6B73($v1)
    ctx->pc = 0x4ec6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27507); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x4ec6b4: 0x75682e6c  .word       0x75682E6C                   # INVALID     $t3, $t0, 0x2E6C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4ec6b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4EC6B4 raw=0x75682E6C");
    // 0x4ec6b8: 0x72756f6d  .word       0x72756F6D                   # INVALID     $s3, $s5, 0x6F6D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4ec6b8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x4EC6B8 raw=0x72756F6D");
    // 0x4ec6bc: 0x6e65732e  ldr         $a1, 0x732E($s3)
    ctx->pc = 0x4ec6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29486); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4ec6c0: 0x69746973  ldl         $s4, 0x6973($t3)
    ctx->pc = 0x4ec6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26995); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem << shift)); }
    // 0x4ec6c4: 0x79746976  lq          $s4, 0x6976($t3)
    ctx->pc = 0x4ec6c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 11), 26998)));
    // 0x4ec6c8: 0x0  nop
    ctx->pc = 0x4ec6c8u;
    // NOP
    // 0x4ec6cc: 0x0  nop
    ctx->pc = 0x4ec6ccu;
    // NOP
    ctx->pc = 0x4ec6d0u;
}
