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

// Function: sub_005DF2D0
// Address: 0x5df2d0 - 0x5df2f0
void sub_005DF2D0_0x5df2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF2D0_0x5df2d0");
#endif

    switch (ctx->pc) {
        case 0x5df2ecu: goto label_5df2ec;
        default: break;
    }

    ctx->pc = 0x5df2d0u;

    // 0x5df2d0: 0x6e75665f  ldr         $s5, 0x665F($s3)
    ctx->pc = 0x5df2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5df2d4: 0x6f697463  ldr         $t1, 0x7463($k1)
    ctx->pc = 0x5df2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df2d8: 0x7261506e  .word       0x7261506E                   # INVALID     $s3, $at, 0x506E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df2d8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF2D8 raw=0x7261506E");
    // 0x5df2dc: 0x702e736d  .word       0x702E736D                   # INVALID     $at, $t6, 0x736D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df2dcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DF2DC raw=0x702E736D");
    // 0x5df2e0: 0x446d754e  .word       0x446D754E                   # INVALID     $v1, $t5, 0x754E # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df2e0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x3, function 0xE at 0x5DF2E0 raw=0x446D754E");
    // 0x5df2e4: 0x4f737269  .word       0x4F737269                   # INVALID     $k1, $s3, 0x7269 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df2e4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF2E4 raw=0x4F737269");
    // 0x5df2e8: 0x69617462  ldl         $at, 0x7462($t3)
    ctx->pc = 0x5df2e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29794); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem << shift)); }
label_5df2ec:
    // 0x5df2ec: 0x64656e  .word       0x0064656E                   # dsub        $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df2ecu;
    { int64_t a = (int64_t)GPR_S64(ctx, 3); int64_t b = (int64_t)GPR_S64(ctx, 4); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 12, r); }
    ctx->pc = 0x5df2f0u;
}
