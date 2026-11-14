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

// Function: sub_004E6430
// Address: 0x4e6430 - 0x4e6468
void sub_004E6430_0x4e6430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6430_0x4e6430");
#endif

    switch (ctx->pc) {
        case 0x4e6460u: goto label_4e6460;
        default: break;
    }

    ctx->pc = 0x4e6430u;

    // 0x4e6430: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6430u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6434: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6434u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6438: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e6438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e643c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e643cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
    // 0x4e6440: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6440u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E6440 raw=0x726F7463");
    // 0x4e6444: 0x6f6e5c73  ldr         $t6, 0x5C73($k1)
    ctx->pc = 0x4e6444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e6448: 0x6d79735f  ldr         $t9, 0x735F($t3)
    ctx->pc = 0x4e6448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4e644c: 0x385f615c  xori        $ra, $v0, 0x615C
    ctx->pc = 0x4e644cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24924);
    // 0x4e6450: 0x616d5c30  daddi       $t5, $t3, 0x5C30
    ctx->pc = 0x4e6450u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23600; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x4e6454: 0x645f6173  daddiu      $ra, $v0, 0x6173
    ctx->pc = 0x4e6454u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24947);
    // 0x4e6458: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e6458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e645c: 0x696e696d  ldl         $t6, 0x696D($t3)
    ctx->pc = 0x4e645cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
label_4e6460:
    // 0x4e6460: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4e6460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e6464: 0x0  nop
    ctx->pc = 0x4e6464u;
    // NOP
    ctx->pc = 0x4e6468u;
}
