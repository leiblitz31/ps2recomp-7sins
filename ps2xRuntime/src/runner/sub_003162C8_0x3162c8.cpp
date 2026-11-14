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

// Function: sub_003162C8
// Address: 0x3162c8 - 0x3166a8
void sub_003162C8_0x3162c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003162C8_0x3162c8");
#endif

    switch (ctx->pc) {
        case 0x3162c8u: goto label_3162c8;
        case 0x3162ccu: goto label_3162cc;
        case 0x3162d0u: goto label_3162d0;
        case 0x3162d4u: goto label_3162d4;
        case 0x3162d8u: goto label_3162d8;
        case 0x3162dcu: goto label_3162dc;
        case 0x3162e0u: goto label_3162e0;
        case 0x3162e4u: goto label_3162e4;
        case 0x3162e8u: goto label_3162e8;
        case 0x3162ecu: goto label_3162ec;
        case 0x3162f0u: goto label_3162f0;
        case 0x3162f4u: goto label_3162f4;
        case 0x3162f8u: goto label_3162f8;
        case 0x3162fcu: goto label_3162fc;
        case 0x316300u: goto label_316300;
        case 0x316304u: goto label_316304;
        case 0x316308u: goto label_316308;
        case 0x31630cu: goto label_31630c;
        case 0x316310u: goto label_316310;
        case 0x316314u: goto label_316314;
        case 0x316318u: goto label_316318;
        case 0x31631cu: goto label_31631c;
        case 0x316320u: goto label_316320;
        case 0x316324u: goto label_316324;
        case 0x316328u: goto label_316328;
        case 0x31632cu: goto label_31632c;
        case 0x316330u: goto label_316330;
        case 0x316334u: goto label_316334;
        case 0x316338u: goto label_316338;
        case 0x31633cu: goto label_31633c;
        case 0x316340u: goto label_316340;
        case 0x316344u: goto label_316344;
        case 0x316348u: goto label_316348;
        case 0x31634cu: goto label_31634c;
        case 0x316350u: goto label_316350;
        case 0x316354u: goto label_316354;
        case 0x316358u: goto label_316358;
        case 0x31635cu: goto label_31635c;
        case 0x316360u: goto label_316360;
        case 0x316364u: goto label_316364;
        case 0x316368u: goto label_316368;
        case 0x31636cu: goto label_31636c;
        case 0x316370u: goto label_316370;
        case 0x316374u: goto label_316374;
        case 0x316378u: goto label_316378;
        case 0x31637cu: goto label_31637c;
        case 0x316380u: goto label_316380;
        case 0x316384u: goto label_316384;
        case 0x316388u: goto label_316388;
        case 0x31638cu: goto label_31638c;
        case 0x316390u: goto label_316390;
        case 0x316394u: goto label_316394;
        case 0x316398u: goto label_316398;
        case 0x31639cu: goto label_31639c;
        case 0x3163a0u: goto label_3163a0;
        case 0x3163a4u: goto label_3163a4;
        case 0x3163a8u: goto label_3163a8;
        case 0x3163acu: goto label_3163ac;
        case 0x3163b0u: goto label_3163b0;
        case 0x3163b4u: goto label_3163b4;
        case 0x3163b8u: goto label_3163b8;
        case 0x3163bcu: goto label_3163bc;
        case 0x3163c0u: goto label_3163c0;
        case 0x3163c4u: goto label_3163c4;
        case 0x3163c8u: goto label_3163c8;
        case 0x3163ccu: goto label_3163cc;
        case 0x3163d0u: goto label_3163d0;
        case 0x3163d4u: goto label_3163d4;
        case 0x3163d8u: goto label_3163d8;
        case 0x3163dcu: goto label_3163dc;
        case 0x3163e0u: goto label_3163e0;
        case 0x3163e4u: goto label_3163e4;
        case 0x3163e8u: goto label_3163e8;
        case 0x3163ecu: goto label_3163ec;
        case 0x3163f0u: goto label_3163f0;
        case 0x3163f4u: goto label_3163f4;
        case 0x3163f8u: goto label_3163f8;
        case 0x3163fcu: goto label_3163fc;
        case 0x316400u: goto label_316400;
        case 0x316404u: goto label_316404;
        case 0x316408u: goto label_316408;
        case 0x31640cu: goto label_31640c;
        case 0x316410u: goto label_316410;
        case 0x316414u: goto label_316414;
        case 0x316418u: goto label_316418;
        case 0x31641cu: goto label_31641c;
        case 0x316420u: goto label_316420;
        case 0x316424u: goto label_316424;
        case 0x316428u: goto label_316428;
        case 0x31642cu: goto label_31642c;
        case 0x316430u: goto label_316430;
        case 0x316434u: goto label_316434;
        case 0x316438u: goto label_316438;
        case 0x31643cu: goto label_31643c;
        case 0x316440u: goto label_316440;
        case 0x316444u: goto label_316444;
        case 0x316448u: goto label_316448;
        case 0x31644cu: goto label_31644c;
        case 0x316450u: goto label_316450;
        case 0x316454u: goto label_316454;
        case 0x316458u: goto label_316458;
        case 0x31645cu: goto label_31645c;
        case 0x316460u: goto label_316460;
        case 0x316464u: goto label_316464;
        case 0x316468u: goto label_316468;
        case 0x31646cu: goto label_31646c;
        case 0x316470u: goto label_316470;
        case 0x316474u: goto label_316474;
        case 0x316478u: goto label_316478;
        case 0x31647cu: goto label_31647c;
        case 0x316480u: goto label_316480;
        case 0x316484u: goto label_316484;
        case 0x316488u: goto label_316488;
        case 0x31648cu: goto label_31648c;
        case 0x316490u: goto label_316490;
        case 0x316494u: goto label_316494;
        case 0x316498u: goto label_316498;
        case 0x31649cu: goto label_31649c;
        case 0x3164a0u: goto label_3164a0;
        case 0x3164a4u: goto label_3164a4;
        case 0x3164a8u: goto label_3164a8;
        case 0x3164acu: goto label_3164ac;
        case 0x3164b0u: goto label_3164b0;
        case 0x3164b4u: goto label_3164b4;
        case 0x3164b8u: goto label_3164b8;
        case 0x3164bcu: goto label_3164bc;
        case 0x3164c0u: goto label_3164c0;
        case 0x3164c4u: goto label_3164c4;
        case 0x3164c8u: goto label_3164c8;
        case 0x3164ccu: goto label_3164cc;
        case 0x3164d0u: goto label_3164d0;
        case 0x3164d4u: goto label_3164d4;
        case 0x3164d8u: goto label_3164d8;
        case 0x3164dcu: goto label_3164dc;
        case 0x3164e0u: goto label_3164e0;
        case 0x3164e4u: goto label_3164e4;
        case 0x3164e8u: goto label_3164e8;
        case 0x3164ecu: goto label_3164ec;
        case 0x3164f0u: goto label_3164f0;
        case 0x3164f4u: goto label_3164f4;
        case 0x3164f8u: goto label_3164f8;
        case 0x3164fcu: goto label_3164fc;
        case 0x316500u: goto label_316500;
        case 0x316504u: goto label_316504;
        case 0x316508u: goto label_316508;
        case 0x31650cu: goto label_31650c;
        case 0x316510u: goto label_316510;
        case 0x316514u: goto label_316514;
        case 0x316518u: goto label_316518;
        case 0x31651cu: goto label_31651c;
        case 0x316520u: goto label_316520;
        case 0x316524u: goto label_316524;
        case 0x316528u: goto label_316528;
        case 0x31652cu: goto label_31652c;
        case 0x316530u: goto label_316530;
        case 0x316534u: goto label_316534;
        case 0x316538u: goto label_316538;
        case 0x31653cu: goto label_31653c;
        case 0x316540u: goto label_316540;
        case 0x316544u: goto label_316544;
        case 0x316548u: goto label_316548;
        case 0x31654cu: goto label_31654c;
        case 0x316550u: goto label_316550;
        case 0x316554u: goto label_316554;
        case 0x316558u: goto label_316558;
        case 0x31655cu: goto label_31655c;
        case 0x316560u: goto label_316560;
        case 0x316564u: goto label_316564;
        case 0x316568u: goto label_316568;
        case 0x31656cu: goto label_31656c;
        case 0x316570u: goto label_316570;
        case 0x316574u: goto label_316574;
        case 0x316578u: goto label_316578;
        case 0x31657cu: goto label_31657c;
        case 0x316580u: goto label_316580;
        case 0x316584u: goto label_316584;
        case 0x316588u: goto label_316588;
        case 0x31658cu: goto label_31658c;
        case 0x316590u: goto label_316590;
        case 0x316594u: goto label_316594;
        case 0x316598u: goto label_316598;
        case 0x31659cu: goto label_31659c;
        case 0x3165a0u: goto label_3165a0;
        case 0x3165a4u: goto label_3165a4;
        case 0x3165a8u: goto label_3165a8;
        case 0x3165acu: goto label_3165ac;
        case 0x3165b0u: goto label_3165b0;
        case 0x3165b4u: goto label_3165b4;
        case 0x3165b8u: goto label_3165b8;
        case 0x3165bcu: goto label_3165bc;
        case 0x3165c0u: goto label_3165c0;
        case 0x3165c4u: goto label_3165c4;
        case 0x3165c8u: goto label_3165c8;
        case 0x3165ccu: goto label_3165cc;
        case 0x3165d0u: goto label_3165d0;
        case 0x3165d4u: goto label_3165d4;
        case 0x3165d8u: goto label_3165d8;
        case 0x3165dcu: goto label_3165dc;
        case 0x3165e0u: goto label_3165e0;
        case 0x3165e4u: goto label_3165e4;
        case 0x3165e8u: goto label_3165e8;
        case 0x3165ecu: goto label_3165ec;
        case 0x3165f0u: goto label_3165f0;
        case 0x3165f4u: goto label_3165f4;
        case 0x3165f8u: goto label_3165f8;
        case 0x3165fcu: goto label_3165fc;
        case 0x316600u: goto label_316600;
        case 0x316604u: goto label_316604;
        case 0x316608u: goto label_316608;
        case 0x31660cu: goto label_31660c;
        case 0x316610u: goto label_316610;
        case 0x316614u: goto label_316614;
        case 0x316618u: goto label_316618;
        case 0x31661cu: goto label_31661c;
        case 0x316620u: goto label_316620;
        case 0x316624u: goto label_316624;
        case 0x316628u: goto label_316628;
        case 0x31662cu: goto label_31662c;
        case 0x316630u: goto label_316630;
        case 0x316634u: goto label_316634;
        case 0x316638u: goto label_316638;
        case 0x31663cu: goto label_31663c;
        case 0x316640u: goto label_316640;
        case 0x316644u: goto label_316644;
        case 0x316648u: goto label_316648;
        case 0x31664cu: goto label_31664c;
        case 0x316650u: goto label_316650;
        case 0x316654u: goto label_316654;
        case 0x316658u: goto label_316658;
        case 0x31665cu: goto label_31665c;
        case 0x316660u: goto label_316660;
        case 0x316664u: goto label_316664;
        case 0x316668u: goto label_316668;
        case 0x31666cu: goto label_31666c;
        case 0x316670u: goto label_316670;
        case 0x316674u: goto label_316674;
        case 0x316678u: goto label_316678;
        case 0x31667cu: goto label_31667c;
        case 0x316680u: goto label_316680;
        case 0x316684u: goto label_316684;
        case 0x316688u: goto label_316688;
        case 0x31668cu: goto label_31668c;
        case 0x316690u: goto label_316690;
        case 0x316694u: goto label_316694;
        case 0x316698u: goto label_316698;
        case 0x31669cu: goto label_31669c;
        case 0x3166a0u: goto label_3166a0;
        case 0x3166a4u: goto label_3166a4;
        default: break;
    }

    ctx->pc = 0x3162c8u;

