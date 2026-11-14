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

// Function: sub_00427438
// Address: 0x427438 - 0x4279a8
void sub_00427438_0x427438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00427438_0x427438");
#endif

    switch (ctx->pc) {
        case 0x427438u: goto label_427438;
        case 0x42743cu: goto label_42743c;
        case 0x427440u: goto label_427440;
        case 0x427444u: goto label_427444;
        case 0x427448u: goto label_427448;
        case 0x42744cu: goto label_42744c;
        case 0x427450u: goto label_427450;
        case 0x427454u: goto label_427454;
        case 0x427458u: goto label_427458;
        case 0x42745cu: goto label_42745c;
        case 0x427460u: goto label_427460;
        case 0x427464u: goto label_427464;
        case 0x427468u: goto label_427468;
        case 0x42746cu: goto label_42746c;
        case 0x427470u: goto label_427470;
        case 0x427474u: goto label_427474;
        case 0x427478u: goto label_427478;
        case 0x42747cu: goto label_42747c;
        case 0x427480u: goto label_427480;
        case 0x427484u: goto label_427484;
        case 0x427488u: goto label_427488;
        case 0x42748cu: goto label_42748c;
        case 0x427490u: goto label_427490;
        case 0x427494u: goto label_427494;
        case 0x427498u: goto label_427498;
        case 0x42749cu: goto label_42749c;
        case 0x4274a0u: goto label_4274a0;
        case 0x4274a4u: goto label_4274a4;
        case 0x4274a8u: goto label_4274a8;
        case 0x4274acu: goto label_4274ac;
        case 0x4274b0u: goto label_4274b0;
        case 0x4274b4u: goto label_4274b4;
        case 0x4274b8u: goto label_4274b8;
        case 0x4274bcu: goto label_4274bc;
        case 0x4274c0u: goto label_4274c0;
        case 0x4274c4u: goto label_4274c4;
        case 0x4274c8u: goto label_4274c8;
        case 0x4274ccu: goto label_4274cc;
        case 0x4274d0u: goto label_4274d0;
        case 0x4274d4u: goto label_4274d4;
        case 0x4274d8u: goto label_4274d8;
        case 0x4274dcu: goto label_4274dc;
        case 0x4274e0u: goto label_4274e0;
        case 0x4274e4u: goto label_4274e4;
        case 0x4274e8u: goto label_4274e8;
        case 0x4274ecu: goto label_4274ec;
        case 0x4274f0u: goto label_4274f0;
        case 0x4274f4u: goto label_4274f4;
        case 0x4274f8u: goto label_4274f8;
        case 0x4274fcu: goto label_4274fc;
        case 0x427500u: goto label_427500;
        case 0x427504u: goto label_427504;
        case 0x427508u: goto label_427508;
        case 0x42750cu: goto label_42750c;
        case 0x427510u: goto label_427510;
        case 0x427514u: goto label_427514;
        case 0x427518u: goto label_427518;
        case 0x42751cu: goto label_42751c;
        case 0x427520u: goto label_427520;
        case 0x427524u: goto label_427524;
        case 0x427528u: goto label_427528;
        case 0x42752cu: goto label_42752c;
        case 0x427530u: goto label_427530;
        case 0x427534u: goto label_427534;
        case 0x427538u: goto label_427538;
        case 0x42753cu: goto label_42753c;
        case 0x427540u: goto label_427540;
        case 0x427544u: goto label_427544;
        case 0x427548u: goto label_427548;
        case 0x42754cu: goto label_42754c;
        case 0x427550u: goto label_427550;
        case 0x427554u: goto label_427554;
        case 0x427558u: goto label_427558;
        case 0x42755cu: goto label_42755c;
        case 0x427560u: goto label_427560;
        case 0x427564u: goto label_427564;
        case 0x427568u: goto label_427568;
        case 0x42756cu: goto label_42756c;
        case 0x427570u: goto label_427570;
        case 0x427574u: goto label_427574;
        case 0x427578u: goto label_427578;
        case 0x42757cu: goto label_42757c;
        case 0x427580u: goto label_427580;
        case 0x427584u: goto label_427584;
        case 0x427588u: goto label_427588;
        case 0x42758cu: goto label_42758c;
        case 0x427590u: goto label_427590;
        case 0x427594u: goto label_427594;
        case 0x427598u: goto label_427598;
        case 0x42759cu: goto label_42759c;
        case 0x4275a0u: goto label_4275a0;
        case 0x4275a4u: goto label_4275a4;
        case 0x4275a8u: goto label_4275a8;
        case 0x4275acu: goto label_4275ac;
        case 0x4275b0u: goto label_4275b0;
        case 0x4275b4u: goto label_4275b4;
        case 0x4275b8u: goto label_4275b8;
        case 0x4275bcu: goto label_4275bc;
        case 0x4275c0u: goto label_4275c0;
        case 0x4275c4u: goto label_4275c4;
        case 0x4275c8u: goto label_4275c8;
        case 0x4275ccu: goto label_4275cc;
        case 0x4275d0u: goto label_4275d0;
        case 0x4275d4u: goto label_4275d4;
        case 0x4275d8u: goto label_4275d8;
        case 0x4275dcu: goto label_4275dc;
        case 0x4275e0u: goto label_4275e0;
        case 0x4275e4u: goto label_4275e4;
        case 0x4275e8u: goto label_4275e8;
        case 0x4275ecu: goto label_4275ec;
        case 0x4275f0u: goto label_4275f0;
        case 0x4275f4u: goto label_4275f4;
        case 0x4275f8u: goto label_4275f8;
        case 0x4275fcu: goto label_4275fc;
        case 0x427600u: goto label_427600;
        case 0x427604u: goto label_427604;
        case 0x427608u: goto label_427608;
        case 0x42760cu: goto label_42760c;
        case 0x427610u: goto label_427610;
        case 0x427614u: goto label_427614;
        case 0x427618u: goto label_427618;
        case 0x42761cu: goto label_42761c;
        case 0x427620u: goto label_427620;
        case 0x427624u: goto label_427624;
        case 0x427628u: goto label_427628;
        case 0x42762cu: goto label_42762c;
        case 0x427630u: goto label_427630;
        case 0x427634u: goto label_427634;
        case 0x427638u: goto label_427638;
        case 0x42763cu: goto label_42763c;
        case 0x427640u: goto label_427640;
        case 0x427644u: goto label_427644;
        case 0x427648u: goto label_427648;
        case 0x42764cu: goto label_42764c;
        case 0x427650u: goto label_427650;
        case 0x427654u: goto label_427654;
        case 0x427658u: goto label_427658;
        case 0x42765cu: goto label_42765c;
        case 0x427660u: goto label_427660;
        case 0x427664u: goto label_427664;
        case 0x427668u: goto label_427668;
        case 0x42766cu: goto label_42766c;
        case 0x427670u: goto label_427670;
        case 0x427674u: goto label_427674;
        case 0x427678u: goto label_427678;
        case 0x42767cu: goto label_42767c;
        case 0x427680u: goto label_427680;
        case 0x427684u: goto label_427684;
        case 0x427688u: goto label_427688;
        case 0x42768cu: goto label_42768c;
        case 0x427690u: goto label_427690;
        case 0x427694u: goto label_427694;
        case 0x427698u: goto label_427698;
        case 0x42769cu: goto label_42769c;
        case 0x4276a0u: goto label_4276a0;
        case 0x4276a4u: goto label_4276a4;
        case 0x4276a8u: goto label_4276a8;
        case 0x4276acu: goto label_4276ac;
        case 0x4276b0u: goto label_4276b0;
        case 0x4276b4u: goto label_4276b4;
        case 0x4276b8u: goto label_4276b8;
        case 0x4276bcu: goto label_4276bc;
        case 0x4276c0u: goto label_4276c0;
        case 0x4276c4u: goto label_4276c4;
        case 0x4276c8u: goto label_4276c8;
        case 0x4276ccu: goto label_4276cc;
        case 0x4276d0u: goto label_4276d0;
        case 0x4276d4u: goto label_4276d4;
        case 0x4276d8u: goto label_4276d8;
        case 0x4276dcu: goto label_4276dc;
        case 0x4276e0u: goto label_4276e0;
        case 0x4276e4u: goto label_4276e4;
        case 0x4276e8u: goto label_4276e8;
        case 0x4276ecu: goto label_4276ec;
        case 0x4276f0u: goto label_4276f0;
        case 0x4276f4u: goto label_4276f4;
        case 0x4276f8u: goto label_4276f8;
        case 0x4276fcu: goto label_4276fc;
        case 0x427700u: goto label_427700;
        case 0x427704u: goto label_427704;
        case 0x427708u: goto label_427708;
        case 0x42770cu: goto label_42770c;
        case 0x427710u: goto label_427710;
        case 0x427714u: goto label_427714;
        case 0x427718u: goto label_427718;
        case 0x42771cu: goto label_42771c;
        case 0x427720u: goto label_427720;
        case 0x427724u: goto label_427724;
        case 0x427728u: goto label_427728;
        case 0x42772cu: goto label_42772c;
        case 0x427730u: goto label_427730;
        case 0x427734u: goto label_427734;
        case 0x427738u: goto label_427738;
        case 0x42773cu: goto label_42773c;
        case 0x427740u: goto label_427740;
        case 0x427744u: goto label_427744;
        case 0x427748u: goto label_427748;
        case 0x42774cu: goto label_42774c;
        case 0x427750u: goto label_427750;
        case 0x427754u: goto label_427754;
        case 0x427758u: goto label_427758;
        case 0x42775cu: goto label_42775c;
        case 0x427760u: goto label_427760;
        case 0x427764u: goto label_427764;
        case 0x427768u: goto label_427768;
        case 0x42776cu: goto label_42776c;
        case 0x427770u: goto label_427770;
        case 0x427774u: goto label_427774;
        case 0x427778u: goto label_427778;
        case 0x42777cu: goto label_42777c;
        case 0x427780u: goto label_427780;
        case 0x427784u: goto label_427784;
        case 0x427788u: goto label_427788;
        case 0x42778cu: goto label_42778c;
        case 0x427790u: goto label_427790;
        case 0x427794u: goto label_427794;
        case 0x427798u: goto label_427798;
        case 0x42779cu: goto label_42779c;
        case 0x4277a0u: goto label_4277a0;
        case 0x4277a4u: goto label_4277a4;
        case 0x4277a8u: goto label_4277a8;
        case 0x4277acu: goto label_4277ac;
        case 0x4277b0u: goto label_4277b0;
        case 0x4277b4u: goto label_4277b4;
        case 0x4277b8u: goto label_4277b8;
        case 0x4277bcu: goto label_4277bc;
        case 0x4277c0u: goto label_4277c0;
        case 0x4277c4u: goto label_4277c4;
        case 0x4277c8u: goto label_4277c8;
        case 0x4277ccu: goto label_4277cc;
        case 0x4277d0u: goto label_4277d0;
        case 0x4277d4u: goto label_4277d4;
        case 0x4277d8u: goto label_4277d8;
        case 0x4277dcu: goto label_4277dc;
        case 0x4277e0u: goto label_4277e0;
        case 0x4277e4u: goto label_4277e4;
        case 0x4277e8u: goto label_4277e8;
        case 0x4277ecu: goto label_4277ec;
        case 0x4277f0u: goto label_4277f0;
        case 0x4277f4u: goto label_4277f4;
        case 0x4277f8u: goto label_4277f8;
        case 0x4277fcu: goto label_4277fc;
        case 0x427800u: goto label_427800;
        case 0x427804u: goto label_427804;
        case 0x427808u: goto label_427808;
        case 0x42780cu: goto label_42780c;
        case 0x427810u: goto label_427810;
        case 0x427814u: goto label_427814;
        case 0x427818u: goto label_427818;
        case 0x42781cu: goto label_42781c;
        case 0x427820u: goto label_427820;
        case 0x427824u: goto label_427824;
        case 0x427828u: goto label_427828;
        case 0x42782cu: goto label_42782c;
        case 0x427830u: goto label_427830;
        case 0x427834u: goto label_427834;
        case 0x427838u: goto label_427838;
        case 0x42783cu: goto label_42783c;
        case 0x427840u: goto label_427840;
        case 0x427844u: goto label_427844;
        case 0x427848u: goto label_427848;
        case 0x42784cu: goto label_42784c;
        case 0x427850u: goto label_427850;
        case 0x427854u: goto label_427854;
        case 0x427858u: goto label_427858;
        case 0x42785cu: goto label_42785c;
        case 0x427860u: goto label_427860;
        case 0x427864u: goto label_427864;
        case 0x427868u: goto label_427868;
        case 0x42786cu: goto label_42786c;
        case 0x427870u: goto label_427870;
        case 0x427874u: goto label_427874;
        case 0x427878u: goto label_427878;
        case 0x42787cu: goto label_42787c;
        case 0x427880u: goto label_427880;
        case 0x427884u: goto label_427884;
        case 0x427888u: goto label_427888;
        case 0x42788cu: goto label_42788c;
        case 0x427890u: goto label_427890;
        case 0x427894u: goto label_427894;
        case 0x427898u: goto label_427898;
        case 0x42789cu: goto label_42789c;
        case 0x4278a0u: goto label_4278a0;
        case 0x4278a4u: goto label_4278a4;
        case 0x4278a8u: goto label_4278a8;
        case 0x4278acu: goto label_4278ac;
        case 0x4278b0u: goto label_4278b0;
        case 0x4278b4u: goto label_4278b4;
        case 0x4278b8u: goto label_4278b8;
        case 0x4278bcu: goto label_4278bc;
        case 0x4278c0u: goto label_4278c0;
        case 0x4278c4u: goto label_4278c4;
        case 0x4278c8u: goto label_4278c8;
        case 0x4278ccu: goto label_4278cc;
        case 0x4278d0u: goto label_4278d0;
        case 0x4278d4u: goto label_4278d4;
        case 0x4278d8u: goto label_4278d8;
        case 0x4278dcu: goto label_4278dc;
        case 0x4278e0u: goto label_4278e0;
        case 0x4278e4u: goto label_4278e4;
        case 0x4278e8u: goto label_4278e8;
        case 0x4278ecu: goto label_4278ec;
        case 0x4278f0u: goto label_4278f0;
        case 0x4278f4u: goto label_4278f4;
        case 0x4278f8u: goto label_4278f8;
        case 0x4278fcu: goto label_4278fc;
        case 0x427900u: goto label_427900;
        case 0x427904u: goto label_427904;
        case 0x427908u: goto label_427908;
        case 0x42790cu: goto label_42790c;
        case 0x427910u: goto label_427910;
        case 0x427914u: goto label_427914;
        case 0x427918u: goto label_427918;
        case 0x42791cu: goto label_42791c;
        case 0x427920u: goto label_427920;
        case 0x427924u: goto label_427924;
        case 0x427928u: goto label_427928;
        case 0x42792cu: goto label_42792c;
        case 0x427930u: goto label_427930;
        case 0x427934u: goto label_427934;
        case 0x427938u: goto label_427938;
        case 0x42793cu: goto label_42793c;
        case 0x427940u: goto label_427940;
        case 0x427944u: goto label_427944;
        case 0x427948u: goto label_427948;
        case 0x42794cu: goto label_42794c;
        case 0x427950u: goto label_427950;
        case 0x427954u: goto label_427954;
        case 0x427958u: goto label_427958;
        case 0x42795cu: goto label_42795c;
        case 0x427960u: goto label_427960;
        case 0x427964u: goto label_427964;
        case 0x427968u: goto label_427968;
        case 0x42796cu: goto label_42796c;
        case 0x427970u: goto label_427970;
        case 0x427974u: goto label_427974;
        case 0x427978u: goto label_427978;
        case 0x42797cu: goto label_42797c;
        case 0x427980u: goto label_427980;
        case 0x427984u: goto label_427984;
        case 0x427988u: goto label_427988;
        case 0x42798cu: goto label_42798c;
        case 0x427990u: goto label_427990;
        case 0x427994u: goto label_427994;
        case 0x427998u: goto label_427998;
        case 0x42799cu: goto label_42799c;
        case 0x4279a0u: goto label_4279a0;
        case 0x4279a4u: goto label_4279a4;
        default: break;
    }

    ctx->pc = 0x427438u;

