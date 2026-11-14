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

// Function: sub_002304A0
// Address: 0x2304a0 - 0x2307c0
void sub_002304A0_0x2304a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002304A0_0x2304a0");
#endif

    switch (ctx->pc) {
        case 0x2304a0u: goto label_2304a0;
        case 0x2304a4u: goto label_2304a4;
        case 0x2304a8u: goto label_2304a8;
        case 0x2304acu: goto label_2304ac;
        case 0x2304b0u: goto label_2304b0;
        case 0x2304b4u: goto label_2304b4;
        case 0x2304b8u: goto label_2304b8;
        case 0x2304bcu: goto label_2304bc;
        case 0x2304c0u: goto label_2304c0;
        case 0x2304c4u: goto label_2304c4;
        case 0x2304c8u: goto label_2304c8;
        case 0x2304ccu: goto label_2304cc;
        case 0x2304d0u: goto label_2304d0;
        case 0x2304d4u: goto label_2304d4;
        case 0x2304d8u: goto label_2304d8;
        case 0x2304dcu: goto label_2304dc;
        case 0x2304e0u: goto label_2304e0;
        case 0x2304e4u: goto label_2304e4;
        case 0x2304e8u: goto label_2304e8;
        case 0x2304ecu: goto label_2304ec;
        case 0x2304f0u: goto label_2304f0;
        case 0x2304f4u: goto label_2304f4;
        case 0x2304f8u: goto label_2304f8;
        case 0x2304fcu: goto label_2304fc;
        case 0x230500u: goto label_230500;
        case 0x230504u: goto label_230504;
        case 0x230508u: goto label_230508;
        case 0x23050cu: goto label_23050c;
        case 0x230510u: goto label_230510;
        case 0x230514u: goto label_230514;
        case 0x230518u: goto label_230518;
        case 0x23051cu: goto label_23051c;
        case 0x230520u: goto label_230520;
        case 0x230524u: goto label_230524;
        case 0x230528u: goto label_230528;
        case 0x23052cu: goto label_23052c;
        case 0x230530u: goto label_230530;
        case 0x230534u: goto label_230534;
        case 0x230538u: goto label_230538;
        case 0x23053cu: goto label_23053c;
        case 0x230540u: goto label_230540;
        case 0x230544u: goto label_230544;
        case 0x230548u: goto label_230548;
        case 0x23054cu: goto label_23054c;
        case 0x230550u: goto label_230550;
        case 0x230554u: goto label_230554;
        case 0x230558u: goto label_230558;
        case 0x23055cu: goto label_23055c;
        case 0x230560u: goto label_230560;
        case 0x230564u: goto label_230564;
        case 0x230568u: goto label_230568;
        case 0x23056cu: goto label_23056c;
        case 0x230570u: goto label_230570;
        case 0x230574u: goto label_230574;
        case 0x230578u: goto label_230578;
        case 0x23057cu: goto label_23057c;
        case 0x230580u: goto label_230580;
        case 0x230584u: goto label_230584;
        case 0x230588u: goto label_230588;
        case 0x23058cu: goto label_23058c;
        case 0x230590u: goto label_230590;
        case 0x230594u: goto label_230594;
        case 0x230598u: goto label_230598;
        case 0x23059cu: goto label_23059c;
        case 0x2305a0u: goto label_2305a0;
        case 0x2305a4u: goto label_2305a4;
        case 0x2305a8u: goto label_2305a8;
        case 0x2305acu: goto label_2305ac;
        case 0x2305b0u: goto label_2305b0;
        case 0x2305b4u: goto label_2305b4;
        case 0x2305b8u: goto label_2305b8;
        case 0x2305bcu: goto label_2305bc;
        case 0x2305c0u: goto label_2305c0;
        case 0x2305c4u: goto label_2305c4;
        case 0x2305c8u: goto label_2305c8;
        case 0x2305ccu: goto label_2305cc;
        case 0x2305d0u: goto label_2305d0;
        case 0x2305d4u: goto label_2305d4;
        case 0x2305d8u: goto label_2305d8;
        case 0x2305dcu: goto label_2305dc;
        case 0x2305e0u: goto label_2305e0;
        case 0x2305e4u: goto label_2305e4;
        case 0x2305e8u: goto label_2305e8;
        case 0x2305ecu: goto label_2305ec;
        case 0x2305f0u: goto label_2305f0;
        case 0x2305f4u: goto label_2305f4;
        case 0x2305f8u: goto label_2305f8;
        case 0x2305fcu: goto label_2305fc;
        case 0x230600u: goto label_230600;
        case 0x230604u: goto label_230604;
        case 0x230608u: goto label_230608;
        case 0x23060cu: goto label_23060c;
        case 0x230610u: goto label_230610;
        case 0x230614u: goto label_230614;
        case 0x230618u: goto label_230618;
        case 0x23061cu: goto label_23061c;
        case 0x230620u: goto label_230620;
        case 0x230624u: goto label_230624;
        case 0x230628u: goto label_230628;
        case 0x23062cu: goto label_23062c;
        case 0x230630u: goto label_230630;
        case 0x230634u: goto label_230634;
        case 0x230638u: goto label_230638;
        case 0x23063cu: goto label_23063c;
        case 0x230640u: goto label_230640;
        case 0x230644u: goto label_230644;
        case 0x230648u: goto label_230648;
        case 0x23064cu: goto label_23064c;
        case 0x230650u: goto label_230650;
        case 0x230654u: goto label_230654;
        case 0x230658u: goto label_230658;
        case 0x23065cu: goto label_23065c;
        case 0x230660u: goto label_230660;
        case 0x230664u: goto label_230664;
        case 0x230668u: goto label_230668;
        case 0x23066cu: goto label_23066c;
        case 0x230670u: goto label_230670;
        case 0x230674u: goto label_230674;
        case 0x230678u: goto label_230678;
        case 0x23067cu: goto label_23067c;
        case 0x230680u: goto label_230680;
        case 0x230684u: goto label_230684;
        case 0x230688u: goto label_230688;
        case 0x23068cu: goto label_23068c;
        case 0x230690u: goto label_230690;
        case 0x230694u: goto label_230694;
        case 0x230698u: goto label_230698;
        case 0x23069cu: goto label_23069c;
        case 0x2306a0u: goto label_2306a0;
        case 0x2306a4u: goto label_2306a4;
        case 0x2306a8u: goto label_2306a8;
        case 0x2306acu: goto label_2306ac;
        case 0x2306b0u: goto label_2306b0;
        case 0x2306b4u: goto label_2306b4;
        case 0x2306b8u: goto label_2306b8;
        case 0x2306bcu: goto label_2306bc;
        case 0x2306c0u: goto label_2306c0;
        case 0x2306c4u: goto label_2306c4;
        case 0x2306c8u: goto label_2306c8;
        case 0x2306ccu: goto label_2306cc;
        case 0x2306d0u: goto label_2306d0;
        case 0x2306d4u: goto label_2306d4;
        case 0x2306d8u: goto label_2306d8;
        case 0x2306dcu: goto label_2306dc;
        case 0x2306e0u: goto label_2306e0;
        case 0x2306e4u: goto label_2306e4;
        case 0x2306e8u: goto label_2306e8;
        case 0x2306ecu: goto label_2306ec;
        case 0x2306f0u: goto label_2306f0;
        case 0x2306f4u: goto label_2306f4;
        case 0x2306f8u: goto label_2306f8;
        case 0x2306fcu: goto label_2306fc;
        case 0x230700u: goto label_230700;
        case 0x230704u: goto label_230704;
        case 0x230708u: goto label_230708;
        case 0x23070cu: goto label_23070c;
        case 0x230710u: goto label_230710;
        case 0x230714u: goto label_230714;
        case 0x230718u: goto label_230718;
        case 0x23071cu: goto label_23071c;
        case 0x230720u: goto label_230720;
        case 0x230724u: goto label_230724;
        case 0x230728u: goto label_230728;
        case 0x23072cu: goto label_23072c;
        case 0x230730u: goto label_230730;
        case 0x230734u: goto label_230734;
        case 0x230738u: goto label_230738;
        case 0x23073cu: goto label_23073c;
        case 0x230740u: goto label_230740;
        case 0x230744u: goto label_230744;
        case 0x230748u: goto label_230748;
        case 0x23074cu: goto label_23074c;
        case 0x230750u: goto label_230750;
        case 0x230754u: goto label_230754;
        case 0x230758u: goto label_230758;
        case 0x23075cu: goto label_23075c;
        case 0x230760u: goto label_230760;
        case 0x230764u: goto label_230764;
        case 0x230768u: goto label_230768;
        case 0x23076cu: goto label_23076c;
        case 0x230770u: goto label_230770;
        case 0x230774u: goto label_230774;
        case 0x230778u: goto label_230778;
        case 0x23077cu: goto label_23077c;
        case 0x230780u: goto label_230780;
        case 0x230784u: goto label_230784;
        case 0x230788u: goto label_230788;
        case 0x23078cu: goto label_23078c;
        case 0x230790u: goto label_230790;
        case 0x230794u: goto label_230794;
        case 0x230798u: goto label_230798;
        case 0x23079cu: goto label_23079c;
        case 0x2307a0u: goto label_2307a0;
        case 0x2307a4u: goto label_2307a4;
        case 0x2307a8u: goto label_2307a8;
        case 0x2307acu: goto label_2307ac;
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b4u: goto label_2307b4;
        case 0x2307b8u: goto label_2307b8;
        case 0x2307bcu: goto label_2307bc;
        default: break;
    }

    ctx->pc = 0x2304a0u;