label_3162c8:
    // 0x3162c8: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x3162c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_3162cc:
    // 0x3162cc: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x3162ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
label_3162d0:
    // 0x3162d0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3162d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3162d4:
    // 0x3162d4: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x3162d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
label_3162d8:
    // 0x3162d8: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x3162d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
label_3162dc:
    // 0x3162dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3162dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3162e0:
    // 0x3162e0: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x3162e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
label_3162e4:
    // 0x3162e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3162e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3162e8:
    // 0x3162e8: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x3162e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
label_3162ec:
    // 0x3162ec: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3162ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3162f0:
    // 0x3162f0: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x3162f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
label_3162f4:
    // 0x3162f4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x3162f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3162f8:
    // 0x3162f8: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x3162f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
label_3162fc:
    // 0x3162fc: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x3162fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
label_316300:
    // 0x316300: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x316300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
label_316304:
    // 0x316304: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x316304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
label_316308:
    // 0x316308: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x316308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31630c:
    // 0x31630c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x31630cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316310:
    // 0x316310: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x316310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_316314:
    // 0x316314: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x316314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316318:
    // 0x316318: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x316318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31631c:
    // 0x31631c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31631cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_316320:
    // 0x316320: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x316320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_316324:
    // 0x316324: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x316324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_316328:
    // 0x316328: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x316328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_31632c:
    // 0x31632c: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x31632cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_316330:
    // 0x316330: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x316330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_316334:
    // 0x316334: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x316334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_316338:
    // 0x316338: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x316338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31633c:
    // 0x31633c: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x31633cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_316340:
    // 0x316340: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x316340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_316344:
    // 0x316344: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x316344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_316348:
    // 0x316348: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x316348u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31634c:
    // 0x31634c: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x31634cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316350:
    // 0x316350: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x316350u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_316354:
    // 0x316354: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x316354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316358:
    // 0x316358: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x316358u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_31635c:
    // 0x31635c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x31635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316360:
    // 0x316360: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x316360u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_316364:
    // 0x316364: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x316364u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_316368:
    // 0x316368: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x316368u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_31636c:
    // 0x31636c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x31636cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_316370:
    // 0x316370: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x316370u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_316374:
    // 0x316374: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x316374u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_316378:
    // 0x316378: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x316378u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31637c:
    // 0x31637c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x31637cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_316380:
    // 0x316380: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x316380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_316384:
    // 0x316384: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x316384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_316388:
    // 0x316388: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x316388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_31638c:
    // 0x31638c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_316390:
    if (ctx->pc == 0x316390u) {
        ctx->pc = 0x316390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31638Cu;
        // 0x316390: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316394u;
        goto label_316394;
    }
    ctx->pc = 0x31638Cu;
    {
        const bool branch_taken_0x31638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x316390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31638Cu;
        // 0x316390: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31638c) {
            ctx->pc = 0x316398u;
            goto label_316398;
        }
    }
    ctx->pc = 0x316394u;
