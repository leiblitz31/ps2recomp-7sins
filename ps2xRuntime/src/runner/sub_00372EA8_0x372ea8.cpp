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

// Function: sub_00372EA8
// Address: 0x372ea8 - 0x373ad8
void sub_00372EA8_0x372ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372EA8_0x372ea8");
#endif

    switch (ctx->pc) {
        case 0x372ea8u: goto label_372ea8;
        case 0x372eacu: goto label_372eac;
        case 0x372eb0u: goto label_372eb0;
        case 0x372eb4u: goto label_372eb4;
        case 0x372eb8u: goto label_372eb8;
        case 0x372ebcu: goto label_372ebc;
        case 0x372ec0u: goto label_372ec0;
        case 0x372ec4u: goto label_372ec4;
        case 0x372ec8u: goto label_372ec8;
        case 0x372eccu: goto label_372ecc;
        case 0x372ed0u: goto label_372ed0;
        case 0x372ed4u: goto label_372ed4;
        case 0x372ed8u: goto label_372ed8;
        case 0x372edcu: goto label_372edc;
        case 0x372ee0u: goto label_372ee0;
        case 0x372ee4u: goto label_372ee4;
        case 0x372ee8u: goto label_372ee8;
        case 0x372eecu: goto label_372eec;
        case 0x372ef0u: goto label_372ef0;
        case 0x372ef4u: goto label_372ef4;
        case 0x372ef8u: goto label_372ef8;
        case 0x372efcu: goto label_372efc;
        case 0x372f00u: goto label_372f00;
        case 0x372f04u: goto label_372f04;
        case 0x372f08u: goto label_372f08;
        case 0x372f0cu: goto label_372f0c;
        case 0x372f10u: goto label_372f10;
        case 0x372f14u: goto label_372f14;
        case 0x372f18u: goto label_372f18;
        case 0x372f1cu: goto label_372f1c;
        case 0x372f20u: goto label_372f20;
        case 0x372f24u: goto label_372f24;
        case 0x372f28u: goto label_372f28;
        case 0x372f2cu: goto label_372f2c;
        case 0x372f30u: goto label_372f30;
        case 0x372f34u: goto label_372f34;
        case 0x372f38u: goto label_372f38;
        case 0x372f3cu: goto label_372f3c;
        case 0x372f40u: goto label_372f40;
        case 0x372f44u: goto label_372f44;
        case 0x372f48u: goto label_372f48;
        case 0x372f4cu: goto label_372f4c;
        case 0x372f50u: goto label_372f50;
        case 0x372f54u: goto label_372f54;
        case 0x372f58u: goto label_372f58;
        case 0x372f5cu: goto label_372f5c;
        case 0x372f60u: goto label_372f60;
        case 0x372f64u: goto label_372f64;
        case 0x372f68u: goto label_372f68;
        case 0x372f6cu: goto label_372f6c;
        case 0x372f70u: goto label_372f70;
        case 0x372f74u: goto label_372f74;
        case 0x372f78u: goto label_372f78;
        case 0x372f7cu: goto label_372f7c;
        case 0x372f80u: goto label_372f80;
        case 0x372f84u: goto label_372f84;
        case 0x372f88u: goto label_372f88;
        case 0x372f8cu: goto label_372f8c;
        case 0x372f90u: goto label_372f90;
        case 0x372f94u: goto label_372f94;
        case 0x372f98u: goto label_372f98;
        case 0x372f9cu: goto label_372f9c;
        case 0x372fa0u: goto label_372fa0;
        case 0x372fa4u: goto label_372fa4;
        case 0x372fa8u: goto label_372fa8;
        case 0x372facu: goto label_372fac;
        case 0x372fb0u: goto label_372fb0;
        case 0x372fb4u: goto label_372fb4;
        case 0x372fb8u: goto label_372fb8;
        case 0x372fbcu: goto label_372fbc;
        case 0x372fc0u: goto label_372fc0;
        case 0x372fc4u: goto label_372fc4;
        case 0x372fc8u: goto label_372fc8;
        case 0x372fccu: goto label_372fcc;
        case 0x372fd0u: goto label_372fd0;
        case 0x372fd4u: goto label_372fd4;
        case 0x372fd8u: goto label_372fd8;
        case 0x372fdcu: goto label_372fdc;
        case 0x372fe0u: goto label_372fe0;
        case 0x372fe4u: goto label_372fe4;
        case 0x372fe8u: goto label_372fe8;
        case 0x372fecu: goto label_372fec;
        case 0x372ff0u: goto label_372ff0;
        case 0x372ff4u: goto label_372ff4;
        case 0x372ff8u: goto label_372ff8;
        case 0x372ffcu: goto label_372ffc;
        case 0x373000u: goto label_373000;
        case 0x373004u: goto label_373004;
        case 0x373008u: goto label_373008;
        case 0x37300cu: goto label_37300c;
        case 0x373010u: goto label_373010;
        case 0x373014u: goto label_373014;
        case 0x373018u: goto label_373018;
        case 0x37301cu: goto label_37301c;
        case 0x373020u: goto label_373020;
        case 0x373024u: goto label_373024;
        case 0x373028u: goto label_373028;
        case 0x37302cu: goto label_37302c;
        case 0x373030u: goto label_373030;
        case 0x373034u: goto label_373034;
        case 0x373038u: goto label_373038;
        case 0x37303cu: goto label_37303c;
        case 0x373040u: goto label_373040;
        case 0x373044u: goto label_373044;
        case 0x373048u: goto label_373048;
        case 0x37304cu: goto label_37304c;
        case 0x373050u: goto label_373050;
        case 0x373054u: goto label_373054;
        case 0x373058u: goto label_373058;
        case 0x37305cu: goto label_37305c;
        case 0x373060u: goto label_373060;
        case 0x373064u: goto label_373064;
        case 0x373068u: goto label_373068;
        case 0x37306cu: goto label_37306c;
        case 0x373070u: goto label_373070;
        case 0x373074u: goto label_373074;
        case 0x373078u: goto label_373078;
        case 0x37307cu: goto label_37307c;
        case 0x373080u: goto label_373080;
        case 0x373084u: goto label_373084;
        case 0x373088u: goto label_373088;
        case 0x37308cu: goto label_37308c;
        case 0x373090u: goto label_373090;
        case 0x373094u: goto label_373094;
        case 0x373098u: goto label_373098;
        case 0x37309cu: goto label_37309c;
        case 0x3730a0u: goto label_3730a0;
        case 0x3730a4u: goto label_3730a4;
        case 0x3730a8u: goto label_3730a8;
        case 0x3730acu: goto label_3730ac;
        case 0x3730b0u: goto label_3730b0;
        case 0x3730b4u: goto label_3730b4;
        case 0x3730b8u: goto label_3730b8;
        case 0x3730bcu: goto label_3730bc;
        case 0x3730c0u: goto label_3730c0;
        case 0x3730c4u: goto label_3730c4;
        case 0x3730c8u: goto label_3730c8;
        case 0x3730ccu: goto label_3730cc;
        case 0x3730d0u: goto label_3730d0;
        case 0x3730d4u: goto label_3730d4;
        case 0x3730d8u: goto label_3730d8;
        case 0x3730dcu: goto label_3730dc;
        case 0x3730e0u: goto label_3730e0;
        case 0x3730e4u: goto label_3730e4;
        case 0x3730e8u: goto label_3730e8;
        case 0x3730ecu: goto label_3730ec;
        case 0x3730f0u: goto label_3730f0;
        case 0x3730f4u: goto label_3730f4;
        case 0x3730f8u: goto label_3730f8;
        case 0x3730fcu: goto label_3730fc;
        case 0x373100u: goto label_373100;
        case 0x373104u: goto label_373104;
        case 0x373108u: goto label_373108;
        case 0x37310cu: goto label_37310c;
        case 0x373110u: goto label_373110;
        case 0x373114u: goto label_373114;
        case 0x373118u: goto label_373118;
        case 0x37311cu: goto label_37311c;
        case 0x373120u: goto label_373120;
        case 0x373124u: goto label_373124;
        case 0x373128u: goto label_373128;
        case 0x37312cu: goto label_37312c;
        case 0x373130u: goto label_373130;
        case 0x373134u: goto label_373134;
        case 0x373138u: goto label_373138;
        case 0x37313cu: goto label_37313c;
        case 0x373140u: goto label_373140;
        case 0x373144u: goto label_373144;
        case 0x373148u: goto label_373148;
        case 0x37314cu: goto label_37314c;
        case 0x373150u: goto label_373150;
        case 0x373154u: goto label_373154;
        case 0x373158u: goto label_373158;
        case 0x37315cu: goto label_37315c;
        case 0x373160u: goto label_373160;
        case 0x373164u: goto label_373164;
        case 0x373168u: goto label_373168;
        case 0x37316cu: goto label_37316c;
        case 0x373170u: goto label_373170;
        case 0x373174u: goto label_373174;
        case 0x373178u: goto label_373178;
        case 0x37317cu: goto label_37317c;
        case 0x373180u: goto label_373180;
        case 0x373184u: goto label_373184;
        case 0x373188u: goto label_373188;
        case 0x37318cu: goto label_37318c;
        case 0x373190u: goto label_373190;
        case 0x373194u: goto label_373194;
        case 0x373198u: goto label_373198;
        case 0x37319cu: goto label_37319c;
        case 0x3731a0u: goto label_3731a0;
        case 0x3731a4u: goto label_3731a4;
        case 0x3731a8u: goto label_3731a8;
        case 0x3731acu: goto label_3731ac;
        case 0x3731b0u: goto label_3731b0;
        case 0x3731b4u: goto label_3731b4;
        case 0x3731b8u: goto label_3731b8;
        case 0x3731bcu: goto label_3731bc;
        case 0x3731c0u: goto label_3731c0;
        case 0x3731c4u: goto label_3731c4;
        case 0x3731c8u: goto label_3731c8;
        case 0x3731ccu: goto label_3731cc;
        case 0x3731d0u: goto label_3731d0;
        case 0x3731d4u: goto label_3731d4;
        case 0x3731d8u: goto label_3731d8;
        case 0x3731dcu: goto label_3731dc;
        case 0x3731e0u: goto label_3731e0;
        case 0x3731e4u: goto label_3731e4;
        case 0x3731e8u: goto label_3731e8;
        case 0x3731ecu: goto label_3731ec;
        case 0x3731f0u: goto label_3731f0;
        case 0x3731f4u: goto label_3731f4;
        case 0x3731f8u: goto label_3731f8;
        case 0x3731fcu: goto label_3731fc;
        case 0x373200u: goto label_373200;
        case 0x373204u: goto label_373204;
        case 0x373208u: goto label_373208;
        case 0x37320cu: goto label_37320c;
        case 0x373210u: goto label_373210;
        case 0x373214u: goto label_373214;
        case 0x373218u: goto label_373218;
        case 0x37321cu: goto label_37321c;
        case 0x373220u: goto label_373220;
        case 0x373224u: goto label_373224;
        case 0x373228u: goto label_373228;
        case 0x37322cu: goto label_37322c;
        case 0x373230u: goto label_373230;
        case 0x373234u: goto label_373234;
        case 0x373238u: goto label_373238;
        case 0x37323cu: goto label_37323c;
        case 0x373240u: goto label_373240;
        case 0x373244u: goto label_373244;
        case 0x373248u: goto label_373248;
        case 0x37324cu: goto label_37324c;
        case 0x373250u: goto label_373250;
        case 0x373254u: goto label_373254;
        case 0x373258u: goto label_373258;
        case 0x37325cu: goto label_37325c;
        case 0x373260u: goto label_373260;
        case 0x373264u: goto label_373264;
        case 0x373268u: goto label_373268;
        case 0x37326cu: goto label_37326c;
        case 0x373270u: goto label_373270;
        case 0x373274u: goto label_373274;
        case 0x373278u: goto label_373278;
        case 0x37327cu: goto label_37327c;
        case 0x373280u: goto label_373280;
        case 0x373284u: goto label_373284;
        case 0x373288u: goto label_373288;
        case 0x37328cu: goto label_37328c;
        case 0x373290u: goto label_373290;
        case 0x373294u: goto label_373294;
        case 0x373298u: goto label_373298;
        case 0x37329cu: goto label_37329c;
        case 0x3732a0u: goto label_3732a0;
        case 0x3732a4u: goto label_3732a4;
        case 0x3732a8u: goto label_3732a8;
        case 0x3732acu: goto label_3732ac;
        case 0x3732b0u: goto label_3732b0;
        case 0x3732b4u: goto label_3732b4;
        case 0x3732b8u: goto label_3732b8;
        case 0x3732bcu: goto label_3732bc;
        case 0x3732c0u: goto label_3732c0;
        case 0x3732c4u: goto label_3732c4;
        case 0x3732c8u: goto label_3732c8;
        case 0x3732ccu: goto label_3732cc;
        case 0x3732d0u: goto label_3732d0;
        case 0x3732d4u: goto label_3732d4;
        case 0x3732d8u: goto label_3732d8;
        case 0x3732dcu: goto label_3732dc;
        case 0x3732e0u: goto label_3732e0;
        case 0x3732e4u: goto label_3732e4;
        case 0x3732e8u: goto label_3732e8;
        case 0x3732ecu: goto label_3732ec;
        case 0x3732f0u: goto label_3732f0;
        case 0x3732f4u: goto label_3732f4;
        case 0x3732f8u: goto label_3732f8;
        case 0x3732fcu: goto label_3732fc;
        case 0x373300u: goto label_373300;
        case 0x373304u: goto label_373304;
        case 0x373308u: goto label_373308;
        case 0x37330cu: goto label_37330c;
        case 0x373310u: goto label_373310;
        case 0x373314u: goto label_373314;
        case 0x373318u: goto label_373318;
        case 0x37331cu: goto label_37331c;
        case 0x373320u: goto label_373320;
        case 0x373324u: goto label_373324;
        case 0x373328u: goto label_373328;
        case 0x37332cu: goto label_37332c;
        case 0x373330u: goto label_373330;
        case 0x373334u: goto label_373334;
        case 0x373338u: goto label_373338;
        case 0x37333cu: goto label_37333c;
        case 0x373340u: goto label_373340;
        case 0x373344u: goto label_373344;
        case 0x373348u: goto label_373348;
        case 0x37334cu: goto label_37334c;
        case 0x373350u: goto label_373350;
        case 0x373354u: goto label_373354;
        case 0x373358u: goto label_373358;
        case 0x37335cu: goto label_37335c;
        case 0x373360u: goto label_373360;
        case 0x373364u: goto label_373364;
        case 0x373368u: goto label_373368;
        case 0x37336cu: goto label_37336c;
        case 0x373370u: goto label_373370;
        case 0x373374u: goto label_373374;
        case 0x373378u: goto label_373378;
        case 0x37337cu: goto label_37337c;
        case 0x373380u: goto label_373380;
        case 0x373384u: goto label_373384;
        case 0x373388u: goto label_373388;
        case 0x37338cu: goto label_37338c;
        case 0x373390u: goto label_373390;
        case 0x373394u: goto label_373394;
        case 0x373398u: goto label_373398;
        case 0x37339cu: goto label_37339c;
        case 0x3733a0u: goto label_3733a0;
        case 0x3733a4u: goto label_3733a4;
        case 0x3733a8u: goto label_3733a8;
        case 0x3733acu: goto label_3733ac;
        case 0x3733b0u: goto label_3733b0;
        case 0x3733b4u: goto label_3733b4;
        case 0x3733b8u: goto label_3733b8;
        case 0x3733bcu: goto label_3733bc;
        case 0x3733c0u: goto label_3733c0;
        case 0x3733c4u: goto label_3733c4;
        case 0x3733c8u: goto label_3733c8;
        case 0x3733ccu: goto label_3733cc;
        case 0x3733d0u: goto label_3733d0;
        case 0x3733d4u: goto label_3733d4;
        case 0x3733d8u: goto label_3733d8;
        case 0x3733dcu: goto label_3733dc;
        case 0x3733e0u: goto label_3733e0;
        case 0x3733e4u: goto label_3733e4;
        case 0x3733e8u: goto label_3733e8;
        case 0x3733ecu: goto label_3733ec;
        case 0x3733f0u: goto label_3733f0;
        case 0x3733f4u: goto label_3733f4;
        case 0x3733f8u: goto label_3733f8;
        case 0x3733fcu: goto label_3733fc;
        case 0x373400u: goto label_373400;
        case 0x373404u: goto label_373404;
        case 0x373408u: goto label_373408;
        case 0x37340cu: goto label_37340c;
        case 0x373410u: goto label_373410;
        case 0x373414u: goto label_373414;
        case 0x373418u: goto label_373418;
        case 0x37341cu: goto label_37341c;
        case 0x373420u: goto label_373420;
        case 0x373424u: goto label_373424;
        case 0x373428u: goto label_373428;
        case 0x37342cu: goto label_37342c;
        case 0x373430u: goto label_373430;
        case 0x373434u: goto label_373434;
        case 0x373438u: goto label_373438;
        case 0x37343cu: goto label_37343c;
        case 0x373440u: goto label_373440;
        case 0x373444u: goto label_373444;
        case 0x373448u: goto label_373448;
        case 0x37344cu: goto label_37344c;
        case 0x373450u: goto label_373450;
        case 0x373454u: goto label_373454;
        case 0x373458u: goto label_373458;
        case 0x37345cu: goto label_37345c;
        case 0x373460u: goto label_373460;
        case 0x373464u: goto label_373464;
        case 0x373468u: goto label_373468;
        case 0x37346cu: goto label_37346c;
        case 0x373470u: goto label_373470;
        case 0x373474u: goto label_373474;
        case 0x373478u: goto label_373478;
        case 0x37347cu: goto label_37347c;
        case 0x373480u: goto label_373480;
        case 0x373484u: goto label_373484;
        case 0x373488u: goto label_373488;
        case 0x37348cu: goto label_37348c;
        case 0x373490u: goto label_373490;
        case 0x373494u: goto label_373494;
        case 0x373498u: goto label_373498;
        case 0x37349cu: goto label_37349c;
        case 0x3734a0u: goto label_3734a0;
        case 0x3734a4u: goto label_3734a4;
        case 0x3734a8u: goto label_3734a8;
        case 0x3734acu: goto label_3734ac;
        case 0x3734b0u: goto label_3734b0;
        case 0x3734b4u: goto label_3734b4;
        case 0x3734b8u: goto label_3734b8;
        case 0x3734bcu: goto label_3734bc;
        case 0x3734c0u: goto label_3734c0;
        case 0x3734c4u: goto label_3734c4;
        case 0x3734c8u: goto label_3734c8;
        case 0x3734ccu: goto label_3734cc;
        case 0x3734d0u: goto label_3734d0;
        case 0x3734d4u: goto label_3734d4;
        case 0x3734d8u: goto label_3734d8;
        case 0x3734dcu: goto label_3734dc;
        case 0x3734e0u: goto label_3734e0;
        case 0x3734e4u: goto label_3734e4;
        case 0x3734e8u: goto label_3734e8;
        case 0x3734ecu: goto label_3734ec;
        case 0x3734f0u: goto label_3734f0;
        case 0x3734f4u: goto label_3734f4;
        case 0x3734f8u: goto label_3734f8;
        case 0x3734fcu: goto label_3734fc;
        case 0x373500u: goto label_373500;
        case 0x373504u: goto label_373504;
        case 0x373508u: goto label_373508;
        case 0x37350cu: goto label_37350c;
        case 0x373510u: goto label_373510;
        case 0x373514u: goto label_373514;
        case 0x373518u: goto label_373518;
        case 0x37351cu: goto label_37351c;
        case 0x373520u: goto label_373520;
        case 0x373524u: goto label_373524;
        case 0x373528u: goto label_373528;
        case 0x37352cu: goto label_37352c;
        case 0x373530u: goto label_373530;
        case 0x373534u: goto label_373534;
        case 0x373538u: goto label_373538;
        case 0x37353cu: goto label_37353c;
        case 0x373540u: goto label_373540;
        case 0x373544u: goto label_373544;
        case 0x373548u: goto label_373548;
        case 0x37354cu: goto label_37354c;
        case 0x373550u: goto label_373550;
        case 0x373554u: goto label_373554;
        case 0x373558u: goto label_373558;
        case 0x37355cu: goto label_37355c;
        case 0x373560u: goto label_373560;
        case 0x373564u: goto label_373564;
        case 0x373568u: goto label_373568;
        case 0x37356cu: goto label_37356c;
        case 0x373570u: goto label_373570;
        case 0x373574u: goto label_373574;
        case 0x373578u: goto label_373578;
        case 0x37357cu: goto label_37357c;
        case 0x373580u: goto label_373580;
        case 0x373584u: goto label_373584;
        case 0x373588u: goto label_373588;
        case 0x37358cu: goto label_37358c;
        case 0x373590u: goto label_373590;
        case 0x373594u: goto label_373594;
        case 0x373598u: goto label_373598;
        case 0x37359cu: goto label_37359c;
        case 0x3735a0u: goto label_3735a0;
        case 0x3735a4u: goto label_3735a4;
        case 0x3735a8u: goto label_3735a8;
        case 0x3735acu: goto label_3735ac;
        case 0x3735b0u: goto label_3735b0;
        case 0x3735b4u: goto label_3735b4;
        case 0x3735b8u: goto label_3735b8;
        case 0x3735bcu: goto label_3735bc;
        case 0x3735c0u: goto label_3735c0;
        case 0x3735c4u: goto label_3735c4;
        case 0x3735c8u: goto label_3735c8;
        case 0x3735ccu: goto label_3735cc;
        case 0x3735d0u: goto label_3735d0;
        case 0x3735d4u: goto label_3735d4;
        case 0x3735d8u: goto label_3735d8;
        case 0x3735dcu: goto label_3735dc;
        case 0x3735e0u: goto label_3735e0;
        case 0x3735e4u: goto label_3735e4;
        case 0x3735e8u: goto label_3735e8;
        case 0x3735ecu: goto label_3735ec;
        case 0x3735f0u: goto label_3735f0;
        case 0x3735f4u: goto label_3735f4;
        case 0x3735f8u: goto label_3735f8;
        case 0x3735fcu: goto label_3735fc;
        case 0x373600u: goto label_373600;
        case 0x373604u: goto label_373604;
        case 0x373608u: goto label_373608;
        case 0x37360cu: goto label_37360c;
        case 0x373610u: goto label_373610;
        case 0x373614u: goto label_373614;
        case 0x373618u: goto label_373618;
        case 0x37361cu: goto label_37361c;
        case 0x373620u: goto label_373620;
        case 0x373624u: goto label_373624;
        case 0x373628u: goto label_373628;
        case 0x37362cu: goto label_37362c;
        case 0x373630u: goto label_373630;
        case 0x373634u: goto label_373634;
        case 0x373638u: goto label_373638;
        case 0x37363cu: goto label_37363c;
        case 0x373640u: goto label_373640;
        case 0x373644u: goto label_373644;
        case 0x373648u: goto label_373648;
        case 0x37364cu: goto label_37364c;
        case 0x373650u: goto label_373650;
        case 0x373654u: goto label_373654;
        case 0x373658u: goto label_373658;
        case 0x37365cu: goto label_37365c;
        case 0x373660u: goto label_373660;
        case 0x373664u: goto label_373664;
        case 0x373668u: goto label_373668;
        case 0x37366cu: goto label_37366c;
        case 0x373670u: goto label_373670;
        case 0x373674u: goto label_373674;
        case 0x373678u: goto label_373678;
        case 0x37367cu: goto label_37367c;
        case 0x373680u: goto label_373680;
        case 0x373684u: goto label_373684;
        case 0x373688u: goto label_373688;
        case 0x37368cu: goto label_37368c;
        case 0x373690u: goto label_373690;
        case 0x373694u: goto label_373694;
        case 0x373698u: goto label_373698;
        case 0x37369cu: goto label_37369c;
        case 0x3736a0u: goto label_3736a0;
        case 0x3736a4u: goto label_3736a4;
        case 0x3736a8u: goto label_3736a8;
        case 0x3736acu: goto label_3736ac;
        case 0x3736b0u: goto label_3736b0;
        case 0x3736b4u: goto label_3736b4;
        case 0x3736b8u: goto label_3736b8;
        case 0x3736bcu: goto label_3736bc;
        case 0x3736c0u: goto label_3736c0;
        case 0x3736c4u: goto label_3736c4;
        case 0x3736c8u: goto label_3736c8;
        case 0x3736ccu: goto label_3736cc;
        case 0x3736d0u: goto label_3736d0;
        case 0x3736d4u: goto label_3736d4;
        case 0x3736d8u: goto label_3736d8;
        case 0x3736dcu: goto label_3736dc;
        case 0x3736e0u: goto label_3736e0;
        case 0x3736e4u: goto label_3736e4;
        case 0x3736e8u: goto label_3736e8;
        case 0x3736ecu: goto label_3736ec;
        case 0x3736f0u: goto label_3736f0;
        case 0x3736f4u: goto label_3736f4;
        case 0x3736f8u: goto label_3736f8;
        case 0x3736fcu: goto label_3736fc;
        case 0x373700u: goto label_373700;
        case 0x373704u: goto label_373704;
        case 0x373708u: goto label_373708;
        case 0x37370cu: goto label_37370c;
        case 0x373710u: goto label_373710;
        case 0x373714u: goto label_373714;
        case 0x373718u: goto label_373718;
        case 0x37371cu: goto label_37371c;
        case 0x373720u: goto label_373720;
        case 0x373724u: goto label_373724;
        case 0x373728u: goto label_373728;
        case 0x37372cu: goto label_37372c;
        case 0x373730u: goto label_373730;
        case 0x373734u: goto label_373734;
        case 0x373738u: goto label_373738;
        case 0x37373cu: goto label_37373c;
        case 0x373740u: goto label_373740;
        case 0x373744u: goto label_373744;
        case 0x373748u: goto label_373748;
        case 0x37374cu: goto label_37374c;
        case 0x373750u: goto label_373750;
        case 0x373754u: goto label_373754;
        case 0x373758u: goto label_373758;
        case 0x37375cu: goto label_37375c;
        case 0x373760u: goto label_373760;
        case 0x373764u: goto label_373764;
        case 0x373768u: goto label_373768;
        case 0x37376cu: goto label_37376c;
        case 0x373770u: goto label_373770;
        case 0x373774u: goto label_373774;
        case 0x373778u: goto label_373778;
        case 0x37377cu: goto label_37377c;
        case 0x373780u: goto label_373780;
        case 0x373784u: goto label_373784;
        case 0x373788u: goto label_373788;
        case 0x37378cu: goto label_37378c;
        case 0x373790u: goto label_373790;
        case 0x373794u: goto label_373794;
        case 0x373798u: goto label_373798;
        case 0x37379cu: goto label_37379c;
        case 0x3737a0u: goto label_3737a0;
        case 0x3737a4u: goto label_3737a4;
        case 0x3737a8u: goto label_3737a8;
        case 0x3737acu: goto label_3737ac;
        case 0x3737b0u: goto label_3737b0;
        case 0x3737b4u: goto label_3737b4;
        case 0x3737b8u: goto label_3737b8;
        case 0x3737bcu: goto label_3737bc;
        case 0x3737c0u: goto label_3737c0;
        case 0x3737c4u: goto label_3737c4;
        case 0x3737c8u: goto label_3737c8;
        case 0x3737ccu: goto label_3737cc;
        case 0x3737d0u: goto label_3737d0;
        case 0x3737d4u: goto label_3737d4;
        case 0x3737d8u: goto label_3737d8;
        case 0x3737dcu: goto label_3737dc;
        case 0x3737e0u: goto label_3737e0;
        case 0x3737e4u: goto label_3737e4;
        case 0x3737e8u: goto label_3737e8;
        case 0x3737ecu: goto label_3737ec;
        case 0x3737f0u: goto label_3737f0;
        case 0x3737f4u: goto label_3737f4;
        case 0x3737f8u: goto label_3737f8;
        case 0x3737fcu: goto label_3737fc;
        case 0x373800u: goto label_373800;
        case 0x373804u: goto label_373804;
        case 0x373808u: goto label_373808;
        case 0x37380cu: goto label_37380c;
        case 0x373810u: goto label_373810;
        case 0x373814u: goto label_373814;
        case 0x373818u: goto label_373818;
        case 0x37381cu: goto label_37381c;
        case 0x373820u: goto label_373820;
        case 0x373824u: goto label_373824;
        case 0x373828u: goto label_373828;
        case 0x37382cu: goto label_37382c;
        case 0x373830u: goto label_373830;
        case 0x373834u: goto label_373834;
        case 0x373838u: goto label_373838;
        case 0x37383cu: goto label_37383c;
        case 0x373840u: goto label_373840;
        case 0x373844u: goto label_373844;
        case 0x373848u: goto label_373848;
        case 0x37384cu: goto label_37384c;
        case 0x373850u: goto label_373850;
        case 0x373854u: goto label_373854;
        case 0x373858u: goto label_373858;
        case 0x37385cu: goto label_37385c;
        case 0x373860u: goto label_373860;
        case 0x373864u: goto label_373864;
        case 0x373868u: goto label_373868;
        case 0x37386cu: goto label_37386c;
        case 0x373870u: goto label_373870;
        case 0x373874u: goto label_373874;
        case 0x373878u: goto label_373878;
        case 0x37387cu: goto label_37387c;
        case 0x373880u: goto label_373880;
        case 0x373884u: goto label_373884;
        case 0x373888u: goto label_373888;
        case 0x37388cu: goto label_37388c;
        case 0x373890u: goto label_373890;
        case 0x373894u: goto label_373894;
        case 0x373898u: goto label_373898;
        case 0x37389cu: goto label_37389c;
        case 0x3738a0u: goto label_3738a0;
        case 0x3738a4u: goto label_3738a4;
        case 0x3738a8u: goto label_3738a8;
        case 0x3738acu: goto label_3738ac;
        case 0x3738b0u: goto label_3738b0;
        case 0x3738b4u: goto label_3738b4;
        case 0x3738b8u: goto label_3738b8;
        case 0x3738bcu: goto label_3738bc;
        case 0x3738c0u: goto label_3738c0;
        case 0x3738c4u: goto label_3738c4;
        case 0x3738c8u: goto label_3738c8;
        case 0x3738ccu: goto label_3738cc;
        case 0x3738d0u: goto label_3738d0;
        case 0x3738d4u: goto label_3738d4;
        case 0x3738d8u: goto label_3738d8;
        case 0x3738dcu: goto label_3738dc;
        case 0x3738e0u: goto label_3738e0;
        case 0x3738e4u: goto label_3738e4;
        case 0x3738e8u: goto label_3738e8;
        case 0x3738ecu: goto label_3738ec;
        case 0x3738f0u: goto label_3738f0;
        case 0x3738f4u: goto label_3738f4;
        case 0x3738f8u: goto label_3738f8;
        case 0x3738fcu: goto label_3738fc;
        case 0x373900u: goto label_373900;
        case 0x373904u: goto label_373904;
        case 0x373908u: goto label_373908;
        case 0x37390cu: goto label_37390c;
        case 0x373910u: goto label_373910;
        case 0x373914u: goto label_373914;
        case 0x373918u: goto label_373918;
        case 0x37391cu: goto label_37391c;
        case 0x373920u: goto label_373920;
        case 0x373924u: goto label_373924;
        case 0x373928u: goto label_373928;
        case 0x37392cu: goto label_37392c;
        case 0x373930u: goto label_373930;
        case 0x373934u: goto label_373934;
        case 0x373938u: goto label_373938;
        case 0x37393cu: goto label_37393c;
        case 0x373940u: goto label_373940;
        case 0x373944u: goto label_373944;
        case 0x373948u: goto label_373948;
        case 0x37394cu: goto label_37394c;
        case 0x373950u: goto label_373950;
        case 0x373954u: goto label_373954;
        case 0x373958u: goto label_373958;
        case 0x37395cu: goto label_37395c;
        case 0x373960u: goto label_373960;
        case 0x373964u: goto label_373964;
        case 0x373968u: goto label_373968;
        case 0x37396cu: goto label_37396c;
        case 0x373970u: goto label_373970;
        case 0x373974u: goto label_373974;
        case 0x373978u: goto label_373978;
        case 0x37397cu: goto label_37397c;
        case 0x373980u: goto label_373980;
        case 0x373984u: goto label_373984;
        case 0x373988u: goto label_373988;
        case 0x37398cu: goto label_37398c;
        case 0x373990u: goto label_373990;
        case 0x373994u: goto label_373994;
        case 0x373998u: goto label_373998;
        case 0x37399cu: goto label_37399c;
        case 0x3739a0u: goto label_3739a0;
        case 0x3739a4u: goto label_3739a4;
        case 0x3739a8u: goto label_3739a8;
        case 0x3739acu: goto label_3739ac;
        case 0x3739b0u: goto label_3739b0;
        case 0x3739b4u: goto label_3739b4;
        case 0x3739b8u: goto label_3739b8;
        case 0x3739bcu: goto label_3739bc;
        case 0x3739c0u: goto label_3739c0;
        case 0x3739c4u: goto label_3739c4;
        case 0x3739c8u: goto label_3739c8;
        case 0x3739ccu: goto label_3739cc;
        case 0x3739d0u: goto label_3739d0;
        case 0x3739d4u: goto label_3739d4;
        case 0x3739d8u: goto label_3739d8;
        case 0x3739dcu: goto label_3739dc;
        case 0x3739e0u: goto label_3739e0;
        case 0x3739e4u: goto label_3739e4;
        case 0x3739e8u: goto label_3739e8;
        case 0x3739ecu: goto label_3739ec;
        case 0x3739f0u: goto label_3739f0;
        case 0x3739f4u: goto label_3739f4;
        case 0x3739f8u: goto label_3739f8;
        case 0x3739fcu: goto label_3739fc;
        case 0x373a00u: goto label_373a00;
        case 0x373a04u: goto label_373a04;
        case 0x373a08u: goto label_373a08;
        case 0x373a0cu: goto label_373a0c;
        case 0x373a10u: goto label_373a10;
        case 0x373a14u: goto label_373a14;
        case 0x373a18u: goto label_373a18;
        case 0x373a1cu: goto label_373a1c;
        case 0x373a20u: goto label_373a20;
        case 0x373a24u: goto label_373a24;
        case 0x373a28u: goto label_373a28;
        case 0x373a2cu: goto label_373a2c;
        case 0x373a30u: goto label_373a30;
        case 0x373a34u: goto label_373a34;
        case 0x373a38u: goto label_373a38;
        case 0x373a3cu: goto label_373a3c;
        case 0x373a40u: goto label_373a40;
        case 0x373a44u: goto label_373a44;
        case 0x373a48u: goto label_373a48;
        case 0x373a4cu: goto label_373a4c;
        case 0x373a50u: goto label_373a50;
        case 0x373a54u: goto label_373a54;
        case 0x373a58u: goto label_373a58;
        case 0x373a5cu: goto label_373a5c;
        case 0x373a60u: goto label_373a60;
        case 0x373a64u: goto label_373a64;
        case 0x373a68u: goto label_373a68;
        case 0x373a6cu: goto label_373a6c;
        case 0x373a70u: goto label_373a70;
        case 0x373a74u: goto label_373a74;
        case 0x373a78u: goto label_373a78;
        case 0x373a7cu: goto label_373a7c;
        case 0x373a80u: goto label_373a80;
        case 0x373a84u: goto label_373a84;
        case 0x373a88u: goto label_373a88;
        case 0x373a8cu: goto label_373a8c;
        case 0x373a90u: goto label_373a90;
        case 0x373a94u: goto label_373a94;
        case 0x373a98u: goto label_373a98;
        case 0x373a9cu: goto label_373a9c;
        case 0x373aa0u: goto label_373aa0;
        case 0x373aa4u: goto label_373aa4;
        case 0x373aa8u: goto label_373aa8;
        case 0x373aacu: goto label_373aac;
        case 0x373ab0u: goto label_373ab0;
        case 0x373ab4u: goto label_373ab4;
        case 0x373ab8u: goto label_373ab8;
        case 0x373abcu: goto label_373abc;
        case 0x373ac0u: goto label_373ac0;
        case 0x373ac4u: goto label_373ac4;
        case 0x373ac8u: goto label_373ac8;
        case 0x373accu: goto label_373acc;
        case 0x373ad0u: goto label_373ad0;
        case 0x373ad4u: goto label_373ad4;
        default: break;
    }

    ctx->pc = 0x372ea8u;