label_2304a0:
    // 0x2304a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2304a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2304a4:
    // 0x2304a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2304a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2304a8:
    // 0x2304a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2304a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2304ac:
    // 0x2304ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2304acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2304b0:
    // 0x2304b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2304b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2304b4:
    // 0x2304b4: 0xafa400a0  sw          $a0, 0xA0($sp)
    ctx->pc = 0x2304b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 4));
label_2304b8:
    // 0x2304b8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2304b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_2304bc:
    // 0x2304bc: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2304bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_2304c0:
    // 0x2304c0: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2304c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
label_2304c4:
    // 0x2304c4: 0xe7ac00e0  swc1        $f12, 0xE0($sp)
    ctx->pc = 0x2304c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2304c8:
    // 0x2304c8: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x2304c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
label_2304cc:
    // 0x2304cc: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x2304ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
label_2304d0:
    // 0x2304d0: 0xafaa0110  sw          $t2, 0x110($sp)
    ctx->pc = 0x2304d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 10));
label_2304d4:
    // 0x2304d4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2304d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2304d8:
    // 0x2304d8: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2304d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2304dc:
    // 0x2304dc: 0xc08c200  jal         func_230800
label_2304e0:
    if (ctx->pc == 0x2304E0u) {
        ctx->pc = 0x2304E4u;
        goto label_2304e4;
    }
    ctx->pc = 0x2304DCu;
    SET_GPR_U32(ctx, 31, 0x2304E4u);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x2304DCu, 0x2304E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2304E4u;
