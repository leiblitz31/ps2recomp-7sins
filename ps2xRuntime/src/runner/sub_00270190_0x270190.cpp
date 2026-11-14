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

// Function: sub_00270190
// Address: 0x270190 - 0x2706b0
void sub_00270190_0x270190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270190_0x270190");
#endif

    switch (ctx->pc) {
        case 0x270190u: goto label_270190;
        case 0x270194u: goto label_270194;
        case 0x270198u: goto label_270198;
        case 0x27019cu: goto label_27019c;
        case 0x2701a0u: goto label_2701a0;
        case 0x2701a4u: goto label_2701a4;
        case 0x2701a8u: goto label_2701a8;
        case 0x2701acu: goto label_2701ac;
        case 0x2701b0u: goto label_2701b0;
        case 0x2701b4u: goto label_2701b4;
        case 0x2701b8u: goto label_2701b8;
        case 0x2701bcu: goto label_2701bc;
        case 0x2701c0u: goto label_2701c0;
        case 0x2701c4u: goto label_2701c4;
        case 0x2701c8u: goto label_2701c8;
        case 0x2701ccu: goto label_2701cc;
        case 0x2701d0u: goto label_2701d0;
        case 0x2701d4u: goto label_2701d4;
        case 0x2701d8u: goto label_2701d8;
        case 0x2701dcu: goto label_2701dc;
        case 0x2701e0u: goto label_2701e0;
        case 0x2701e4u: goto label_2701e4;
        case 0x2701e8u: goto label_2701e8;
        case 0x2701ecu: goto label_2701ec;
        case 0x2701f0u: goto label_2701f0;
        case 0x2701f4u: goto label_2701f4;
        case 0x2701f8u: goto label_2701f8;
        case 0x2701fcu: goto label_2701fc;
        case 0x270200u: goto label_270200;
        case 0x270204u: goto label_270204;
        case 0x270208u: goto label_270208;
        case 0x27020cu: goto label_27020c;
        case 0x270210u: goto label_270210;
        case 0x270214u: goto label_270214;
        case 0x270218u: goto label_270218;
        case 0x27021cu: goto label_27021c;
        case 0x270220u: goto label_270220;
        case 0x270224u: goto label_270224;
        case 0x270228u: goto label_270228;
        case 0x27022cu: goto label_27022c;
        case 0x270230u: goto label_270230;
        case 0x270234u: goto label_270234;
        case 0x270238u: goto label_270238;
        case 0x27023cu: goto label_27023c;
        case 0x270240u: goto label_270240;
        case 0x270244u: goto label_270244;
        case 0x270248u: goto label_270248;
        case 0x27024cu: goto label_27024c;
        case 0x270250u: goto label_270250;
        case 0x270254u: goto label_270254;
        case 0x270258u: goto label_270258;
        case 0x27025cu: goto label_27025c;
        case 0x270260u: goto label_270260;
        case 0x270264u: goto label_270264;
        case 0x270268u: goto label_270268;
        case 0x27026cu: goto label_27026c;
        case 0x270270u: goto label_270270;
        case 0x270274u: goto label_270274;
        case 0x270278u: goto label_270278;
        case 0x27027cu: goto label_27027c;
        case 0x270280u: goto label_270280;
        case 0x270284u: goto label_270284;
        case 0x270288u: goto label_270288;
        case 0x27028cu: goto label_27028c;
        case 0x270290u: goto label_270290;
        case 0x270294u: goto label_270294;
        case 0x270298u: goto label_270298;
        case 0x27029cu: goto label_27029c;
        case 0x2702a0u: goto label_2702a0;
        case 0x2702a4u: goto label_2702a4;
        case 0x2702a8u: goto label_2702a8;
        case 0x2702acu: goto label_2702ac;
        case 0x2702b0u: goto label_2702b0;
        case 0x2702b4u: goto label_2702b4;
        case 0x2702b8u: goto label_2702b8;
        case 0x2702bcu: goto label_2702bc;
        case 0x2702c0u: goto label_2702c0;
        case 0x2702c4u: goto label_2702c4;
        case 0x2702c8u: goto label_2702c8;
        case 0x2702ccu: goto label_2702cc;
        case 0x2702d0u: goto label_2702d0;
        case 0x2702d4u: goto label_2702d4;
        case 0x2702d8u: goto label_2702d8;
        case 0x2702dcu: goto label_2702dc;
        case 0x2702e0u: goto label_2702e0;
        case 0x2702e4u: goto label_2702e4;
        case 0x2702e8u: goto label_2702e8;
        case 0x2702ecu: goto label_2702ec;
        case 0x2702f0u: goto label_2702f0;
        case 0x2702f4u: goto label_2702f4;
        case 0x2702f8u: goto label_2702f8;
        case 0x2702fcu: goto label_2702fc;
        case 0x270300u: goto label_270300;
        case 0x270304u: goto label_270304;
        case 0x270308u: goto label_270308;
        case 0x27030cu: goto label_27030c;
        case 0x270310u: goto label_270310;
        case 0x270314u: goto label_270314;
        case 0x270318u: goto label_270318;
        case 0x27031cu: goto label_27031c;
        case 0x270320u: goto label_270320;
        case 0x270324u: goto label_270324;
        case 0x270328u: goto label_270328;
        case 0x27032cu: goto label_27032c;
        case 0x270330u: goto label_270330;
        case 0x270334u: goto label_270334;
        case 0x270338u: goto label_270338;
        case 0x27033cu: goto label_27033c;
        case 0x270340u: goto label_270340;
        case 0x270344u: goto label_270344;
        case 0x270348u: goto label_270348;
        case 0x27034cu: goto label_27034c;
        case 0x270350u: goto label_270350;
        case 0x270354u: goto label_270354;
        case 0x270358u: goto label_270358;
        case 0x27035cu: goto label_27035c;
        case 0x270360u: goto label_270360;
        case 0x270364u: goto label_270364;
        case 0x270368u: goto label_270368;
        case 0x27036cu: goto label_27036c;
        case 0x270370u: goto label_270370;
        case 0x270374u: goto label_270374;
        case 0x270378u: goto label_270378;
        case 0x27037cu: goto label_27037c;
        case 0x270380u: goto label_270380;
        case 0x270384u: goto label_270384;
        case 0x270388u: goto label_270388;
        case 0x27038cu: goto label_27038c;
        case 0x270390u: goto label_270390;
        case 0x270394u: goto label_270394;
        case 0x270398u: goto label_270398;
        case 0x27039cu: goto label_27039c;
        case 0x2703a0u: goto label_2703a0;
        case 0x2703a4u: goto label_2703a4;
        case 0x2703a8u: goto label_2703a8;
        case 0x2703acu: goto label_2703ac;
        case 0x2703b0u: goto label_2703b0;
        case 0x2703b4u: goto label_2703b4;
        case 0x2703b8u: goto label_2703b8;
        case 0x2703bcu: goto label_2703bc;
        case 0x2703c0u: goto label_2703c0;
        case 0x2703c4u: goto label_2703c4;
        case 0x2703c8u: goto label_2703c8;
        case 0x2703ccu: goto label_2703cc;
        case 0x2703d0u: goto label_2703d0;
        case 0x2703d4u: goto label_2703d4;
        case 0x2703d8u: goto label_2703d8;
        case 0x2703dcu: goto label_2703dc;
        case 0x2703e0u: goto label_2703e0;
        case 0x2703e4u: goto label_2703e4;
        case 0x2703e8u: goto label_2703e8;
        case 0x2703ecu: goto label_2703ec;
        case 0x2703f0u: goto label_2703f0;
        case 0x2703f4u: goto label_2703f4;
        case 0x2703f8u: goto label_2703f8;
        case 0x2703fcu: goto label_2703fc;
        case 0x270400u: goto label_270400;
        case 0x270404u: goto label_270404;
        case 0x270408u: goto label_270408;
        case 0x27040cu: goto label_27040c;
        case 0x270410u: goto label_270410;
        case 0x270414u: goto label_270414;
        case 0x270418u: goto label_270418;
        case 0x27041cu: goto label_27041c;
        case 0x270420u: goto label_270420;
        case 0x270424u: goto label_270424;
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        default: break;
    }

    ctx->pc = 0x270190u;