label_372ea8:
    // 0x372ea8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x372ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_372eac:
    // 0x372eac: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x372eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_372eb0:
    // 0x372eb0: 0x7fb60210  sq          $s6, 0x210($sp)
    ctx->pc = 0x372eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 22));
label_372eb4:
    // 0x372eb4: 0x7fb40230  sq          $s4, 0x230($sp)
    ctx->pc = 0x372eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 20));
label_372eb8:
    // 0x372eb8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x372eb8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_372ebc:
    // 0x372ebc: 0x7fb00270  sq          $s0, 0x270($sp)
    ctx->pc = 0x372ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 16));
label_372ec0:
    // 0x372ec0: 0x2444c430  addiu       $a0, $v0, -0x3BD0
    ctx->pc = 0x372ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951984));
label_372ec4:
    // 0x372ec4: 0x7fb10260  sq          $s1, 0x260($sp)
    ctx->pc = 0x372ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 17));
label_372ec8:
    // 0x372ec8: 0x7fb20250  sq          $s2, 0x250($sp)
    ctx->pc = 0x372ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 18));
label_372ecc:
    // 0x372ecc: 0x7fb30240  sq          $s3, 0x240($sp)
    ctx->pc = 0x372eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 19));
label_372ed0:
    // 0x372ed0: 0x7fb50220  sq          $s5, 0x220($sp)
    ctx->pc = 0x372ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 21));
