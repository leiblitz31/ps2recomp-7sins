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

// Function: sub_003A74F8
// Address: 0x3a74f8 - 0x3a78a8
void sub_003A74F8_0x3a74f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A74F8_0x3a74f8");
#endif

    switch (ctx->pc) {
        case 0x3a74f8u: goto label_3a74f8;
        case 0x3a74fcu: goto label_3a74fc;
        case 0x3a7500u: goto label_3a7500;
        case 0x3a7504u: goto label_3a7504;
        case 0x3a7508u: goto label_3a7508;
        case 0x3a750cu: goto label_3a750c;
        case 0x3a7510u: goto label_3a7510;
        case 0x3a7514u: goto label_3a7514;
        case 0x3a7518u: goto label_3a7518;
        case 0x3a751cu: goto label_3a751c;
        case 0x3a7520u: goto label_3a7520;
        case 0x3a7524u: goto label_3a7524;
        case 0x3a7528u: goto label_3a7528;
        case 0x3a752cu: goto label_3a752c;
        case 0x3a7530u: goto label_3a7530;
        case 0x3a7534u: goto label_3a7534;
        case 0x3a7538u: goto label_3a7538;
        case 0x3a753cu: goto label_3a753c;
        case 0x3a7540u: goto label_3a7540;
        case 0x3a7544u: goto label_3a7544;
        case 0x3a7548u: goto label_3a7548;
        case 0x3a754cu: goto label_3a754c;
        case 0x3a7550u: goto label_3a7550;
        case 0x3a7554u: goto label_3a7554;
        case 0x3a7558u: goto label_3a7558;
        case 0x3a755cu: goto label_3a755c;
        case 0x3a7560u: goto label_3a7560;
        case 0x3a7564u: goto label_3a7564;
        case 0x3a7568u: goto label_3a7568;
        case 0x3a756cu: goto label_3a756c;
        case 0x3a7570u: goto label_3a7570;
        case 0x3a7574u: goto label_3a7574;
        case 0x3a7578u: goto label_3a7578;
        case 0x3a757cu: goto label_3a757c;
        case 0x3a7580u: goto label_3a7580;
        case 0x3a7584u: goto label_3a7584;
        case 0x3a7588u: goto label_3a7588;
        case 0x3a758cu: goto label_3a758c;
        case 0x3a7590u: goto label_3a7590;
        case 0x3a7594u: goto label_3a7594;
        case 0x3a7598u: goto label_3a7598;
        case 0x3a759cu: goto label_3a759c;
        case 0x3a75a0u: goto label_3a75a0;
        case 0x3a75a4u: goto label_3a75a4;
        case 0x3a75a8u: goto label_3a75a8;
        case 0x3a75acu: goto label_3a75ac;
        case 0x3a75b0u: goto label_3a75b0;
        case 0x3a75b4u: goto label_3a75b4;
        case 0x3a75b8u: goto label_3a75b8;
        case 0x3a75bcu: goto label_3a75bc;
        case 0x3a75c0u: goto label_3a75c0;
        case 0x3a75c4u: goto label_3a75c4;
        case 0x3a75c8u: goto label_3a75c8;
        case 0x3a75ccu: goto label_3a75cc;
        case 0x3a75d0u: goto label_3a75d0;
        case 0x3a75d4u: goto label_3a75d4;
        case 0x3a75d8u: goto label_3a75d8;
        case 0x3a75dcu: goto label_3a75dc;
        case 0x3a75e0u: goto label_3a75e0;
        case 0x3a75e4u: goto label_3a75e4;
        case 0x3a75e8u: goto label_3a75e8;
        case 0x3a75ecu: goto label_3a75ec;
        case 0x3a75f0u: goto label_3a75f0;
        case 0x3a75f4u: goto label_3a75f4;
        case 0x3a75f8u: goto label_3a75f8;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7600u: goto label_3a7600;
        case 0x3a7604u: goto label_3a7604;
        case 0x3a7608u: goto label_3a7608;
        case 0x3a760cu: goto label_3a760c;
        case 0x3a7610u: goto label_3a7610;
        case 0x3a7614u: goto label_3a7614;
        case 0x3a7618u: goto label_3a7618;
        case 0x3a761cu: goto label_3a761c;
        case 0x3a7620u: goto label_3a7620;
        case 0x3a7624u: goto label_3a7624;
        case 0x3a7628u: goto label_3a7628;
        case 0x3a762cu: goto label_3a762c;
        case 0x3a7630u: goto label_3a7630;
        case 0x3a7634u: goto label_3a7634;
        case 0x3a7638u: goto label_3a7638;
        case 0x3a763cu: goto label_3a763c;
        case 0x3a7640u: goto label_3a7640;
        case 0x3a7644u: goto label_3a7644;
        case 0x3a7648u: goto label_3a7648;
        case 0x3a764cu: goto label_3a764c;
        case 0x3a7650u: goto label_3a7650;
        case 0x3a7654u: goto label_3a7654;
        case 0x3a7658u: goto label_3a7658;
        case 0x3a765cu: goto label_3a765c;
        case 0x3a7660u: goto label_3a7660;
        case 0x3a7664u: goto label_3a7664;
        case 0x3a7668u: goto label_3a7668;
        case 0x3a766cu: goto label_3a766c;
        case 0x3a7670u: goto label_3a7670;
        case 0x3a7674u: goto label_3a7674;
        case 0x3a7678u: goto label_3a7678;
        case 0x3a767cu: goto label_3a767c;
        case 0x3a7680u: goto label_3a7680;
        case 0x3a7684u: goto label_3a7684;
        case 0x3a7688u: goto label_3a7688;
        case 0x3a768cu: goto label_3a768c;
        case 0x3a7690u: goto label_3a7690;
        case 0x3a7694u: goto label_3a7694;
        case 0x3a7698u: goto label_3a7698;
        case 0x3a769cu: goto label_3a769c;
        case 0x3a76a0u: goto label_3a76a0;
        case 0x3a76a4u: goto label_3a76a4;
        case 0x3a76a8u: goto label_3a76a8;
        case 0x3a76acu: goto label_3a76ac;
        case 0x3a76b0u: goto label_3a76b0;
        case 0x3a76b4u: goto label_3a76b4;
        case 0x3a76b8u: goto label_3a76b8;
        case 0x3a76bcu: goto label_3a76bc;
        case 0x3a76c0u: goto label_3a76c0;
        case 0x3a76c4u: goto label_3a76c4;
        case 0x3a76c8u: goto label_3a76c8;
        case 0x3a76ccu: goto label_3a76cc;
        case 0x3a76d0u: goto label_3a76d0;
        case 0x3a76d4u: goto label_3a76d4;
        case 0x3a76d8u: goto label_3a76d8;
        case 0x3a76dcu: goto label_3a76dc;
        case 0x3a76e0u: goto label_3a76e0;
        case 0x3a76e4u: goto label_3a76e4;
        case 0x3a76e8u: goto label_3a76e8;
        case 0x3a76ecu: goto label_3a76ec;
        case 0x3a76f0u: goto label_3a76f0;
        case 0x3a76f4u: goto label_3a76f4;
        case 0x3a76f8u: goto label_3a76f8;
        case 0x3a76fcu: goto label_3a76fc;
        case 0x3a7700u: goto label_3a7700;
        case 0x3a7704u: goto label_3a7704;
        case 0x3a7708u: goto label_3a7708;
        case 0x3a770cu: goto label_3a770c;
        case 0x3a7710u: goto label_3a7710;
        case 0x3a7714u: goto label_3a7714;
        case 0x3a7718u: goto label_3a7718;
        case 0x3a771cu: goto label_3a771c;
        case 0x3a7720u: goto label_3a7720;
        case 0x3a7724u: goto label_3a7724;
        case 0x3a7728u: goto label_3a7728;
        case 0x3a772cu: goto label_3a772c;
        case 0x3a7730u: goto label_3a7730;
        case 0x3a7734u: goto label_3a7734;
        case 0x3a7738u: goto label_3a7738;
        case 0x3a773cu: goto label_3a773c;
        case 0x3a7740u: goto label_3a7740;
        case 0x3a7744u: goto label_3a7744;
        case 0x3a7748u: goto label_3a7748;
        case 0x3a774cu: goto label_3a774c;
        case 0x3a7750u: goto label_3a7750;
        case 0x3a7754u: goto label_3a7754;
        case 0x3a7758u: goto label_3a7758;
        case 0x3a775cu: goto label_3a775c;
        case 0x3a7760u: goto label_3a7760;
        case 0x3a7764u: goto label_3a7764;
        case 0x3a7768u: goto label_3a7768;
        case 0x3a776cu: goto label_3a776c;
        case 0x3a7770u: goto label_3a7770;
        case 0x3a7774u: goto label_3a7774;
        case 0x3a7778u: goto label_3a7778;
        case 0x3a777cu: goto label_3a777c;
        case 0x3a7780u: goto label_3a7780;
        case 0x3a7784u: goto label_3a7784;
        case 0x3a7788u: goto label_3a7788;
        case 0x3a778cu: goto label_3a778c;
        case 0x3a7790u: goto label_3a7790;
        case 0x3a7794u: goto label_3a7794;
        case 0x3a7798u: goto label_3a7798;
        case 0x3a779cu: goto label_3a779c;
        case 0x3a77a0u: goto label_3a77a0;
        case 0x3a77a4u: goto label_3a77a4;
        case 0x3a77a8u: goto label_3a77a8;
        case 0x3a77acu: goto label_3a77ac;
        case 0x3a77b0u: goto label_3a77b0;
        case 0x3a77b4u: goto label_3a77b4;
        case 0x3a77b8u: goto label_3a77b8;
        case 0x3a77bcu: goto label_3a77bc;
        case 0x3a77c0u: goto label_3a77c0;
        case 0x3a77c4u: goto label_3a77c4;
        case 0x3a77c8u: goto label_3a77c8;
        case 0x3a77ccu: goto label_3a77cc;
        case 0x3a77d0u: goto label_3a77d0;
        case 0x3a77d4u: goto label_3a77d4;
        case 0x3a77d8u: goto label_3a77d8;
        case 0x3a77dcu: goto label_3a77dc;
        case 0x3a77e0u: goto label_3a77e0;
        case 0x3a77e4u: goto label_3a77e4;
        case 0x3a77e8u: goto label_3a77e8;
        case 0x3a77ecu: goto label_3a77ec;
        case 0x3a77f0u: goto label_3a77f0;
        case 0x3a77f4u: goto label_3a77f4;
        case 0x3a77f8u: goto label_3a77f8;
        case 0x3a77fcu: goto label_3a77fc;
        case 0x3a7800u: goto label_3a7800;
        case 0x3a7804u: goto label_3a7804;
        case 0x3a7808u: goto label_3a7808;
        case 0x3a780cu: goto label_3a780c;
        case 0x3a7810u: goto label_3a7810;
        case 0x3a7814u: goto label_3a7814;
        case 0x3a7818u: goto label_3a7818;
        case 0x3a781cu: goto label_3a781c;
        case 0x3a7820u: goto label_3a7820;
        case 0x3a7824u: goto label_3a7824;
        case 0x3a7828u: goto label_3a7828;
        case 0x3a782cu: goto label_3a782c;
        case 0x3a7830u: goto label_3a7830;
        case 0x3a7834u: goto label_3a7834;
        case 0x3a7838u: goto label_3a7838;
        case 0x3a783cu: goto label_3a783c;
        case 0x3a7840u: goto label_3a7840;
        case 0x3a7844u: goto label_3a7844;
        case 0x3a7848u: goto label_3a7848;
        case 0x3a784cu: goto label_3a784c;
        case 0x3a7850u: goto label_3a7850;
        case 0x3a7854u: goto label_3a7854;
        case 0x3a7858u: goto label_3a7858;
        case 0x3a785cu: goto label_3a785c;
        case 0x3a7860u: goto label_3a7860;
        case 0x3a7864u: goto label_3a7864;
        case 0x3a7868u: goto label_3a7868;
        case 0x3a786cu: goto label_3a786c;
        case 0x3a7870u: goto label_3a7870;
        case 0x3a7874u: goto label_3a7874;
        case 0x3a7878u: goto label_3a7878;
        case 0x3a787cu: goto label_3a787c;
        case 0x3a7880u: goto label_3a7880;
        case 0x3a7884u: goto label_3a7884;
        case 0x3a7888u: goto label_3a7888;
        case 0x3a788cu: goto label_3a788c;
        case 0x3a7890u: goto label_3a7890;
        case 0x3a7894u: goto label_3a7894;
        case 0x3a7898u: goto label_3a7898;
        case 0x3a789cu: goto label_3a789c;
        case 0x3a78a0u: goto label_3a78a0;
        case 0x3a78a4u: goto label_3a78a4;
        default: break;
    }

    ctx->pc = 0x3a74f8u;