label_316394:
    // 0x316394: 0x8e970000  lw          $s7, 0x0($s4)
    ctx->pc = 0x316394u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_316398:
    // 0x316398: 0x8f84a5a8  lw          $a0, -0x5A58($gp)
    ctx->pc = 0x316398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944168)));
label_31639c:
    // 0x31639c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31639cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3163a0:
    // 0x3163a0: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3163a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3163a4:
    // 0x3163a4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3163a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3163a8:
    // 0x3163a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3163a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3163ac:
    // 0x3163ac: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3163acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3163b0:
    // 0x3163b0: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x3163b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_3163b4:
    // 0x3163b4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3163b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3163b8:
    // 0x3163b8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3163b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3163bc:
    // 0x3163bc: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x3163bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3163c0:
    // 0x3163c0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x3163c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3163c4:
    // 0x3163c4: 0x6ba40017  ldl         $a0, 0x17($sp)
    ctx->pc = 0x3163c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3163c8:
    // 0x3163c8: 0x6fa40010  ldr         $a0, 0x10($sp)
    ctx->pc = 0x3163c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3163cc:
    // 0x3163cc: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3163ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163d0:
    // 0x3163d0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3163d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163d4:
    // 0x3163d4: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x3163d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163d8:
    // 0x3163d8: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x3163d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163dc:
    // 0x3163dc: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x3163dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163e0:
    // 0x3163e0: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x3163e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3163e4:
    // 0x3163e4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3163e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3163e8:
    // 0x3163e8: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x3163e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_3163ec:
    // 0x3163ec: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x3163ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_3163f0:
    // 0x3163f0: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x3163f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3163f4:
    // 0x3163f4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3163f4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3163f8:
    // 0x3163f8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x3163f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3163fc:
    // 0x3163fc: 0x1080009e  beqz        $a0, . + 4 + (0x9E << 2)