label_372ed4:
    // 0x372ed4: 0x7fb70200  sq          $s7, 0x200($sp)
    ctx->pc = 0x372ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 23));
label_372ed8:
    // 0x372ed8: 0x7fbe01f0  sq          $fp, 0x1F0($sp)
    ctx->pc = 0x372ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 30));
label_372edc:
    // 0x372edc: 0xffbf01e0  sd          $ra, 0x1E0($sp)
    ctx->pc = 0x372edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 31));
label_372ee0:
    // 0x372ee0: 0xe7b50288  swc1        $f21, 0x288($sp)
    ctx->pc = 0x372ee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_372ee4:
    // 0x372ee4: 0xe7b40280  swc1        $f20, 0x280($sp)
    ctx->pc = 0x372ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_372ee8:
    // 0x372ee8: 0x8c43c430  lw          $v1, -0x3BD0($v0)
    ctx->pc = 0x372ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951984)));
label_372eec:
    // 0x372eec: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x372eecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_372ef0:
    // 0x372ef0: 0xafa001cc  sw          $zero, 0x1CC($sp)
    ctx->pc = 0x372ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 0));
label_372ef4:
    // 0x372ef4: 0x65a021  addu        $s4, $v1, $a1
    ctx->pc = 0x372ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_372ef8:
    // 0x372ef8: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x372ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_372efc:
    // 0x372efc: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x372efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
label_372f00:
    // 0x372f00: 0x2c63021  addu        $a2, $s6, $a2
    ctx->pc = 0x372f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
label_372f04:
    // 0x372f04: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x372f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_372f08:
    // 0x372f08: 0xafa601c8  sw          $a2, 0x1C8($sp)
    ctx->pc = 0x372f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 6));
label_372f0c:
    // 0x372f0c: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x372f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_372f10:
    // 0x372f10: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_372f14:
    if (ctx->pc == 0x372F14u) {
        ctx->pc = 0x372F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F10u;
        // 0x372f14: 0xafa301bc  sw          $v1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372F18u;
        goto label_372f18;
    }
    ctx->pc = 0x372F10u;
    {
        const bool branch_taken_0x372f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F10u;
        // 0x372f14: 0xafa301bc  sw          $v1, 0x1BC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f10) {
            ctx->pc = 0x372F48u;
            goto label_372f48;
        }
    }
    ctx->pc = 0x372F18u;
label_372f18:
    // 0x372f18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x372f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_372f1c:
    // 0x372f1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_372f20:
    if (ctx->pc == 0x372F20u) {
        ctx->pc = 0x372F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F1Cu;
        // 0x372f20: 0x96c20084  lhu         $v0, 0x84($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372F24u;
        goto label_372f24;
    }
    ctx->pc = 0x372F1Cu;
    {
        const bool branch_taken_0x372f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372f1c) {
            ctx->pc = 0x372F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372F1Cu;
            // 0x372f20: 0x96c20084  lhu         $v0, 0x84($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372F4Cu;
            goto label_372f4c;
        }
    }
    ctx->pc = 0x372F24u;
label_372f24:
    // 0x372f24: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x372f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_372f28:
    // 0x372f28: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x372f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_372f2c:
    // 0x372f2c: 0x0  nop
    ctx->pc = 0x372f2cu;
    // NOP
label_372f30:
    // 0x372f30: 0x0  nop
    ctx->pc = 0x372f30u;
    // NOP
label_372f34:
    // 0x372f34: 0x0  nop
    ctx->pc = 0x372f34u;
    // NOP
label_372f38:
    // 0x372f38: 0x0  nop
    ctx->pc = 0x372f38u;
    // NOP
label_372f3c:
    // 0x372f3c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_372f40:
    if (ctx->pc == 0x372F40u) {
        ctx->pc = 0x372F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F3Cu;
        // 0x372f40: 0x8c630058  lw          $v1, 0x58($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372F44u;
        goto label_372f44;
    }
    ctx->pc = 0x372F3Cu;
    {
        const bool branch_taken_0x372f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x372f3c) {
            ctx->pc = 0x372F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372F3Cu;
            // 0x372f40: 0x8c630058  lw          $v1, 0x58($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372f28;
        }
    }
    ctx->pc = 0x372F44u;
label_372f44:
    // 0x372f44: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x372f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
label_372f48:
    // 0x372f48: 0x96c20084  lhu         $v0, 0x84($s6)
    ctx->pc = 0x372f48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 132)));
label_372f4c:
    // 0x372f4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x372f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_372f50:
    // 0x372f50: 0x8fbe01bc  lw          $fp, 0x1BC($sp)
    ctx->pc = 0x372f50u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_372f54:
    // 0x372f54: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x372f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_372f58:
    // 0x372f58: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x372f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_372f5c:
    // 0x372f5c: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x372f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_372f60:
    // 0x372f60: 0x104001e9  beqz        $v0, . + 4 + (0x1E9 << 2)
label_372f64:
    if (ctx->pc == 0x372F64u) {
        ctx->pc = 0x372F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F60u;
        // 0x372f64: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372F68u;
        goto label_372f68;
    }
    ctx->pc = 0x372F60u;
    {
        const bool branch_taken_0x372f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x372F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372F60u;
        // 0x372f64: 0xafa301c0  sw          $v1, 0x1C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372f60) {
            ctx->pc = 0x373708u;
            goto label_373708;
        }
    }
    ctx->pc = 0x372F68u;
label_372f68:
    // 0x372f68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x372f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_372f6c:
    // 0x372f6c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x372f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_372f70:
    // 0x372f70: 0x27b301b0  addiu       $s3, $sp, 0x1B0
    ctx->pc = 0x372f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_372f74:
    // 0x372f74: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x372f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_372f78:
    // 0x372f78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x372f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_372f7c:
    // 0x372f7c: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x372f7cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_372f80:
    // 0x372f80: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_372f84:
    // 0x372f84: 0x0  nop
    ctx->pc = 0x372f84u;
    // NOP
label_372f88:
    // 0x372f88: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x372f88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_372f8c:
    // 0x372f8c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x372f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_372f90:
    // 0x372f90: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x372f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_372f94:
    // 0x372f94: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x372f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_372f98:
    // 0x372f98: 0x96c30080  lhu         $v1, 0x80($s6)
    ctx->pc = 0x372f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 128)));
label_372f9c:
    // 0x372f9c: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x372f9cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_372fa0:
    // 0x372fa0: 0x8cc4c430  lw          $a0, -0x3BD0($a2)
    ctx->pc = 0x372fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294951984)));
label_372fa4:
    // 0x372fa4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x372fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_372fa8:
    // 0x372fa8: 0xafa001d0  sw          $zero, 0x1D0($sp)
    ctx->pc = 0x372fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 0));
label_372fac:
    // 0x372fac: 0xc0e3df2  jal         func_38F7C8
label_372fb0:
    if (ctx->pc == 0x372FB0u) {
        ctx->pc = 0x372FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FACu;
        // 0x372fb0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372FB4u;
        goto label_372fb4;
    }
    ctx->pc = 0x372FACu;
    SET_GPR_U32(ctx, 31, 0x372FB4u);
    ctx->pc = 0x372FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372FACu;
    // 0x372fb0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x372FACu, 0x372FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372FB4u;
label_372fb4:
    // 0x372fb4: 0x90430007  lbu         $v1, 0x7($v0)
    ctx->pc = 0x372fb4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_372fb8:
    // 0x372fb8: 0x2c6300ff  sltiu       $v1, $v1, 0xFF
    ctx->pc = 0x372fb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)255) ? 1 : 0);
