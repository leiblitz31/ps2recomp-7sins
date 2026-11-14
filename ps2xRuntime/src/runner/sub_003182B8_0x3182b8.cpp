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

// Function: sub_003182B8
// Address: 0x3182b8 - 0x318748
void sub_003182B8_0x3182b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003182B8_0x3182b8");
#endif

    switch (ctx->pc) {
        case 0x3182b8u: goto label_3182b8;
        case 0x3182bcu: goto label_3182bc;
        case 0x3182c0u: goto label_3182c0;
        case 0x3182c4u: goto label_3182c4;
        case 0x3182c8u: goto label_3182c8;
        case 0x3182ccu: goto label_3182cc;
        case 0x3182d0u: goto label_3182d0;
        case 0x3182d4u: goto label_3182d4;
        case 0x3182d8u: goto label_3182d8;
        case 0x3182dcu: goto label_3182dc;
        case 0x3182e0u: goto label_3182e0;
        case 0x3182e4u: goto label_3182e4;
        case 0x3182e8u: goto label_3182e8;
        case 0x3182ecu: goto label_3182ec;
        case 0x3182f0u: goto label_3182f0;
        case 0x3182f4u: goto label_3182f4;
        case 0x3182f8u: goto label_3182f8;
        case 0x3182fcu: goto label_3182fc;
        case 0x318300u: goto label_318300;
        case 0x318304u: goto label_318304;
        case 0x318308u: goto label_318308;
        case 0x31830cu: goto label_31830c;
        case 0x318310u: goto label_318310;
        case 0x318314u: goto label_318314;
        case 0x318318u: goto label_318318;
        case 0x31831cu: goto label_31831c;
        case 0x318320u: goto label_318320;
        case 0x318324u: goto label_318324;
        case 0x318328u: goto label_318328;
        case 0x31832cu: goto label_31832c;
        case 0x318330u: goto label_318330;
        case 0x318334u: goto label_318334;
        case 0x318338u: goto label_318338;
        case 0x31833cu: goto label_31833c;
        case 0x318340u: goto label_318340;
        case 0x318344u: goto label_318344;
        case 0x318348u: goto label_318348;
        case 0x31834cu: goto label_31834c;
        case 0x318350u: goto label_318350;
        case 0x318354u: goto label_318354;
        case 0x318358u: goto label_318358;
        case 0x31835cu: goto label_31835c;
        case 0x318360u: goto label_318360;
        case 0x318364u: goto label_318364;
        case 0x318368u: goto label_318368;
        case 0x31836cu: goto label_31836c;
        case 0x318370u: goto label_318370;
        case 0x318374u: goto label_318374;
        case 0x318378u: goto label_318378;
        case 0x31837cu: goto label_31837c;
        case 0x318380u: goto label_318380;
        case 0x318384u: goto label_318384;
        case 0x318388u: goto label_318388;
        case 0x31838cu: goto label_31838c;
        case 0x318390u: goto label_318390;
        case 0x318394u: goto label_318394;
        case 0x318398u: goto label_318398;
        case 0x31839cu: goto label_31839c;
        case 0x3183a0u: goto label_3183a0;
        case 0x3183a4u: goto label_3183a4;
        case 0x3183a8u: goto label_3183a8;
        case 0x3183acu: goto label_3183ac;
        case 0x3183b0u: goto label_3183b0;
        case 0x3183b4u: goto label_3183b4;
        case 0x3183b8u: goto label_3183b8;
        case 0x3183bcu: goto label_3183bc;
        case 0x3183c0u: goto label_3183c0;
        case 0x3183c4u: goto label_3183c4;
        case 0x3183c8u: goto label_3183c8;
        case 0x3183ccu: goto label_3183cc;
        case 0x3183d0u: goto label_3183d0;
        case 0x3183d4u: goto label_3183d4;
        case 0x3183d8u: goto label_3183d8;
        case 0x3183dcu: goto label_3183dc;
        case 0x3183e0u: goto label_3183e0;
        case 0x3183e4u: goto label_3183e4;
        case 0x3183e8u: goto label_3183e8;
        case 0x3183ecu: goto label_3183ec;
        case 0x3183f0u: goto label_3183f0;
        case 0x3183f4u: goto label_3183f4;
        case 0x3183f8u: goto label_3183f8;
        case 0x3183fcu: goto label_3183fc;
        case 0x318400u: goto label_318400;
        case 0x318404u: goto label_318404;
        case 0x318408u: goto label_318408;
        case 0x31840cu: goto label_31840c;
        case 0x318410u: goto label_318410;
        case 0x318414u: goto label_318414;
        case 0x318418u: goto label_318418;
        case 0x31841cu: goto label_31841c;
        case 0x318420u: goto label_318420;
        case 0x318424u: goto label_318424;
        case 0x318428u: goto label_318428;
        case 0x31842cu: goto label_31842c;
        case 0x318430u: goto label_318430;
        case 0x318434u: goto label_318434;
        case 0x318438u: goto label_318438;
        case 0x31843cu: goto label_31843c;
        case 0x318440u: goto label_318440;
        case 0x318444u: goto label_318444;
        case 0x318448u: goto label_318448;
        case 0x31844cu: goto label_31844c;
        case 0x318450u: goto label_318450;
        case 0x318454u: goto label_318454;
        case 0x318458u: goto label_318458;
        case 0x31845cu: goto label_31845c;
        case 0x318460u: goto label_318460;
        case 0x318464u: goto label_318464;
        case 0x318468u: goto label_318468;
        case 0x31846cu: goto label_31846c;
        case 0x318470u: goto label_318470;
        case 0x318474u: goto label_318474;
        case 0x318478u: goto label_318478;
        case 0x31847cu: goto label_31847c;
        case 0x318480u: goto label_318480;
        case 0x318484u: goto label_318484;
        case 0x318488u: goto label_318488;
        case 0x31848cu: goto label_31848c;
        case 0x318490u: goto label_318490;
        case 0x318494u: goto label_318494;
        case 0x318498u: goto label_318498;
        case 0x31849cu: goto label_31849c;
        case 0x3184a0u: goto label_3184a0;
        case 0x3184a4u: goto label_3184a4;
        case 0x3184a8u: goto label_3184a8;
        case 0x3184acu: goto label_3184ac;
        case 0x3184b0u: goto label_3184b0;
        case 0x3184b4u: goto label_3184b4;
        case 0x3184b8u: goto label_3184b8;
        case 0x3184bcu: goto label_3184bc;
        case 0x3184c0u: goto label_3184c0;
        case 0x3184c4u: goto label_3184c4;
        case 0x3184c8u: goto label_3184c8;
        case 0x3184ccu: goto label_3184cc;
        case 0x3184d0u: goto label_3184d0;
        case 0x3184d4u: goto label_3184d4;
        case 0x3184d8u: goto label_3184d8;
        case 0x3184dcu: goto label_3184dc;
        case 0x3184e0u: goto label_3184e0;
        case 0x3184e4u: goto label_3184e4;
        case 0x3184e8u: goto label_3184e8;
        case 0x3184ecu: goto label_3184ec;
        case 0x3184f0u: goto label_3184f0;
        case 0x3184f4u: goto label_3184f4;
        case 0x3184f8u: goto label_3184f8;
        case 0x3184fcu: goto label_3184fc;
        case 0x318500u: goto label_318500;
        case 0x318504u: goto label_318504;
        case 0x318508u: goto label_318508;
        case 0x31850cu: goto label_31850c;
        case 0x318510u: goto label_318510;
        case 0x318514u: goto label_318514;
        case 0x318518u: goto label_318518;
        case 0x31851cu: goto label_31851c;
        case 0x318520u: goto label_318520;
        case 0x318524u: goto label_318524;
        case 0x318528u: goto label_318528;
        case 0x31852cu: goto label_31852c;
        case 0x318530u: goto label_318530;
        case 0x318534u: goto label_318534;
        case 0x318538u: goto label_318538;
        case 0x31853cu: goto label_31853c;
        case 0x318540u: goto label_318540;
        case 0x318544u: goto label_318544;
        case 0x318548u: goto label_318548;
        case 0x31854cu: goto label_31854c;
        case 0x318550u: goto label_318550;
        case 0x318554u: goto label_318554;
        case 0x318558u: goto label_318558;
        case 0x31855cu: goto label_31855c;
        case 0x318560u: goto label_318560;
        case 0x318564u: goto label_318564;
        case 0x318568u: goto label_318568;
        case 0x31856cu: goto label_31856c;
        case 0x318570u: goto label_318570;
        case 0x318574u: goto label_318574;
        case 0x318578u: goto label_318578;
        case 0x31857cu: goto label_31857c;
        case 0x318580u: goto label_318580;
        case 0x318584u: goto label_318584;
        case 0x318588u: goto label_318588;
        case 0x31858cu: goto label_31858c;
        case 0x318590u: goto label_318590;
        case 0x318594u: goto label_318594;
        case 0x318598u: goto label_318598;
        case 0x31859cu: goto label_31859c;
        case 0x3185a0u: goto label_3185a0;
        case 0x3185a4u: goto label_3185a4;
        case 0x3185a8u: goto label_3185a8;
        case 0x3185acu: goto label_3185ac;
        case 0x3185b0u: goto label_3185b0;
        case 0x3185b4u: goto label_3185b4;
        case 0x3185b8u: goto label_3185b8;
        case 0x3185bcu: goto label_3185bc;
        case 0x3185c0u: goto label_3185c0;
        case 0x3185c4u: goto label_3185c4;
        case 0x3185c8u: goto label_3185c8;
        case 0x3185ccu: goto label_3185cc;
        case 0x3185d0u: goto label_3185d0;
        case 0x3185d4u: goto label_3185d4;
        case 0x3185d8u: goto label_3185d8;
        case 0x3185dcu: goto label_3185dc;
        case 0x3185e0u: goto label_3185e0;
        case 0x3185e4u: goto label_3185e4;
        case 0x3185e8u: goto label_3185e8;
        case 0x3185ecu: goto label_3185ec;
        case 0x3185f0u: goto label_3185f0;
        case 0x3185f4u: goto label_3185f4;
        case 0x3185f8u: goto label_3185f8;
        case 0x3185fcu: goto label_3185fc;
        case 0x318600u: goto label_318600;
        case 0x318604u: goto label_318604;
        case 0x318608u: goto label_318608;
        case 0x31860cu: goto label_31860c;
        case 0x318610u: goto label_318610;
        case 0x318614u: goto label_318614;
        case 0x318618u: goto label_318618;
        case 0x31861cu: goto label_31861c;
        case 0x318620u: goto label_318620;
        case 0x318624u: goto label_318624;
        case 0x318628u: goto label_318628;
        case 0x31862cu: goto label_31862c;
        case 0x318630u: goto label_318630;
        case 0x318634u: goto label_318634;
        case 0x318638u: goto label_318638;
        case 0x31863cu: goto label_31863c;
        case 0x318640u: goto label_318640;
        case 0x318644u: goto label_318644;
        case 0x318648u: goto label_318648;
        case 0x31864cu: goto label_31864c;
        case 0x318650u: goto label_318650;
        case 0x318654u: goto label_318654;
        case 0x318658u: goto label_318658;
        case 0x31865cu: goto label_31865c;
        case 0x318660u: goto label_318660;
        case 0x318664u: goto label_318664;
        case 0x318668u: goto label_318668;
        case 0x31866cu: goto label_31866c;
        case 0x318670u: goto label_318670;
        case 0x318674u: goto label_318674;
        case 0x318678u: goto label_318678;
        case 0x31867cu: goto label_31867c;
        case 0x318680u: goto label_318680;
        case 0x318684u: goto label_318684;
        case 0x318688u: goto label_318688;
        case 0x31868cu: goto label_31868c;
        case 0x318690u: goto label_318690;
        case 0x318694u: goto label_318694;
        case 0x318698u: goto label_318698;
        case 0x31869cu: goto label_31869c;
        case 0x3186a0u: goto label_3186a0;
        case 0x3186a4u: goto label_3186a4;
        case 0x3186a8u: goto label_3186a8;
        case 0x3186acu: goto label_3186ac;
        case 0x3186b0u: goto label_3186b0;
        case 0x3186b4u: goto label_3186b4;
        case 0x3186b8u: goto label_3186b8;
        case 0x3186bcu: goto label_3186bc;
        case 0x3186c0u: goto label_3186c0;
        case 0x3186c4u: goto label_3186c4;
        case 0x3186c8u: goto label_3186c8;
        case 0x3186ccu: goto label_3186cc;
        case 0x3186d0u: goto label_3186d0;
        case 0x3186d4u: goto label_3186d4;
        case 0x3186d8u: goto label_3186d8;
        case 0x3186dcu: goto label_3186dc;
        case 0x3186e0u: goto label_3186e0;
        case 0x3186e4u: goto label_3186e4;
        case 0x3186e8u: goto label_3186e8;
        case 0x3186ecu: goto label_3186ec;
        case 0x3186f0u: goto label_3186f0;
        case 0x3186f4u: goto label_3186f4;
        case 0x3186f8u: goto label_3186f8;
        case 0x3186fcu: goto label_3186fc;
        case 0x318700u: goto label_318700;
        case 0x318704u: goto label_318704;
        case 0x318708u: goto label_318708;
        case 0x31870cu: goto label_31870c;
        case 0x318710u: goto label_318710;
        case 0x318714u: goto label_318714;
        case 0x318718u: goto label_318718;
        case 0x31871cu: goto label_31871c;
        case 0x318720u: goto label_318720;
        case 0x318724u: goto label_318724;
        case 0x318728u: goto label_318728;
        case 0x31872cu: goto label_31872c;
        case 0x318730u: goto label_318730;
        case 0x318734u: goto label_318734;
        case 0x318738u: goto label_318738;
        case 0x31873cu: goto label_31873c;
        case 0x318740u: goto label_318740;
        case 0x318744u: goto label_318744;
        default: break;
    }

    ctx->pc = 0x3182b8u;

