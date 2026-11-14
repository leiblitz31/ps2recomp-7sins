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

// Function: sub_00126020
// Address: 0x126020 - 0x126c30
void sub_00126020_0x126020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126020_0x126020");
#endif

    switch (ctx->pc) {
        case 0x126020u: goto label_126020;
        case 0x126024u: goto label_126024;
        case 0x126028u: goto label_126028;
        case 0x12602cu: goto label_12602c;
        case 0x126030u: goto label_126030;
        case 0x126034u: goto label_126034;
        case 0x126038u: goto label_126038;
        case 0x12603cu: goto label_12603c;
        case 0x126040u: goto label_126040;
        case 0x126044u: goto label_126044;
        case 0x126048u: goto label_126048;
        case 0x12604cu: goto label_12604c;
        case 0x126050u: goto label_126050;
        case 0x126054u: goto label_126054;
        case 0x126058u: goto label_126058;
        case 0x12605cu: goto label_12605c;
        case 0x126060u: goto label_126060;
        case 0x126064u: goto label_126064;
        case 0x126068u: goto label_126068;
        case 0x12606cu: goto label_12606c;
        case 0x126070u: goto label_126070;
        case 0x126074u: goto label_126074;
        case 0x126078u: goto label_126078;
        case 0x12607cu: goto label_12607c;
        case 0x126080u: goto label_126080;
        case 0x126084u: goto label_126084;
        case 0x126088u: goto label_126088;
        case 0x12608cu: goto label_12608c;
        case 0x126090u: goto label_126090;
        case 0x126094u: goto label_126094;
        case 0x126098u: goto label_126098;
        case 0x12609cu: goto label_12609c;
        case 0x1260a0u: goto label_1260a0;
        case 0x1260a4u: goto label_1260a4;
        case 0x1260a8u: goto label_1260a8;
        case 0x1260acu: goto label_1260ac;
        case 0x1260b0u: goto label_1260b0;
        case 0x1260b4u: goto label_1260b4;
        case 0x1260b8u: goto label_1260b8;
        case 0x1260bcu: goto label_1260bc;
        case 0x1260c0u: goto label_1260c0;
        case 0x1260c4u: goto label_1260c4;
        case 0x1260c8u: goto label_1260c8;
        case 0x1260ccu: goto label_1260cc;
        case 0x1260d0u: goto label_1260d0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260d8u: goto label_1260d8;
        case 0x1260dcu: goto label_1260dc;
        case 0x1260e0u: goto label_1260e0;
        case 0x1260e4u: goto label_1260e4;
        case 0x1260e8u: goto label_1260e8;
        case 0x1260ecu: goto label_1260ec;
        case 0x1260f0u: goto label_1260f0;
        case 0x1260f4u: goto label_1260f4;
        case 0x1260f8u: goto label_1260f8;
        case 0x1260fcu: goto label_1260fc;
        case 0x126100u: goto label_126100;
        case 0x126104u: goto label_126104;
        case 0x126108u: goto label_126108;
        case 0x12610cu: goto label_12610c;
        case 0x126110u: goto label_126110;
        case 0x126114u: goto label_126114;
        case 0x126118u: goto label_126118;
        case 0x12611cu: goto label_12611c;
        case 0x126120u: goto label_126120;
        case 0x126124u: goto label_126124;
        case 0x126128u: goto label_126128;
        case 0x12612cu: goto label_12612c;
        case 0x126130u: goto label_126130;
        case 0x126134u: goto label_126134;
        case 0x126138u: goto label_126138;
        case 0x12613cu: goto label_12613c;
        case 0x126140u: goto label_126140;
        case 0x126144u: goto label_126144;
        case 0x126148u: goto label_126148;
        case 0x12614cu: goto label_12614c;
        case 0x126150u: goto label_126150;
        case 0x126154u: goto label_126154;
        case 0x126158u: goto label_126158;
        case 0x12615cu: goto label_12615c;
        case 0x126160u: goto label_126160;
        case 0x126164u: goto label_126164;
        case 0x126168u: goto label_126168;
        case 0x12616cu: goto label_12616c;
        case 0x126170u: goto label_126170;
        case 0x126174u: goto label_126174;
        case 0x126178u: goto label_126178;
        case 0x12617cu: goto label_12617c;
        case 0x126180u: goto label_126180;
        case 0x126184u: goto label_126184;
        case 0x126188u: goto label_126188;
        case 0x12618cu: goto label_12618c;
        case 0x126190u: goto label_126190;
        case 0x126194u: goto label_126194;
        case 0x126198u: goto label_126198;
        case 0x12619cu: goto label_12619c;
        case 0x1261a0u: goto label_1261a0;
        case 0x1261a4u: goto label_1261a4;
        case 0x1261a8u: goto label_1261a8;
        case 0x1261acu: goto label_1261ac;
        case 0x1261b0u: goto label_1261b0;
        case 0x1261b4u: goto label_1261b4;
        case 0x1261b8u: goto label_1261b8;
        case 0x1261bcu: goto label_1261bc;
        case 0x1261c0u: goto label_1261c0;
        case 0x1261c4u: goto label_1261c4;
        case 0x1261c8u: goto label_1261c8;
        case 0x1261ccu: goto label_1261cc;
        case 0x1261d0u: goto label_1261d0;
        case 0x1261d4u: goto label_1261d4;
        case 0x1261d8u: goto label_1261d8;
        case 0x1261dcu: goto label_1261dc;
        case 0x1261e0u: goto label_1261e0;
        case 0x1261e4u: goto label_1261e4;
        case 0x1261e8u: goto label_1261e8;
        case 0x1261ecu: goto label_1261ec;
        case 0x1261f0u: goto label_1261f0;
        case 0x1261f4u: goto label_1261f4;
        case 0x1261f8u: goto label_1261f8;
        case 0x1261fcu: goto label_1261fc;
        case 0x126200u: goto label_126200;
        case 0x126204u: goto label_126204;
        case 0x126208u: goto label_126208;
        case 0x12620cu: goto label_12620c;
        case 0x126210u: goto label_126210;
        case 0x126214u: goto label_126214;
        case 0x126218u: goto label_126218;
        case 0x12621cu: goto label_12621c;
        case 0x126220u: goto label_126220;
        case 0x126224u: goto label_126224;
        case 0x126228u: goto label_126228;
        case 0x12622cu: goto label_12622c;
        case 0x126230u: goto label_126230;
        case 0x126234u: goto label_126234;
        case 0x126238u: goto label_126238;
        case 0x12623cu: goto label_12623c;
        case 0x126240u: goto label_126240;
        case 0x126244u: goto label_126244;
        case 0x126248u: goto label_126248;
        case 0x12624cu: goto label_12624c;
        case 0x126250u: goto label_126250;
        case 0x126254u: goto label_126254;
        case 0x126258u: goto label_126258;
        case 0x12625cu: goto label_12625c;
        case 0x126260u: goto label_126260;
        case 0x126264u: goto label_126264;
        case 0x126268u: goto label_126268;
        case 0x12626cu: goto label_12626c;
        case 0x126270u: goto label_126270;
        case 0x126274u: goto label_126274;
        case 0x126278u: goto label_126278;
        case 0x12627cu: goto label_12627c;
        case 0x126280u: goto label_126280;
        case 0x126284u: goto label_126284;
        case 0x126288u: goto label_126288;
        case 0x12628cu: goto label_12628c;
        case 0x126290u: goto label_126290;
        case 0x126294u: goto label_126294;
        case 0x126298u: goto label_126298;
        case 0x12629cu: goto label_12629c;
        case 0x1262a0u: goto label_1262a0;
        case 0x1262a4u: goto label_1262a4;
        case 0x1262a8u: goto label_1262a8;
        case 0x1262acu: goto label_1262ac;
        case 0x1262b0u: goto label_1262b0;
        case 0x1262b4u: goto label_1262b4;
        case 0x1262b8u: goto label_1262b8;
        case 0x1262bcu: goto label_1262bc;
        case 0x1262c0u: goto label_1262c0;
        case 0x1262c4u: goto label_1262c4;
        case 0x1262c8u: goto label_1262c8;
        case 0x1262ccu: goto label_1262cc;
        case 0x1262d0u: goto label_1262d0;
        case 0x1262d4u: goto label_1262d4;
        case 0x1262d8u: goto label_1262d8;
        case 0x1262dcu: goto label_1262dc;
        case 0x1262e0u: goto label_1262e0;
        case 0x1262e4u: goto label_1262e4;
        case 0x1262e8u: goto label_1262e8;
        case 0x1262ecu: goto label_1262ec;
        case 0x1262f0u: goto label_1262f0;
        case 0x1262f4u: goto label_1262f4;
        case 0x1262f8u: goto label_1262f8;
        case 0x1262fcu: goto label_1262fc;
        case 0x126300u: goto label_126300;
        case 0x126304u: goto label_126304;
        case 0x126308u: goto label_126308;
        case 0x12630cu: goto label_12630c;
        case 0x126310u: goto label_126310;
        case 0x126314u: goto label_126314;
        case 0x126318u: goto label_126318;
        case 0x12631cu: goto label_12631c;
        case 0x126320u: goto label_126320;
        case 0x126324u: goto label_126324;
        case 0x126328u: goto label_126328;
        case 0x12632cu: goto label_12632c;
        case 0x126330u: goto label_126330;
        case 0x126334u: goto label_126334;
        case 0x126338u: goto label_126338;
        case 0x12633cu: goto label_12633c;
        case 0x126340u: goto label_126340;
        case 0x126344u: goto label_126344;
        case 0x126348u: goto label_126348;
        case 0x12634cu: goto label_12634c;
        case 0x126350u: goto label_126350;
        case 0x126354u: goto label_126354;
        case 0x126358u: goto label_126358;
        case 0x12635cu: goto label_12635c;
        case 0x126360u: goto label_126360;
        case 0x126364u: goto label_126364;
        case 0x126368u: goto label_126368;
        case 0x12636cu: goto label_12636c;
        case 0x126370u: goto label_126370;
        case 0x126374u: goto label_126374;
        case 0x126378u: goto label_126378;
        case 0x12637cu: goto label_12637c;
        case 0x126380u: goto label_126380;
        case 0x126384u: goto label_126384;
        case 0x126388u: goto label_126388;
        case 0x12638cu: goto label_12638c;
        case 0x126390u: goto label_126390;
        case 0x126394u: goto label_126394;
        case 0x126398u: goto label_126398;
        case 0x12639cu: goto label_12639c;
        case 0x1263a0u: goto label_1263a0;
        case 0x1263a4u: goto label_1263a4;
        case 0x1263a8u: goto label_1263a8;
        case 0x1263acu: goto label_1263ac;
        case 0x1263b0u: goto label_1263b0;
        case 0x1263b4u: goto label_1263b4;
        case 0x1263b8u: goto label_1263b8;
        case 0x1263bcu: goto label_1263bc;
        case 0x1263c0u: goto label_1263c0;
        case 0x1263c4u: goto label_1263c4;
        case 0x1263c8u: goto label_1263c8;
        case 0x1263ccu: goto label_1263cc;
        case 0x1263d0u: goto label_1263d0;
        case 0x1263d4u: goto label_1263d4;
        case 0x1263d8u: goto label_1263d8;
        case 0x1263dcu: goto label_1263dc;
        case 0x1263e0u: goto label_1263e0;
        case 0x1263e4u: goto label_1263e4;
        case 0x1263e8u: goto label_1263e8;
        case 0x1263ecu: goto label_1263ec;
        case 0x1263f0u: goto label_1263f0;
        case 0x1263f4u: goto label_1263f4;
        case 0x1263f8u: goto label_1263f8;
        case 0x1263fcu: goto label_1263fc;
        case 0x126400u: goto label_126400;
        case 0x126404u: goto label_126404;
        case 0x126408u: goto label_126408;
        case 0x12640cu: goto label_12640c;
        case 0x126410u: goto label_126410;
        case 0x126414u: goto label_126414;
        case 0x126418u: goto label_126418;
        case 0x12641cu: goto label_12641c;
        case 0x126420u: goto label_126420;
        case 0x126424u: goto label_126424;
        case 0x126428u: goto label_126428;
        case 0x12642cu: goto label_12642c;
        case 0x126430u: goto label_126430;
        case 0x126434u: goto label_126434;
        case 0x126438u: goto label_126438;
        case 0x12643cu: goto label_12643c;
        case 0x126440u: goto label_126440;
        case 0x126444u: goto label_126444;
        case 0x126448u: goto label_126448;
        case 0x12644cu: goto label_12644c;
        case 0x126450u: goto label_126450;
        case 0x126454u: goto label_126454;
        case 0x126458u: goto label_126458;
        case 0x12645cu: goto label_12645c;
        case 0x126460u: goto label_126460;
        case 0x126464u: goto label_126464;
        case 0x126468u: goto label_126468;
        case 0x12646cu: goto label_12646c;
        case 0x126470u: goto label_126470;
        case 0x126474u: goto label_126474;
        case 0x126478u: goto label_126478;
        case 0x12647cu: goto label_12647c;
        case 0x126480u: goto label_126480;
        case 0x126484u: goto label_126484;
        case 0x126488u: goto label_126488;
        case 0x12648cu: goto label_12648c;
        case 0x126490u: goto label_126490;
        case 0x126494u: goto label_126494;
        case 0x126498u: goto label_126498;
        case 0x12649cu: goto label_12649c;
        case 0x1264a0u: goto label_1264a0;
        case 0x1264a4u: goto label_1264a4;
        case 0x1264a8u: goto label_1264a8;
        case 0x1264acu: goto label_1264ac;
        case 0x1264b0u: goto label_1264b0;
        case 0x1264b4u: goto label_1264b4;
        case 0x1264b8u: goto label_1264b8;
        case 0x1264bcu: goto label_1264bc;
        case 0x1264c0u: goto label_1264c0;
        case 0x1264c4u: goto label_1264c4;
        case 0x1264c8u: goto label_1264c8;
        case 0x1264ccu: goto label_1264cc;
        case 0x1264d0u: goto label_1264d0;
        case 0x1264d4u: goto label_1264d4;
        case 0x1264d8u: goto label_1264d8;
        case 0x1264dcu: goto label_1264dc;
        case 0x1264e0u: goto label_1264e0;
        case 0x1264e4u: goto label_1264e4;
        case 0x1264e8u: goto label_1264e8;
        case 0x1264ecu: goto label_1264ec;
        case 0x1264f0u: goto label_1264f0;
        case 0x1264f4u: goto label_1264f4;
        case 0x1264f8u: goto label_1264f8;
        case 0x1264fcu: goto label_1264fc;
        case 0x126500u: goto label_126500;
        case 0x126504u: goto label_126504;
        case 0x126508u: goto label_126508;
        case 0x12650cu: goto label_12650c;
        case 0x126510u: goto label_126510;
        case 0x126514u: goto label_126514;
        case 0x126518u: goto label_126518;
        case 0x12651cu: goto label_12651c;
        case 0x126520u: goto label_126520;
        case 0x126524u: goto label_126524;
        case 0x126528u: goto label_126528;
        case 0x12652cu: goto label_12652c;
        case 0x126530u: goto label_126530;
        case 0x126534u: goto label_126534;
        case 0x126538u: goto label_126538;
        case 0x12653cu: goto label_12653c;
        case 0x126540u: goto label_126540;
        case 0x126544u: goto label_126544;
        case 0x126548u: goto label_126548;
        case 0x12654cu: goto label_12654c;
        case 0x126550u: goto label_126550;
        case 0x126554u: goto label_126554;
        case 0x126558u: goto label_126558;
        case 0x12655cu: goto label_12655c;
        case 0x126560u: goto label_126560;
        case 0x126564u: goto label_126564;
        case 0x126568u: goto label_126568;
        case 0x12656cu: goto label_12656c;
        case 0x126570u: goto label_126570;
        case 0x126574u: goto label_126574;
        case 0x126578u: goto label_126578;
        case 0x12657cu: goto label_12657c;
        case 0x126580u: goto label_126580;
        case 0x126584u: goto label_126584;
        case 0x126588u: goto label_126588;
        case 0x12658cu: goto label_12658c;
        case 0x126590u: goto label_126590;
        case 0x126594u: goto label_126594;
        case 0x126598u: goto label_126598;
        case 0x12659cu: goto label_12659c;
        case 0x1265a0u: goto label_1265a0;
        case 0x1265a4u: goto label_1265a4;
        case 0x1265a8u: goto label_1265a8;
        case 0x1265acu: goto label_1265ac;
        case 0x1265b0u: goto label_1265b0;
        case 0x1265b4u: goto label_1265b4;
        case 0x1265b8u: goto label_1265b8;
        case 0x1265bcu: goto label_1265bc;
        case 0x1265c0u: goto label_1265c0;
        case 0x1265c4u: goto label_1265c4;
        case 0x1265c8u: goto label_1265c8;
        case 0x1265ccu: goto label_1265cc;
        case 0x1265d0u: goto label_1265d0;
        case 0x1265d4u: goto label_1265d4;
        case 0x1265d8u: goto label_1265d8;
        case 0x1265dcu: goto label_1265dc;
        case 0x1265e0u: goto label_1265e0;
        case 0x1265e4u: goto label_1265e4;
        case 0x1265e8u: goto label_1265e8;
        case 0x1265ecu: goto label_1265ec;
        case 0x1265f0u: goto label_1265f0;
        case 0x1265f4u: goto label_1265f4;
        case 0x1265f8u: goto label_1265f8;
        case 0x1265fcu: goto label_1265fc;
        case 0x126600u: goto label_126600;
        case 0x126604u: goto label_126604;
        case 0x126608u: goto label_126608;
        case 0x12660cu: goto label_12660c;
        case 0x126610u: goto label_126610;
        case 0x126614u: goto label_126614;
        case 0x126618u: goto label_126618;
        case 0x12661cu: goto label_12661c;
        case 0x126620u: goto label_126620;
        case 0x126624u: goto label_126624;
        case 0x126628u: goto label_126628;
        case 0x12662cu: goto label_12662c;
        case 0x126630u: goto label_126630;
        case 0x126634u: goto label_126634;
        case 0x126638u: goto label_126638;
        case 0x12663cu: goto label_12663c;
        case 0x126640u: goto label_126640;
        case 0x126644u: goto label_126644;
        case 0x126648u: goto label_126648;
        case 0x12664cu: goto label_12664c;
        case 0x126650u: goto label_126650;
        case 0x126654u: goto label_126654;
        case 0x126658u: goto label_126658;
        case 0x12665cu: goto label_12665c;
        case 0x126660u: goto label_126660;
        case 0x126664u: goto label_126664;
        case 0x126668u: goto label_126668;
        case 0x12666cu: goto label_12666c;
        case 0x126670u: goto label_126670;
        case 0x126674u: goto label_126674;
        case 0x126678u: goto label_126678;
        case 0x12667cu: goto label_12667c;
        case 0x126680u: goto label_126680;
        case 0x126684u: goto label_126684;
        case 0x126688u: goto label_126688;
        case 0x12668cu: goto label_12668c;
        case 0x126690u: goto label_126690;
        case 0x126694u: goto label_126694;
        case 0x126698u: goto label_126698;
        case 0x12669cu: goto label_12669c;
        case 0x1266a0u: goto label_1266a0;
        case 0x1266a4u: goto label_1266a4;
        case 0x1266a8u: goto label_1266a8;
        case 0x1266acu: goto label_1266ac;
        case 0x1266b0u: goto label_1266b0;
        case 0x1266b4u: goto label_1266b4;
        case 0x1266b8u: goto label_1266b8;
        case 0x1266bcu: goto label_1266bc;
        case 0x1266c0u: goto label_1266c0;
        case 0x1266c4u: goto label_1266c4;
        case 0x1266c8u: goto label_1266c8;
        case 0x1266ccu: goto label_1266cc;
        case 0x1266d0u: goto label_1266d0;
        case 0x1266d4u: goto label_1266d4;
        case 0x1266d8u: goto label_1266d8;
        case 0x1266dcu: goto label_1266dc;
        case 0x1266e0u: goto label_1266e0;
        case 0x1266e4u: goto label_1266e4;
        case 0x1266e8u: goto label_1266e8;
        case 0x1266ecu: goto label_1266ec;
        case 0x1266f0u: goto label_1266f0;
        case 0x1266f4u: goto label_1266f4;
        case 0x1266f8u: goto label_1266f8;
        case 0x1266fcu: goto label_1266fc;
        case 0x126700u: goto label_126700;
        case 0x126704u: goto label_126704;
        case 0x126708u: goto label_126708;
        case 0x12670cu: goto label_12670c;
        case 0x126710u: goto label_126710;
        case 0x126714u: goto label_126714;
        case 0x126718u: goto label_126718;
        case 0x12671cu: goto label_12671c;
        case 0x126720u: goto label_126720;
        case 0x126724u: goto label_126724;
        case 0x126728u: goto label_126728;
        case 0x12672cu: goto label_12672c;
        case 0x126730u: goto label_126730;
        case 0x126734u: goto label_126734;
        case 0x126738u: goto label_126738;
        case 0x12673cu: goto label_12673c;
        case 0x126740u: goto label_126740;
        case 0x126744u: goto label_126744;
        case 0x126748u: goto label_126748;
        case 0x12674cu: goto label_12674c;
        case 0x126750u: goto label_126750;
        case 0x126754u: goto label_126754;
        case 0x126758u: goto label_126758;
        case 0x12675cu: goto label_12675c;
        case 0x126760u: goto label_126760;
        case 0x126764u: goto label_126764;
        case 0x126768u: goto label_126768;
        case 0x12676cu: goto label_12676c;
        case 0x126770u: goto label_126770;
        case 0x126774u: goto label_126774;
        case 0x126778u: goto label_126778;
        case 0x12677cu: goto label_12677c;
        case 0x126780u: goto label_126780;
        case 0x126784u: goto label_126784;
        case 0x126788u: goto label_126788;
        case 0x12678cu: goto label_12678c;
        case 0x126790u: goto label_126790;
        case 0x126794u: goto label_126794;
        case 0x126798u: goto label_126798;
        case 0x12679cu: goto label_12679c;
        case 0x1267a0u: goto label_1267a0;
        case 0x1267a4u: goto label_1267a4;
        case 0x1267a8u: goto label_1267a8;
        case 0x1267acu: goto label_1267ac;
        case 0x1267b0u: goto label_1267b0;
        case 0x1267b4u: goto label_1267b4;
        case 0x1267b8u: goto label_1267b8;
        case 0x1267bcu: goto label_1267bc;
        case 0x1267c0u: goto label_1267c0;
        case 0x1267c4u: goto label_1267c4;
        case 0x1267c8u: goto label_1267c8;
        case 0x1267ccu: goto label_1267cc;
        case 0x1267d0u: goto label_1267d0;
        case 0x1267d4u: goto label_1267d4;
        case 0x1267d8u: goto label_1267d8;
        case 0x1267dcu: goto label_1267dc;
        case 0x1267e0u: goto label_1267e0;
        case 0x1267e4u: goto label_1267e4;
        case 0x1267e8u: goto label_1267e8;
        case 0x1267ecu: goto label_1267ec;
        case 0x1267f0u: goto label_1267f0;
        case 0x1267f4u: goto label_1267f4;
        case 0x1267f8u: goto label_1267f8;
        case 0x1267fcu: goto label_1267fc;
        case 0x126800u: goto label_126800;
        case 0x126804u: goto label_126804;
        case 0x126808u: goto label_126808;
        case 0x12680cu: goto label_12680c;
        case 0x126810u: goto label_126810;
        case 0x126814u: goto label_126814;
        case 0x126818u: goto label_126818;
        case 0x12681cu: goto label_12681c;
        case 0x126820u: goto label_126820;
        case 0x126824u: goto label_126824;
        case 0x126828u: goto label_126828;
        case 0x12682cu: goto label_12682c;
        case 0x126830u: goto label_126830;
        case 0x126834u: goto label_126834;
        case 0x126838u: goto label_126838;
        case 0x12683cu: goto label_12683c;
        case 0x126840u: goto label_126840;
        case 0x126844u: goto label_126844;
        case 0x126848u: goto label_126848;
        case 0x12684cu: goto label_12684c;
        case 0x126850u: goto label_126850;
        case 0x126854u: goto label_126854;
        case 0x126858u: goto label_126858;
        case 0x12685cu: goto label_12685c;
        case 0x126860u: goto label_126860;
        case 0x126864u: goto label_126864;
        case 0x126868u: goto label_126868;
        case 0x12686cu: goto label_12686c;
        case 0x126870u: goto label_126870;
        case 0x126874u: goto label_126874;
        case 0x126878u: goto label_126878;
        case 0x12687cu: goto label_12687c;
        case 0x126880u: goto label_126880;
        case 0x126884u: goto label_126884;
        case 0x126888u: goto label_126888;
        case 0x12688cu: goto label_12688c;
        case 0x126890u: goto label_126890;
        case 0x126894u: goto label_126894;
        case 0x126898u: goto label_126898;
        case 0x12689cu: goto label_12689c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268a8u: goto label_1268a8;
        case 0x1268acu: goto label_1268ac;
        case 0x1268b0u: goto label_1268b0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268b8u: goto label_1268b8;
        case 0x1268bcu: goto label_1268bc;
        case 0x1268c0u: goto label_1268c0;
        case 0x1268c4u: goto label_1268c4;
        case 0x1268c8u: goto label_1268c8;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268d0u: goto label_1268d0;
        case 0x1268d4u: goto label_1268d4;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268dcu: goto label_1268dc;
        case 0x1268e0u: goto label_1268e0;
        case 0x1268e4u: goto label_1268e4;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x1268f4u: goto label_1268f4;
        case 0x1268f8u: goto label_1268f8;
        case 0x1268fcu: goto label_1268fc;
        case 0x126900u: goto label_126900;
        case 0x126904u: goto label_126904;
        case 0x126908u: goto label_126908;
        case 0x12690cu: goto label_12690c;
        case 0x126910u: goto label_126910;
        case 0x126914u: goto label_126914;
        case 0x126918u: goto label_126918;
        case 0x12691cu: goto label_12691c;
        case 0x126920u: goto label_126920;
        case 0x126924u: goto label_126924;
        case 0x126928u: goto label_126928;
        case 0x12692cu: goto label_12692c;
        case 0x126930u: goto label_126930;
        case 0x126934u: goto label_126934;
        case 0x126938u: goto label_126938;
        case 0x12693cu: goto label_12693c;
        case 0x126940u: goto label_126940;
        case 0x126944u: goto label_126944;
        case 0x126948u: goto label_126948;
        case 0x12694cu: goto label_12694c;
        case 0x126950u: goto label_126950;
        case 0x126954u: goto label_126954;
        case 0x126958u: goto label_126958;
        case 0x12695cu: goto label_12695c;
        case 0x126960u: goto label_126960;
        case 0x126964u: goto label_126964;
        case 0x126968u: goto label_126968;
        case 0x12696cu: goto label_12696c;
        case 0x126970u: goto label_126970;
        case 0x126974u: goto label_126974;
        case 0x126978u: goto label_126978;
        case 0x12697cu: goto label_12697c;
        case 0x126980u: goto label_126980;
        case 0x126984u: goto label_126984;
        case 0x126988u: goto label_126988;
        case 0x12698cu: goto label_12698c;
        case 0x126990u: goto label_126990;
        case 0x126994u: goto label_126994;
        case 0x126998u: goto label_126998;
        case 0x12699cu: goto label_12699c;
        case 0x1269a0u: goto label_1269a0;
        case 0x1269a4u: goto label_1269a4;
        case 0x1269a8u: goto label_1269a8;
        case 0x1269acu: goto label_1269ac;
        case 0x1269b0u: goto label_1269b0;
        case 0x1269b4u: goto label_1269b4;
        case 0x1269b8u: goto label_1269b8;
        case 0x1269bcu: goto label_1269bc;
        case 0x1269c0u: goto label_1269c0;
        case 0x1269c4u: goto label_1269c4;
        case 0x1269c8u: goto label_1269c8;
        case 0x1269ccu: goto label_1269cc;
        case 0x1269d0u: goto label_1269d0;
        case 0x1269d4u: goto label_1269d4;
        case 0x1269d8u: goto label_1269d8;
        case 0x1269dcu: goto label_1269dc;
        case 0x1269e0u: goto label_1269e0;
        case 0x1269e4u: goto label_1269e4;
        case 0x1269e8u: goto label_1269e8;
        case 0x1269ecu: goto label_1269ec;
        case 0x1269f0u: goto label_1269f0;
        case 0x1269f4u: goto label_1269f4;
        case 0x1269f8u: goto label_1269f8;
        case 0x1269fcu: goto label_1269fc;
        case 0x126a00u: goto label_126a00;
        case 0x126a04u: goto label_126a04;
        case 0x126a08u: goto label_126a08;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a10u: goto label_126a10;
        case 0x126a14u: goto label_126a14;
        case 0x126a18u: goto label_126a18;
        case 0x126a1cu: goto label_126a1c;
        case 0x126a20u: goto label_126a20;
        case 0x126a24u: goto label_126a24;
        case 0x126a28u: goto label_126a28;
        case 0x126a2cu: goto label_126a2c;
        case 0x126a30u: goto label_126a30;
        case 0x126a34u: goto label_126a34;
        case 0x126a38u: goto label_126a38;
        case 0x126a3cu: goto label_126a3c;
        case 0x126a40u: goto label_126a40;
        case 0x126a44u: goto label_126a44;
        case 0x126a48u: goto label_126a48;
        case 0x126a4cu: goto label_126a4c;
        case 0x126a50u: goto label_126a50;
        case 0x126a54u: goto label_126a54;
        case 0x126a58u: goto label_126a58;
        case 0x126a5cu: goto label_126a5c;
        case 0x126a60u: goto label_126a60;
        case 0x126a64u: goto label_126a64;
        case 0x126a68u: goto label_126a68;
        case 0x126a6cu: goto label_126a6c;
        case 0x126a70u: goto label_126a70;
        case 0x126a74u: goto label_126a74;
        case 0x126a78u: goto label_126a78;
        case 0x126a7cu: goto label_126a7c;
        case 0x126a80u: goto label_126a80;
        case 0x126a84u: goto label_126a84;
        case 0x126a88u: goto label_126a88;
        case 0x126a8cu: goto label_126a8c;
        case 0x126a90u: goto label_126a90;
        case 0x126a94u: goto label_126a94;
        case 0x126a98u: goto label_126a98;
        case 0x126a9cu: goto label_126a9c;
        case 0x126aa0u: goto label_126aa0;
        case 0x126aa4u: goto label_126aa4;
        case 0x126aa8u: goto label_126aa8;
        case 0x126aacu: goto label_126aac;
        case 0x126ab0u: goto label_126ab0;
        case 0x126ab4u: goto label_126ab4;
        case 0x126ab8u: goto label_126ab8;
        case 0x126abcu: goto label_126abc;
        case 0x126ac0u: goto label_126ac0;
        case 0x126ac4u: goto label_126ac4;
        case 0x126ac8u: goto label_126ac8;
        case 0x126accu: goto label_126acc;
        case 0x126ad0u: goto label_126ad0;
        case 0x126ad4u: goto label_126ad4;
        case 0x126ad8u: goto label_126ad8;
        case 0x126adcu: goto label_126adc;
        case 0x126ae0u: goto label_126ae0;
        case 0x126ae4u: goto label_126ae4;
        case 0x126ae8u: goto label_126ae8;
        case 0x126aecu: goto label_126aec;
        case 0x126af0u: goto label_126af0;
        case 0x126af4u: goto label_126af4;
        case 0x126af8u: goto label_126af8;
        case 0x126afcu: goto label_126afc;
        case 0x126b00u: goto label_126b00;
        case 0x126b04u: goto label_126b04;
        case 0x126b08u: goto label_126b08;
        case 0x126b0cu: goto label_126b0c;
        case 0x126b10u: goto label_126b10;
        case 0x126b14u: goto label_126b14;
        case 0x126b18u: goto label_126b18;
        case 0x126b1cu: goto label_126b1c;
        case 0x126b20u: goto label_126b20;
        case 0x126b24u: goto label_126b24;
        case 0x126b28u: goto label_126b28;
        case 0x126b2cu: goto label_126b2c;
        case 0x126b30u: goto label_126b30;
        case 0x126b34u: goto label_126b34;
        case 0x126b38u: goto label_126b38;
        case 0x126b3cu: goto label_126b3c;
        case 0x126b40u: goto label_126b40;
        case 0x126b44u: goto label_126b44;
        case 0x126b48u: goto label_126b48;
        case 0x126b4cu: goto label_126b4c;
        case 0x126b50u: goto label_126b50;
        case 0x126b54u: goto label_126b54;
        case 0x126b58u: goto label_126b58;
        case 0x126b5cu: goto label_126b5c;
        case 0x126b60u: goto label_126b60;
        case 0x126b64u: goto label_126b64;
        case 0x126b68u: goto label_126b68;
        case 0x126b6cu: goto label_126b6c;
        case 0x126b70u: goto label_126b70;
        case 0x126b74u: goto label_126b74;
        case 0x126b78u: goto label_126b78;
        case 0x126b7cu: goto label_126b7c;
        case 0x126b80u: goto label_126b80;
        case 0x126b84u: goto label_126b84;
        case 0x126b88u: goto label_126b88;
        case 0x126b8cu: goto label_126b8c;
        case 0x126b90u: goto label_126b90;
        case 0x126b94u: goto label_126b94;
        case 0x126b98u: goto label_126b98;
        case 0x126b9cu: goto label_126b9c;
        case 0x126ba0u: goto label_126ba0;
        case 0x126ba4u: goto label_126ba4;
        case 0x126ba8u: goto label_126ba8;
        case 0x126bacu: goto label_126bac;
        case 0x126bb0u: goto label_126bb0;
        case 0x126bb4u: goto label_126bb4;
        case 0x126bb8u: goto label_126bb8;
        case 0x126bbcu: goto label_126bbc;
        case 0x126bc0u: goto label_126bc0;
        case 0x126bc4u: goto label_126bc4;
        case 0x126bc8u: goto label_126bc8;
        case 0x126bccu: goto label_126bcc;
        case 0x126bd0u: goto label_126bd0;
        case 0x126bd4u: goto label_126bd4;
        case 0x126bd8u: goto label_126bd8;
        case 0x126bdcu: goto label_126bdc;
        case 0x126be0u: goto label_126be0;
        case 0x126be4u: goto label_126be4;
        case 0x126be8u: goto label_126be8;
        case 0x126becu: goto label_126bec;
        case 0x126bf0u: goto label_126bf0;
        case 0x126bf4u: goto label_126bf4;
        case 0x126bf8u: goto label_126bf8;
        case 0x126bfcu: goto label_126bfc;
        case 0x126c00u: goto label_126c00;
        case 0x126c04u: goto label_126c04;
        case 0x126c08u: goto label_126c08;
        case 0x126c0cu: goto label_126c0c;
        case 0x126c10u: goto label_126c10;
        case 0x126c14u: goto label_126c14;
        case 0x126c18u: goto label_126c18;
        case 0x126c1cu: goto label_126c1c;
        case 0x126c20u: goto label_126c20;
        case 0x126c24u: goto label_126c24;
        case 0x126c28u: goto label_126c28;
        case 0x126c2cu: goto label_126c2c;
        default: break;
    }

    ctx->pc = 0x126020u;