label_316400:
    if (ctx->pc == 0x316400u) {
        ctx->pc = 0x316400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163FCu;
        // 0x316400: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316404u;
        goto label_316404;
    }
    ctx->pc = 0x3163FCu;
    {
        const bool branch_taken_0x3163fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x316400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3163FCu;
        // 0x316400: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3163fc) {
            ctx->pc = 0x316678u;
            goto label_316678;
        }
    }
    ctx->pc = 0x316404u;
label_316404:
    // 0x316404: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x316404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_316408:
    // 0x316408: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x316408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_31640c:
    // 0x31640c: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x31640cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_316410:
    // 0x316410: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x316410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_316414:
    // 0x316414: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_316418:
    if (ctx->pc == 0x316418u) {
        ctx->pc = 0x316418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316414u;
        // 0x316418: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31641Cu;
        goto label_31641c;
    }
    ctx->pc = 0x316414u;
    {
        const bool branch_taken_0x316414 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x316418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316414u;
        // 0x316418: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316414) {
            ctx->pc = 0x31649Cu;
            goto label_31649c;
        }
    }
    ctx->pc = 0x31641Cu;
label_31641c:
    // 0x31641c: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x31641cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_316420:
    // 0x316420: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x316420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_316424:
    // 0x316424: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x316424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_316428:
    // 0x316428: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x316428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_31642c:
    // 0x31642c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31642cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_316430:
    // 0x316430: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x316430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_316434:
    // 0x316434: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x316434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316438:
    // 0x316438: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x316438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31643c:
    // 0x31643c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31643cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316440:
    // 0x316440: 0x0  nop
    ctx->pc = 0x316440u;
    // NOP
label_316444:
    // 0x316444: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_316448:
    if (ctx->pc == 0x316448u) {
        ctx->pc = 0x316448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316444u;
        // 0x316448: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31644Cu;
        goto label_31644c;
    }
    ctx->pc = 0x316444u;
    {
        const bool branch_taken_0x316444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316444u;
        // 0x316448: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316444) {
            ctx->pc = 0x316458u;
            goto label_316458;
        }
    }
    ctx->pc = 0x31644Cu;
label_31644c:
    // 0x31644c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x31644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_316450:
    // 0x316450: 0x1000000c  b           . + 4 + (0xC << 2)