label_3182b8:
    // 0x3182b8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x3182b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_3182bc:
    // 0x3182bc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x3182bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_3182c0:
    // 0x3182c0: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x3182c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_3182c4:
    // 0x3182c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3182c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3182c8:
    // 0x3182c8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x3182c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_3182cc:
    // 0x3182cc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3182ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3182d0:
    // 0x3182d0: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x3182d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_3182d4:
    // 0x3182d4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3182d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3182d8:
    // 0x3182d8: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x3182d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_3182dc:
    // 0x3182dc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3182dcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3182e0:
    // 0x3182e0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x3182e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_3182e4:
    // 0x3182e4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x3182e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3182e8:
    // 0x3182e8: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x3182e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_3182ec:
    // 0x3182ec: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x3182ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_3182f0:
    // 0x3182f0: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x3182f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_3182f4:
    // 0x3182f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3182f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3182f8:
    // 0x3182f8: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x3182f8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_3182fc:
    // 0x3182fc: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x3182fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_318300:
    // 0x318300: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x318300u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_318304:
    // 0x318304: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x318304u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_318308:
    // 0x318308: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x318308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31830c:
    // 0x31830c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x31830cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318310:
    // 0x318310: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x318310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318314:
    // 0x318314: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x318314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_318318:
    // 0x318318: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x318318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_31831c:
    // 0x31831c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x31831cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318320:
    // 0x318320: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x318320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318324:
    // 0x318324: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x318324u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_318328:
    // 0x318328: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x318328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_31832c:
    // 0x31832c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x31832cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_318330:
    // 0x318330: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x318330u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_318334:
    // 0x318334: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x318334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_318338:
    // 0x318338: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x318338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