label_372fbc:
    // 0x372fbc: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_372fc0:
    if (ctx->pc == 0x372FC0u) {
        ctx->pc = 0x372FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FBCu;
        // 0x372fc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372FC4u;
        goto label_372fc4;
    }
    ctx->pc = 0x372FBCu;
    {
        const bool branch_taken_0x372fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FBCu;
        // 0x372fc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fbc) {
            ctx->pc = 0x372FD8u;
            goto label_372fd8;
        }
    }
    ctx->pc = 0x372FC4u;
label_372fc4:
    // 0x372fc4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_372fc8:
    if (ctx->pc == 0x372FC8u) {
        ctx->pc = 0x372FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FC4u;
        // 0x372fc8: 0x8fa801c0  lw          $t0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372FCCu;
        goto label_372fcc;
    }
    ctx->pc = 0x372FC4u;
    {
        const bool branch_taken_0x372fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x372FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FC4u;
        // 0x372fc8: 0x8fa801c0  lw          $t0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372fc4) {
            ctx->pc = 0x372FE4u;
            goto label_372fe4;
        }
    }
    ctx->pc = 0x372FCCu;
label_372fcc:
    // 0x372fcc: 0x80820030  lb          $v0, 0x30($a0)
    ctx->pc = 0x372fccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 48)));
label_372fd0:
    // 0x372fd0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_372fd4:
    if (ctx->pc == 0x372FD4u) {
        ctx->pc = 0x372FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372FD0u;
        // 0x372fd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x372FD8u;
        goto label_372fd8;
    }
    ctx->pc = 0x372FD0u;
    {
        const bool branch_taken_0x372fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x372fd0) {
            ctx->pc = 0x372FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x372FD0u;
            // 0x372fd4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x372FE8u;
            goto label_372fe8;
        }
    }
    ctx->pc = 0x372FD8u;
label_372fd8:
    // 0x372fd8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x372fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_372fdc:
    // 0x372fdc: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x372fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
label_372fe0:
    // 0x372fe0: 0x8fa801c0  lw          $t0, 0x1C0($sp)
    ctx->pc = 0x372fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_372fe4:
    // 0x372fe4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x372fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_372fe8:
    // 0x372fe8: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x372fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_372fec:
    // 0x372fec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x372fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_372ff0:
    // 0x372ff0: 0x2a88021  addu        $s0, $s5, $t0
    ctx->pc = 0x372ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 8)));
label_372ff4:
    // 0x372ff4: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x372ff4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_372ff8:
    // 0x372ff8: 0xafb101d8  sw          $s1, 0x1D8($sp)
    ctx->pc = 0x372ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 17));
label_372ffc:
    // 0x372ffc: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x372ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_373000:
    // 0x373000: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x373000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_373004:
    // 0x373004: 0xc0de06c  jal         func_3781B0
label_373008:
    if (ctx->pc == 0x373008u) {
        ctx->pc = 0x373008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373004u;
        // 0x373008: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37300Cu;
        goto label_37300c;
    }
    ctx->pc = 0x373004u;
    SET_GPR_U32(ctx, 31, 0x37300Cu);
    ctx->pc = 0x373008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373004u;
    // 0x373008: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x373004u, 0x37300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37300Cu;
label_37300c:
    // 0x37300c: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x37300cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_373010:
    // 0x373010: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x373010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_373014:
    // 0x373014: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x373014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_373018:
    // 0x373018: 0xb71818  mult        $v1, $a1, $s7
    ctx->pc = 0x373018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_37301c:
    // 0x37301c: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x37301cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_373020:
    // 0x373020: 0xc0de06c  jal         func_3781B0
label_373024:
    if (ctx->pc == 0x373024u) {
        ctx->pc = 0x373024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373020u;
        // 0x373024: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373028u;
        goto label_373028;
    }
    ctx->pc = 0x373020u;
    SET_GPR_U32(ctx, 31, 0x373028u);
    ctx->pc = 0x373024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373020u;
    // 0x373024: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x373020u, 0x373028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373028u;
label_373028:
    // 0x373028: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x373028u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_37302c:
    // 0x37302c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x37302cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_373030:
    // 0x373030: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x373030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_373034:
    // 0x373034: 0xc0de06c  jal         func_3781B0
label_373038:
    if (ctx->pc == 0x373038u) {
        ctx->pc = 0x373038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373034u;
        // 0x373038: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37303Cu;
        goto label_37303c;
    }
    ctx->pc = 0x373034u;
    SET_GPR_U32(ctx, 31, 0x37303Cu);
    ctx->pc = 0x373038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373034u;
    // 0x373038: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x373034u, 0x37303Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37303Cu;
label_37303c:
    // 0x37303c: 0xc0dc888  jal         func_372220
label_373040:
    if (ctx->pc == 0x373040u) {
        ctx->pc = 0x373040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37303Cu;
        // 0x373040: 0x27a401b4  addiu       $a0, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373044u;
        goto label_373044;
    }
    ctx->pc = 0x37303Cu;
    SET_GPR_U32(ctx, 31, 0x373044u);
    ctx->pc = 0x373040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37303Cu;
    // 0x373040: 0x27a401b4  addiu       $a0, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372220u, 0x37303Cu, 0x373044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373044u;
label_373044:
    // 0x373044: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x373044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_373048:
    // 0x373048: 0x10a000c6  beqz        $a1, . + 4 + (0xC6 << 2)
label_37304c:
    if (ctx->pc == 0x37304Cu) {
        ctx->pc = 0x37304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373048u;
        // 0x37304c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373050u;
        goto label_373050;
    }
    ctx->pc = 0x373048u;
    {
        const bool branch_taken_0x373048 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x37304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373048u;
        // 0x37304c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373048) {
            ctx->pc = 0x373364u;
            goto label_373364;
        }
    }
    ctx->pc = 0x373050u;
label_373050:
    // 0x373050: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x373050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_373054:
    // 0x373054: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x373054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373058:
    // 0x373058: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x373058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_37305c:
    // 0x37305c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x37305cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373060:
    // 0x373060: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x373060u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_373064:
    // 0x373064: 0xe7a700a0  swc1        $f7, 0xA0($sp)
    ctx->pc = 0x373064u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_373068:
    // 0x373068: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x373068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37306c:
    // 0x37306c: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x37306cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_373070:
    // 0x373070: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x373070u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_373074:
    // 0x373074: 0xe7a500a4  swc1        $f5, 0xA4($sp)
    ctx->pc = 0x373074u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_373078:
    // 0x373078: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x373078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37307c:
    // 0x37307c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x37307cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373080:
    // 0x373080: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x373080u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_373084:
    // 0x373084: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x373084u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_373088:
    // 0x373088: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x373088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37308c:
    // 0x37308c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x37308cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373090:
    // 0x373090: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x373090u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_373094:
    // 0x373094: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x373094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_373098:
    // 0x373098: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x373098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37309c:
    // 0x37309c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x37309cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3730a0:
    // 0x3730a0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3730a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3730a4:
    // 0x3730a4: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x3730a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3730a8:
    // 0x3730a8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3730a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3730ac:
    // 0x3730ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3730acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3730b0:
    // 0x3730b0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3730b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3730b4:
    // 0x3730b4: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x3730b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_3730b8:
    // 0x3730b8: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x3730b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_3730bc:
    // 0x3730bc: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3730bcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3730c0:
    // 0x3730c0: 0x46033982  mul.s       $f6, $f7, $f3
    ctx->pc = 0x3730c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_3730c4:
    // 0x3730c4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3730c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_3730c8:
    // 0x3730c8: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3730c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3730cc:
    // 0x3730cc: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3730ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3730d0:
    // 0x3730d0: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x3730d0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_3730d4:
    // 0x3730d4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x3730d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_3730d8:
    // 0x3730d8: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3730d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_3730dc:
    // 0x3730dc: 0xe7a600c8  swc1        $f6, 0xC8($sp)
    ctx->pc = 0x3730dcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_3730e0:
    // 0x3730e0: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x3730e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_3730e4:
    // 0x3730e4: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x3730e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_3730e8:
    // 0x3730e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x3730e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3730ec:
    // 0x3730ec: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x3730ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3730f0:
    // 0x3730f0: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x3730f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3730f4:
    // 0x3730f4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x3730f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3730f8:
    // 0x3730f8: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x3730f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3730fc:
    // 0x3730fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3730fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_373100:
    // 0x373100: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x373100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373104:
    // 0x373104: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x373104u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_373108:
    // 0x373108: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x373108u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_37310c:
    // 0x37310c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x37310cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_373110:
    // 0x373110: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x373110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_373114:
    // 0x373114: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x373114u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_373118:
    // 0x373118: 0xc104d24  jal         func_413490
label_37311c:
    if (ctx->pc == 0x37311Cu) {
        ctx->pc = 0x37311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373118u;
        // 0x37311c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373120u;
        goto label_373120;
    }
    ctx->pc = 0x373118u;
    SET_GPR_U32(ctx, 31, 0x373120u);
    ctx->pc = 0x37311Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373118u;
    // 0x37311c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x373118u, 0x373120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373120u;
label_373120:
    // 0x373120: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x373120u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_373124:
    // 0x373124: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x373124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_373128:
    // 0x373128: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x373128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_37312c:
    // 0x37312c: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x37312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_373130:
    // 0x373130: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373134:
    // 0x373134: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x373134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_373138:
    // 0x373138: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x373138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_37313c:
    // 0x37313c: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x37313cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_373140:
    // 0x373140: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x373140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_373144:
    // 0x373144: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x373144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_373148:
    // 0x373148: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_37314c:
    if (ctx->pc == 0x37314Cu) {
        ctx->pc = 0x37314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373148u;
        // 0x37314c: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373150u;
        goto label_373150;
    }
    ctx->pc = 0x373148u;
    {
        const bool branch_taken_0x373148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373148u;
        // 0x37314c: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373148) {
            ctx->pc = 0x37318Cu;
            goto label_37318c;
        }
    }
    ctx->pc = 0x373150u;
label_373150:
    // 0x373150: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x373150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373154:
    // 0x373154: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x373154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_373158:
    // 0x373158: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x373158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37315c:
    // 0x37315c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x37315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373160:
    // 0x373160: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x373160u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_373164:
    // 0x373164: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x373164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373168:
    // 0x373168: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x373168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_37316c:
    // 0x37316c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x37316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373170:
    // 0x373170: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x373170u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_373174:
    // 0x373174: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x373174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_373178:
    // 0x373178: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37317c:
    // 0x37317c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373180:
    // 0x373180: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x373180u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_373184:
    // 0x373184: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_373188:
    if (ctx->pc == 0x373188u) {
        ctx->pc = 0x373188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373184u;
        // 0x373188: 0xe7a30088  swc1        $f3, 0x88($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37318Cu;
        goto label_37318c;
    }
    ctx->pc = 0x373184u;
    {
        const bool branch_taken_0x373184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373184u;
        // 0x373188: 0xe7a30088  swc1        $f3, 0x88($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373184) {
            ctx->pc = 0x373150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373150;
        }
    }
    ctx->pc = 0x37318Cu;
label_37318c:
    // 0x37318c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37318cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373190:
    // 0x373190: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x373190u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_373194:
    // 0x373194: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x373194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373198:
    // 0x373198: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x373198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37319c:
    // 0x37319c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x37319cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3731a0:
    // 0x3731a0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x3731a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_3731a4:
    // 0x3731a4: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x3731a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_3731a8:
    // 0x3731a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3731a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_3731ac:
    // 0x3731ac: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x3731acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_3731b0:
    // 0x3731b0: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x3731b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3731b4:
    // 0x3731b4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x3731b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3731b8:
    // 0x3731b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3731bc:
    if (ctx->pc == 0x3731BCu) {
        ctx->pc = 0x3731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731B8u;
        // 0x3731bc: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3731C0u;
        goto label_3731c0;
    }
    ctx->pc = 0x3731B8u;
    {
        const bool branch_taken_0x3731b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3731BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3731B8u;
        // 0x3731bc: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3731b8) {
            ctx->pc = 0x373238u;
            goto label_373238;
        }
    }
    ctx->pc = 0x3731C0u;
label_3731c0:
    // 0x3731c0: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x3731c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3731c4:
    // 0x3731c4: 0x0  nop
    ctx->pc = 0x3731c4u;
    // NOP
label_3731c8:
    // 0x3731c8: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x3731c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3731cc:
    // 0x3731cc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3731ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3731d0:
    // 0x3731d0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3731d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3731d4:
    // 0x3731d4: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3731d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3731d8:
    // 0x3731d8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3731d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3731dc:
    // 0x3731dc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3731dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3731e0:
    // 0x3731e0: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x3731e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3731e4:
    // 0x3731e4: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x3731e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3731e8:
    // 0x3731e8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3731e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3731ec:
    // 0x3731ec: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3731ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3731f0:
    // 0x3731f0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x3731f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3731f4:
    // 0x3731f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3731f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3731f8:
    // 0x3731f8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3731f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3731fc:
    // 0x3731fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3731fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_373200:
    // 0x373200: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x373200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_373204:
    // 0x373204: 0x0  nop
    ctx->pc = 0x373204u;
    // NOP
label_373208:
    // 0x373208: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_37320c:
    if (ctx->pc == 0x37320Cu) {
        ctx->pc = 0x37320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373208u;
        // 0x37320c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373210u;
        goto label_373210;
    }
    ctx->pc = 0x373208u;
    {
        const bool branch_taken_0x373208 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373208) {
            ctx->pc = 0x37320Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373208u;
            // 0x37320c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373230u;
            goto label_373230;
        }
    }
    ctx->pc = 0x373210u;
label_373210:
    // 0x373210: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x373210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_373214:
    // 0x373214: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x373214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_373218:
    // 0x373218: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x373218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_37321c:
    // 0x37321c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x37321cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_373220:
    // 0x373220: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x373220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373224:
    // 0x373224: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x373224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373228:
    // 0x373228: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x373228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_37322c:
    // 0x37322c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373230:
    // 0x373230: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_373234:
    if (ctx->pc == 0x373234u) {
        ctx->pc = 0x373234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373230u;
        // 0x373234: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373238u;
        goto label_373238;
    }
    ctx->pc = 0x373230u;
    {
        const bool branch_taken_0x373230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373230u;
        // 0x373234: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373230) {
            ctx->pc = 0x3731C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3731c8;
        }
    }
    ctx->pc = 0x373238u;