label_126020:
    // 0x126020: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x126020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_126024:
    // 0x126024: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x126024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_126028:
    // 0x126028: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x126028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_12602c:
    // 0x12602c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x12602cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_126030:
    // 0x126030: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x126030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_126034:
    // 0x126034: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x126034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_126038:
    // 0x126038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x126038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_12603c:
    // 0x12603c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12603cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_126040:
    // 0x126040: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_126044:
    // 0x126044: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126048:
    // 0x126048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_12604c:
    // 0x12604c: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x12604cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
label_126050:
    // 0x126050: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126054:
    // 0x126054: 0xa3a0012f  sb          $zero, 0x12F($sp)
    ctx->pc = 0x126054u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 0));
label_126058:
    // 0x126058: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x126058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_12605c:
    // 0x12605c: 0xc05548c  jal         func_155230
label_126060:
    if (ctx->pc == 0x126060u) {
        ctx->pc = 0x126064u;
        goto label_126064;
    }
    ctx->pc = 0x12605Cu;
    SET_GPR_U32(ctx, 31, 0x126064u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x12605Cu, 0x126064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126064u;
label_126064:
    // 0x126064: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x126064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_126068:
    // 0x126068: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x126068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_12606c:
    // 0x12606c: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x12606cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_126070:
    // 0x126070: 0xc0553d4  jal         func_154F50
label_126074:
    if (ctx->pc == 0x126074u) {
        ctx->pc = 0x126078u;
        goto label_126078;
    }
    ctx->pc = 0x126070u;
    SET_GPR_U32(ctx, 31, 0x126078u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x126070u, 0x126078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126078u;
label_126078:
    // 0x126078: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x126078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_12607c:
    // 0x12607c: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x12607cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_126080:
    // 0x126080: 0xc042330  jal         func_108CC0
label_126084:
    if (ctx->pc == 0x126084u) {
        ctx->pc = 0x126088u;
        goto label_126088;
    }
    ctx->pc = 0x126080u;
    SET_GPR_U32(ctx, 31, 0x126088u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x126080u, 0x126088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126088u;
label_126088:
    // 0x126088: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x126088u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12608c:
    // 0x12608c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_126090:
    if (ctx->pc == 0x126090u) {
        ctx->pc = 0x126094u;
        goto label_126094;
    }
    ctx->pc = 0x12608Cu;
    {
        const bool branch_taken_0x12608c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x12608c) {
            ctx->pc = 0x1260A4u;
            goto label_1260a4;
        }
    }
    ctx->pc = 0x126094u;
label_126094:
    // 0x126094: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126098:
    // 0x126098: 0xa3a3012c  sb          $v1, 0x12C($sp)
    ctx->pc = 0x126098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 3));