label_31833c:
    // 0x31833c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31833cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318340:
    // 0x318340: 0x8c530014  lw          $s3, 0x14($v0)
    ctx->pc = 0x318340u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_318344:
    // 0x318344: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x318344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_318348:
    // 0x318348: 0x186000ee  blez        $v1, . + 4 + (0xEE << 2)
label_31834c:
    if (ctx->pc == 0x31834Cu) {
        ctx->pc = 0x31834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318348u;
        // 0x31834c: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318350u;
        goto label_318350;
    }
    ctx->pc = 0x318348u;
    {
        const bool branch_taken_0x318348 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x31834Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318348u;
        // 0x31834c: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318348) {
            ctx->pc = 0x318704u;
            goto label_318704;
        }
    }
    ctx->pc = 0x318350u;
label_318350:
    // 0x318350: 0xc797812c  lwc1        $f23, -0x7ED4($gp)
    ctx->pc = 0x318350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_318354:
    // 0x318354: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x318354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_318358:
    // 0x318358: 0xc7968130  lwc1        $f22, -0x7ED0($gp)
    ctx->pc = 0x318358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_31835c:
    // 0x31835c: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x31835cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_318360:
    // 0x318360: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x318360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_318364:
    // 0x318364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x318364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_318368:
    // 0x318368: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x318368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_31836c:
    // 0x31836c: 0x0  nop
    ctx->pc = 0x31836cu;
    // NOP