label_373238:
    // 0x373238: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x373238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37323c:
    // 0x37323c: 0x46000004  c1          0x4
    ctx->pc = 0x37323cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_373240:
    // 0x373240: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x373240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_373244:
    // 0x373244: 0x6ba90067  ldl         $t1, 0x67($sp)
    ctx->pc = 0x373244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_373248:
    // 0x373248: 0x6fa90060  ldr         $t1, 0x60($sp)
    ctx->pc = 0x373248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_37324c:
    // 0x37324c: 0x6ba2006f  ldl         $v0, 0x6F($sp)
    ctx->pc = 0x37324cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_373250:
    // 0x373250: 0x6fa20068  ldr         $v0, 0x68($sp)
    ctx->pc = 0x373250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_373254:
    // 0x373254: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x373254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_373258:
    // 0x373258: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x373258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_37325c:
    // 0x37325c: 0xb3a900d7  sdl         $t1, 0xD7($sp)
    ctx->pc = 0x37325cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373260:
    // 0x373260: 0xb7a900d0  sdr         $t1, 0xD0($sp)
    ctx->pc = 0x373260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373264:
    // 0x373264: 0xb3a200df  sdl         $v0, 0xDF($sp)
    ctx->pc = 0x373264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373268:
    // 0x373268: 0xb7a200d8  sdr         $v0, 0xD8($sp)
    ctx->pc = 0x373268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37326c:
    // 0x37326c: 0xb3a300e7  sdl         $v1, 0xE7($sp)
    ctx->pc = 0x37326cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373270:
    // 0x373270: 0xb7a300e0  sdr         $v1, 0xE0($sp)
    ctx->pc = 0x373270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373274:
    // 0x373274: 0x6ba60087  ldl         $a2, 0x87($sp)
    ctx->pc = 0x373274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_373278:
    // 0x373278: 0x6fa60080  ldr         $a2, 0x80($sp)
    ctx->pc = 0x373278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_37327c:
    // 0x37327c: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x37327cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_373280:
    // 0x373280: 0xb3a600f7  sdl         $a2, 0xF7($sp)
    ctx->pc = 0x373280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373284:
    // 0x373284: 0xb7a600f0  sdr         $a2, 0xF0($sp)
    ctx->pc = 0x373284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373288:
    // 0x373288: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x373288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_37328c:
    // 0x37328c: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x37328cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_373290:
    // 0x373290: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x373290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_373294:
    // 0x373294: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_373298:
    // 0x373298: 0xb3a20107  sdl         $v0, 0x107($sp)
    ctx->pc = 0x373298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37329c:
    // 0x37329c: 0xb7a20100  sdr         $v0, 0x100($sp)
    ctx->pc = 0x37329cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732a0:
    // 0x3732a0: 0xafa30108  sw          $v1, 0x108($sp)
    ctx->pc = 0x3732a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 3));
label_3732a4:
    // 0x3732a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3732a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3732a8:
    // 0x3732a8: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x3732a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_3732ac:
    // 0x3732ac: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x3732acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_3732b0:
    // 0x3732b0: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x3732b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3732b4:
    // 0x3732b4: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x3732b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_3732b8:
    // 0x3732b8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3732b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_3732bc:
    // 0x3732bc: 0x6ba800d7  ldl         $t0, 0xD7($sp)
    ctx->pc = 0x3732bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3732c0:
    // 0x3732c0: 0x6fa800d0  ldr         $t0, 0xD0($sp)
    ctx->pc = 0x3732c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3732c4:
    // 0x3732c4: 0x6ba900df  ldl         $t1, 0xDF($sp)
    ctx->pc = 0x3732c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3732c8:
    // 0x3732c8: 0x6fa900d8  ldr         $t1, 0xD8($sp)
    ctx->pc = 0x3732c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3732cc:
    // 0x3732cc: 0x6ba200e7  ldl         $v0, 0xE7($sp)
    ctx->pc = 0x3732ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3732d0:
    // 0x3732d0: 0x6fa200e0  ldr         $v0, 0xE0($sp)
    ctx->pc = 0x3732d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3732d4:
    // 0x3732d4: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x3732d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732d8:
    // 0x3732d8: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x3732d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732dc:
    // 0x3732dc: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x3732dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732e0:
    // 0x3732e0: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x3732e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732e4:
    // 0x3732e4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x3732e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732e8:
    // 0x3732e8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x3732e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732ec:
    // 0x3732ec: 0x6ba600f7  ldl         $a2, 0xF7($sp)
    ctx->pc = 0x3732ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3732f0:
    // 0x3732f0: 0x6fa600f0  ldr         $a2, 0xF0($sp)
    ctx->pc = 0x3732f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3732f4:
    // 0x3732f4: 0x8fa700f8  lw          $a3, 0xF8($sp)
    ctx->pc = 0x3732f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_3732f8:
    // 0x3732f8: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x3732f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3732fc:
    // 0x3732fc: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x3732fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373300:
    // 0x373300: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x373300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_373304:
    // 0x373304: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x373304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_373308:
    // 0x373308: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x373308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_37330c:
    // 0x37330c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37330cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_373310:
    // 0x373310: 0x6ba60107  ldl         $a2, 0x107($sp)
    ctx->pc = 0x373310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_373314:
    // 0x373314: 0x6fa60100  ldr         $a2, 0x100($sp)
    ctx->pc = 0x373314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_373318:
    // 0x373318: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x373318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_37331c:
    // 0x37331c: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x37331cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373320:
    // 0x373320: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x373320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373324:
    // 0x373324: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x373324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
label_373328:
    // 0x373328: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x373328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_37332c:
    // 0x37332c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373330:
    // 0x373330: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x373330u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_373334:
    // 0x373334: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x373334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_373338:
    // 0x373338: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x373338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_37333c:
    // 0x37333c: 0xafb6002c  sw          $s6, 0x2C($sp)
    ctx->pc = 0x37333cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 22));
label_373340:
    // 0x373340: 0xc0ddfdc  jal         func_377F70
label_373344:
    if (ctx->pc == 0x373344u) {
        ctx->pc = 0x373344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373340u;
        // 0x373344: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373348u;
        goto label_373348;
    }
    ctx->pc = 0x373340u;
    SET_GPR_U32(ctx, 31, 0x373348u);
    ctx->pc = 0x373344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373340u;
    // 0x373344: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F70u, 0x373340u, 0x373348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373348u;
label_373348:
    // 0x373348: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x373348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_37334c:
    // 0x37334c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_373350:
    if (ctx->pc == 0x373350u) {
        ctx->pc = 0x373350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37334Cu;
        // 0x373350: 0x8fa201bc  lw          $v0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373354u;
        goto label_373354;
    }
    ctx->pc = 0x37334Cu;
    {
        const bool branch_taken_0x37334c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37334Cu;
        // 0x373350: 0x8fa201bc  lw          $v0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37334c) {
            ctx->pc = 0x373360u;
            goto label_373360;
        }
    }
    ctx->pc = 0x373354u;
label_373354:
    // 0x373354: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x373354u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_373358:
    // 0x373358: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x373358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_37335c:
    // 0x37335c: 0x0  nop
    ctx->pc = 0x37335cu;
    // NOP
label_373360:
    // 0x373360: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x373360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_373364:
    // 0x373364: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x373364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_373368:
    // 0x373368: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x373368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
label_37336c:
    // 0x37336c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x37336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_373370:
    // 0x373370: 0x544000e1  bnel        $v0, $zero, . + 4 + (0xE1 << 2)
label_373374:
    if (ctx->pc == 0x373374u) {
        ctx->pc = 0x373374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373370u;
        // 0x373374: 0x8fb101d8  lw          $s1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373378u;
        goto label_373378;
    }
    ctx->pc = 0x373370u;
    {
        const bool branch_taken_0x373370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373370) {
            ctx->pc = 0x373374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373370u;
            // 0x373374: 0x8fb101d8  lw          $s1, 0x1D8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3736F8u;
            goto label_3736f8;
        }
    }
    ctx->pc = 0x373378u;
label_373378:
    // 0x373378: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x373378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_37337c:
    // 0x37337c: 0xafa001b0  sw          $zero, 0x1B0($sp)
    ctx->pc = 0x37337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 0));
label_373380:
    // 0x373380: 0x2a48021  addu        $s0, $s5, $a0
    ctx->pc = 0x373380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_373384:
    // 0x373384: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x373384u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_373388:
    // 0x373388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x373388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37338c:
    // 0x37338c: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x37338cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_373390:
    // 0x373390: 0xc0de06c  jal         func_3781B0
label_373394:
    if (ctx->pc == 0x373394u) {
        ctx->pc = 0x373394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373390u;
        // 0x373394: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373398u;
        goto label_373398;
    }
    ctx->pc = 0x373390u;
    SET_GPR_U32(ctx, 31, 0x373398u);
    ctx->pc = 0x373394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373390u;
    // 0x373394: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x373390u, 0x373398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373398u;
label_373398:
    // 0x373398: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x373398u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_37339c:
    // 0x37339c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3733a0:
    // 0x3733a0: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x3733a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_3733a4:
    // 0x3733a4: 0xb71818  mult        $v1, $a1, $s7
    ctx->pc = 0x3733a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3733a8:
    // 0x3733a8: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x3733a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_3733ac:
    // 0x3733ac: 0xc0de06c  jal         func_3781B0
label_3733b0:
    if (ctx->pc == 0x3733B0u) {
        ctx->pc = 0x3733B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733ACu;
        // 0x3733b0: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3733B4u;
        goto label_3733b4;
    }
    ctx->pc = 0x3733ACu;
    SET_GPR_U32(ctx, 31, 0x3733B4u);
    ctx->pc = 0x3733B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733ACu;
    // 0x3733b0: 0x722821  addu        $a1, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x3733ACu, 0x3733B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733B4u;
label_3733b4:
    // 0x3733b4: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x3733b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3733b8:
    // 0x3733b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3733b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3733bc:
    // 0x3733bc: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x3733bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3733c0:
    // 0x3733c0: 0xc0de06c  jal         func_3781B0
label_3733c4:
    if (ctx->pc == 0x3733C4u) {
        ctx->pc = 0x3733C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733C0u;
        // 0x3733c4: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3733C8u;
        goto label_3733c8;
    }
    ctx->pc = 0x3733C0u;
    SET_GPR_U32(ctx, 31, 0x3733C8u);
    ctx->pc = 0x3733C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733C0u;
    // 0x3733c4: 0x522821  addu        $a1, $v0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3781B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3781B0u, 0x3733C0u, 0x3733C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733C8u;
label_3733c8:
    // 0x3733c8: 0xc0dc888  jal         func_372220
label_3733cc:
    if (ctx->pc == 0x3733CCu) {
        ctx->pc = 0x3733CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733C8u;
        // 0x3733cc: 0x27a401b4  addiu       $a0, $sp, 0x1B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3733D0u;
        goto label_3733d0;
    }
    ctx->pc = 0x3733C8u;
    SET_GPR_U32(ctx, 31, 0x3733D0u);
    ctx->pc = 0x3733CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3733C8u;
    // 0x3733cc: 0x27a401b4  addiu       $a0, $sp, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372220u, 0x3733C8u, 0x3733D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3733D0u;
label_3733d0:
    // 0x3733d0: 0x8fa501b4  lw          $a1, 0x1B4($sp)
    ctx->pc = 0x3733d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_3733d4:
    // 0x3733d4: 0x10a000c7  beqz        $a1, . + 4 + (0xC7 << 2)
label_3733d8:
    if (ctx->pc == 0x3733D8u) {
        ctx->pc = 0x3733D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733D4u;
        // 0x3733d8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3733DCu;
        goto label_3733dc;
    }
    ctx->pc = 0x3733D4u;
    {
        const bool branch_taken_0x3733d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3733D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3733D4u;
        // 0x3733d8: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3733d4) {
            ctx->pc = 0x3736F4u;
            goto label_3736f4;
        }
    }
    ctx->pc = 0x3733DCu;
label_3733dc:
    // 0x3733dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3733dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3733e0:
    // 0x3733e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3733e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3733e4:
    // 0x3733e4: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x3733e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3733e8:
    // 0x3733e8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3733e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3733ec:
    // 0x3733ec: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3733ecu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3733f0:
    // 0x3733f0: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x3733f0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_3733f4:
    // 0x3733f4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3733f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3733f8:
    // 0x3733f8: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x3733f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3733fc:
    // 0x3733fc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3733fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_373400:
    // 0x373400: 0xe7a50114  swc1        $f5, 0x114($sp)
    ctx->pc = 0x373400u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_373404:
    // 0x373404: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x373404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_373408:
    // 0x373408: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x373408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37340c:
    // 0x37340c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x37340cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_373410:
    // 0x373410: 0xe7a40118  swc1        $f4, 0x118($sp)
    ctx->pc = 0x373410u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_373414:
    // 0x373414: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x373414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373418:
    // 0x373418: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x373418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37341c:
    // 0x37341c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x37341cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_373420:
    // 0x373420: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x373420u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_373424:
    // 0x373424: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x373424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373428:
    // 0x373428: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x373428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37342c:
    // 0x37342c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x37342cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_373430:
    // 0x373430: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x373430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_373434:
    // 0x373434: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x373434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373438:
    // 0x373438: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37343c:
    // 0x37343c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x37343cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_373440:
    // 0x373440: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x373440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_373444:
    // 0x373444: 0x46012802  mul.s       $f0, $f5, $f1
    ctx->pc = 0x373444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_373448:
    // 0x373448: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x373448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_37344c:
    // 0x37344c: 0x46033982  mul.s       $f6, $f7, $f3
    ctx->pc = 0x37344cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_373450:
    // 0x373450: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x373450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_373454:
    // 0x373454: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x373454u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_373458:
    // 0x373458: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x373458u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_37345c:
    // 0x37345c: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x37345cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_373460:
    // 0x373460: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x373460u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_373464:
    // 0x373464: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x373464u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_373468:
    // 0x373468: 0xe7a60138  swc1        $f6, 0x138($sp)
    ctx->pc = 0x373468u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_37346c:
    // 0x37346c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x37346cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_373470:
    // 0x373470: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x373470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_373474:
    // 0x373474: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x373474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_373478:
    // 0x373478: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x373478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_37347c:
    // 0x37347c: 0xe7a60068  swc1        $f6, 0x68($sp)
    ctx->pc = 0x37347cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_373480:
    // 0x373480: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x373480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373484:
    // 0x373484: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x373484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_373488:
    // 0x373488: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x373488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37348c:
    // 0x37348c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x37348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373490:
    // 0x373490: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x373490u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_373494:
    // 0x373494: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x373494u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_373498:
    // 0x373498: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x373498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_37349c:
    // 0x37349c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x37349cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
label_3734a0:
    // 0x3734a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3734a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3734a4:
    // 0x3734a4: 0xc104d24  jal         func_413490
label_3734a8:
    if (ctx->pc == 0x3734A8u) {
        ctx->pc = 0x3734A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734A4u;
        // 0x3734a8: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3734ACu;
        goto label_3734ac;
    }
    ctx->pc = 0x3734A4u;
    SET_GPR_U32(ctx, 31, 0x3734ACu);
    ctx->pc = 0x3734A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734A4u;
    // 0x3734a8: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3734A4u, 0x3734ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734ACu;
label_3734ac:
    // 0x3734ac: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x3734acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
label_3734b0:
    // 0x3734b0: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x3734b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_3734b4:
    // 0x3734b4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3734b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3734b8:
    // 0x3734b8: 0x27a301b8  addiu       $v1, $sp, 0x1B8
    ctx->pc = 0x3734b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
label_3734bc:
    // 0x3734bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3734bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3734c0:
    // 0x3734c0: 0x27a401bc  addiu       $a0, $sp, 0x1BC
    ctx->pc = 0x3734c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
label_3734c4:
    // 0x3734c4: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x3734c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3734c8:
    // 0x3734c8: 0xe7a101b8  swc1        $f1, 0x1B8($sp)
    ctx->pc = 0x3734c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_3734cc:
    // 0x3734cc: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3734ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3734d0:
    // 0x3734d0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x3734d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3734d4:
    // 0x3734d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_3734d8:
    if (ctx->pc == 0x3734D8u) {
        ctx->pc = 0x3734D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734D4u;
        // 0x3734d8: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3734DCu;
        goto label_3734dc;
    }
    ctx->pc = 0x3734D4u;
    {
        const bool branch_taken_0x3734d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3734D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734D4u;
        // 0x3734d8: 0xe7a10084  swc1        $f1, 0x84($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3734d4) {
            ctx->pc = 0x37351Cu;
            goto label_37351c;
        }
    }
    ctx->pc = 0x3734DCu;
