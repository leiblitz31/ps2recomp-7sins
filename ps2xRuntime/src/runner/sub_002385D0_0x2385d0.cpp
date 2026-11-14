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

// Function: sub_002385D0
// Address: 0x2385d0 - 0x238930
void sub_002385D0_0x2385d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002385D0_0x2385d0");
#endif

    switch (ctx->pc) {
        case 0x2385d0u: goto label_2385d0;
        case 0x2385d4u: goto label_2385d4;
        case 0x2385d8u: goto label_2385d8;
        case 0x2385dcu: goto label_2385dc;
        case 0x2385e0u: goto label_2385e0;
        case 0x2385e4u: goto label_2385e4;
        case 0x2385e8u: goto label_2385e8;
        case 0x2385ecu: goto label_2385ec;
        case 0x2385f0u: goto label_2385f0;
        case 0x2385f4u: goto label_2385f4;
        case 0x2385f8u: goto label_2385f8;
        case 0x2385fcu: goto label_2385fc;
        case 0x238600u: goto label_238600;
        case 0x238604u: goto label_238604;
        case 0x238608u: goto label_238608;
        case 0x23860cu: goto label_23860c;
        case 0x238610u: goto label_238610;
        case 0x238614u: goto label_238614;
        case 0x238618u: goto label_238618;
        case 0x23861cu: goto label_23861c;
        case 0x238620u: goto label_238620;
        case 0x238624u: goto label_238624;
        case 0x238628u: goto label_238628;
        case 0x23862cu: goto label_23862c;
        case 0x238630u: goto label_238630;
        case 0x238634u: goto label_238634;
        case 0x238638u: goto label_238638;
        case 0x23863cu: goto label_23863c;
        case 0x238640u: goto label_238640;
        case 0x238644u: goto label_238644;
        case 0x238648u: goto label_238648;
        case 0x23864cu: goto label_23864c;
        case 0x238650u: goto label_238650;
        case 0x238654u: goto label_238654;
        case 0x238658u: goto label_238658;
        case 0x23865cu: goto label_23865c;
        case 0x238660u: goto label_238660;
        case 0x238664u: goto label_238664;
        case 0x238668u: goto label_238668;
        case 0x23866cu: goto label_23866c;
        case 0x238670u: goto label_238670;
        case 0x238674u: goto label_238674;
        case 0x238678u: goto label_238678;
        case 0x23867cu: goto label_23867c;
        case 0x238680u: goto label_238680;
        case 0x238684u: goto label_238684;
        case 0x238688u: goto label_238688;
        case 0x23868cu: goto label_23868c;
        case 0x238690u: goto label_238690;
        case 0x238694u: goto label_238694;
        case 0x238698u: goto label_238698;
        case 0x23869cu: goto label_23869c;
        case 0x2386a0u: goto label_2386a0;
        case 0x2386a4u: goto label_2386a4;
        case 0x2386a8u: goto label_2386a8;
        case 0x2386acu: goto label_2386ac;
        case 0x2386b0u: goto label_2386b0;
        case 0x2386b4u: goto label_2386b4;
        case 0x2386b8u: goto label_2386b8;
        case 0x2386bcu: goto label_2386bc;
        case 0x2386c0u: goto label_2386c0;
        case 0x2386c4u: goto label_2386c4;
        case 0x2386c8u: goto label_2386c8;
        case 0x2386ccu: goto label_2386cc;
        case 0x2386d0u: goto label_2386d0;
        case 0x2386d4u: goto label_2386d4;
        case 0x2386d8u: goto label_2386d8;
        case 0x2386dcu: goto label_2386dc;
        case 0x2386e0u: goto label_2386e0;
        case 0x2386e4u: goto label_2386e4;
        case 0x2386e8u: goto label_2386e8;
        case 0x2386ecu: goto label_2386ec;
        case 0x2386f0u: goto label_2386f0;
        case 0x2386f4u: goto label_2386f4;
        case 0x2386f8u: goto label_2386f8;
        case 0x2386fcu: goto label_2386fc;
        case 0x238700u: goto label_238700;
        case 0x238704u: goto label_238704;
        case 0x238708u: goto label_238708;
        case 0x23870cu: goto label_23870c;
        case 0x238710u: goto label_238710;
        case 0x238714u: goto label_238714;
        case 0x238718u: goto label_238718;
        case 0x23871cu: goto label_23871c;
        case 0x238720u: goto label_238720;
        case 0x238724u: goto label_238724;
        case 0x238728u: goto label_238728;
        case 0x23872cu: goto label_23872c;
        case 0x238730u: goto label_238730;
        case 0x238734u: goto label_238734;
        case 0x238738u: goto label_238738;
        case 0x23873cu: goto label_23873c;
        case 0x238740u: goto label_238740;
        case 0x238744u: goto label_238744;
        case 0x238748u: goto label_238748;
        case 0x23874cu: goto label_23874c;
        case 0x238750u: goto label_238750;
        case 0x238754u: goto label_238754;
        case 0x238758u: goto label_238758;
        case 0x23875cu: goto label_23875c;
        case 0x238760u: goto label_238760;
        case 0x238764u: goto label_238764;
        case 0x238768u: goto label_238768;
        case 0x23876cu: goto label_23876c;
        case 0x238770u: goto label_238770;
        case 0x238774u: goto label_238774;
        case 0x238778u: goto label_238778;
        case 0x23877cu: goto label_23877c;
        case 0x238780u: goto label_238780;
        case 0x238784u: goto label_238784;
        case 0x238788u: goto label_238788;
        case 0x23878cu: goto label_23878c;
        case 0x238790u: goto label_238790;
        case 0x238794u: goto label_238794;
        case 0x238798u: goto label_238798;
        case 0x23879cu: goto label_23879c;
        case 0x2387a0u: goto label_2387a0;
        case 0x2387a4u: goto label_2387a4;
        case 0x2387a8u: goto label_2387a8;
        case 0x2387acu: goto label_2387ac;
        case 0x2387b0u: goto label_2387b0;
        case 0x2387b4u: goto label_2387b4;
        case 0x2387b8u: goto label_2387b8;
        case 0x2387bcu: goto label_2387bc;
        case 0x2387c0u: goto label_2387c0;
        case 0x2387c4u: goto label_2387c4;
        case 0x2387c8u: goto label_2387c8;
        case 0x2387ccu: goto label_2387cc;
        case 0x2387d0u: goto label_2387d0;
        case 0x2387d4u: goto label_2387d4;
        case 0x2387d8u: goto label_2387d8;
        case 0x2387dcu: goto label_2387dc;
        case 0x2387e0u: goto label_2387e0;
        case 0x2387e4u: goto label_2387e4;
        case 0x2387e8u: goto label_2387e8;
        case 0x2387ecu: goto label_2387ec;
        case 0x2387f0u: goto label_2387f0;
        case 0x2387f4u: goto label_2387f4;
        case 0x2387f8u: goto label_2387f8;
        case 0x2387fcu: goto label_2387fc;
        case 0x238800u: goto label_238800;
        case 0x238804u: goto label_238804;
        case 0x238808u: goto label_238808;
        case 0x23880cu: goto label_23880c;
        case 0x238810u: goto label_238810;
        case 0x238814u: goto label_238814;
        case 0x238818u: goto label_238818;
        case 0x23881cu: goto label_23881c;
        case 0x238820u: goto label_238820;
        case 0x238824u: goto label_238824;
        case 0x238828u: goto label_238828;
        case 0x23882cu: goto label_23882c;
        case 0x238830u: goto label_238830;
        case 0x238834u: goto label_238834;
        case 0x238838u: goto label_238838;
        case 0x23883cu: goto label_23883c;
        case 0x238840u: goto label_238840;
        case 0x238844u: goto label_238844;
        case 0x238848u: goto label_238848;
        case 0x23884cu: goto label_23884c;
        case 0x238850u: goto label_238850;
        case 0x238854u: goto label_238854;
        case 0x238858u: goto label_238858;
        case 0x23885cu: goto label_23885c;
        case 0x238860u: goto label_238860;
        case 0x238864u: goto label_238864;
        case 0x238868u: goto label_238868;
        case 0x23886cu: goto label_23886c;
        case 0x238870u: goto label_238870;
        case 0x238874u: goto label_238874;
        case 0x238878u: goto label_238878;
        case 0x23887cu: goto label_23887c;
        case 0x238880u: goto label_238880;
        case 0x238884u: goto label_238884;
        case 0x238888u: goto label_238888;
        case 0x23888cu: goto label_23888c;
        case 0x238890u: goto label_238890;
        case 0x238894u: goto label_238894;
        case 0x238898u: goto label_238898;
        case 0x23889cu: goto label_23889c;
        case 0x2388a0u: goto label_2388a0;
        case 0x2388a4u: goto label_2388a4;
        case 0x2388a8u: goto label_2388a8;
        case 0x2388acu: goto label_2388ac;
        case 0x2388b0u: goto label_2388b0;
        case 0x2388b4u: goto label_2388b4;
        case 0x2388b8u: goto label_2388b8;
        case 0x2388bcu: goto label_2388bc;
        case 0x2388c0u: goto label_2388c0;
        case 0x2388c4u: goto label_2388c4;
        case 0x2388c8u: goto label_2388c8;
        case 0x2388ccu: goto label_2388cc;
        case 0x2388d0u: goto label_2388d0;
        case 0x2388d4u: goto label_2388d4;
        case 0x2388d8u: goto label_2388d8;
        case 0x2388dcu: goto label_2388dc;
        case 0x2388e0u: goto label_2388e0;
        case 0x2388e4u: goto label_2388e4;
        case 0x2388e8u: goto label_2388e8;
        case 0x2388ecu: goto label_2388ec;
        case 0x2388f0u: goto label_2388f0;
        case 0x2388f4u: goto label_2388f4;
        case 0x2388f8u: goto label_2388f8;
        case 0x2388fcu: goto label_2388fc;
        case 0x238900u: goto label_238900;
        case 0x238904u: goto label_238904;
        case 0x238908u: goto label_238908;
        case 0x23890cu: goto label_23890c;
        case 0x238910u: goto label_238910;
        case 0x238914u: goto label_238914;
        case 0x238918u: goto label_238918;
        case 0x23891cu: goto label_23891c;
        case 0x238920u: goto label_238920;
        case 0x238924u: goto label_238924;
        case 0x238928u: goto label_238928;
        case 0x23892cu: goto label_23892c;
        default: break;
    }

    ctx->pc = 0x2385d0u;