label_318370:
    // 0x318370: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x318370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_318374:
    // 0x318374: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x318374u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_318378:
    // 0x318378: 0x96240004  lhu         $a0, 0x4($s1)
    ctx->pc = 0x318378u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_31837c:
    // 0x31837c: 0x552818  mult        $a1, $v0, $s5
    ctx->pc = 0x31837cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_318380:
    // 0x318380: 0x753018  mult        $a2, $v1, $s5
    ctx->pc = 0x318380u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_318384:
    // 0x318384: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x318384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_318388:
    // 0x318388: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x318388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_31838c:
    // 0x31838c: 0xd32821  addu        $a1, $a2, $s3
    ctx->pc = 0x31838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
label_318390:
    // 0x318390: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x318390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_318394:
    // 0x318394: 0xc4a80000  lwc1        $f8, 0x0($a1)
    ctx->pc = 0x318394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_318398:
    // 0x318398: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x318398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31839c:
    // 0x31839c: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x31839cu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_3183a0:
    // 0x3183a0: 0xe7a80040  swc1        $f8, 0x40($sp)
    ctx->pc = 0x3183a0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3183a4:
    // 0x3183a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3183a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3183a8:
    // 0x3183a8: 0xc4aa0004  lwc1        $f10, 0x4($a1)
    ctx->pc = 0x3183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3183ac:
    // 0x3183ac: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x3183acu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_3183b0:
    // 0x3183b0: 0xe7aa0044  swc1        $f10, 0x44($sp)
    ctx->pc = 0x3183b0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3183b4:
    // 0x3183b4: 0xc4a90008  lwc1        $f9, 0x8($a1)
    ctx->pc = 0x3183b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3183b8:
    // 0x3183b8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3183b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3183bc:
    // 0x3183bc: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x3183bcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
label_3183c0:
    // 0x3183c0: 0xe7a90048  swc1        $f9, 0x48($sp)
    ctx->pc = 0x3183c0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3183c4:
    // 0x3183c4: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x3183c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3183c8:
    // 0x3183c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3183c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3183cc:
    // 0x3183cc: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3183ccu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3183d0:
    // 0x3183d0: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x3183d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3183d4:
    // 0x3183d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3183d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3183d8:
    // 0x3183d8: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x3183d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3183dc:
    // 0x3183dc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3183dcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3183e0:
    // 0x3183e0: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x3183e0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3183e4:
    // 0x3183e4: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x3183e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3183e8:
    // 0x3183e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3183e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3183ec:
    // 0x3183ec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3183ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3183f0:
    // 0x3183f0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x3183f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3183f4:
    // 0x3183f4: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x3183f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3183f8:
    // 0x3183f8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x3183f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3183fc:
    // 0x3183fc: 0x460429c2  mul.s       $f7, $f5, $f4
    ctx->pc = 0x3183fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_318400:
    // 0x318400: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x318400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318404:
    // 0x318404: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x318404u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_318408:
    // 0x318408: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x318408u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_31840c:
    // 0x31840c: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x31840cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_318410:
    // 0x318410: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x318410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_318414:
    // 0x318414: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x318414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_318418:
    // 0x318418: 0x46071981  sub.s       $f6, $f3, $f7
    ctx->pc = 0x318418u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