label_427438:
    // 0x427438: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x427438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_42743c:
    // 0x42743c: 0x80c82d  daddu       $t9, $a0, $zero
    ctx->pc = 0x42743cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_427440:
    // 0x427440: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x427440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_427444:
    // 0x427444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x427444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_427448:
    // 0x427448: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x427448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_42744c:
    // 0x42744c: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x42744cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_427450:
    // 0x427450: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x427450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_427454:
    // 0x427454: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x427454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_427458:
    // 0x427458: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x427458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_42745c:
    // 0x42745c: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x42745cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_427460:
    // 0x427460: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x427460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_427464:
    // 0x427464: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x427464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_427468:
    // 0x427468: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x427468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_42746c:
    // 0x42746c: 0x13220005  beq         $t9, $v0, . + 4 + (0x5 << 2)
label_427470:
    if (ctx->pc == 0x427470u) {
        ctx->pc = 0x427470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42746Cu;
        // 0x427470: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427474u;
        goto label_427474;
    }
    ctx->pc = 0x42746Cu;
    {
        const bool branch_taken_0x42746c = (GPR_U64(ctx, 25) == GPR_U64(ctx, 2));
        ctx->pc = 0x427470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42746Cu;
        // 0x427470: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42746c) {
            ctx->pc = 0x427484u;
            goto label_427484;
        }
    }
    ctx->pc = 0x427474u;