label_3734dc:
    // 0x3734dc: 0x0  nop
    ctx->pc = 0x3734dcu;
    // NOP
label_3734e0:
    // 0x3734e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3734e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3734e4:
    // 0x3734e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3734e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3734e8:
    // 0x3734e8: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3734e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3734ec:
    // 0x3734ec: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x3734ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3734f0:
    // 0x3734f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3734f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3734f4:
    // 0x3734f4: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x3734f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3734f8:
    // 0x3734f8: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x3734f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3734fc:
    // 0x3734fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3734fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373500:
    // 0x373500: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x373500u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_373504:
    // 0x373504: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x373504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_373508:
    // 0x373508: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37350c:
    // 0x37350c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_373510:
    // 0x373510: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x373510u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_373514:
    // 0x373514: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_373518:
    if (ctx->pc == 0x373518u) {
        ctx->pc = 0x373518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373514u;
        // 0x373518: 0xe7a30088  swc1        $f3, 0x88($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x37351Cu;
        goto label_37351c;
    }
    ctx->pc = 0x373514u;
    {
        const bool branch_taken_0x373514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373514u;
        // 0x373518: 0xe7a30088  swc1        $f3, 0x88($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373514) {
            ctx->pc = 0x3734E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3734e0;
        }
    }
    ctx->pc = 0x37351Cu;
label_37351c:
    // 0x37351c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37351cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373520:
    // 0x373520: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x373520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_373524:
    // 0x373524: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x373524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373528:
    // 0x373528: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x373528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37352c:
    // 0x37352c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x37352cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373530:
    // 0x373530: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x373530u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_373534:
    // 0x373534: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x373534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_373538:
    // 0x373538: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x373538u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_37353c:
    // 0x37353c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x37353cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_373540:
    // 0x373540: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x373540u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_373544:
    // 0x373544: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x373544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_373548:
    // 0x373548: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_37354c:
    if (ctx->pc == 0x37354Cu) {
        ctx->pc = 0x37354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373548u;
        // 0x37354c: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373550u;
        goto label_373550;
    }
    ctx->pc = 0x373548u;
    {
        const bool branch_taken_0x373548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37354Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373548u;
        // 0x37354c: 0xe7a30084  swc1        $f3, 0x84($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373548) {
            ctx->pc = 0x3735C8u;
            goto label_3735c8;
        }
    }
    ctx->pc = 0x373550u;
label_373550:
    // 0x373550: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x373550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373554:
    // 0x373554: 0x0  nop
    ctx->pc = 0x373554u;
    // NOP
label_373558:
    // 0x373558: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x373558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37355c:
    // 0x37355c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x37355cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373560:
    // 0x373560: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x373560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373564:
    // 0x373564: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x373564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_373568:
    // 0x373568: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37356c:
    // 0x37356c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x37356cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_373570:
    // 0x373570: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x373570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373574:
    // 0x373574: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x373574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_373578:
    // 0x373578: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x373578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_37357c:
    // 0x37357c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x37357cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_373580:
    // 0x373580: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x373580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_373584:
    // 0x373584: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x373584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_373588:
    // 0x373588: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x373588u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37358c:
    // 0x37358c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37358cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_373590:
    // 0x373590: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x373590u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_373594:
    // 0x373594: 0x0  nop
    ctx->pc = 0x373594u;
    // NOP
label_373598:
    // 0x373598: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_37359c:
    if (ctx->pc == 0x37359Cu) {
        ctx->pc = 0x37359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373598u;
        // 0x37359c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3735A0u;
        goto label_3735a0;
    }
    ctx->pc = 0x373598u;
    {
        const bool branch_taken_0x373598 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373598) {
            ctx->pc = 0x37359Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373598u;
            // 0x37359c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3735C0u;
            goto label_3735c0;
        }
    }
    ctx->pc = 0x3735A0u;
label_3735a0:
    // 0x3735a0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3735a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3735a4:
    // 0x3735a4: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x3735a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3735a8:
    // 0x3735a8: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x3735a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3735ac:
    // 0x3735ac: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3735acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3735b0:
    // 0x3735b0: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x3735b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735b4:
    // 0x3735b4: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x3735b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735b8:
    // 0x3735b8: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x3735b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
label_3735bc:
    // 0x3735bc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3735bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3735c0:
    // 0x3735c0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_3735c4:
    if (ctx->pc == 0x3735C4u) {
        ctx->pc = 0x3735C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735C0u;
        // 0x3735c4: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3735C8u;
        goto label_3735c8;
    }
    ctx->pc = 0x3735C0u;
    {
        const bool branch_taken_0x3735c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3735C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3735C0u;
        // 0x3735c4: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3735c0) {
            ctx->pc = 0x373558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373558;
        }
    }
    ctx->pc = 0x3735C8u;
label_3735c8:
    // 0x3735c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3735c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3735cc:
    // 0x3735cc: 0x46000004  c1          0x4
    ctx->pc = 0x3735ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3735d0:
    // 0x3735d0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x3735d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3735d4:
    // 0x3735d4: 0x6ba90067  ldl         $t1, 0x67($sp)
    ctx->pc = 0x3735d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_3735d8:
    // 0x3735d8: 0x6fa90060  ldr         $t1, 0x60($sp)
    ctx->pc = 0x3735d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_3735dc:
    // 0x3735dc: 0x6ba2006f  ldl         $v0, 0x6F($sp)
    ctx->pc = 0x3735dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3735e0:
    // 0x3735e0: 0x6fa20068  ldr         $v0, 0x68($sp)
    ctx->pc = 0x3735e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3735e4:
    // 0x3735e4: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x3735e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3735e8:
    // 0x3735e8: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x3735e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3735ec:
    // 0x3735ec: 0xb3a90147  sdl         $t1, 0x147($sp)
    ctx->pc = 0x3735ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735f0:
    // 0x3735f0: 0xb7a90140  sdr         $t1, 0x140($sp)
    ctx->pc = 0x3735f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735f4:
    // 0x3735f4: 0xb3a2014f  sdl         $v0, 0x14F($sp)
    ctx->pc = 0x3735f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735f8:
    // 0x3735f8: 0xb7a20148  sdr         $v0, 0x148($sp)
    ctx->pc = 0x3735f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3735fc:
    // 0x3735fc: 0xb3a30157  sdl         $v1, 0x157($sp)
    ctx->pc = 0x3735fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373600:
    // 0x373600: 0xb7a30150  sdr         $v1, 0x150($sp)
    ctx->pc = 0x373600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373604:
    // 0x373604: 0x6ba60087  ldl         $a2, 0x87($sp)
    ctx->pc = 0x373604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_373608:
    // 0x373608: 0x6fa60080  ldr         $a2, 0x80($sp)
    ctx->pc = 0x373608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_37360c:
    // 0x37360c: 0x8fa70088  lw          $a3, 0x88($sp)
    ctx->pc = 0x37360cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_373610:
    // 0x373610: 0xb3a60167  sdl         $a2, 0x167($sp)
    ctx->pc = 0x373610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373614:
    // 0x373614: 0xb7a60160  sdr         $a2, 0x160($sp)
    ctx->pc = 0x373614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373618:
    // 0x373618: 0xafa70168  sw          $a3, 0x168($sp)
    ctx->pc = 0x373618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 7));
label_37361c:
    // 0x37361c: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x37361cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_373620:
    // 0x373620: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x373620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_373624:
    // 0x373624: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x373624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_373628:
    // 0x373628: 0xb3a20177  sdl         $v0, 0x177($sp)
    ctx->pc = 0x373628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37362c:
    // 0x37362c: 0xb7a20170  sdr         $v0, 0x170($sp)
    ctx->pc = 0x37362cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373630:
    // 0x373630: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x373630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_373634:
    // 0x373634: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x373634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_373638:
    // 0x373638: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x373638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_37363c:
    // 0x37363c: 0x8fa701d0  lw          $a3, 0x1D0($sp)
    ctx->pc = 0x37363cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_373640:
    // 0x373640: 0xc7a001b8  lwc1        $f0, 0x1B8($sp)
    ctx->pc = 0x373640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373644:
    // 0x373644: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x373644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_373648:
    // 0x373648: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x373648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_37364c:
    // 0x37364c: 0x6ba80147  ldl         $t0, 0x147($sp)
    ctx->pc = 0x37364cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_373650:
    // 0x373650: 0x6fa80140  ldr         $t0, 0x140($sp)
    ctx->pc = 0x373650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_373654:
    // 0x373654: 0x6ba9014f  ldl         $t1, 0x14F($sp)
    ctx->pc = 0x373654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_373658:
    // 0x373658: 0x6fa90148  ldr         $t1, 0x148($sp)
    ctx->pc = 0x373658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_37365c:
    // 0x37365c: 0x6ba20157  ldl         $v0, 0x157($sp)
    ctx->pc = 0x37365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_373660:
    // 0x373660: 0x6fa20150  ldr         $v0, 0x150($sp)
    ctx->pc = 0x373660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_373664:
    // 0x373664: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x373664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373668:
    // 0x373668: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x373668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37366c:
    // 0x37366c: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x37366cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373670:
    // 0x373670: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x373670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373674:
    // 0x373674: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x373674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373678:
    // 0x373678: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x373678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37367c:
    // 0x37367c: 0x6ba60167  ldl         $a2, 0x167($sp)
    ctx->pc = 0x37367cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_373680:
    // 0x373680: 0x6fa60160  ldr         $a2, 0x160($sp)
    ctx->pc = 0x373680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_373684:
    // 0x373684: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x373684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_373688:
    // 0x373688: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x373688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37368c:
    // 0x37368c: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x37368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373690:
    // 0x373690: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x373690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
label_373694:
    // 0x373694: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x373694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_373698:
    // 0x373698: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x373698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_37369c:
    // 0x37369c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x37369cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3736a0:
    // 0x3736a0: 0x6ba60177  ldl         $a2, 0x177($sp)
    ctx->pc = 0x3736a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3736a4:
    // 0x3736a4: 0x6fa60170  ldr         $a2, 0x170($sp)
    ctx->pc = 0x3736a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3736a8:
    // 0x3736a8: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x3736a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_3736ac:
    // 0x3736ac: 0xb3a6004f  sdl         $a2, 0x4F($sp)
    ctx->pc = 0x3736acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3736b0:
    // 0x3736b0: 0xb7a60048  sdr         $a2, 0x48($sp)
    ctx->pc = 0x3736b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3736b4:
    // 0x3736b4: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x3736b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
label_3736b8:
    // 0x3736b8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3736b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3736bc:
    // 0x3736bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3736bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3736c0:
    // 0x3736c0: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x3736c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3736c4:
    // 0x3736c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3736c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3736c8:
    // 0x3736c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3736c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_3736cc:
    // 0x3736cc: 0xafb6002c  sw          $s6, 0x2C($sp)
    ctx->pc = 0x3736ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 22));
label_3736d0:
    // 0x3736d0: 0xc0ddfdc  jal         func_377F70
label_3736d4:
    if (ctx->pc == 0x3736D4u) {
        ctx->pc = 0x3736D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736D0u;
        // 0x3736d4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3736D8u;
        goto label_3736d8;
    }
    ctx->pc = 0x3736D0u;
    SET_GPR_U32(ctx, 31, 0x3736D8u);
    ctx->pc = 0x3736D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3736D0u;
    // 0x3736d4: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F70u, 0x3736D0u, 0x3736D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3736D8u;
label_3736d8:
    // 0x3736d8: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3736d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3736dc:
    // 0x3736dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3736e0:
    if (ctx->pc == 0x3736E0u) {
        ctx->pc = 0x3736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736DCu;
        // 0x3736e0: 0x8fa201bc  lw          $v0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3736E4u;
        goto label_3736e4;
    }
    ctx->pc = 0x3736DCu;
    {
        const bool branch_taken_0x3736dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3736E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3736DCu;
        // 0x3736e0: 0x8fa201bc  lw          $v0, 0x1BC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3736dc) {
            ctx->pc = 0x3736F0u;
            goto label_3736f0;
        }
    }
    ctx->pc = 0x3736E4u;
label_3736e4:
    // 0x3736e4: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3736e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3736e8:
    // 0x3736e8: 0x8fa201bc  lw          $v0, 0x1BC($sp)
    ctx->pc = 0x3736e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_3736ec:
    // 0x3736ec: 0x0  nop
    ctx->pc = 0x3736ecu;
    // NOP
label_3736f0:
    // 0x3736f0: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x3736f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_3736f4:
    // 0x3736f4: 0x8fb101d8  lw          $s1, 0x1D8($sp)
    ctx->pc = 0x3736f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_3736f8:
    // 0x3736f8: 0x8fa301c4  lw          $v1, 0x1C4($sp)
    ctx->pc = 0x3736f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_3736fc:
    // 0x3736fc: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x3736fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_373700:
    // 0x373700: 0x1440fe21  bnez        $v0, . + 4 + (-0x1DF << 2)
label_373704:
    if (ctx->pc == 0x373704u) {
        ctx->pc = 0x373704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373700u;
        // 0x373704: 0x8fa401c0  lw          $a0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373708u;
        goto label_373708;
    }
    ctx->pc = 0x373700u;
    {
        const bool branch_taken_0x373700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373700u;
        // 0x373704: 0x8fa401c0  lw          $a0, 0x1C0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373700) {
            ctx->pc = 0x372F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372f88;
        }
    }
    ctx->pc = 0x373708u;
label_373708:
    // 0x373708: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x373708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_37370c:
    // 0x37370c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x37370cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_373710:
    // 0x373710: 0x28840002  slti        $a0, $a0, 0x2
    ctx->pc = 0x373710u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_373714:
    // 0x373714: 0xafa401d4  sw          $a0, 0x1D4($sp)
    ctx->pc = 0x373714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 4));
label_373718:
    // 0x373718: 0x8fa501d4  lw          $a1, 0x1D4($sp)
    ctx->pc = 0x373718u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_37371c:
    // 0x37371c: 0x0  nop
    ctx->pc = 0x37371cu;
    // NOP
label_373720:
    // 0x373720: 0x14a000ac  bnez        $a1, . + 4 + (0xAC << 2)
label_373724:
    if (ctx->pc == 0x373724u) {
        ctx->pc = 0x373724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373720u;
        // 0x373724: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373728u;
        goto label_373728;
    }
    ctx->pc = 0x373720u;
    {
        const bool branch_taken_0x373720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x373724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373720u;
        // 0x373724: 0x24750001  addiu       $s5, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373720) {
            ctx->pc = 0x3739D4u;
            goto label_3739d4;
        }
    }
    ctx->pc = 0x373728u;
label_373728:
    // 0x373728: 0x8e840024  lw          $a0, 0x24($s4)
    ctx->pc = 0x373728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_37372c:
    // 0x37372c: 0x508000aa  beql        $a0, $zero, . + 4 + (0xAA << 2)