label_12609c:
    // 0x12609c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1260a0:
    if (ctx->pc == 0x1260A0u) {
        ctx->pc = 0x1260A4u;
        goto label_1260a4;
    }
    ctx->pc = 0x12609Cu;
    {
        const bool branch_taken_0x12609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12609c) {
            ctx->pc = 0x1260A8u;
            goto label_1260a8;
        }
    }
    ctx->pc = 0x1260A4u;
label_1260a4:
    // 0x1260a4: 0xa3a0012c  sb          $zero, 0x12C($sp)
    ctx->pc = 0x1260a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 300), (uint8_t)GPR_U32(ctx, 0));
label_1260a8:
    // 0x1260a8: 0x93a3012c  lbu         $v1, 0x12C($sp)
    ctx->pc = 0x1260a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 300)));
label_1260ac:
    // 0x1260ac: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1260acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1260b0:
    // 0x1260b0: 0x120002d1  beqz        $s0, . + 4 + (0x2D1 << 2)
label_1260b4:
    if (ctx->pc == 0x1260B4u) {
        ctx->pc = 0x1260B8u;
        goto label_1260b8;
    }
    ctx->pc = 0x1260B0u;
    {
        const bool branch_taken_0x1260b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260b0) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x1260B8u;
label_1260b8:
    // 0x1260b8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x1260b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1260bc:
    // 0x1260bc: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x1260bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_1260c0:
    // 0x1260c0: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x1260c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_1260c4:
    // 0x1260c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1260c8:
    // 0x1260c8: 0xc040ab0  jal         func_102AC0
label_1260cc:
    if (ctx->pc == 0x1260CCu) {
        ctx->pc = 0x1260D0u;
        goto label_1260d0;
    }
    ctx->pc = 0x1260C8u;
    SET_GPR_U32(ctx, 31, 0x1260D0u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x1260C8u, 0x1260D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1260D0u;
label_1260d0:
    // 0x1260d0: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1260d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1260d4:
    // 0x1260d4: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x1260d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1260d8:
    // 0x1260d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1260dc:
    if (ctx->pc == 0x1260DCu) {
        ctx->pc = 0x1260E0u;
        goto label_1260e0;
    }
    ctx->pc = 0x1260D8u;
    {
        const bool branch_taken_0x1260d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1260d8) {
            ctx->pc = 0x1260F0u;
            goto label_1260f0;
        }
    }
    ctx->pc = 0x1260E0u;
label_1260e0:
    // 0x1260e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1260e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1260e4:
    // 0x1260e4: 0xa3a3012b  sb          $v1, 0x12B($sp)
    ctx->pc = 0x1260e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 299), (uint8_t)GPR_U32(ctx, 3));
label_1260e8:
    // 0x1260e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1260ec:
    if (ctx->pc == 0x1260ECu) {
        ctx->pc = 0x1260F0u;
        goto label_1260f0;
    }
    ctx->pc = 0x1260E8u;
    {
        const bool branch_taken_0x1260e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260e8) {
            ctx->pc = 0x1260F4u;
            goto label_1260f4;
        }
    }
    ctx->pc = 0x1260F0u;
label_1260f0:
    // 0x1260f0: 0xa3a0012b  sb          $zero, 0x12B($sp)
    ctx->pc = 0x1260f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 299), (uint8_t)GPR_U32(ctx, 0));
label_1260f4:
    // 0x1260f4: 0x93a4012b  lbu         $a0, 0x12B($sp)
    ctx->pc = 0x1260f4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 299)));
label_1260f8:
    // 0x1260f8: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x1260f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1260fc:
    // 0x1260fc: 0x120002be  beqz        $s0, . + 4 + (0x2BE << 2)
label_126100:
    if (ctx->pc == 0x126100u) {
        ctx->pc = 0x126104u;
        goto label_126104;
    }
    ctx->pc = 0x1260FCu;
    {
        const bool branch_taken_0x1260fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1260fc) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126104u;
label_126104:
    // 0x126104: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x126104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_126108:
    // 0x126108: 0xc042330  jal         func_108CC0
label_12610c:
    if (ctx->pc == 0x12610Cu) {
        ctx->pc = 0x126110u;
        goto label_126110;
    }
    ctx->pc = 0x126108u;
    SET_GPR_U32(ctx, 31, 0x126110u);
    ctx->pc = 0x108CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108CC0u, 0x126108u, 0x126110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126110u;
label_126110:
    // 0x126110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126114:
    // 0x126114: 0xc048f38  jal         func_123CE0
label_126118:
    if (ctx->pc == 0x126118u) {
        ctx->pc = 0x12611Cu;
        goto label_12611c;
    }
    ctx->pc = 0x126114u;
    SET_GPR_U32(ctx, 31, 0x12611Cu);
    ctx->pc = 0x123CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CE0u, 0x126114u, 0x12611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12611Cu;
label_12611c:
    // 0x12611c: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x12611cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_126120:
    // 0x126120: 0xa3a0012a  sb          $zero, 0x12A($sp)
    ctx->pc = 0x126120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 298), (uint8_t)GPR_U32(ctx, 0));
label_126124:
    // 0x126124: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x126124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_126128:
    // 0x126128: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
label_12612c:
    if (ctx->pc == 0x12612Cu) {
        ctx->pc = 0x126130u;
        goto label_126130;
    }
    ctx->pc = 0x126128u;
    {
        const bool branch_taken_0x126128 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x126128) {
            ctx->pc = 0x126148u;
            goto label_126148;
        }
    }
    ctx->pc = 0x126130u;
label_126130:
    // 0x126130: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x126130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_126134:
    // 0x126134: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x126134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_126138:
    // 0x126138: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_12613c:
    if (ctx->pc == 0x12613Cu) {
        ctx->pc = 0x126140u;
        goto label_126140;
    }
    ctx->pc = 0x126138u;
    {
        const bool branch_taken_0x126138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x126138) {
            ctx->pc = 0x126148u;
            goto label_126148;
        }
    }
    ctx->pc = 0x126140u;
label_126140:
    // 0x126140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126144:
    // 0x126144: 0xa3a3012a  sb          $v1, 0x12A($sp)
    ctx->pc = 0x126144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 298), (uint8_t)GPR_U32(ctx, 3));
label_126148:
    // 0x126148: 0x93b1012a  lbu         $s1, 0x12A($sp)
    ctx->pc = 0x126148u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 298)));
label_12614c:
    // 0x12614c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_126150:
    if (ctx->pc == 0x126150u) {
        ctx->pc = 0x126154u;
        goto label_126154;
    }
    ctx->pc = 0x12614Cu;
    {
        const bool branch_taken_0x12614c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x12614c) {
            ctx->pc = 0x126164u;
            goto label_126164;
        }
    }
    ctx->pc = 0x126154u;
label_126154:
    // 0x126154: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126158:
    // 0x126158: 0xa3a30129  sb          $v1, 0x129($sp)
    ctx->pc = 0x126158u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 297), (uint8_t)GPR_U32(ctx, 3));
label_12615c:
    // 0x12615c: 0x10000002  b           . + 4 + (0x2 << 2)
label_126160:
    if (ctx->pc == 0x126160u) {
        ctx->pc = 0x126164u;
        goto label_126164;
    }
    ctx->pc = 0x12615Cu;
    {
        const bool branch_taken_0x12615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12615c) {
            ctx->pc = 0x126168u;
            goto label_126168;
        }
    }
    ctx->pc = 0x126164u;
label_126164:
    // 0x126164: 0xa3a00129  sb          $zero, 0x129($sp)
    ctx->pc = 0x126164u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 297), (uint8_t)GPR_U32(ctx, 0));
label_126168:
    // 0x126168: 0x93a30129  lbu         $v1, 0x129($sp)
    ctx->pc = 0x126168u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 297)));
label_12616c:
    // 0x12616c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x12616cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_126170:
    // 0x126170: 0x120002a1  beqz        $s0, . + 4 + (0x2A1 << 2)
label_126174:
    if (ctx->pc == 0x126174u) {
        ctx->pc = 0x126178u;
        goto label_126178;
    }
    ctx->pc = 0x126170u;
    {
        const bool branch_taken_0x126170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x126170) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126178u;
label_126178:
    // 0x126178: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x126178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_12617c:
    // 0x12617c: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x12617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
label_126180:
    // 0x126180: 0x2405056a  addiu       $a1, $zero, 0x56A
    ctx->pc = 0x126180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1386));
label_126184:
    // 0x126184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126188:
    // 0x126188: 0xc040ab0  jal         func_102AC0
label_12618c:
    if (ctx->pc == 0x12618Cu) {
        ctx->pc = 0x126190u;
        goto label_126190;
    }
    ctx->pc = 0x126188u;
    SET_GPR_U32(ctx, 31, 0x126190u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x126188u, 0x126190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126190u;
label_126190:
    // 0x126190: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x126190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126194:
    // 0x126194: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x126194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_126198:
    // 0x126198: 0xc042320  jal         func_108C80
label_12619c:
    if (ctx->pc == 0x12619Cu) {
        ctx->pc = 0x1261A0u;
        goto label_1261a0;
    }
    ctx->pc = 0x126198u;
    SET_GPR_U32(ctx, 31, 0x1261A0u);
    ctx->pc = 0x108C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108C80u, 0x126198u, 0x1261A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261A0u;
label_1261a0:
    // 0x1261a0: 0x2a2082a  slt         $at, $s5, $v0
    ctx->pc = 0x1261a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1261a4:
    // 0x1261a4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1261a8:
    if (ctx->pc == 0x1261A8u) {
        ctx->pc = 0x1261ACu;
        goto label_1261ac;
    }
    ctx->pc = 0x1261A4u;
    {
        const bool branch_taken_0x1261a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261a4) {
            ctx->pc = 0x1261BCu;
            goto label_1261bc;
        }
    }
    ctx->pc = 0x1261ACu;
label_1261ac:
    // 0x1261ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1261acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261b0:
    // 0x1261b0: 0xa3a40128  sb          $a0, 0x128($sp)
    ctx->pc = 0x1261b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 296), (uint8_t)GPR_U32(ctx, 4));
label_1261b4:
    // 0x1261b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1261b8:
    if (ctx->pc == 0x1261B8u) {
        ctx->pc = 0x1261BCu;
        goto label_1261bc;
    }
    ctx->pc = 0x1261B4u;
    {
        const bool branch_taken_0x1261b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261b4) {
            ctx->pc = 0x1261C0u;
            goto label_1261c0;
        }
    }
    ctx->pc = 0x1261BCu;
label_1261bc:
    // 0x1261bc: 0xa3a00128  sb          $zero, 0x128($sp)
    ctx->pc = 0x1261bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 296), (uint8_t)GPR_U32(ctx, 0));
label_1261c0:
    // 0x1261c0: 0x93a30128  lbu         $v1, 0x128($sp)
    ctx->pc = 0x1261c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 296)));
label_1261c4:
    // 0x1261c4: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1261c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1261c8:
    // 0x1261c8: 0x1200028b  beqz        $s0, . + 4 + (0x28B << 2)