label_427474:
    // 0x427474: 0x2782beac  addiu       $v0, $gp, -0x4154
    ctx->pc = 0x427474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950572));
label_427478:
    // 0x427478: 0x39c1824  and         $v1, $gp, $gp
    ctx->pc = 0x427478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 28) & GPR_U64(ctx, 28));
label_42747c:
    // 0x42747c: 0x8c5c0000  lw          $gp, 0x0($v0)
    ctx->pc = 0x42747cu;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_427480:
    // 0x427480: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x427480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_427484:
    // 0x427484: 0x2722ffff  addiu       $v0, $t9, -0x1
    ctx->pc = 0x427484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
label_427488:
    // 0x427488: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x427488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_42748c:
    // 0x42748c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_427490:
    if (ctx->pc == 0x427490u) {
        ctx->pc = 0x427494u;
        goto label_427494;
    }
    ctx->pc = 0x42748Cu;
    {
        const bool branch_taken_0x42748c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42748c) {
            ctx->pc = 0x4274ACu;
            goto label_4274ac;
        }
    }
    ctx->pc = 0x427494u;
label_427494:
    // 0x427494: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x427494u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_427498:
    // 0x427498: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_42749c:
    if (ctx->pc == 0x42749Cu) {
        ctx->pc = 0x4274A0u;
        goto label_4274a0;
    }
    ctx->pc = 0x427498u;
    {
        const bool branch_taken_0x427498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427498) {
            ctx->pc = 0x4274ACu;
            goto label_4274ac;
        }
    }
    ctx->pc = 0x4274A0u;
label_4274a0:
    // 0x4274a0: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x4274a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_4274a4:
    // 0x4274a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4274a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4274a8:
    // 0x4274a8: 0xa382be90  sb          $v0, -0x4170($gp)
    ctx->pc = 0x4274a8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 2));
label_4274ac:
    // 0x4274ac: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x4274acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_4274b0:
    // 0x4274b0: 0x1440012b  bnez        $v0, . + 4 + (0x12B << 2)
label_4274b4:
    if (ctx->pc == 0x4274B4u) {
        ctx->pc = 0x4274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274B0u;
        // 0x4274b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4274B8u;
        goto label_4274b8;
    }
    ctx->pc = 0x4274B0u;
    {
        const bool branch_taken_0x4274b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4274B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274B0u;
        // 0x4274b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4274b0) {
            ctx->pc = 0x427960u;
            goto label_427960;
        }
    }
    ctx->pc = 0x4274B8u;
label_4274b8:
    // 0x4274b8: 0x8f85be98  lw          $a1, -0x4168($gp)
    ctx->pc = 0x4274b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_4274bc:
    // 0x4274bc: 0x8f82be9c  lw          $v0, -0x4164($gp)
    ctx->pc = 0x4274bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
label_4274c0:
    // 0x4274c0: 0x10a20127  beq         $a1, $v0, . + 4 + (0x127 << 2)
label_4274c4:
    if (ctx->pc == 0x4274C4u) {
        ctx->pc = 0x4274C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274C0u;
        // 0x4274c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4274C8u;
        goto label_4274c8;
    }
    ctx->pc = 0x4274C0u;
    {
        const bool branch_taken_0x4274c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x4274C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274C0u;
        // 0x4274c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4274c0) {
            ctx->pc = 0x427960u;
            goto label_427960;
        }
    }
    ctx->pc = 0x4274C8u;
label_4274c8:
    // 0x4274c8: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x4274c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
label_4274cc:
    // 0x4274cc: 0x14400124  bnez        $v0, . + 4 + (0x124 << 2)
label_4274d0:
    if (ctx->pc == 0x4274D0u) {
        ctx->pc = 0x4274D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274CCu;
        // 0x4274d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4274D4u;
        goto label_4274d4;
    }
    ctx->pc = 0x4274CCu;
    {
        const bool branch_taken_0x4274cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4274D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4274CCu;
        // 0x4274d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4274cc) {
            ctx->pc = 0x427960u;
            goto label_427960;
        }
    }
    ctx->pc = 0x4274D4u;
label_4274d4:
    // 0x4274d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x4274d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
label_4274d8:
    // 0x4274d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4274d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_4274dc:
    // 0x4274dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4274dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4274e0:
    // 0x4274e0: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x4274e0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
label_4274e4:
    // 0x4274e4: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x4274e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
label_4274e8:
    // 0x4274e8: 0x191027  nor         $v0, $zero, $t9
    ctx->pc = 0x4274e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 25)));
label_4274ec:
    // 0x4274ec: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x4274ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
label_4274f0:
    // 0x4274f0: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x4274f0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
label_4274f4:
    // 0x4274f4: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x4274f4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
label_4274f8:
    // 0x4274f8: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x4274f8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
label_4274fc:
    // 0x4274fc: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x4274fcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_427500:
    // 0x427500: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x427500u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
label_427504:
    // 0x427504: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x427504u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
label_427508:
    // 0x427508: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x427508u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
label_42750c:
    // 0x42750c: 0x3c0e1000  lui         $t6, 0x1000
    ctx->pc = 0x42750cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)4096 << 16));
label_427510:
    // 0x427510: 0x3c100fff  lui         $s0, 0xFFF
    ctx->pc = 0x427510u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4095 << 16));
label_427514:
    // 0x427514: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x427514u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
label_427518:
    // 0x427518: 0x7fa40010  sq          $a0, 0x10($sp)
    ctx->pc = 0x427518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 4));
label_42751c:
    // 0x42751c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x42751cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_427520:
    // 0x427520: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x427520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_427524:
    // 0x427524: 0x35ef5000  ori         $t7, $t7, 0x5000
    ctx->pc = 0x427524u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)20480);
label_427528:
    // 0x427528: 0x358c3020  ori         $t4, $t4, 0x3020
    ctx->pc = 0x427528u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)12320);
label_42752c:
    // 0x42752c: 0x37de3010  ori         $fp, $fp, 0x3010
    ctx->pc = 0x42752cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)12304);
label_427530:
    // 0x427530: 0x36f7a030  ori         $s7, $s7, 0xA030
    ctx->pc = 0x427530u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)41008);