label_316454:
    if (ctx->pc == 0x316454u) {
        ctx->pc = 0x316454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316450u;
        // 0x316454: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316458u;
        goto label_316458;
    }
    ctx->pc = 0x316450u;
    {
        const bool branch_taken_0x316450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316450u;
        // 0x316454: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316450) {
            ctx->pc = 0x316484u;
            goto label_316484;
        }
    }
    ctx->pc = 0x316458u;
label_316458:
    // 0x316458: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x316458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31645c:
    // 0x31645c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31645cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316460:
    // 0x316460: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x316460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_316464:
    // 0x316464: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x316464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316468:
    // 0x316468: 0x0  nop
    ctx->pc = 0x316468u;
    // NOP
label_31646c:
    // 0x31646c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_316470:
    if (ctx->pc == 0x316470u) {
        ctx->pc = 0x316470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31646Cu;
        // 0x316470: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316474u;
        goto label_316474;
    }
    ctx->pc = 0x31646Cu;
    {
        const bool branch_taken_0x31646c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31646Cu;
        // 0x316470: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31646c) {
            ctx->pc = 0x316484u;
            goto label_316484;
        }
    }
    ctx->pc = 0x316474u;
label_316474:
    // 0x316474: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x316474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_316478:
    // 0x316478: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x316478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_31647c:
    // 0x31647c: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x31647cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_316480:
    // 0x316480: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x316480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_316484:
    // 0x316484: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x316484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_316488:
    // 0x316488: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x316488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31648c:
    // 0x31648c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316490:
    // 0x316490: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_316494:
    if (ctx->pc == 0x316494u) {
        ctx->pc = 0x316494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316490u;
        // 0x316494: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316498u;
        goto label_316498;
    }
    ctx->pc = 0x316490u;
    {
        const bool branch_taken_0x316490 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x316494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316490u;
        // 0x316494: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316490) {
            ctx->pc = 0x316428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316428;
        }
    }
    ctx->pc = 0x316498u;
label_316498:
    // 0x316498: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x316498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31649c:
    // 0x31649c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x31649cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3164a0:
    // 0x3164a0: 0x26420048  addiu       $v0, $s2, 0x48
    ctx->pc = 0x3164a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
label_3164a4:
    // 0x3164a4: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x3164a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3164a8:
    // 0x3164a8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x3164a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3164ac:
    // 0x3164ac: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x3164acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3164b0:
    // 0x3164b0: 0x0  nop
    ctx->pc = 0x3164b0u;
    // NOP
label_3164b4:
    // 0x3164b4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3164b8:
    if (ctx->pc == 0x3164B8u) {
        ctx->pc = 0x3164B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164B4u;
        // 0x3164b8: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164BCu;
        goto label_3164bc;
    }
    ctx->pc = 0x3164B4u;
    {
        const bool branch_taken_0x3164b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3164b4) {
            ctx->pc = 0x3164B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3164B4u;
            // 0x3164b8: 0xc6410048  lwc1        $f1, 0x48($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3164C8u;
            goto label_3164c8;
        }
    }
    ctx->pc = 0x3164BCu;
label_3164bc:
    // 0x3164bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3164c0:
    if (ctx->pc == 0x3164C0u) {
        ctx->pc = 0x3164C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164BCu;
        // 0x3164c0: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164C4u;
        goto label_3164c4;
    }
    ctx->pc = 0x3164BCu;
    {
        const bool branch_taken_0x3164bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3164C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164BCu;
        // 0x3164c0: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164bc) {
            ctx->pc = 0x3164DCu;
            goto label_3164dc;
        }
    }
    ctx->pc = 0x3164C4u;
label_3164c4:
    // 0x3164c4: 0x0  nop
    ctx->pc = 0x3164c4u;
    // NOP
label_3164c8:
    // 0x3164c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3164c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3164cc:
    // 0x3164cc: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3164ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3164d0:
    // 0x3164d0: 0x0  nop
    ctx->pc = 0x3164d0u;
    // NOP
label_3164d4:
    // 0x3164d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3164d8:
    if (ctx->pc == 0x3164D8u) {
        ctx->pc = 0x3164D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164D4u;
        // 0x3164d8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164DCu;
        goto label_3164dc;
    }
    ctx->pc = 0x3164D4u;
    {
        const bool branch_taken_0x3164d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3164d4) {
            ctx->pc = 0x3164D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3164D4u;
            // 0x3164d8: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3164DCu;
            goto label_3164dc;
        }
    }
    ctx->pc = 0x3164DCu;
label_3164dc:
    // 0x3164dc: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x3164dcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3164e0:
    // 0x3164e0: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x3164e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3164e4:
    // 0x3164e4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3164e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3164e8:
    // 0x3164e8: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x3164e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3164ec:
    // 0x3164ec: 0x0  nop
    ctx->pc = 0x3164ecu;
    // NOP