label_270190:
    // 0x270190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x270190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_270194:
    // 0x270194: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x270194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_270198:
    // 0x270198: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x270198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27019c:
    // 0x27019c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x27019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2701a0:
    // 0x2701a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2701a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2701a4:
    // 0x2701a4: 0x3e00008  jr          $ra
label_2701a8:
    if (ctx->pc == 0x2701A8u) {
        ctx->pc = 0x2701ACu;
        goto label_2701ac;
    }
    ctx->pc = 0x2701A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2701A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2701ACu;
label_2701ac:
    // 0x2701ac: 0x0  nop
    ctx->pc = 0x2701acu;
    // NOP
label_2701b0:
    // 0x2701b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2701b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2701b4:
    // 0x2701b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2701b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2701b8:
    // 0x2701b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2701b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2701bc:
    // 0x2701bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2701bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2701c0:
    // 0x2701c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2701c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2701c4:
    // 0x2701c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2701c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2701c8:
    // 0x2701c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2701c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2701cc:
    // 0x2701cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2701ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2701d0:
    // 0x2701d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2701d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2701d4:
    // 0x2701d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2701d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2701d8:
    // 0x2701d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2701d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2701dc:
    // 0x2701dc: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x2701dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_2701e0:
    // 0x2701e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2701e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2701e4:
    // 0x2701e4: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2701e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_2701e8:
    // 0x2701e8: 0xc0513f8  jal         func_144FE0
label_2701ec:
    if (ctx->pc == 0x2701ECu) {
        ctx->pc = 0x2701F0u;
        goto label_2701f0;
    }
    ctx->pc = 0x2701E8u;
    SET_GPR_U32(ctx, 31, 0x2701F0u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2701E8u, 0x2701F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2701F0u;
label_2701f0:
    // 0x2701f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2701f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2701f4:
    // 0x2701f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2701f8:
    if (ctx->pc == 0x2701F8u) {
        ctx->pc = 0x2701FCu;
        goto label_2701fc;
    }
    ctx->pc = 0x2701F4u;
    {
        const bool branch_taken_0x2701f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2701f4) {
            ctx->pc = 0x270260u;
            goto label_270260;
        }
    }
    ctx->pc = 0x2701FCu;
label_2701fc:
    // 0x2701fc: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x2701fcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_270200:
    // 0x270200: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270204:
    // 0x270204: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x270204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_270208:
    // 0x270208: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x270208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_27020c:
    // 0x27020c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27020cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270210:
    // 0x270210: 0xc09d22c  jal         func_2748B0
label_270214:
    if (ctx->pc == 0x270214u) {
        ctx->pc = 0x270218u;
        goto label_270218;
    }
    ctx->pc = 0x270210u;
    SET_GPR_U32(ctx, 31, 0x270218u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x270210u, 0x270218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270218u;
label_270218:
    // 0x270218: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x270218u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_27021c:
    // 0x27021c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_270220:
    if (ctx->pc == 0x270220u) {
        ctx->pc = 0x270224u;
        goto label_270224;
    }
    ctx->pc = 0x27021Cu;
    {
        const bool branch_taken_0x27021c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27021c) {
            ctx->pc = 0x27025Cu;
            goto label_27025c;
        }
    }
    ctx->pc = 0x270224u;
label_270224:
    // 0x270224: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x270224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270228:
    // 0x270228: 0xc09d274  jal         func_2749D0
label_27022c:
    if (ctx->pc == 0x27022Cu) {
        ctx->pc = 0x270230u;
        goto label_270230;
    }
    ctx->pc = 0x270228u;
    SET_GPR_U32(ctx, 31, 0x270230u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270228u, 0x270230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270230u;
label_270230:
    // 0x270230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270234:
    // 0x270234: 0xc09d0b8  jal         func_2742E0
label_270238:
    if (ctx->pc == 0x270238u) {
        ctx->pc = 0x27023Cu;
        goto label_27023c;
    }
    ctx->pc = 0x270234u;
    SET_GPR_U32(ctx, 31, 0x27023Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270234u, 0x27023Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27023Cu;
label_27023c:
    // 0x27023c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x27023cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_270240:
    // 0x270240: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_270244:
    if (ctx->pc == 0x270244u) {
        ctx->pc = 0x270248u;
        goto label_270248;
    }
    ctx->pc = 0x270240u;
    {
        const bool branch_taken_0x270240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270240) {
            ctx->pc = 0x27025Cu;
            goto label_27025c;
        }
    }
    ctx->pc = 0x270248u;
label_270248:
    // 0x270248: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x270248u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27024c:
    // 0x27024c: 0x92e30054  lbu         $v1, 0x54($s7)
    ctx->pc = 0x27024cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 84)));
