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

// Function: sub_00475440
// Address: 0x475440 - 0x475870
void sub_00475440_0x475440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475440_0x475440");
#endif

    switch (ctx->pc) {
        case 0x475440u: goto label_475440;
        case 0x475444u: goto label_475444;
        case 0x475448u: goto label_475448;
        case 0x47544cu: goto label_47544c;
        case 0x475450u: goto label_475450;
        case 0x475454u: goto label_475454;
        case 0x475458u: goto label_475458;
        case 0x47545cu: goto label_47545c;
        case 0x475460u: goto label_475460;
        case 0x475464u: goto label_475464;
        case 0x475468u: goto label_475468;
        case 0x47546cu: goto label_47546c;
        case 0x475470u: goto label_475470;
        case 0x475474u: goto label_475474;
        case 0x475478u: goto label_475478;
        case 0x47547cu: goto label_47547c;
        case 0x475480u: goto label_475480;
        case 0x475484u: goto label_475484;
        case 0x475488u: goto label_475488;
        case 0x47548cu: goto label_47548c;
        case 0x475490u: goto label_475490;
        case 0x475494u: goto label_475494;
        case 0x475498u: goto label_475498;
        case 0x47549cu: goto label_47549c;
        case 0x4754a0u: goto label_4754a0;
        case 0x4754a4u: goto label_4754a4;
        case 0x4754a8u: goto label_4754a8;
        case 0x4754acu: goto label_4754ac;
        case 0x4754b0u: goto label_4754b0;
        case 0x4754b4u: goto label_4754b4;
        case 0x4754b8u: goto label_4754b8;
        case 0x4754bcu: goto label_4754bc;
        case 0x4754c0u: goto label_4754c0;
        case 0x4754c4u: goto label_4754c4;
        case 0x4754c8u: goto label_4754c8;
        case 0x4754ccu: goto label_4754cc;
        case 0x4754d0u: goto label_4754d0;
        case 0x4754d4u: goto label_4754d4;
        case 0x4754d8u: goto label_4754d8;
        case 0x4754dcu: goto label_4754dc;
        case 0x4754e0u: goto label_4754e0;
        case 0x4754e4u: goto label_4754e4;
        case 0x4754e8u: goto label_4754e8;
        case 0x4754ecu: goto label_4754ec;
        case 0x4754f0u: goto label_4754f0;
        case 0x4754f4u: goto label_4754f4;
        case 0x4754f8u: goto label_4754f8;
        case 0x4754fcu: goto label_4754fc;
        case 0x475500u: goto label_475500;
        case 0x475504u: goto label_475504;
        case 0x475508u: goto label_475508;
        case 0x47550cu: goto label_47550c;
        case 0x475510u: goto label_475510;
        case 0x475514u: goto label_475514;
        case 0x475518u: goto label_475518;
        case 0x47551cu: goto label_47551c;
        case 0x475520u: goto label_475520;
        case 0x475524u: goto label_475524;
        case 0x475528u: goto label_475528;
        case 0x47552cu: goto label_47552c;
        case 0x475530u: goto label_475530;
        case 0x475534u: goto label_475534;
        case 0x475538u: goto label_475538;
        case 0x47553cu: goto label_47553c;
        case 0x475540u: goto label_475540;
        case 0x475544u: goto label_475544;
        case 0x475548u: goto label_475548;
        case 0x47554cu: goto label_47554c;
        case 0x475550u: goto label_475550;
        case 0x475554u: goto label_475554;
        case 0x475558u: goto label_475558;
        case 0x47555cu: goto label_47555c;
        case 0x475560u: goto label_475560;
        case 0x475564u: goto label_475564;
        case 0x475568u: goto label_475568;
        case 0x47556cu: goto label_47556c;
        case 0x475570u: goto label_475570;
        case 0x475574u: goto label_475574;
        case 0x475578u: goto label_475578;
        case 0x47557cu: goto label_47557c;
        case 0x475580u: goto label_475580;
        case 0x475584u: goto label_475584;
        case 0x475588u: goto label_475588;
        case 0x47558cu: goto label_47558c;
        case 0x475590u: goto label_475590;
        case 0x475594u: goto label_475594;
        case 0x475598u: goto label_475598;
        case 0x47559cu: goto label_47559c;
        case 0x4755a0u: goto label_4755a0;
        case 0x4755a4u: goto label_4755a4;
        case 0x4755a8u: goto label_4755a8;
        case 0x4755acu: goto label_4755ac;
        case 0x4755b0u: goto label_4755b0;
        case 0x4755b4u: goto label_4755b4;
        case 0x4755b8u: goto label_4755b8;
        case 0x4755bcu: goto label_4755bc;
        case 0x4755c0u: goto label_4755c0;
        case 0x4755c4u: goto label_4755c4;
        case 0x4755c8u: goto label_4755c8;
        case 0x4755ccu: goto label_4755cc;
        case 0x4755d0u: goto label_4755d0;
        case 0x4755d4u: goto label_4755d4;
        case 0x4755d8u: goto label_4755d8;
        case 0x4755dcu: goto label_4755dc;
        case 0x4755e0u: goto label_4755e0;
        case 0x4755e4u: goto label_4755e4;
        case 0x4755e8u: goto label_4755e8;
        case 0x4755ecu: goto label_4755ec;
        case 0x4755f0u: goto label_4755f0;
        case 0x4755f4u: goto label_4755f4;
        case 0x4755f8u: goto label_4755f8;
        case 0x4755fcu: goto label_4755fc;
        case 0x475600u: goto label_475600;
        case 0x475604u: goto label_475604;
        case 0x475608u: goto label_475608;
        case 0x47560cu: goto label_47560c;
        case 0x475610u: goto label_475610;
        case 0x475614u: goto label_475614;
        case 0x475618u: goto label_475618;
        case 0x47561cu: goto label_47561c;
        case 0x475620u: goto label_475620;
        case 0x475624u: goto label_475624;
        case 0x475628u: goto label_475628;
        case 0x47562cu: goto label_47562c;
        case 0x475630u: goto label_475630;
        case 0x475634u: goto label_475634;
        case 0x475638u: goto label_475638;
        case 0x47563cu: goto label_47563c;
        case 0x475640u: goto label_475640;
        case 0x475644u: goto label_475644;
        case 0x475648u: goto label_475648;
        case 0x47564cu: goto label_47564c;
        case 0x475650u: goto label_475650;
        case 0x475654u: goto label_475654;
        case 0x475658u: goto label_475658;
        case 0x47565cu: goto label_47565c;
        case 0x475660u: goto label_475660;
        case 0x475664u: goto label_475664;
        case 0x475668u: goto label_475668;
        case 0x47566cu: goto label_47566c;
        case 0x475670u: goto label_475670;
        case 0x475674u: goto label_475674;
        case 0x475678u: goto label_475678;
        case 0x47567cu: goto label_47567c;
        case 0x475680u: goto label_475680;
        case 0x475684u: goto label_475684;
        case 0x475688u: goto label_475688;
        case 0x47568cu: goto label_47568c;
        case 0x475690u: goto label_475690;
        case 0x475694u: goto label_475694;
        case 0x475698u: goto label_475698;
        case 0x47569cu: goto label_47569c;
        case 0x4756a0u: goto label_4756a0;
        case 0x4756a4u: goto label_4756a4;
        case 0x4756a8u: goto label_4756a8;
        case 0x4756acu: goto label_4756ac;
        case 0x4756b0u: goto label_4756b0;
        case 0x4756b4u: goto label_4756b4;
        case 0x4756b8u: goto label_4756b8;
        case 0x4756bcu: goto label_4756bc;
        case 0x4756c0u: goto label_4756c0;
        case 0x4756c4u: goto label_4756c4;
        case 0x4756c8u: goto label_4756c8;
        case 0x4756ccu: goto label_4756cc;
        case 0x4756d0u: goto label_4756d0;
        case 0x4756d4u: goto label_4756d4;
        case 0x4756d8u: goto label_4756d8;
        case 0x4756dcu: goto label_4756dc;
        case 0x4756e0u: goto label_4756e0;
        case 0x4756e4u: goto label_4756e4;
        case 0x4756e8u: goto label_4756e8;
        case 0x4756ecu: goto label_4756ec;
        case 0x4756f0u: goto label_4756f0;
        case 0x4756f4u: goto label_4756f4;
        case 0x4756f8u: goto label_4756f8;
        case 0x4756fcu: goto label_4756fc;
        case 0x475700u: goto label_475700;
        case 0x475704u: goto label_475704;
        case 0x475708u: goto label_475708;
        case 0x47570cu: goto label_47570c;
        case 0x475710u: goto label_475710;
        case 0x475714u: goto label_475714;
        case 0x475718u: goto label_475718;
        case 0x47571cu: goto label_47571c;
        case 0x475720u: goto label_475720;
        case 0x475724u: goto label_475724;
        case 0x475728u: goto label_475728;
        case 0x47572cu: goto label_47572c;
        case 0x475730u: goto label_475730;
        case 0x475734u: goto label_475734;
        case 0x475738u: goto label_475738;
        case 0x47573cu: goto label_47573c;
        case 0x475740u: goto label_475740;
        case 0x475744u: goto label_475744;
        case 0x475748u: goto label_475748;
        case 0x47574cu: goto label_47574c;
        case 0x475750u: goto label_475750;
        case 0x475754u: goto label_475754;
        case 0x475758u: goto label_475758;
        case 0x47575cu: goto label_47575c;
        case 0x475760u: goto label_475760;
        case 0x475764u: goto label_475764;
        case 0x475768u: goto label_475768;
        case 0x47576cu: goto label_47576c;
        case 0x475770u: goto label_475770;
        case 0x475774u: goto label_475774;
        case 0x475778u: goto label_475778;
        case 0x47577cu: goto label_47577c;
        case 0x475780u: goto label_475780;
        case 0x475784u: goto label_475784;
        case 0x475788u: goto label_475788;
        case 0x47578cu: goto label_47578c;
        case 0x475790u: goto label_475790;
        case 0x475794u: goto label_475794;
        case 0x475798u: goto label_475798;
        case 0x47579cu: goto label_47579c;
        case 0x4757a0u: goto label_4757a0;
        case 0x4757a4u: goto label_4757a4;
        case 0x4757a8u: goto label_4757a8;
        case 0x4757acu: goto label_4757ac;
        case 0x4757b0u: goto label_4757b0;
        case 0x4757b4u: goto label_4757b4;
        case 0x4757b8u: goto label_4757b8;
        case 0x4757bcu: goto label_4757bc;
        case 0x4757c0u: goto label_4757c0;
        case 0x4757c4u: goto label_4757c4;
        case 0x4757c8u: goto label_4757c8;
        case 0x4757ccu: goto label_4757cc;
        case 0x4757d0u: goto label_4757d0;
        case 0x4757d4u: goto label_4757d4;
        case 0x4757d8u: goto label_4757d8;
        case 0x4757dcu: goto label_4757dc;
        case 0x4757e0u: goto label_4757e0;
        case 0x4757e4u: goto label_4757e4;
        case 0x4757e8u: goto label_4757e8;
        case 0x4757ecu: goto label_4757ec;
        case 0x4757f0u: goto label_4757f0;
        case 0x4757f4u: goto label_4757f4;
        case 0x4757f8u: goto label_4757f8;
        case 0x4757fcu: goto label_4757fc;
        case 0x475800u: goto label_475800;
        case 0x475804u: goto label_475804;
        case 0x475808u: goto label_475808;
        case 0x47580cu: goto label_47580c;
        case 0x475810u: goto label_475810;
        case 0x475814u: goto label_475814;
        case 0x475818u: goto label_475818;
        case 0x47581cu: goto label_47581c;
        case 0x475820u: goto label_475820;
        case 0x475824u: goto label_475824;
        case 0x475828u: goto label_475828;
        case 0x47582cu: goto label_47582c;
        case 0x475830u: goto label_475830;
        case 0x475834u: goto label_475834;
        case 0x475838u: goto label_475838;
        case 0x47583cu: goto label_47583c;
        case 0x475840u: goto label_475840;
        case 0x475844u: goto label_475844;
        case 0x475848u: goto label_475848;
        case 0x47584cu: goto label_47584c;
        case 0x475850u: goto label_475850;
        case 0x475854u: goto label_475854;
        case 0x475858u: goto label_475858;
        case 0x47585cu: goto label_47585c;
        case 0x475860u: goto label_475860;
        case 0x475864u: goto label_475864;
        case 0x475868u: goto label_475868;
        case 0x47586cu: goto label_47586c;
        default: break;
    }

    ctx->pc = 0x475440u;