label_31841c:
    // 0x31841c: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x31841cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_318420:
    // 0x318420: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x318420u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_318424:
    // 0x318424: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x318424u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_318428:
    // 0x318428: 0xe7a50070  swc1        $f5, 0x70($sp)
    ctx->pc = 0x318428u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_31842c:
    // 0x31842c: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x31842cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_318430:
    // 0x318430: 0x46054202  mul.s       $f8, $f8, $f5
    ctx->pc = 0x318430u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_318434:
    // 0x318434: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x318434u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_318438:
    // 0x318438: 0x46064a42  mul.s       $f9, $f9, $f6
    ctx->pc = 0x318438u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[6]);
label_31843c:
    // 0x31843c: 0x460a4200  add.s       $f8, $f8, $f10
    ctx->pc = 0x31843cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[10]);
label_318440:
    // 0x318440: 0x46094200  add.s       $f8, $f8, $f9
    ctx->pc = 0x318440u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[9]);
label_318444:
    // 0x318444: 0x4608b834  c.lt.s      $f23, $f8
    ctx->pc = 0x318444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318448:
    // 0x318448: 0x0  nop
    ctx->pc = 0x318448u;
    // NOP
label_31844c:
    // 0x31844c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_318450:
    if (ctx->pc == 0x318450u) {
        ctx->pc = 0x318450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31844Cu;
        // 0x318450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318454u;
        goto label_318454;
    }
    ctx->pc = 0x31844Cu;
    {
        const bool branch_taken_0x31844c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x318450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31844Cu;
        // 0x318450: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31844c) {
            ctx->pc = 0x318458u;
            goto label_318458;
        }
    }
    ctx->pc = 0x318454u;
label_318454:
    // 0x318454: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x318454u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318458:
    // 0x318458: 0x506000a6  beql        $v1, $zero, . + 4 + (0xA6 << 2)
label_31845c:
    if (ctx->pc == 0x31845Cu) {
        ctx->pc = 0x31845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318458u;
        // 0x31845c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318460u;
        goto label_318460;
    }
    ctx->pc = 0x318458u;
    {
        const bool branch_taken_0x318458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x318458) {
            ctx->pc = 0x31845Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318458u;
            // 0x31845c: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186F4u;
            goto label_3186f4;
        }
    }
    ctx->pc = 0x318460u;
label_318460:
    // 0x318460: 0x46004007  neg.s       $f0, $f8
    ctx->pc = 0x318460u;
    ctx->f[0] = FPU_NEG_S(ctx->f[8]);
label_318464:
    // 0x318464: 0x46160282  mul.s       $f10, $f0, $f22
    ctx->pc = 0x318464u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_318468:
    // 0x318468: 0x460a42c1  sub.s       $f11, $f8, $f10
    ctx->pc = 0x318468u;
    ctx->f[11] = FPU_SUB_S(ctx->f[8], ctx->f[10]);
label_31846c:
    // 0x31846c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x31846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318470:
    // 0x318470: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x318470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318474:
    // 0x318474: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x318474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318478:
    // 0x318478: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318478u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_31847c:
    // 0x31847c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x31847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318480:
    // 0x318480: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x318480u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_318484:
    // 0x318484: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x318484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318488:
    // 0x318488: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x318488u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_31848c:
    // 0x31848c: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x31848cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_318490:
    // 0x318490: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x318490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318494:
    // 0x318494: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318494u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318498:
    // 0x318498: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x318498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_31849c:
    // 0x31849c: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x31849cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3184a0:
    // 0x3184a0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3184a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3184a4:
    // 0x3184a4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x3184a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_3184a8:
    // 0x3184a8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3184a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3184ac:
    // 0x3184ac: 0x46011240  add.s       $f9, $f2, $f1
    ctx->pc = 0x3184acu;
    ctx->f[9] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3184b0:
    // 0x3184b0: 0x46095036  c.le.s      $f10, $f9
    ctx->pc = 0x3184b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3184b4:
    // 0x3184b4: 0x0  nop
    ctx->pc = 0x3184b4u;
    // NOP
label_3184b8:
    // 0x3184b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3184bc:
    if (ctx->pc == 0x3184BCu) {
        ctx->pc = 0x3184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184B8u;
        // 0x3184bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3184C0u;
        goto label_3184c0;
    }
    ctx->pc = 0x3184B8u;
    {
        const bool branch_taken_0x3184b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3184BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184B8u;
        // 0x3184bc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184b8) {
            ctx->pc = 0x3184D0u;
            goto label_3184d0;
        }
    }
    ctx->pc = 0x3184C0u;
label_3184c0:
    // 0x3184c0: 0x460b4836  c.le.s      $f9, $f11
    ctx->pc = 0x3184c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3184c4:
    // 0x3184c4: 0x0  nop
    ctx->pc = 0x3184c4u;
    // NOP
label_3184c8:
    // 0x3184c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3184cc:
    if (ctx->pc == 0x3184CCu) {
        ctx->pc = 0x3184CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184C8u;
        // 0x3184cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3184D0u;
        goto label_3184d0;
    }
    ctx->pc = 0x3184C8u;
    {
        const bool branch_taken_0x3184c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3184c8) {
            ctx->pc = 0x3184CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3184C8u;
            // 0x3184cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3184D0u;
            goto label_3184d0;
        }
    }
    ctx->pc = 0x3184D0u;
