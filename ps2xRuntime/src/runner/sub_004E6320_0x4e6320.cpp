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

// Function: sub_004E6320
// Address: 0x4e6320 - 0x4e6360
void sub_004E6320_0x4e6320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6320_0x4e6320");
#endif

    switch (ctx->pc) {
        case 0x4e6350u: goto label_4e6350;
        default: break;
    }

    ctx->pc = 0x4e6320u;

    // 0x4e6320: 0x3a6b6170  xori        $t3, $s3, 0x6170
    ctx->pc = 0x4e6320u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)24944);
    // 0x4e6324: 0x61746164  daddi       $s4, $t3, 0x6164
    ctx->pc = 0x4e6324u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24932; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x4e6328: 0x696e615c  ldl         $t6, 0x615C($t3)
    ctx->pc = 0x4e6328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24924); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e632c: 0x615c736d  daddi       $gp, $t2, 0x736D
    ctx->pc = 0x4e632cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 10); int64_t imm = (int64_t)(int32_t)29549; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 28, res); }
    // 0x4e6330: 0x726f7463  .word       0x726F7463                   # INVALID     $s3, $t7, 0x7463 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e6330u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E6330 raw=0x726F7463");
    // 0x4e6334: 0x6f6e5c73  ldr         $t6, 0x5C73($k1)
    ctx->pc = 0x4e6334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 23667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e6338: 0x6d79735f  ldr         $t9, 0x735F($t3)
    ctx->pc = 0x4e6338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29535); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x4e633c: 0x385f615c  xori        $ra, $v0, 0x615C
    ctx->pc = 0x4e633cu;
    SET_GPR_U64(ctx, 31, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24924);
    // 0x4e6340: 0x616d5c30  daddi       $t5, $t3, 0x5C30
    ctx->pc = 0x4e6340u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)23600; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 13, res); }
    // 0x4e6344: 0x645f6169  daddiu      $ra, $v0, 0x6169
    ctx->pc = 0x4e6344u;
    SET_GPR_S64(ctx, 31, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)24937);
    // 0x4e6348: 0x6b6e6972  ldl         $t6, 0x6972($k1)
    ctx->pc = 0x4e6348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26994); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e634c: 0x64726168  daddiu      $s2, $v1, 0x6168
    ctx->pc = 0x4e634cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)24936);
label_4e6350:
    // 0x4e6350: 0x696e696d  ldl         $t6, 0x696D($t3)
    ctx->pc = 0x4e6350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26989); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x4e6354: 0x6d6e612e  ldr         $t6, 0x612E($t3)
    ctx->pc = 0x4e6354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24878); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x4e6358: 0x0  nop
    ctx->pc = 0x4e6358u;
    // NOP
    // 0x4e635c: 0x0  nop
    ctx->pc = 0x4e635cu;
    // NOP
    ctx->pc = 0x4e6360u;
}