label_270250:
    // 0x270250: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x270250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_270254:
    // 0x270254: 0x10600108  beqz        $v1, . + 4 + (0x108 << 2)
label_270258:
    if (ctx->pc == 0x270258u) {
        ctx->pc = 0x27025Cu;
        goto label_27025c;
    }
    ctx->pc = 0x270254u;
    {
        const bool branch_taken_0x270254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x270254) {
            ctx->pc = 0x270678u;
            goto label_270678;
        }
    }
    ctx->pc = 0x27025Cu;
label_27025c:
    // 0x27025c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x27025cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_270260:
    // 0x270260: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270264:
    // 0x270264: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270268:
    // 0x270268: 0xc09c064  jal         func_270190
label_27026c:
    if (ctx->pc == 0x27026Cu) {
        ctx->pc = 0x270270u;
        goto label_270270;
    }
    ctx->pc = 0x270268u;
    SET_GPR_U32(ctx, 31, 0x270270u);
    ctx->pc = 0x270190u;
    goto label_270190;
    ctx->pc = 0x270270u;
label_270270:
    // 0x270270: 0x1642ffe2  bne         $s2, $v0, . + 4 + (-0x1E << 2)
label_270274:
    if (ctx->pc == 0x270274u) {
        ctx->pc = 0x270278u;
        goto label_270278;
    }
    ctx->pc = 0x270270u;
    {
        const bool branch_taken_0x270270 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x270270) {
            ctx->pc = 0x2701FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2701fc;
        }
    }
    ctx->pc = 0x270278u;
label_270278:
    // 0x270278: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x270278u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27027c:
    // 0x27027c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x27027cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270280:
    // 0x270280: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x270280u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270284:
    // 0x270284: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x270284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270288:
    // 0x270288: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x270288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27028c:
    // 0x27028c: 0xc09bf6c  jal         func_26FDB0
label_270290:
    if (ctx->pc == 0x270290u) {
        ctx->pc = 0x270294u;
        goto label_270294;
    }
    ctx->pc = 0x27028Cu;
    SET_GPR_U32(ctx, 31, 0x270294u);
    ctx->pc = 0x26FDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FDB0u, 0x27028Cu, 0x270294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270294u;
label_270294:
    // 0x270294: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270298:
    // 0x270298: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x270298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_27029c:
    // 0x27029c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x27029cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2702a0:
    // 0x2702a0: 0xc085538  jal         func_2154E0
label_2702a4:
    if (ctx->pc == 0x2702A4u) {
        ctx->pc = 0x2702A8u;
        goto label_2702a8;
    }
    ctx->pc = 0x2702A0u;
    SET_GPR_U32(ctx, 31, 0x2702A8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2702A0u, 0x2702A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702A8u;
label_2702a8:
    // 0x2702a8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2702a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2702ac:
    // 0x2702ac: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2702acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2702b0:
    // 0x2702b0: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2702b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_2702b4:
    // 0x2702b4: 0xc0513f8  jal         func_144FE0
label_2702b8:
    if (ctx->pc == 0x2702B8u) {
        ctx->pc = 0x2702BCu;
        goto label_2702bc;
    }
    ctx->pc = 0x2702B4u;
    SET_GPR_U32(ctx, 31, 0x2702BCu);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2702B4u, 0x2702BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702BCu;
label_2702bc:
    // 0x2702bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2702bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2702c0:
    // 0x2702c0: 0x10000069  b           . + 4 + (0x69 << 2)
label_2702c4:
    if (ctx->pc == 0x2702C4u) {
        ctx->pc = 0x2702C8u;
        goto label_2702c8;
    }
    ctx->pc = 0x2702C0u;
    {
        const bool branch_taken_0x2702c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2702c0) {
            ctx->pc = 0x270468u;
            goto label_270468;
        }
    }
    ctx->pc = 0x2702C8u;
label_2702c8:
    // 0x2702c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2702c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2702cc:
    // 0x2702cc: 0xafa200dc  sw          $v0, 0xDC($sp)
    ctx->pc = 0x2702ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
label_2702d0:
    // 0x2702d0: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2702d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2702d4:
    // 0x2702d4: 0xc09d234  jal         func_2748D0
label_2702d8:
    if (ctx->pc == 0x2702D8u) {
        ctx->pc = 0x2702DCu;
        goto label_2702dc;
    }
    ctx->pc = 0x2702D4u;
    SET_GPR_U32(ctx, 31, 0x2702DCu);
    ctx->pc = 0x2748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748D0u, 0x2702D4u, 0x2702DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702DCu;
label_2702dc:
    // 0x2702dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2702dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2702e0:
    // 0x2702e0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2702e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2702e4:
    // 0x2702e4: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2702e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2702e8:
    // 0x2702e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x2702e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_2702ec:
    // 0x2702ec: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2702ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2702f0:
    // 0x2702f0: 0xc09d22c  jal         func_2748B0
label_2702f4:
    if (ctx->pc == 0x2702F4u) {
        ctx->pc = 0x2702F8u;
        goto label_2702f8;
    }
    ctx->pc = 0x2702F0u;
    SET_GPR_U32(ctx, 31, 0x2702F8u);
    ctx->pc = 0x2748B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748B0u, 0x2702F0u, 0x2702F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2702F8u;
label_2702f8:
    // 0x2702f8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x2702f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2702fc:
    // 0x2702fc: 0x14620059  bne         $v1, $v0, . + 4 + (0x59 << 2)
label_270300:
    if (ctx->pc == 0x270300u) {
        ctx->pc = 0x270304u;
        goto label_270304;
    }
    ctx->pc = 0x2702FCu;
    {
        const bool branch_taken_0x2702fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2702fc) {
            ctx->pc = 0x270464u;
            goto label_270464;
        }
    }
    ctx->pc = 0x270304u;