label_2385d0:
    // 0x2385d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2385d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2385d4:
    // 0x2385d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2385d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2385d8:
    // 0x2385d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2385d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2385dc:
    // 0x2385dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2385dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2385e0:
    // 0x2385e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2385e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2385e4:
    // 0x2385e4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2385e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2385e8:
    // 0x2385e8: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2385e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
label_2385ec:
    // 0x2385ec: 0xc10d510  jal         func_435440
label_2385f0:
    if (ctx->pc == 0x2385F0u) {
        ctx->pc = 0x2385F4u;
        goto label_2385f4;
    }
    ctx->pc = 0x2385ECu;
    SET_GPR_U32(ctx, 31, 0x2385F4u);
    ctx->pc = 0x435440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435440u, 0x2385ECu, 0x2385F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2385F4u;
label_2385f4:
    // 0x2385f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2385f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2385f8:
    // 0x2385f8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2385fc:
    // 0x2385fc: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2385fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_238600:
    // 0x238600: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x238600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_238604:
    // 0x238604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238608:
    // 0x238608: 0x0  nop
    ctx->pc = 0x238608u;
    // NOP
label_23860c:
    // 0x23860c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23860cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238610:
    // 0x238610: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x238610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_238614:
    // 0x238614: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x238614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_238618:
    // 0x238618: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x238618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_23861c:
    // 0x23861c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x23861cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_238620:
    // 0x238620: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238620u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238624:
    // 0x238624: 0x0  nop
    ctx->pc = 0x238624u;
    // NOP