label_3164f0:
    // 0x3164f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_3164f4:
    if (ctx->pc == 0x3164F4u) {
        ctx->pc = 0x3164F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164F0u;
        // 0x3164f4: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3164F8u;
        goto label_3164f8;
    }
    ctx->pc = 0x3164F0u;
    {
        const bool branch_taken_0x3164f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3164f0) {
            ctx->pc = 0x3164F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3164F0u;
            // 0x3164f4: 0xc4420004  lwc1        $f2, 0x4($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x316500u;
            goto label_316500;
        }
    }
    ctx->pc = 0x3164F8u;
label_3164f8:
    // 0x3164f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3164fc:
    if (ctx->pc == 0x3164FCu) {
        ctx->pc = 0x3164FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164F8u;
        // 0x3164fc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316500u;
        goto label_316500;
    }
    ctx->pc = 0x3164F8u;
    {
        const bool branch_taken_0x3164f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3164FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3164F8u;
        // 0x3164fc: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3164f8) {
            ctx->pc = 0x316514u;
            goto label_316514;
        }
    }
    ctx->pc = 0x316500u;
label_316500:
    // 0x316500: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x316500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316504:
    // 0x316504: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x316504u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316508:
    // 0x316508: 0x0  nop
    ctx->pc = 0x316508u;
    // NOP
label_31650c:
    // 0x31650c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_316510:
    if (ctx->pc == 0x316510u) {
        ctx->pc = 0x316510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31650Cu;
        // 0x316510: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316514u;
        goto label_316514;
    }
    ctx->pc = 0x31650Cu;
    {
        const bool branch_taken_0x31650c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x31650c) {
            ctx->pc = 0x316510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31650Cu;
            // 0x316510: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x316514u;
            goto label_316514;
        }
    }
    ctx->pc = 0x316514u;
label_316514:
    // 0x316514: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x316514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_316518:
    // 0x316518: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x316518u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31651c:
    // 0x31651c: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x31651cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_316520:
    // 0x316520: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x316520u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316524:
    // 0x316524: 0x0  nop
    ctx->pc = 0x316524u;
    // NOP
label_316528:
    // 0x316528: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_31652c:
    if (ctx->pc == 0x31652Cu) {
        ctx->pc = 0x31652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316528u;
        // 0x31652c: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316530u;
        goto label_316530;
    }
    ctx->pc = 0x316528u;
    {
        const bool branch_taken_0x316528 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316528u;
        // 0x31652c: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316528) {
            ctx->pc = 0x316538u;
            goto label_316538;
        }
    }
    ctx->pc = 0x316530u;
label_316530:
    // 0x316530: 0x10000007  b           . + 4 + (0x7 << 2)
label_316534:
    if (ctx->pc == 0x316534u) {
        ctx->pc = 0x316534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316530u;
        // 0x316534: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316538u;
        goto label_316538;
    }
    ctx->pc = 0x316530u;
    {
        const bool branch_taken_0x316530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316530u;
        // 0x316534: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316530) {
            ctx->pc = 0x316550u;
            goto label_316550;
        }
    }
    ctx->pc = 0x316538u;
label_316538:
    // 0x316538: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x316538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31653c:
    // 0x31653c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31653cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_316540:
    // 0x316540: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x316540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316544:
    // 0x316544: 0x0  nop
    ctx->pc = 0x316544u;
    // NOP
label_316548:
    // 0x316548: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31654c:
    if (ctx->pc == 0x31654Cu) {
        ctx->pc = 0x31654Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316548u;
        // 0x31654c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x316550u;
        goto label_316550;
    }
    ctx->pc = 0x316548u;
    {
        const bool branch_taken_0x316548 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x316548) {
            ctx->pc = 0x31654Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316548u;
            // 0x31654c: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x316550u;
            goto label_316550;
        }
    }
    ctx->pc = 0x316550u;
label_316550:
    // 0x316550: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x316550u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_316554:
    // 0x316554: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x316554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316558:
    // 0x316558: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x316558u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_31655c:
    // 0x31655c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x31655cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_316560:
    // 0x316560: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x316560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_316564:
    // 0x316564: 0x0  nop
    ctx->pc = 0x316564u;
    // NOP
label_316568:
    // 0x316568: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_31656c:
    if (ctx->pc == 0x31656Cu) {
        ctx->pc = 0x31656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316568u;
        // 0x31656c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316570u;
        goto label_316570;
    }
    ctx->pc = 0x316568u;
    {
        const bool branch_taken_0x316568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316568u;
        // 0x31656c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316568) {
            ctx->pc = 0x316574u;
            goto label_316574;
        }
    }
    ctx->pc = 0x316570u;
label_316570:
    // 0x316570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x316570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_316574:
    // 0x316574: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_316578:
    if (ctx->pc == 0x316578u) {
        ctx->pc = 0x316578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316574u;
        // 0x316578: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31657Cu;
        goto label_31657c;
    }
    ctx->pc = 0x316574u;
    {
        const bool branch_taken_0x316574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316574u;
        // 0x316578: 0x26430038  addiu       $v1, $s2, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316574) {
            ctx->pc = 0x316668u;
            goto label_316668;
        }
    }
    ctx->pc = 0x31657Cu;
