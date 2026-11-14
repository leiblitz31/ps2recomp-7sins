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

// Function: sub_004E2850
// Address: 0x4e2850 - 0x4e2928
void sub_004E2850_0x4e2850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E2850_0x4e2850");
#endif

    ctx->pc = 0x4e2850u;

    // 0x4e2850: 0x6576656c  daddiu      $s6, $t3, 0x656C
    ctx->pc = 0x4e2850u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25964);
    // 0x4e2854: 0x61622e6c  daddi       $v0, $t3, 0x2E6C
    ctx->pc = 0x4e2854u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)11884; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
    // 0x4e2858: 0x70756b63  .word       0x70756B63                   # INVALID     $v1, $s5, 0x6B63 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e2858u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x23 at 0x4E2858 raw=0x70756B63");
    // 0x4e285c: 0x6c75662e  ldr         $s5, 0x662E($v1)
    ctx->pc = 0x4e285cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26158); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x4e2860: 0x7461706c  .word       0x7461706C                   # INVALID     $v1, $at, 0x706C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2860u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E2860 raw=0x7461706C");
    // 0x4e2864: 0x6d616e68  ldr         $at, 0x6E68($t3)
    ctx->pc = 0x4e2864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e2868: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2868u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x4e286c: 0x0  nop
    ctx->pc = 0x4e286cu;
    // NOP
    // 0x4e2870: 0x0  nop
    ctx->pc = 0x4e2870u;
    // NOP
    // 0x4e2874: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2874u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e2878: 0x0  nop
    ctx->pc = 0x4e2878u;
    // NOP
    // 0x4e287c: 0x0  nop
    ctx->pc = 0x4e287cu;
    // NOP
    // 0x4e2880: 0x0  nop
    ctx->pc = 0x4e2880u;
    // NOP
    // 0x4e2884: 0x3f800000  .word       0x3F800000                   # lui         $zero, 0x0 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e2884u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x4e2888: 0x0  nop
    ctx->pc = 0x4e2888u;
    // NOP
    // 0x4e288c: 0x0  nop
    ctx->pc = 0x4e288cu;
    // NOP
    // 0x4e2890: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e2890u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e2894: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e2894u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e2898: 0x6e656d61  ldr         $a1, 0x6D61($s3)
    ctx->pc = 0x4e2898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28001); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4e289c: 0x7976  tne         $zero, $zero, 485
    ctx->pc = 0x4e289cu;
    if (GPR_U64(ctx, 0) != GPR_U64(ctx, 0)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e28a0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e28a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e28a4: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e28a4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e28a8: 0x72706d61  .word       0x72706D61                   # maddu1      $t5, $s3, $s0 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e28a8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 16); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4e28ac: 0x656469  .word       0x00656469                   # mtsa        $v1 # 00056440 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x4e28acu;
    ctx->sa = GPR_U32(ctx, 3) & 0x7F;
    // 0x4e28b0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e28b0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e28b4: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e28b4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e28b8: 0x6e616d61  ldr         $at, 0x6D61($s3)
    ctx->pc = 0x4e28b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28001); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x4e28bc: 0x797267  .word       0x00797267                   # nor         $t6, $v1, $t9 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e28bcu;
    SET_GPR_U64(ctx, 14, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 25)));
    // 0x4e28c0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e28c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e28c4: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e28c4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e28c8: 0x6c676d61  ldr         $a3, 0x6D61($v1)
    ctx->pc = 0x4e28c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28001); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x4e28cc: 0x6f74756f  ldr         $s4, 0x756F($k1)
    ctx->pc = 0x4e28ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 30063); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x4e28d0: 0x796e  .word       0x0000796E                   # dsub        $t7, $zero, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e28d0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 15, r); }
    // 0x4e28d4: 0x0  nop
    ctx->pc = 0x4e28d4u;
    // NOP
    // 0x4e28d8: 0x0  nop
    ctx->pc = 0x4e28d8u;
    // NOP
    // 0x4e28dc: 0x0  nop
    ctx->pc = 0x4e28dcu;
    // NOP
    // 0x4e28e0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e28e0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e28e4: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e28e4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e28e8: 0x72676d61  .word       0x72676D61                   # maddu1      $t5, $s3, $a3 # 00000540 <InstrIdType: R5900_MMI>
    ctx->pc = 0x4e28e8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); uint64_t prod = (uint64_t)GPR_U32(ctx, 19) * (uint64_t)GPR_U32(ctx, 7); uint64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 13, (int32_t)result); }
    // 0x4e28ec: 0x646565  .word       0x00646565                   # or          $t4, $v1, $a0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e28ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4e28f0: 0x61657261  daddi       $a1, $t3, 0x7261
    ctx->pc = 0x4e28f0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29281; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x4e28f4: 0x6572645f  daddiu      $s2, $t3, 0x645F
    ctx->pc = 0x4e28f4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)25695);
    // 0x4e28f8: 0x756c6d61  .word       0x756C6D61                   # INVALID     $t3, $t4, 0x6D61 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x4e28f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x4E28F8 raw=0x756C6D61");
    // 0x4e28fc: 0x79727578  lq          $s2, 0x7578($t3)
    ctx->pc = 0x4e28fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 11), 30072)));
    // 0x4e2900: 0x0  nop
    ctx->pc = 0x4e2900u;
    // NOP
    // 0x4e2904: 0x0  nop
    ctx->pc = 0x4e2904u;
    // NOP
    // 0x4e2908: 0x0  nop
    ctx->pc = 0x4e2908u;
    // NOP
    // 0x4e290c: 0x0  nop
    ctx->pc = 0x4e290cu;
    // NOP
    // 0x4e2910: 0x4e2890  .word       0x004E2890                   # mfhi        $a1 # 004E0080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2910u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x4e2914: 0x4e28a0  .word       0x004E28A0                   # add         $a1, $v0, $t6 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2914u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x4e2918: 0x4e28b0  tge         $v0, $t6, 162
    ctx->pc = 0x4e2918u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
    // 0x4e291c: 0x4e28c0  .word       0x004E28C0                   # sll         $a1, $t6, 3 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e291cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x4e2920: 0x4e28e0  .word       0x004E28E0                   # add         $a1, $v0, $t6 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x4e2920u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 14);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 5, (int32_t)result);     } }
    // 0x4e2924: 0x4e28f0  tge         $v0, $t6, 163
    ctx->pc = 0x4e2924u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 14)) { runtime->handleTrap(rdram, ctx); }
    ctx->pc = 0x4e2928u;
}