label_2304e4:
    // 0x2304e4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2304e8:
    if (ctx->pc == 0x2304E8u) {
        ctx->pc = 0x2304ECu;
        goto label_2304ec;
    }
    ctx->pc = 0x2304E4u;
    {
        const bool branch_taken_0x2304e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2304e4) {
            ctx->pc = 0x2304F8u;
            goto label_2304f8;
        }
    }
    ctx->pc = 0x2304ECu;
label_2304ec:
    // 0x2304ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2304ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2304f0:
    // 0x2304f0: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2304f4:
    if (ctx->pc == 0x2304F4u) {
        ctx->pc = 0x2304F8u;
        goto label_2304f8;
    }
    ctx->pc = 0x2304F0u;
    {
        const bool branch_taken_0x2304f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2304f0) {
            ctx->pc = 0x23079Cu;
            goto label_23079c;
        }
    }
    ctx->pc = 0x2304F8u;
label_2304f8:
    // 0x2304f8: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2304fc:
    // 0x2304fc: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x2304fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_230500:
    // 0x230500: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_230504:
    // 0x230504: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_230508:
    if (ctx->pc == 0x230508u) {
        ctx->pc = 0x23050Cu;
        goto label_23050c;
    }
    ctx->pc = 0x230504u;
    {
        const bool branch_taken_0x230504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230504) {
            ctx->pc = 0x230518u;
            goto label_230518;
        }
    }
    ctx->pc = 0x23050Cu;