label_3a74f8:
    // 0x3a74f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a74f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a74fc:
    // 0x3a74fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a74fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a7500:
    // 0x3a7500: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a7500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a7504:
    // 0x3a7504: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7508:
    // 0x3a7508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3a750c:
    // 0x3a750c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a750cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a7510:
    // 0x3a7510: 0x68a2000b  ldl         $v0, 0xB($a1)
    ctx->pc = 0x3a7510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a7514:
    // 0x3a7514: 0x6ca20004  ldr         $v0, 0x4($a1)
    ctx->pc = 0x3a7514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a7518:
    // 0x3a7518: 0x68a30013  ldl         $v1, 0x13($a1)
    ctx->pc = 0x3a7518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a751c:
    // 0x3a751c: 0x6ca3000c  ldr         $v1, 0xC($a1)
    ctx->pc = 0x3a751cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a7520:
    // 0x3a7520: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x3a7520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7524:
    // 0x3a7524: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x3a7524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7528:
    // 0x3a7528: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x3a7528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a752c:
    // 0x3a752c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x3a752cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7530:
    // 0x3a7530: 0x68a2001b  ldl         $v0, 0x1B($a1)
    ctx->pc = 0x3a7530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a7534:
    // 0x3a7534: 0x6ca20014  ldr         $v0, 0x14($a1)
    ctx->pc = 0x3a7534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a7538:
    // 0x3a7538: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x3a7538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a753c:
    // 0x3a753c: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x3a753cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7540:
    // 0x3a7540: 0x68a70023  ldl         $a3, 0x23($a1)
    ctx->pc = 0x3a7540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3a7544:
    // 0x3a7544: 0x6ca7001c  ldr         $a3, 0x1C($a1)
    ctx->pc = 0x3a7544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3a7548:
    // 0x3a7548: 0x68a2002b  ldl         $v0, 0x2B($a1)
    ctx->pc = 0x3a7548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a754c:
    // 0x3a754c: 0x6ca20024  ldr         $v0, 0x24($a1)
    ctx->pc = 0x3a754cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a7550:
    // 0x3a7550: 0xb207001f  sdl         $a3, 0x1F($s0)
    ctx->pc = 0x3a7550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7554:
    // 0x3a7554: 0xb6070018  sdr         $a3, 0x18($s0)
    ctx->pc = 0x3a7554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7558:
    // 0x3a7558: 0xb2020027  sdl         $v0, 0x27($s0)
    ctx->pc = 0x3a7558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a755c:
    // 0x3a755c: 0xb6020020  sdr         $v0, 0x20($s0)
    ctx->pc = 0x3a755cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7560:
    // 0x3a7560: 0x68a60033  ldl         $a2, 0x33($a1)
    ctx->pc = 0x3a7560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3a7564:
    // 0x3a7564: 0x6ca6002c  ldr         $a2, 0x2C($a1)
    ctx->pc = 0x3a7564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3a7568:
    // 0x3a7568: 0xb206002f  sdl         $a2, 0x2F($s0)
    ctx->pc = 0x3a7568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a756c:
    // 0x3a756c: 0xb6060028  sdr         $a2, 0x28($s0)
    ctx->pc = 0x3a756cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7570:
    // 0x3a7570: 0x68a4003b  ldl         $a0, 0x3B($a1)
    ctx->pc = 0x3a7570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3a7574:
    // 0x3a7574: 0x6ca40034  ldr         $a0, 0x34($a1)
    ctx->pc = 0x3a7574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3a7578:
    // 0x3a7578: 0x68a60043  ldl         $a2, 0x43($a1)
    ctx->pc = 0x3a7578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3a757c:
    // 0x3a757c: 0x6ca6003c  ldr         $a2, 0x3C($a1)
    ctx->pc = 0x3a757cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3a7580:
    // 0x3a7580: 0xb2040037  sdl         $a0, 0x37($s0)
    ctx->pc = 0x3a7580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7584:
    // 0x3a7584: 0xb6040030  sdr         $a0, 0x30($s0)
    ctx->pc = 0x3a7584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7588:
    // 0x3a7588: 0xb206003f  sdl         $a2, 0x3F($s0)
    ctx->pc = 0x3a7588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a758c:
    // 0x3a758c: 0xb6060038  sdr         $a2, 0x38($s0)
    ctx->pc = 0x3a758cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a7590:
    // 0x3a7590: 0x68a3004b  ldl         $v1, 0x4B($a1)
    ctx->pc = 0x3a7590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 75); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a7594:
    // 0x3a7594: 0x6ca30044  ldr         $v1, 0x44($a1)
    ctx->pc = 0x3a7594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 68); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a7598:
    // 0x3a7598: 0xb2030047  sdl         $v1, 0x47($s0)
    ctx->pc = 0x3a7598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a759c:
    // 0x3a759c: 0xb6030040  sdr         $v1, 0x40($s0)
    ctx->pc = 0x3a759cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75a0:
    // 0x3a75a0: 0x68a20053  ldl         $v0, 0x53($a1)
    ctx->pc = 0x3a75a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 83); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3a75a4:
    // 0x3a75a4: 0x6ca2004c  ldr         $v0, 0x4C($a1)
    ctx->pc = 0x3a75a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 76); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3a75a8:
    // 0x3a75a8: 0x68a3005b  ldl         $v1, 0x5B($a1)
    ctx->pc = 0x3a75a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3a75ac:
    // 0x3a75ac: 0x6ca30054  ldr         $v1, 0x54($a1)
    ctx->pc = 0x3a75acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3a75b0:
    // 0x3a75b0: 0xb202004f  sdl         $v0, 0x4F($s0)
    ctx->pc = 0x3a75b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75b4:
    // 0x3a75b4: 0xb6020048  sdr         $v0, 0x48($s0)
    ctx->pc = 0x3a75b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75b8:
    // 0x3a75b8: 0xb2030057  sdl         $v1, 0x57($s0)
    ctx->pc = 0x3a75b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75bc:
    // 0x3a75bc: 0xb6030050  sdr         $v1, 0x50($s0)
    ctx->pc = 0x3a75bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75c0:
    // 0x3a75c0: 0x68a70063  ldl         $a3, 0x63($a1)
    ctx->pc = 0x3a75c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3a75c4:
    // 0x3a75c4: 0x6ca7005c  ldr         $a3, 0x5C($a1)
    ctx->pc = 0x3a75c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3a75c8:
    // 0x3a75c8: 0xb207005f  sdl         $a3, 0x5F($s0)
    ctx->pc = 0x3a75c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75cc:
    // 0x3a75cc: 0xb6070058  sdr         $a3, 0x58($s0)
    ctx->pc = 0x3a75ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3a75d0:
    // 0x3a75d0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3a75d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a75d4:
    // 0x3a75d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a75d8:
    // 0x3a75d8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3a75d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3a75dc:
    // 0x3a75dc: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3a75dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a75e0:
    // 0x3a75e0: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x3a75e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a75e4:
    // 0x3a75e4: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_3a75e8:
    // 0x3a75e8: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x3a75e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a75ec:
    // 0x3a75ec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3a75ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a75f0:
    // 0x3a75f0: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_3a75f4:
    // 0x3a75f4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x3a75f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a75f8:
    // 0x3a75f8: 0xa2060060  sb          $a2, 0x60($s0)
    ctx->pc = 0x3a75f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 6));
