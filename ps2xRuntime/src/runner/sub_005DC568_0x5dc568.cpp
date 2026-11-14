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

// Function: sub_005DC568
// Address: 0x5dc568 - 0x5dc898
void sub_005DC568_0x5dc568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DC568_0x5dc568");
#endif

    switch (ctx->pc) {
        case 0x5dc614u: goto label_5dc614;
        case 0x5dc62cu: goto label_5dc62c;
        case 0x5dc67cu: goto label_5dc67c;
        case 0x5dc6c8u: goto label_5dc6c8;
        case 0x5dc6f4u: goto label_5dc6f4;
        default: break;
    }

    ctx->pc = 0x5dc568u;

    // 0x5dc568: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x5dc568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5dc56c: 0x65642072  daddiu      $a0, $t3, 0x2072
    ctx->pc = 0x5dc56cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8306);
    // 0x5dc570: 0x69646f63  ldl         $a0, 0x6F63($t3)
    ctx->pc = 0x5dc570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5dc574: 0x6320676e  daddi       $zero, $t9, 0x676E
    ctx->pc = 0x5dc574u;
    { int64_t src = (int64_t)GPR_S64(ctx, 25); int64_t imm = (int64_t)(int32_t)26478; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dc578: 0x72706d6f  .word       0x72706D6F                   # INVALID     $s3, $s0, 0x6D6F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dc578u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2F at 0x5DC578 raw=0x72706D6F");
    // 0x5dc57c: 0x65737365  daddiu      $s3, $t3, 0x7365
    ctx->pc = 0x5dc57cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29541);
    // 0x5dc580: 0x65742064  daddiu      $s4, $t3, 0x2064
    ctx->pc = 0x5dc580u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8292);
    // 0x5dc584: 0x7478  dsll        $t6, $zero, 17
    ctx->pc = 0x5dc584u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) << 17);
    // 0x5dc588: 0xc0408000  ll          $zero, -0x8000($v0)
    ctx->pc = 0x5dc588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294934528); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc58c: 0xe060a020  sc          $zero, -0x5FE0($v1)
    ctx->pc = 0x5dc58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4294942752); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 0)); SET_GPR_S32(ctx, 0, 1); } else { SET_GPR_S32(ctx, 0, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc590: 0xd0509010  lld         $s0, -0x6FF0($v0)
    ctx->pc = 0x5dc590u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC590 raw=0xD0509010");
    // 0x5dc594: 0xf070b030  scd         $s0, -0x4FD0($v1)
    ctx->pc = 0x5dc594u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC594 raw=0xF070B030");
    // 0x5dc598: 0xc8488808  lwc2        $8, -0x77F8($v0)
    ctx->pc = 0x5dc598u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC598 raw=0xC8488808");
    // 0x5dc59c: 0xe868a828  swc2        $8, -0x57D8($v1)
    ctx->pc = 0x5dc59cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC59C raw=0xE868A828");
    // 0x5dc5a0: 0xd8589818  lqc2        $vf24, -0x67E8($v0)
    ctx->pc = 0x5dc5a0u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 4294940696)));
    // 0x5dc5a4: 0xf878b838  sqc2        $vf24, -0x47C8($v1)
    ctx->pc = 0x5dc5a4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 4294948920), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x5dc5a8: 0xc4448404  lwc1        $f4, -0x7BFC($v0)
    ctx->pc = 0x5dc5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x5dc5ac: 0xe464a424  swc1        $f4, -0x5BDC($v1)
    ctx->pc = 0x5dc5acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294943780), bits); }
    // 0x5dc5b0: 0xd4549414  ldc1        $f20, -0x6BEC($v0)
    ctx->pc = 0x5dc5b0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC5B0 raw=0xD4549414");
    // 0x5dc5b4: 0xf474b434  sdc1        $f20, -0x4BCC($v1)
    ctx->pc = 0x5dc5b4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC5B4 raw=0xF474B434");
    // 0x5dc5b8: 0xcc4c8c0c  pref        0x0C, -0x73F4($v0)
    ctx->pc = 0x5dc5b8u;
    // PREF instruction (ignored)
    // 0x5dc5bc: 0xec6cac2c  .word       0xEC6CAC2C                   # INVALID     $v1, $t4, -0x53D4 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc5bcu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC5BC raw=0xEC6CAC2C");
    // 0x5dc5c0: 0xdc5c9c1c  ld          $gp, -0x63E4($v0)
    ctx->pc = 0x5dc5c0u;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 2), 4294941724)));
    // 0x5dc5c4: 0xfc7cbc3c  sd          $gp, -0x43C4($v1)
    ctx->pc = 0x5dc5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294949948), GPR_U64(ctx, 28));
    // 0x5dc5c8: 0xc2428202  ll          $v0, -0x7DFE($s2)
    ctx->pc = 0x5dc5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 4294935042); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc5cc: 0xe262a222  sc          $v0, -0x5DDE($s3)
    ctx->pc = 0x5dc5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4294943266); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 2)); SET_GPR_S32(ctx, 2, 1); } else { SET_GPR_S32(ctx, 2, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc5d0: 0xd2529212  lld         $s2, -0x6DEE($s2)
    ctx->pc = 0x5dc5d0u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC5D0 raw=0xD2529212");
    // 0x5dc5d4: 0xf272b232  scd         $s2, -0x4DCE($s3)
    ctx->pc = 0x5dc5d4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC5D4 raw=0xF272B232");
    // 0x5dc5d8: 0xca4a8a0a  lwc2        $10, -0x75F6($s2)
    ctx->pc = 0x5dc5d8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC5D8 raw=0xCA4A8A0A");
    // 0x5dc5dc: 0xea6aaa2a  swc2        $10, -0x55D6($s3)
    ctx->pc = 0x5dc5dcu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC5DC raw=0xEA6AAA2A");
    // 0x5dc5e0: 0xda5a9a1a  lqc2        $vf26, -0x65E6($s2)
    ctx->pc = 0x5dc5e0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 4294941210)));
    // 0x5dc5e4: 0xfa7aba3a  sqc2        $vf26, -0x45C6($s3)
    ctx->pc = 0x5dc5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4294949434), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x5dc5e8: 0xc6468606  lwc1        $f6, -0x79FA($s2)
    ctx->pc = 0x5dc5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294936070)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x5dc5ec: 0xe666a626  swc1        $f6, -0x59DA($s3)
    ctx->pc = 0x5dc5ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294944294), bits); }
    // 0x5dc5f0: 0xd6569616  ldc1        $f22, -0x69EA($s2)
    ctx->pc = 0x5dc5f0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC5F0 raw=0xD6569616");
    // 0x5dc5f4: 0xf676b636  sdc1        $f22, -0x49CA($s3)
    ctx->pc = 0x5dc5f4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC5F4 raw=0xF676B636");
    // 0x5dc5f8: 0xce4e8e0e  pref        0x0E, -0x71F2($s2)
    ctx->pc = 0x5dc5f8u;
    // PREF instruction (ignored)
    // 0x5dc5fc: 0xee6eae2e  .word       0xEE6EAE2E                   # INVALID     $s3, $t6, -0x51D2 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc5fcu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC5FC raw=0xEE6EAE2E");
    // 0x5dc600: 0xde5e9e1e  ld          $fp, -0x61E2($s2)
    ctx->pc = 0x5dc600u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 18), 4294942238)));
    // 0x5dc604: 0xfe7ebe3e  sd          $fp, -0x41C2($s3)
    ctx->pc = 0x5dc604u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294950462), GPR_U64(ctx, 30));
    // 0x5dc608: 0xc1418101  ll          $at, -0x7EFF($t2)
    ctx->pc = 0x5dc608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294934785); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc60c: 0xe161a121  sc          $at, -0x5EDF($t3)
    ctx->pc = 0x5dc60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294943009); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 1)); SET_GPR_S32(ctx, 1, 1); } else { SET_GPR_S32(ctx, 1, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc610: 0xd1519111  lld         $s1, -0x6EEF($t2)
    ctx->pc = 0x5dc610u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC610 raw=0xD1519111");
label_5dc614:
    // 0x5dc614: 0xf171b131  scd         $s1, -0x4ECF($t3)
    ctx->pc = 0x5dc614u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC614 raw=0xF171B131");
    // 0x5dc618: 0xc9498909  lwc2        $9, -0x76F7($t2)
    ctx->pc = 0x5dc618u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC618 raw=0xC9498909");
    // 0x5dc61c: 0xe969a929  swc2        $9, -0x56D7($t3)
    ctx->pc = 0x5dc61cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC61C raw=0xE969A929");
    // 0x5dc620: 0xd9599919  lqc2        $vf25, -0x66E7($t2)
    ctx->pc = 0x5dc620u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 4294940953)));
    // 0x5dc624: 0xf979b939  sqc2        $vf25, -0x46C7($t3)
    ctx->pc = 0x5dc624u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 4294949177), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x5dc628: 0xc5458505  lwc1        $f5, -0x7AFB($t2)
    ctx->pc = 0x5dc628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4294935813)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_5dc62c:
    // 0x5dc62c: 0xe565a525  swc1        $f5, -0x5ADB($t3)
    ctx->pc = 0x5dc62cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294944037), bits); }
    // 0x5dc630: 0xd5559515  ldc1        $f21, -0x6AEB($t2)
    ctx->pc = 0x5dc630u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC630 raw=0xD5559515");
    // 0x5dc634: 0xf575b535  sdc1        $f21, -0x4ACB($t3)
    ctx->pc = 0x5dc634u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC634 raw=0xF575B535");
    // 0x5dc638: 0xcd4d8d0d  pref        0x0D, -0x72F3($t2)
    ctx->pc = 0x5dc638u;
    // PREF instruction (ignored)
    // 0x5dc63c: 0xed6dad2d  .word       0xED6DAD2D                   # INVALID     $t3, $t5, -0x52D3 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc63cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC63C raw=0xED6DAD2D");
    // 0x5dc640: 0xdd5d9d1d  ld          $sp, -0x62E3($t2)
    ctx->pc = 0x5dc640u;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 10), 4294941981)));
    // 0x5dc644: 0xfd7dbd3d  sd          $sp, -0x42C3($t3)
    ctx->pc = 0x5dc644u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 4294950205), GPR_U64(ctx, 29));
    // 0x5dc648: 0xc3438303  ll          $v1, -0x7CFD($k0)
    ctx->pc = 0x5dc648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 4294935299); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc64c: 0xe363a323  sc          $v1, -0x5CDD($k1)
    ctx->pc = 0x5dc64cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 4294943523); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 3)); SET_GPR_S32(ctx, 3, 1); } else { SET_GPR_S32(ctx, 3, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc650: 0xd3539313  lld         $s3, -0x6CED($k0)
    ctx->pc = 0x5dc650u;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC650 raw=0xD3539313");
    // 0x5dc654: 0xf373b333  scd         $s3, -0x4CCD($k1)
    ctx->pc = 0x5dc654u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC654 raw=0xF373B333");
    // 0x5dc658: 0xcb4b8b0b  lwc2        $11, -0x74F5($k0)
    ctx->pc = 0x5dc658u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC658 raw=0xCB4B8B0B");
    // 0x5dc65c: 0xeb6bab2b  swc2        $11, -0x54D5($k1)
    ctx->pc = 0x5dc65cu;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC65C raw=0xEB6BAB2B");
    // 0x5dc660: 0xdb5b9b1b  lqc2        $vf27, -0x64E5($k0)
    ctx->pc = 0x5dc660u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 26), 4294941467)));
    // 0x5dc664: 0xfb7bbb3b  sqc2        $vf27, -0x44C5($k1)
    ctx->pc = 0x5dc664u;
    WRITE128(ADD32(GPR_U32(ctx, 27), 4294949691), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x5dc668: 0xc7478707  lwc1        $f7, -0x78F9($k0)
    ctx->pc = 0x5dc668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 26), 4294936327)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x5dc66c: 0xe767a727  swc1        $f7, -0x58D9($k1)
    ctx->pc = 0x5dc66cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 27), 4294944551), bits); }
    // 0x5dc670: 0xd7579717  ldc1        $f23, -0x68E9($k0)
    ctx->pc = 0x5dc670u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC670 raw=0xD7579717");
    // 0x5dc674: 0xf777b737  sdc1        $f23, -0x48C9($k1)
    ctx->pc = 0x5dc674u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC674 raw=0xF777B737");
    // 0x5dc678: 0xcf4f8f0f  pref        0x0F, -0x70F1($k0)
    ctx->pc = 0x5dc678u;
    // PREF instruction (ignored)