label_427534:
    // 0x427534: 0x3694a020  ori         $s4, $s4, 0xA020
    ctx->pc = 0x427534u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)40992);
label_427538:
    // 0x427538: 0x3673a000  ori         $s3, $s3, 0xA000
    ctx->pc = 0x427538u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)40960);
label_42753c:
    // 0x42753c: 0x36b59030  ori         $s5, $s5, 0x9030
    ctx->pc = 0x42753cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)36912);
label_427540:
    // 0x427540: 0x36529020  ori         $s2, $s2, 0x9020
    ctx->pc = 0x427540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)36896);
label_427544:
    // 0x427544: 0x36319000  ori         $s1, $s1, 0x9000
    ctx->pc = 0x427544u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)36864);
label_427548:
    // 0x427548: 0x35cea010  ori         $t6, $t6, 0xA010
    ctx->pc = 0x427548u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)40976);
label_42754c:
    // 0x42754c: 0x3610f000  ori         $s0, $s0, 0xF000
    ctx->pc = 0x42754cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)61440);
label_427550:
    // 0x427550: 0x35ad9010  ori         $t5, $t5, 0x9010
    ctx->pc = 0x427550u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)36880);
label_427554:
    // 0x427554: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x427554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_427558:
    // 0x427558: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x427558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_42755c:
    // 0x42755c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x42755cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_427560:
    // 0x427560: 0x108200d9  beq         $a0, $v0, . + 4 + (0xD9 << 2)
label_427564:
    if (ctx->pc == 0x427564u) {
        ctx->pc = 0x427564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427560u;
        // 0x427564: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x427568u;
        goto label_427568;
    }
    ctx->pc = 0x427560u;
    {
        const bool branch_taken_0x427560 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x427564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427560u;
        // 0x427564: 0x2c820042  sltiu       $v0, $a0, 0x42 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)66) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427560) {
            ctx->pc = 0x4278C8u;
            goto label_4278c8;
        }
    }
    ctx->pc = 0x427568u;
label_427568:
    // 0x427568: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_42756c:
    if (ctx->pc == 0x42756Cu) {
        ctx->pc = 0x42756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427568u;
        // 0x42756c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427570u;
        goto label_427570;
    }
    ctx->pc = 0x427568u;
    {
        const bool branch_taken_0x427568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427568u;
        // 0x42756c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427568) {
            ctx->pc = 0x4275A8u;
            goto label_4275a8;
        }
    }
    ctx->pc = 0x427570u;
label_427570:
    // 0x427570: 0x1082006e  beq         $a0, $v0, . + 4 + (0x6E << 2)
label_427574:
    if (ctx->pc == 0x427574u) {
        ctx->pc = 0x427574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427570u;
        // 0x427574: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x427578u;
        goto label_427578;
    }
    ctx->pc = 0x427570u;
    {
        const bool branch_taken_0x427570 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x427574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427570u;
        // 0x427574: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427570) {
            ctx->pc = 0x42772Cu;
            goto label_42772c;
        }
    }
    ctx->pc = 0x427578u;
label_427578:
    // 0x427578: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_42757c:
    if (ctx->pc == 0x42757Cu) {
        ctx->pc = 0x42757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427578u;
        // 0x42757c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427580u;
        goto label_427580;
    }
    ctx->pc = 0x427578u;
    {
        const bool branch_taken_0x427578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427578) {
            ctx->pc = 0x42757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427578u;
            // 0x42757c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427590u;
            goto label_427590;
        }
    }
    ctx->pc = 0x427580u;
label_427580:
    // 0x427580: 0x109600a3  beq         $a0, $s6, . + 4 + (0xA3 << 2)
label_427584:
    if (ctx->pc == 0x427584u) {
        ctx->pc = 0x427584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427580u;
        // 0x427584: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427588u;
        goto label_427588;
    }
    ctx->pc = 0x427580u;
    {
        const bool branch_taken_0x427580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x427584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427580u;
        // 0x427584: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427580) {
            ctx->pc = 0x427810u;
            goto label_427810;
        }
    }
    ctx->pc = 0x427588u;
label_427588:
    // 0x427588: 0x100000ea  b           . + 4 + (0xEA << 2)
label_42758c:
    if (ctx->pc == 0x42758Cu) {
        ctx->pc = 0x42758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427588u;
        // 0x42758c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427590u;
        goto label_427590;
    }
    ctx->pc = 0x427588u;
    {
        const bool branch_taken_0x427588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427588u;
        // 0x42758c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427588) {
            ctx->pc = 0x427934u;
            goto label_427934;
        }
    }
    ctx->pc = 0x427590u;
label_427590:
    // 0x427590: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_427594:
    if (ctx->pc == 0x427594u) {
        ctx->pc = 0x427594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427590u;
        // 0x427594: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427598u;
        goto label_427598;
    }
    ctx->pc = 0x427590u;
    {
        const bool branch_taken_0x427590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x427594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427590u;
        // 0x427594: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427590) {
            ctx->pc = 0x4275D8u;
            goto label_4275d8;
        }
    }
    ctx->pc = 0x427598u;
label_427598:
    // 0x427598: 0x108200c5  beq         $a0, $v0, . + 4 + (0xC5 << 2)
label_42759c:
    if (ctx->pc == 0x42759Cu) {
        ctx->pc = 0x42759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427598u;
        // 0x42759c: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275A0u;
        goto label_4275a0;
    }
    ctx->pc = 0x427598u;
    {
        const bool branch_taken_0x427598 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42759Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427598u;
        // 0x42759c: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427598) {
            ctx->pc = 0x4278B0u;
            goto label_4278b0;
        }
    }
    ctx->pc = 0x4275A0u;
label_4275a0:
    // 0x4275a0: 0x100000e4  b           . + 4 + (0xE4 << 2)
label_4275a4:
    if (ctx->pc == 0x4275A4u) {
        ctx->pc = 0x4275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275A0u;
        // 0x4275a4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275A8u;
        goto label_4275a8;
    }
    ctx->pc = 0x4275A0u;
    {
        const bool branch_taken_0x4275a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4275A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275A0u;
        // 0x4275a4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275a0) {
            ctx->pc = 0x427934u;
            goto label_427934;
        }
    }
    ctx->pc = 0x4275A8u;
label_4275a8:
    // 0x4275a8: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x4275a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_4275ac:
    // 0x4275ac: 0x108200df  beq         $a0, $v0, . + 4 + (0xDF << 2)
label_4275b0:
    if (ctx->pc == 0x4275B0u) {
        ctx->pc = 0x4275B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275ACu;
        // 0x4275b0: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275B4u;
        goto label_4275b4;
    }
    ctx->pc = 0x4275ACu;
    {
        const bool branch_taken_0x4275ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4275B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275ACu;
        // 0x4275b0: 0x2c820043  sltiu       $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275ac) {
            ctx->pc = 0x42792Cu;
            goto label_42792c;
        }
    }
    ctx->pc = 0x4275B4u;
label_4275b4:
    // 0x4275b4: 0x144000b2  bnez        $v0, . + 4 + (0xB2 << 2)
label_4275b8:
    if (ctx->pc == 0x4275B8u) {
        ctx->pc = 0x4275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275B4u;
        // 0x4275b8: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275BCu;
        goto label_4275bc;
    }
    ctx->pc = 0x4275B4u;
    {
        const bool branch_taken_0x4275b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4275B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275B4u;
        // 0x4275b8: 0x701024  and         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275b4) {
            ctx->pc = 0x427880u;
            goto label_427880;
        }
    }
    ctx->pc = 0x4275BCu;
label_4275bc:
    // 0x4275bc: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x4275bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
label_4275c0:
    // 0x4275c0: 0x108300ca  beq         $a0, $v1, . + 4 + (0xCA << 2)