label_23050c:
    // 0x23050c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23050cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230510:
    // 0x230510: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_230514:
    if (ctx->pc == 0x230514u) {
        ctx->pc = 0x230518u;
        goto label_230518;
    }
    ctx->pc = 0x230510u;
    {
        const bool branch_taken_0x230510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230510) {
            ctx->pc = 0x23079Cu;
            goto label_23079c;
        }
    }
    ctx->pc = 0x230518u;
label_230518:
    // 0x230518: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x230518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_23051c:
    // 0x23051c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x23051cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_230520:
    // 0x230520: 0xc0bc65a  jal         func_2F1968
label_230524:
    if (ctx->pc == 0x230524u) {
        ctx->pc = 0x230528u;
        goto label_230528;
    }
    ctx->pc = 0x230520u;
    SET_GPR_U32(ctx, 31, 0x230528u);
    ctx->pc = 0x2F1968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1968u, 0x230520u, 0x230528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230528u;
label_230528:
    // 0x230528: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x230528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_23052c:
    // 0x23052c: 0xc0eb428  jal         func_3AD0A0
label_230530:
    if (ctx->pc == 0x230530u) {
        ctx->pc = 0x230534u;
        goto label_230534;
    }
    ctx->pc = 0x23052Cu;
    SET_GPR_U32(ctx, 31, 0x230534u);
    ctx->pc = 0x3AD0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0A0u, 0x23052Cu, 0x230534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x1402001f  bne         $zero, $v0, . + 4 + (0x1F << 2)
label_230538:
    if (ctx->pc == 0x230538u) {
        ctx->pc = 0x23053Cu;
        goto label_23053c;
    }
    ctx->pc = 0x230534u;
    {
        const bool branch_taken_0x230534 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 2));
        if (branch_taken_0x230534) {
            ctx->pc = 0x2305B4u;
            goto label_2305b4;
        }
    }
    ctx->pc = 0x23053Cu;
label_23053c:
    // 0x23053c: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x23053cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_230540:
    // 0x230540: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
label_230544:
    // 0x230544: 0xc11c2f8  jal         func_470BE0
label_230548:
    if (ctx->pc == 0x230548u) {
        ctx->pc = 0x23054Cu;
        goto label_23054c;
    }
    ctx->pc = 0x230544u;
    SET_GPR_U32(ctx, 31, 0x23054Cu);
    ctx->pc = 0x470BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470BE0u, 0x230544u, 0x23054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23054Cu;
label_23054c:
    // 0x23054c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x23054cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_230550:
    // 0x230550: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x230550u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_230554:
    // 0x230554: 0x24a5b950  addiu       $a1, $a1, -0x46B0
    ctx->pc = 0x230554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949200));
label_230558:
    // 0x230558: 0xc0bc5c6  jal         func_2F1718