label_3184d0:
    // 0x3184d0: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_3184d4:
    if (ctx->pc == 0x3184D4u) {
        ctx->pc = 0x3184D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184D0u;
        // 0x3184d4: 0xc7a30068  lwc1        $f3, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3184D8u;
        goto label_3184d8;
    }
    ctx->pc = 0x3184D0u;
    {
        const bool branch_taken_0x3184d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3184D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3184D0u;
        // 0x3184d4: 0xc7a30068  lwc1        $f3, 0x68($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3184d0) {
            ctx->pc = 0x3186F0u;
            goto label_3186f0;
        }
    }
    ctx->pc = 0x3184D8u;
label_3184d8:
    // 0x3184d8: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x3184d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3184dc:
    // 0x3184dc: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x3184dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3184e0:
    // 0x3184e0: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x3184e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3184e4:
    // 0x3184e4: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x3184e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3184e8:
    // 0x3184e8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3184e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3184ec:
    // 0x3184ec: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x3184ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3184f0:
    // 0x3184f0: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x3184f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_3184f4:
    // 0x3184f4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x3184f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3184f8:
    // 0x3184f8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3184f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3184fc:
    // 0x3184fc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3184fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_318500:
    // 0x318500: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x318500u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_318504:
    // 0x318504: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x318504u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_318508:
    // 0x318508: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x318508u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_31850c:
    // 0x31850c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x31850cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_318510:
    // 0x318510: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x318510u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_318514:
    // 0x318514: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x318514u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_318518:
    // 0x318518: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x318518u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_31851c:
    // 0x31851c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x31851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318520:
    // 0x318520: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x318520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318524:
    // 0x318524: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x318524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_318528:
    // 0x318528: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x318528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31852c:
    // 0x31852c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x31852cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_318530:
    // 0x318530: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x318530u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_318534:
    // 0x318534: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x318534u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_318538:
    // 0x318538: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x318538u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_31853c:
    // 0x31853c: 0x46005036  c.le.s      $f10, $f0
    ctx->pc = 0x31853cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318540:
    // 0x318540: 0x0  nop
    ctx->pc = 0x318540u;
    // NOP
label_318544:
    // 0x318544: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_318548:
    if (ctx->pc == 0x318548u) {
        ctx->pc = 0x318548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318544u;
        // 0x318548: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31854Cu;
        goto label_31854c;
    }
    ctx->pc = 0x318544u;
    {
        const bool branch_taken_0x318544 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x318548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318544u;
        // 0x318548: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318544) {
            ctx->pc = 0x318560u;
            goto label_318560;
        }
    }
    ctx->pc = 0x31854Cu;
label_31854c:
    // 0x31854c: 0x46004800  add.s       $f0, $f9, $f0
    ctx->pc = 0x31854cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
label_318550:
    // 0x318550: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x318550u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318554:
    // 0x318554: 0x0  nop
    ctx->pc = 0x318554u;
    // NOP
label_318558:
    // 0x318558: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_31855c:
    if (ctx->pc == 0x31855Cu) {
        ctx->pc = 0x31855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318558u;
        // 0x31855c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318560u;
        goto label_318560;
    }
    ctx->pc = 0x318558u;
    {
        const bool branch_taken_0x318558 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x318558) {
            ctx->pc = 0x31855Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x318558u;
            // 0x31855c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318560u;
            goto label_318560;
        }
    }
    ctx->pc = 0x318560u;
label_318560:
    // 0x318560: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_318564:
    if (ctx->pc == 0x318564u) {
        ctx->pc = 0x318564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318560u;
        // 0x318564: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x318568u;
        goto label_318568;
    }
    ctx->pc = 0x318560u;
    {
        const bool branch_taken_0x318560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x318564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318560u;
        // 0x318564: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318560) {
            ctx->pc = 0x3186F0u;
            goto label_3186f0;
        }
    }
    ctx->pc = 0x318568u;
label_318568:
    // 0x318568: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x318568u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31856c:
    // 0x31856c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x31856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_318570:
    // 0x318570: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x318570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_318574:
    // 0x318574: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x318574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318578:
    // 0x318578: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x318578u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_31857c:
    // 0x31857c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x31857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_318580:
    // 0x318580: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x318580u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_318584:
    // 0x318584: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x318584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318588:
    // 0x318588: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x318588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31858c:
    // 0x31858c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x31858cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_318590:
    // 0x318590: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x318590u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_318594:
    // 0x318594: 0x46025036  c.le.s      $f10, $f2
    ctx->pc = 0x318594u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[10], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318598:
    // 0x318598: 0x0  nop
    ctx->pc = 0x318598u;
    // NOP
label_31859c:
    // 0x31859c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3185a0:
    if (ctx->pc == 0x3185A0u) {
        ctx->pc = 0x3185A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31859Cu;
        // 0x3185a0: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3185A4u;
        goto label_3185a4;
    }
    ctx->pc = 0x31859Cu;
    {
        const bool branch_taken_0x31859c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3185A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31859Cu;
        // 0x3185a0: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31859c) {
            ctx->pc = 0x3185B4u;
            goto label_3185b4;
        }
    }
    ctx->pc = 0x3185A4u;