label_475440:
    // 0x475440: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x475440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
label_475444:
    // 0x475444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x475444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_475448:
    // 0x475448: 0xafa403a0  sw          $a0, 0x3A0($sp)
    ctx->pc = 0x475448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 4));
label_47544c:
    // 0x47544c: 0xafa503b0  sw          $a1, 0x3B0($sp)
    ctx->pc = 0x47544cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 5));
label_475450:
    // 0x475450: 0xafa603c0  sw          $a2, 0x3C0($sp)
    ctx->pc = 0x475450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 6));
label_475454:
    // 0x475454: 0xafa703d0  sw          $a3, 0x3D0($sp)
    ctx->pc = 0x475454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 7));
label_475458:
    // 0x475458: 0xe7ac03e0  swc1        $f12, 0x3E0($sp)
    ctx->pc = 0x475458u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 992), bits); }
label_47545c:
    // 0x47545c: 0xe7ad03f0  swc1        $f13, 0x3F0($sp)
    ctx->pc = 0x47545cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_475460:
    // 0x475460: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x475460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_475464:
    // 0x475464: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x475464u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_475468:
    // 0x475468: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x475468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_47546c:
    // 0x47546c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_475470:
    if (ctx->pc == 0x475470u) {
        ctx->pc = 0x475474u;
        goto label_475474;
    }
    ctx->pc = 0x47546Cu;
    {
        const bool branch_taken_0x47546c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x47546c) {
            ctx->pc = 0x47551Cu;
            goto label_47551c;
        }
    }
    ctx->pc = 0x475474u;