label_23055c:
    if (ctx->pc == 0x23055Cu) {
        ctx->pc = 0x230560u;
        goto label_230560;
    }
    ctx->pc = 0x230558u;
    SET_GPR_U32(ctx, 31, 0x230560u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x230558u, 0x230560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230560u;
label_230560:
    // 0x230560: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_230564:
    // 0x230564: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x230564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_230568:
    // 0x230568: 0xc0bc4c4  jal         func_2F1310
label_23056c:
    if (ctx->pc == 0x23056Cu) {
        ctx->pc = 0x230570u;
        goto label_230570;
    }
    ctx->pc = 0x230568u;
    SET_GPR_U32(ctx, 31, 0x230570u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x230568u, 0x230570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230570u;
label_230570:
    // 0x230570: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x230570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_230574:
    // 0x230574: 0x27859d08  addiu       $a1, $gp, -0x62F8
    ctx->pc = 0x230574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941960));
label_230578:
    // 0x230578: 0xc0bc4c4  jal         func_2F1310
label_23057c:
    if (ctx->pc == 0x23057Cu) {
        ctx->pc = 0x230580u;
        goto label_230580;
    }
    ctx->pc = 0x230578u;
    SET_GPR_U32(ctx, 31, 0x230580u);
    ctx->pc = 0x2F1310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1310u, 0x230578u, 0x230580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230580u;
label_230580:
    // 0x230580: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_230584:
    // 0x230584: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x230584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
label_230588:
    // 0x230588: 0xc107156  jal         func_41C558
label_23058c:
    if (ctx->pc == 0x23058Cu) {
        ctx->pc = 0x230590u;
        goto label_230590;
    }
    ctx->pc = 0x230588u;
    SET_GPR_U32(ctx, 31, 0x230590u);
    ctx->pc = 0x41C558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C558u, 0x230588u, 0x230590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230590u;
label_230590:
    // 0x230590: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x230590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_230594:
    // 0x230594: 0xc11c33c  jal         func_470CF0
label_230598:
    if (ctx->pc == 0x230598u) {
        ctx->pc = 0x23059Cu;
        goto label_23059c;
    }
    ctx->pc = 0x230594u;
    SET_GPR_U32(ctx, 31, 0x23059Cu);
    ctx->pc = 0x470CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470CF0u, 0x230594u, 0x23059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23059Cu;
label_23059c:
    // 0x23059c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x23059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2305a0:
    // 0x2305a0: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2305a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2305a4:
    // 0x2305a4: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x2305a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_2305a8:
    // 0x2305a8: 0x27a5009c  addiu       $a1, $sp, 0x9C
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_2305ac:
    // 0x2305ac: 0xc08c048  jal         func_230120
label_2305b0:
    if (ctx->pc == 0x2305B0u) {
        ctx->pc = 0x2305B4u;
        goto label_2305b4;
    }
    ctx->pc = 0x2305ACu;
    SET_GPR_U32(ctx, 31, 0x2305B4u);
    ctx->pc = 0x230120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230120u, 0x2305ACu, 0x2305B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305B4u;
label_2305b4:
    // 0x2305b4: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2305b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2305b8:
    // 0x2305b8: 0x2452e000  addiu       $s2, $v0, -0x2000
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_2305bc:
    // 0x2305bc: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x2305bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2305c0:
    // 0x2305c0: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2305c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_2305c4:
    // 0x2305c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2305c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2305c8:
    // 0x2305c8: 0xc08c1f0  jal         func_2307C0
label_2305cc:
    if (ctx->pc == 0x2305CCu) {
        ctx->pc = 0x2305D0u;
        goto label_2305d0;
    }
    ctx->pc = 0x2305C8u;
    SET_GPR_U32(ctx, 31, 0x2305D0u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x2305C8u, 0x2305D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305D0u;
label_2305d0:
    // 0x2305d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2305d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2305d4:
    // 0x2305d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2305d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2305d8:
    // 0x2305d8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x2305d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2305dc:
    // 0x2305dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2305e0:
    if (ctx->pc == 0x2305E0u) {
        ctx->pc = 0x2305E4u;
        goto label_2305e4;
    }
    ctx->pc = 0x2305DCu;
    {
        const bool branch_taken_0x2305dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2305dc) {
            ctx->pc = 0x23060Cu;
            goto label_23060c;
        }
    }
    ctx->pc = 0x2305E4u;