label_3185a4:
    // 0x3185a4: 0x460b1036  c.le.s      $f2, $f11
    ctx->pc = 0x3185a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3185a8:
    // 0x3185a8: 0x0  nop
    ctx->pc = 0x3185a8u;
    // NOP
label_3185ac:
    // 0x3185ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3185b0:
    if (ctx->pc == 0x3185B0u) {
        ctx->pc = 0x3185B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185ACu;
        // 0x3185b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3185B4u;
        goto label_3185b4;
    }
    ctx->pc = 0x3185ACu;
    {
        const bool branch_taken_0x3185ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3185ac) {
            ctx->pc = 0x3185B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3185ACu;
            // 0x3185b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3185B4u;
            goto label_3185b4;
        }
    }
    ctx->pc = 0x3185B4u;
label_3185b4:
    // 0x3185b4: 0x5060004f  beql        $v1, $zero, . + 4 + (0x4F << 2)
label_3185b8:
    if (ctx->pc == 0x3185B8u) {
        ctx->pc = 0x3185B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3185B4u;
        // 0x3185b8: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3185BCu;
        goto label_3185bc;
    }
    ctx->pc = 0x3185B4u;
    {
        const bool branch_taken_0x3185b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185b4) {
            ctx->pc = 0x3185B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3185B4u;
            // 0x3185b8: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3186F4u;
            goto label_3186f4;
        }
    }
    ctx->pc = 0x3185BCu;
label_3185bc:
    // 0x3185bc: 0x46086303  div.s       $f12, $f12, $f8
    ctx->pc = 0x3185bcu;
    { if (ctx->f[8] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[8]); }
label_3185c0:
    // 0x3185c0: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x3185c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3185c4:
    // 0x3185c4: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x3185c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3185c8:
    // 0x3185c8: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3185cc:
    // 0x3185cc: 0xb3a60023  sdl         $a2, 0x23($sp)
    ctx->pc = 0x3185ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3185d0:
    // 0x3185d0: 0xb7a6001c  sdr         $a2, 0x1C($sp)
    ctx->pc = 0x3185d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3185d4:
    // 0x3185d4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x3185d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
label_3185d8:
    // 0x3185d8: 0xafb20028  sw          $s2, 0x28($sp)
    ctx->pc = 0x3185d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 18));
label_3185dc:
    // 0x3185dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3185dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3185e0:
    // 0x3185e0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x3185e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_3185e4:
    // 0x3185e4: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x3185e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
label_3185e8:
    // 0x3185e8: 0xc4a70000  lwc1        $f7, 0x0($a1)
    ctx->pc = 0x3185e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3185ec:
    // 0x3185ec: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3185ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3185f0:
    // 0x3185f0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3185f0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3185f4:
    // 0x3185f4: 0xe7a70090  swc1        $f7, 0x90($sp)
    ctx->pc = 0x3185f4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3185f8:
    // 0x3185f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3185f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3185fc:
    // 0x3185fc: 0xc4a60004  lwc1        $f6, 0x4($a1)
    ctx->pc = 0x3185fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_318600:
    // 0x318600: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x318600u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_318604:
    // 0x318604: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x318604u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_318608:
    // 0x318608: 0xc4a50008  lwc1        $f5, 0x8($a1)
    ctx->pc = 0x318608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_31860c:
    // 0x31860c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31860cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318610:
    // 0x318610: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x318610u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_318614:
    // 0x318614: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x318614u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_318618:
    // 0x318618: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x318618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31861c:
    // 0x31861c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318620:
    // 0x318620: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x318620u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_318624:
    // 0x318624: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x318624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_318628:
    // 0x318628: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x318628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31862c:
    // 0x31862c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x31862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_318630:
    // 0x318630: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x318630u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_318634:
    // 0x318634: 0xe7a400a4  swc1        $f4, 0xA4($sp)
    ctx->pc = 0x318634u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_318638:
    // 0x318638: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x318638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31863c:
    // 0x31863c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x31863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_318640:
    // 0x318640: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x318640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_318644:
    // 0x318644: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x318644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_318648:
    // 0x318648: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x318648u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_31864c:
    // 0x31864c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x31864cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_318650:
    // 0x318650: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x318650u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_318654:
    // 0x318654: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x318654u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_318658:
    // 0x318658: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x318658u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_31865c:
    // 0x31865c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x31865cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_318660:
    // 0x318660: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x318660u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_318664:
    // 0x318664: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x318664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_318668:
    // 0x318668: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x318668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_31866c:
    // 0x31866c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x31866cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_318670:
    // 0x318670: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x318670u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_318674:
    // 0x318674: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x318674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_318678:
    // 0x318678: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x318678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_31867c:
    // 0x31867c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x31867cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_318680:
    // 0x318680: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x318680u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_318684:
    // 0x318684: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x318684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_318688:
    // 0x318688: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x318688u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_31868c:
    // 0x31868c: 0x46000004  c1          0x4
    ctx->pc = 0x31868cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_318690:
    // 0x318690: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x318690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_318694:
    // 0x318694: 0x0  nop
    ctx->pc = 0x318694u;
    // NOP