label_3a75fc:
    // 0x3a75fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a75fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a7600:
    // 0x3a7600: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3a7600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a7604:
    // 0x3a7604: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x3a7604u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
label_3a7608:
    // 0x3a7608: 0xa2040062  sb          $a0, 0x62($s0)
    ctx->pc = 0x3a7608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 4));
label_3a760c:
    // 0x3a760c: 0xa2020063  sb          $v0, 0x63($s0)
    ctx->pc = 0x3a760cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 2));
label_3a7610:
    // 0x3a7610: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x3a7610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_3a7614:
    // 0x3a7614: 0xae030064  sw          $v1, 0x64($s0)
    ctx->pc = 0x3a7614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
label_3a7618:
    // 0x3a7618: 0xc4a00068  lwc1        $f0, 0x68($a1)
    ctx->pc = 0x3a7618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a761c:
    // 0x3a761c: 0x8ca2006c  lw          $v0, 0x6C($a1)
    ctx->pc = 0x3a761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
label_3a7620:
    // 0x3a7620: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3a7624:
    if (ctx->pc == 0x3A7624u) {
        ctx->pc = 0x3A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7620u;
        // 0x3a7624: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7628u;
        goto label_3a7628;
    }
    ctx->pc = 0x3A7620u;
    {
        const bool branch_taken_0x3a7620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7620u;
        // 0x3a7624: 0xe6000070  swc1        $f0, 0x70($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7620) {
            ctx->pc = 0x3A76B8u;
            goto label_3a76b8;
        }
    }
    ctx->pc = 0x3A7628u;