label_475474:
    // 0x475474: 0x8f83b44c  lw          $v1, -0x4BB4($gp)
    ctx->pc = 0x475474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947916)));
label_475478:
    // 0x475478: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_47547c:
    if (ctx->pc == 0x47547Cu) {
        ctx->pc = 0x475480u;
        goto label_475480;
    }
    ctx->pc = 0x475478u;
    {
        const bool branch_taken_0x475478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475478) {
            ctx->pc = 0x47551Cu;
            goto label_47551c;
        }
    }
    ctx->pc = 0x475480u;
label_475480:
    // 0x475480: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475484:
    // 0x475484: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475488:
    // 0x475488: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x475488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_47548c:
    // 0x47548c: 0xc115ee8  jal         func_457BA0
label_475490:
    if (ctx->pc == 0x475490u) {
        ctx->pc = 0x475494u;
        goto label_475494;
    }
    ctx->pc = 0x47548Cu;
    SET_GPR_U32(ctx, 31, 0x475494u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47548Cu, 0x475494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475494u;
label_475494:
    // 0x475494: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475498:
    if (ctx->pc == 0x475498u) {
        ctx->pc = 0x47549Cu;
        goto label_47549c;
    }
    ctx->pc = 0x475494u;
    {
        const bool branch_taken_0x475494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475494) {
            ctx->pc = 0x47551Cu;
            goto label_47551c;
        }
    }
    ctx->pc = 0x47549Cu;
label_47549c:
    // 0x47549c: 0x8fa30398  lw          $v1, 0x398($sp)
    ctx->pc = 0x47549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_4754a0:
    // 0x4754a0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4754a4:
    if (ctx->pc == 0x4754A4u) {
        ctx->pc = 0x4754A8u;
        goto label_4754a8;
    }
    ctx->pc = 0x4754A0u;
    {
        const bool branch_taken_0x4754a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4754a0) {
            ctx->pc = 0x47551Cu;
            goto label_47551c;
        }
    }
    ctx->pc = 0x4754A8u;
label_4754a8:
    // 0x4754a8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x4754a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4754ac:
    // 0x4754ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4754acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4754b0:
    // 0x4754b0: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x4754b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_4754b4:
    // 0x4754b4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4754b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4754b8:
    // 0x4754b8: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x4754b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_4754bc:
    // 0x4754bc: 0x2408004b  addiu       $t0, $zero, 0x4B
    ctx->pc = 0x4754bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