label_238628:
    // 0x238628: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238628u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23862c:
    // 0x23862c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23862cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_238630:
    // 0x238630: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x238630u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_238634:
    // 0x238634: 0x8e110010  lw          $s1, 0x10($s0)
    ctx->pc = 0x238634u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_238638:
    // 0x238638: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x238638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_23863c:
    // 0x23863c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23863cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238640:
    // 0x238640: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x238640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238644:
    // 0x238644: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x238644u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_238648:
    // 0x238648: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_23864c:
    if (ctx->pc == 0x23864Cu) {
        ctx->pc = 0x238650u;
        goto label_238650;
    }
    ctx->pc = 0x238648u;
    {
        const bool branch_taken_0x238648 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x238648) {
            ctx->pc = 0x238664u;
            goto label_238664;
        }
    }
    ctx->pc = 0x238650u;
label_238650:
    // 0x238650: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x238650u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238654:
    // 0x238654: 0x0  nop
    ctx->pc = 0x238654u;
    // NOP
label_238658:
    // 0x238658: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23865c:
    // 0x23865c: 0x10000008  b           . + 4 + (0x8 << 2)
label_238660:
    if (ctx->pc == 0x238660u) {
        ctx->pc = 0x238664u;
        goto label_238664;
    }
    ctx->pc = 0x23865Cu;
    {
        const bool branch_taken_0x23865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23865c) {
            ctx->pc = 0x238680u;
            goto label_238680;
        }
    }
    ctx->pc = 0x238664u;