label_270304:
    // 0x270304: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x270304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270308:
    // 0x270308: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27030c:
    // 0x27030c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27030cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_270310:
    // 0x270310: 0x320f809  jalr        $t9
label_270314:
    if (ctx->pc == 0x270314u) {
        ctx->pc = 0x270318u;
        goto label_270318;
    }
    ctx->pc = 0x270310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x270318u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270310u, 0x270318u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270318u;
label_270318:
    // 0x270318: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x270318u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_27031c:
    // 0x27031c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x27031cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270320:
    // 0x270320: 0xc09d274  jal         func_2749D0
label_270324:
    if (ctx->pc == 0x270324u) {
        ctx->pc = 0x270328u;
        goto label_270328;
    }
    ctx->pc = 0x270320u;
    SET_GPR_U32(ctx, 31, 0x270328u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270320u, 0x270328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270328u;
label_270328:
    // 0x270328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27032c:
    // 0x27032c: 0xc09d0b8  jal         func_2742E0
label_270330:
    if (ctx->pc == 0x270330u) {
        ctx->pc = 0x270334u;
        goto label_270334;
    }
    ctx->pc = 0x27032Cu;
    SET_GPR_U32(ctx, 31, 0x270334u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x27032Cu, 0x270334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270334u;
label_270334:
    // 0x270334: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x270334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_270338:
    // 0x270338: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_27033c:
    if (ctx->pc == 0x27033Cu) {
        ctx->pc = 0x270340u;
        goto label_270340;
    }
    ctx->pc = 0x270338u;
    {
        const bool branch_taken_0x270338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270338) {
            ctx->pc = 0x270364u;
            goto label_270364;
        }
    }
    ctx->pc = 0x270340u;
label_270340:
    // 0x270340: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x270340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270344:
    // 0x270344: 0xc09d274  jal         func_2749D0
label_270348:
    if (ctx->pc == 0x270348u) {
        ctx->pc = 0x27034Cu;
        goto label_27034c;
    }
    ctx->pc = 0x270344u;
    SET_GPR_U32(ctx, 31, 0x27034Cu);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270344u, 0x27034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27034Cu;
label_27034c:
    // 0x27034c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27034cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270350:
    // 0x270350: 0xc09d0b8  jal         func_2742E0
label_270354:
    if (ctx->pc == 0x270354u) {
        ctx->pc = 0x270358u;
        goto label_270358;
    }
    ctx->pc = 0x270350u;
    SET_GPR_U32(ctx, 31, 0x270358u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270350u, 0x270358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270358u;
label_270358:
    // 0x270358: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x270358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27035c:
    // 0x27035c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_270360:
    if (ctx->pc == 0x270360u) {
        ctx->pc = 0x270364u;
        goto label_270364;
    }
    ctx->pc = 0x27035Cu;
    {
        const bool branch_taken_0x27035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27035c) {
            ctx->pc = 0x270368u;
            goto label_270368;
        }
    }
    ctx->pc = 0x270364u;
label_270364:
    // 0x270364: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x270364u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_270368:
    // 0x270368: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x270368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_27036c:
    // 0x27036c: 0xc05734c  jal         func_15CD30
label_270370:
    if (ctx->pc == 0x270370u) {
        ctx->pc = 0x270374u;
        goto label_270374;
    }
    ctx->pc = 0x27036Cu;
    SET_GPR_U32(ctx, 31, 0x270374u);
    ctx->pc = 0x15CD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CD30u, 0x27036Cu, 0x270374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270374u;
label_270374:
    // 0x270374: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_270378:
    if (ctx->pc == 0x270378u) {
        ctx->pc = 0x27037Cu;
        goto label_27037c;
    }
    ctx->pc = 0x270374u;
    {
        const bool branch_taken_0x270374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270374) {
            ctx->pc = 0x2703A8u;
            goto label_2703a8;
        }
    }
    ctx->pc = 0x27037Cu;
label_27037c:
    // 0x27037c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270380:
    // 0x270380: 0xc09d248  jal         func_274920
label_270384:
    if (ctx->pc == 0x270384u) {
        ctx->pc = 0x270388u;
        goto label_270388;
    }
    ctx->pc = 0x270380u;
    SET_GPR_U32(ctx, 31, 0x270388u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x270380u, 0x270388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270388u;
label_270388:
    // 0x270388: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x270388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27038c:
    // 0x27038c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_270390:
    if (ctx->pc == 0x270390u) {
        ctx->pc = 0x270394u;
        goto label_270394;
    }
    ctx->pc = 0x27038Cu;
    {
        const bool branch_taken_0x27038c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x27038c) {
            ctx->pc = 0x2703A8u;
            goto label_2703a8;
        }
    }
    ctx->pc = 0x270394u;
label_270394:
    // 0x270394: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x270394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270398:
    // 0x270398: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27039c:
    // 0x27039c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x27039cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_2703a0:
    // 0x2703a0: 0x320f809  jalr        $t9
label_2703a4:
    if (ctx->pc == 0x2703A4u) {
        ctx->pc = 0x2703A8u;
        goto label_2703a8;
    }
    ctx->pc = 0x2703A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2703A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703A0u, 0x2703A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2703A8u;
label_2703a8:
    // 0x2703a8: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2703a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2703ac:
    // 0x2703ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2703acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2703b0:
    // 0x2703b0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2703b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2703b4:
    // 0x2703b4: 0x320f809  jalr        $t9
label_2703b8:
    if (ctx->pc == 0x2703B8u) {
        ctx->pc = 0x2703BCu;
        goto label_2703bc;
    }
    ctx->pc = 0x2703B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2703BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2703B4u, 0x2703BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2703BCu;
label_2703bc:
    // 0x2703bc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2703c0:
    if (ctx->pc == 0x2703C0u) {
        ctx->pc = 0x2703C4u;
        goto label_2703c4;
    }
    ctx->pc = 0x2703BCu;
    {
        const bool branch_taken_0x2703bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703bc) {
            ctx->pc = 0x2703F4u;
            goto label_2703f4;
        }
    }
    ctx->pc = 0x2703C4u;