label_1261cc:
    if (ctx->pc == 0x1261CCu) {
        ctx->pc = 0x1261D0u;
        goto label_1261d0;
    }
    ctx->pc = 0x1261C8u;
    {
        const bool branch_taken_0x1261c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261c8) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x1261D0u;
label_1261d0:
    // 0x1261d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1261d4:
    // 0x1261d4: 0xc04939c  jal         func_124E70
label_1261d8:
    if (ctx->pc == 0x1261D8u) {
        ctx->pc = 0x1261DCu;
        goto label_1261dc;
    }
    ctx->pc = 0x1261D4u;
    SET_GPR_U32(ctx, 31, 0x1261DCu);
    ctx->pc = 0x124E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E70u, 0x1261D4u, 0x1261DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1261DCu;
label_1261dc:
    // 0x1261dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1261dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1261e0:
    // 0x1261e0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_1261e4:
    if (ctx->pc == 0x1261E4u) {
        ctx->pc = 0x1261E8u;
        goto label_1261e8;
    }
    ctx->pc = 0x1261E0u;
    {
        const bool branch_taken_0x1261e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261e0) {
            ctx->pc = 0x1261F8u;
            goto label_1261f8;
        }
    }
    ctx->pc = 0x1261E8u;
label_1261e8:
    // 0x1261e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1261e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1261ec:
    // 0x1261ec: 0xa3a30127  sb          $v1, 0x127($sp)
    ctx->pc = 0x1261ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 295), (uint8_t)GPR_U32(ctx, 3));
label_1261f0:
    // 0x1261f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1261f4:
    if (ctx->pc == 0x1261F4u) {
        ctx->pc = 0x1261F8u;
        goto label_1261f8;
    }
    ctx->pc = 0x1261F0u;
    {
        const bool branch_taken_0x1261f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1261f0) {
            ctx->pc = 0x1261FCu;
            goto label_1261fc;
        }
    }
    ctx->pc = 0x1261F8u;
label_1261f8:
    // 0x1261f8: 0xa3a00127  sb          $zero, 0x127($sp)
    ctx->pc = 0x1261f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 295), (uint8_t)GPR_U32(ctx, 0));
label_1261fc:
    // 0x1261fc: 0x93a40127  lbu         $a0, 0x127($sp)
    ctx->pc = 0x1261fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 295)));
label_126200:
    // 0x126200: 0x309000ff  andi        $s0, $a0, 0xFF
    ctx->pc = 0x126200u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_126204:
    // 0x126204: 0x1200027c  beqz        $s0, . + 4 + (0x27C << 2)
label_126208:
    if (ctx->pc == 0x126208u) {
        ctx->pc = 0x12620Cu;
        goto label_12620c;
    }
    ctx->pc = 0x126204u;
    {
        const bool branch_taken_0x126204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x126204) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x12620Cu;
label_12620c:
    // 0x12620c: 0x8f84b9f0  lw          $a0, -0x4610($gp)
    ctx->pc = 0x12620cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949360)));
label_126210:
    // 0x126210: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x126210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126214:
    // 0x126214: 0x108301a0  beq         $a0, $v1, . + 4 + (0x1A0 << 2)
label_126218:
    if (ctx->pc == 0x126218u) {
        ctx->pc = 0x12621Cu;
        goto label_12621c;
    }
    ctx->pc = 0x126214u;
    {
        const bool branch_taken_0x126214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126214) {
            ctx->pc = 0x126898u;
            goto label_126898;
        }
    }
    ctx->pc = 0x12621Cu;
label_12621c:
    // 0x12621c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12621cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126220:
    // 0x126220: 0x10850191  beq         $a0, $a1, . + 4 + (0x191 << 2)
label_126224:
    if (ctx->pc == 0x126224u) {
        ctx->pc = 0x126228u;
        goto label_126228;
    }
    ctx->pc = 0x126220u;
    {
        const bool branch_taken_0x126220 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x126220) {
            ctx->pc = 0x126868u;
            goto label_126868;
        }
    }
    ctx->pc = 0x126228u;
label_126228:
    // 0x126228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12622c:
    // 0x12622c: 0x10830087  beq         $a0, $v1, . + 4 + (0x87 << 2)
label_126230:
    if (ctx->pc == 0x126230u) {
        ctx->pc = 0x126234u;
        goto label_126234;
    }
    ctx->pc = 0x12622Cu;
    {
        const bool branch_taken_0x12622c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x12622c) {
            ctx->pc = 0x12644Cu;
            goto label_12644c;
        }
    }
    ctx->pc = 0x126234u;
label_126234:
    // 0x126234: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_126238:
    if (ctx->pc == 0x126238u) {
        ctx->pc = 0x12623Cu;
        goto label_12623c;
    }
    ctx->pc = 0x126234u;
    {
        const bool branch_taken_0x126234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x126234) {
            ctx->pc = 0x126244u;
            goto label_126244;
        }
    }
    ctx->pc = 0x12623Cu;
label_12623c:
    // 0x12623c: 0x1000026e  b           . + 4 + (0x26E << 2)
label_126240:
    if (ctx->pc == 0x126240u) {
        ctx->pc = 0x126244u;
        goto label_126244;
    }
    ctx->pc = 0x12623Cu;
    {
        const bool branch_taken_0x12623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12623c) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126244u;
label_126244:
    // 0x126244: 0xaf80ba38  sw          $zero, -0x45C8($gp)
    ctx->pc = 0x126244u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949432), GPR_U32(ctx, 0));
label_126248:
    // 0x126248: 0xaf80ba34  sw          $zero, -0x45CC($gp)
    ctx->pc = 0x126248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949428), GPR_U32(ctx, 0));
label_12624c:
    // 0x12624c: 0xaf80ba30  sw          $zero, -0x45D0($gp)
    ctx->pc = 0x12624cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949424), GPR_U32(ctx, 0));
label_126250:
    // 0x126250: 0xaf80ba2c  sw          $zero, -0x45D4($gp)
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949420), GPR_U32(ctx, 0));
label_126254:
    // 0x126254: 0xaf80b9f4  sw          $zero, -0x460C($gp)
    ctx->pc = 0x126254u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949364), GPR_U32(ctx, 0));
label_126258:
    // 0x126258: 0xc048f34  jal         func_123CD0
label_12625c:
    if (ctx->pc == 0x12625Cu) {
        ctx->pc = 0x126260u;
        goto label_126260;
    }
    ctx->pc = 0x126258u;
    SET_GPR_U32(ctx, 31, 0x126260u);
    ctx->pc = 0x123CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123CD0u, 0x126258u, 0x126260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126260u;
label_126260:
    // 0x126260: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x126260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126264:
    // 0x126264: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126268:
    // 0x126268: 0xc0497a4  jal         func_125E90
label_12626c:
    if (ctx->pc == 0x12626Cu) {
        ctx->pc = 0x126270u;
        goto label_126270;
    }
    ctx->pc = 0x126268u;
    SET_GPR_U32(ctx, 31, 0x126270u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x126268u, 0x126270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126270u;
label_126270:
    // 0x126270: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126274:
    // 0x126274: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x126274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_126278:
    // 0x126278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12627c:
    // 0x12627c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12627cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126280:
    // 0x126280: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x126280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_126284:
    // 0x126284: 0x320f809  jalr        $t9
label_126288:
    if (ctx->pc == 0x126288u) {
        ctx->pc = 0x12628Cu;
        goto label_12628c;
    }
    ctx->pc = 0x126284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12628Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126284u, 0x12628Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12628Cu;
label_12628c:
    // 0x12628c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12628cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126290:
    // 0x126290: 0xc0497a4  jal         func_125E90
label_126294:
    if (ctx->pc == 0x126294u) {
        ctx->pc = 0x126298u;
        goto label_126298;
    }
    ctx->pc = 0x126290u;
    SET_GPR_U32(ctx, 31, 0x126298u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x126290u, 0x126298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126298u;
label_126298:
    // 0x126298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12629c:
    // 0x12629c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x12629cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1262a0:
    // 0x1262a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1262a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1262a4:
    // 0x1262a4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1262a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1262a8:
    // 0x1262a8: 0x320f809  jalr        $t9
label_1262ac:
    if (ctx->pc == 0x1262ACu) {
        ctx->pc = 0x1262B0u;
        goto label_1262b0;
    }
    ctx->pc = 0x1262A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1262B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262A8u, 0x1262B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1262B0u;
label_1262b0:
    // 0x1262b0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1262b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1262b4:
    // 0x1262b4: 0xc08ec7c  jal         func_23B1F0
label_1262b8:
    if (ctx->pc == 0x1262B8u) {
        ctx->pc = 0x1262BCu;
        goto label_1262bc;
    }
    ctx->pc = 0x1262B4u;
    SET_GPR_U32(ctx, 31, 0x1262BCu);
    ctx->pc = 0x23B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1F0u, 0x1262B4u, 0x1262BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262BCu;
label_1262bc:
    // 0x1262bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1262bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1262c0:
    // 0x1262c0: 0xc0497a4  jal         func_125E90
label_1262c4:
    if (ctx->pc == 0x1262C4u) {
        ctx->pc = 0x1262C8u;
        goto label_1262c8;
    }
    ctx->pc = 0x1262C0u;
    SET_GPR_U32(ctx, 31, 0x1262C8u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x1262C0u, 0x1262C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262C8u;
label_1262c8:
    // 0x1262c8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x1262c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_1262cc:
    // 0x1262cc: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x1262ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1262d0:
    // 0x1262d0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1262d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1262d4:
    // 0x1262d4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1262d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1262d8:
    // 0x1262d8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1262d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1262dc:
    // 0x1262dc: 0x320f809  jalr        $t9
label_1262e0:
    if (ctx->pc == 0x1262E0u) {
        ctx->pc = 0x1262E4u;
        goto label_1262e4;
    }
    ctx->pc = 0x1262DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1262E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1262DCu, 0x1262E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1262E4u;
label_1262e4:
    // 0x1262e4: 0xc090864  jal         func_242190
label_1262e8:
    if (ctx->pc == 0x1262E8u) {
        ctx->pc = 0x1262ECu;
        goto label_1262ec;
    }
    ctx->pc = 0x1262E4u;
    SET_GPR_U32(ctx, 31, 0x1262ECu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x1262E4u, 0x1262ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262ECu;
label_1262ec:
    // 0x1262ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1262ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1262f0:
    // 0x1262f0: 0xc090598  jal         func_241660
label_1262f4:
    if (ctx->pc == 0x1262F4u) {
        ctx->pc = 0x1262F8u;
        goto label_1262f8;
    }
    ctx->pc = 0x1262F0u;
    SET_GPR_U32(ctx, 31, 0x1262F8u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x1262F0u, 0x1262F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1262F8u;
label_1262f8:
    // 0x1262f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1262f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1262fc:
    // 0x1262fc: 0xc095c1c  jal         func_257070
label_126300:
    if (ctx->pc == 0x126300u) {
        ctx->pc = 0x126304u;
        goto label_126304;
    }
    ctx->pc = 0x1262FCu;
    SET_GPR_U32(ctx, 31, 0x126304u);
    ctx->pc = 0x257070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x257070u, 0x1262FCu, 0x126304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126304u;
label_126304:
    // 0x126304: 0xc090864  jal         func_242190
label_126308:
    if (ctx->pc == 0x126308u) {
        ctx->pc = 0x12630Cu;
        goto label_12630c;
    }
    ctx->pc = 0x126304u;
    SET_GPR_U32(ctx, 31, 0x12630Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x126304u, 0x12630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12630Cu;
label_12630c:
    // 0x12630c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12630cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126310:
    // 0x126310: 0xc090598  jal         func_241660
label_126314:
    if (ctx->pc == 0x126314u) {
        ctx->pc = 0x126318u;
        goto label_126318;
    }
    ctx->pc = 0x126310u;
    SET_GPR_U32(ctx, 31, 0x126318u);
    ctx->pc = 0x241660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241660u, 0x126310u, 0x126318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126318u;
label_126318:
    // 0x126318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12631c:
    // 0x12631c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x12631cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_126320:
    // 0x126320: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126324:
    // 0x126324: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x126324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_126328:
    // 0x126328: 0x320f809  jalr        $t9
label_12632c:
    if (ctx->pc == 0x12632Cu) {
        ctx->pc = 0x126330u;
        goto label_126330;
    }
    ctx->pc = 0x126328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126328u, 0x126330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126330u;
label_126330:
    // 0x126330: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126334:
    // 0x126334: 0xc0497a4  jal         func_125E90
label_126338:
    if (ctx->pc == 0x126338u) {
        ctx->pc = 0x12633Cu;
        goto label_12633c;
    }
    ctx->pc = 0x126334u;
    SET_GPR_U32(ctx, 31, 0x12633Cu);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x126334u, 0x12633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12633Cu;
label_12633c:
    // 0x12633c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12633cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126340:
    // 0x126340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126344:
    // 0x126344: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126348:
    // 0x126348: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12634c:
    // 0x12634c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x12634cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_126350:
    // 0x126350: 0x320f809  jalr        $t9
label_126354:
    if (ctx->pc == 0x126354u) {
        ctx->pc = 0x126358u;
        goto label_126358;
    }
    ctx->pc = 0x126350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126358u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126350u, 0x126358u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126358u;
label_126358:
    // 0x126358: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_12635c:
    // 0x12635c: 0xc0497a4  jal         func_125E90
label_126360:
    if (ctx->pc == 0x126360u) {
        ctx->pc = 0x126364u;
        goto label_126364;
    }
    ctx->pc = 0x12635Cu;
    SET_GPR_U32(ctx, 31, 0x126364u);
    ctx->pc = 0x125E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125E90u, 0x12635Cu, 0x126364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126364u;
label_126364:
    // 0x126364: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126368:
    // 0x126368: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12636c:
    // 0x12636c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x12636cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126370:
    // 0x126370: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x126370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_126374:
    // 0x126374: 0x320f809  jalr        $t9
label_126378:
    if (ctx->pc == 0x126378u) {
        ctx->pc = 0x12637Cu;
        goto label_12637c;
    }
    ctx->pc = 0x126374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x12637Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126374u, 0x12637Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12637Cu;
label_12637c:
    // 0x12637c: 0x8f85b9d8  lw          $a1, -0x4628($gp)
    ctx->pc = 0x12637cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949336)));
label_126380:
    // 0x126380: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x126380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126384:
    // 0x126384: 0xc050b24  jal         func_142C90
label_126388:
    if (ctx->pc == 0x126388u) {
        ctx->pc = 0x12638Cu;
        goto label_12638c;
    }
    ctx->pc = 0x126384u;
    SET_GPR_U32(ctx, 31, 0x12638Cu);
    ctx->pc = 0x142C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142C90u, 0x126384u, 0x12638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12638Cu;
label_12638c:
    // 0x12638c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126390:
    // 0x126390: 0xc0422e0  jal         func_108B80
label_126394:
    if (ctx->pc == 0x126394u) {
        ctx->pc = 0x126398u;
        goto label_126398;
    }
    ctx->pc = 0x126390u;
    SET_GPR_U32(ctx, 31, 0x126398u);
    ctx->pc = 0x108B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108B80u, 0x126390u, 0x126398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126398u;
label_126398:
    // 0x126398: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x126398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12639c:
    // 0x12639c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12639cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1263a0:
    // 0x1263a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1263a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1263a4:
    // 0x1263a4: 0xc08d124  jal         func_234490
label_1263a8:
    if (ctx->pc == 0x1263A8u) {
        ctx->pc = 0x1263ACu;
        goto label_1263ac;
    }
    ctx->pc = 0x1263A4u;
    SET_GPR_U32(ctx, 31, 0x1263ACu);
    ctx->pc = 0x234490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234490u, 0x1263A4u, 0x1263ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263ACu;
label_1263ac:
    // 0x1263ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1263acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1263b0:
    // 0x1263b0: 0x1260001e  beqz        $s3, . + 4 + (0x1E << 2)
label_1263b4:
    if (ctx->pc == 0x1263B4u) {
        ctx->pc = 0x1263B8u;
        goto label_1263b8;
    }
    ctx->pc = 0x1263B0u;
    {
        const bool branch_taken_0x1263b0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1263b0) {
            ctx->pc = 0x12642Cu;
            goto label_12642c;
        }
    }
    ctx->pc = 0x1263B8u;
label_1263b8:
    // 0x1263b8: 0x8f85bbb4  lw          $a1, -0x444C($gp)
    ctx->pc = 0x1263b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1263bc:
    // 0x1263bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1263bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1263c0:
    // 0x1263c0: 0xc047eb8  jal         func_11FAE0
label_1263c4:
    if (ctx->pc == 0x1263C4u) {
        ctx->pc = 0x1263C8u;
        goto label_1263c8;
    }
    ctx->pc = 0x1263C0u;
    SET_GPR_U32(ctx, 31, 0x1263C8u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1263C0u, 0x1263C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263C8u;
label_1263c8:
    // 0x1263c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1263c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1263cc:
    // 0x1263cc: 0xc047eb0  jal         func_11FAC0
label_1263d0:
    if (ctx->pc == 0x1263D0u) {
        ctx->pc = 0x1263D4u;
        goto label_1263d4;
    }
    ctx->pc = 0x1263CCu;
    SET_GPR_U32(ctx, 31, 0x1263D4u);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x1263CCu, 0x1263D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263D4u;
label_1263d4:
    // 0x1263d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1263d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1263d8:
    // 0x1263d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1263d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1263dc:
    // 0x1263dc: 0xc049b80  jal         func_126E00
label_1263e0:
    if (ctx->pc == 0x1263E0u) {
        ctx->pc = 0x1263E4u;
        goto label_1263e4;
    }
    ctx->pc = 0x1263DCu;
    SET_GPR_U32(ctx, 31, 0x1263E4u);
    ctx->pc = 0x126E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126E00u, 0x1263DCu, 0x1263E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263E4u;
label_1263e4:
    // 0x1263e4: 0x8f86bbb4  lw          $a2, -0x444C($gp)
    ctx->pc = 0x1263e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_1263e8:
    // 0x1263e8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1263e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1263ec:
    // 0x1263ec: 0xc047eb8  jal         func_11FAE0
label_1263f0:
    if (ctx->pc == 0x1263F0u) {
        ctx->pc = 0x1263F4u;
        goto label_1263f4;
    }
    ctx->pc = 0x1263ECu;
    SET_GPR_U32(ctx, 31, 0x1263F4u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x1263ECu, 0x1263F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1263F4u;
label_1263f4:
    // 0x1263f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1263f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1263f8:
    // 0x1263f8: 0xc08d5d8  jal         func_235760
label_1263fc:
    if (ctx->pc == 0x1263FCu) {
        ctx->pc = 0x126400u;
        goto label_126400;
    }
    ctx->pc = 0x1263F8u;
    SET_GPR_U32(ctx, 31, 0x126400u);
    ctx->pc = 0x235760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235760u, 0x1263F8u, 0x126400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126400u;
label_126400:
    // 0x126400: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x126400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
label_126404:
    // 0x126404: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x126404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
label_126408:
    // 0x126408: 0xc047eb8  jal         func_11FAE0
label_12640c:
    if (ctx->pc == 0x12640Cu) {
        ctx->pc = 0x126410u;
        goto label_126410;
    }
    ctx->pc = 0x126408u;
    SET_GPR_U32(ctx, 31, 0x126410u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x126408u, 0x126410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126410u;
label_126410:
    // 0x126410: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x126410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_126414:
    // 0x126414: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126418:
    // 0x126418: 0x27868b70  addiu       $a2, $gp, -0x7490
    ctx->pc = 0x126418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937456));
label_12641c:
    // 0x12641c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12641cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_126420:
    // 0x126420: 0xc049b6c  jal         func_126DB0
label_126424:
    if (ctx->pc == 0x126424u) {
        ctx->pc = 0x126428u;
        goto label_126428;
    }
    ctx->pc = 0x126420u;
    SET_GPR_U32(ctx, 31, 0x126428u);
    ctx->pc = 0x126DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126DB0u, 0x126420u, 0x126428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126428u;
label_126428:
    // 0x126428: 0xe6600030  swc1        $f0, 0x30($s3)
    ctx->pc = 0x126428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
label_12642c:
    // 0x12642c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12642cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126430:
    // 0x126430: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x126430u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
label_126434:
    // 0x126434: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x126434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_126438:
    // 0x126438: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x126438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12643c:
    // 0x12643c: 0xc041b74  jal         func_106DD0
label_126440:
    if (ctx->pc == 0x126440u) {
        ctx->pc = 0x126444u;
        goto label_126444;
    }
    ctx->pc = 0x12643Cu;
    SET_GPR_U32(ctx, 31, 0x126444u);
    ctx->pc = 0x106DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106DD0u, 0x12643Cu, 0x126444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126444u;
label_126444:
    // 0x126444: 0x100001ec  b           . + 4 + (0x1EC << 2)
label_126448:
    if (ctx->pc == 0x126448u) {
        ctx->pc = 0x12644Cu;
        goto label_12644c;
    }
    ctx->pc = 0x126444u;
    {
        const bool branch_taken_0x126444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126444) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x12644Cu;
label_12644c:
    // 0x12644c: 0xa3a0012e  sb          $zero, 0x12E($sp)
    ctx->pc = 0x12644cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 0));
label_126450:
    // 0x126450: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x126450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126454:
    // 0x126454: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x126454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_126458:
    // 0x126458: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x126458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_12645c:
    // 0x12645c: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x12645cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_126460:
    // 0x126460: 0x10000019  b           . + 4 + (0x19 << 2)
label_126464:
    if (ctx->pc == 0x126464u) {
        ctx->pc = 0x126468u;
        goto label_126468;
    }
    ctx->pc = 0x126460u;
    {
        const bool branch_taken_0x126460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126460) {
            ctx->pc = 0x1264C8u;
            goto label_1264c8;
        }
    }
    ctx->pc = 0x126468u;