label_2305e4:
    // 0x2305e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2305e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2305e8:
    // 0x2305e8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2305e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2305ec:
    // 0x2305ec: 0xc04e87c  jal         func_13A1F0
label_2305f0:
    if (ctx->pc == 0x2305F0u) {
        ctx->pc = 0x2305F4u;
        goto label_2305f4;
    }
    ctx->pc = 0x2305ECu;
    SET_GPR_U32(ctx, 31, 0x2305F4u);
    ctx->pc = 0x13A1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1F0u, 0x2305ECu, 0x2305F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305F4u;
label_2305f4:
    // 0x2305f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2305f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2305f8:
    // 0x2305f8: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x2305f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_2305fc:
    // 0x2305fc: 0xc119c5c  jal         func_467170
label_230600:
    if (ctx->pc == 0x230600u) {
        ctx->pc = 0x230604u;
        goto label_230604;
    }
    ctx->pc = 0x2305FCu;
    SET_GPR_U32(ctx, 31, 0x230604u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2305FCu, 0x230604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230604u;
label_230604:
    // 0x230604: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x230604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230608:
    // 0x230608: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x230608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_23060c:
    // 0x23060c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x23060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230610:
    // 0x230610: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_230614:
    if (ctx->pc == 0x230614u) {
        ctx->pc = 0x230618u;
        goto label_230618;
    }
    ctx->pc = 0x230610u;
    {
        const bool branch_taken_0x230610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230610) {
            ctx->pc = 0x230634u;
            goto label_230634;
        }
    }
    ctx->pc = 0x230618u;
label_230618:
    // 0x230618: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23061c:
    // 0x23061c: 0xc08b42c  jal         func_22D0B0
label_230620:
    if (ctx->pc == 0x230620u) {
        ctx->pc = 0x230624u;
        goto label_230624;
    }
    ctx->pc = 0x23061Cu;
    SET_GPR_U32(ctx, 31, 0x230624u);
    ctx->pc = 0x22D0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D0B0u, 0x23061Cu, 0x230624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230624u;
label_230624:
    // 0x230624: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230628:
    // 0x230628: 0xc119c5c  jal         func_467170