label_2703c4:
    // 0x2703c4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2703c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2703c8:
    // 0x2703c8: 0x27a500dc  addiu       $a1, $sp, 0xDC
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_2703cc:
    // 0x2703cc: 0xc09c1d8  jal         func_270760
label_2703d0:
    if (ctx->pc == 0x2703D0u) {
        ctx->pc = 0x2703D4u;
        goto label_2703d4;
    }
    ctx->pc = 0x2703CCu;
    SET_GPR_U32(ctx, 31, 0x2703D4u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x2703CCu, 0x2703D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703D4u;
label_2703d4:
    // 0x2703d4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2703d8:
    // 0x2703d8: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x2703d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_2703dc:
    // 0x2703dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2703dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2703e0:
    // 0x2703e0: 0xc09c1ac  jal         func_2706B0
label_2703e4:
    if (ctx->pc == 0x2703E4u) {
        ctx->pc = 0x2703E8u;
        goto label_2703e8;
    }
    ctx->pc = 0x2703E0u;
    SET_GPR_U32(ctx, 31, 0x2703E8u);
    ctx->pc = 0x2706B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2706B0u, 0x2703E0u, 0x2703E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703E8u;
label_2703e8:
    // 0x2703e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2703e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2703ec:
    // 0x2703ec: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2703f0:
    if (ctx->pc == 0x2703F0u) {
        ctx->pc = 0x2703F4u;
        goto label_2703f4;
    }
    ctx->pc = 0x2703ECu;
    {
        const bool branch_taken_0x2703ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2703ec) {
            ctx->pc = 0x270468u;
            goto label_270468;
        }
    }
    ctx->pc = 0x2703F4u;
label_2703f4:
    // 0x2703f4: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x2703f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_2703f8:
    // 0x2703f8: 0xc09d274  jal         func_2749D0