label_4754c0:
    // 0x4754c0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4754c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4754c4:
    // 0x4754c4: 0x25290dd0  addiu       $t1, $t1, 0xDD0
    ctx->pc = 0x4754c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3536));
label_4754c8:
    // 0x4754c8: 0xc113940  jal         func_44E500
label_4754cc:
    if (ctx->pc == 0x4754CCu) {
        ctx->pc = 0x4754D0u;
        goto label_4754d0;
    }
    ctx->pc = 0x4754C8u;
    SET_GPR_U32(ctx, 31, 0x4754D0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4754C8u, 0x4754D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4754D0u;
label_4754d0:
    // 0x4754d0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x4754d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4754d4:
    // 0x4754d4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4754d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4754d8:
    // 0x4754d8: 0x24a50df0  addiu       $a1, $a1, 0xDF0
    ctx->pc = 0x4754d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3568));
label_4754dc:
    // 0x4754dc: 0xc115c24  jal         func_457090
label_4754e0:
    if (ctx->pc == 0x4754E0u) {
        ctx->pc = 0x4754E4u;
        goto label_4754e4;
    }
    ctx->pc = 0x4754DCu;
    SET_GPR_U32(ctx, 31, 0x4754E4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4754DCu, 0x4754E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4754E4u;
label_4754e4:
    // 0x4754e4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x4754e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4754e8:
    // 0x4754e8: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x4754e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_4754ec:
    // 0x4754ec: 0x40f809  jalr        $v0
label_4754f0:
    if (ctx->pc == 0x4754F0u) {
        ctx->pc = 0x4754F4u;
        goto label_4754f4;
    }
    ctx->pc = 0x4754ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4754F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4754ECu, 0x4754F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4754F4u;
label_4754f4:
    // 0x4754f4: 0xaf82b44c  sw          $v0, -0x4BB4($gp)
    ctx->pc = 0x4754f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947916), GPR_U32(ctx, 2));
label_4754f8:
    // 0x4754f8: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x4754f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_4754fc:
    // 0x4754fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_475500:
    if (ctx->pc == 0x475500u) {
        ctx->pc = 0x475504u;
        goto label_475504;
    }
    ctx->pc = 0x4754FCu;
    {
        const bool branch_taken_0x4754fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4754fc) {
            ctx->pc = 0x47550Cu;
            goto label_47550c;
        }
    }
    ctx->pc = 0x475504u;
label_475504:
    // 0x475504: 0xd  break       0
    ctx->pc = 0x475504u;
    runtime->handleBreak(rdram, ctx);
label_475508:
    // 0x475508: 0x0  nop
    ctx->pc = 0x475508u;
    // NOP
label_47550c:
    // 0x47550c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x47550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_475510:
    // 0x475510: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x475510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475514:
    // 0x475514: 0xc11392c  jal         func_44E4B0
label_475518:
    if (ctx->pc == 0x475518u) {
        ctx->pc = 0x47551Cu;
        goto label_47551c;
    }
    ctx->pc = 0x475514u;
    SET_GPR_U32(ctx, 31, 0x47551Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475514u, 0x47551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47551Cu;
label_47551c:
    // 0x47551c: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x47551cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_475520:
    // 0x475520: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
label_475524:
    if (ctx->pc == 0x475524u) {
        ctx->pc = 0x475528u;
        goto label_475528;
    }
    ctx->pc = 0x475520u;
    {
        const bool branch_taken_0x475520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475520) {
            ctx->pc = 0x4757D4u;
            goto label_4757d4;
        }
    }
    ctx->pc = 0x475528u;
label_475528:
    // 0x475528: 0x8fa303d0  lw          $v1, 0x3D0($sp)
    ctx->pc = 0x475528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_47552c:
    // 0x47552c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x47552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475530:
    // 0x475530: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x475530u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_475534:
    // 0x475534: 0x8fa403b0  lw          $a0, 0x3B0($sp)
    ctx->pc = 0x475534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_475538:
    // 0x475538: 0xc04e240  jal         func_138900
label_47553c:
    if (ctx->pc == 0x47553Cu) {
        ctx->pc = 0x475540u;
        goto label_475540;
    }
    ctx->pc = 0x475538u;
    SET_GPR_U32(ctx, 31, 0x475540u);
    ctx->pc = 0x138900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138900u, 0x475538u, 0x475540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475540u;
label_475540:
    // 0x475540: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x475540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_475544:
    // 0x475544: 0x8fa503c0  lw          $a1, 0x3C0($sp)
    ctx->pc = 0x475544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_475548:
    // 0x475548: 0xc0ecf5c  jal         func_3B3D70
label_47554c:
    if (ctx->pc == 0x47554Cu) {
        ctx->pc = 0x475550u;
        goto label_475550;
    }
    ctx->pc = 0x475548u;
    SET_GPR_U32(ctx, 31, 0x475550u);
    ctx->pc = 0x3B3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3D70u, 0x475548u, 0x475550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475550u;
label_475550:
    // 0x475550: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475554:
    // 0x475554: 0xac620028  sw          $v0, 0x28($v1)
    ctx->pc = 0x475554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
label_475558:
    // 0x475558: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47555c:
    // 0x47555c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475560:
    // 0x475560: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x475560u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_475564:
    // 0x475564: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x475564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_475568:
    // 0x475568: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_47556c:
    if (ctx->pc == 0x47556Cu) {
        ctx->pc = 0x475570u;
        goto label_475570;
    }
    ctx->pc = 0x475568u;
    {
        const bool branch_taken_0x475568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x475568) {
            ctx->pc = 0x475618u;
            goto label_475618;
        }
    }
    ctx->pc = 0x475570u;