label_373730:
    if (ctx->pc == 0x373730u) {
        ctx->pc = 0x373730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37372Cu;
        // 0x373730: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373734u;
        goto label_373734;
    }
    ctx->pc = 0x37372Cu;
    {
        const bool branch_taken_0x37372c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37372c) {
            ctx->pc = 0x373730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37372Cu;
            // 0x373730: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x373734u;
label_373734:
    // 0x373734: 0x13c00002  beqz        $fp, . + 4 + (0x2 << 2)
label_373738:
    if (ctx->pc == 0x373738u) {
        ctx->pc = 0x373738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373734u;
        // 0x373738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37373Cu;
        goto label_37373c;
    }
    ctx->pc = 0x373734u;
    {
        const bool branch_taken_0x373734 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x373738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373734u;
        // 0x373738: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373734) {
            ctx->pc = 0x373740u;
            goto label_373740;
        }
    }
    ctx->pc = 0x37373Cu;
label_37373c:
    // 0x37373c: 0x8fd00058  lw          $s0, 0x58($fp)
    ctx->pc = 0x37373cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
label_373740:
    // 0x373740: 0x520000a5  beql        $s0, $zero, . + 4 + (0xA5 << 2)
label_373744:
    if (ctx->pc == 0x373744u) {
        ctx->pc = 0x373744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373740u;
        // 0x373744: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373748u;
        goto label_373748;
    }
    ctx->pc = 0x373740u;
    {
        const bool branch_taken_0x373740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x373740) {
            ctx->pc = 0x373744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373740u;
            // 0x373744: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3739D8u;
            goto label_3739d8;
        }
    }
    ctx->pc = 0x373748u;
label_373748:
    // 0x373748: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x373748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_37374c:
    // 0x37374c: 0x0  nop
    ctx->pc = 0x37374cu;
    // NOP
label_373750:
    // 0x373750: 0x1220009d  beqz        $s1, . + 4 + (0x9D << 2)
label_373754:
    if (ctx->pc == 0x373754u) {
        ctx->pc = 0x373754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373750u;
        // 0x373754: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373758u;
        goto label_373758;
    }
    ctx->pc = 0x373750u;
    {
        const bool branch_taken_0x373750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x373754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373750u;
        // 0x373754: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373750) {
            ctx->pc = 0x3739C8u;
            goto label_3739c8;
        }
    }
    ctx->pc = 0x373758u;
label_373758:
    // 0x373758: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x373758u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_37375c:
    // 0x37375c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37375cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_373760:
    // 0x373760: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x373760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_373764:
    // 0x373764: 0x24d7e880  addiu       $s7, $a2, -0x1780
    ctx->pc = 0x373764u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961280));
label_373768:
    // 0x373768: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x373768u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_37376c:
    // 0x37376c: 0x0  nop
    ctx->pc = 0x37376cu;
    // NOP
label_373770:
    // 0x373770: 0x12110091  beq         $s0, $s1, . + 4 + (0x91 << 2)
label_373774:
    if (ctx->pc == 0x373774u) {
        ctx->pc = 0x373774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373770u;
        // 0x373774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373778u;
        goto label_373778;
    }
    ctx->pc = 0x373770u;
    {
        const bool branch_taken_0x373770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x373774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373770u;
        // 0x373774: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373770) {
            ctx->pc = 0x3739B8u;
            goto label_3739b8;
        }
    }
    ctx->pc = 0x373778u;
label_373778:
    // 0x373778: 0xc0dc932  jal         func_3724C8
label_37377c:
    if (ctx->pc == 0x37377Cu) {
        ctx->pc = 0x37377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373778u;
        // 0x37377c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373780u;
        goto label_373780;
    }
    ctx->pc = 0x373778u;
    SET_GPR_U32(ctx, 31, 0x373780u);
    ctx->pc = 0x37377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373778u;
    // 0x37377c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3724C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3724C8u, 0x373778u, 0x373780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373780u;
label_373780:
    // 0x373780: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_373784:
    if (ctx->pc == 0x373784u) {
        ctx->pc = 0x373784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373780u;
        // 0x373784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373788u;
        goto label_373788;
    }
    ctx->pc = 0x373780u;
    {
        const bool branch_taken_0x373780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x373784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373780u;
        // 0x373784: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373780) {
            ctx->pc = 0x3739B8u;
            goto label_3739b8;
        }
    }
    ctx->pc = 0x373788u;
label_373788:
    // 0x373788: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x373788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_37378c:
    // 0x37378c: 0x8ee2010c  lw          $v0, 0x10C($s7)
    ctx->pc = 0x37378cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 268)));
label_373790:
    // 0x373790: 0x40f809  jalr        $v0
label_373794:
    if (ctx->pc == 0x373794u) {
        ctx->pc = 0x373794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373790u;
        // 0x373794: 0xae630058  sw          $v1, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373798u;
        goto label_373798;
    }
    ctx->pc = 0x373790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x373798u);
        ctx->pc = 0x373794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373790u;
        // 0x373794: 0xae630058  sw          $v1, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373790u, 0x373798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x373798u;
label_373798:
    // 0x373798: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x373798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37379c:
    // 0x37379c: 0x8e710058  lw          $s1, 0x58($s3)
    ctx->pc = 0x37379cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3737a0:
    // 0x3737a0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3737a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3737a4:
    // 0x3737a4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3737a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3737a8:
    // 0x3737a8: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x3737a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3737ac:
    // 0x3737ac: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3737acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3737b0:
    // 0x3737b0: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3737b0u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3737b4:
    // 0x3737b4: 0xe7a70180  swc1        $f7, 0x180($sp)
    ctx->pc = 0x3737b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3737b8:
    // 0x3737b8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x3737b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3737bc:
    // 0x3737bc: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x3737bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3737c0:
    // 0x3737c0: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3737c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3737c4:
    // 0x3737c4: 0xe7a60184  swc1        $f6, 0x184($sp)
    ctx->pc = 0x3737c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3737c8:
    // 0x3737c8: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x3737c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3737cc:
    // 0x3737cc: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x3737ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3737d0:
    // 0x3737d0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3737d0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3737d4:
    // 0x3737d4: 0xe7a40188  swc1        $f4, 0x188($sp)
    ctx->pc = 0x3737d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3737d8:
    // 0x3737d8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3737d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3737dc:
    // 0x3737dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3737dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3737e0:
    // 0x3737e0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3737e0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3737e4:
    // 0x3737e4: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x3737e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_3737e8:
    // 0x3737e8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3737e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3737ec:
    // 0x3737ec: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3737ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3737f0:
    // 0x3737f0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3737f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3737f4:
    // 0x3737f4: 0xe7a30194  swc1        $f3, 0x194($sp)
    ctx->pc = 0x3737f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_3737f8:
    // 0x3737f8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3737f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3737fc:
    // 0x3737fc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3737fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373800:
    // 0x373800: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x373800u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_373804:
    // 0x373804: 0xe7a10198  swc1        $f1, 0x198($sp)
    ctx->pc = 0x373804u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_373808:
    // 0x373808: 0x46013142  mul.s       $f5, $f6, $f1
    ctx->pc = 0x373808u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_37380c:
    // 0x37380c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x37380cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_373810:
    // 0x373810: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x373810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_373814:
    // 0x373814: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x373814u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_373818:
    // 0x373818: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x373818u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_37381c:
    // 0x37381c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x37381cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_373820:
    // 0x373820: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x373820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_373824:
    // 0x373824: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x373824u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_373828:
    // 0x373828: 0x46042941  sub.s       $f5, $f5, $f4
    ctx->pc = 0x373828u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_37382c:
    // 0x37382c: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x37382cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_373830:
    // 0x373830: 0xe7a201a4  swc1        $f2, 0x1A4($sp)
    ctx->pc = 0x373830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_373834:
    // 0x373834: 0xe7a501a0  swc1        $f5, 0x1A0($sp)
    ctx->pc = 0x373834u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_373838:
    // 0x373838: 0xe6450000  swc1        $f5, 0x0($s2)
    ctx->pc = 0x373838u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_37383c:
    // 0x37383c: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x37383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373840:
    // 0x373840: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_373844:
    // 0x373844: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x373844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_373848:
    // 0x373848: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x373848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37384c:
    // 0x37384c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x37384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_373850:
    // 0x373850: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x373850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373854:
    // 0x373854: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x373854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373858:
    // 0x373858: 0xc7a101a0  lwc1        $f1, 0x1A0($sp)
    ctx->pc = 0x373858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37385c:
    // 0x37385c: 0xc7a201a4  lwc1        $f2, 0x1A4($sp)
    ctx->pc = 0x37385cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373860:
    // 0x373860: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x373860u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_373864:
    // 0x373864: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x373864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_373868:
    // 0x373868: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x373868u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_37386c:
    // 0x37386c: 0xc7a001a8  lwc1        $f0, 0x1A8($sp)
    ctx->pc = 0x37386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373870:
    // 0x373870: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x373870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_373874:
    // 0x373874: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x373874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_373878:
    // 0x373878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x373878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_37387c:
    // 0x37387c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x37387cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_373880:
    // 0x373880: 0xc104d24  jal         func_413490
label_373884:
    if (ctx->pc == 0x373884u) {
        ctx->pc = 0x373884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373880u;
        // 0x373884: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373888u;
        goto label_373888;
    }
    ctx->pc = 0x373880u;
    SET_GPR_U32(ctx, 31, 0x373888u);
    ctx->pc = 0x373884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373880u;
    // 0x373884: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x373880u, 0x373888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373888u;
label_373888:
    // 0x373888: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x373888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_37388c:
    // 0x37388c: 0x26030038  addiu       $v1, $s0, 0x38
    ctx->pc = 0x37388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_373890:
    // 0x373890: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x373890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373894:
    // 0x373894: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x373894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_373898:
    // 0x373898: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x373898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_37389c:
    // 0x37389c: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x37389cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_3738a0:
    // 0x3738a0: 0x26070048  addiu       $a3, $s0, 0x48
    ctx->pc = 0x3738a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_3738a4:
    // 0x3738a4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3738a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3738a8:
    // 0x3738a8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x3738a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_3738ac:
    // 0x3738ac: 0xe6010044  swc1        $f1, 0x44($s0)
    ctx->pc = 0x3738acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_3738b0:
    // 0x3738b0: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x3738b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_3738b4:
    // 0x3738b4: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x3738b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_3738b8:
    // 0x3738b8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3738bc:
    if (ctx->pc == 0x3738BCu) {
        ctx->pc = 0x3738BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738B8u;
        // 0x3738bc: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3738C0u;
        goto label_3738c0;
    }
    ctx->pc = 0x3738B8u;
    {
        const bool branch_taken_0x3738b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3738BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738B8u;
        // 0x3738bc: 0xe4610004  swc1        $f1, 0x4($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738b8) {
            ctx->pc = 0x3738FCu;
            goto label_3738fc;
        }
    }
    ctx->pc = 0x3738C0u;
label_3738c0:
    // 0x3738c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3738c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738c4:
    // 0x3738c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3738c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3738c8:
    // 0x3738c8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3738c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3738cc:
    // 0x3738cc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3738ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3738d0:
    // 0x3738d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3738d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3738d4:
    // 0x3738d4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3738d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3738d8:
    // 0x3738d8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x3738d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_3738dc:
    // 0x3738dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3738dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738e0:
    // 0x3738e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3738e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3738e4:
    // 0x3738e4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x3738e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3738e8:
    // 0x3738e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3738e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3738ec:
    // 0x3738ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3738ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3738f0:
    // 0x3738f0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3738f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3738f4:
    // 0x3738f4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3738f8:
    if (ctx->pc == 0x3738F8u) {
        ctx->pc = 0x3738F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738F4u;
        // 0x3738f8: 0xe4630008  swc1        $f3, 0x8($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3738FCu;
        goto label_3738fc;
    }
    ctx->pc = 0x3738F4u;
    {
        const bool branch_taken_0x3738f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3738F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3738F4u;
        // 0x3738f8: 0xe4630008  swc1        $f3, 0x8($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3738f4) {
            ctx->pc = 0x3738C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3738c0;
        }
    }
    ctx->pc = 0x3738FCu;
label_3738fc:
    // 0x3738fc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3738fcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_373900:
    // 0x373900: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x373900u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_373904:
    // 0x373904: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x373904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373908:
    // 0x373908: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x373908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37390c:
    // 0x37390c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x37390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_373910:
    // 0x373910: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x373910u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_373914:
    // 0x373914: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x373914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_373918:
    // 0x373918: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x373918u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_37391c:
    // 0x37391c: 0x460118c3  div.s       $f3, $f3, $f1
    ctx->pc = 0x37391cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[1]); }
label_373920:
    // 0x373920: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x373920u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_373924:
    // 0x373924: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x373924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_373928:
    // 0x373928: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_37392c:
    if (ctx->pc == 0x37392Cu) {
        ctx->pc = 0x37392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373928u;
        // 0x37392c: 0xe4630004  swc1        $f3, 0x4($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x373930u;
        goto label_373930;
    }
    ctx->pc = 0x373928u;
    {
        const bool branch_taken_0x373928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373928u;
        // 0x37392c: 0xe4630004  swc1        $f3, 0x4($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x373928) {
            ctx->pc = 0x3739A8u;
            goto label_3739a8;
        }
    }
    ctx->pc = 0x373930u;
label_373930:
    // 0x373930: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x373930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373934:
    // 0x373934: 0x0  nop
    ctx->pc = 0x373934u;
    // NOP
label_373938:
    // 0x373938: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x373938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_37393c:
    // 0x37393c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x37393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_373940:
    // 0x373940: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x373940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_373944:
    // 0x373944: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x373944u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_373948:
    // 0x373948: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x373948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37394c:
    // 0x37394c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x37394cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_373950:
    // 0x373950: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x373950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_373954:
    // 0x373954: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x373954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_373958:
    // 0x373958: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x373958u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_37395c:
    // 0x37395c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x37395cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_373960:
    // 0x373960: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x373960u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_373964:
    // 0x373964: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x373964u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_373968:
    // 0x373968: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x373968u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_37396c:
    // 0x37396c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x37396cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_373970:
    // 0x373970: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x373970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_373974:
    // 0x373974: 0x0  nop
    ctx->pc = 0x373974u;
    // NOP
label_373978:
    // 0x373978: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_37397c:
    if (ctx->pc == 0x37397Cu) {
        ctx->pc = 0x37397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373978u;
        // 0x37397c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373980u;
        goto label_373980;
    }
    ctx->pc = 0x373978u;
    {
        const bool branch_taken_0x373978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x373978) {
            ctx->pc = 0x37397Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373978u;
            // 0x37397c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3739A0u;
            goto label_3739a0;
        }
    }
    ctx->pc = 0x373980u;
label_373980:
    // 0x373980: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x373980u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_373984:
    // 0x373984: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x373984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_373988:
    // 0x373988: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x373988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_37398c:
    // 0x37398c: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x37398cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_373990:
    // 0x373990: 0xb0e80007  sdl         $t0, 0x7($a3)
    ctx->pc = 0x373990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_373994:
    // 0x373994: 0xb4e80000  sdr         $t0, 0x0($a3)
    ctx->pc = 0x373994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_373998:
    // 0x373998: 0xace90008  sw          $t1, 0x8($a3)
    ctx->pc = 0x373998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 9));
label_37399c:
    // 0x37399c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x37399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3739a0:
    // 0x3739a0: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