label_238664:
    // 0x238664: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x238664u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_238668:
    // 0x238668: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x238668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_23866c:
    // 0x23866c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x23866cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238670:
    // 0x238670: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238670u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238674:
    // 0x238674: 0x0  nop
    ctx->pc = 0x238674u;
    // NOP
label_238678:
    // 0x238678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23867c:
    // 0x23867c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x23867cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_238680:
    // 0x238680: 0x0  nop
    ctx->pc = 0x238680u;
    // NOP
label_238684:
    // 0x238684: 0x0  nop
    ctx->pc = 0x238684u;
    // NOP
label_238688:
    // 0x238688: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238688u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_23868c:
    // 0x23868c: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x23868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_238690:
    // 0x238690: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x238690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_238694:
    // 0x238694: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x238694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238698:
    // 0x238698: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x238698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23869c:
    // 0x23869c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x23869cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2386a0:
    // 0x2386a0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_2386a4:
    if (ctx->pc == 0x2386A4u) {
        ctx->pc = 0x2386A8u;
        goto label_2386a8;
    }
    ctx->pc = 0x2386A0u;
    {
        const bool branch_taken_0x2386a0 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x2386a0) {
            ctx->pc = 0x2386BCu;
            goto label_2386bc;
        }
    }
    ctx->pc = 0x2386A8u;
label_2386a8:
    // 0x2386a8: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2386a8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2386ac:
    // 0x2386ac: 0x0  nop
    ctx->pc = 0x2386acu;
    // NOP
label_2386b0:
    // 0x2386b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2386b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2386b4:
    // 0x2386b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2386b8:
    if (ctx->pc == 0x2386B8u) {
        ctx->pc = 0x2386BCu;
        goto label_2386bc;
    }
    ctx->pc = 0x2386B4u;
    {
        const bool branch_taken_0x2386b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2386b4) {
            ctx->pc = 0x2386D8u;
            goto label_2386d8;
        }
    }
    ctx->pc = 0x2386BCu;