label_4275c4:
    if (ctx->pc == 0x4275C4u) {
        ctx->pc = 0x4275C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275C0u;
        // 0x4275c4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275C8u;
        goto label_4275c8;
    }
    ctx->pc = 0x4275C0u;
    {
        const bool branch_taken_0x4275c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x4275C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275C0u;
        // 0x4275c4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275c0) {
            ctx->pc = 0x4278ECu;
            goto label_4278ec;
        }
    }
    ctx->pc = 0x4275C8u;
label_4275c8:
    // 0x4275c8: 0x108200ab  beq         $a0, $v0, . + 4 + (0xAB << 2)
label_4275cc:
    if (ctx->pc == 0x4275CCu) {
        ctx->pc = 0x4275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275C8u;
        // 0x4275cc: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275D0u;
        goto label_4275d0;
    }
    ctx->pc = 0x4275C8u;
    {
        const bool branch_taken_0x4275c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4275CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275C8u;
        // 0x4275cc: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275c8) {
            ctx->pc = 0x427878u;
            goto label_427878;
        }
    }
    ctx->pc = 0x4275D0u;
label_4275d0:
    // 0x4275d0: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_4275d4:
    if (ctx->pc == 0x4275D4u) {
        ctx->pc = 0x4275D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275D0u;
        // 0x4275d4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4275D8u;
        goto label_4275d8;
    }
    ctx->pc = 0x4275D0u;
    {
        const bool branch_taken_0x4275d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4275D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275D0u;
        // 0x4275d4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275d0) {
            ctx->pc = 0x427934u;
            goto label_427934;
        }
    }
    ctx->pc = 0x4275D8u;
label_4275d8:
    // 0x4275d8: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x4275d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_4275dc:
    // 0x4275dc: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x4275dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_4275e0:
    // 0x4275e0: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x4275e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_4275e4:
    // 0x4275e4: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x4275e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_4275e8:
    // 0x4275e8: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x4275e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_4275ec:
    // 0x4275ec: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x4275ecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_4275f0:
    // 0x4275f0: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x4275f0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_4275f4:
    // 0x4275f4: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x4275f4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_4275f8:
    // 0x4275f8: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x4275f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_4275fc:
    // 0x4275fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_427600:
    if (ctx->pc == 0x427600u) {
        ctx->pc = 0x427600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275FCu;
        // 0x427600: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x427604u;
        goto label_427604;
    }
    ctx->pc = 0x4275FCu;
    {
        const bool branch_taken_0x4275fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4275FCu;
        // 0x427600: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4275fc) {
            ctx->pc = 0x427610u;
            goto label_427610;
        }
    }
    ctx->pc = 0x427604u;
label_427604:
    // 0x427604: 0x0  nop
    ctx->pc = 0x427604u;
    // NOP
label_427608:
    // 0x427608: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_42760c:
    if (ctx->pc == 0x42760Cu) {
        ctx->pc = 0x42760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427608u;
        // 0x42760c: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427610u;
        goto label_427610;
    }
    ctx->pc = 0x427608u;
    {
        const bool branch_taken_0x427608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x42760Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427608u;
        // 0x42760c: 0x7ba30010  lq          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427608) {
            ctx->pc = 0x427660u;
            goto label_427660;
        }
    }
    ctx->pc = 0x427610u;
label_427610:
    // 0x427610: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x427610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_427614:
    // 0x427614: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x427614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_427618:
    // 0x427618: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x427618u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_42761c:
    // 0x42761c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x42761cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_427620:
    // 0x427620: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x427620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_427624:
    // 0x427624: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x427624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_427628:
    // 0x427628: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x427628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_42762c:
    // 0x42762c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x42762cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_427630:
    // 0x427630: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x427630u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_427634:
    // 0x427634: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x427634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_427638:
    // 0x427638: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x427638u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_42763c:
    // 0x42763c: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x42763cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_427640:
    // 0x427640: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x427640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_427644:
    // 0x427644: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x427644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_427648:
    // 0x427648: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x427648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_42764c:
    // 0x42764c: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x42764cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_427650:
    // 0x427650: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_427654:
    if (ctx->pc == 0x427654u) {
        ctx->pc = 0x427654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427650u;
        // 0x427654: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427658u;
        goto label_427658;
    }
    ctx->pc = 0x427650u;
    {
        const bool branch_taken_0x427650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427650u;
        // 0x427654: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427650) {
            ctx->pc = 0x427608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427608;
        }
    }
    ctx->pc = 0x427658u;
label_427658:
    // 0x427658: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_42765c:
    if (ctx->pc == 0x42765Cu) {
        ctx->pc = 0x427660u;
        goto label_427660;
    }
    ctx->pc = 0x427658u;
    {
        const bool branch_taken_0x427658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427658) {
            ctx->pc = 0x427610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427610;
        }
    }
    ctx->pc = 0x427660u;
label_427660:
    // 0x427660: 0x7de30000  sq          $v1, 0x0($t7)
    ctx->pc = 0x427660u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 3));
label_427664:
    // 0x427664: 0xf  sync
    ctx->pc = 0x427664u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_427668:
    // 0x427668: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x427668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_42766c:
    // 0x42766c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x42766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_427670:
    // 0x427670: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_427674:
    if (ctx->pc == 0x427674u) {
        ctx->pc = 0x427674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427670u;
        // 0x427674: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427678u;
        goto label_427678;
    }
    ctx->pc = 0x427670u;
    {
        const bool branch_taken_0x427670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427670u;
        // 0x427674: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427670) {
            ctx->pc = 0x42769Cu;
            goto label_42769c;
        }
    }
    ctx->pc = 0x427678u;
label_427678:
    // 0x427678: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x427678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_42767c:
    // 0x42767c: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x42767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_427680:
    // 0x427680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x427680u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10003020
label_427684:
    // 0x427684: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x427684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_427688:
    // 0x427688: 0x0  nop
    ctx->pc = 0x427688u;
    // NOP
label_42768c:
    // 0x42768c: 0x0  nop
    ctx->pc = 0x42768cu;
    // NOP
label_427690:
    // 0x427690: 0x0  nop
    ctx->pc = 0x427690u;
    // NOP
label_427694:
    // 0x427694: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_427698:
    if (ctx->pc == 0x427698u) {
        ctx->pc = 0x427698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427694u;
        // 0x427698: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42769Cu;
        goto label_42769c;
    }
    ctx->pc = 0x427694u;
    {
        const bool branch_taken_0x427694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427694u;
        // 0x427698: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427694) {
            ctx->pc = 0x427680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427680;
        }
    }
    ctx->pc = 0x42769Cu;
label_42769c:
    // 0x42769c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x42769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4276a0:
    // 0x4276a0: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4276a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_4276a4:
    // 0x4276a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4276a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4276a8:
    // 0x4276a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4276a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4276ac:
    // 0x4276ac: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4276acu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_4276b0:
    // 0x4276b0: 0x24020104  addiu       $v0, $zero, 0x104
    ctx->pc = 0x4276b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_4276b4:
    // 0x4276b4: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4276b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_4276b8:
    // 0x4276b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4276b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4276bc:
    // 0x4276bc: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4276bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_4276c0:
    // 0x4276c0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4276c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_4276c4:
    // 0x4276c4: 0xf  sync
    ctx->pc = 0x4276c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4276c8:
    // 0x4276c8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x4276c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4276cc:
    // 0x4276cc: 0x3c031f00  lui         $v1, 0x1F00
    ctx->pc = 0x4276ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7936 << 16));
label_4276d0:
    // 0x4276d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4276d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4276d4:
    // 0x4276d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_4276d8:
    if (ctx->pc == 0x4276D8u) {
        ctx->pc = 0x4276D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4276D4u;
        // 0x4276d8: 0x24040145  addiu       $a0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4276DCu;
        goto label_4276dc;
    }
    ctx->pc = 0x4276D4u;
    {
        const bool branch_taken_0x4276d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4276D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4276D4u;
        // 0x4276d8: 0x24040145  addiu       $a0, $zero, 0x145 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4276d4) {
            ctx->pc = 0x427708u;
            goto label_427708;
        }
    }
    ctx->pc = 0x4276DCu;