label_475570:
    // 0x475570: 0x8f83b450  lw          $v1, -0x4BB0($gp)
    ctx->pc = 0x475570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947920)));
label_475574:
    // 0x475574: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_475578:
    if (ctx->pc == 0x475578u) {
        ctx->pc = 0x47557Cu;
        goto label_47557c;
    }
    ctx->pc = 0x475574u;
    {
        const bool branch_taken_0x475574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475574) {
            ctx->pc = 0x475618u;
            goto label_475618;
        }
    }
    ctx->pc = 0x47557Cu;
label_47557c:
    // 0x47557c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47557cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475580:
    // 0x475580: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475584:
    // 0x475584: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x475584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_475588:
    // 0x475588: 0xc115ee8  jal         func_457BA0
label_47558c:
    if (ctx->pc == 0x47558Cu) {
        ctx->pc = 0x475590u;
        goto label_475590;
    }
    ctx->pc = 0x475588u;
    SET_GPR_U32(ctx, 31, 0x475590u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x475588u, 0x475590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475590u;
label_475590:
    // 0x475590: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_475594:
    if (ctx->pc == 0x475594u) {
        ctx->pc = 0x475598u;
        goto label_475598;
    }
    ctx->pc = 0x475590u;
    {
        const bool branch_taken_0x475590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475590) {
            ctx->pc = 0x475618u;
            goto label_475618;
        }
    }
    ctx->pc = 0x475598u;
label_475598:
    // 0x475598: 0x8fa30388  lw          $v1, 0x388($sp)
    ctx->pc = 0x475598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_47559c:
    // 0x47559c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4755a0:
    if (ctx->pc == 0x4755A0u) {
        ctx->pc = 0x4755A4u;
        goto label_4755a4;
    }
    ctx->pc = 0x47559Cu;
    {
        const bool branch_taken_0x47559c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x47559c) {
            ctx->pc = 0x475618u;
            goto label_475618;
        }
    }
    ctx->pc = 0x4755A4u;
label_4755a4:
    // 0x4755a4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4755a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4755a8:
    // 0x4755a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4755a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4755ac:
    // 0x4755ac: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x4755acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_4755b0:
    // 0x4755b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4755b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4755b4:
    // 0x4755b4: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x4755b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_4755b8:
    // 0x4755b8: 0x24080057  addiu       $t0, $zero, 0x57
    ctx->pc = 0x4755b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_4755bc:
    // 0x4755bc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4755bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4755c0:
    // 0x4755c0: 0x25290e50  addiu       $t1, $t1, 0xE50
    ctx->pc = 0x4755c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3664));
label_4755c4:
    // 0x4755c4: 0xc113940  jal         func_44E500
label_4755c8:
    if (ctx->pc == 0x4755C8u) {
        ctx->pc = 0x4755CCu;
        goto label_4755cc;
    }
    ctx->pc = 0x4755C4u;
    SET_GPR_U32(ctx, 31, 0x4755CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4755C4u, 0x4755CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4755CCu;
label_4755cc:
    // 0x4755cc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4755ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4755d0:
    // 0x4755d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4755d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4755d4:
    // 0x4755d4: 0x24a50e70  addiu       $a1, $a1, 0xE70
    ctx->pc = 0x4755d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3696));
label_4755d8:
    // 0x4755d8: 0xc115c24  jal         func_457090
label_4755dc:
    if (ctx->pc == 0x4755DCu) {
        ctx->pc = 0x4755E0u;
        goto label_4755e0;
    }
    ctx->pc = 0x4755D8u;
    SET_GPR_U32(ctx, 31, 0x4755E0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4755D8u, 0x4755E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4755E0u;
label_4755e0:
    // 0x4755e0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4755e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4755e4:
    // 0x4755e4: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x4755e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_4755e8:
    // 0x4755e8: 0x40f809  jalr        $v0
label_4755ec:
    if (ctx->pc == 0x4755ECu) {
        ctx->pc = 0x4755F0u;
        goto label_4755f0;
    }
    ctx->pc = 0x4755E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4755F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4755E8u, 0x4755F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4755F0u;
label_4755f0:
    // 0x4755f0: 0xaf82b450  sw          $v0, -0x4BB0($gp)
    ctx->pc = 0x4755f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947920), GPR_U32(ctx, 2));
label_4755f4:
    // 0x4755f4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x4755f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_4755f8:
    // 0x4755f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4755fc:
    if (ctx->pc == 0x4755FCu) {
        ctx->pc = 0x475600u;
        goto label_475600;
    }
    ctx->pc = 0x4755F8u;
    {
        const bool branch_taken_0x4755f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4755f8) {
            ctx->pc = 0x475608u;
            goto label_475608;
        }
    }
    ctx->pc = 0x475600u;
label_475600:
    // 0x475600: 0xd  break       0
    ctx->pc = 0x475600u;
    runtime->handleBreak(rdram, ctx);
label_475604:
    // 0x475604: 0x0  nop
    ctx->pc = 0x475604u;
    // NOP
label_475608:
    // 0x475608: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x475608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_47560c:
    // 0x47560c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475610:
    // 0x475610: 0xc11392c  jal         func_44E4B0