label_23062c:
    if (ctx->pc == 0x23062Cu) {
        ctx->pc = 0x230630u;
        goto label_230630;
    }
    ctx->pc = 0x230628u;
    SET_GPR_U32(ctx, 31, 0x230630u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x230628u, 0x230630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230630u;
label_230630:
    // 0x230630: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x230630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_230634:
    // 0x230634: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x230634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_230638:
    // 0x230638: 0xc119b68  jal         func_466DA0
label_23063c:
    if (ctx->pc == 0x23063Cu) {
        ctx->pc = 0x230640u;
        goto label_230640;
    }
    ctx->pc = 0x230638u;
    SET_GPR_U32(ctx, 31, 0x230640u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x230638u, 0x230640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230640u;
label_230640:
    // 0x230640: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x230640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_230644:
    // 0x230644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x230644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230648:
    // 0x230648: 0xc0400e0  jal         func_100380
label_23064c:
    if (ctx->pc == 0x23064Cu) {
        ctx->pc = 0x230650u;
        goto label_230650;
    }
    ctx->pc = 0x230648u;
    SET_GPR_U32(ctx, 31, 0x230650u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x230648u, 0x230650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230650u;
label_230650:
    // 0x230650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230654:
    // 0x230654: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_230658:
    if (ctx->pc == 0x230658u) {
        ctx->pc = 0x23065Cu;
        goto label_23065c;
    }
    ctx->pc = 0x230654u;
    {
        const bool branch_taken_0x230654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x230654) {
            ctx->pc = 0x23068Cu;
            goto label_23068c;
        }
    }
    ctx->pc = 0x23065Cu;
label_23065c:
    // 0x23065c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x23065cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_230660:
    // 0x230660: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x230660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_230664:
    // 0x230664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_230668:
    // 0x230668: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x230668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_23066c:
    // 0x23066c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x23066cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_230670:
    // 0x230670: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x230670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230674:
    // 0x230674: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x230674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_230678:
    // 0x230678: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x230678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_23067c:
    // 0x23067c: 0xc7ae00e0  lwc1        $f14, 0xE0($sp)
    ctx->pc = 0x23067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_230680:
    // 0x230680: 0xc11d4ec  jal         func_4753B0
label_230684:
    if (ctx->pc == 0x230684u) {
        ctx->pc = 0x230688u;
        goto label_230688;
    }
    ctx->pc = 0x230680u;
    SET_GPR_U32(ctx, 31, 0x230688u);
    ctx->pc = 0x4753B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4753B0u, 0x230680u, 0x230688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230688u;
label_230688:
    // 0x230688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x230688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23068c:
    // 0x23068c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x23068cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_230690:
    // 0x230690: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x230690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_230694:
    // 0x230694: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x230694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_230698:
    // 0x230698: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x230698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_23069c:
    // 0x23069c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23069cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2306a0:
    // 0x2306a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2306a4:
    // 0x2306a4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2306a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_2306a8:
    // 0x2306a8: 0x27a6008c  addiu       $a2, $sp, 0x8C
    ctx->pc = 0x2306a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2306ac:
    // 0x2306ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2306acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2306b0:
    // 0x2306b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2306b4:
    // 0x2306b4: 0x320f809  jalr        $t9
label_2306b8:
    if (ctx->pc == 0x2306B8u) {
        ctx->pc = 0x2306BCu;
        goto label_2306bc;
    }
    ctx->pc = 0x2306B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2306BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2306B4u, 0x2306BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2306BCu;
label_2306bc:
    // 0x2306bc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2306c0:
    // 0x2306c0: 0x27a50098  addiu       $a1, $sp, 0x98
    ctx->pc = 0x2306c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_2306c4:
    // 0x2306c4: 0x27a60094  addiu       $a2, $sp, 0x94
    ctx->pc = 0x2306c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_2306c8:
    // 0x2306c8: 0xc11cb40  jal         func_472D00
label_2306cc:
    if (ctx->pc == 0x2306CCu) {
        ctx->pc = 0x2306D0u;
        goto label_2306d0;
    }
    ctx->pc = 0x2306C8u;
    SET_GPR_U32(ctx, 31, 0x2306D0u);
    ctx->pc = 0x472D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D00u, 0x2306C8u, 0x2306D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2306D0u;
label_2306d0:
    // 0x2306d0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2306d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2306d4:
    // 0x2306d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2306d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2306d8:
    // 0x2306d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2306dc:
    if (ctx->pc == 0x2306DCu) {
        ctx->pc = 0x2306E0u;
        goto label_2306e0;
    }
    ctx->pc = 0x2306D8u;
    {
        const bool branch_taken_0x2306d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2306d8) {
            ctx->pc = 0x2306F8u;
            goto label_2306f8;
        }
    }
    ctx->pc = 0x2306E0u;
label_2306e0:
    // 0x2306e0: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2306e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2306e4:
    // 0x2306e4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2306e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2306e8:
    // 0x2306e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2306e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2306ec:
    // 0x2306ec: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2306ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_2306f0:
    // 0x2306f0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2306f4:
    if (ctx->pc == 0x2306F4u) {
        ctx->pc = 0x2306F8u;
        goto label_2306f8;
    }
    ctx->pc = 0x2306F0u;
    {
        const bool branch_taken_0x2306f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2306f0) {
            ctx->pc = 0x230724u;
            goto label_230724;
        }
    }
    ctx->pc = 0x2306F8u;
label_2306f8:
    // 0x2306f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2306fc:
    // 0x2306fc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2306fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_230700:
    // 0x230700: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_230704:
    if (ctx->pc == 0x230704u) {
        ctx->pc = 0x230708u;
        goto label_230708;
    }
    ctx->pc = 0x230700u;
    {
        const bool branch_taken_0x230700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230700) {
            ctx->pc = 0x230724u;
            goto label_230724;
        }
    }
    ctx->pc = 0x230708u;