label_126468:
    // 0x126468: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x126468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_12646c:
    // 0x12646c: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x12646cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_126470:
    // 0x126470: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x126470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_126474:
    // 0x126474: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x126474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126478:
    // 0x126478: 0x8c85006c  lw          $a1, 0x6C($a0)
    ctx->pc = 0x126478u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_12647c:
    // 0x12647c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x12647cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
label_126480:
    // 0x126480: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_126484:
    if (ctx->pc == 0x126484u) {
        ctx->pc = 0x126488u;
        goto label_126488;
    }
    ctx->pc = 0x126480u;
    {
        const bool branch_taken_0x126480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126480) {
            ctx->pc = 0x1264A8u;
            goto label_1264a8;
        }
    }
    ctx->pc = 0x126488u;
label_126488:
    // 0x126488: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x126488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_12648c:
    // 0x12648c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x12648cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_126490:
    // 0x126490: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x126490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_126494:
    // 0x126494: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x126494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126498:
    // 0x126498: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x126498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_12649c:
    // 0x12649c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x12649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1264a0:
    // 0x1264a0: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_1264a4:
    if (ctx->pc == 0x1264A4u) {
        ctx->pc = 0x1264A8u;
        goto label_1264a8;
    }
    ctx->pc = 0x1264A0u;
    {
        const bool branch_taken_0x1264a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1264a0) {
            ctx->pc = 0x1264BCu;
            goto label_1264bc;
        }
    }
    ctx->pc = 0x1264A8u;
label_1264a8:
    // 0x1264a8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1264a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1264ac:
    // 0x1264ac: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x1264acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
label_1264b0:
    // 0x1264b0: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1264b4:
    // 0x1264b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1264b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1264b8:
    // 0x1264b8: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1264b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1264bc:
    // 0x1264bc: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1264bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1264c0:
    // 0x1264c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1264c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1264c4:
    // 0x1264c4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1264c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1264c8:
    // 0x1264c8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1264c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1264cc:
    // 0x1264cc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1264ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1264d0:
    // 0x1264d0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1264d4:
    if (ctx->pc == 0x1264D4u) {
        ctx->pc = 0x1264D8u;
        goto label_1264d8;
    }
    ctx->pc = 0x1264D0u;
    {
        const bool branch_taken_0x1264d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1264d0) {
            ctx->pc = 0x126468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126468;
        }
    }
    ctx->pc = 0x1264D8u;
label_1264d8:
    // 0x1264d8: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1264d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1264dc:
    // 0x1264dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1264e0:
    if (ctx->pc == 0x1264E0u) {
        ctx->pc = 0x1264E4u;
        goto label_1264e4;
    }
    ctx->pc = 0x1264DCu;
    {
        const bool branch_taken_0x1264dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264dc) {
            ctx->pc = 0x1264F4u;
            goto label_1264f4;
        }
    }
    ctx->pc = 0x1264E4u;
label_1264e4:
    // 0x1264e4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1264e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1264e8:
    // 0x1264e8: 0x9042b485  lbu         $v0, -0x4B7B($v0)
    ctx->pc = 0x1264e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947973)));
label_1264ec:
    // 0x1264ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1264f0:
    if (ctx->pc == 0x1264F0u) {
        ctx->pc = 0x1264F4u;
        goto label_1264f4;
    }
    ctx->pc = 0x1264ECu;
    {
        const bool branch_taken_0x1264ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1264ec) {
            ctx->pc = 0x1264FCu;
            goto label_1264fc;
        }
    }
    ctx->pc = 0x1264F4u;
label_1264f4:
    // 0x1264f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1264f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1264f8:
    // 0x1264f8: 0xa3a2012e  sb          $v0, 0x12E($sp)
    ctx->pc = 0x1264f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 302), (uint8_t)GPR_U32(ctx, 2));
label_1264fc:
    // 0x1264fc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1264fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_126500:
    // 0x126500: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x126500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_126504:
    // 0x126504: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_126508:
    // 0x126508: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x126508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_12650c:
    // 0x12650c: 0xc0bc60c  jal         func_2F1830
label_126510:
    if (ctx->pc == 0x126510u) {
        ctx->pc = 0x126514u;
        goto label_126514;
    }
    ctx->pc = 0x12650Cu;
    SET_GPR_U32(ctx, 31, 0x126514u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x12650Cu, 0x126514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126514u;
label_126514:
    // 0x126514: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_126518:
    if (ctx->pc == 0x126518u) {
        ctx->pc = 0x12651Cu;
        goto label_12651c;
    }
    ctx->pc = 0x126514u;
    {
        const bool branch_taken_0x126514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126514) {
            ctx->pc = 0x126528u;
            goto label_126528;
        }
    }
    ctx->pc = 0x12651Cu;
label_12651c:
    // 0x12651c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126520:
    // 0x126520: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x126520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_126524:
    // 0x126524: 0xa043b4bc  sb          $v1, -0x4B44($v0)
    ctx->pc = 0x126524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294948028), (uint8_t)GPR_U32(ctx, 3));
label_126528:
    // 0x126528: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12652c:
    // 0x12652c: 0xa3a20126  sb          $v0, 0x126($sp)
    ctx->pc = 0x12652cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 294), (uint8_t)GPR_U32(ctx, 2));
label_126530:
    // 0x126530: 0x93a2012e  lbu         $v0, 0x12E($sp)
    ctx->pc = 0x126530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 302)));
label_126534:
    // 0x126534: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_126538:
    if (ctx->pc == 0x126538u) {
        ctx->pc = 0x12653Cu;
        goto label_12653c;
    }
    ctx->pc = 0x126534u;
    {
        const bool branch_taken_0x126534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126534) {
            ctx->pc = 0x126550u;
            goto label_126550;
        }
    }
    ctx->pc = 0x12653Cu;
label_12653c:
    // 0x12653c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x12653cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_126540:
    // 0x126540: 0x9042b485  lbu         $v0, -0x4B7B($v0)
    ctx->pc = 0x126540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947973)));
label_126544:
    // 0x126544: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_126548:
    if (ctx->pc == 0x126548u) {
        ctx->pc = 0x12654Cu;
        goto label_12654c;
    }
    ctx->pc = 0x126544u;
    {
        const bool branch_taken_0x126544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x126544) {
            ctx->pc = 0x126550u;
            goto label_126550;
        }
    }
    ctx->pc = 0x12654Cu;
label_12654c:
    // 0x12654c: 0xa3a00126  sb          $zero, 0x126($sp)
    ctx->pc = 0x12654cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 294), (uint8_t)GPR_U32(ctx, 0));
label_126550:
    // 0x126550: 0x93a20126  lbu         $v0, 0x126($sp)
    ctx->pc = 0x126550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 294)));
label_126554:
    // 0x126554: 0xa3a2012d  sb          $v0, 0x12D($sp)
    ctx->pc = 0x126554u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 301), (uint8_t)GPR_U32(ctx, 2));
label_126558:
    // 0x126558: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x126558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_12655c:
    // 0x12655c: 0xc0447ec  jal         func_111FB0
label_126560:
    if (ctx->pc == 0x126560u) {
        ctx->pc = 0x126564u;
        goto label_126564;
    }
    ctx->pc = 0x12655Cu;
    SET_GPR_U32(ctx, 31, 0x126564u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x12655Cu, 0x126564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126564u;
label_126564:
    // 0x126564: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x126564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_126568:
    // 0x126568: 0x1000001a  b           . + 4 + (0x1A << 2)
label_12656c:
    if (ctx->pc == 0x12656Cu) {
        ctx->pc = 0x126570u;
        goto label_126570;
    }
    ctx->pc = 0x126568u;
    {
        const bool branch_taken_0x126568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126568) {
            ctx->pc = 0x1265D4u;
            goto label_1265d4;
        }
    }
    ctx->pc = 0x126570u;
label_126570:
    // 0x126570: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x126570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_126574:
    // 0x126574: 0x10550014  beq         $v0, $s5, . + 4 + (0x14 << 2)
label_126578:
    if (ctx->pc == 0x126578u) {
        ctx->pc = 0x12657Cu;
        goto label_12657c;
    }
    ctx->pc = 0x126574u;
    {
        const bool branch_taken_0x126574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x126574) {
            ctx->pc = 0x1265C8u;
            goto label_1265c8;
        }
    }
    ctx->pc = 0x12657Cu;
label_12657c:
    // 0x12657c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x12657cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_126580:
    // 0x126580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x126580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_126584:
    // 0x126584: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x126584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_126588:
    // 0x126588: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x126588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12658c:
    // 0x12658c: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x12658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_126590:
    // 0x126590: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_126594:
    if (ctx->pc == 0x126594u) {
        ctx->pc = 0x126598u;
        goto label_126598;
    }
    ctx->pc = 0x126590u;
    {
        const bool branch_taken_0x126590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126590) {
            ctx->pc = 0x1265B8u;
            goto label_1265b8;
        }
    }
    ctx->pc = 0x126598u;
label_126598:
    // 0x126598: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x126598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_12659c:
    // 0x12659c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12659cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1265a0:
    // 0x1265a0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1265a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1265a4:
    // 0x1265a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1265a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1265a8:
    // 0x1265a8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1265a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1265ac:
    // 0x1265ac: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1265acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1265b0:
    // 0x1265b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1265b4:
    if (ctx->pc == 0x1265B4u) {
        ctx->pc = 0x1265B8u;
        goto label_1265b8;
    }
    ctx->pc = 0x1265B0u;
    {
        const bool branch_taken_0x1265b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1265b0) {
            ctx->pc = 0x1265C8u;
            goto label_1265c8;
        }
    }
    ctx->pc = 0x1265B8u;
label_1265b8:
    // 0x1265b8: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x1265b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1265bc:
    // 0x1265bc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1265bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1265c0:
    // 0x1265c0: 0xc0444e0  jal         func_111380
label_1265c4:
    if (ctx->pc == 0x1265C4u) {
        ctx->pc = 0x1265C8u;
        goto label_1265c8;
    }
    ctx->pc = 0x1265C0u;
    SET_GPR_U32(ctx, 31, 0x1265C8u);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1265C0u, 0x1265C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265C8u;
label_1265c8:
    // 0x1265c8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1265c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1265cc:
    // 0x1265cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1265ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1265d0:
    // 0x1265d0: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x1265d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_1265d4:
    // 0x1265d4: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1265d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1265d8:
    // 0x1265d8: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1265d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1265dc:
    // 0x1265dc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_1265e0:
    if (ctx->pc == 0x1265E0u) {
        ctx->pc = 0x1265E4u;
        goto label_1265e4;
    }
    ctx->pc = 0x1265DCu;
    {
        const bool branch_taken_0x1265dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1265dc) {
            ctx->pc = 0x126570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126570;
        }
    }
    ctx->pc = 0x1265E4u;
label_1265e4:
    // 0x1265e4: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1265e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1265e8:
    // 0x1265e8: 0xc119b68  jal         func_466DA0