label_475614:
    if (ctx->pc == 0x475614u) {
        ctx->pc = 0x475618u;
        goto label_475618;
    }
    ctx->pc = 0x475610u;
    SET_GPR_U32(ctx, 31, 0x475618u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475610u, 0x475618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475618u;
label_475618:
    // 0x475618: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47561c:
    // 0x47561c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x47561cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475620:
    // 0x475620: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_475624:
    if (ctx->pc == 0x475624u) {
        ctx->pc = 0x475628u;
        goto label_475628;
    }
    ctx->pc = 0x475620u;
    {
        const bool branch_taken_0x475620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475620) {
            ctx->pc = 0x4757D4u;
            goto label_4757d4;
        }
    }
    ctx->pc = 0x475628u;
label_475628:
    // 0x475628: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47562c:
    // 0x47562c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x47562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_475630:
    // 0x475630: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_475634:
    if (ctx->pc == 0x475634u) {
        ctx->pc = 0x475638u;
        goto label_475638;
    }
    ctx->pc = 0x475630u;
    {
        const bool branch_taken_0x475630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475630) {
            ctx->pc = 0x475654u;
            goto label_475654;
        }
    }
    ctx->pc = 0x475638u;
label_475638:
    // 0x475638: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47563c:
    // 0x47563c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x47563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475640:
    // 0x475640: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x475640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_475644:
    // 0x475644: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x475644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475648:
    // 0x475648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x475648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_47564c:
    // 0x47564c: 0xc0ecfa6  jal         func_3B3E98
label_475650:
    if (ctx->pc == 0x475650u) {
        ctx->pc = 0x475654u;
        goto label_475654;
    }
    ctx->pc = 0x47564Cu;
    SET_GPR_U32(ctx, 31, 0x475654u);
    ctx->pc = 0x3B3E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E98u, 0x47564Cu, 0x475654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475654u;
label_475654:
    // 0x475654: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475658:
    // 0x475658: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47565c:
    // 0x47565c: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x47565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_475660:
    // 0x475660: 0xc44c0040  lwc1        $f12, 0x40($v0)
    ctx->pc = 0x475660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_475664:
    // 0x475664: 0xc0ecfe8  jal         func_3B3FA0
label_475668:
    if (ctx->pc == 0x475668u) {
        ctx->pc = 0x47566Cu;
        goto label_47566c;
    }
    ctx->pc = 0x475664u;
    SET_GPR_U32(ctx, 31, 0x47566Cu);
    ctx->pc = 0x3B3FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3FA0u, 0x475664u, 0x47566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47566Cu;
label_47566c:
    // 0x47566c: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_475670:
    if (ctx->pc == 0x475670u) {
        ctx->pc = 0x475674u;
        goto label_475674;
    }
    ctx->pc = 0x47566Cu;
    {
        const bool branch_taken_0x47566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47566c) {
            ctx->pc = 0x475720u;
            goto label_475720;
        }
    }
    ctx->pc = 0x475674u;
label_475674:
    // 0x475674: 0x8f83b454  lw          $v1, -0x4BAC($gp)
    ctx->pc = 0x475674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947924)));
label_475678:
    // 0x475678: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_47567c:
    if (ctx->pc == 0x47567Cu) {
        ctx->pc = 0x475680u;
        goto label_475680;
    }
    ctx->pc = 0x475678u;
    {
        const bool branch_taken_0x475678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x475678) {
            ctx->pc = 0x475718u;
            goto label_475718;
        }
    }
    ctx->pc = 0x475680u;
label_475680:
    // 0x475680: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x475680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_475684:
    // 0x475684: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x475684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_475688:
    // 0x475688: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x475688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_47568c:
    // 0x47568c: 0xc115ee8  jal         func_457BA0
label_475690:
    if (ctx->pc == 0x475690u) {
        ctx->pc = 0x475694u;
        goto label_475694;
    }
    ctx->pc = 0x47568Cu;
    SET_GPR_U32(ctx, 31, 0x475694u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x47568Cu, 0x475694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475694u;
label_475694:
    // 0x475694: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_475698:
    if (ctx->pc == 0x475698u) {
        ctx->pc = 0x47569Cu;
        goto label_47569c;
    }
    ctx->pc = 0x475694u;
    {
        const bool branch_taken_0x475694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475694) {
            ctx->pc = 0x475718u;
            goto label_475718;
        }
    }
    ctx->pc = 0x47569Cu;
label_47569c:
    // 0x47569c: 0x8fa30378  lw          $v1, 0x378($sp)
    ctx->pc = 0x47569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_4756a0:
    // 0x4756a0: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_4756a4:
    if (ctx->pc == 0x4756A4u) {
        ctx->pc = 0x4756A8u;
        goto label_4756a8;
    }
    ctx->pc = 0x4756A0u;
    {
        const bool branch_taken_0x4756a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4756a0) {
            ctx->pc = 0x475718u;
            goto label_475718;
        }
    }
    ctx->pc = 0x4756A8u;
label_4756a8:
    // 0x4756a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4756a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4756ac:
    // 0x4756ac: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4756acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4756b0:
    // 0x4756b0: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x4756b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_4756b4:
    // 0x4756b4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4756b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4756b8:
    // 0x4756b8: 0x24e70db0  addiu       $a3, $a3, 0xDB0
    ctx->pc = 0x4756b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3504));
label_4756bc:
    // 0x4756bc: 0x24080075  addiu       $t0, $zero, 0x75
    ctx->pc = 0x4756bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_4756c0:
    // 0x4756c0: 0x2789b458  addiu       $t1, $gp, -0x4BA8
    ctx->pc = 0x4756c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947928));