label_3739a4:
    if (ctx->pc == 0x3739A4u) {
        ctx->pc = 0x3739A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739A0u;
        // 0x3739a4: 0xc4630000  lwc1        $f3, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739A8u;
        goto label_3739a8;
    }
    ctx->pc = 0x3739A0u;
    {
        const bool branch_taken_0x3739a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3739a0) {
            ctx->pc = 0x3739A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3739A0u;
            // 0x3739a4: 0xc4630000  lwc1        $f3, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x373938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373938;
        }
    }
    ctx->pc = 0x3739A8u;
label_3739a8:
    // 0x3739a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3739a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3739ac:
    // 0x3739ac: 0x46000004  c1          0x4
    ctx->pc = 0x3739acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_3739b0:
    // 0x3739b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3739b4:
    if (ctx->pc == 0x3739B4u) {
        ctx->pc = 0x3739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739B0u;
        // 0x3739b4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739B8u;
        goto label_3739b8;
    }
    ctx->pc = 0x3739B0u;
    {
        const bool branch_taken_0x3739b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3739B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739B0u;
        // 0x3739b4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739b0) {
            ctx->pc = 0x3739C0u;
            goto label_3739c0;
        }
    }
    ctx->pc = 0x3739B8u;
label_3739b8:
    // 0x3739b8: 0x8e310058  lw          $s1, 0x58($s1)
    ctx->pc = 0x3739b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_3739bc:
    // 0x3739bc: 0x8e730058  lw          $s3, 0x58($s3)
    ctx->pc = 0x3739bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_3739c0:
    // 0x3739c0: 0x1620ff6b  bnez        $s1, . + 4 + (-0x95 << 2)
label_3739c4:
    if (ctx->pc == 0x3739C4u) {
        ctx->pc = 0x3739C8u;
        goto label_3739c8;
    }
    ctx->pc = 0x3739C0u;
    {
        const bool branch_taken_0x3739c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3739c0) {
            ctx->pc = 0x373770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373770;
        }
    }
    ctx->pc = 0x3739C8u;
label_3739c8:
    // 0x3739c8: 0x8e100058  lw          $s0, 0x58($s0)
    ctx->pc = 0x3739c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3739cc:
    // 0x3739cc: 0x5600ff60  bnel        $s0, $zero, . + 4 + (-0xA0 << 2)
label_3739d0:
    if (ctx->pc == 0x3739D0u) {
        ctx->pc = 0x3739D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739CCu;
        // 0x3739d0: 0x8e110058  lw          $s1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739D4u;
        goto label_3739d4;
    }
    ctx->pc = 0x3739CCu;
    {
        const bool branch_taken_0x3739cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3739cc) {
            ctx->pc = 0x3739D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3739CCu;
            // 0x3739d0: 0x8e110058  lw          $s1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373750;
        }
    }
    ctx->pc = 0x3739D4u;
label_3739d4:
    // 0x3739d4: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x3739d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3739d8:
    // 0x3739d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3739d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3739dc:
    // 0x3739dc: 0x1440ff50  bnez        $v0, . + 4 + (-0xB0 << 2)
label_3739e0:
    if (ctx->pc == 0x3739E0u) {
        ctx->pc = 0x3739E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739DCu;
        // 0x3739e0: 0x8fa501d4  lw          $a1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739E4u;
        goto label_3739e4;
    }
    ctx->pc = 0x3739DCu;
    {
        const bool branch_taken_0x3739dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3739E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739DCu;
        // 0x3739e0: 0x8fa501d4  lw          $a1, 0x1D4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739dc) {
            ctx->pc = 0x373720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373720;
        }
    }
    ctx->pc = 0x3739E4u;
label_3739e4:
    // 0x3739e4: 0x53c00007  beql        $fp, $zero, . + 4 + (0x7 << 2)
label_3739e8:
    if (ctx->pc == 0x3739E8u) {
        ctx->pc = 0x3739E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739E4u;
        // 0x3739e8: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739ECu;
        goto label_3739ec;
    }
    ctx->pc = 0x3739E4u;
    {
        const bool branch_taken_0x3739e4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x3739e4) {
            ctx->pc = 0x3739E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3739E4u;
            // 0x3739e8: 0x8e840024  lw          $a0, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A04u;
            goto label_373a04;
        }
    }
    ctx->pc = 0x3739ECu;
label_3739ec:
    // 0x3739ec: 0xc0ddfc4  jal         func_377F10
label_3739f0:
    if (ctx->pc == 0x3739F0u) {
        ctx->pc = 0x3739F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739ECu;
        // 0x3739f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3739F4u;
        goto label_3739f4;
    }
    ctx->pc = 0x3739ECu;
    SET_GPR_U32(ctx, 31, 0x3739F4u);
    ctx->pc = 0x3739F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739ECu;
    // 0x3739f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F10u, 0x3739ECu, 0x3739F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739F4u;
label_3739f4:
    // 0x3739f4: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x3739f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_3739f8:
    // 0x3739f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3739f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3739fc:
    // 0x3739fc: 0x10000007  b           . + 4 + (0x7 << 2)
label_373a00:
    if (ctx->pc == 0x373A00u) {
        ctx->pc = 0x373A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739FCu;
        // 0x373a00: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A04u;
        goto label_373a04;
    }
    ctx->pc = 0x3739FCu;
    {
        const bool branch_taken_0x3739fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739FCu;
        // 0x373a00: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739fc) {
            ctx->pc = 0x373A1Cu;
            goto label_373a1c;
        }
    }
    ctx->pc = 0x373A04u;
label_373a04:
    // 0x373a04: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_373a08:
    if (ctx->pc == 0x373A08u) {
        ctx->pc = 0x373A0Cu;
        goto label_373a0c;
    }
    ctx->pc = 0x373A04u;
    {
        const bool branch_taken_0x373a04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a04) {
            ctx->pc = 0x373A1Cu;
            goto label_373a1c;
        }
    }
    ctx->pc = 0x373A0Cu;
label_373a0c:
    // 0x373a0c: 0xc0ddfc4  jal         func_377F10
label_373a10:
    if (ctx->pc == 0x373A10u) {
        ctx->pc = 0x373A14u;
        goto label_373a14;
    }
    ctx->pc = 0x373A0Cu;
    SET_GPR_U32(ctx, 31, 0x373A14u);
    ctx->pc = 0x377F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377F10u, 0x373A0Cu, 0x373A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A14u;
label_373a14:
    // 0x373a14: 0x8fa801c8  lw          $t0, 0x1C8($sp)
    ctx->pc = 0x373a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_373a18:
    // 0x373a18: 0xad020018  sw          $v0, 0x18($t0)
    ctx->pc = 0x373a18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 2));
label_373a1c:
    // 0x373a1c: 0x53c00002  beql        $fp, $zero, . + 4 + (0x2 << 2)
label_373a20:
    if (ctx->pc == 0x373A20u) {
        ctx->pc = 0x373A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A1Cu;
        // 0x373a20: 0x8e900024  lw          $s0, 0x24($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A24u;
        goto label_373a24;
    }
    ctx->pc = 0x373A1Cu;
    {
        const bool branch_taken_0x373a1c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a1c) {
            ctx->pc = 0x373A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373A1Cu;
            // 0x373a20: 0x8e900024  lw          $s0, 0x24($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A28u;
            goto label_373a28;
        }
    }
    ctx->pc = 0x373A24u;
label_373a24:
    // 0x373a24: 0x8fd00058  lw          $s0, 0x58($fp)
    ctx->pc = 0x373a24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 88)));
label_373a28:
    // 0x373a28: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_373a2c:
    if (ctx->pc == 0x373A2Cu) {
        ctx->pc = 0x373A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A28u;
        // 0x373a2c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A30u;
        goto label_373a30;
    }
    ctx->pc = 0x373A28u;
    {
        const bool branch_taken_0x373a28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A28u;
        // 0x373a2c: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a28) {
            ctx->pc = 0x373A88u;
            goto label_373a88;
        }
    }
    ctx->pc = 0x373A30u;
label_373a30:
    // 0x373a30: 0x2452e880  addiu       $s2, $v0, -0x1780
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_373a34:
    // 0x373a34: 0x8e110058  lw          $s1, 0x58($s0)
    ctx->pc = 0x373a34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_373a38:
    // 0x373a38: 0xc0dc888  jal         func_372220
label_373a3c:
    if (ctx->pc == 0x373A3Cu) {
        ctx->pc = 0x373A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A38u;
        // 0x373a3c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A40u;
        goto label_373a40;
    }
    ctx->pc = 0x373A38u;
    SET_GPR_U32(ctx, 31, 0x373A40u);
    ctx->pc = 0x373A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373A38u;
    // 0x373a3c: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x372220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x372220u, 0x373A38u, 0x373A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373A40u;
label_373a40:
    // 0x373a40: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x373a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_373a44:
    // 0x373a44: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_373a48:
    if (ctx->pc == 0x373A48u) {
        ctx->pc = 0x373A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A44u;
        // 0x373a48: 0xafb001cc  sw          $s0, 0x1CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A4Cu;
        goto label_373a4c;
    }
    ctx->pc = 0x373A44u;
    {
        const bool branch_taken_0x373a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373a44) {
            ctx->pc = 0x373A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373A44u;
            // 0x373a48: 0xafb001cc  sw          $s0, 0x1CC($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A7Cu;
            goto label_373a7c;
        }
    }
    ctx->pc = 0x373A4Cu;
label_373a4c:
    // 0x373a4c: 0x8fa901cc  lw          $t1, 0x1CC($sp)
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_373a50:
    // 0x373a50: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_373a54:
    if (ctx->pc == 0x373A54u) {
        ctx->pc = 0x373A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A50u;
        // 0x373a54: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A58u;
        goto label_373a58;
    }
    ctx->pc = 0x373A50u;
    {
        const bool branch_taken_0x373a50 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A50u;
        // 0x373a54: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a50) {
            ctx->pc = 0x373A60u;
            goto label_373a60;
        }
    }
    ctx->pc = 0x373A58u;
label_373a58:
    // 0x373a58: 0x10000002  b           . + 4 + (0x2 << 2)
label_373a5c:
    if (ctx->pc == 0x373A5Cu) {
        ctx->pc = 0x373A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A58u;
        // 0x373a5c: 0xad220058  sw          $v0, 0x58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A60u;
        goto label_373a60;
    }
    ctx->pc = 0x373A58u;
    {
        const bool branch_taken_0x373a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A58u;
        // 0x373a5c: 0xad220058  sw          $v0, 0x58($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a58) {
            ctx->pc = 0x373A64u;
            goto label_373a64;
        }
    }
    ctx->pc = 0x373A60u;
label_373a60:
    // 0x373a60: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x373a60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_373a64:
    // 0x373a64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_373a68:
    // 0x373a68: 0x8e42010c  lw          $v0, 0x10C($s2)
    ctx->pc = 0x373a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_373a6c:
    // 0x373a6c: 0x40f809  jalr        $v0
label_373a70:
    if (ctx->pc == 0x373A70u) {
        ctx->pc = 0x373A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A6Cu;
        // 0x373a70: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A74u;
        goto label_373a74;
    }
    ctx->pc = 0x373A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x373A74u);
        ctx->pc = 0x373A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A6Cu;
        // 0x373a70: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A6Cu, 0x373A74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x373A74u;
label_373a74:
    // 0x373a74: 0x10000002  b           . + 4 + (0x2 << 2)
label_373a78:
    if (ctx->pc == 0x373A78u) {
        ctx->pc = 0x373A7Cu;
        goto label_373a7c;
    }
    ctx->pc = 0x373A74u;
    {
        const bool branch_taken_0x373a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a74) {
            ctx->pc = 0x373A80u;
            goto label_373a80;
        }
    }
    ctx->pc = 0x373A7Cu;
label_373a7c:
    // 0x373a7c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x373a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_373a80:
    // 0x373a80: 0x5620ffed  bnel        $s1, $zero, . + 4 + (-0x13 << 2)
label_373a84:
    if (ctx->pc == 0x373A84u) {
        ctx->pc = 0x373A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A80u;
        // 0x373a84: 0x8e110058  lw          $s1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A88u;
        goto label_373a88;
    }
    ctx->pc = 0x373A80u;
    {
        const bool branch_taken_0x373a80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x373a80) {
            ctx->pc = 0x373A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373A80u;
            // 0x373a84: 0x8e110058  lw          $s1, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373a38;
        }
    }
    ctx->pc = 0x373A88u;
label_373a88:
    // 0x373a88: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x373a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_373a8c:
    // 0x373a8c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x373a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_373a90:
    // 0x373a90: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_373a94:
    if (ctx->pc == 0x373A94u) {
        ctx->pc = 0x373A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A90u;
        // 0x373a94: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373A98u;
        goto label_373a98;
    }
    ctx->pc = 0x373A90u;
    {
        const bool branch_taken_0x373a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x373a90) {
            ctx->pc = 0x373A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373A90u;
            // 0x373a94: 0xac600010  sw          $zero, 0x10($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373A98u;
            goto label_373a98;
        }
    }
    ctx->pc = 0x373A98u;
label_373a98:
    // 0x373a98: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x373a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_373a9c:
    // 0x373a9c: 0x7bb00270  lq          $s0, 0x270($sp)
    ctx->pc = 0x373a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_373aa0:
    // 0x373aa0: 0x7bb10260  lq          $s1, 0x260($sp)
    ctx->pc = 0x373aa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_373aa4:
    // 0x373aa4: 0x7bb20250  lq          $s2, 0x250($sp)
    ctx->pc = 0x373aa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_373aa8:
    // 0x373aa8: 0x7bb30240  lq          $s3, 0x240($sp)
    ctx->pc = 0x373aa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_373aac:
    // 0x373aac: 0x7bb40230  lq          $s4, 0x230($sp)
    ctx->pc = 0x373aacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_373ab0:
    // 0x373ab0: 0x7bb50220  lq          $s5, 0x220($sp)
    ctx->pc = 0x373ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_373ab4:
    // 0x373ab4: 0x7bb60210  lq          $s6, 0x210($sp)
    ctx->pc = 0x373ab4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_373ab8:
    // 0x373ab8: 0x7bb70200  lq          $s7, 0x200($sp)
    ctx->pc = 0x373ab8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_373abc:
    // 0x373abc: 0x7bbe01f0  lq          $fp, 0x1F0($sp)
    ctx->pc = 0x373abcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_373ac0:
    // 0x373ac0: 0xdfbf01e0  ld          $ra, 0x1E0($sp)
    ctx->pc = 0x373ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 480)));
label_373ac4:
    // 0x373ac4: 0xc7b50288  lwc1        $f21, 0x288($sp)
    ctx->pc = 0x373ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_373ac8:
    // 0x373ac8: 0xc7b40280  lwc1        $f20, 0x280($sp)
    ctx->pc = 0x373ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_373acc:
    // 0x373acc: 0x3e00008  jr          $ra
label_373ad0:
    if (ctx->pc == 0x373AD0u) {
        ctx->pc = 0x373AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373ACCu;
        // 0x373ad0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x373AD4u;
        goto label_373ad4;
    }
    ctx->pc = 0x373ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373ACCu;
        // 0x373ad0: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373ACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373AD4u;
label_373ad4:
    // 0x373ad4: 0x0  nop
    ctx->pc = 0x373ad4u;
    // NOP
    ctx->pc = 0x373ad8u;
}