label_3a7628:
    // 0x3a7628: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a762c:
    // 0x3a762c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3a762cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3a7630:
    // 0x3a7630: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a7630u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7634:
    // 0x3a7634: 0xc103322  jal         func_40CC88
label_3a7638:
    if (ctx->pc == 0x3A7638u) {
        ctx->pc = 0x3A7638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7634u;
        // 0x3a7638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A763Cu;
        goto label_3a763c;
    }
    ctx->pc = 0x3A7634u;
    SET_GPR_U32(ctx, 31, 0x3A763Cu);
    ctx->pc = 0x3A7638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7634u;
    // 0x3a7638: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x3A7634u, 0x3A763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A763Cu;
label_3a763c:
    // 0x3a763c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a7640:
    if (ctx->pc == 0x3A7640u) {
        ctx->pc = 0x3A7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A763Cu;
        // 0x3a7640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7644u;
        goto label_3a7644;
    }
    ctx->pc = 0x3A763Cu;
    {
        const bool branch_taken_0x3a763c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A763Cu;
        // 0x3a7640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a763c) {
            ctx->pc = 0x3A76BCu;
            goto label_3a76bc;
        }
    }
    ctx->pc = 0x3A7644u;
label_3a7644:
    // 0x3a7644: 0xc1057ca  jal         func_415F28