label_2703fc:
    if (ctx->pc == 0x2703FCu) {
        ctx->pc = 0x270400u;
        goto label_270400;
    }
    ctx->pc = 0x2703F8u;
    SET_GPR_U32(ctx, 31, 0x270400u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x2703F8u, 0x270400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270400u;
label_270400:
    // 0x270400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270404:
    // 0x270404: 0xc09d0b8  jal         func_2742E0
label_270408:
    if (ctx->pc == 0x270408u) {
        ctx->pc = 0x27040Cu;
        goto label_27040c;
    }
    ctx->pc = 0x270404u;
    SET_GPR_U32(ctx, 31, 0x27040Cu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270404u, 0x27040Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27040Cu;
label_27040c:
    // 0x27040c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x27040cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_270410:
    // 0x270410: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
label_270414:
    if (ctx->pc == 0x270414u) {
        ctx->pc = 0x270418u;
        goto label_270418;
    }
    ctx->pc = 0x270410u;
    {
        const bool branch_taken_0x270410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270410) {
            ctx->pc = 0x270460u;
            goto label_270460;
        }
    }
    ctx->pc = 0x270418u;
label_270418:
    // 0x270418: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x270418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_27041c:
    // 0x27041c: 0xc09d274  jal         func_2749D0
label_270420:
    if (ctx->pc == 0x270420u) {
        ctx->pc = 0x270424u;
        goto label_270424;
    }
    ctx->pc = 0x27041Cu;
    SET_GPR_U32(ctx, 31, 0x270424u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x27041Cu, 0x270424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270424u;
label_270424:
    // 0x270424: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270428:
    // 0x270428: 0xc09d0b8  jal         func_2742E0
label_27042c:
    if (ctx->pc == 0x27042Cu) {
        ctx->pc = 0x270430u;
        goto label_270430;
    }
    ctx->pc = 0x270428u;
    SET_GPR_U32(ctx, 31, 0x270430u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x270428u, 0x270430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270430u;
label_270430:
    // 0x270430: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x270430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_270434:
    // 0x270434: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_270438:
    if (ctx->pc == 0x270438u) {
        ctx->pc = 0x27043Cu;
        goto label_27043c;
    }
    ctx->pc = 0x270434u;
    {
        const bool branch_taken_0x270434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270434) {
            ctx->pc = 0x270460u;
            goto label_270460;
        }
    }
    ctx->pc = 0x27043Cu;
label_27043c:
    // 0x27043c: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x27043cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_270440:
    // 0x270440: 0xc09d274  jal         func_2749D0
label_270444:
    if (ctx->pc == 0x270444u) {
        ctx->pc = 0x270448u;
        goto label_270448;
    }
    ctx->pc = 0x270440u;
    SET_GPR_U32(ctx, 31, 0x270448u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x270440u, 0x270448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270448u;
label_270448:
    // 0x270448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x270448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27044c:
    // 0x27044c: 0xc09d0b8  jal         func_2742E0
label_270450:
    if (ctx->pc == 0x270450u) {
        ctx->pc = 0x270454u;
        goto label_270454;
    }
    ctx->pc = 0x27044Cu;
    SET_GPR_U32(ctx, 31, 0x270454u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x27044Cu, 0x270454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270454u;
label_270454:
    // 0x270454: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_270458:
    // 0x270458: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_27045c:
    if (ctx->pc == 0x27045Cu) {
        ctx->pc = 0x270460u;
        goto label_270460;
    }
    ctx->pc = 0x270458u;
    {
        const bool branch_taken_0x270458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270458) {
            ctx->pc = 0x270464u;
            goto label_270464;
        }
    }
    ctx->pc = 0x270460u;
label_270460:
    // 0x270460: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x270460u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_270464:
    // 0x270464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x270464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_270468:
    // 0x270468: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27046c:
    // 0x27046c: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x27046cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270470:
    // 0x270470: 0xc09c064  jal         func_270190
label_270474:
    if (ctx->pc == 0x270474u) {
        ctx->pc = 0x270478u;
        goto label_270478;
    }
    ctx->pc = 0x270470u;
    SET_GPR_U32(ctx, 31, 0x270478u);
    ctx->pc = 0x270190u;
    goto label_270190;
    ctx->pc = 0x270478u;
label_270478:
    // 0x270478: 0x1602ff93  bne         $s0, $v0, . + 4 + (-0x6D << 2)
label_27047c:
    if (ctx->pc == 0x27047Cu) {
        ctx->pc = 0x270480u;
        goto label_270480;
    }
    ctx->pc = 0x270478u;
    {
        const bool branch_taken_0x270478 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x270478) {
            ctx->pc = 0x2702C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2702c8;
        }
    }
    ctx->pc = 0x270480u;
label_270480:
    // 0x270480: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270484:
    // 0x270484: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x270484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_270488:
    // 0x270488: 0xafa200d8  sw          $v0, 0xD8($sp)
    ctx->pc = 0x270488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
label_27048c:
    // 0x27048c: 0x16b40049  bne         $s5, $s4, . + 4 + (0x49 << 2)
label_270490:
    if (ctx->pc == 0x270490u) {
        ctx->pc = 0x270494u;
        goto label_270494;
    }
    ctx->pc = 0x27048Cu;
    {
        const bool branch_taken_0x27048c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        if (branch_taken_0x27048c) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x270494u;
label_270494:
    // 0x270494: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270498:
    // 0x270498: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x270498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27049c:
    // 0x27049c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2704a0:
    if (ctx->pc == 0x2704A0u) {
        ctx->pc = 0x2704A4u;
        goto label_2704a4;
    }
    ctx->pc = 0x27049Cu;
    {
        const bool branch_taken_0x27049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27049c) {
            ctx->pc = 0x2704B8u;
            goto label_2704b8;
        }
    }
    ctx->pc = 0x2704A4u;
label_2704a4:
    // 0x2704a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2704a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2704a8:
    // 0x2704a8: 0xc09c588  jal         func_271620
label_2704ac:
    if (ctx->pc == 0x2704ACu) {
        ctx->pc = 0x2704B0u;
        goto label_2704b0;
    }
    ctx->pc = 0x2704A8u;
    SET_GPR_U32(ctx, 31, 0x2704B0u);
    ctx->pc = 0x271620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271620u, 0x2704A8u, 0x2704B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704B0u;
label_2704b0:
    // 0x2704b0: 0x10000040  b           . + 4 + (0x40 << 2)
label_2704b4:
    if (ctx->pc == 0x2704B4u) {
        ctx->pc = 0x2704B8u;
        goto label_2704b8;
    }
    ctx->pc = 0x2704B0u;
    {
        const bool branch_taken_0x2704b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704b0) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x2704B8u;
label_2704b8:
    // 0x2704b8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2704b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2704bc:
    // 0x2704bc: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2704bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2704c0:
    // 0x2704c0: 0xc09c580  jal         func_271600
label_2704c4:
    if (ctx->pc == 0x2704C4u) {
        ctx->pc = 0x2704C8u;
        goto label_2704c8;
    }
    ctx->pc = 0x2704C0u;
    SET_GPR_U32(ctx, 31, 0x2704C8u);
    ctx->pc = 0x271600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271600u, 0x2704C0u, 0x2704C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704C8u;
label_2704c8:
    // 0x2704c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2704cc:
    if (ctx->pc == 0x2704CCu) {
        ctx->pc = 0x2704D0u;
        goto label_2704d0;
    }
    ctx->pc = 0x2704C8u;
    {
        const bool branch_taken_0x2704c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704c8) {
            ctx->pc = 0x2704F4u;
            goto label_2704f4;
        }
    }
    ctx->pc = 0x2704D0u;
label_2704d0:
    // 0x2704d0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2704d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2704d4:
    // 0x2704d4: 0xc09c588  jal         func_271620
label_2704d8:
    if (ctx->pc == 0x2704D8u) {
        ctx->pc = 0x2704DCu;
        goto label_2704dc;
    }
    ctx->pc = 0x2704D4u;
    SET_GPR_U32(ctx, 31, 0x2704DCu);
    ctx->pc = 0x271620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271620u, 0x2704D4u, 0x2704DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704DCu;
label_2704dc:
    // 0x2704dc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2704dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2704e0:
    // 0x2704e0: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x2704e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_2704e4:
    // 0x2704e4: 0xc09c588  jal         func_271620
label_2704e8:
    if (ctx->pc == 0x2704E8u) {
        ctx->pc = 0x2704ECu;
        goto label_2704ec;
    }
    ctx->pc = 0x2704E4u;
    SET_GPR_U32(ctx, 31, 0x2704ECu);
    ctx->pc = 0x271620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271620u, 0x2704E4u, 0x2704ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704ECu;
label_2704ec:
    // 0x2704ec: 0x10000031  b           . + 4 + (0x31 << 2)
label_2704f0:
    if (ctx->pc == 0x2704F0u) {
        ctx->pc = 0x2704F4u;
        goto label_2704f4;
    }
    ctx->pc = 0x2704ECu;
    {
        const bool branch_taken_0x2704ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704ec) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x2704F4u;
label_2704f4:
    // 0x2704f4: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2704f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2704f8:
    // 0x2704f8: 0x90420042  lbu         $v0, 0x42($v0)
    ctx->pc = 0x2704f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 66)));
label_2704fc:
    // 0x2704fc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_270500:
    if (ctx->pc == 0x270500u) {
        ctx->pc = 0x270504u;
        goto label_270504;
    }
    ctx->pc = 0x2704FCu;
    {
        const bool branch_taken_0x2704fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2704fc) {
            ctx->pc = 0x270584u;
            goto label_270584;
        }
    }
    ctx->pc = 0x270504u;
label_270504:
    // 0x270504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270508:
    // 0x270508: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27050c:
    // 0x27050c: 0xa0430042  sb          $v1, 0x42($v0)
    ctx->pc = 0x27050cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 66), (uint8_t)GPR_U32(ctx, 3));
label_270510:
    // 0x270510: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270514:
    // 0x270514: 0x90420058  lbu         $v0, 0x58($v0)
    ctx->pc = 0x270514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
label_270518:
    // 0x270518: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_27051c:
    if (ctx->pc == 0x27051Cu) {
        ctx->pc = 0x270520u;
        goto label_270520;
    }
    ctx->pc = 0x270518u;
    {
        const bool branch_taken_0x270518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270518) {
            ctx->pc = 0x270530u;
            goto label_270530;
        }
    }
    ctx->pc = 0x270520u;