label_4276dc:
    // 0x4276dc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x4276dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_4276e0:
    // 0x4276e0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x4276e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
label_4276e4:
    // 0x4276e4: 0x34633020  ori         $v1, $v1, 0x3020
    ctx->pc = 0x4276e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12320);
label_4276e8:
    // 0x4276e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4276e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10003020
label_4276ec:
    // 0x4276ec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4276ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_4276f0:
    // 0x4276f0: 0x0  nop
    ctx->pc = 0x4276f0u;
    // NOP
label_4276f4:
    // 0x4276f4: 0x0  nop
    ctx->pc = 0x4276f4u;
    // NOP
label_4276f8:
    // 0x4276f8: 0x0  nop
    ctx->pc = 0x4276f8u;
    // NOP
label_4276fc:
    // 0x4276fc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_427700:
    if (ctx->pc == 0x427700u) {
        ctx->pc = 0x427704u;
        goto label_427704;
    }
    ctx->pc = 0x4276FCu;
    {
        const bool branch_taken_0x4276fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4276fc) {
            ctx->pc = 0x4276E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4276e8;
        }
    }
    ctx->pc = 0x427704u;
label_427704:
    // 0x427704: 0x24040145  addiu       $a0, $zero, 0x145
    ctx->pc = 0x427704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 325));
label_427708:
    // 0x427708: 0x8f82be98  lw          $v0, -0x4168($gp)
    ctx->pc = 0x427708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_42770c:
    // 0x42770c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x42770cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_427710:
    // 0x427710: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x427710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_427714:
    // 0x427714: 0x9383be90  lbu         $v1, -0x4170($gp)
    ctx->pc = 0x427714u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_427718:
    // 0x427718: 0xaf82be98  sw          $v0, -0x4168($gp)
    ctx->pc = 0x427718u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950552), GPR_U32(ctx, 2));
label_42771c:
    // 0x42771c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x42771cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_427720:
    // 0x427720: 0xa383be90  sb          $v1, -0x4170($gp)
    ctx->pc = 0x427720u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 3));
label_427724:
    // 0x427724: 0x10000082  b           . + 4 + (0x82 << 2)
label_427728:
    if (ctx->pc == 0x427728u) {
        ctx->pc = 0x427728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427724u;
        // 0x427728: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42772Cu;
        goto label_42772c;
    }
    ctx->pc = 0x427724u;
    {
        const bool branch_taken_0x427724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427724u;
        // 0x427728: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427724) {
            ctx->pc = 0x427930u;
            goto label_427930;
        }
    }
    ctx->pc = 0x42772Cu;
label_42772c:
    // 0x42772c: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x42772cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
label_427730:
    // 0x427730: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x427730u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
label_427734:
    // 0x427734: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x427734u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
label_427738:
    // 0x427738: 0x3c081f00  lui         $t0, 0x1F00
    ctx->pc = 0x427738u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)7936 << 16));
label_42773c:
    // 0x42773c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x42773cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
label_427740:
    // 0x427740: 0x356b9000  ori         $t3, $t3, 0x9000
    ctx->pc = 0x427740u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)36864);
label_427744:
    // 0x427744: 0x354aa000  ori         $t2, $t2, 0xA000
    ctx->pc = 0x427744u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)40960);
label_427748:
    // 0x427748: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x427748u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
label_42774c:
    // 0x42774c: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x42774cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_427750:
    // 0x427750: 0x10000003  b           . + 4 + (0x3 << 2)
label_427754:
    if (ctx->pc == 0x427754u) {
        ctx->pc = 0x427754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427750u;
        // 0x427754: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        ctx->pc = 0x427758u;
        goto label_427758;
    }
    ctx->pc = 0x427750u;
    {
        const bool branch_taken_0x427750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427750u;
        // 0x427754: 0x34e73020  ori         $a3, $a3, 0x3020 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)12320);
        ctx->in_delay_slot = false;
        if (branch_taken_0x427750) {
            ctx->pc = 0x427760u;
            goto label_427760;
        }
    }
    ctx->pc = 0x427758u;
label_427758:
    // 0x427758: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_42775c:
    if (ctx->pc == 0x42775Cu) {
        ctx->pc = 0x427760u;
        goto label_427760;
    }
    ctx->pc = 0x427758u;
    {
        const bool branch_taken_0x427758 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x427758) {
            ctx->pc = 0x4277B0u;
            goto label_4277b0;
        }
    }
    ctx->pc = 0x427760u;
label_427760:
    // 0x427760: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x427760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_427764:
    // 0x427764: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x427764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_427768:
    // 0x427768: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x427768u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
label_42776c:
    // 0x42776c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x42776cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_427770:
    // 0x427770: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x427770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_427774:
    // 0x427774: 0x30a50100  andi        $a1, $a1, 0x100
    ctx->pc = 0x427774u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
label_427778:
    // 0x427778: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x427778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_42777c:
    // 0x42777c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x42777cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
label_427780:
    // 0x427780: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x427780u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_427784:
    // 0x427784: 0x34440004  ori         $a0, $v0, 0x4
    ctx->pc = 0x427784u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_427788:
    // 0x427788: 0x46200a  movz        $a0, $v0, $a2
    ctx->pc = 0x427788u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_42778c:
    // 0x42778c: 0x4843e800  cfc2.ni     $v1, $vi29
    ctx->pc = 0x42778cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_vpu_stat);
label_427790:
    // 0x427790: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x427790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_427794:
    // 0x427794: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x427794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_427798:
    // 0x427798: 0x34850008  ori         $a1, $a0, 0x8
    ctx->pc = 0x427798u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_42779c:
    // 0x42779c: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x42779cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_4277a0:
    // 0x4277a0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
label_4277a4:
    if (ctx->pc == 0x4277A4u) {
        ctx->pc = 0x4277A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277A0u;
        // 0x4277a4: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4277A8u;
        goto label_4277a8;
    }
    ctx->pc = 0x4277A0u;
    {
        const bool branch_taken_0x4277a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4277A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277A0u;
        // 0x4277a4: 0x83280a  movz        $a1, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4277a0) {
            ctx->pc = 0x427758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427758;
        }
    }
    ctx->pc = 0x4277A8u;
label_4277a8:
    // 0x4277a8: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_4277ac:
    if (ctx->pc == 0x4277ACu) {
        ctx->pc = 0x4277B0u;
        goto label_4277b0;
    }
    ctx->pc = 0x4277A8u;
    {
        const bool branch_taken_0x4277a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4277a8) {
            ctx->pc = 0x427760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427760;
        }
    }
    ctx->pc = 0x4277B0u;
label_4277b0:
    // 0x4277b0: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x4277b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_4277b4:
    // 0x4277b4: 0x8f84be98  lw          $a0, -0x4168($gp)
    ctx->pc = 0x4277b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_4277b8:
    // 0x4277b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4277b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4277bc:
    // 0x4277bc: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x4277bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_4277c0:
    // 0x4277c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_4277c4:
    if (ctx->pc == 0x4277C4u) {
        ctx->pc = 0x4277C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277C0u;
        // 0x4277c4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4277C8u;
        goto label_4277c8;
    }
    ctx->pc = 0x4277C0u;
    {
        const bool branch_taken_0x4277c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4277c0) {
            ctx->pc = 0x4277C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4277C0u;
            // 0x4277c4: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4277E8u;
            goto label_4277e8;
        }
    }
    ctx->pc = 0x4277C8u;
label_4277c8:
    // 0x4277c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x4277c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4277cc:
    // 0x4277cc: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4277ccu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
label_4277d0:
    // 0x4277d0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x4277d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_4277d4:
    // 0x4277d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4277d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4277d8:
    // 0x4277d8: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x4277d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_4277dc:
    // 0x4277dc: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x4277dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_4277e0:
    // 0x4277e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4277e4:
    if (ctx->pc == 0x4277E4u) {
        ctx->pc = 0x4277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277E0u;
        // 0x4277e4: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4277E8u;
        goto label_4277e8;
    }
    ctx->pc = 0x4277E0u;
    {
        const bool branch_taken_0x4277e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4277E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4277E0u;
        // 0x4277e4: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4277e0) {
            ctx->pc = 0x427800u;
            goto label_427800;
        }
    }
    ctx->pc = 0x4277E8u;