label_3a7648:
    if (ctx->pc == 0x3A7648u) {
        ctx->pc = 0x3A7648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7644u;
        // 0x3a7648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A764Cu;
        goto label_3a764c;
    }
    ctx->pc = 0x3A7644u;
    SET_GPR_U32(ctx, 31, 0x3A764Cu);
    ctx->pc = 0x3A7648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7644u;
    // 0x3a7648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x415F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x415F28u, 0x3A7644u, 0x3A764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A764Cu;
label_3a764c:
    // 0x3a764c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a764cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7650:
    // 0x3a7650: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_3a7654:
    if (ctx->pc == 0x3A7654u) {
        ctx->pc = 0x3A7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7650u;
        // 0x3a7654: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7658u;
        goto label_3a7658;
    }
    ctx->pc = 0x3A7650u;
    {
        const bool branch_taken_0x3a7650 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7650) {
            ctx->pc = 0x3A7654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7650u;
            // 0x3a7654: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A76ACu;
            goto label_3a76ac;
        }
    }
    ctx->pc = 0x3A7658u;
label_3a7658:
    // 0x3a7658: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3a7658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a765c:
    // 0x3a765c: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_3a7660:
    if (ctx->pc == 0x3A7660u) {
        ctx->pc = 0x3A7660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A765Cu;
        // 0x3a7660: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7664u;
        goto label_3a7664;
    }
    ctx->pc = 0x3A765Cu;
    {
        const bool branch_taken_0x3a765c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a765c) {
            ctx->pc = 0x3A7660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A765Cu;
            // 0x3a7660: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A76ACu;
            goto label_3a76ac;
        }
    }
    ctx->pc = 0x3A7664u;
label_3a7664:
    // 0x3a7664: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3a7664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3a7668:
    // 0x3a7668: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3a7668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3a766c:
    // 0x3a766c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3a766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7670:
    // 0x3a7670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a7670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3a7674:
    // 0x3a7674: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3a7678:
    if (ctx->pc == 0x3A7678u) {
        ctx->pc = 0x3A7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7674u;
        // 0x3a7678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A767Cu;
        goto label_3a767c;
    }
    ctx->pc = 0x3A7674u;
    {
        const bool branch_taken_0x3a7674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7674u;
        // 0x3a7678: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7674) {
            ctx->pc = 0x3A7688u;
            goto label_3a7688;
        }
    }
    ctx->pc = 0x3A767Cu;
label_3a767c:
    // 0x3a767c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x3a767cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3a7680:
    // 0x3a7680: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3a7680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_3a7684:
    // 0x3a7684: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x3a7684u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3a7688:
    // 0x3a7688: 0x54c00008  bnel        $a2, $zero, . + 4 + (0x8 << 2)
label_3a768c:
    if (ctx->pc == 0x3A768Cu) {
        ctx->pc = 0x3A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7688u;
        // 0x3a768c: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7690u;
        goto label_3a7690;
    }
    ctx->pc = 0x3A7688u;
    {
        const bool branch_taken_0x3a7688 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7688) {
            ctx->pc = 0x3A768Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7688u;
            // 0x3a768c: 0x8e020064  lw          $v0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A76ACu;
            goto label_3a76ac;
        }
    }
    ctx->pc = 0x3A7690u;
label_3a7690:
    // 0x3a7690: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x3a7690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_3a7694:
    // 0x3a7694: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a7694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a7698:
    // 0x3a7698: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3a7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3a769c:
    // 0x3a769c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3a769cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3a76a0:
    // 0x3a76a0: 0x34633300  ori         $v1, $v1, 0x3300
    ctx->pc = 0x3a76a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13056);
label_3a76a4:
    // 0x3a76a4: 0xac830050  sw          $v1, 0x50($a0)
    ctx->pc = 0x3a76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 3));
label_3a76a8:
    // 0x3a76a8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3a76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3a76ac:
    // 0x3a76ac: 0xae040068  sw          $a0, 0x68($s0)
    ctx->pc = 0x3a76acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 4));
