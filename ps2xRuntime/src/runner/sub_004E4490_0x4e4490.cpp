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

// Function: sub_004E4490
// Address: 0x4e4490 - 0x4e44c0
void sub_004E4490_0x4e4490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4490_0x4e4490");
#endif

    ctx->pc = 0x4e4490u;

    // 0x4e4490: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e4490u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e4494: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e4494u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e4498: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e4498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e449c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E449Cu;
    {
        const bool branch_taken_0x4e449c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e449c) {
            ctx->pc = 0x4E44A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E449Cu;
            // 0x4e44a0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF634u;
            return;
        }
    }
    ctx->pc = 0x4E44A4u;
    // 0x4e44a4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e44a4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e44a8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e44a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e44ac: 0x6f635f6c  ldr         $v1, 0x5F6C($k1)
    ctx->pc = 0x4e44acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4e44b0: 0x6e6f6d6d  ldr         $t7, 0x6D6D($s3)
    ctx->pc = 0x4e44b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e44b4: 0x7478742e  .word       0x7478742E                   # INVALID     $v1, $t8, 0x742E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e44b4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E44B4 raw=0x7478742E");
    // 0x4e44b8: 0x0  nop
    ctx->pc = 0x4e44b8u;
    // NOP
    // 0x4e44bc: 0x0  nop
    ctx->pc = 0x4e44bcu;
    // NOP
    ctx->pc = 0x4e44c0u;
}