label_1265ec:
    if (ctx->pc == 0x1265ECu) {
        ctx->pc = 0x1265F0u;
        goto label_1265f0;
    }
    ctx->pc = 0x1265E8u;
    SET_GPR_U32(ctx, 31, 0x1265F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1265E8u, 0x1265F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1265F0u;
label_1265f0:
    // 0x1265f0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1265f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1265f4:
    // 0x1265f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1265f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1265f8:
    // 0x1265f8: 0xc0400e0  jal         func_100380
label_1265fc:
    if (ctx->pc == 0x1265FCu) {
        ctx->pc = 0x126600u;
        goto label_126600;
    }
    ctx->pc = 0x1265F8u;
    SET_GPR_U32(ctx, 31, 0x126600u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1265F8u, 0x126600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126600u;
label_126600:
    // 0x126600: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x126600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_126604:
    // 0x126604: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x126604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_126608:
    // 0x126608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12660c:
    if (ctx->pc == 0x12660Cu) {
        ctx->pc = 0x126610u;
        goto label_126610;
    }
    ctx->pc = 0x126608u;
    {
        const bool branch_taken_0x126608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126608) {
            ctx->pc = 0x126620u;
            goto label_126620;
        }
    }
    ctx->pc = 0x126610u;
label_126610:
    // 0x126610: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x126610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_126614:
    // 0x126614: 0xc119f38  jal         func_467CE0
label_126618:
    if (ctx->pc == 0x126618u) {
        ctx->pc = 0x12661Cu;
        goto label_12661c;
    }
    ctx->pc = 0x126614u;
    SET_GPR_U32(ctx, 31, 0x12661Cu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x126614u, 0x12661Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12661Cu;
label_12661c:
    // 0x12661c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x12661cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_126620:
    // 0x126620: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x126620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_126624:
    // 0x126624: 0xaf82b9f4  sw          $v0, -0x460C($gp)
    ctx->pc = 0x126624u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949364), GPR_U32(ctx, 2));
label_126628:
    // 0x126628: 0x8f84b9f4  lw          $a0, -0x460C($gp)
    ctx->pc = 0x126628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_12662c:
    // 0x12662c: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x12662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_126630:
    // 0x126630: 0x8c452210  lw          $a1, 0x2210($v0)
    ctx->pc = 0x126630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8720)));
label_126634:
    // 0x126634: 0xc119f5c  jal         func_467D70
label_126638:
    if (ctx->pc == 0x126638u) {
        ctx->pc = 0x12663Cu;
        goto label_12663c;
    }
    ctx->pc = 0x126634u;
    SET_GPR_U32(ctx, 31, 0x12663Cu);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x126634u, 0x12663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12663Cu;
label_12663c:
    // 0x12663c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x12663cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_126640:
    // 0x126640: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x126640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_126644:
    // 0x126644: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x126644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_126648:
    // 0x126648: 0xa3a2012f  sb          $v0, 0x12F($sp)
    ctx->pc = 0x126648u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 2));
label_12664c:
    // 0x12664c: 0x8f84b9f4  lw          $a0, -0x460C($gp)
    ctx->pc = 0x12664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_126650:
    // 0x126650: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x126650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126654:
    // 0x126654: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126658:
    // 0x126658: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x126658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_12665c:
    // 0x12665c: 0x320f809  jalr        $t9
label_126660:
    if (ctx->pc == 0x126660u) {
        ctx->pc = 0x126664u;
        goto label_126664;
    }
    ctx->pc = 0x12665Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12665Cu, 0x126664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126664u;
label_126664:
    // 0x126664: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x126664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_126668:
    // 0x126668: 0xc049b3c  jal         func_126CF0
label_12666c:
    if (ctx->pc == 0x12666Cu) {
        ctx->pc = 0x126670u;
        goto label_126670;
    }
    ctx->pc = 0x126668u;
    SET_GPR_U32(ctx, 31, 0x126670u);
    ctx->pc = 0x126CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CF0u, 0x126668u, 0x126670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126670u;
label_126670:
    // 0x126670: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126674:
    // 0x126674: 0x8f85b9f4  lw          $a1, -0x460C($gp)
    ctx->pc = 0x126674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_126678:
    // 0x126678: 0xc08cf64  jal         func_233D90
label_12667c:
    if (ctx->pc == 0x12667Cu) {
        ctx->pc = 0x126680u;
        goto label_126680;
    }
    ctx->pc = 0x126678u;
    SET_GPR_U32(ctx, 31, 0x126680u);
    ctx->pc = 0x233D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D90u, 0x126678u, 0x126680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126680u;
label_126680:
    // 0x126680: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x126680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_126684:
    // 0x126684: 0xc044598  jal         func_111660
label_126688:
    if (ctx->pc == 0x126688u) {
        ctx->pc = 0x12668Cu;
        goto label_12668c;
    }
    ctx->pc = 0x126684u;
    SET_GPR_U32(ctx, 31, 0x12668Cu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x126684u, 0x12668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12668Cu;
label_12668c:
    // 0x12668c: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
label_126690:
    if (ctx->pc == 0x126690u) {
        ctx->pc = 0x126694u;
        goto label_126694;
    }
    ctx->pc = 0x12668Cu;
    {
        const bool branch_taken_0x12668c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12668c) {
            ctx->pc = 0x1267C8u;
            goto label_1267c8;
        }
    }
    ctx->pc = 0x126694u;
label_126694:
    // 0x126694: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x126694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_126698:
    // 0x126698: 0xc119b68  jal         func_466DA0
label_12669c:
    if (ctx->pc == 0x12669Cu) {
        ctx->pc = 0x1266A0u;
        goto label_1266a0;
    }
    ctx->pc = 0x126698u;
    SET_GPR_U32(ctx, 31, 0x1266A0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x126698u, 0x1266A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266A0u;
label_1266a0:
    // 0x1266a0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1266a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1266a4:
    // 0x1266a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1266a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1266a8:
    // 0x1266a8: 0xc0400e0  jal         func_100380
label_1266ac:
    if (ctx->pc == 0x1266ACu) {
        ctx->pc = 0x1266B0u;
        goto label_1266b0;
    }
    ctx->pc = 0x1266A8u;
    SET_GPR_U32(ctx, 31, 0x1266B0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1266A8u, 0x1266B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266B0u;
label_1266b0:
    // 0x1266b0: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1266b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1266b4:
    // 0x1266b4: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1266b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1266b8:
    // 0x1266b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1266bc:
    if (ctx->pc == 0x1266BCu) {
        ctx->pc = 0x1266C0u;
        goto label_1266c0;
    }
    ctx->pc = 0x1266B8u;
    {
        const bool branch_taken_0x1266b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1266b8) {
            ctx->pc = 0x1266D0u;
            goto label_1266d0;
        }
    }
    ctx->pc = 0x1266C0u;
label_1266c0:
    // 0x1266c0: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x1266c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1266c4:
    // 0x1266c4: 0xc119f38  jal         func_467CE0
label_1266c8:
    if (ctx->pc == 0x1266C8u) {
        ctx->pc = 0x1266CCu;
        goto label_1266cc;
    }
    ctx->pc = 0x1266C4u;
    SET_GPR_U32(ctx, 31, 0x1266CCu);
    ctx->pc = 0x467CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467CE0u, 0x1266C4u, 0x1266CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266CCu;
label_1266cc:
    // 0x1266cc: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x1266ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_1266d0:
    // 0x1266d0: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x1266d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_1266d4:
    // 0x1266d4: 0xaf82ba38  sw          $v0, -0x45C8($gp)
    ctx->pc = 0x1266d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949432), GPR_U32(ctx, 2));
label_1266d8:
    // 0x1266d8: 0x8f84ba38  lw          $a0, -0x45C8($gp)
    ctx->pc = 0x1266d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949432)));
label_1266dc:
    // 0x1266dc: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1266dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1266e0:
    // 0x1266e0: 0x8c452210  lw          $a1, 0x2210($v0)
    ctx->pc = 0x1266e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8720)));
label_1266e4:
    // 0x1266e4: 0xc119f5c  jal         func_467D70
label_1266e8:
    if (ctx->pc == 0x1266E8u) {
        ctx->pc = 0x1266ECu;
        goto label_1266ec;
    }
    ctx->pc = 0x1266E4u;
    SET_GPR_U32(ctx, 31, 0x1266ECu);
    ctx->pc = 0x467D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467D70u, 0x1266E4u, 0x1266ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1266ECu;
label_1266ec:
    // 0x1266ec: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1266ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1266f0:
    // 0x1266f0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1266f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1266f4:
    // 0x1266f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1266f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1266f8:
    // 0x1266f8: 0xa3a2012f  sb          $v0, 0x12F($sp)
    ctx->pc = 0x1266f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 303), (uint8_t)GPR_U32(ctx, 2));
label_1266fc:
    // 0x1266fc: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x1266fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_126700:
    // 0x126700: 0xc119b68  jal         func_466DA0
label_126704:
    if (ctx->pc == 0x126704u) {
        ctx->pc = 0x126708u;
        goto label_126708;
    }
    ctx->pc = 0x126700u;
    SET_GPR_U32(ctx, 31, 0x126708u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x126700u, 0x126708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126708u;
label_126708:
    // 0x126708: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x126708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_12670c:
    // 0x12670c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126710:
    // 0x126710: 0xc0400e0  jal         func_100380
label_126714:
    if (ctx->pc == 0x126714u) {
        ctx->pc = 0x126718u;
        goto label_126718;
    }
    ctx->pc = 0x126710u;
    SET_GPR_U32(ctx, 31, 0x126718u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x126710u, 0x126718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126718u;
label_126718:
    // 0x126718: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x126718u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12671c:
    // 0x12671c: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
label_126720:
    if (ctx->pc == 0x126720u) {
        ctx->pc = 0x126724u;
        goto label_126724;
    }
    ctx->pc = 0x12671Cu;
    {
        const bool branch_taken_0x12671c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x12671c) {
            ctx->pc = 0x126734u;
            goto label_126734;
        }
    }
    ctx->pc = 0x126724u;
label_126724:
    // 0x126724: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x126724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_126728:
    // 0x126728: 0xc049b30  jal         func_126CC0
label_12672c:
    if (ctx->pc == 0x12672Cu) {
        ctx->pc = 0x126730u;
        goto label_126730;
    }
    ctx->pc = 0x126728u;
    SET_GPR_U32(ctx, 31, 0x126730u);
    ctx->pc = 0x126CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CC0u, 0x126728u, 0x126730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126730u;
label_126730:
    // 0x126730: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x126730u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126734:
    // 0x126734: 0xaf9eba3c  sw          $fp, -0x45C4($gp)
    ctx->pc = 0x126734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949436), GPR_U32(ctx, 30));
label_126738:
    // 0x126738: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x126738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_12673c:
    // 0x12673c: 0xc119b68  jal         func_466DA0
label_126740:
    if (ctx->pc == 0x126740u) {
        ctx->pc = 0x126744u;
        goto label_126744;
    }
    ctx->pc = 0x12673Cu;
    SET_GPR_U32(ctx, 31, 0x126744u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x12673Cu, 0x126744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126744u;
label_126744:
    // 0x126744: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x126744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_126748:
    // 0x126748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12674c:
    // 0x12674c: 0xc0400e0  jal         func_100380
label_126750:
    if (ctx->pc == 0x126750u) {
        ctx->pc = 0x126754u;
        goto label_126754;
    }
    ctx->pc = 0x12674Cu;
    SET_GPR_U32(ctx, 31, 0x126754u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x12674Cu, 0x126754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126754u;
label_126754:
    // 0x126754: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x126754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126758:
    // 0x126758: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_12675c:
    if (ctx->pc == 0x12675Cu) {
        ctx->pc = 0x126760u;
        goto label_126760;
    }
    ctx->pc = 0x126758u;
    {
        const bool branch_taken_0x126758 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x126758) {
            ctx->pc = 0x126770u;
            goto label_126770;
        }
    }
    ctx->pc = 0x126760u;
label_126760:
    // 0x126760: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x126760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_126764:
    // 0x126764: 0xc08dd64  jal         func_237590
label_126768:
    if (ctx->pc == 0x126768u) {
        ctx->pc = 0x12676Cu;
        goto label_12676c;
    }
    ctx->pc = 0x126764u;
    SET_GPR_U32(ctx, 31, 0x12676Cu);
    ctx->pc = 0x237590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237590u, 0x126764u, 0x12676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12676Cu;
label_12676c:
    // 0x12676c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x12676cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126770:
    // 0x126770: 0xaf97ba40  sw          $s7, -0x45C0($gp)
    ctx->pc = 0x126770u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949440), GPR_U32(ctx, 23));
label_126774:
    // 0x126774: 0x8f84ba40  lw          $a0, -0x45C0($gp)
    ctx->pc = 0x126774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_126778:
    // 0x126778: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126778u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12677c:
    // 0x12677c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x12677cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_126780:
    // 0x126780: 0x320f809  jalr        $t9
label_126784:
    if (ctx->pc == 0x126784u) {
        ctx->pc = 0x126788u;
        goto label_126788;
    }
    ctx->pc = 0x126780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126788u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126780u, 0x126788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126788u;
label_126788:
    // 0x126788: 0x8f84ba3c  lw          $a0, -0x45C4($gp)
    ctx->pc = 0x126788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_12678c:
    // 0x12678c: 0xc08cf44  jal         func_233D10
label_126790:
    if (ctx->pc == 0x126790u) {
        ctx->pc = 0x126794u;
        goto label_126794;
    }
    ctx->pc = 0x12678Cu;
    SET_GPR_U32(ctx, 31, 0x126794u);
    ctx->pc = 0x233D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D10u, 0x12678Cu, 0x126794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126794u;
label_126794:
    // 0x126794: 0x8f84ba40  lw          $a0, -0x45C0($gp)
    ctx->pc = 0x126794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_126798:
    // 0x126798: 0xc08dde0  jal         func_237780
label_12679c:
    if (ctx->pc == 0x12679Cu) {
        ctx->pc = 0x1267A0u;
        goto label_1267a0;
    }
    ctx->pc = 0x126798u;
    SET_GPR_U32(ctx, 31, 0x1267A0u);
    ctx->pc = 0x237780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237780u, 0x126798u, 0x1267A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267A0u;
label_1267a0:
    // 0x1267a0: 0x8f84ba38  lw          $a0, -0x45C8($gp)
    ctx->pc = 0x1267a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949432)));
label_1267a4:
    // 0x1267a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1267a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1267a8:
    // 0x1267a8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1267a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1267ac:
    // 0x1267ac: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1267acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1267b0:
    // 0x1267b0: 0x320f809  jalr        $t9
label_1267b4:
    if (ctx->pc == 0x1267B4u) {
        ctx->pc = 0x1267B8u;
        goto label_1267b8;
    }
    ctx->pc = 0x1267B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1267B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1267B0u, 0x1267B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1267B8u;
label_1267b8:
    // 0x1267b8: 0x8f84ba3c  lw          $a0, -0x45C4($gp)
    ctx->pc = 0x1267b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_1267bc:
    // 0x1267bc: 0x8f85ba38  lw          $a1, -0x45C8($gp)
    ctx->pc = 0x1267bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949432)));
label_1267c0:
    // 0x1267c0: 0xc08cf64  jal         func_233D90
label_1267c4:
    if (ctx->pc == 0x1267C4u) {
        ctx->pc = 0x1267C8u;
        goto label_1267c8;
    }
    ctx->pc = 0x1267C0u;
    SET_GPR_U32(ctx, 31, 0x1267C8u);
    ctx->pc = 0x233D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233D90u, 0x1267C0u, 0x1267C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267C8u;
label_1267c8:
    // 0x1267c8: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x1267c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1267cc:
    // 0x1267cc: 0x93a5012d  lbu         $a1, 0x12D($sp)
    ctx->pc = 0x1267ccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 301)));
label_1267d0:
    // 0x1267d0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1267d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1267d4:
    // 0x1267d4: 0x27a700e8  addiu       $a3, $sp, 0xE8
    ctx->pc = 0x1267d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_1267d8:
    // 0x1267d8: 0xc04a824  jal         func_12A090
label_1267dc:
    if (ctx->pc == 0x1267DCu) {
        ctx->pc = 0x1267E0u;
        goto label_1267e0;
    }
    ctx->pc = 0x1267D8u;
    SET_GPR_U32(ctx, 31, 0x1267E0u);
    ctx->pc = 0x12A090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A090u, 0x1267D8u, 0x1267E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1267E0u;