label_2386bc:
    // 0x2386bc: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x2386bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_2386c0:
    // 0x2386c0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2386c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_2386c4:
    // 0x2386c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2386c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2386c8:
    // 0x2386c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2386c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2386cc:
    // 0x2386cc: 0x0  nop
    ctx->pc = 0x2386ccu;
    // NOP
label_2386d0:
    // 0x2386d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2386d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2386d4:
    // 0x2386d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2386d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2386d8:
    // 0x2386d8: 0x0  nop
    ctx->pc = 0x2386d8u;
    // NOP
label_2386dc:
    // 0x2386dc: 0x0  nop
    ctx->pc = 0x2386dcu;
    // NOP
label_2386e0:
    // 0x2386e0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2386e0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2386e4:
    // 0x2386e4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2386e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2386e8:
    // 0x2386e8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2386e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2386ec:
    // 0x2386ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2386ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2386f0:
    // 0x2386f0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
label_2386f4:
    if (ctx->pc == 0x2386F4u) {
        ctx->pc = 0x2386F8u;
        goto label_2386f8;
    }
    ctx->pc = 0x2386F0u;
    {
        const bool branch_taken_0x2386f0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x2386f0) {
            ctx->pc = 0x23870Cu;
            goto label_23870c;
        }
    }
    ctx->pc = 0x2386F8u;
label_2386f8:
    // 0x2386f8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x2386f8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2386fc:
    // 0x2386fc: 0x0  nop
    ctx->pc = 0x2386fcu;
    // NOP
label_238700:
    // 0x238700: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238700u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238704:
    // 0x238704: 0x10000008  b           . + 4 + (0x8 << 2)
label_238708:
    if (ctx->pc == 0x238708u) {
        ctx->pc = 0x23870Cu;
        goto label_23870c;
    }
    ctx->pc = 0x238704u;
    {
        const bool branch_taken_0x238704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238704) {
            ctx->pc = 0x238728u;
            goto label_238728;
        }
    }
    ctx->pc = 0x23870Cu;
label_23870c:
    // 0x23870c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x23870cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
label_238710:
    // 0x238710: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x238710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_238714:
    // 0x238714: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238718:
    // 0x238718: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238718u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23871c:
    // 0x23871c: 0x0  nop
    ctx->pc = 0x23871cu;
    // NOP
label_238720:
    // 0x238720: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238724:
    // 0x238724: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x238724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_238728:
    // 0x238728: 0x0  nop
    ctx->pc = 0x238728u;
    // NOP
label_23872c:
    // 0x23872c: 0x0  nop
    ctx->pc = 0x23872cu;
    // NOP
label_238730:
    // 0x238730: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238730u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238734:
    // 0x238734: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x238734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_238738:
    // 0x238738: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x238738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_23873c:
    // 0x23873c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23873cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_238740:
    // 0x238740: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
label_238744:
    if (ctx->pc == 0x238744u) {
        ctx->pc = 0x238748u;
        goto label_238748;
    }
    ctx->pc = 0x238740u;
    {
        const bool branch_taken_0x238740 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x238740) {
            ctx->pc = 0x23875Cu;
            goto label_23875c;
        }
    }
    ctx->pc = 0x238748u;
label_238748:
    // 0x238748: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x238748u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23874c:
    // 0x23874c: 0x0  nop
    ctx->pc = 0x23874cu;
    // NOP
label_238750:
    // 0x238750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238754:
    // 0x238754: 0x10000008  b           . + 4 + (0x8 << 2)
label_238758:
    if (ctx->pc == 0x238758u) {
        ctx->pc = 0x23875Cu;
        goto label_23875c;
    }
    ctx->pc = 0x238754u;
    {
        const bool branch_taken_0x238754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x238754) {
            ctx->pc = 0x238778u;
            goto label_238778;
        }
    }
    ctx->pc = 0x23875Cu;
