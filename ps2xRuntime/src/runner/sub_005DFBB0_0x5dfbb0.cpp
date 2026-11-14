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

// Function: sub_005DFBB0
// Address: 0x5dfbb0 - 0x5dfbf0
void sub_005DFBB0_0x5dfbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DFBB0_0x5dfbb0");
#endif

    ctx->pc = 0x5dfbb0u;

    // 0x5dfbb0: 0x69576f6d  ldl         $s7, 0x6F6D($t2)
    ctx->pc = 0x5dfbb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 28525); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 23, (GPR_U64(ctx, 23) & keepMask) | (mem << shift)); }
    // 0x5dfbb4: 0x74656764  .word       0x74656764                   # INVALID     $v1, $a1, 0x6764 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfbb4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFBB4 raw=0x74656764");
    // 0x5dfbb8: 0x616e614d  daddi       $t6, $t3, 0x614D
    ctx->pc = 0x5dfbb8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)24909; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5dfbbc: 0x3a726567  xori        $s2, $s3, 0x6567
    ctx->pc = 0x5dfbbcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)25959);
    // 0x5dfbc0: 0x616f4c3a  daddi       $t7, $t3, 0x4C3A
    ctx->pc = 0x5dfbc0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)19514; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, res); }
    // 0x5dfbc4: 0x61725464  daddi       $s2, $t3, 0x5464
    ctx->pc = 0x5dfbc4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)21604; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 18, res); }
    // 0x5dfbc8: 0x74637564  .word       0x74637564                   # INVALID     $v1, $v1, 0x7564 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfbc8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFBC8 raw=0x74637564");
    // 0x5dfbcc: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5dfbccu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5dfbd0: 0x3a202928  xori        $zero, $s1, 0x2928
    ctx->pc = 0x5dfbd0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)10536);
    // 0x5dfbd4: 0x72724520  .word       0x72724520                   # madd1       $t0, $s3, $s2 # 00000500 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfbd4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x5dfbd8: 0x6920726f  ldl         $zero, 0x726F($t1)
    ctx->pc = 0x5dfbd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 29295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5dfbdc: 0x6f6c206e  ldr         $t4, 0x206E($k1)
    ctx->pc = 0x5dfbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5dfbe0: 0x6e696461  ldr         $t1, 0x6461($s3)
    ctx->pc = 0x5dfbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfbe4: 0x69662067  ldl         $a2, 0x2067($t3)
    ctx->pc = 0x5dfbe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5dfbe8: 0x2520656c  addiu       $zero, $t1, 0x656C
    ctx->pc = 0x5dfbe8u;
    // NOP (addiu $zero, ...)
    // 0x5dfbec: 0x73  tltu        $zero, $zero, 1
    ctx->pc = 0x5dfbecu;
    if (GPR_U64(ctx, 0) < GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x5dfbf0u;
}