label_1267e0:
    // 0x1267e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1267e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1267e4:
    // 0x1267e4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1267e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1267e8:
    // 0x1267e8: 0xac43b4b0  sw          $v1, -0x4B50($v0)
    ctx->pc = 0x1267e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948016), GPR_U32(ctx, 3));
label_1267ec:
    // 0x1267ec: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x1267ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1267f0:
    // 0x1267f0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1267f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_1267f4:
    // 0x1267f4: 0xac43b4b4  sw          $v1, -0x4B4C($v0)
    ctx->pc = 0x1267f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948020), GPR_U32(ctx, 3));
label_1267f8:
    // 0x1267f8: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x1267f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1267fc:
    // 0x1267fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1267fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_126800:
    // 0x126800: 0xac43b4b8  sw          $v1, -0x4B48($v0)
    ctx->pc = 0x126800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948024), GPR_U32(ctx, 3));
label_126804:
    // 0x126804: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x126804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_126808:
    // 0x126808: 0x2444003c  addiu       $a0, $v0, 0x3C
    ctx->pc = 0x126808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_12680c:
    // 0x12680c: 0xc049b20  jal         func_126C80
label_126810:
    if (ctx->pc == 0x126810u) {
        ctx->pc = 0x126814u;
        goto label_126814;
    }
    ctx->pc = 0x12680Cu;
    SET_GPR_U32(ctx, 31, 0x126814u);
    ctx->pc = 0x126C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C80u, 0x12680Cu, 0x126814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126814u;
label_126814:
    // 0x126814: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126818:
    // 0x126818: 0xac62b4e0  sw          $v0, -0x4B20($v1)
    ctx->pc = 0x126818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948064), GPR_U32(ctx, 2));
label_12681c:
    // 0x12681c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x12681cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_126820:
    // 0x126820: 0x2484b4e4  addiu       $a0, $a0, -0x4B1C
    ctx->pc = 0x126820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948068));
label_126824:
    // 0x126824: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x126824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_126828:
    // 0x126828: 0x24a52280  addiu       $a1, $a1, 0x2280
    ctx->pc = 0x126828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
label_12682c:
    // 0x12682c: 0xc0bc5c6  jal         func_2F1718
label_126830:
    if (ctx->pc == 0x126830u) {
        ctx->pc = 0x126834u;
        goto label_126834;
    }
    ctx->pc = 0x12682Cu;
    SET_GPR_U32(ctx, 31, 0x126834u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x12682Cu, 0x126834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126834u;
label_126834:
    // 0x126834: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x126834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_126838:
    // 0x126838: 0x2484b4b0  addiu       $a0, $a0, -0x4B50
    ctx->pc = 0x126838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948016));
label_12683c:
    // 0x12683c: 0xc1252b8  jal         func_494AE0
label_126840:
    if (ctx->pc == 0x126840u) {
        ctx->pc = 0x126844u;
        goto label_126844;
    }
    ctx->pc = 0x12683Cu;
    SET_GPR_U32(ctx, 31, 0x126844u);
    ctx->pc = 0x494AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494AE0u, 0x12683Cu, 0x126844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126844u;
label_126844:
    // 0x126844: 0xaf828b34  sw          $v0, -0x74CC($gp)
    ctx->pc = 0x126844u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
label_126848:
    // 0x126848: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_12684c:
    // 0x12684c: 0xaf82b9f0  sw          $v0, -0x4610($gp)
    ctx->pc = 0x12684cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 2));
label_126850:
    // 0x126850: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x126850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
label_126854:
    // 0x126854: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x126854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126858:
    // 0x126858: 0xc0439c4  jal         func_10E710
label_12685c:
    if (ctx->pc == 0x12685Cu) {
        ctx->pc = 0x126860u;
        goto label_126860;
    }
    ctx->pc = 0x126858u;
    SET_GPR_U32(ctx, 31, 0x126860u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x126858u, 0x126860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126860u;
label_126860:
    // 0x126860: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_126864:
    if (ctx->pc == 0x126864u) {
        ctx->pc = 0x126868u;
        goto label_126868;
    }
    ctx->pc = 0x126860u;
    {
        const bool branch_taken_0x126860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126860) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126868u;
label_126868:
    // 0x126868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x126868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12686c:
    // 0x12686c: 0xc125260  jal         func_494980
label_126870:
    if (ctx->pc == 0x126870u) {
        ctx->pc = 0x126874u;
        goto label_126874;
    }
    ctx->pc = 0x12686Cu;
    SET_GPR_U32(ctx, 31, 0x126874u);
    ctx->pc = 0x494980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x494980u, 0x12686Cu, 0x126874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126874u;
label_126874:
    // 0x126874: 0xaf828b34  sw          $v0, -0x74CC($gp)
    ctx->pc = 0x126874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937396), GPR_U32(ctx, 2));
label_126878:
    // 0x126878: 0x8f848b34  lw          $a0, -0x74CC($gp)
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
label_12687c:
    // 0x12687c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12687cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126880:
    // 0x126880: 0x108300dd  beq         $a0, $v1, . + 4 + (0xDD << 2)
label_126884:
    if (ctx->pc == 0x126884u) {
        ctx->pc = 0x126888u;
        goto label_126888;
    }
    ctx->pc = 0x126880u;
    {
        const bool branch_taken_0x126880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126880) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126888u;
label_126888:
    // 0x126888: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12688c:
    // 0x12688c: 0xaf83b9f0  sw          $v1, -0x4610($gp)
    ctx->pc = 0x12688cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949360), GPR_U32(ctx, 3));
label_126890:
    // 0x126890: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_126894:
    if (ctx->pc == 0x126894u) {
        ctx->pc = 0x126898u;
        goto label_126898;
    }
    ctx->pc = 0x126890u;
    {
        const bool branch_taken_0x126890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126890) {
            ctx->pc = 0x126BF8u;
            goto label_126bf8;
        }
    }
    ctx->pc = 0x126898u;
label_126898:
    // 0x126898: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_12689c:
    // 0x12689c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x12689cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1268a0:
    // 0x1268a0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1268a4:
    if (ctx->pc == 0x1268A4u) {
        ctx->pc = 0x1268A8u;
        goto label_1268a8;
    }
    ctx->pc = 0x1268A0u;
    {
        const bool branch_taken_0x1268a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268a0) {
            ctx->pc = 0x1268C8u;
            goto label_1268c8;
        }
    }
    ctx->pc = 0x1268A8u;
label_1268a8:
    // 0x1268a8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1268a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1268ac:
    // 0x1268ac: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1268acu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1268b0:
    // 0x1268b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1268b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1268b4:
    // 0x1268b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1268b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1268b8:
    // 0x1268b8: 0x0  nop
    ctx->pc = 0x1268b8u;
    // NOP
label_1268bc:
    // 0x1268bc: 0x0  nop
    ctx->pc = 0x1268bcu;
    // NOP
label_1268c0:
    // 0x1268c0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1268c4:
    if (ctx->pc == 0x1268C4u) {
        ctx->pc = 0x1268C8u;
        goto label_1268c8;
    }
    ctx->pc = 0x1268C0u;
    {
        const bool branch_taken_0x1268c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1268c0) {
            ctx->pc = 0x1268ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1268ac;
        }
    }
    ctx->pc = 0x1268C8u;
label_1268c8:
    // 0x1268c8: 0x8f82b9f4  lw          $v0, -0x460C($gp)
    ctx->pc = 0x1268c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949364)));
label_1268cc:
    // 0x1268cc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1268ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1268d0:
    // 0x1268d0: 0x8f82ba2c  lw          $v0, -0x45D4($gp)
    ctx->pc = 0x1268d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949420)));
label_1268d4:
    // 0x1268d4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x1268d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_1268d8:
    // 0x1268d8: 0x8f82ba30  lw          $v0, -0x45D0($gp)
    ctx->pc = 0x1268d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949424)));
label_1268dc:
    // 0x1268dc: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x1268dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
label_1268e0:
    // 0x1268e0: 0x8f84ba34  lw          $a0, -0x45CC($gp)
    ctx->pc = 0x1268e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949428)));
label_1268e4:
    // 0x1268e4: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x1268e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
label_1268e8:
    // 0x1268e8: 0x8f85ba38  lw          $a1, -0x45C8($gp)
    ctx->pc = 0x1268e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949432)));
label_1268ec:
    // 0x1268ec: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x1268ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_1268f0:
    // 0x1268f0: 0xafa500f8  sw          $a1, 0xF8($sp)
    ctx->pc = 0x1268f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
label_1268f4:
    // 0x1268f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1268f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1268f8:
    // 0x1268f8: 0x10000022  b           . + 4 + (0x22 << 2)
label_1268fc:
    if (ctx->pc == 0x1268FCu) {
        ctx->pc = 0x126900u;
        goto label_126900;
    }
    ctx->pc = 0x1268F8u;
    {
        const bool branch_taken_0x1268f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268f8) {
            ctx->pc = 0x126984u;
            goto label_126984;
        }
    }
    ctx->pc = 0x126900u;
label_126900:
    // 0x126900: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x126900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_126904:
    // 0x126904: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x126904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_126908:
    // 0x126908: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x126908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_12690c:
    // 0x12690c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_126910:
    if (ctx->pc == 0x126910u) {
        ctx->pc = 0x126914u;
        goto label_126914;
    }
    ctx->pc = 0x12690Cu;
    {
        const bool branch_taken_0x12690c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12690c) {
            ctx->pc = 0x126980u;
            goto label_126980;
        }
    }
    ctx->pc = 0x126914u;
label_126914:
    // 0x126914: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x126914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_126918:
    // 0x126918: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x126918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_12691c:
    // 0x12691c: 0x8c7000a0  lw          $s0, 0xA0($v1)
    ctx->pc = 0x12691cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_126920:
    // 0x126920: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126924:
    // 0x126924: 0xc119f88  jal         func_467E20
label_126928:
    if (ctx->pc == 0x126928u) {
        ctx->pc = 0x12692Cu;
        goto label_12692c;
    }
    ctx->pc = 0x126924u;
    SET_GPR_U32(ctx, 31, 0x12692Cu);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x126924u, 0x12692Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12692Cu;
label_12692c:
    // 0x12692c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_126930:
    // 0x126930: 0x9d2821  addu        $a1, $a0, $sp
    ctx->pc = 0x126930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_126934:
    // 0x126934: 0x8ca200a0  lw          $v0, 0xA0($a1)
    ctx->pc = 0x126934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
label_126938:
    // 0x126938: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_12693c:
    if (ctx->pc == 0x12693Cu) {
        ctx->pc = 0x126940u;
        goto label_126940;
    }
    ctx->pc = 0x126938u;
    {
        const bool branch_taken_0x126938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x126938) {
            ctx->pc = 0x126980u;
            goto label_126980;
        }
    }
    ctx->pc = 0x126940u;
label_126940:
    // 0x126940: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_126944:
    // 0x126944: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_126948:
    // 0x126948: 0x8c6400a0  lw          $a0, 0xA0($v1)
    ctx->pc = 0x126948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
label_12694c:
    // 0x12694c: 0xc049384  jal         func_124E10
label_126950:
    if (ctx->pc == 0x126950u) {
        ctx->pc = 0x126954u;
        goto label_126954;
    }
    ctx->pc = 0x12694Cu;
    SET_GPR_U32(ctx, 31, 0x126954u);
    ctx->pc = 0x124E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E10u, 0x12694Cu, 0x126954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126954u;
label_126954:
    // 0x126954: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126954u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126958:
    // 0x126958: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x126958u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_12695c:
    // 0x12695c: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x12695cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_126960:
    // 0x126960: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x126960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
label_126964:
    // 0x126964: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126968:
    // 0x126968: 0xc119c5c  jal         func_467170
label_12696c:
    if (ctx->pc == 0x12696Cu) {
        ctx->pc = 0x126970u;
        goto label_126970;
    }
    ctx->pc = 0x126968u;
    SET_GPR_U32(ctx, 31, 0x126970u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x126968u, 0x126970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126970u;
label_126970:
    // 0x126970: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126970u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126974:
    // 0x126974: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x126974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_126978:
    // 0x126978: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x126978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_12697c:
    // 0x12697c: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x12697cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
label_126980:
    // 0x126980: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_126984:
    // 0x126984: 0x2e230005  sltiu       $v1, $s1, 0x5
    ctx->pc = 0x126984u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_126988:
    // 0x126988: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_12698c:
    if (ctx->pc == 0x12698Cu) {
        ctx->pc = 0x126990u;
        goto label_126990;
    }
    ctx->pc = 0x126988u;
    {
        const bool branch_taken_0x126988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126988) {
            ctx->pc = 0x126900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126900;
        }
    }
    ctx->pc = 0x126990u;
label_126990:
    // 0x126990: 0x8f83ba3c  lw          $v1, -0x45C4($gp)
    ctx->pc = 0x126990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_126994:
    // 0x126994: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_126998:
    if (ctx->pc == 0x126998u) {
        ctx->pc = 0x12699Cu;
        goto label_12699c;
    }
    ctx->pc = 0x126994u;
    {
        const bool branch_taken_0x126994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x126994) {
            ctx->pc = 0x1269CCu;
            goto label_1269cc;
        }
    }
    ctx->pc = 0x12699Cu;
label_12699c:
    // 0x12699c: 0x8f90ba3c  lw          $s0, -0x45C4($gp)
    ctx->pc = 0x12699cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_1269a0:
    // 0x1269a0: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1269a4:
    if (ctx->pc == 0x1269A4u) {
        ctx->pc = 0x1269A8u;
        goto label_1269a8;
    }
    ctx->pc = 0x1269A0u;
    {
        const bool branch_taken_0x1269a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269a0) {
            ctx->pc = 0x1269CCu;
            goto label_1269cc;
        }
    }
    ctx->pc = 0x1269A8u;
label_1269a8:
    // 0x1269a8: 0x8f84ba3c  lw          $a0, -0x45C4($gp)
    ctx->pc = 0x1269a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_1269ac:
    // 0x1269ac: 0xc049b18  jal         func_126C60
label_1269b0:
    if (ctx->pc == 0x1269B0u) {
        ctx->pc = 0x1269B4u;
        goto label_1269b4;
    }
    ctx->pc = 0x1269ACu;
    SET_GPR_U32(ctx, 31, 0x1269B4u);
    ctx->pc = 0x126C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C60u, 0x1269ACu, 0x1269B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269B4u;
label_1269b4:
    // 0x1269b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1269b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1269b8:
    // 0x1269b8: 0x8f85ba3c  lw          $a1, -0x45C4($gp)
    ctx->pc = 0x1269b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949436)));
label_1269bc:
    // 0x1269bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1269bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1269c0:
    // 0x1269c0: 0xc119c5c  jal         func_467170
label_1269c4:
    if (ctx->pc == 0x1269C4u) {
        ctx->pc = 0x1269C8u;
        goto label_1269c8;
    }
    ctx->pc = 0x1269C0u;
    SET_GPR_U32(ctx, 31, 0x1269C8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1269C0u, 0x1269C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269C8u;
label_1269c8:
    // 0x1269c8: 0xaf80ba3c  sw          $zero, -0x45C4($gp)
    ctx->pc = 0x1269c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949436), GPR_U32(ctx, 0));
label_1269cc:
    // 0x1269cc: 0x8f82ba40  lw          $v0, -0x45C0($gp)
    ctx->pc = 0x1269ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_1269d0:
    // 0x1269d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1269d4:
    if (ctx->pc == 0x1269D4u) {
        ctx->pc = 0x1269D8u;
        goto label_1269d8;
    }
    ctx->pc = 0x1269D0u;
    {
        const bool branch_taken_0x1269d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269d0) {
            ctx->pc = 0x126A24u;
            goto label_126a24;
        }
    }
    ctx->pc = 0x1269D8u;
label_1269d8:
    // 0x1269d8: 0x8f84ba40  lw          $a0, -0x45C0($gp)
    ctx->pc = 0x1269d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_1269dc:
    // 0x1269dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1269e0:
    // 0x1269e0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1269e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1269e4:
    // 0x1269e4: 0x320f809  jalr        $t9
label_1269e8:
    if (ctx->pc == 0x1269E8u) {
        ctx->pc = 0x1269ECu;
        goto label_1269ec;
    }
    ctx->pc = 0x1269E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1269ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1269E4u, 0x1269ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1269ECu;