label_5dc67c:
    // 0x5dc67c: 0xef6faf2f  .word       0xEF6FAF2F                   # INVALID     $k1, $t7, -0x50D1 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc67cu;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC67C raw=0xEF6FAF2F");
    // 0x5dc680: 0xdf5f9f1f  ld          $ra, -0x60E1($k0)
    ctx->pc = 0x5dc680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 26), 4294942495)));
    // 0x5dc684: 0xff7fbf3f  sd          $ra, -0x40C1($k1)
    ctx->pc = 0x5dc684u;
    WRITE64(ADD32(GPR_U32(ctx, 27), 4294950719), GPR_U64(ctx, 31));
    // 0x5dc688: 0xc0804000  ll          $zero, 0x4000($a0)
    ctx->pc = 0x5dc688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16384); SET_GPR_S32(ctx, 0, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc68c: 0xd0905010  lld         $s0, 0x5010($a0)
    ctx->pc = 0x5dc68cu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC68C raw=0xD0905010");
    // 0x5dc690: 0xe0a06020  sc          $zero, 0x6020($a1)
    ctx->pc = 0x5dc690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24608); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 0)); SET_GPR_S32(ctx, 0, 1); } else { SET_GPR_S32(ctx, 0, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc694: 0xf0b07030  scd         $s0, 0x7030($a1)
    ctx->pc = 0x5dc694u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC694 raw=0xF0B07030");
    // 0x5dc698: 0xc4844404  lwc1        $f4, 0x4404($a0)
    ctx->pc = 0x5dc698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 17412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x5dc69c: 0xd4945414  ldc1        $f20, 0x5414($a0)
    ctx->pc = 0x5dc69cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC69C raw=0xD4945414");
    // 0x5dc6a0: 0xe4a46424  swc1        $f4, 0x6424($a1)
    ctx->pc = 0x5dc6a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 25636), bits); }
    // 0x5dc6a4: 0xf4b47434  sdc1        $f20, 0x7434($a1)
    ctx->pc = 0x5dc6a4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC6A4 raw=0xF4B47434");
    // 0x5dc6a8: 0xc8884808  lwc2        $8, 0x4808($a0)
    ctx->pc = 0x5dc6a8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC6A8 raw=0xC8884808");
    // 0x5dc6ac: 0xd8985818  lqc2        $vf24, 0x5818($a0)
    ctx->pc = 0x5dc6acu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 22552)));
    // 0x5dc6b0: 0xe8a86828  swc2        $8, 0x6828($a1)
    ctx->pc = 0x5dc6b0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC6B0 raw=0xE8A86828");
    // 0x5dc6b4: 0xf8b87838  sqc2        $vf24, 0x7838($a1)
    ctx->pc = 0x5dc6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 30776), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x5dc6b8: 0xcc8c4c0c  pref        0x0C, 0x4C0C($a0)
    ctx->pc = 0x5dc6b8u;
    // PREF instruction (ignored)
    // 0x5dc6bc: 0xdc9c5c1c  ld          $gp, 0x5C1C($a0)
    ctx->pc = 0x5dc6bcu;
    SET_GPR_U64(ctx, 28, READ64(ADD32(GPR_U32(ctx, 4), 23580)));
    // 0x5dc6c0: 0xecac6c2c  .word       0xECAC6C2C                   # INVALID     $a1, $t4, 0x6C2C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc6c0u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC6C0 raw=0xECAC6C2C");
    // 0x5dc6c4: 0xfcbc7c3c  sd          $gp, 0x7C3C($a1)
    ctx->pc = 0x5dc6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 31804), GPR_U64(ctx, 28));