label_270520:
    // 0x270520: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270524:
    // 0x270524: 0xa0400058  sb          $zero, 0x58($v0)
    ctx->pc = 0x270524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 88), (uint8_t)GPR_U32(ctx, 0));
label_270528:
    // 0x270528: 0x10000022  b           . + 4 + (0x22 << 2)
label_27052c:
    if (ctx->pc == 0x27052Cu) {
        ctx->pc = 0x270530u;
        goto label_270530;
    }
    ctx->pc = 0x270528u;
    {
        const bool branch_taken_0x270528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270528) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x270530u;
label_270530:
    // 0x270530: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_270534:
    if (ctx->pc == 0x270534u) {
        ctx->pc = 0x270538u;
        goto label_270538;
    }
    ctx->pc = 0x270530u;
    {
        const bool branch_taken_0x270530 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x270530) {
            ctx->pc = 0x270570u;
            goto label_270570;
        }
    }
    ctx->pc = 0x270538u;
label_270538:
    // 0x270538: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27053c:
    // 0x27053c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x27053cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_270540:
    // 0x270540: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x270540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_270544:
    // 0x270544: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270548:
    // 0x270548: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x270548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_27054c:
    // 0x27054c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x27054cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_270550:
    // 0x270550: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_270554:
    if (ctx->pc == 0x270554u) {
        ctx->pc = 0x270558u;
        goto label_270558;
    }
    ctx->pc = 0x270550u;
    {
        const bool branch_taken_0x270550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x270550) {
            ctx->pc = 0x270570u;
            goto label_270570;
        }
    }
    ctx->pc = 0x270558u;
label_270558:
    // 0x270558: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x270558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_27055c:
    // 0x27055c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27055cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_270560:
    // 0x270560: 0xc09c624  jal         func_271890
label_270564:
    if (ctx->pc == 0x270564u) {
        ctx->pc = 0x270568u;
        goto label_270568;
    }
    ctx->pc = 0x270560u;
    SET_GPR_U32(ctx, 31, 0x270568u);
    ctx->pc = 0x271890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271890u, 0x270560u, 0x270568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270568u;
label_270568:
    // 0x270568: 0x10000012  b           . + 4 + (0x12 << 2)
label_27056c:
    if (ctx->pc == 0x27056Cu) {
        ctx->pc = 0x270570u;
        goto label_270570;
    }
    ctx->pc = 0x270568u;
    {
        const bool branch_taken_0x270568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270568) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x270570u;
label_270570:
    // 0x270570: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x270570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270574:
    // 0x270574: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270578:
    // 0x270578: 0xa0430034  sb          $v1, 0x34($v0)
    ctx->pc = 0x270578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 3));
label_27057c:
    // 0x27057c: 0x1000000d  b           . + 4 + (0xD << 2)
label_270580:
    if (ctx->pc == 0x270580u) {
        ctx->pc = 0x270584u;
        goto label_270584;
    }
    ctx->pc = 0x27057Cu;
    {
        const bool branch_taken_0x27057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27057c) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x270584u;
label_270584:
    // 0x270584: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270588:
    // 0x270588: 0x90420034  lbu         $v0, 0x34($v0)
    ctx->pc = 0x270588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 52)));
label_27058c:
    // 0x27058c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_270590:
    if (ctx->pc == 0x270590u) {
        ctx->pc = 0x270594u;
        goto label_270594;
    }
    ctx->pc = 0x27058Cu;
    {
        const bool branch_taken_0x27058c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27058c) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x270594u;
label_270594:
    // 0x270594: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270598:
    // 0x270598: 0xa0400034  sb          $zero, 0x34($v0)
    ctx->pc = 0x270598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 52), (uint8_t)GPR_U32(ctx, 0));
label_27059c:
    // 0x27059c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2705a0:
    if (ctx->pc == 0x2705A0u) {
        ctx->pc = 0x2705A4u;
        goto label_2705a4;
    }
    ctx->pc = 0x27059Cu;
    {
        const bool branch_taken_0x27059c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x27059c) {
            ctx->pc = 0x2705B4u;
            goto label_2705b4;
        }
    }
    ctx->pc = 0x2705A4u;
label_2705a4:
    // 0x2705a4: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x2705a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2705a8:
    // 0x2705a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2705a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2705ac:
    // 0x2705ac: 0xc09c624  jal         func_271890
label_2705b0:
    if (ctx->pc == 0x2705B0u) {
        ctx->pc = 0x2705B4u;
        goto label_2705b4;
    }
    ctx->pc = 0x2705ACu;
    SET_GPR_U32(ctx, 31, 0x2705B4u);
    ctx->pc = 0x271890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271890u, 0x2705ACu, 0x2705B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705B4u;
label_2705b4:
    // 0x2705b4: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x2705b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_2705b8:
    // 0x2705b8: 0xc0513f8  jal         func_144FE0
label_2705bc:
    if (ctx->pc == 0x2705BCu) {
        ctx->pc = 0x2705C0u;
        goto label_2705c0;
    }
    ctx->pc = 0x2705B8u;
    SET_GPR_U32(ctx, 31, 0x2705C0u);
    ctx->pc = 0x144FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144FE0u, 0x2705B8u, 0x2705C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705C0u;
label_2705c0:
    // 0x2705c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2705c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2705c4:
    // 0x2705c4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2705c8:
    if (ctx->pc == 0x2705C8u) {
        ctx->pc = 0x2705CCu;
        goto label_2705cc;
    }
    ctx->pc = 0x2705C4u;
    {
        const bool branch_taken_0x2705c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705c4) {
            ctx->pc = 0x27060Cu;
            goto label_27060c;
        }
    }
    ctx->pc = 0x2705CCu;
label_2705cc:
    // 0x2705cc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2705ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2705d0:
    // 0x2705d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2705d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2705d4:
    // 0x2705d4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2705d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2705d8:
    // 0x2705d8: 0x320f809  jalr        $t9
label_2705dc:
    if (ctx->pc == 0x2705DCu) {
        ctx->pc = 0x2705E0u;
        goto label_2705e0;
    }
    ctx->pc = 0x2705D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2705E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2705D8u, 0x2705E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2705E0u;