label_318698:
    // 0x318698: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31869c:
    if (ctx->pc == 0x31869Cu) {
        ctx->pc = 0x31869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318698u;
        // 0x31869c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3186A0u;
        goto label_3186a0;
    }
    ctx->pc = 0x318698u;
    {
        const bool branch_taken_0x318698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x318698u;
        // 0x31869c: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x318698) {
            ctx->pc = 0x3186B0u;
            goto label_3186b0;
        }
    }
    ctx->pc = 0x3186A0u;
label_3186a0:
    // 0x3186a0: 0x4600a103  div.s       $f4, $f20, $f0
    ctx->pc = 0x3186a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_3186a4:
    // 0x3186a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3186a8:
    if (ctx->pc == 0x3186A8u) {
        ctx->pc = 0x3186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186A4u;
        // 0x3186a8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3186ACu;
        goto label_3186ac;
    }
    ctx->pc = 0x3186A4u;
    {
        const bool branch_taken_0x3186a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3186A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186A4u;
        // 0x3186a8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186a4) {
            ctx->pc = 0x3186B8u;
            goto label_3186b8;
        }
    }
    ctx->pc = 0x3186ACu;
label_3186ac:
    // 0x3186ac: 0x0  nop
    ctx->pc = 0x3186acu;
    // NOP
label_3186b0:
    // 0x3186b0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3186b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3186b4:
    // 0x3186b4: 0x0  nop
    ctx->pc = 0x3186b4u;
    // NOP
label_3186b8:
    // 0x3186b8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x3186b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3186bc:
    // 0x3186bc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x3186bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3186c0:
    // 0x3186c0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3186c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_3186c4:
    // 0x3186c4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3186c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3186c8:
    // 0x3186c8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3186c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3186cc:
    // 0x3186cc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3186ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3186d0:
    // 0x3186d0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3186d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3186d4:
    // 0x3186d4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3186d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3186d8:
    // 0x3186d8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3186d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3186dc:
    // 0x3186dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3186dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3186e0:
    // 0x3186e0: 0x2c0f809  jalr        $s6
label_3186e4:
    if (ctx->pc == 0x3186E4u) {
        ctx->pc = 0x3186E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186E0u;
        // 0x3186e4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3186E8u;
        goto label_3186e8;
    }
    ctx->pc = 0x3186E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 22);
        SET_GPR_U32(ctx, 31, 0x3186E8u);
        ctx->pc = 0x3186E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186E0u;
        // 0x3186e4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3186E0u, 0x3186E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3186E8u;
label_3186e8:
    // 0x3186e8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3186ec:
    if (ctx->pc == 0x3186ECu) {
        ctx->pc = 0x3186ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186E8u;
        // 0x3186ec: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3186F0u;
        goto label_3186f0;
    }
    ctx->pc = 0x3186E8u;
    {
        const bool branch_taken_0x3186e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3186e8) {
            ctx->pc = 0x3186ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3186E8u;
            // 0x3186ec: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x318708u;
            goto label_318708;
        }
    }
    ctx->pc = 0x3186F0u;
label_3186f0:
    // 0x3186f0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3186f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3186f4:
    // 0x3186f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3186f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3186f8:
    // 0x3186f8: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3186f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3186fc:
    // 0x3186fc: 0x1440ff1c  bnez        $v0, . + 4 + (-0xE4 << 2)
label_318700:
    if (ctx->pc == 0x318700u) {
        ctx->pc = 0x318700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186FCu;
        // 0x318700: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318704u;
        goto label_318704;
    }
    ctx->pc = 0x3186FCu;
    {
        const bool branch_taken_0x3186fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x318700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3186FCu;
        // 0x318700: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186fc) {
            ctx->pc = 0x318370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_318370;
        }
    }
    ctx->pc = 0x318704u;
label_318704:
    // 0x318704: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x318704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_318708:
    // 0x318708: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x318708u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_31870c:
    // 0x31870c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x31870cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_318710:
    // 0x318710: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x318710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_318714:
    // 0x318714: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x318714u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_318718:
    // 0x318718: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x318718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_31871c:
    // 0x31871c: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x31871cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_318720:
    // 0x318720: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x318720u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_318724:
    // 0x318724: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x318724u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_318728:
    // 0x318728: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x318728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_31872c:
    // 0x31872c: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x31872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_318730:
    // 0x318730: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x318730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_318734:
    // 0x318734: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x318734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_318738:
    // 0x318738: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x318738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_31873c:
    // 0x31873c: 0x3e00008  jr          $ra
label_318740:
    if (ctx->pc == 0x318740u) {
        ctx->pc = 0x318740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31873Cu;
        // 0x318740: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x318744u;
        goto label_318744;
    }
    ctx->pc = 0x31873Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x318740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31873Cu;
        // 0x318740: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31873Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318744u;
label_318744:
    // 0x318744: 0x0  nop
    ctx->pc = 0x318744u;
    // NOP
    ctx->pc = 0x318748u;
}