label_5dc6c8:
    // 0x5dc6c8: 0xc1814101  ll          $at, 0x4101($t4)
    ctx->pc = 0x5dc6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 16641); SET_GPR_S32(ctx, 1, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc6cc: 0xd1915111  lld         $s1, 0x5111($t4)
    ctx->pc = 0x5dc6ccu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC6CC raw=0xD1915111");
    // 0x5dc6d0: 0xe1a16121  sc          $at, 0x6121($t5)
    ctx->pc = 0x5dc6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 24865); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 1)); SET_GPR_S32(ctx, 1, 1); } else { SET_GPR_S32(ctx, 1, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc6d4: 0xf1b17131  scd         $s1, 0x7131($t5)
    ctx->pc = 0x5dc6d4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC6D4 raw=0xF1B17131");
    // 0x5dc6d8: 0xc5854505  lwc1        $f5, 0x4505($t4)
    ctx->pc = 0x5dc6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 17669)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x5dc6dc: 0xd5955515  ldc1        $f21, 0x5515($t4)
    ctx->pc = 0x5dc6dcu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC6DC raw=0xD5955515");
    // 0x5dc6e0: 0xe5a56525  swc1        $f5, 0x6525($t5)
    ctx->pc = 0x5dc6e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 25893), bits); }
    // 0x5dc6e4: 0xf5b57535  sdc1        $f21, 0x7535($t5)
    ctx->pc = 0x5dc6e4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC6E4 raw=0xF5B57535");
    // 0x5dc6e8: 0xc9894909  lwc2        $9, 0x4909($t4)
    ctx->pc = 0x5dc6e8u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC6E8 raw=0xC9894909");
    // 0x5dc6ec: 0xd9995919  lqc2        $vf25, 0x5919($t4)
    ctx->pc = 0x5dc6ecu;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 22809)));
    // 0x5dc6f0: 0xe9a96929  swc2        $9, 0x6929($t5)
    ctx->pc = 0x5dc6f0u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC6F0 raw=0xE9A96929");
