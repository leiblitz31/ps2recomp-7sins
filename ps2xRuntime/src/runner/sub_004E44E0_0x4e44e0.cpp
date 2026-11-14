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

// Function: sub_004E44E0
// Address: 0x4e44e0 - 0x4e4510
void sub_004E44E0_0x4e44e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E44E0_0x4e44e0");
#endif

    ctx->pc = 0x4e44e0u;

    // 0x4e44e0: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e44e0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e44e4: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e44e4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e44e8: 0x6e61705c  ldr         $at, 0x705C($s3)
    ctx->pc = 0x4e44e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28764); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e44ec: 0x5c736c65  .word       0x5C736C65                   # bgtzl       $v1, . + 4 + (0x6C65 << 2) # 00130000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4E44ECu;
    {
        const bool branch_taken_0x4e44ec = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x4e44ec) {
            ctx->pc = 0x4E44F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4E44ECu;
            // 0x4e44f0: 0x696e696d  ldl         $t6, 0x696D($t3) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x4FF684u;
            return;
        }
    }
    ctx->pc = 0x4E44F4u;
    // 0x4e44f4: 0x656d6167  daddiu      $t5, $t3, 0x6167
    ctx->pc = 0x4e44f4u;
    SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24935);
    // 0x4e44f8: 0x6e705c73  ldr         $s0, 0x5C73($s3)
    ctx->pc = 0x4e44f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x4e44fc: 0x73685f6c  .word       0x73685F6C                   # INVALID     $k1, $t0, 0x5F6C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e44fcu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x4E44FC raw=0x73685F6C");
    // 0x4e4500: 0x69676562  ldl         $a3, 0x6562($t3)
    ctx->pc = 0x4e4500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x4e4504: 0x78742e6e  lq          $s4, 0x2E6E($v1)
    ctx->pc = 0x4e4504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 3), 11886)));
    // 0x4e4508: 0x74  teq         $zero, $zero, 1
    ctx->pc = 0x4e4508u;
    if (GPR_U64(ctx, 0) == GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e450c: 0x0  nop
    ctx->pc = 0x4e450cu;
    // NOP
    ctx->pc = 0x4e4510u;
}