label_23875c:
    // 0x23875c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x23875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_238760:
    // 0x238760: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x238760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_238764:
    // 0x238764: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x238764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_238768:
    // 0x238768: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x238768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23876c:
    // 0x23876c: 0x0  nop
    ctx->pc = 0x23876cu;
    // NOP
label_238770:
    // 0x238770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238774:
    // 0x238774: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x238774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_238778:
    // 0x238778: 0x0  nop
    ctx->pc = 0x238778u;
    // NOP
label_23877c:
    // 0x23877c: 0x0  nop
    ctx->pc = 0x23877cu;
    // NOP
label_238780:
    // 0x238780: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x238780u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_238784:
    // 0x238784: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x238784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_238788:
    // 0x238788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23878c:
    // 0x23878c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23878cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238790:
    // 0x238790: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x238790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_238794:
    // 0x238794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238798:
    // 0x238798: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23879c:
    // 0x23879c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x23879cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2387a0:
    // 0x2387a0: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2387a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2387a4:
    // 0x2387a4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387a8:
    // 0x2387a8: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2387a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2387ac:
    // 0x2387ac: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2387acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2387b0:
    // 0x2387b0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387b4:
    // 0x2387b4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2387b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_2387b8:
    // 0x2387b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2387b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2387bc:
    // 0x2387bc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387c0:
    // 0x2387c0: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x2387c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_2387c4:
    // 0x2387c4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2387c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2387c8:
    // 0x2387c8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x2387c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_2387cc:
    // 0x2387cc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2387ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2387d0:
    // 0x2387d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2387d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2387d4:
    // 0x2387d4: 0x0  nop
    ctx->pc = 0x2387d4u;
    // NOP
label_2387d8:
    // 0x2387d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2387d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2387dc:
    // 0x2387dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387e0:
    // 0x2387e0: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x2387e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_2387e4:
    // 0x2387e4: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x2387e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2387e8:
    // 0x2387e8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387ec:
    // 0x2387ec: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x2387ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
label_2387f0:
    // 0x2387f0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x2387f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2387f4:
    // 0x2387f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2387f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2387f8:
    // 0x2387f8: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x2387f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
label_2387fc:
    // 0x2387fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2387fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_238800:
    // 0x238800: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x238800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_238804:
    // 0x238804: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x238804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_238808:
    // 0x238808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23880c:
    // 0x23880c: 0x0  nop
    ctx->pc = 0x23880cu;
    // NOP
label_238810:
    // 0x238810: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238814:
    // 0x238814: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238818:
    // 0x238818: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x238818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_23881c:
    // 0x23881c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x23881cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_238820:
    // 0x238820: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x238820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_238824:
    // 0x238824: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x238824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_238828:
    // 0x238828: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238828u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23882c:
    // 0x23882c: 0x0  nop
    ctx->pc = 0x23882cu;
    // NOP
label_238830:
    // 0x238830: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_238834:
    // 0x238834: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238838:
    // 0x238838: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x238838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
label_23883c:
    // 0x23883c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x23883cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238840:
    // 0x238840: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238844:
    // 0x238844: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x238844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_238848:
    // 0x238848: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x238848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23884c:
    // 0x23884c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23884cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238850:
    // 0x238850: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x238850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
label_238854:
    // 0x238854: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x238854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_238858:
    // 0x238858: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x238858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_23885c:
    // 0x23885c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_238860:
    // 0x238860: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238860u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238864:
    // 0x238864: 0x0  nop
    ctx->pc = 0x238864u;
    // NOP
label_238868:
    // 0x238868: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x238868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_23886c:
    // 0x23886c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23886cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238870:
    // 0x238870: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x238870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_238874:
    // 0x238874: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x238874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_238878:
    // 0x238878: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_23887c:
    // 0x23887c: 0xe44000c4  swc1        $f0, 0xC4($v0)
    ctx->pc = 0x23887cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