label_2705e0:
    // 0x2705e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2705e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2705e4:
    // 0x2705e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2705e8:
    if (ctx->pc == 0x2705E8u) {
        ctx->pc = 0x2705ECu;
        goto label_2705ec;
    }
    ctx->pc = 0x2705E4u;
    {
        const bool branch_taken_0x2705e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2705e4) {
            ctx->pc = 0x270608u;
            goto label_270608;
        }
    }
    ctx->pc = 0x2705ECu;
label_2705ec:
    // 0x2705ec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2705ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2705f0:
    // 0x2705f0: 0xc051830  jal         func_1460C0
label_2705f4:
    if (ctx->pc == 0x2705F4u) {
        ctx->pc = 0x2705F8u;
        goto label_2705f8;
    }
    ctx->pc = 0x2705F0u;
    SET_GPR_U32(ctx, 31, 0x2705F8u);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x2705F0u, 0x2705F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705F8u;
label_2705f8:
    // 0x2705f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2705f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2705fc:
    // 0x2705fc: 0xc119c5c  jal         func_467170
label_270600:
    if (ctx->pc == 0x270600u) {
        ctx->pc = 0x270604u;
        goto label_270604;
    }
    ctx->pc = 0x2705FCu;
    SET_GPR_U32(ctx, 31, 0x270604u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2705FCu, 0x270604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270604u;
label_270604:
    // 0x270604: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x270604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_270608:
    // 0x270608: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x270608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_27060c:
    // 0x27060c: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x27060cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_270610:
    // 0x270610: 0xc09c064  jal         func_270190
label_270614:
    if (ctx->pc == 0x270614u) {
        ctx->pc = 0x270618u;
        goto label_270618;
    }
    ctx->pc = 0x270610u;
    SET_GPR_U32(ctx, 31, 0x270618u);
    ctx->pc = 0x270190u;
    goto label_270190;
    ctx->pc = 0x270618u;
label_270618:
    // 0x270618: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_27061c:
    if (ctx->pc == 0x27061Cu) {
        ctx->pc = 0x270620u;
        goto label_270620;
    }
    ctx->pc = 0x270618u;
    {
        const bool branch_taken_0x270618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x270618) {
            ctx->pc = 0x2705CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2705cc;
        }
    }
    ctx->pc = 0x270620u;
label_270620:
    // 0x270620: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_270624:
    // 0x270624: 0xc09c020  jal         func_270080
label_270628:
    if (ctx->pc == 0x270628u) {
        ctx->pc = 0x27062Cu;
        goto label_27062c;
    }
    ctx->pc = 0x270624u;
    SET_GPR_U32(ctx, 31, 0x27062Cu);
    ctx->pc = 0x270080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270080u, 0x270624u, 0x27062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27062Cu;
label_27062c:
    // 0x27062c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x27062cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270630:
    // 0x270630: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x270630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_270634:
    // 0x270634: 0xc051400  jal         func_145000
label_270638:
    if (ctx->pc == 0x270638u) {
        ctx->pc = 0x27063Cu;
        goto label_27063c;
    }
    ctx->pc = 0x270634u;
    SET_GPR_U32(ctx, 31, 0x27063Cu);
    ctx->pc = 0x145000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145000u, 0x270634u, 0x27063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27063Cu;
label_27063c:
    // 0x27063c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_270640:
    if (ctx->pc == 0x270640u) {
        ctx->pc = 0x270644u;
        goto label_270644;
    }
    ctx->pc = 0x27063Cu;
    {
        const bool branch_taken_0x27063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27063c) {
            ctx->pc = 0x270668u;
            goto label_270668;
        }
    }
    ctx->pc = 0x270644u;
label_270644:
    // 0x270644: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270648:
    // 0x270648: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x270648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27064c:
    // 0x27064c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_270650:
    if (ctx->pc == 0x270650u) {
        ctx->pc = 0x270654u;
        goto label_270654;
    }
    ctx->pc = 0x27064Cu;
    {
        const bool branch_taken_0x27064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27064c) {
            ctx->pc = 0x270668u;
            goto label_270668;
        }
    }
    ctx->pc = 0x270654u;
label_270654:
    // 0x270654: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x270654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_270658:
    // 0x270658: 0x8c440050  lw          $a0, 0x50($v0)
    ctx->pc = 0x270658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_27065c:
    // 0x27065c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27065cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270660:
    // 0x270660: 0xc09c3f0  jal         func_270FC0
label_270664:
    if (ctx->pc == 0x270664u) {
        ctx->pc = 0x270668u;
        goto label_270668;
    }
    ctx->pc = 0x270660u;
    SET_GPR_U32(ctx, 31, 0x270668u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x270660u, 0x270668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270668u;
label_270668:
    // 0x270668: 0x27a400c8  addiu       $a0, $sp, 0xC8
    ctx->pc = 0x270668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_27066c:
    // 0x27066c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x27066cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270670:
    // 0x270670: 0xc09bee4  jal         func_26FB90
label_270674:
    if (ctx->pc == 0x270674u) {
        ctx->pc = 0x270678u;
        goto label_270678;
    }
    ctx->pc = 0x270670u;
    SET_GPR_U32(ctx, 31, 0x270678u);
    ctx->pc = 0x26FB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FB90u, 0x270670u, 0x270678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270678u;
label_270678:
    // 0x270678: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x270678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_27067c:
    // 0x27067c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x27067cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_270680:
    // 0x270680: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x270680u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_270684:
    // 0x270684: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x270684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_270688:
    // 0x270688: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x270688u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27068c:
    // 0x27068c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27068cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_270690:
    // 0x270690: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x270690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_270694:
    // 0x270694: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x270694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_270698:
    // 0x270698: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x270698u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27069c:
    // 0x27069c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27069cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2706a0:
    // 0x2706a0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2706a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2706a4:
    // 0x2706a4: 0x3e00008  jr          $ra
label_2706a8:
    if (ctx->pc == 0x2706A8u) {
        ctx->pc = 0x2706ACu;
        goto label_2706ac;
    }
    ctx->pc = 0x2706A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2706A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2706ACu;
label_2706ac:
    // 0x2706ac: 0x0  nop
    ctx->pc = 0x2706acu;
    // NOP
    ctx->pc = 0x2706b0u;
}
