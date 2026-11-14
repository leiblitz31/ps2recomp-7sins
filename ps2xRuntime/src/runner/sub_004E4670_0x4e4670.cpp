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

// Function: sub_004E4670
// Address: 0x4e4670 - 0x4e46a0
void sub_004E4670_0x4e4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4670_0x4e4670");
#endif

    switch (ctx->pc) {
        case 0x4e467cu: goto label_4e467c;
        default: break;
    }

    ctx->pc = 0x4e4670u;

    // 0x4e4670: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e4670u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e4674: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e4674u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e4678: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e4678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
label_4e467c:
    // 0x4e467c: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E467Cu;
    {
        const bool branch_taken_0x4e467c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e467c) {
            ctx->pc = 0x4E4680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E467Cu;
            // 0x4e4680: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF814u;
            return;
        }
    }
    ctx->pc = 0x4E4684u;
    // 0x4e4684: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e4684u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e4688: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e4688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e468c: 0x6f635f6c  ldr         $v1, 0x5F6C($k1)
    ctx->pc = 0x4e468cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 24428); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4e4690: 0x6e6f6d6d  ldr         $t7, 0x6D6D($s3)
    ctx->pc = 0x4e4690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e4694: 0x6c65685f  ldr         $a1, 0x685F($v1)
    ctx->pc = 0x4e4694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26719); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e4698: 0x78742e70  lq          $s4, 0x2E70($v1)
    ctx->pc = 0x4e4698u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 3), 11888)));
    // 0x4e469c: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e469cu;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e46a0u;
}