label_230708:
    // 0x230708: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x230708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23070c:
    // 0x23070c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x23070cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_230710:
    // 0x230710: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_230714:
    // 0x230714: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x230714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230718:
    // 0x230718: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x230718u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_23071c:
    // 0x23071c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x23071cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_230720:
    // 0x230720: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x230720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_230724:
    // 0x230724: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x230724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230728:
    // 0x230728: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x230728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_23072c:
    // 0x23072c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_230730:
    if (ctx->pc == 0x230730u) {
        ctx->pc = 0x230734u;
        goto label_230734;
    }
    ctx->pc = 0x23072Cu;
    {
        const bool branch_taken_0x23072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23072c) {
            ctx->pc = 0x23074Cu;
            goto label_23074c;
        }
    }
    ctx->pc = 0x230734u;
label_230734:
    // 0x230734: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x230734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230738:
    // 0x230738: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x230738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23073c:
    // 0x23073c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x23073cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230740:
    // 0x230740: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x230740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_230744:
    // 0x230744: 0x1000000c  b           . + 4 + (0xC << 2)
label_230748:
    if (ctx->pc == 0x230748u) {
        ctx->pc = 0x23074Cu;
        goto label_23074c;
    }
    ctx->pc = 0x230744u;
    {
        const bool branch_taken_0x230744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230744) {
            ctx->pc = 0x230778u;
            goto label_230778;
        }
    }
    ctx->pc = 0x23074Cu;
label_23074c:
    // 0x23074c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23074cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230750:
    // 0x230750: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x230750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_230754:
    // 0x230754: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_230758:
    if (ctx->pc == 0x230758u) {
        ctx->pc = 0x23075Cu;
        goto label_23075c;
    }
    ctx->pc = 0x230754u;
    {
        const bool branch_taken_0x230754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230754) {
            ctx->pc = 0x230778u;
            goto label_230778;
        }
    }
    ctx->pc = 0x23075Cu;
label_23075c:
    // 0x23075c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x23075cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_230760:
    // 0x230760: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_230764:
    // 0x230764: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x230764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_230768:
    // 0x230768: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x230768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23076c:
    // 0x23076c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x23076cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_230770:
    // 0x230770: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x230770u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_230774:
    // 0x230774: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x230774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_230778:
    // 0x230778: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23077c:
    // 0x23077c: 0xc7ac0098  lwc1        $f12, 0x98($sp)
    ctx->pc = 0x23077cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_230780:
    // 0x230780: 0xc7ad0094  lwc1        $f13, 0x94($sp)
    ctx->pc = 0x230780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_230784:
    // 0x230784: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230788:
    // 0x230788: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23078c:
    // 0x23078c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23078cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_230790:
    // 0x230790: 0x320f809  jalr        $t9
label_230794:
    if (ctx->pc == 0x230794u) {
        ctx->pc = 0x230798u;
        goto label_230798;
    }
    ctx->pc = 0x230790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230790u, 0x230798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230798u;
label_230798:
    // 0x230798: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_23079c:
    // 0x23079c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2307a0:
    // 0x2307a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2307a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2307a4:
    // 0x2307a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2307a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2307a8:
    // 0x2307a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2307a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2307ac:
    // 0x2307ac: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x2307acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2307b0:
    // 0x2307b0: 0x3e00008  jr          $ra
label_2307b4:
    if (ctx->pc == 0x2307B4u) {
        ctx->pc = 0x2307B8u;
        goto label_2307b8;
    }
    ctx->pc = 0x2307B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2307B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2307B8u;
label_2307b8:
    // 0x2307b8: 0x0  nop
    ctx->pc = 0x2307b8u;
    // NOP
label_2307bc:
    // 0x2307bc: 0x0  nop
    ctx->pc = 0x2307bcu;
    // NOP
    ctx->pc = 0x2307c0u;
}
