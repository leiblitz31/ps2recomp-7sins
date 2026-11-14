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

// Function: sub_004E6C80
// Address: 0x4e6c80 - 0x4e6cb0
void sub_004E6C80_0x4e6c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6C80_0x4e6c80");
#endif

    switch (ctx->pc) {
        case 0x4e6c88u: goto label_4e6c88;
        default: break;
    }

    ctx->pc = 0x4e6c80u;

    // 0x4e6c80: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6c80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6c84: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6c84u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
label_4e6c88:
    // 0x4e6c88: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e6c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e6c8c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E6C8Cu;
    {
        const bool branch_taken_0x4e6c8c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e6c8c) {
            ctx->pc = 0x4E6C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E6C8Cu;
            // 0x4e6c90: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x501E24u;
            return;
        }
    }
    ctx->pc = 0x4E6C94u;
    // 0x4e6c94: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e6c94u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e6c98: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e6c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e6c9c: 0x73685f6c  .word       0x73685F6C                   # INVALID     $k1, $t0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6c9cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E6C9C raw=0x73685F6C");
    // 0x4e6ca0: 0x656a626f  daddiu      $t2, $t3, 0x626F
    ctx->pc = 0x4e6ca0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25199);
    // 0x4e6ca4: 0x76697463  .word       0x76697463                   # INVALID     $s3, $t1, 0x7463 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ca4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6CA4 raw=0x76697463");
    // 0x4e6ca8: 0x742e7365  .word       0x742E7365                   # INVALID     $at, $t6, 0x7365 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e6ca8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E6CA8 raw=0x742E7365");
    // 0x4e6cac: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x4e6cacu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
    ctx->pc = 0x4e6cb0u;
}