label_4756c4:
    // 0x4756c4: 0xc113940  jal         func_44E500
label_4756c8:
    if (ctx->pc == 0x4756C8u) {
        ctx->pc = 0x4756CCu;
        goto label_4756cc;
    }
    ctx->pc = 0x4756C4u;
    SET_GPR_U32(ctx, 31, 0x4756CCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4756C4u, 0x4756CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4756CCu;
label_4756cc:
    // 0x4756cc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4756ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4756d0:
    // 0x4756d0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4756d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4756d4:
    // 0x4756d4: 0x24a50ec0  addiu       $a1, $a1, 0xEC0
    ctx->pc = 0x4756d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3776));
label_4756d8:
    // 0x4756d8: 0xc115c24  jal         func_457090
label_4756dc:
    if (ctx->pc == 0x4756DCu) {
        ctx->pc = 0x4756E0u;
        goto label_4756e0;
    }
    ctx->pc = 0x4756D8u;
    SET_GPR_U32(ctx, 31, 0x4756E0u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4756D8u, 0x4756E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4756E0u;
label_4756e0:
    // 0x4756e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4756e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4756e4:
    // 0x4756e4: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x4756e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_4756e8:
    // 0x4756e8: 0x40f809  jalr        $v0
label_4756ec:
    if (ctx->pc == 0x4756ECu) {
        ctx->pc = 0x4756F0u;
        goto label_4756f0;
    }
    ctx->pc = 0x4756E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4756F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4756E8u, 0x4756F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4756F0u;
label_4756f0:
    // 0x4756f0: 0xaf82b454  sw          $v0, -0x4BAC($gp)
    ctx->pc = 0x4756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947924), GPR_U32(ctx, 2));
label_4756f4:
    // 0x4756f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4756f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4756f8:
    // 0x4756f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4756fc:
    if (ctx->pc == 0x4756FCu) {
        ctx->pc = 0x475700u;
        goto label_475700;
    }
    ctx->pc = 0x4756F8u;
    {
        const bool branch_taken_0x4756f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4756f8) {
            ctx->pc = 0x475708u;
            goto label_475708;
        }
    }
    ctx->pc = 0x475700u;
label_475700:
    // 0x475700: 0xd  break       0
    ctx->pc = 0x475700u;
    runtime->handleBreak(rdram, ctx);
label_475704:
    // 0x475704: 0x0  nop
    ctx->pc = 0x475704u;
    // NOP
label_475708:
    // 0x475708: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x475708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47570c:
    // 0x47570c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47570cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_475710:
    // 0x475710: 0xc11392c  jal         func_44E4B0
label_475714:
    if (ctx->pc == 0x475714u) {
        ctx->pc = 0x475718u;
        goto label_475718;
    }
    ctx->pc = 0x475710u;
    SET_GPR_U32(ctx, 31, 0x475718u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x475710u, 0x475718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475718u;
label_475718:
    // 0x475718: 0x1000002e  b           . + 4 + (0x2E << 2)
label_47571c:
    if (ctx->pc == 0x47571Cu) {
        ctx->pc = 0x475720u;
        goto label_475720;
    }
    ctx->pc = 0x475718u;
    {
        const bool branch_taken_0x475718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x475718) {
            ctx->pc = 0x4757D4u;
            goto label_4757d4;
        }
    }
    ctx->pc = 0x475720u;
label_475720:
    // 0x475720: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x475720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475724:
    // 0x475724: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475728:
    // 0x475728: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x475728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47572c:
    // 0x47572c: 0x24650038  addiu       $a1, $v1, 0x38
    ctx->pc = 0x47572cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_475730:
    // 0x475730: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x475730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_475734:
    // 0x475734: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x475734u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_475738:
    // 0x475738: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x475738u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_47573c:
    // 0x47573c: 0x320f809  jalr        $t9
label_475740:
    if (ctx->pc == 0x475740u) {
        ctx->pc = 0x475744u;
        goto label_475744;
    }
    ctx->pc = 0x47573Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x475744u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47573Cu, 0x475744u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x475744u;
label_475744:
    // 0x475744: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475748:
    // 0x475748: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x475748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47574c:
    // 0x47574c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x47574cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475750:
    // 0x475750: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x475750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_475754:
    // 0x475754: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475758:
    // 0x475758: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x475758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47575c:
    // 0x47575c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x47575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475760:
    // 0x475760: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x475760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_475764:
    // 0x475764: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x475764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475768:
    // 0x475768: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_47576c:
    // 0x47576c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x47576cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_475770:
    // 0x475770: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x475770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475774:
    // 0x475774: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475778:
    // 0x475778: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x475778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_47577c:
    // 0x47577c: 0xc7a003e0  lwc1        $f0, 0x3E0($sp)
    ctx->pc = 0x47577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_475780:
    // 0x475780: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x475780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475784:
    // 0x475784: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x475784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_475788:
    // 0x475788: 0xc7a003f0  lwc1        $f0, 0x3F0($sp)
    ctx->pc = 0x475788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_47578c:
    // 0x47578c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x47578cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_475790:
    // 0x475790: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x475790u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_475794:
    // 0x475794: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x475794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_475798:
    // 0x475798: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x475798u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_47579c:
    // 0x47579c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x47579cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4757a0:
    // 0x4757a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4757a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4757a4:
    // 0x4757a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4757a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4757a8:
    // 0x4757a8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4757a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4757ac:
    // 0x4757ac: 0x320f809  jalr        $t9