label_1269ec:
    // 0x1269ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1269ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1269f0:
    // 0x1269f0: 0x8f90ba40  lw          $s0, -0x45C0($gp)
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_1269f4:
    // 0x1269f4: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_1269f8:
    if (ctx->pc == 0x1269F8u) {
        ctx->pc = 0x1269FCu;
        goto label_1269fc;
    }
    ctx->pc = 0x1269F4u;
    {
        const bool branch_taken_0x1269f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1269f4) {
            ctx->pc = 0x126A24u;
            goto label_126a24;
        }
    }
    ctx->pc = 0x1269FCu;
label_1269fc:
    // 0x1269fc: 0x8f82ba40  lw          $v0, -0x45C0($gp)
    ctx->pc = 0x1269fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_126a00:
    // 0x126a00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a04:
    // 0x126a04: 0xc049b0c  jal         func_126C30
label_126a08:
    if (ctx->pc == 0x126A08u) {
        ctx->pc = 0x126A0Cu;
        goto label_126a0c;
    }
    ctx->pc = 0x126A04u;
    SET_GPR_U32(ctx, 31, 0x126A0Cu);
    ctx->pc = 0x126C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126C30u, 0x126A04u, 0x126A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A0Cu;
label_126a0c:
    // 0x126a0c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a10:
    // 0x126a10: 0x8f84ba40  lw          $a0, -0x45C0($gp)
    ctx->pc = 0x126a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949440)));
label_126a14:
    // 0x126a14: 0xc119c5c  jal         func_467170
label_126a18:
    if (ctx->pc == 0x126A18u) {
        ctx->pc = 0x126A1Cu;
        goto label_126a1c;
    }
    ctx->pc = 0x126A14u;
    SET_GPR_U32(ctx, 31, 0x126A1Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x126A14u, 0x126A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A1Cu;
label_126a1c:
    // 0x126a1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x126a1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a20:
    // 0x126a20: 0xaf80ba40  sw          $zero, -0x45C0($gp)
    ctx->pc = 0x126a20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949440), GPR_U32(ctx, 0));
label_126a24:
    // 0x126a24: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126a28:
    // 0x126a28: 0xc088560  jal         func_221580
label_126a2c:
    if (ctx->pc == 0x126A2Cu) {
        ctx->pc = 0x126A30u;
        goto label_126a30;
    }
    ctx->pc = 0x126A28u;
    SET_GPR_U32(ctx, 31, 0x126A30u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x126A28u, 0x126A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A30u;
label_126a30:
    // 0x126a30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126a30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a34:
    // 0x126a34: 0x8f858b34  lw          $a1, -0x74CC($gp)
    ctx->pc = 0x126a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937396)));
label_126a38:
    // 0x126a38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x126a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126a3c:
    // 0x126a3c: 0x10a3005b  beq         $a1, $v1, . + 4 + (0x5B << 2)
label_126a40:
    if (ctx->pc == 0x126A40u) {
        ctx->pc = 0x126A44u;
        goto label_126a44;
    }
    ctx->pc = 0x126A3Cu;
    {
        const bool branch_taken_0x126a3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x126a3c) {
            ctx->pc = 0x126BACu;
            goto label_126bac;
        }
    }
    ctx->pc = 0x126A44u;
label_126a44:
    // 0x126a44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x126a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_126a48:
    // 0x126a48: 0x10a2003f  beq         $a1, $v0, . + 4 + (0x3F << 2)
label_126a4c:
    if (ctx->pc == 0x126A4Cu) {
        ctx->pc = 0x126A50u;
        goto label_126a50;
    }
    ctx->pc = 0x126A48u;
    {
        const bool branch_taken_0x126a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x126a48) {
            ctx->pc = 0x126B48u;
            goto label_126b48;
        }
    }
    ctx->pc = 0x126A50u;
label_126a50:
    // 0x126a50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x126a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126a54:
    // 0x126a54: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
label_126a58:
    if (ctx->pc == 0x126A58u) {
        ctx->pc = 0x126A5Cu;
        goto label_126a5c;
    }
    ctx->pc = 0x126A54u;
    {
        const bool branch_taken_0x126a54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x126a54) {
            ctx->pc = 0x126A64u;
            goto label_126a64;
        }
    }
    ctx->pc = 0x126A5Cu;
label_126a5c:
    // 0x126a5c: 0x10000062  b           . + 4 + (0x62 << 2)
label_126a60:
    if (ctx->pc == 0x126A60u) {
        ctx->pc = 0x126A64u;
        goto label_126a64;
    }
    ctx->pc = 0x126A5Cu;
    {
        const bool branch_taken_0x126a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126a5c) {
            ctx->pc = 0x126BE8u;
            goto label_126be8;
        }
    }
    ctx->pc = 0x126A64u;
label_126a64:
    // 0x126a64: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x126a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126a68:
    // 0x126a68: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x126a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_126a6c:
    // 0x126a6c: 0x2402054c  addiu       $v0, $zero, 0x54C
    ctx->pc = 0x126a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_126a70:
    // 0x126a70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a74:
    // 0x126a74: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x126a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_126a78:
    // 0x126a78: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a7c:
    // 0x126a7c: 0xc040924  jal         func_102490
label_126a80:
    if (ctx->pc == 0x126A80u) {
        ctx->pc = 0x126A84u;
        goto label_126a84;
    }
    ctx->pc = 0x126A7Cu;
    SET_GPR_U32(ctx, 31, 0x126A84u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126A7Cu, 0x126A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126A84u;
label_126a84:
    // 0x126a84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a88:
    // 0x126a88: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x126a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_126a8c:
    // 0x126a8c: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x126a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_126a90:
    // 0x126a90: 0x24020563  addiu       $v0, $zero, 0x563
    ctx->pc = 0x126a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_126a94:
    // 0x126a94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126a94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126a98:
    // 0x126a98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126a98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126a9c:
    // 0x126a9c: 0xc040ab0  jal         func_102AC0
label_126aa0:
    if (ctx->pc == 0x126AA0u) {
        ctx->pc = 0x126AA4u;
        goto label_126aa4;
    }
    ctx->pc = 0x126A9Cu;
    SET_GPR_U32(ctx, 31, 0x126AA4u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x126A9Cu, 0x126AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AA4u;
label_126aa4:
    // 0x126aa4: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126aa8:
    // 0x126aa8: 0x24050563  addiu       $a1, $zero, 0x563
    ctx->pc = 0x126aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1379));
label_126aac:
    // 0x126aac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126aacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ab0:
    // 0x126ab0: 0xc040924  jal         func_102490
label_126ab4:
    if (ctx->pc == 0x126AB4u) {
        ctx->pc = 0x126AB8u;
        goto label_126ab8;
    }
    ctx->pc = 0x126AB0u;
    SET_GPR_U32(ctx, 31, 0x126AB8u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126AB0u, 0x126AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AB8u;
label_126ab8:
    // 0x126ab8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x126ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_126abc:
    // 0x126abc: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x126abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_126ac0:
    // 0x126ac0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ac4:
    // 0x126ac4: 0x24020564  addiu       $v0, $zero, 0x564
    ctx->pc = 0x126ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
label_126ac8:
    // 0x126ac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126acc:
    // 0x126acc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x126accu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126ad0:
    // 0x126ad0: 0xc040ab0  jal         func_102AC0
label_126ad4:
    if (ctx->pc == 0x126AD4u) {
        ctx->pc = 0x126AD8u;
        goto label_126ad8;
    }
    ctx->pc = 0x126AD0u;
    SET_GPR_U32(ctx, 31, 0x126AD8u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x126AD0u, 0x126AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AD8u;
label_126ad8:
    // 0x126ad8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126adc:
    // 0x126adc: 0x24050564  addiu       $a1, $zero, 0x564
    ctx->pc = 0x126adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1380));
label_126ae0:
    // 0x126ae0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ae4:
    // 0x126ae4: 0xc040924  jal         func_102490
label_126ae8:
    if (ctx->pc == 0x126AE8u) {
        ctx->pc = 0x126AECu;
        goto label_126aec;
    }
    ctx->pc = 0x126AE4u;
    SET_GPR_U32(ctx, 31, 0x126AECu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126AE4u, 0x126AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126AECu;
label_126aec:
    // 0x126aec: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x126aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126af0:
    // 0x126af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126af4:
    // 0x126af4: 0x24020568  addiu       $v0, $zero, 0x568
    ctx->pc = 0x126af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1384));
label_126af8:
    // 0x126af8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126afc:
    // 0x126afc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x126afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_126b00:
    // 0x126b00: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b04:
    // 0x126b04: 0xc040924  jal         func_102490
label_126b08:
    if (ctx->pc == 0x126B08u) {
        ctx->pc = 0x126B0Cu;
        goto label_126b0c;
    }
    ctx->pc = 0x126B04u;
    SET_GPR_U32(ctx, 31, 0x126B0Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126B04u, 0x126B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B0Cu;
label_126b0c:
    // 0x126b0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b10:
    // 0x126b10: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x126b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b14:
    // 0x126b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b18:
    // 0x126b18: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x126b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_126b1c:
    // 0x126b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126b20:
    // 0x126b20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b24:
    // 0x126b24: 0xc041b54  jal         func_106D50
label_126b28:
    if (ctx->pc == 0x126B28u) {
        ctx->pc = 0x126B2Cu;
        goto label_126b2c;
    }
    ctx->pc = 0x126B24u;
    SET_GPR_U32(ctx, 31, 0x126B2Cu);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x126B24u, 0x126B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B2Cu;
label_126b2c:
    // 0x126b2c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x126b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_126b30:
    // 0x126b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b34:
    // 0x126b34: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x126b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b38:
    // 0x126b38: 0xc08ef28  jal         func_23BCA0
label_126b3c:
    if (ctx->pc == 0x126B3Cu) {
        ctx->pc = 0x126B40u;
        goto label_126b40;
    }
    ctx->pc = 0x126B38u;
    SET_GPR_U32(ctx, 31, 0x126B40u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x126B38u, 0x126B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B40u;
label_126b40:
    // 0x126b40: 0x10000029  b           . + 4 + (0x29 << 2)
label_126b44:
    if (ctx->pc == 0x126B44u) {
        ctx->pc = 0x126B48u;
        goto label_126b48;
    }
    ctx->pc = 0x126B40u;
    {
        const bool branch_taken_0x126b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126b40) {
            ctx->pc = 0x126BE8u;
            goto label_126be8;
        }
    }
    ctx->pc = 0x126B48u;
label_126b48:
    // 0x126b48: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x126b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b4c:
    // 0x126b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b50:
    // 0x126b50: 0x2402054c  addiu       $v0, $zero, 0x54C
    ctx->pc = 0x126b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_126b54:
    // 0x126b54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b58:
    // 0x126b58: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x126b58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_126b5c:
    // 0x126b5c: 0xc040924  jal         func_102490
label_126b60:
    if (ctx->pc == 0x126B60u) {
        ctx->pc = 0x126B64u;
        goto label_126b64;
    }
    ctx->pc = 0x126B5Cu;
    SET_GPR_U32(ctx, 31, 0x126B64u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126B5Cu, 0x126B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B64u;
label_126b64:
    // 0x126b64: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b68:
    // 0x126b68: 0x24020567  addiu       $v0, $zero, 0x567
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1383));
label_126b6c:
    // 0x126b6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x126b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b70:
    // 0x126b70: 0x8f86b9f8  lw          $a2, -0x4608($gp)
    ctx->pc = 0x126b70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949368)));
label_126b74:
    // 0x126b74: 0xc040924  jal         func_102490
label_126b78:
    if (ctx->pc == 0x126B78u) {
        ctx->pc = 0x126B7Cu;
        goto label_126b7c;
    }
    ctx->pc = 0x126B74u;
    SET_GPR_U32(ctx, 31, 0x126B7Cu);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x126B74u, 0x126B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B7Cu;
label_126b7c:
    // 0x126b7c: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b80:
    // 0x126b80: 0x24050554  addiu       $a1, $zero, 0x554
    ctx->pc = 0x126b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1364));
label_126b84:
    // 0x126b84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126b88:
    // 0x126b88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x126b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126b8c:
    // 0x126b8c: 0xc041b54  jal         func_106D50
label_126b90:
    if (ctx->pc == 0x126B90u) {
        ctx->pc = 0x126B94u;
        goto label_126b94;
    }
    ctx->pc = 0x126B8Cu;
    SET_GPR_U32(ctx, 31, 0x126B94u);
    ctx->pc = 0x106D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D50u, 0x126B8Cu, 0x126B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126B94u;
label_126b94:
    // 0x126b94: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_126b98:
    // 0x126b98: 0x27a500d8  addiu       $a1, $sp, 0xD8
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126b9c:
    // 0x126b9c: 0xc08ef28  jal         func_23BCA0
label_126ba0:
    if (ctx->pc == 0x126BA0u) {
        ctx->pc = 0x126BA4u;
        goto label_126ba4;
    }
    ctx->pc = 0x126B9Cu;
    SET_GPR_U32(ctx, 31, 0x126BA4u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x126B9Cu, 0x126BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BA4u;
label_126ba4:
    // 0x126ba4: 0x10000010  b           . + 4 + (0x10 << 2)
label_126ba8:
    if (ctx->pc == 0x126BA8u) {
        ctx->pc = 0x126BACu;
        goto label_126bac;
    }
    ctx->pc = 0x126BA4u;
    {
        const bool branch_taken_0x126ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ba4) {
            ctx->pc = 0x126BE8u;
            goto label_126be8;
        }
    }
    ctx->pc = 0x126BACu;
label_126bac:
    // 0x126bac: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x126bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_126bb0:
    // 0x126bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x126bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126bb4:
    // 0x126bb4: 0xc0553d4  jal         func_154F50
label_126bb8:
    if (ctx->pc == 0x126BB8u) {
        ctx->pc = 0x126BBCu;
        goto label_126bbc;
    }
    ctx->pc = 0x126BB4u;
    SET_GPR_U32(ctx, 31, 0x126BBCu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x126BB4u, 0x126BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BBCu;
label_126bbc:
    // 0x126bbc: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x126bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_126bc0:
    // 0x126bc0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x126bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_126bc4:
    // 0x126bc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126bc8:
    // 0x126bc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126bcc:
    // 0x126bcc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x126bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_126bd0:
    // 0x126bd0: 0x320f809  jalr        $t9
label_126bd4:
    if (ctx->pc == 0x126BD4u) {
        ctx->pc = 0x126BD8u;
        goto label_126bd8;
    }
    ctx->pc = 0x126BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126BD8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BD0u, 0x126BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126BD8u;
label_126bd8:
    // 0x126bd8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_126bdc:
    // 0x126bdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x126bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126be0:
    // 0x126be0: 0xc08ef28  jal         func_23BCA0
label_126be4:
    if (ctx->pc == 0x126BE4u) {
        ctx->pc = 0x126BE8u;
        goto label_126be8;
    }
    ctx->pc = 0x126BE0u;
    SET_GPR_U32(ctx, 31, 0x126BE8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x126BE0u, 0x126BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BE8u;
label_126be8:
    // 0x126be8: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x126be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_126bec:
    // 0x126bec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x126becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126bf0:
    // 0x126bf0: 0xc0887b4  jal         func_221ED0
label_126bf4:
    if (ctx->pc == 0x126BF4u) {
        ctx->pc = 0x126BF8u;
        goto label_126bf8;
    }
    ctx->pc = 0x126BF0u;
    SET_GPR_U32(ctx, 31, 0x126BF8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x126BF0u, 0x126BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126BF8u;
label_126bf8:
    // 0x126bf8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x126bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_126bfc:
    // 0x126bfc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x126bfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_126c00:
    // 0x126c00: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x126c00u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_126c04:
    // 0x126c04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x126c04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_126c08:
    // 0x126c08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x126c08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_126c0c:
    // 0x126c0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x126c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_126c10:
    // 0x126c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x126c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126c14:
    // 0x126c14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126c14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126c18:
    // 0x126c18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126c18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126c1c:
    // 0x126c1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x126c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_126c20:
    // 0x126c20: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x126c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_126c24:
    // 0x126c24: 0x3e00008  jr          $ra
label_126c28:
    if (ctx->pc == 0x126C28u) {
        ctx->pc = 0x126C2Cu;
        goto label_126c2c;
    }
    ctx->pc = 0x126C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C2Cu;
label_126c2c:
    // 0x126c2c: 0x0  nop
    ctx->pc = 0x126c2cu;
    // NOP
    ctx->pc = 0x126c30u;
}