label_3a76b0:
    // 0x3a76b0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3a76b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_3a76b4:
    // 0x3a76b4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3a76b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3a76b8:
    // 0x3a76b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a76b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a76bc:
    // 0x3a76bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a76bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a76c0:
    // 0x3a76c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a76c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a76c4:
    // 0x3a76c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a76c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a76c8:
    // 0x3a76c8: 0x3e00008  jr          $ra
label_3a76cc:
    if (ctx->pc == 0x3A76CCu) {
        ctx->pc = 0x3A76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76C8u;
        // 0x3a76cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76D0u;
        goto label_3a76d0;
    }
    ctx->pc = 0x3A76C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A76CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76C8u;
        // 0x3a76cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A76C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A76D0u;
label_3a76d0:
    // 0x3a76d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3a76d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3a76d4:
    // 0x3a76d4: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x3a76d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_3a76d8:
    // 0x3a76d8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3a76d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3a76dc:
    // 0x3a76dc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3a76dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3a76e0:
    // 0x3a76e0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3a76e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3a76e4:
    // 0x3a76e4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3a76e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a76e8:
    // 0x3a76e8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3a76e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3a76ec:
    // 0x3a76ec: 0x24a5ce80  addiu       $a1, $a1, -0x3180
    ctx->pc = 0x3a76ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954624));
label_3a76f0:
    // 0x3a76f0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3a76f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3a76f4:
    // 0x3a76f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a76f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a76f8:
    // 0x3a76f8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3a76f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3a76fc:
    // 0x3a76fc: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x3a76fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3a7700:
    // 0x3a7700: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3a7700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3a7704:
    // 0x3a7704: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x3a7704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3a7708:
    // 0x3a7708: 0x8ca40500  lw          $a0, 0x500($a1)
    ctx->pc = 0x3a7708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1280)));
label_3a770c:
    // 0x3a770c: 0x8c620118  lw          $v0, 0x118($v1)
    ctx->pc = 0x3a770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 280)));
label_3a7710:
    // 0x3a7710: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3a7710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3a7714:
    // 0x3a7714: 0x40f809  jalr        $v0
label_3a7718:
    if (ctx->pc == 0x3A7718u) {
        ctx->pc = 0x3A7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7714u;
        // 0x3a7718: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A771Cu;
        goto label_3a771c;
    }
    ctx->pc = 0x3A7714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A771Cu);
        ctx->pc = 0x3A7718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7714u;
        // 0x3a7718: 0x34a501a2  ori         $a1, $a1, 0x1A2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)418);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7714u, 0x3A771Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A771Cu;
label_3a771c:
    // 0x3a771c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a771cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7720:
    // 0x3a7720: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
label_3a7724:
    if (ctx->pc == 0x3A7724u) {
        ctx->pc = 0x3A7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7720u;
        // 0x3a7724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7728u;
        goto label_3a7728;
    }
    ctx->pc = 0x3A7720u;
    {
        const bool branch_taken_0x3a7720 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7720u;
        // 0x3a7724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7720) {
            ctx->pc = 0x3A77A8u;
            goto label_3a77a8;
        }
    }
    ctx->pc = 0x3A7728u;
label_3a7728:
    // 0x3a7728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a7728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a772c:
    // 0x3a772c: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x3a772cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3a7730:
    // 0x3a7730: 0xc0bb7e6  jal         func_2EDF98
label_3a7734:
    if (ctx->pc == 0x3A7734u) {
        ctx->pc = 0x3A7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7730u;
        // 0x3a7734: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7738u;
        goto label_3a7738;
    }
    ctx->pc = 0x3A7730u;
    SET_GPR_U32(ctx, 31, 0x3A7738u);
    ctx->pc = 0x3A7734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7730u;
    // 0x3a7734: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3A7730u, 0x3A7738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7738u;
label_3a7738:
    // 0x3a7738: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3a7738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3a773c:
    // 0x3a773c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a773cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7740:
    // 0x3a7740: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3a7740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7744:
    // 0x3a7744: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3a7744u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7748:
    // 0x3a7748: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3a7748u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a774c:
    // 0x3a774c: 0xa3a30003  sb          $v1, 0x3($sp)
    ctx->pc = 0x3a774cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 3));
label_3a7750:
    // 0x3a7750: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x3a7750u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a7754:
    // 0x3a7754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7758:
    // 0x3a7758: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x3a7758u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
label_3a775c:
    // 0x3a775c: 0xc0e9e76  jal         func_3A79D8
label_3a7760:
    if (ctx->pc == 0x3A7760u) {
        ctx->pc = 0x3A7760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A775Cu;
        // 0x3a7760: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7764u;
        goto label_3a7764;
    }
    ctx->pc = 0x3A775Cu;
    SET_GPR_U32(ctx, 31, 0x3A7764u);
    ctx->pc = 0x3A7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A775Cu;
    // 0x3a7760: 0xa3a30002  sb          $v1, 0x2($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A79D8u, 0x3A775Cu, 0x3A7764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7764u;
label_3a7764:
    // 0x3a7764: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3a7764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a7768:
    // 0x3a7768: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3a7768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3a776c:
    // 0x3a776c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a776cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7770:
    // 0x3a7770: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a7770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7774:
    // 0x3a7774: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x3a7774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a7778:
    // 0x3a7778: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3a7778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3a777c:
    // 0x3a777c: 0xc0e9ecc  jal         func_3A7B30