label_4757b0:
    if (ctx->pc == 0x4757B0u) {
        ctx->pc = 0x4757B4u;
        goto label_4757b4;
    }
    ctx->pc = 0x4757ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4757B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4757ACu, 0x4757B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4757B4u;
label_4757b4:
    // 0x4757b4: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x4757b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4757b8:
    // 0x4757b8: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x4757b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_4757bc:
    // 0x4757bc: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_4757c0:
    if (ctx->pc == 0x4757C0u) {
        ctx->pc = 0x4757C4u;
        goto label_4757c4;
    }
    ctx->pc = 0x4757BCu;
    {
        const bool branch_taken_0x4757bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4757bc) {
            ctx->pc = 0x4757D4u;
            goto label_4757d4;
        }
    }
    ctx->pc = 0x4757C4u;
label_4757c4:
    // 0x4757c4: 0xc103db0  jal         func_40F6C0
label_4757c8:
    if (ctx->pc == 0x4757C8u) {
        ctx->pc = 0x4757CCu;
        goto label_4757cc;
    }
    ctx->pc = 0x4757C4u;
    SET_GPR_U32(ctx, 31, 0x4757CCu);
    ctx->pc = 0x40F6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F6C0u, 0x4757C4u, 0x4757CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4757CCu;
label_4757cc:
    // 0x4757cc: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x4757ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_4757d0:
    // 0x4757d0: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x4757d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
label_4757d4:
    // 0x4757d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4757d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4757d8:
    // 0x4757d8: 0x27bd0410  addiu       $sp, $sp, 0x410
    ctx->pc = 0x4757d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_4757dc:
    // 0x4757dc: 0x3e00008  jr          $ra
label_4757e0:
    if (ctx->pc == 0x4757E0u) {
        ctx->pc = 0x4757E4u;
        goto label_4757e4;
    }
    ctx->pc = 0x4757DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4757DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4757E4u;
label_4757e4:
    // 0x4757e4: 0x0  nop
    ctx->pc = 0x4757e4u;
    // NOP
label_4757e8:
    // 0x4757e8: 0x0  nop
    ctx->pc = 0x4757e8u;
    // NOP
label_4757ec:
    // 0x4757ec: 0x0  nop
    ctx->pc = 0x4757ecu;
    // NOP
label_4757f0:
    // 0x4757f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4757f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4757f4:
    // 0x4757f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4757f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4757f8:
    // 0x4757f8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4757f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_4757fc:
    // 0x4757fc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x4757fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_475800:
    // 0x475800: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x475800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475804:
    // 0x475804: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_475808:
    if (ctx->pc == 0x475808u) {
        ctx->pc = 0x47580Cu;
        goto label_47580c;
    }
    ctx->pc = 0x475804u;
    {
        const bool branch_taken_0x475804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x475804) {
            ctx->pc = 0x47585Cu;
            goto label_47585c;
        }
    }
    ctx->pc = 0x47580Cu;
label_47580c:
    // 0x47580c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x47580cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_475810:
    // 0x475810: 0x24636d90  addiu       $v1, $v1, 0x6D90
    ctx->pc = 0x475810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28048));
label_475814:
    // 0x475814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x475814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475818:
    // 0x475818: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x475818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_47581c:
    // 0x47581c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47581cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475820:
    // 0x475820: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x475820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_475824:
    // 0x475824: 0xc103da2  jal         func_40F688
label_475828:
    if (ctx->pc == 0x475828u) {
        ctx->pc = 0x47582Cu;
        goto label_47582c;
    }
    ctx->pc = 0x475824u;
    SET_GPR_U32(ctx, 31, 0x47582Cu);
    ctx->pc = 0x40F688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F688u, 0x475824u, 0x47582Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47582Cu;
label_47582c:
    // 0x47582c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47582cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475830:
    // 0x475830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x475830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_475834:
    // 0x475834: 0xc11caf4  jal         func_472BD0
label_475838:
    if (ctx->pc == 0x475838u) {
        ctx->pc = 0x47583Cu;
        goto label_47583c;
    }
    ctx->pc = 0x475834u;
    SET_GPR_U32(ctx, 31, 0x47583Cu);
    ctx->pc = 0x472BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472BD0u, 0x475834u, 0x47583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47583Cu;
label_47583c:
    // 0x47583c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x47583cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_475840:
    // 0x475840: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x475840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_475844:
    // 0x475844: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x475844u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_475848:
    // 0x475848: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_47584c:
    if (ctx->pc == 0x47584Cu) {
        ctx->pc = 0x475850u;
        goto label_475850;
    }
    ctx->pc = 0x475848u;
    {
        const bool branch_taken_0x475848 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x475848) {
            ctx->pc = 0x47585Cu;
            goto label_47585c;
        }
    }
    ctx->pc = 0x475850u;
label_475850:
    // 0x475850: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x475850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475854:
    // 0x475854: 0xc0ba070  jal         func_2E81C0
label_475858:
    if (ctx->pc == 0x475858u) {
        ctx->pc = 0x47585Cu;
        goto label_47585c;
    }
    ctx->pc = 0x475854u;
    SET_GPR_U32(ctx, 31, 0x47585Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x475854u, 0x47585Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47585Cu;
label_47585c:
    // 0x47585c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x47585cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_475860:
    // 0x475860: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x475860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_475864:
    // 0x475864: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x475864u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_475868:
    // 0x475868: 0x3e00008  jr          $ra
label_47586c:
    if (ctx->pc == 0x47586Cu) {
        ctx->pc = 0x475870u;
        goto label_fallthrough_0x475868;
    }
    ctx->pc = 0x475868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x475868:
    ctx->pc = 0x475870u;
}