label_31657c:
    // 0x31657c: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x31657cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_316580:
    // 0x316580: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x316580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_316584:
    // 0x316584: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
label_316588:
    if (ctx->pc == 0x316588u) {
        ctx->pc = 0x316588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316584u;
        // 0x316588: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31658Cu;
        goto label_31658c;
    }
    ctx->pc = 0x316584u;
    {
        const bool branch_taken_0x316584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x316588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316584u;
        // 0x316588: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316584) {
            ctx->pc = 0x316668u;
            goto label_316668;
        }
    }
    ctx->pc = 0x31658Cu;
label_31658c:
    // 0x31658c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x31658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_316590:
    // 0x316590: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x316590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_316594:
    // 0x316594: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x316594u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_316598:
    // 0x316598: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_31659c:
    if (ctx->pc == 0x31659Cu) {
        ctx->pc = 0x31659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316598u;
        // 0x31659c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3165A0u;
        goto label_3165a0;
    }
    ctx->pc = 0x316598u;
    {
        const bool branch_taken_0x316598 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316598u;
        // 0x31659c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316598) {
            ctx->pc = 0x316658u;
            goto label_316658;
        }
    }
    ctx->pc = 0x3165A0u;
label_3165a0:
    // 0x3165a0: 0x1217002d  beq         $s0, $s7, . + 4 + (0x2D << 2)
label_3165a4:
    if (ctx->pc == 0x3165A4u) {
        ctx->pc = 0x3165A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165A0u;
        // 0x3165a4: 0x8f82a5ac  lw          $v0, -0x5A54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944172)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3165A8u;
        goto label_3165a8;
    }
    ctx->pc = 0x3165A0u;
    {
        const bool branch_taken_0x3165a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x3165A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165A0u;
        // 0x3165a4: 0x8f82a5ac  lw          $v0, -0x5A54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165a0) {
            ctx->pc = 0x316658u;
            goto label_316658;
        }
    }
    ctx->pc = 0x3165A8u;
label_3165a8:
    // 0x3165a8: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x3165a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3165ac:
    // 0x3165ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3165acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3165b0:
    // 0x3165b0: 0x1073002a  beq         $v1, $s3, . + 4 + (0x2A << 2)
label_3165b4:
    if (ctx->pc == 0x3165B4u) {
        ctx->pc = 0x3165B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165B0u;
        // 0x3165b4: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3165B8u;
        goto label_3165b8;
    }
    ctx->pc = 0x3165B0u;
    {
        const bool branch_taken_0x3165b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x3165B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165B0u;
        // 0x3165b4: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165b0) {
            ctx->pc = 0x31665Cu;
            goto label_31665c;
        }
    }
    ctx->pc = 0x3165B8u;
label_3165b8:
    // 0x3165b8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x3165b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
label_3165bc:
    // 0x3165bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3165bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3165c0:
    // 0x3165c0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_3165c4:
    if (ctx->pc == 0x3165C4u) {
        ctx->pc = 0x3165C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165C0u;
        // 0x3165c4: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3165C8u;
        goto label_3165c8;
    }
    ctx->pc = 0x3165C0u;
    {
        const bool branch_taken_0x3165c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3165C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165C0u;
        // 0x3165c4: 0x8fa20144  lw          $v0, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3165c0) {
            ctx->pc = 0x316660u;
            goto label_316660;
        }
    }
    ctx->pc = 0x3165C8u;
label_3165c8:
    // 0x3165c8: 0xac930000  sw          $s3, 0x0($a0)
    ctx->pc = 0x3165c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 19));
label_3165cc:
    // 0x3165cc: 0xc0e2048  jal         func_388120
label_3165d0:
    if (ctx->pc == 0x3165D0u) {
        ctx->pc = 0x3165D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3165CCu;
        // 0x3165d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3165D4u;
        goto label_3165d4;
    }
    ctx->pc = 0x3165CCu;
    SET_GPR_U32(ctx, 31, 0x3165D4u);
    ctx->pc = 0x3165D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3165CCu;
    // 0x3165d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3165CCu, 0x3165D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3165D4u;
