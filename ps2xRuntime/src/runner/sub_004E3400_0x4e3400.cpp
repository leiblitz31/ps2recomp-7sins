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

// Function: sub_004E3400
// Address: 0x4e3400 - 0x4e3420
void sub_004E3400_0x4e3400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E3400_0x4e3400");
#endif

    ctx->pc = 0x4e3400u;

    // 0x4e3400: 0x6e657261  ldr         $a1, 0x7261($s3)
    ctx->pc = 0x4e3400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e3404: 0x63612061  daddi       $at, $k1, 0x2061
    ctx->pc = 0x4e3404u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)8289; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x4e3408: 0x6e6f6974  ldr         $t7, 0x6974($s3)
    ctx->pc = 0x4e3408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 15, (GPR_U64(ctx, 15) & keepMask) | (mem >> shift)); }
    // 0x4e340c: 0x72756320  .word       0x72756320                   # madd1       $t4, $s3, $s5 # 00000300 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e340cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 21); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x4e3410: 0x3a726f73  xori        $s2, $s3, 0x6F73
    ctx->pc = 0x4e3410u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28531);
    // 0x4e3414: 0x4c554320  .word       0x4C554320                   # INVALID     $v0, $s5, 0x4320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e3414u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x4E3414 raw=0x4C554320");
    // 0x4e3418: 0x45525554  .word       0x45525554                   # INVALID     $t2, $s2, 0x5554 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x4e3418u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x14 at 0x4E3418 raw=0x45525554");
    // 0x4e341c: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x4e341cu;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    ctx->pc = 0x4e3420u;
}