label_238880:
    // 0x238880: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x238880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238884:
    // 0x238884: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238888:
    // 0x238888: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x238888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_23888c:
    // 0x23888c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x23888cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_238890:
    // 0x238890: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x238890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_238894:
    // 0x238894: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x238894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_238898:
    // 0x238898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x238898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23889c:
    // 0x23889c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x23889cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2388a0:
    // 0x2388a0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2388a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2388a4:
    // 0x2388a4: 0x8c42e8a0  lw          $v0, -0x1760($v0)
    ctx->pc = 0x2388a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961312)));
label_2388a8:
    // 0x2388a8: 0x40f809  jalr        $v0
label_2388ac:
    if (ctx->pc == 0x2388ACu) {
        ctx->pc = 0x2388B0u;
        goto label_2388b0;
    }
    ctx->pc = 0x2388A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2388B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2388A8u, 0x2388B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2388B0u;
label_2388b0:
    // 0x2388b0: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x2388b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
label_2388b4:
    // 0x2388b4: 0x24c6bb30  addiu       $a2, $a2, -0x44D0
    ctx->pc = 0x2388b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949680));
label_2388b8:
    // 0x2388b8: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2388b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2388bc:
    // 0x2388bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2388bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2388c0:
    // 0x2388c0: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x2388c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_2388c4:
    // 0x2388c4: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x2388c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2388c8:
    // 0x2388c8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2388c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2388cc:
    // 0x2388cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2388ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2388d0:
    // 0x2388d0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x2388d0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_2388d4:
    // 0x2388d4: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x2388d4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_2388d8:
    // 0x2388d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2388d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2388dc:
    // 0x2388dc: 0x1c80fff8  bgtz        $a0, . + 4 + (-0x8 << 2)
label_2388e0:
    if (ctx->pc == 0x2388E0u) {
        ctx->pc = 0x2388E4u;
        goto label_2388e4;
    }
    ctx->pc = 0x2388DCu;
    {
        const bool branch_taken_0x2388dc = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x2388dc) {
            ctx->pc = 0x2388C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2388c0;
        }
    }
    ctx->pc = 0x2388E4u;
label_2388e4:
    // 0x2388e4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2388e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2388e8:
    // 0x2388e8: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2388e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2388ec:
    // 0x2388ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2388ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2388f0:
    // 0x2388f0: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2388f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_2388f4:
    // 0x2388f4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x2388f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2388f8:
    // 0x2388f8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2388f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_2388fc:
    // 0x2388fc: 0x8c42e8b4  lw          $v0, -0x174C($v0)
    ctx->pc = 0x2388fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
label_238900:
    // 0x238900: 0x40f809  jalr        $v0
label_238904:
    if (ctx->pc == 0x238904u) {
        ctx->pc = 0x238908u;
        goto label_238908;
    }
    ctx->pc = 0x238900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238908u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238900u, 0x238908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x238908u;
label_238908:
    // 0x238908: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x238908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23890c:
    // 0x23890c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23890cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_238910:
    // 0x238910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_238914:
    // 0x238914: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x238914u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_238918:
    // 0x238918: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x238918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23891c:
    // 0x23891c: 0x3e00008  jr          $ra
label_238920:
    if (ctx->pc == 0x238920u) {
        ctx->pc = 0x238924u;
        goto label_238924;
    }
    ctx->pc = 0x23891Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23891Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238924u;
label_238924:
    // 0x238924: 0x0  nop
    ctx->pc = 0x238924u;
    // NOP
label_238928:
    // 0x238928: 0x0  nop
    ctx->pc = 0x238928u;
    // NOP
label_23892c:
    // 0x23892c: 0x0  nop
    ctx->pc = 0x23892cu;
    // NOP
    ctx->pc = 0x238930u;
}