label_3165d4:
    // 0x3165d4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x3165d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3165d8:
    // 0x3165d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3165d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165dc:
    // 0x3165dc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x3165dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3165e0:
    // 0x3165e0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3165e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3165e4:
    // 0x3165e4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x3165e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3165e8:
    // 0x3165e8: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x3165e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_3165ec:
    // 0x3165ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3165ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165f0:
    // 0x3165f0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3165f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3165f4:
    // 0x3165f4: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x3165f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_3165f8:
    // 0x3165f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3165f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3165fc:
    // 0x3165fc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3165fcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_316600:
    // 0x316600: 0xe7a30158  swc1        $f3, 0x158($sp)
    ctx->pc = 0x316600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_316604:
    // 0x316604: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x316604u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_316608:
    // 0x316608: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x316608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_31660c:
    // 0x31660c: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x31660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_316610:
    // 0x316610: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x316610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316614:
    // 0x316614: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x316614u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_316618:
    // 0x316618: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x316618u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_31661c:
    // 0x31661c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x31661cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_316620:
    // 0x316620: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x316620u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_316624:
    // 0x316624: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x316624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_316628:
    // 0x316628: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x316628u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31662c:
    // 0x31662c: 0x0  nop
    ctx->pc = 0x31662cu;
    // NOP
label_316630:
    // 0x316630: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_316634:
    if (ctx->pc == 0x316634u) {
        ctx->pc = 0x316634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316630u;
        // 0x316634: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316638u;
        goto label_316638;
    }
    ctx->pc = 0x316630u;
    {
        const bool branch_taken_0x316630 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x316634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316630u;
        // 0x316634: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316630) {
            ctx->pc = 0x316658u;
            goto label_316658;
        }
    }
    ctx->pc = 0x316638u;
label_316638:
    // 0x316638: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x316638u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_31663c:
    // 0x31663c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x31663cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_316640:
    // 0x316640: 0x460c0304  c1          0xC0304
    ctx->pc = 0x316640u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_316644:
    // 0x316644: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x316644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_316648:
    // 0x316648: 0x2c0f809  jalr        $s6
label_31664c:
    if (ctx->pc == 0x31664Cu) {
        ctx->pc = 0x31664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316648u;
        // 0x31664c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316650u;
        goto label_316650;
    }
    ctx->pc = 0x316648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x316650u);
        ctx->pc = 0x31664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316648u;
        // 0x31664c: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316648u, 0x316650u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x316650u;
label_316650:
    // 0x316650: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_316654:
    if (ctx->pc == 0x316654u) {
        ctx->pc = 0x316654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316650u;
        // 0x316654: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316658u;
        goto label_316658;
    }
    ctx->pc = 0x316650u;
    {
        const bool branch_taken_0x316650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316650u;
        // 0x316654: 0x7bb001f0  lq          $s0, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316650) {
            ctx->pc = 0x31667Cu;
            goto label_31667c;
        }
    }
    ctx->pc = 0x316658u;
label_316658:
    // 0x316658: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x316658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_31665c:
    // 0x31665c: 0x8fa20144  lw          $v0, 0x144($sp)
    ctx->pc = 0x31665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_316660:
    // 0x316660: 0x1462ffcb  bne         $v1, $v0, . + 4 + (-0x35 << 2)
label_316664:
    if (ctx->pc == 0x316664u) {
        ctx->pc = 0x316664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316660u;
        // 0x316664: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316668u;
        goto label_316668;
    }
    ctx->pc = 0x316660u;
    {
        const bool branch_taken_0x316660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x316664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316660u;
        // 0x316664: 0x8fa30140  lw          $v1, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316660) {
            ctx->pc = 0x316590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316590;
        }
    }
    ctx->pc = 0x316668u;
label_316668:
    // 0x316668: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x316668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31666c:
    // 0x31666c: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x31666cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_316670:
    // 0x316670: 0x5440ff65  bnel        $v0, $zero, . + 4 + (-0x9B << 2)
label_316674:
    if (ctx->pc == 0x316674u) {
        ctx->pc = 0x316674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316670u;
        // 0x316674: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x316678u;
        goto label_316678;
    }
    ctx->pc = 0x316670u;
    {
        const bool branch_taken_0x316670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316670) {
            ctx->pc = 0x316674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316670u;
            // 0x316674: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x316408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_316408;
        }
    }
    ctx->pc = 0x316678u;
label_316678:
    // 0x316678: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x316678u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_31667c:
    // 0x31667c: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x31667cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_316680:
    // 0x316680: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x316680u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_316684:
    // 0x316684: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x316684u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_316688:
    // 0x316688: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x316688u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_31668c:
    // 0x31668c: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x31668cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_316690:
    // 0x316690: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x316690u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_316694:
    // 0x316694: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x316694u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_316698:
    // 0x316698: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x316698u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_31669c:
    // 0x31669c: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x31669cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_3166a0:
    // 0x3166a0: 0x3e00008  jr          $ra
label_3166a4:
    if (ctx->pc == 0x3166A4u) {
        ctx->pc = 0x3166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166A0u;
        // 0x3166a4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3166A8u;
        goto label_fallthrough_0x3166a0;
    }
    ctx->pc = 0x3166A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3166A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3166A0u;
        // 0x3166a4: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3166A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3166a0:
    ctx->pc = 0x3166A8u;
}