label_4277e8:
    // 0x4277e8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4277e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
label_4277ec:
    // 0x4277ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4277ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4277f0:
    // 0x4277f0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4277f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_4277f4:
    // 0x4277f4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x4277f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_4277f8:
    // 0x4277f8: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4277f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_4277fc:
    // 0x4277fc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x4277fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_427800:
    // 0x427800: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x427800u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_427804:
    // 0x427804: 0xf  sync
    ctx->pc = 0x427804u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_427808:
    // 0x427808: 0x10000016  b           . + 4 + (0x16 << 2)
label_42780c:
    if (ctx->pc == 0x42780Cu) {
        ctx->pc = 0x427810u;
        goto label_427810;
    }
    ctx->pc = 0x427808u;
    {
        const bool branch_taken_0x427808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x427808) {
            ctx->pc = 0x427864u;
            goto label_427864;
        }
    }
    ctx->pc = 0x427810u;
label_427810:
    // 0x427810: 0x30620300  andi        $v0, $v1, 0x300
    ctx->pc = 0x427810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)768);
label_427814:
    // 0x427814: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_427818:
    if (ctx->pc == 0x427818u) {
        ctx->pc = 0x427818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427814u;
        // 0x427818: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42781Cu;
        goto label_42781c;
    }
    ctx->pc = 0x427814u;
    {
        const bool branch_taken_0x427814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427814) {
            ctx->pc = 0x427818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427814u;
            // 0x427818: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427844u;
            goto label_427844;
        }
    }
    ctx->pc = 0x42781Cu;
label_42781c:
    // 0x42781c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x42781cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_427820:
    // 0x427820: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x427820u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_427824:
    // 0x427824: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x427824u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_427828:
    // 0x427828: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x427828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42782c:
    // 0x42782c: 0x30421300  andi        $v0, $v0, 0x1300
    ctx->pc = 0x42782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4864);
label_427830:
    // 0x427830: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x427830u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_427834:
    // 0x427834: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x427834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_427838:
    // 0x427838: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x427838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_42783c:
    // 0x42783c: 0x10000008  b           . + 4 + (0x8 << 2)
label_427840:
    if (ctx->pc == 0x427840u) {
        ctx->pc = 0x427844u;
        goto label_427844;
    }
    ctx->pc = 0x42783Cu;
    {
        const bool branch_taken_0x42783c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42783c) {
            ctx->pc = 0x427860u;
            goto label_427860;
        }
    }
    ctx->pc = 0x427844u;
label_427844:
    // 0x427844: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x427844u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_427848:
    // 0x427848: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x427848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_42784c:
    // 0x42784c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x42784cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_427850:
    // 0x427850: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x427850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_427854:
    // 0x427854: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x427854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_427858:
    // 0x427858: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x427858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_42785c:
    // 0x42785c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x42785cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_427860:
    // 0x427860: 0xf  sync
    ctx->pc = 0x427860u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_427864:
    // 0x427864: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x427864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_427868:
    // 0x427868: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x427868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_42786c:
    // 0x42786c: 0xa382be90  sb          $v0, -0x4170($gp)
    ctx->pc = 0x42786cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 2));
label_427870:
    // 0x427870: 0x1000002f  b           . + 4 + (0x2F << 2)
label_427874:
    if (ctx->pc == 0x427874u) {
        ctx->pc = 0x427874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427870u;
        // 0x427874: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427878u;
        goto label_427878;
    }
    ctx->pc = 0x427870u;
    {
        const bool branch_taken_0x427870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427870u;
        // 0x427874: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427870) {
            ctx->pc = 0x427930u;
            goto label_427930;
        }
    }
    ctx->pc = 0x427878u;
label_427878:
    // 0x427878: 0x1000002e  b           . + 4 + (0x2E << 2)
label_42787c:
    if (ctx->pc == 0x42787Cu) {
        ctx->pc = 0x42787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427878u;
        // 0x42787c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427880u;
        goto label_427880;
    }
    ctx->pc = 0x427878u;
    {
        const bool branch_taken_0x427878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427878u;
        // 0x42787c: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427878) {
            ctx->pc = 0x427934u;
            goto label_427934;
        }
    }
    ctx->pc = 0x427880u;
label_427880:
    // 0x427880: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_427884:
    if (ctx->pc == 0x427884u) {
        ctx->pc = 0x427884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427880u;
        // 0x427884: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427888u;
        goto label_427888;
    }
    ctx->pc = 0x427880u;
    {
        const bool branch_taken_0x427880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x427884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427880u;
        // 0x427884: 0x21b02  srl         $v1, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427880) {
            ctx->pc = 0x42789Cu;
            goto label_42789c;
        }
    }
    ctx->pc = 0x427888u;
label_427888:
    // 0x427888: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x427888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_42788c:
    // 0x42788c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x42788cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_427890:
    // 0x427890: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x427890u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_427894:
    // 0x427894: 0x10000025  b           . + 4 + (0x25 << 2)
label_427898:
    if (ctx->pc == 0x427898u) {
        ctx->pc = 0x427898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427894u;
        // 0x427898: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42789Cu;
        goto label_42789c;
    }
    ctx->pc = 0x427894u;
    {
        const bool branch_taken_0x427894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x427898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427894u;
        // 0x427898: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427894) {
            ctx->pc = 0x42792Cu;
            goto label_42792c;
        }
    }
    ctx->pc = 0x42789Cu;
label_42789c:
    // 0x42789c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x42789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4278a0:
    // 0x4278a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4278a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4278a4:
    // 0x4278a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4278a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4278a8:
    // 0x4278a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_4278ac:
    if (ctx->pc == 0x4278ACu) {
        ctx->pc = 0x4278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278A8u;
        // 0x4278ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4278B0u;
        goto label_4278b0;
    }
    ctx->pc = 0x4278A8u;
    {
        const bool branch_taken_0x4278a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4278ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278A8u;
        // 0x4278ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4278a8) {
            ctx->pc = 0x42792Cu;
            goto label_42792c;
        }
    }
    ctx->pc = 0x4278B0u;
label_4278b0:
    // 0x4278b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4278b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4278b4:
    // 0x4278b4: 0xa396be2f  sb          $s6, -0x41D1($gp)
    ctx->pc = 0x4278b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950447), (uint8_t)GPR_U32(ctx, 22));
label_4278b8:
    // 0x4278b8: 0xaf83be94  sw          $v1, -0x416C($gp)
    ctx->pc = 0x4278b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950548), GPR_U32(ctx, 3));
label_4278bc:
    // 0x4278bc: 0x9382be2e  lbu         $v0, -0x41D2($gp)
    ctx->pc = 0x4278bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
label_4278c0:
    // 0x4278c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4278c4:
    if (ctx->pc == 0x4278C4u) {
        ctx->pc = 0x4278C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278C0u;
        // 0x4278c4: 0xa380be30  sb          $zero, -0x41D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294950448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4278C8u;
        goto label_4278c8;
    }
    ctx->pc = 0x4278C0u;
    {
        const bool branch_taken_0x4278c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4278C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278C0u;
        // 0x4278c4: 0xa380be30  sb          $zero, -0x41D0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294950448), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4278c0) {
            ctx->pc = 0x4278DCu;
            goto label_4278dc;
        }
    }
    ctx->pc = 0x4278C8u;
label_4278c8:
    // 0x4278c8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x4278c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4278cc:
    // 0x4278cc: 0xa396be2f  sb          $s6, -0x41D1($gp)
    ctx->pc = 0x4278ccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950447), (uint8_t)GPR_U32(ctx, 22));
label_4278d0:
    // 0x4278d0: 0xaf83be94  sw          $v1, -0x416C($gp)
    ctx->pc = 0x4278d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950548), GPR_U32(ctx, 3));