label_3a7780:
    if (ctx->pc == 0x3A7780u) {
        ctx->pc = 0x3A7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A777Cu;
        // 0x3a7780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7784u;
        goto label_3a7784;
    }
    ctx->pc = 0x3A777Cu;
    SET_GPR_U32(ctx, 31, 0x3A7784u);
    ctx->pc = 0x3A7780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A777Cu;
    // 0x3a7780: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B30u, 0x3A777Cu, 0x3A7784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7784u;
label_3a7784:
    // 0x3a7784: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a7784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7788:
    // 0x3a7788: 0xc0e9f00  jal         func_3A7C00
label_3a778c:
    if (ctx->pc == 0x3A778Cu) {
        ctx->pc = 0x3A778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7788u;
        // 0x3a778c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7790u;
        goto label_3a7790;
    }
    ctx->pc = 0x3A7788u;
    SET_GPR_U32(ctx, 31, 0x3A7790u);
    ctx->pc = 0x3A778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7788u;
    // 0x3a778c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C00u, 0x3A7788u, 0x3A7790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7790u;
label_3a7790:
    // 0x3a7790: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3a7790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3a7794:
    // 0x3a7794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a7794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3a7798:
    // 0x3a7798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a779c:
    // 0x3a779c: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3a779cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_3a77a0:
    // 0x3a77a0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a77a4:
    if (ctx->pc == 0x3A77A4u) {
        ctx->pc = 0x3A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77A0u;
        // 0x3a77a4: 0xe6200070  swc1        $f0, 0x70($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77A8u;
        goto label_3a77a8;
    }
    ctx->pc = 0x3A77A0u;
    {
        const bool branch_taken_0x3a77a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77A0u;
        // 0x3a77a4: 0xe6200070  swc1        $f0, 0x70($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77a0) {
            ctx->pc = 0x3A77ACu;
            goto label_3a77ac;
        }
    }
    ctx->pc = 0x3A77A8u;
label_3a77a8:
    // 0x3a77a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a77a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a77ac:
    // 0x3a77ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a77acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a77b0:
    // 0x3a77b0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3a77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3a77b4:
    // 0x3a77b4: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x3a77b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3a77b8:
    // 0x3a77b8: 0xc10480a  jal         func_412028
label_3a77bc:
    if (ctx->pc == 0x3A77BCu) {
        ctx->pc = 0x3A77BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77B8u;
        // 0x3a77bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77C0u;
        goto label_3a77c0;
    }
    ctx->pc = 0x3A77B8u;
    SET_GPR_U32(ctx, 31, 0x3A77C0u);
    ctx->pc = 0x3A77BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A77B8u;
    // 0x3a77bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3A77B8u, 0x3A77C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A77C0u;
label_3a77c0:
    // 0x3a77c0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x3a77c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_3a77c4:
    // 0x3a77c4: 0x1443001a  bne         $v0, $v1, . + 4 + (0x1A << 2)
label_3a77c8:
    if (ctx->pc == 0x3A77C8u) {
        ctx->pc = 0x3A77CCu;
        goto label_3a77cc;
    }
    ctx->pc = 0x3A77C4u;
    {
        const bool branch_taken_0x3a77c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a77c4) {
            ctx->pc = 0x3A7830u;
            goto label_3a7830;
        }
    }
    ctx->pc = 0x3A77CCu;
label_3a77cc:
    // 0x3a77cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3a77ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3a77d0:
    // 0x3a77d0: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3a77d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3a77d4:
    // 0x3a77d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a77d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3a77d8:
    // 0x3a77d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3a77d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3a77dc:
    // 0x3a77dc: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x3a77dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3a77e0:
    // 0x3a77e0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a77e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a77e4:
    // 0x3a77e4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3a77e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3a77e8:
    // 0x3a77e8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3a77e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3a77ec:
    // 0x3a77ec: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a77ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a77f0:
    // 0x3a77f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3a77f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3a77f4:
    // 0x3a77f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3a77f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3a77f8:
    // 0x3a77f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3a77f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3a77fc:
    // 0x3a77fc: 0xa2050060  sb          $a1, 0x60($s0)
    ctx->pc = 0x3a77fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
label_3a7800:
    // 0x3a7800: 0xa2020061  sb          $v0, 0x61($s0)
    ctx->pc = 0x3a7800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 2));
label_3a7804:
    // 0x3a7804: 0xa2030062  sb          $v1, 0x62($s0)
    ctx->pc = 0x3a7804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 3));
label_3a7808:
    // 0x3a7808: 0xa2040063  sb          $a0, 0x63($s0)
    ctx->pc = 0x3a7808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 4));
label_3a780c:
    // 0x3a780c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a780cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a7810:
    // 0x3a7810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a7810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7814:
    // 0x3a7814: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3a7818:
    if (ctx->pc == 0x3A7818u) {
        ctx->pc = 0x3A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7814u;
        // 0x3a7818: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A781Cu;
        goto label_3a781c;
    }
    ctx->pc = 0x3A7814u;
    {
        const bool branch_taken_0x3a7814 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7814u;
        // 0x3a7818: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7814) {
            ctx->pc = 0x3A7830u;
            goto label_3a7830;
        }
    }
    ctx->pc = 0x3A781Cu;
label_3a781c:
    // 0x3a781c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a781cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7820:
    // 0x3a7820: 0xc0e9d3e  jal         func_3A74F8