label_5dc6f4:
    // 0x5dc6f4: 0xf9b97939  sqc2        $vf25, 0x7939($t5)
    ctx->pc = 0x5dc6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 31033), _mm_castps_si128(ctx->vu0_vf[25]));
    // 0x5dc6f8: 0xcd8d4d0d  pref        0x0D, 0x4D0D($t4)
    ctx->pc = 0x5dc6f8u;
    // PREF instruction (ignored)
    // 0x5dc6fc: 0xdd9d5d1d  ld          $sp, 0x5D1D($t4)
    ctx->pc = 0x5dc6fcu;
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 12), 23837)));
    // 0x5dc700: 0xedad6d2d  .word       0xEDAD6D2D                   # INVALID     $t5, $t5, 0x6D2D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc700u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC700 raw=0xEDAD6D2D");
    // 0x5dc704: 0xfdbd7d3d  sd          $sp, 0x7D3D($t5)
    ctx->pc = 0x5dc704u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 32061), GPR_U64(ctx, 29));
    // 0x5dc708: 0xc2824202  ll          $v0, 0x4202($s4)
    ctx->pc = 0x5dc708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16898); SET_GPR_S32(ctx, 2, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc70c: 0xd2925212  lld         $s2, 0x5212($s4)
    ctx->pc = 0x5dc70cu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC70C raw=0xD2925212");
    // 0x5dc710: 0xe2a26222  sc          $v0, 0x6222($s5)
    ctx->pc = 0x5dc710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 25122); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 2)); SET_GPR_S32(ctx, 2, 1); } else { SET_GPR_S32(ctx, 2, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc714: 0xf2b27232  scd         $s2, 0x7232($s5)
    ctx->pc = 0x5dc714u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC714 raw=0xF2B27232");
    // 0x5dc718: 0xc6864606  lwc1        $f6, 0x4606($s4)
    ctx->pc = 0x5dc718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 17926)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x5dc71c: 0xd6965616  ldc1        $f22, 0x5616($s4)
    ctx->pc = 0x5dc71cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC71C raw=0xD6965616");
    // 0x5dc720: 0xe6a66626  swc1        $f6, 0x6626($s5)
    ctx->pc = 0x5dc720u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 26150), bits); }
    // 0x5dc724: 0xf6b67636  sdc1        $f22, 0x7636($s5)
    ctx->pc = 0x5dc724u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC724 raw=0xF6B67636");
    // 0x5dc728: 0xca8a4a0a  lwc2        $10, 0x4A0A($s4)
    ctx->pc = 0x5dc728u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC728 raw=0xCA8A4A0A");
    // 0x5dc72c: 0xda9a5a1a  lqc2        $vf26, 0x5A1A($s4)
    ctx->pc = 0x5dc72cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 23066)));
    // 0x5dc730: 0xeaaa6a2a  swc2        $10, 0x6A2A($s5)
    ctx->pc = 0x5dc730u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC730 raw=0xEAAA6A2A");
    // 0x5dc734: 0xfaba7a3a  sqc2        $vf26, 0x7A3A($s5)
    ctx->pc = 0x5dc734u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 31290), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x5dc738: 0xce8e4e0e  pref        0x0E, 0x4E0E($s4)
    ctx->pc = 0x5dc738u;
    // PREF instruction (ignored)
    // 0x5dc73c: 0xde9e5e1e  ld          $fp, 0x5E1E($s4)
    ctx->pc = 0x5dc73cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 20), 24094)));
    // 0x5dc740: 0xeeae6e2e  .word       0xEEAE6E2E                   # INVALID     $s5, $t6, 0x6E2E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc740u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC740 raw=0xEEAE6E2E");
    // 0x5dc744: 0xfebe7e3e  sd          $fp, 0x7E3E($s5)
    ctx->pc = 0x5dc744u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32318), GPR_U64(ctx, 30));
    // 0x5dc748: 0xc3834303  ll          $v1, 0x4303($gp)
    ctx->pc = 0x5dc748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 28), 17155); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x5dc74c: 0xd3935313  lld         $s3, 0x5313($gp)
    ctx->pc = 0x5dc74cu;
    throw std::runtime_error("Unhandled opcode: 0x34 at 0x5DC74C raw=0xD3935313");
    // 0x5dc750: 0xe3a36323  sc          $v1, 0x6323($sp)
    ctx->pc = 0x5dc750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 25379); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 3)); SET_GPR_S32(ctx, 3, 1); } else { SET_GPR_S32(ctx, 3, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x5dc754: 0xf3b37333  scd         $s3, 0x7333($sp)
    ctx->pc = 0x5dc754u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC754 raw=0xF3B37333");
    // 0x5dc758: 0xc7874707  lwc1        $f7, 0x4707($gp)
    ctx->pc = 0x5dc758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 18183)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x5dc75c: 0xd7975717  ldc1        $f23, 0x5717($gp)
    ctx->pc = 0x5dc75cu;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x5DC75C raw=0xD7975717");
    // 0x5dc760: 0xe7a76727  swc1        $f7, 0x6727($sp)
    ctx->pc = 0x5dc760u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 26407), bits); }
    // 0x5dc764: 0xf7b77737  sdc1        $f23, 0x7737($sp)
    ctx->pc = 0x5dc764u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC764 raw=0xF7B77737");
    // 0x5dc768: 0xcb8b4b0b  lwc2        $11, 0x4B0B($gp)
    ctx->pc = 0x5dc768u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x5DC768 raw=0xCB8B4B0B");
    // 0x5dc76c: 0xdb9b5b1b  lqc2        $vf27, 0x5B1B($gp)
    ctx->pc = 0x5dc76cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 28), 23323)));
    // 0x5dc770: 0xebab6b2b  swc2        $11, 0x6B2B($sp)
    ctx->pc = 0x5dc770u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x5DC770 raw=0xEBAB6B2B");
    // 0x5dc774: 0xfbbb7b3b  sqc2        $vf27, 0x7B3B($sp)
    ctx->pc = 0x5dc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 31547), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x5dc778: 0xcf8f4f0f  pref        0x0F, 0x4F0F($gp)
    ctx->pc = 0x5dc778u;
    // PREF instruction (ignored)
    // 0x5dc77c: 0xdf9f5f1f  ld          $ra, 0x5F1F($gp)
    ctx->pc = 0x5dc77cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 28), 24351)));
    // 0x5dc780: 0xefaf6f2f  .word       0xEFAF6F2F                   # INVALID     $sp, $t7, 0x6F2F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc780u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x5DC780 raw=0xEFAF6F2F");
    // 0x5dc784: 0xffbf7f3f  sd          $ra, 0x7F3F($sp)
    ctx->pc = 0x5dc784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32575), GPR_U64(ctx, 31));
    // 0x5dc788: 0x30201000  andi        $zero, $at, 0x1000
    ctx->pc = 0x5dc788u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)4096);
    // 0x5dc78c: 0x70605040  .word       0x70605040                   # madd        $t2, $v1, $zero # 00000040 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dc78cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x5dc790: 0xb0a09080  sdl         $zero, -0x6F80($a1)
    ctx->pc = 0x5dc790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294938752); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc794: 0xf0e0d0c0  scd         $zero, -0x2F40($a3)
    ctx->pc = 0x5dc794u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC794 raw=0xF0E0D0C0");
    // 0x5dc798: 0x31211101  andi        $at, $t1, 0x1101
    ctx->pc = 0x5dc798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4353);
    // 0x5dc79c: 0x71615141  .word       0x71615141                   # maddu       $t2, $t3, $at # 00000140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dc79cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 11) * (uint64_t)GPR_U32(ctx, 1); uint64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x5dc7a0: 0xb1a19181  sdl         $at, -0x6E7F($t5)
    ctx->pc = 0x5dc7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294939009); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 1); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7a4: 0xf1e1d1c1  scd         $at, -0x2E3F($t7)
    ctx->pc = 0x5dc7a4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC7A4 raw=0xF1E1D1C1");
    // 0x5dc7a8: 0x32221202  andi        $v0, $s1, 0x1202
    ctx->pc = 0x5dc7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4610);
    // 0x5dc7ac: 0x72625242  .word       0x72625242                   # INVALID     $s3, $v0, 0x5242 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dc7acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x5dc7b0: 0xb2a29282  sdl         $v0, -0x6D7E($s5)
    ctx->pc = 0x5dc7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294939266); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7b4: 0xf2e2d2c2  scd         $v0, -0x2D3E($s7)
    ctx->pc = 0x5dc7b4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC7B4 raw=0xF2E2D2C2");
    // 0x5dc7b8: 0x33231303  andi        $v1, $t9, 0x1303
    ctx->pc = 0x5dc7b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)4867);
    // 0x5dc7bc: 0x73635343  .word       0x73635343                   # INVALID     $k1, $v1, 0x5343 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dc7bcu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); uint64_t prod = (uint64_t)GPR_U32(ctx, 27) * (uint64_t)GPR_U32(ctx, 3); uint64_t result = acc - prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x5dc7c0: 0xb3a39383  sdl         $v1, -0x6C7D($sp)
    ctx->pc = 0x5dc7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294939523); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7c4: 0xf3e3d3c3  scd         $v1, -0x2C3D($ra)
    ctx->pc = 0x5dc7c4u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x5DC7C4 raw=0xF3E3D3C3");
    // 0x5dc7c8: 0x34241404  ori         $a0, $at, 0x1404
    ctx->pc = 0x5dc7c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5124);
    // 0x5dc7cc: 0x74645444  .word       0x74645444                   # INVALID     $v1, $a0, 0x5444 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc7ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DC7CC raw=0x74645444");
    // 0x5dc7d0: 0xb4a49484  sdr         $a0, -0x6B7C($a1)
    ctx->pc = 0x5dc7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294939780); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7d4: 0xf4e4d4c4  sdc1        $f4, -0x2B3C($a3)
    ctx->pc = 0x5dc7d4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC7D4 raw=0xF4E4D4C4");
    // 0x5dc7d8: 0x35251505  ori         $a1, $t1, 0x1505
    ctx->pc = 0x5dc7d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)5381);
    // 0x5dc7dc: 0x75655545  .word       0x75655545                   # INVALID     $t3, $a1, 0x5545 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc7dcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DC7DC raw=0x75655545");
    // 0x5dc7e0: 0xb5a59585  sdr         $a1, -0x6A7B($t5)
    ctx->pc = 0x5dc7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294940037); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7e4: 0xf5e5d5c5  sdc1        $f5, -0x2A3B($t7)
    ctx->pc = 0x5dc7e4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC7E4 raw=0xF5E5D5C5");
    // 0x5dc7e8: 0x36261606  ori         $a2, $s1, 0x1606
    ctx->pc = 0x5dc7e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)5638);
    // 0x5dc7ec: 0x76665646  .word       0x76665646                   # INVALID     $s3, $a2, 0x5646 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc7ecu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DC7EC raw=0x76665646");
    // 0x5dc7f0: 0xb6a69686  sdr         $a2, -0x697A($s5)
    ctx->pc = 0x5dc7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294940294); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc7f4: 0xf6e6d6c6  sdc1        $f6, -0x293A($s7)
    ctx->pc = 0x5dc7f4u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC7F4 raw=0xF6E6D6C6");
    // 0x5dc7f8: 0x37271707  ori         $a3, $t9, 0x1707
    ctx->pc = 0x5dc7f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)5895);
    // 0x5dc7fc: 0x77675747  .word       0x77675747                   # INVALID     $k1, $a3, 0x5747 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc7fcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DC7FC raw=0x77675747");
    // 0x5dc800: 0xb7a79787  sdr         $a3, -0x6879($sp)
    ctx->pc = 0x5dc800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294940551); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x5dc804: 0xf7e7d7c7  sdc1        $f7, -0x2839($ra)
    ctx->pc = 0x5dc804u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x5DC804 raw=0xF7E7D7C7");
    // 0x5dc808: 0x38281808  xori        $t0, $at, 0x1808
    ctx->pc = 0x5dc808u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)6152);
    // 0x5dc80c: 0x78685848  lq          $t0, 0x5848($v1)
    ctx->pc = 0x5dc80cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 22600)));
    // 0x5dc810: 0xb8a89888  swr         $t0, -0x6778($a1)
    ctx->pc = 0x5dc810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4294940808); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x5dc814: 0xf8e8d8c8  sqc2        $vf8, -0x2738($a3)
    ctx->pc = 0x5dc814u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294957256), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x5dc818: 0x39291909  xori        $t1, $t1, 0x1909
    ctx->pc = 0x5dc818u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)6409);
    // 0x5dc81c: 0x79695949  lq          $t1, 0x5949($t3)
    ctx->pc = 0x5dc81cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 11), 22857)));
    // 0x5dc820: 0xb9a99989  swr         $t1, -0x6677($t5)
    ctx->pc = 0x5dc820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294941065); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x5dc824: 0xf9e9d9c9  sqc2        $vf9, -0x2637($t7)
    ctx->pc = 0x5dc824u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 4294957513), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x5dc828: 0x3a2a1a0a  xori        $t2, $s1, 0x1A0A
    ctx->pc = 0x5dc828u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)6666);
    // 0x5dc82c: 0x7a6a5a4a  lq          $t2, 0x5A4A($s3)
    ctx->pc = 0x5dc82cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 19), 23114)));
    // 0x5dc830: 0xbaaa9a8a  swr         $t2, -0x6576($s5)
    ctx->pc = 0x5dc830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4294941322); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x5dc834: 0xfaeadaca  sqc2        $vf10, -0x2536($s7)
    ctx->pc = 0x5dc834u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 4294957770), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x5dc838: 0x3b2b1b0b  xori        $t3, $t9, 0x1B0B
    ctx->pc = 0x5dc838u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)6923);
    // 0x5dc83c: 0x7b6b5b4b  lq          $t3, 0x5B4B($k1)
    ctx->pc = 0x5dc83cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 27), 23371)));
    // 0x5dc840: 0xbbab9b8b  swr         $t3, -0x6475($sp)
    ctx->pc = 0x5dc840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4294941579); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x5dc844: 0xfbebdbcb  sqc2        $vf11, -0x2435($ra)
    ctx->pc = 0x5dc844u;
    WRITE128(ADD32(GPR_U32(ctx, 31), 4294958027), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x5dc848: 0x3c2c1c0c  .word       0x3C2C1C0C                   # lui         $t4, 0x1C0C # 00200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc848u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7180 << 16));
    // 0x5dc84c: 0x7c6c5c4c  sq          $t4, 0x5C4C($v1)
    ctx->pc = 0x5dc84cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 23628), GPR_VEC(ctx, 12));
    // 0x5dc850: 0xbcac9c8c  cache       0x0C, -0x6374($a1)
    ctx->pc = 0x5dc850u;
    // CACHE instruction (ignored)
    // 0x5dc854: 0xfcecdccc  sd          $t4, -0x2334($a3)
    ctx->pc = 0x5dc854u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 4294958284), GPR_U64(ctx, 12));
    // 0x5dc858: 0x3d2d1d0d  .word       0x3D2D1D0D                   # lui         $t5, 0x1D0D # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc858u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)7437 << 16));
    // 0x5dc85c: 0x7d6d5d4d  sq          $t5, 0x5D4D($t3)
    ctx->pc = 0x5dc85cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 23885), GPR_VEC(ctx, 13));
    // 0x5dc860: 0xbdad9d8d  cache       0x0D, -0x6273($t5)
    ctx->pc = 0x5dc860u;
    // CACHE instruction (ignored)
    // 0x5dc864: 0xfdedddcd  sd          $t5, -0x2233($t7)
    ctx->pc = 0x5dc864u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 4294958541), GPR_U64(ctx, 13));
    // 0x5dc868: 0x3e2e1e0e  .word       0x3E2E1E0E                   # lui         $t6, 0x1E0E # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc868u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)7694 << 16));
    // 0x5dc86c: 0x7e6e5e4e  sq          $t6, 0x5E4E($s3)
    ctx->pc = 0x5dc86cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 24142), GPR_VEC(ctx, 14));
    // 0x5dc870: 0xbeae9e8e  cache       0x0E, -0x6172($s5)
    ctx->pc = 0x5dc870u;
    // CACHE instruction (ignored)
    // 0x5dc874: 0xfeeedece  sd          $t6, -0x2132($s7)
    ctx->pc = 0x5dc874u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 4294958798), GPR_U64(ctx, 14));
    // 0x5dc878: 0x3f2f1f0f  .word       0x3F2F1F0F                   # lui         $t7, 0x1F0F # 03200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dc878u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)7951 << 16));
    // 0x5dc87c: 0x7f6f5f4f  sq          $t7, 0x5F4F($k1)
    ctx->pc = 0x5dc87cu;
    WRITE128(ADD32(GPR_U32(ctx, 27), 24399), GPR_VEC(ctx, 15));
    // 0x5dc880: 0xbfaf9f8f  cache       0x0F, -0x6071($sp)
    ctx->pc = 0x5dc880u;
    // CACHE instruction (ignored)
    // 0x5dc884: 0xffefdfcf  sd          $t7, -0x2031($ra)
    ctx->pc = 0x5dc884u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294959055), GPR_U64(ctx, 15));
    // 0x5dc888: 0x2010100  .word       0x02010100                   # sll         $zero, $at, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc888u;
    
    // 0x5dc88c: 0x3020201  .word       0x03020201                   # INVALID     $t8, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc88cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DC88C raw=0x03020201");
    // 0x5dc890: 0x3020201  .word       0x03020201                   # INVALID     $t8, $v0, 0x201 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dc890u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5DC890 raw=0x03020201");
    // 0x5dc894: 0x4030302  bgezl       $zero, . + 4 + (0x302 << 2)
    ctx->pc = 0x5DC894u;
    {
        const bool branch_taken_0x5dc894 = (GPR_S32(ctx, 0) >= 0);
        if (branch_taken_0x5dc894) {
            ctx->pc = 0x5DD4A0u;
            return;
        }
    }
    ctx->pc = 0x5DC89Cu;
}