label_4278d4:
    // 0x4278d4: 0x9382be2e  lbu         $v0, -0x41D2($gp)
    ctx->pc = 0x4278d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
label_4278d8:
    // 0x4278d8: 0xa396be30  sb          $s6, -0x41D0($gp)
    ctx->pc = 0x4278d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950448), (uint8_t)GPR_U32(ctx, 22));
label_4278dc:
    // 0x4278dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4278dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4278e0:
    // 0x4278e0: 0xa382be2e  sb          $v0, -0x41D2($gp)
    ctx->pc = 0x4278e0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950446), (uint8_t)GPR_U32(ctx, 2));
label_4278e4:
    // 0x4278e4: 0x10000012  b           . + 4 + (0x12 << 2)
label_4278e8:
    if (ctx->pc == 0x4278E8u) {
        ctx->pc = 0x4278E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278E4u;
        // 0x4278e8: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4278ECu;
        goto label_4278ec;
    }
    ctx->pc = 0x4278E4u;
    {
        const bool branch_taken_0x4278e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4278E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4278E4u;
        // 0x4278e8: 0x8f82be98  lw          $v0, -0x4168($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4278e4) {
            ctx->pc = 0x427930u;
            goto label_427930;
        }
    }
    ctx->pc = 0x4278ECu;
label_4278ec:
    // 0x4278ec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4278ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4278f0:
    // 0x4278f0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x4278f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_4278f4:
    // 0x4278f4: 0x7fac0030  sq          $t4, 0x30($sp)
    ctx->pc = 0x4278f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 12));
label_4278f8:
    // 0x4278f8: 0x3202b  sltu        $a0, $zero, $v1
    ctx->pc = 0x4278f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4278fc:
    // 0x4278fc: 0x7fad0040  sq          $t5, 0x40($sp)
    ctx->pc = 0x4278fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 13));
label_427900:
    // 0x427900: 0x7fae0050  sq          $t6, 0x50($sp)
    ctx->pc = 0x427900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 14));
label_427904:
    // 0x427904: 0x7faf0060  sq          $t7, 0x60($sp)
    ctx->pc = 0x427904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 15));
label_427908:
    // 0x427908: 0x40f809  jalr        $v0
label_42790c:
    if (ctx->pc == 0x42790Cu) {
        ctx->pc = 0x42790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427908u;
        // 0x42790c: 0x7fb90070  sq          $t9, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427910u;
        goto label_427910;
    }
    ctx->pc = 0x427908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x427910u);
        ctx->pc = 0x42790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427908u;
        // 0x42790c: 0x7fb90070  sq          $t9, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 25));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x427908u, 0x427910u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x427910u;
label_427910:
    // 0x427910: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x427910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_427914:
    // 0x427914: 0x7bb90070  lq          $t9, 0x70($sp)
    ctx->pc = 0x427914u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_427918:
    // 0x427918: 0xa382be90  sb          $v0, -0x4170($gp)
    ctx->pc = 0x427918u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950544), (uint8_t)GPR_U32(ctx, 2));
label_42791c:
    // 0x42791c: 0x7baf0060  lq          $t7, 0x60($sp)
    ctx->pc = 0x42791cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_427920:
    // 0x427920: 0x7bae0050  lq          $t6, 0x50($sp)
    ctx->pc = 0x427920u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_427924:
    // 0x427924: 0x7bad0040  lq          $t5, 0x40($sp)
    ctx->pc = 0x427924u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_427928:
    // 0x427928: 0x7bac0030  lq          $t4, 0x30($sp)
    ctx->pc = 0x427928u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42792c:
    // 0x42792c: 0x8f82be98  lw          $v0, -0x4168($gp)
    ctx->pc = 0x42792cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_427930:
    // 0x427930: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x427930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_427934:
    // 0x427934: 0xaf82be98  sw          $v0, -0x4168($gp)
    ctx->pc = 0x427934u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950552), GPR_U32(ctx, 2));
label_427938:
    // 0x427938: 0x9382be90  lbu         $v0, -0x4170($gp)
    ctx->pc = 0x427938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950544)));
label_42793c:
    // 0x42793c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_427940:
    if (ctx->pc == 0x427940u) {
        ctx->pc = 0x427940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42793Cu;
        // 0x427940: 0x8f82be9c  lw          $v0, -0x4164($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427944u;
        goto label_427944;
    }
    ctx->pc = 0x42793Cu;
    {
        const bool branch_taken_0x42793c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x427940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42793Cu;
        // 0x427940: 0x8f82be9c  lw          $v0, -0x4164($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42793c) {
            ctx->pc = 0x42795Cu;
            goto label_42795c;
        }
    }
    ctx->pc = 0x427944u;
label_427944:
    // 0x427944: 0x8f85be98  lw          $a1, -0x4168($gp)
    ctx->pc = 0x427944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950552)));
label_427948:
    // 0x427948: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
label_42794c:
    if (ctx->pc == 0x42794Cu) {
        ctx->pc = 0x42794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427948u;
        // 0x42794c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427950u;
        goto label_427950;
    }
    ctx->pc = 0x427948u;
    {
        const bool branch_taken_0x427948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x42794Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427948u;
        // 0x42794c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427948) {
            ctx->pc = 0x427960u;
            goto label_427960;
        }
    }
    ctx->pc = 0x427950u;
label_427950:
    // 0x427950: 0x9382be2f  lbu         $v0, -0x41D1($gp)
    ctx->pc = 0x427950u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
label_427954:
    // 0x427954: 0x5040ff00  beql        $v0, $zero, . + 4 + (-0x100 << 2)
label_427958:
    if (ctx->pc == 0x427958u) {
        ctx->pc = 0x427958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427954u;
        // 0x427958: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42795Cu;
        goto label_42795c;
    }
    ctx->pc = 0x427954u;
    {
        const bool branch_taken_0x427954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x427954) {
            ctx->pc = 0x427958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x427954u;
            // 0x427958: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x427558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_427558;
        }
    }
    ctx->pc = 0x42795Cu;
label_42795c:
    // 0x42795c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42795cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_427960:
    // 0x427960: 0x13220004  beq         $t9, $v0, . + 4 + (0x4 << 2)
label_427964:
    if (ctx->pc == 0x427964u) {
        ctx->pc = 0x427964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427960u;
        // 0x427964: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x427968u;
        goto label_427968;
    }
    ctx->pc = 0x427960u;
    {
        const bool branch_taken_0x427960 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 2));
        ctx->pc = 0x427964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x427960u;
        // 0x427964: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x427960) {
            ctx->pc = 0x427974u;
            goto label_427974;
        }
    }
    ctx->pc = 0x427968u;
label_427968:
    // 0x427968: 0x84e024  and         $gp, $a0, $a0
    ctx->pc = 0x427968u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 4) & GPR_U64(ctx, 4));
label_42796c:
    // 0x42796c: 0xf  sync
    ctx->pc = 0x42796cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_427970:
    // 0x427970: 0x42000038  ei
    ctx->pc = 0x427970u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_427974:
    // 0x427974: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x427974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_427978:
    // 0x427978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x427978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42797c:
    // 0x42797c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x42797cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_427980:
    // 0x427980: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x427980u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_427984:
    // 0x427984: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x427984u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_427988:
    // 0x427988: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x427988u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_42798c:
    // 0x42798c: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x42798cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_427990:
    // 0x427990: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x427990u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_427994:
    // 0x427994: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x427994u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_427998:
    // 0x427998: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x427998u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_42799c:
    // 0x42799c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42799cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4279a0:
    // 0x4279a0: 0x3e00008  jr          $ra
label_4279a4:
    if (ctx->pc == 0x4279A4u) {
        ctx->pc = 0x4279A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4279A0u;
        // 0x4279a4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4279A8u;
        goto label_fallthrough_0x4279a0;
    }
    ctx->pc = 0x4279A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4279A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4279A0u;
        // 0x4279a4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4279A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4279a0:
    ctx->pc = 0x4279A8u;
}