label_3a7824:
    if (ctx->pc == 0x3A7824u) {
        ctx->pc = 0x3A7824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7820u;
        // 0x3a7824: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7828u;
        goto label_3a7828;
    }
    ctx->pc = 0x3A7820u;
    SET_GPR_U32(ctx, 31, 0x3A7828u);
    ctx->pc = 0x3A7824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7820u;
    // 0x3a7824: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A74F8u;
    goto label_3a74f8;
    ctx->pc = 0x3A7828u;
label_3a7828:
    // 0x3a7828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a7828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a782c:
    // 0x3a782c: 0x0  nop
    ctx->pc = 0x3a782cu;
    // NOP
label_3a7830:
    // 0x3a7830: 0x16200011  bnez        $s1, . + 4 + (0x11 << 2)
label_3a7834:
    if (ctx->pc == 0x3A7834u) {
        ctx->pc = 0x3A7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7830u;
        // 0x3a7834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7838u;
        goto label_3a7838;
    }
    ctx->pc = 0x3A7830u;
    {
        const bool branch_taken_0x3a7830 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7830u;
        // 0x3a7834: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7830) {
            ctx->pc = 0x3A7878u;
            goto label_3a7878;
        }
    }
    ctx->pc = 0x3A7838u;
label_3a7838:
    // 0x3a7838: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x3a7838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_3a783c:
    // 0x3a783c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7840:
    // 0x3a7840: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
label_3a7844:
    if (ctx->pc == 0x3A7844u) {
        ctx->pc = 0x3A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7840u;
        // 0x3a7844: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7848u;
        goto label_3a7848;
    }
    ctx->pc = 0x3A7840u;
    {
        const bool branch_taken_0x3a7840 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7840u;
        // 0x3a7844: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7840) {
            ctx->pc = 0x3A7874u;
            goto label_3a7874;
        }
    }
    ctx->pc = 0x3A7848u;
label_3a7848:
    // 0x3a7848: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x3a7848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_3a784c:
    // 0x3a784c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3a7850:
    if (ctx->pc == 0x3A7850u) {
        ctx->pc = 0x3A7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A784Cu;
        // 0x3a7850: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7854u;
        goto label_3a7854;
    }
    ctx->pc = 0x3A784Cu;
    {
        const bool branch_taken_0x3a784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A784Cu;
        // 0x3a7850: 0x2663e880  addiu       $v1, $s3, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a784c) {
            ctx->pc = 0x3A7860u;
            goto label_3a7860;
        }
    }
    ctx->pc = 0x3A7854u;
label_3a7854:
    // 0x3a7854: 0xc10822c  jal         func_4208B0
label_3a7858:
    if (ctx->pc == 0x3A7858u) {
        ctx->pc = 0x3A785Cu;
        goto label_3a785c;
    }
    ctx->pc = 0x3A7854u;
    SET_GPR_U32(ctx, 31, 0x3A785Cu);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3A7854u, 0x3A785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A785Cu;
label_3a785c:
    // 0x3a785c: 0x2663e880  addiu       $v1, $s3, -0x1780
    ctx->pc = 0x3a785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961280));
label_3a7860:
    // 0x3a7860: 0x2686ce80  addiu       $a2, $s4, -0x3180
    ctx->pc = 0x3a7860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954624));
label_3a7864:
    // 0x3a7864: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x3a7864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_3a7868:
    // 0x3a7868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a7868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a786c:
    // 0x3a786c: 0x40f809  jalr        $v0
label_3a7870:
    if (ctx->pc == 0x3A7870u) {
        ctx->pc = 0x3A7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A786Cu;
        // 0x3a7870: 0x8cc40500  lw          $a0, 0x500($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7874u;
        goto label_3a7874;
    }
    ctx->pc = 0x3A786Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A7874u);
        ctx->pc = 0x3A7870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A786Cu;
        // 0x3a7870: 0x8cc40500  lw          $a0, 0x500($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A786Cu, 0x3A7874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7874u;
label_3a7874:
    // 0x3a7874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7878:
    // 0x3a7878: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3a7878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3a787c:
    // 0x3a787c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3a787cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3a7880:
    // 0x3a7880: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3a7880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3a7884:
    // 0x3a7884: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3a7884u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a7888:
    // 0x3a7888: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3a7888u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3a788c:
    // 0x3a788c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3a788cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3a7890:
    // 0x3a7890: 0x3e00008  jr          $ra
label_3a7894:
    if (ctx->pc == 0x3A7894u) {
        ctx->pc = 0x3A7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7890u;
        // 0x3a7894: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7898u;
        goto label_3a7898;
    }
    ctx->pc = 0x3A7890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7890u;
        // 0x3a7894: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7898u;
label_3a7898:
    // 0x3a7898: 0xaf84aa9c  sw          $a0, -0x5564($gp)
    ctx->pc = 0x3a7898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294945436), GPR_U32(ctx, 4));
label_3a789c:
    // 0x3a789c: 0x3e00008  jr          $ra
label_3a78a0:
    if (ctx->pc == 0x3A78A0u) {
        ctx->pc = 0x3A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A789Cu;
        // 0x3a78a0: 0xaf85aaa0  sw          $a1, -0x5560($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945440), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78A4u;
        goto label_3a78a4;
    }
    ctx->pc = 0x3A789Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A78A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A789Cu;
        // 0x3a78a0: 0xaf85aaa0  sw          $a1, -0x5560($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294945440), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A789Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A78A4u;
label_3a78a4:
    // 0x3a78a4: 0x0  nop
    ctx->pc = 0x3a78a4u;
    // NOP
    ctx->pc = 0x3a78a8u;
}
