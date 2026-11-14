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

// Function: sub_00448360
// Address: 0x448360 - 0x448ee0
void sub_00448360_0x448360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00448360_0x448360");
#endif

    switch (ctx->pc) {
        case 0x448360u: goto label_448360;
        case 0x448364u: goto label_448364;
        case 0x448368u: goto label_448368;
        case 0x44836cu: goto label_44836c;
        case 0x448370u: goto label_448370;
        case 0x448374u: goto label_448374;
        case 0x448378u: goto label_448378;
        case 0x44837cu: goto label_44837c;
        case 0x448380u: goto label_448380;
        case 0x448384u: goto label_448384;
        case 0x448388u: goto label_448388;
        case 0x44838cu: goto label_44838c;
        case 0x448390u: goto label_448390;
        case 0x448394u: goto label_448394;
        case 0x448398u: goto label_448398;
        case 0x44839cu: goto label_44839c;
        case 0x4483a0u: goto label_4483a0;
        case 0x4483a4u: goto label_4483a4;
        case 0x4483a8u: goto label_4483a8;
        case 0x4483acu: goto label_4483ac;
        case 0x4483b0u: goto label_4483b0;
        case 0x4483b4u: goto label_4483b4;
        case 0x4483b8u: goto label_4483b8;
        case 0x4483bcu: goto label_4483bc;
        case 0x4483c0u: goto label_4483c0;
        case 0x4483c4u: goto label_4483c4;
        case 0x4483c8u: goto label_4483c8;
        case 0x4483ccu: goto label_4483cc;
        case 0x4483d0u: goto label_4483d0;
        case 0x4483d4u: goto label_4483d4;
        case 0x4483d8u: goto label_4483d8;
        case 0x4483dcu: goto label_4483dc;
        case 0x4483e0u: goto label_4483e0;
        case 0x4483e4u: goto label_4483e4;
        case 0x4483e8u: goto label_4483e8;
        case 0x4483ecu: goto label_4483ec;
        case 0x4483f0u: goto label_4483f0;
        case 0x4483f4u: goto label_4483f4;
        case 0x4483f8u: goto label_4483f8;
        case 0x4483fcu: goto label_4483fc;
        case 0x448400u: goto label_448400;
        case 0x448404u: goto label_448404;
        case 0x448408u: goto label_448408;
        case 0x44840cu: goto label_44840c;
        case 0x448410u: goto label_448410;
        case 0x448414u: goto label_448414;
        case 0x448418u: goto label_448418;
        case 0x44841cu: goto label_44841c;
        case 0x448420u: goto label_448420;
        case 0x448424u: goto label_448424;
        case 0x448428u: goto label_448428;
        case 0x44842cu: goto label_44842c;
        case 0x448430u: goto label_448430;
        case 0x448434u: goto label_448434;
        case 0x448438u: goto label_448438;
        case 0x44843cu: goto label_44843c;
        case 0x448440u: goto label_448440;
        case 0x448444u: goto label_448444;
        case 0x448448u: goto label_448448;
        case 0x44844cu: goto label_44844c;
        case 0x448450u: goto label_448450;
        case 0x448454u: goto label_448454;
        case 0x448458u: goto label_448458;
        case 0x44845cu: goto label_44845c;
        case 0x448460u: goto label_448460;
        case 0x448464u: goto label_448464;
        case 0x448468u: goto label_448468;
        case 0x44846cu: goto label_44846c;
        case 0x448470u: goto label_448470;
        case 0x448474u: goto label_448474;
        case 0x448478u: goto label_448478;
        case 0x44847cu: goto label_44847c;
        case 0x448480u: goto label_448480;
        case 0x448484u: goto label_448484;
        case 0x448488u: goto label_448488;
        case 0x44848cu: goto label_44848c;
        case 0x448490u: goto label_448490;
        case 0x448494u: goto label_448494;
        case 0x448498u: goto label_448498;
        case 0x44849cu: goto label_44849c;
        case 0x4484a0u: goto label_4484a0;
        case 0x4484a4u: goto label_4484a4;
        case 0x4484a8u: goto label_4484a8;
        case 0x4484acu: goto label_4484ac;
        case 0x4484b0u: goto label_4484b0;
        case 0x4484b4u: goto label_4484b4;
        case 0x4484b8u: goto label_4484b8;
        case 0x4484bcu: goto label_4484bc;
        case 0x4484c0u: goto label_4484c0;
        case 0x4484c4u: goto label_4484c4;
        case 0x4484c8u: goto label_4484c8;
        case 0x4484ccu: goto label_4484cc;
        case 0x4484d0u: goto label_4484d0;
        case 0x4484d4u: goto label_4484d4;
        case 0x4484d8u: goto label_4484d8;
        case 0x4484dcu: goto label_4484dc;
        case 0x4484e0u: goto label_4484e0;
        case 0x4484e4u: goto label_4484e4;
        case 0x4484e8u: goto label_4484e8;
        case 0x4484ecu: goto label_4484ec;
        case 0x4484f0u: goto label_4484f0;
        case 0x4484f4u: goto label_4484f4;
        case 0x4484f8u: goto label_4484f8;
        case 0x4484fcu: goto label_4484fc;
        case 0x448500u: goto label_448500;
        case 0x448504u: goto label_448504;
        case 0x448508u: goto label_448508;
        case 0x44850cu: goto label_44850c;
        case 0x448510u: goto label_448510;
        case 0x448514u: goto label_448514;
        case 0x448518u: goto label_448518;
        case 0x44851cu: goto label_44851c;
        case 0x448520u: goto label_448520;
        case 0x448524u: goto label_448524;
        case 0x448528u: goto label_448528;
        case 0x44852cu: goto label_44852c;
        case 0x448530u: goto label_448530;
        case 0x448534u: goto label_448534;
        case 0x448538u: goto label_448538;
        case 0x44853cu: goto label_44853c;
        case 0x448540u: goto label_448540;
        case 0x448544u: goto label_448544;
        case 0x448548u: goto label_448548;
        case 0x44854cu: goto label_44854c;
        case 0x448550u: goto label_448550;
        case 0x448554u: goto label_448554;
        case 0x448558u: goto label_448558;
        case 0x44855cu: goto label_44855c;
        case 0x448560u: goto label_448560;
        case 0x448564u: goto label_448564;
        case 0x448568u: goto label_448568;
        case 0x44856cu: goto label_44856c;
        case 0x448570u: goto label_448570;
        case 0x448574u: goto label_448574;
        case 0x448578u: goto label_448578;
        case 0x44857cu: goto label_44857c;
        case 0x448580u: goto label_448580;
        case 0x448584u: goto label_448584;
        case 0x448588u: goto label_448588;
        case 0x44858cu: goto label_44858c;
        case 0x448590u: goto label_448590;
        case 0x448594u: goto label_448594;
        case 0x448598u: goto label_448598;
        case 0x44859cu: goto label_44859c;
        case 0x4485a0u: goto label_4485a0;
        case 0x4485a4u: goto label_4485a4;
        case 0x4485a8u: goto label_4485a8;
        case 0x4485acu: goto label_4485ac;
        case 0x4485b0u: goto label_4485b0;
        case 0x4485b4u: goto label_4485b4;
        case 0x4485b8u: goto label_4485b8;
        case 0x4485bcu: goto label_4485bc;
        case 0x4485c0u: goto label_4485c0;
        case 0x4485c4u: goto label_4485c4;
        case 0x4485c8u: goto label_4485c8;
        case 0x4485ccu: goto label_4485cc;
        case 0x4485d0u: goto label_4485d0;
        case 0x4485d4u: goto label_4485d4;
        case 0x4485d8u: goto label_4485d8;
        case 0x4485dcu: goto label_4485dc;
        case 0x4485e0u: goto label_4485e0;
        case 0x4485e4u: goto label_4485e4;
        case 0x4485e8u: goto label_4485e8;
        case 0x4485ecu: goto label_4485ec;
        case 0x4485f0u: goto label_4485f0;
        case 0x4485f4u: goto label_4485f4;
        case 0x4485f8u: goto label_4485f8;
        case 0x4485fcu: goto label_4485fc;
        case 0x448600u: goto label_448600;
        case 0x448604u: goto label_448604;
        case 0x448608u: goto label_448608;
        case 0x44860cu: goto label_44860c;
        case 0x448610u: goto label_448610;
        case 0x448614u: goto label_448614;
        case 0x448618u: goto label_448618;
        case 0x44861cu: goto label_44861c;
        case 0x448620u: goto label_448620;
        case 0x448624u: goto label_448624;
        case 0x448628u: goto label_448628;
        case 0x44862cu: goto label_44862c;
        case 0x448630u: goto label_448630;
        case 0x448634u: goto label_448634;
        case 0x448638u: goto label_448638;
        case 0x44863cu: goto label_44863c;
        case 0x448640u: goto label_448640;
        case 0x448644u: goto label_448644;
        case 0x448648u: goto label_448648;
        case 0x44864cu: goto label_44864c;
        case 0x448650u: goto label_448650;
        case 0x448654u: goto label_448654;
        case 0x448658u: goto label_448658;
        case 0x44865cu: goto label_44865c;
        case 0x448660u: goto label_448660;
        case 0x448664u: goto label_448664;
        case 0x448668u: goto label_448668;
        case 0x44866cu: goto label_44866c;
        case 0x448670u: goto label_448670;
        case 0x448674u: goto label_448674;
        case 0x448678u: goto label_448678;
        case 0x44867cu: goto label_44867c;
        case 0x448680u: goto label_448680;
        case 0x448684u: goto label_448684;
        case 0x448688u: goto label_448688;
        case 0x44868cu: goto label_44868c;
        case 0x448690u: goto label_448690;
        case 0x448694u: goto label_448694;
        case 0x448698u: goto label_448698;
        case 0x44869cu: goto label_44869c;
        case 0x4486a0u: goto label_4486a0;
        case 0x4486a4u: goto label_4486a4;
        case 0x4486a8u: goto label_4486a8;
        case 0x4486acu: goto label_4486ac;
        case 0x4486b0u: goto label_4486b0;
        case 0x4486b4u: goto label_4486b4;
        case 0x4486b8u: goto label_4486b8;
        case 0x4486bcu: goto label_4486bc;
        case 0x4486c0u: goto label_4486c0;
        case 0x4486c4u: goto label_4486c4;
        case 0x4486c8u: goto label_4486c8;
        case 0x4486ccu: goto label_4486cc;
        case 0x4486d0u: goto label_4486d0;
        case 0x4486d4u: goto label_4486d4;
        case 0x4486d8u: goto label_4486d8;
        case 0x4486dcu: goto label_4486dc;
        case 0x4486e0u: goto label_4486e0;
        case 0x4486e4u: goto label_4486e4;
        case 0x4486e8u: goto label_4486e8;
        case 0x4486ecu: goto label_4486ec;
        case 0x4486f0u: goto label_4486f0;
        case 0x4486f4u: goto label_4486f4;
        case 0x4486f8u: goto label_4486f8;
        case 0x4486fcu: goto label_4486fc;
        case 0x448700u: goto label_448700;
        case 0x448704u: goto label_448704;
        case 0x448708u: goto label_448708;
        case 0x44870cu: goto label_44870c;
        case 0x448710u: goto label_448710;
        case 0x448714u: goto label_448714;
        case 0x448718u: goto label_448718;
        case 0x44871cu: goto label_44871c;
        case 0x448720u: goto label_448720;
        case 0x448724u: goto label_448724;
        case 0x448728u: goto label_448728;
        case 0x44872cu: goto label_44872c;
        case 0x448730u: goto label_448730;
        case 0x448734u: goto label_448734;
        case 0x448738u: goto label_448738;
        case 0x44873cu: goto label_44873c;
        case 0x448740u: goto label_448740;
        case 0x448744u: goto label_448744;
        case 0x448748u: goto label_448748;
        case 0x44874cu: goto label_44874c;
        case 0x448750u: goto label_448750;
        case 0x448754u: goto label_448754;
        case 0x448758u: goto label_448758;
        case 0x44875cu: goto label_44875c;
        case 0x448760u: goto label_448760;
        case 0x448764u: goto label_448764;
        case 0x448768u: goto label_448768;
        case 0x44876cu: goto label_44876c;
        case 0x448770u: goto label_448770;
        case 0x448774u: goto label_448774;
        case 0x448778u: goto label_448778;
        case 0x44877cu: goto label_44877c;
        case 0x448780u: goto label_448780;
        case 0x448784u: goto label_448784;
        case 0x448788u: goto label_448788;
        case 0x44878cu: goto label_44878c;
        case 0x448790u: goto label_448790;
        case 0x448794u: goto label_448794;
        case 0x448798u: goto label_448798;
        case 0x44879cu: goto label_44879c;
        case 0x4487a0u: goto label_4487a0;
        case 0x4487a4u: goto label_4487a4;
        case 0x4487a8u: goto label_4487a8;
        case 0x4487acu: goto label_4487ac;
        case 0x4487b0u: goto label_4487b0;
        case 0x4487b4u: goto label_4487b4;
        case 0x4487b8u: goto label_4487b8;
        case 0x4487bcu: goto label_4487bc;
        case 0x4487c0u: goto label_4487c0;
        case 0x4487c4u: goto label_4487c4;
        case 0x4487c8u: goto label_4487c8;
        case 0x4487ccu: goto label_4487cc;
        case 0x4487d0u: goto label_4487d0;
        case 0x4487d4u: goto label_4487d4;
        case 0x4487d8u: goto label_4487d8;
        case 0x4487dcu: goto label_4487dc;
        case 0x4487e0u: goto label_4487e0;
        case 0x4487e4u: goto label_4487e4;
        case 0x4487e8u: goto label_4487e8;
        case 0x4487ecu: goto label_4487ec;
        case 0x4487f0u: goto label_4487f0;
        case 0x4487f4u: goto label_4487f4;
        case 0x4487f8u: goto label_4487f8;
        case 0x4487fcu: goto label_4487fc;
        case 0x448800u: goto label_448800;
        case 0x448804u: goto label_448804;
        case 0x448808u: goto label_448808;
        case 0x44880cu: goto label_44880c;
        case 0x448810u: goto label_448810;
        case 0x448814u: goto label_448814;
        case 0x448818u: goto label_448818;
        case 0x44881cu: goto label_44881c;
        case 0x448820u: goto label_448820;
        case 0x448824u: goto label_448824;
        case 0x448828u: goto label_448828;
        case 0x44882cu: goto label_44882c;
        case 0x448830u: goto label_448830;
        case 0x448834u: goto label_448834;
        case 0x448838u: goto label_448838;
        case 0x44883cu: goto label_44883c;
        case 0x448840u: goto label_448840;
        case 0x448844u: goto label_448844;
        case 0x448848u: goto label_448848;
        case 0x44884cu: goto label_44884c;
        case 0x448850u: goto label_448850;
        case 0x448854u: goto label_448854;
        case 0x448858u: goto label_448858;
        case 0x44885cu: goto label_44885c;
        case 0x448860u: goto label_448860;
        case 0x448864u: goto label_448864;
        case 0x448868u: goto label_448868;
        case 0x44886cu: goto label_44886c;
        case 0x448870u: goto label_448870;
        case 0x448874u: goto label_448874;
        case 0x448878u: goto label_448878;
        case 0x44887cu: goto label_44887c;
        case 0x448880u: goto label_448880;
        case 0x448884u: goto label_448884;
        case 0x448888u: goto label_448888;
        case 0x44888cu: goto label_44888c;
        case 0x448890u: goto label_448890;
        case 0x448894u: goto label_448894;
        case 0x448898u: goto label_448898;
        case 0x44889cu: goto label_44889c;
        case 0x4488a0u: goto label_4488a0;
        case 0x4488a4u: goto label_4488a4;
        case 0x4488a8u: goto label_4488a8;
        case 0x4488acu: goto label_4488ac;
        case 0x4488b0u: goto label_4488b0;
        case 0x4488b4u: goto label_4488b4;
        case 0x4488b8u: goto label_4488b8;
        case 0x4488bcu: goto label_4488bc;
        case 0x4488c0u: goto label_4488c0;
        case 0x4488c4u: goto label_4488c4;
        case 0x4488c8u: goto label_4488c8;
        case 0x4488ccu: goto label_4488cc;
        case 0x4488d0u: goto label_4488d0;
        case 0x4488d4u: goto label_4488d4;
        case 0x4488d8u: goto label_4488d8;
        case 0x4488dcu: goto label_4488dc;
        case 0x4488e0u: goto label_4488e0;
        case 0x4488e4u: goto label_4488e4;
        case 0x4488e8u: goto label_4488e8;
        case 0x4488ecu: goto label_4488ec;
        case 0x4488f0u: goto label_4488f0;
        case 0x4488f4u: goto label_4488f4;
        case 0x4488f8u: goto label_4488f8;
        case 0x4488fcu: goto label_4488fc;
        case 0x448900u: goto label_448900;
        case 0x448904u: goto label_448904;
        case 0x448908u: goto label_448908;
        case 0x44890cu: goto label_44890c;
        case 0x448910u: goto label_448910;
        case 0x448914u: goto label_448914;
        case 0x448918u: goto label_448918;
        case 0x44891cu: goto label_44891c;
        case 0x448920u: goto label_448920;
        case 0x448924u: goto label_448924;
        case 0x448928u: goto label_448928;
        case 0x44892cu: goto label_44892c;
        case 0x448930u: goto label_448930;
        case 0x448934u: goto label_448934;
        case 0x448938u: goto label_448938;
        case 0x44893cu: goto label_44893c;
        case 0x448940u: goto label_448940;
        case 0x448944u: goto label_448944;
        case 0x448948u: goto label_448948;
        case 0x44894cu: goto label_44894c;
        case 0x448950u: goto label_448950;
        case 0x448954u: goto label_448954;
        case 0x448958u: goto label_448958;
        case 0x44895cu: goto label_44895c;
        case 0x448960u: goto label_448960;
        case 0x448964u: goto label_448964;
        case 0x448968u: goto label_448968;
        case 0x44896cu: goto label_44896c;
        case 0x448970u: goto label_448970;
        case 0x448974u: goto label_448974;
        case 0x448978u: goto label_448978;
        case 0x44897cu: goto label_44897c;
        case 0x448980u: goto label_448980;
        case 0x448984u: goto label_448984;
        case 0x448988u: goto label_448988;
        case 0x44898cu: goto label_44898c;
        case 0x448990u: goto label_448990;
        case 0x448994u: goto label_448994;
        case 0x448998u: goto label_448998;
        case 0x44899cu: goto label_44899c;
        case 0x4489a0u: goto label_4489a0;
        case 0x4489a4u: goto label_4489a4;
        case 0x4489a8u: goto label_4489a8;
        case 0x4489acu: goto label_4489ac;
        case 0x4489b0u: goto label_4489b0;
        case 0x4489b4u: goto label_4489b4;
        case 0x4489b8u: goto label_4489b8;
        case 0x4489bcu: goto label_4489bc;
        case 0x4489c0u: goto label_4489c0;
        case 0x4489c4u: goto label_4489c4;
        case 0x4489c8u: goto label_4489c8;
        case 0x4489ccu: goto label_4489cc;
        case 0x4489d0u: goto label_4489d0;
        case 0x4489d4u: goto label_4489d4;
        case 0x4489d8u: goto label_4489d8;
        case 0x4489dcu: goto label_4489dc;
        case 0x4489e0u: goto label_4489e0;
        case 0x4489e4u: goto label_4489e4;
        case 0x4489e8u: goto label_4489e8;
        case 0x4489ecu: goto label_4489ec;
        case 0x4489f0u: goto label_4489f0;
        case 0x4489f4u: goto label_4489f4;
        case 0x4489f8u: goto label_4489f8;
        case 0x4489fcu: goto label_4489fc;
        case 0x448a00u: goto label_448a00;
        case 0x448a04u: goto label_448a04;
        case 0x448a08u: goto label_448a08;
        case 0x448a0cu: goto label_448a0c;
        case 0x448a10u: goto label_448a10;
        case 0x448a14u: goto label_448a14;
        case 0x448a18u: goto label_448a18;
        case 0x448a1cu: goto label_448a1c;
        case 0x448a20u: goto label_448a20;
        case 0x448a24u: goto label_448a24;
        case 0x448a28u: goto label_448a28;
        case 0x448a2cu: goto label_448a2c;
        case 0x448a30u: goto label_448a30;
        case 0x448a34u: goto label_448a34;
        case 0x448a38u: goto label_448a38;
        case 0x448a3cu: goto label_448a3c;
        case 0x448a40u: goto label_448a40;
        case 0x448a44u: goto label_448a44;
        case 0x448a48u: goto label_448a48;
        case 0x448a4cu: goto label_448a4c;
        case 0x448a50u: goto label_448a50;
        case 0x448a54u: goto label_448a54;
        case 0x448a58u: goto label_448a58;
        case 0x448a5cu: goto label_448a5c;
        case 0x448a60u: goto label_448a60;
        case 0x448a64u: goto label_448a64;
        case 0x448a68u: goto label_448a68;
        case 0x448a6cu: goto label_448a6c;
        case 0x448a70u: goto label_448a70;
        case 0x448a74u: goto label_448a74;
        case 0x448a78u: goto label_448a78;
        case 0x448a7cu: goto label_448a7c;
        case 0x448a80u: goto label_448a80;
        case 0x448a84u: goto label_448a84;
        case 0x448a88u: goto label_448a88;
        case 0x448a8cu: goto label_448a8c;
        case 0x448a90u: goto label_448a90;
        case 0x448a94u: goto label_448a94;
        case 0x448a98u: goto label_448a98;
        case 0x448a9cu: goto label_448a9c;
        case 0x448aa0u: goto label_448aa0;
        case 0x448aa4u: goto label_448aa4;
        case 0x448aa8u: goto label_448aa8;
        case 0x448aacu: goto label_448aac;
        case 0x448ab0u: goto label_448ab0;
        case 0x448ab4u: goto label_448ab4;
        case 0x448ab8u: goto label_448ab8;
        case 0x448abcu: goto label_448abc;
        case 0x448ac0u: goto label_448ac0;
        case 0x448ac4u: goto label_448ac4;
        case 0x448ac8u: goto label_448ac8;
        case 0x448accu: goto label_448acc;
        case 0x448ad0u: goto label_448ad0;
        case 0x448ad4u: goto label_448ad4;
        case 0x448ad8u: goto label_448ad8;
        case 0x448adcu: goto label_448adc;
        case 0x448ae0u: goto label_448ae0;
        case 0x448ae4u: goto label_448ae4;
        case 0x448ae8u: goto label_448ae8;
        case 0x448aecu: goto label_448aec;
        case 0x448af0u: goto label_448af0;
        case 0x448af4u: goto label_448af4;
        case 0x448af8u: goto label_448af8;
        case 0x448afcu: goto label_448afc;
        case 0x448b00u: goto label_448b00;
        case 0x448b04u: goto label_448b04;
        case 0x448b08u: goto label_448b08;
        case 0x448b0cu: goto label_448b0c;
        case 0x448b10u: goto label_448b10;
        case 0x448b14u: goto label_448b14;
        case 0x448b18u: goto label_448b18;
        case 0x448b1cu: goto label_448b1c;
        case 0x448b20u: goto label_448b20;
        case 0x448b24u: goto label_448b24;
        case 0x448b28u: goto label_448b28;
        case 0x448b2cu: goto label_448b2c;
        case 0x448b30u: goto label_448b30;
        case 0x448b34u: goto label_448b34;
        case 0x448b38u: goto label_448b38;
        case 0x448b3cu: goto label_448b3c;
        case 0x448b40u: goto label_448b40;
        case 0x448b44u: goto label_448b44;
        case 0x448b48u: goto label_448b48;
        case 0x448b4cu: goto label_448b4c;
        case 0x448b50u: goto label_448b50;
        case 0x448b54u: goto label_448b54;
        case 0x448b58u: goto label_448b58;
        case 0x448b5cu: goto label_448b5c;
        case 0x448b60u: goto label_448b60;
        case 0x448b64u: goto label_448b64;
        case 0x448b68u: goto label_448b68;
        case 0x448b6cu: goto label_448b6c;
        case 0x448b70u: goto label_448b70;
        case 0x448b74u: goto label_448b74;
        case 0x448b78u: goto label_448b78;
        case 0x448b7cu: goto label_448b7c;
        case 0x448b80u: goto label_448b80;
        case 0x448b84u: goto label_448b84;
        case 0x448b88u: goto label_448b88;
        case 0x448b8cu: goto label_448b8c;
        case 0x448b90u: goto label_448b90;
        case 0x448b94u: goto label_448b94;
        case 0x448b98u: goto label_448b98;
        case 0x448b9cu: goto label_448b9c;
        case 0x448ba0u: goto label_448ba0;
        case 0x448ba4u: goto label_448ba4;
        case 0x448ba8u: goto label_448ba8;
        case 0x448bacu: goto label_448bac;
        case 0x448bb0u: goto label_448bb0;
        case 0x448bb4u: goto label_448bb4;
        case 0x448bb8u: goto label_448bb8;
        case 0x448bbcu: goto label_448bbc;
        case 0x448bc0u: goto label_448bc0;
        case 0x448bc4u: goto label_448bc4;
        case 0x448bc8u: goto label_448bc8;
        case 0x448bccu: goto label_448bcc;
        case 0x448bd0u: goto label_448bd0;
        case 0x448bd4u: goto label_448bd4;
        case 0x448bd8u: goto label_448bd8;
        case 0x448bdcu: goto label_448bdc;
        case 0x448be0u: goto label_448be0;
        case 0x448be4u: goto label_448be4;
        case 0x448be8u: goto label_448be8;
        case 0x448becu: goto label_448bec;
        case 0x448bf0u: goto label_448bf0;
        case 0x448bf4u: goto label_448bf4;
        case 0x448bf8u: goto label_448bf8;
        case 0x448bfcu: goto label_448bfc;
        case 0x448c00u: goto label_448c00;
        case 0x448c04u: goto label_448c04;
        case 0x448c08u: goto label_448c08;
        case 0x448c0cu: goto label_448c0c;
        case 0x448c10u: goto label_448c10;
        case 0x448c14u: goto label_448c14;
        case 0x448c18u: goto label_448c18;
        case 0x448c1cu: goto label_448c1c;
        case 0x448c20u: goto label_448c20;
        case 0x448c24u: goto label_448c24;
        case 0x448c28u: goto label_448c28;
        case 0x448c2cu: goto label_448c2c;
        case 0x448c30u: goto label_448c30;
        case 0x448c34u: goto label_448c34;
        case 0x448c38u: goto label_448c38;
        case 0x448c3cu: goto label_448c3c;
        case 0x448c40u: goto label_448c40;
        case 0x448c44u: goto label_448c44;
        case 0x448c48u: goto label_448c48;
        case 0x448c4cu: goto label_448c4c;
        case 0x448c50u: goto label_448c50;
        case 0x448c54u: goto label_448c54;
        case 0x448c58u: goto label_448c58;
        case 0x448c5cu: goto label_448c5c;
        case 0x448c60u: goto label_448c60;
        case 0x448c64u: goto label_448c64;
        case 0x448c68u: goto label_448c68;
        case 0x448c6cu: goto label_448c6c;
        case 0x448c70u: goto label_448c70;
        case 0x448c74u: goto label_448c74;
        case 0x448c78u: goto label_448c78;
        case 0x448c7cu: goto label_448c7c;
        case 0x448c80u: goto label_448c80;
        case 0x448c84u: goto label_448c84;
        case 0x448c88u: goto label_448c88;
        case 0x448c8cu: goto label_448c8c;
        case 0x448c90u: goto label_448c90;
        case 0x448c94u: goto label_448c94;
        case 0x448c98u: goto label_448c98;
        case 0x448c9cu: goto label_448c9c;
        case 0x448ca0u: goto label_448ca0;
        case 0x448ca4u: goto label_448ca4;
        case 0x448ca8u: goto label_448ca8;
        case 0x448cacu: goto label_448cac;
        case 0x448cb0u: goto label_448cb0;
        case 0x448cb4u: goto label_448cb4;
        case 0x448cb8u: goto label_448cb8;
        case 0x448cbcu: goto label_448cbc;
        case 0x448cc0u: goto label_448cc0;
        case 0x448cc4u: goto label_448cc4;
        case 0x448cc8u: goto label_448cc8;
        case 0x448cccu: goto label_448ccc;
        case 0x448cd0u: goto label_448cd0;
        case 0x448cd4u: goto label_448cd4;
        case 0x448cd8u: goto label_448cd8;
        case 0x448cdcu: goto label_448cdc;
        case 0x448ce0u: goto label_448ce0;
        case 0x448ce4u: goto label_448ce4;
        case 0x448ce8u: goto label_448ce8;
        case 0x448cecu: goto label_448cec;
        case 0x448cf0u: goto label_448cf0;
        case 0x448cf4u: goto label_448cf4;
        case 0x448cf8u: goto label_448cf8;
        case 0x448cfcu: goto label_448cfc;
        case 0x448d00u: goto label_448d00;
        case 0x448d04u: goto label_448d04;
        case 0x448d08u: goto label_448d08;
        case 0x448d0cu: goto label_448d0c;
        case 0x448d10u: goto label_448d10;
        case 0x448d14u: goto label_448d14;
        case 0x448d18u: goto label_448d18;
        case 0x448d1cu: goto label_448d1c;
        case 0x448d20u: goto label_448d20;
        case 0x448d24u: goto label_448d24;
        case 0x448d28u: goto label_448d28;
        case 0x448d2cu: goto label_448d2c;
        case 0x448d30u: goto label_448d30;
        case 0x448d34u: goto label_448d34;
        case 0x448d38u: goto label_448d38;
        case 0x448d3cu: goto label_448d3c;
        case 0x448d40u: goto label_448d40;
        case 0x448d44u: goto label_448d44;
        case 0x448d48u: goto label_448d48;
        case 0x448d4cu: goto label_448d4c;
        case 0x448d50u: goto label_448d50;
        case 0x448d54u: goto label_448d54;
        case 0x448d58u: goto label_448d58;
        case 0x448d5cu: goto label_448d5c;
        case 0x448d60u: goto label_448d60;
        case 0x448d64u: goto label_448d64;
        case 0x448d68u: goto label_448d68;
        case 0x448d6cu: goto label_448d6c;
        case 0x448d70u: goto label_448d70;
        case 0x448d74u: goto label_448d74;
        case 0x448d78u: goto label_448d78;
        case 0x448d7cu: goto label_448d7c;
        case 0x448d80u: goto label_448d80;
        case 0x448d84u: goto label_448d84;
        case 0x448d88u: goto label_448d88;
        case 0x448d8cu: goto label_448d8c;
        case 0x448d90u: goto label_448d90;
        case 0x448d94u: goto label_448d94;
        case 0x448d98u: goto label_448d98;
        case 0x448d9cu: goto label_448d9c;
        case 0x448da0u: goto label_448da0;
        case 0x448da4u: goto label_448da4;
        case 0x448da8u: goto label_448da8;
        case 0x448dacu: goto label_448dac;
        case 0x448db0u: goto label_448db0;
        case 0x448db4u: goto label_448db4;
        case 0x448db8u: goto label_448db8;
        case 0x448dbcu: goto label_448dbc;
        case 0x448dc0u: goto label_448dc0;
        case 0x448dc4u: goto label_448dc4;
        case 0x448dc8u: goto label_448dc8;
        case 0x448dccu: goto label_448dcc;
        case 0x448dd0u: goto label_448dd0;
        case 0x448dd4u: goto label_448dd4;
        case 0x448dd8u: goto label_448dd8;
        case 0x448ddcu: goto label_448ddc;
        case 0x448de0u: goto label_448de0;
        case 0x448de4u: goto label_448de4;
        case 0x448de8u: goto label_448de8;
        case 0x448decu: goto label_448dec;
        case 0x448df0u: goto label_448df0;
        case 0x448df4u: goto label_448df4;
        case 0x448df8u: goto label_448df8;
        case 0x448dfcu: goto label_448dfc;
        case 0x448e00u: goto label_448e00;
        case 0x448e04u: goto label_448e04;
        case 0x448e08u: goto label_448e08;
        case 0x448e0cu: goto label_448e0c;
        case 0x448e10u: goto label_448e10;
        case 0x448e14u: goto label_448e14;
        case 0x448e18u: goto label_448e18;
        case 0x448e1cu: goto label_448e1c;
        case 0x448e20u: goto label_448e20;
        case 0x448e24u: goto label_448e24;
        case 0x448e28u: goto label_448e28;
        case 0x448e2cu: goto label_448e2c;
        case 0x448e30u: goto label_448e30;
        case 0x448e34u: goto label_448e34;
        case 0x448e38u: goto label_448e38;
        case 0x448e3cu: goto label_448e3c;
        case 0x448e40u: goto label_448e40;
        case 0x448e44u: goto label_448e44;
        case 0x448e48u: goto label_448e48;
        case 0x448e4cu: goto label_448e4c;
        case 0x448e50u: goto label_448e50;
        case 0x448e54u: goto label_448e54;
        case 0x448e58u: goto label_448e58;
        case 0x448e5cu: goto label_448e5c;
        case 0x448e60u: goto label_448e60;
        case 0x448e64u: goto label_448e64;
        case 0x448e68u: goto label_448e68;
        case 0x448e6cu: goto label_448e6c;
        case 0x448e70u: goto label_448e70;
        case 0x448e74u: goto label_448e74;
        case 0x448e78u: goto label_448e78;
        case 0x448e7cu: goto label_448e7c;
        case 0x448e80u: goto label_448e80;
        case 0x448e84u: goto label_448e84;
        case 0x448e88u: goto label_448e88;
        case 0x448e8cu: goto label_448e8c;
        case 0x448e90u: goto label_448e90;
        case 0x448e94u: goto label_448e94;
        case 0x448e98u: goto label_448e98;
        case 0x448e9cu: goto label_448e9c;
        case 0x448ea0u: goto label_448ea0;
        case 0x448ea4u: goto label_448ea4;
        case 0x448ea8u: goto label_448ea8;
        case 0x448eacu: goto label_448eac;
        case 0x448eb0u: goto label_448eb0;
        case 0x448eb4u: goto label_448eb4;
        case 0x448eb8u: goto label_448eb8;
        case 0x448ebcu: goto label_448ebc;
        case 0x448ec0u: goto label_448ec0;
        case 0x448ec4u: goto label_448ec4;
        case 0x448ec8u: goto label_448ec8;
        case 0x448eccu: goto label_448ecc;
        case 0x448ed0u: goto label_448ed0;
        case 0x448ed4u: goto label_448ed4;
        case 0x448ed8u: goto label_448ed8;
        case 0x448edcu: goto label_448edc;
        default: break;
    }

    ctx->pc = 0x448360u;

label_448360:
    // 0x448360: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x448360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_448364:
    // 0x448364: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x448364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_448368:
    // 0x448368: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x448368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_44836c:
    // 0x44836c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x44836cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_448370:
    // 0x448370: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x448370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_448374:
    // 0x448374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x448374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448378:
    // 0x448378: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x448378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_44837c:
    // 0x44837c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x44837cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_448380:
    // 0x448380: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x448380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_448384:
    // 0x448384: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x448384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_448388:
    // 0x448388: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x448388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_44838c:
    // 0x44838c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x44838cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_448390:
    // 0x448390: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x448390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_448394:
    // 0x448394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x448394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_448398:
    // 0x448398: 0xffa70118  sd          $a3, 0x118($sp)
    ctx->pc = 0x448398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 7));
label_44839c:
    // 0x44839c: 0xffa80120  sd          $t0, 0x120($sp)
    ctx->pc = 0x44839cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 8));
label_4483a0:
    // 0x4483a0: 0xffa90128  sd          $t1, 0x128($sp)
    ctx->pc = 0x4483a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 9));
label_4483a4:
    // 0x4483a4: 0xffaa0130  sd          $t2, 0x130($sp)
    ctx->pc = 0x4483a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 10));
label_4483a8:
    // 0x4483a8: 0xffab0138  sd          $t3, 0x138($sp)
    ctx->pc = 0x4483a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 11));
label_4483ac:
    // 0x4483ac: 0xe7ac0108  swc1        $f12, 0x108($sp)
    ctx->pc = 0x4483acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4483b0:
    // 0x4483b0: 0xe7ae010c  swc1        $f14, 0x10C($sp)
    ctx->pc = 0x4483b0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4483b4:
    // 0x4483b4: 0xe7b00110  swc1        $f16, 0x110($sp)
    ctx->pc = 0x4483b4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4483b8:
    // 0x4483b8: 0x1220008c  beqz        $s1, . + 4 + (0x8C << 2)
label_4483bc:
    if (ctx->pc == 0x4483BCu) {
        ctx->pc = 0x4483BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483B8u;
        // 0x4483bc: 0xe7b20114  swc1        $f18, 0x114($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4483C0u;
        goto label_4483c0;
    }
    ctx->pc = 0x4483B8u;
    {
        const bool branch_taken_0x4483b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483B8u;
        // 0x4483bc: 0xe7b20114  swc1        $f18, 0x114($sp) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483b8) {
            ctx->pc = 0x4485ECu;
            goto label_4485ec;
        }
    }
    ctx->pc = 0x4483C0u;
label_4483c0:
    // 0x4483c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4483c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4483c4:
    // 0x4483c4: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_4483c8:
    if (ctx->pc == 0x4483C8u) {
        ctx->pc = 0x4483C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483C4u;
        // 0x4483c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4483CCu;
        goto label_4483cc;
    }
    ctx->pc = 0x4483C4u;
    {
        const bool branch_taken_0x4483c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483C4u;
        // 0x4483c8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483c4) {
            ctx->pc = 0x448618u;
            goto label_448618;
        }
    }
    ctx->pc = 0x4483CCu;
label_4483cc:
    // 0x4483cc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_4483d0:
    if (ctx->pc == 0x4483D0u) {
        ctx->pc = 0x4483D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483CCu;
        // 0x4483d0: 0x27a70118  addiu       $a3, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4483D4u;
        goto label_4483d4;
    }
    ctx->pc = 0x4483CCu;
    {
        const bool branch_taken_0x4483cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483CCu;
        // 0x4483d0: 0x27a70118  addiu       $a3, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483cc) {
            ctx->pc = 0x4483F4u;
            goto label_4483f4;
        }
    }
    ctx->pc = 0x4483D4u;
label_4483d4:
    // 0x4483d4: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x4483d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4483d8:
    // 0x4483d8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x4483d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4483dc:
    // 0x4483dc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4483dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4483e0:
    // 0x4483e0: 0x0  nop
    ctx->pc = 0x4483e0u;
    // NOP
label_4483e4:
    // 0x4483e4: 0x0  nop
    ctx->pc = 0x4483e4u;
    // NOP
label_4483e8:
    // 0x4483e8: 0x0  nop
    ctx->pc = 0x4483e8u;
    // NOP
label_4483ec:
    // 0x4483ec: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_4483f0:
    if (ctx->pc == 0x4483F0u) {
        ctx->pc = 0x4483F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483ECu;
        // 0x4483f0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4483F4u;
        goto label_4483f4;
    }
    ctx->pc = 0x4483ECu;
    {
        const bool branch_taken_0x4483ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4483F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483ECu;
        // 0x4483f0: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483ec) {
            ctx->pc = 0x4483D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4483d8;
        }
    }
    ctx->pc = 0x4483F4u;
label_4483f4:
    // 0x4483f4: 0x12c00090  beqz        $s6, . + 4 + (0x90 << 2)
label_4483f8:
    if (ctx->pc == 0x4483F8u) {
        ctx->pc = 0x4483F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483F4u;
        // 0x4483f8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4483FCu;
        goto label_4483fc;
    }
    ctx->pc = 0x4483F4u;
    {
        const bool branch_taken_0x4483f4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4483F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4483F4u;
        // 0x4483f8: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4483f4) {
            ctx->pc = 0x448638u;
            goto label_448638;
        }
    }
    ctx->pc = 0x4483FCu;
label_4483fc:
    // 0x4483fc: 0x8f84bf20  lw          $a0, -0x40E0($gp)
    ctx->pc = 0x4483fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950688)));
label_448400:
    // 0x448400: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x448400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_448404:
    // 0x448404: 0x8e370004  lw          $s7, 0x4($s1)
    ctx->pc = 0x448404u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_448408:
    // 0x448408: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x448408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_44840c:
    // 0x44840c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x44840cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_448410:
    // 0x448410: 0x2f61821  addu        $v1, $s7, $s6
    ctx->pc = 0x448410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_448414:
    // 0x448414: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x448414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_448418:
    // 0x448418: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_44841c:
    if (ctx->pc == 0x44841Cu) {
        ctx->pc = 0x44841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448418u;
        // 0x44841c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448420u;
        goto label_448420;
    }
    ctx->pc = 0x448418u;
    {
        const bool branch_taken_0x448418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44841Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448418u;
        // 0x44841c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448418) {
            ctx->pc = 0x44845Cu;
            goto label_44845c;
        }
    }
    ctx->pc = 0x448420u;
label_448420:
    // 0x448420: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x448420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448424:
    // 0x448424: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x448424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_448428:
    // 0x448428: 0xc1035f6  jal         func_40D7D8
label_44842c:
    if (ctx->pc == 0x44842Cu) {
        ctx->pc = 0x44842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448428u;
        // 0x44842c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448430u;
        goto label_448430;
    }
    ctx->pc = 0x448428u;
    SET_GPR_U32(ctx, 31, 0x448430u);
    ctx->pc = 0x44842Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448428u;
    // 0x44842c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x448428u, 0x448430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448430u;
label_448430:
    // 0x448430: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x448430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_448434:
    // 0x448434: 0xc103628  jal         func_40D8A0
label_448438:
    if (ctx->pc == 0x448438u) {
        ctx->pc = 0x448438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448434u;
        // 0x448438: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44843Cu;
        goto label_44843c;
    }
    ctx->pc = 0x448434u;
    SET_GPR_U32(ctx, 31, 0x44843Cu);
    ctx->pc = 0x448438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448434u;
    // 0x448438: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x448434u, 0x44843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44843Cu;
label_44843c:
    // 0x44843c: 0x1000007f  b           . + 4 + (0x7F << 2)
label_448440:
    if (ctx->pc == 0x448440u) {
        ctx->pc = 0x448440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44843Cu;
        // 0x448440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448444u;
        goto label_448444;
    }
    ctx->pc = 0x44843Cu;
    {
        const bool branch_taken_0x44843c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44843Cu;
        // 0x448440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44843c) {
            ctx->pc = 0x44863Cu;
            goto label_44863c;
        }
    }
    ctx->pc = 0x448444u;
label_448444:
    // 0x448444: 0x0  nop
    ctx->pc = 0x448444u;
    // NOP
label_448448:
    // 0x448448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x448448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_44844c:
    // 0x44844c: 0xc111532  jal         func_4454C8
label_448450:
    if (ctx->pc == 0x448450u) {
        ctx->pc = 0x448450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44844Cu;
        // 0x448450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448454u;
        goto label_448454;
    }
    ctx->pc = 0x44844Cu;
    SET_GPR_U32(ctx, 31, 0x448454u);
    ctx->pc = 0x448450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44844Cu;
    // 0x448450: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x44844Cu, 0x448454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448454u;
label_448454:
    // 0x448454: 0x10000024  b           . + 4 + (0x24 << 2)
label_448458:
    if (ctx->pc == 0x448458u) {
        ctx->pc = 0x44845Cu;
        goto label_44845c;
    }
    ctx->pc = 0x448454u;
    {
        const bool branch_taken_0x448454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x448454) {
            ctx->pc = 0x4484E8u;
            goto label_4484e8;
        }
    }
    ctx->pc = 0x44845Cu;
label_44845c:
    // 0x44845c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x44845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_448460:
    // 0x448460: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x448460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_448464:
    // 0x448464: 0x2e2a818  mult        $s5, $s7, $v0
    ctx->pc = 0x448464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_448468:
    // 0x448468: 0x24f4fff8  addiu       $s4, $a3, -0x8
    ctx->pc = 0x448468u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
label_44846c:
    // 0x44846c: 0x10000016  b           . + 4 + (0x16 << 2)
label_448470:
    if (ctx->pc == 0x448470u) {
        ctx->pc = 0x448470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44846Cu;
        // 0x448470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448474u;
        goto label_448474;
    }
    ctx->pc = 0x44846Cu;
    {
        const bool branch_taken_0x44846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44846Cu;
        // 0x448470: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44846c) {
            ctx->pc = 0x4484C8u;
            goto label_4484c8;
        }
    }
    ctx->pc = 0x448474u;
label_448474:
    // 0x448474: 0x0  nop
    ctx->pc = 0x448474u;
    // NOP
label_448478:
    // 0x448478: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_44847c:
    if (ctx->pc == 0x44847Cu) {
        ctx->pc = 0x44847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448478u;
        // 0x44847c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448480u;
        goto label_448480;
    }
    ctx->pc = 0x448478u;
    {
        const bool branch_taken_0x448478 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x448478) {
            ctx->pc = 0x44847Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448478u;
            // 0x44847c: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4484B8u;
            goto label_4484b8;
        }
    }
    ctx->pc = 0x448480u;
label_448480:
    // 0x448480: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x448480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_448484:
    // 0x448484: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_448488:
    if (ctx->pc == 0x448488u) {
        ctx->pc = 0x448488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448484u;
        // 0x448488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44848Cu;
        goto label_44848c;
    }
    ctx->pc = 0x448484u;
    {
        const bool branch_taken_0x448484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448484u;
        // 0x448488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448484) {
            ctx->pc = 0x448498u;
            goto label_448498;
        }
    }
    ctx->pc = 0x44848Cu;
label_44848c:
    // 0x44848c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x44848cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_448490:
    // 0x448490: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_448494:
    if (ctx->pc == 0x448494u) {
        ctx->pc = 0x448494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448490u;
        // 0x448494: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448498u;
        goto label_448498;
    }
    ctx->pc = 0x448490u;
    {
        const bool branch_taken_0x448490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448490) {
            ctx->pc = 0x448494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448490u;
            // 0x448494: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448498u;
            goto label_448498;
        }
    }
    ctx->pc = 0x448498u;
label_448498:
    // 0x448498: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_44849c:
    if (ctx->pc == 0x44849Cu) {
        ctx->pc = 0x44849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448498u;
        // 0x44849c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484A0u;
        goto label_4484a0;
    }
    ctx->pc = 0x448498u;
    {
        const bool branch_taken_0x448498 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x44849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448498u;
        // 0x44849c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448498) {
            ctx->pc = 0x4484A8u;
            goto label_4484a8;
        }
    }
    ctx->pc = 0x4484A0u;
label_4484a0:
    // 0x4484a0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4484a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4484a4:
    // 0x4484a4: 0x202300b  movn        $a2, $s0, $v0
    ctx->pc = 0x4484a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
label_4484a8:
    // 0x4484a8: 0xc1126d6  jal         func_449B58
label_4484ac:
    if (ctx->pc == 0x4484ACu) {
        ctx->pc = 0x4484ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484A8u;
        // 0x4484ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484B0u;
        goto label_4484b0;
    }
    ctx->pc = 0x4484A8u;
    SET_GPR_U32(ctx, 31, 0x4484B0u);
    ctx->pc = 0x4484ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4484A8u;
    // 0x4484ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x449B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x449B58u, 0x4484A8u, 0x4484B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4484B0u;
label_4484b0:
    // 0x4484b0: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
label_4484b4:
    if (ctx->pc == 0x4484B4u) {
        ctx->pc = 0x4484B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484B0u;
        // 0x4484b4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484B8u;
        goto label_4484b8;
    }
    ctx->pc = 0x4484B0u;
    {
        const bool branch_taken_0x4484b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484B0u;
        // 0x4484b4: 0x26940008  addiu       $s4, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484b0) {
            ctx->pc = 0x448448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448448;
        }
    }
    ctx->pc = 0x4484B8u;
label_4484b8:
    // 0x4484b8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x4484b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4484bc:
    // 0x4484bc: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4484bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4484c0:
    // 0x4484c0: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x4484c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
label_4484c4:
    // 0x4484c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4484c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4484c8:
    // 0x4484c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_4484cc:
    if (ctx->pc == 0x4484CCu) {
        ctx->pc = 0x4484CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484C8u;
        // 0x4484cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484D0u;
        goto label_4484d0;
    }
    ctx->pc = 0x4484C8u;
    {
        const bool branch_taken_0x4484c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484C8u;
        // 0x4484cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484c8) {
            ctx->pc = 0x4484E8u;
            goto label_4484e8;
        }
    }
    ctx->pc = 0x4484D0u;
label_4484d0:
    // 0x4484d0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4484d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4484d4:
    // 0x4484d4: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x4484d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4484d8:
    // 0x4484d8: 0xc111b5c  jal         func_446D70
label_4484dc:
    if (ctx->pc == 0x4484DCu) {
        ctx->pc = 0x4484DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484D8u;
        // 0x4484dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484E0u;
        goto label_4484e0;
    }
    ctx->pc = 0x4484D8u;
    SET_GPR_U32(ctx, 31, 0x4484E0u);
    ctx->pc = 0x4484DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4484D8u;
    // 0x4484dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446D70u, 0x4484D8u, 0x4484E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4484E0u;
label_4484e0:
    // 0x4484e0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_4484e4:
    if (ctx->pc == 0x4484E4u) {
        ctx->pc = 0x4484E8u;
        goto label_4484e8;
    }
    ctx->pc = 0x4484E0u;
    {
        const bool branch_taken_0x4484e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4484e0) {
            ctx->pc = 0x448478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448478;
        }
    }
    ctx->pc = 0x4484E8u;
label_4484e8:
    // 0x4484e8: 0x16760005  bne         $s3, $s6, . + 4 + (0x5 << 2)
label_4484ec:
    if (ctx->pc == 0x4484ECu) {
        ctx->pc = 0x4484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484E8u;
        // 0x4484ec: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484F0u;
        goto label_4484f0;
    }
    ctx->pc = 0x4484E8u;
    {
        const bool branch_taken_0x4484e8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 22));
        ctx->pc = 0x4484ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484E8u;
        // 0x4484ec: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484e8) {
            ctx->pc = 0x448500u;
            goto label_448500;
        }
    }
    ctx->pc = 0x4484F0u;
label_4484f0:
    // 0x4484f0: 0x57c00001  bnel        $fp, $zero, . + 4 + (0x1 << 2)
label_4484f4:
    if (ctx->pc == 0x4484F4u) {
        ctx->pc = 0x4484F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484F0u;
        // 0x4484f4: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4484F8u;
        goto label_4484f8;
    }
    ctx->pc = 0x4484F0u;
    {
        const bool branch_taken_0x4484f0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x4484f0) {
            ctx->pc = 0x4484F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4484F0u;
            // 0x4484f4: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4484F8u;
            goto label_4484f8;
        }
    }
    ctx->pc = 0x4484F8u;
label_4484f8:
    // 0x4484f8: 0x10000050  b           . + 4 + (0x50 << 2)
label_4484fc:
    if (ctx->pc == 0x4484FCu) {
        ctx->pc = 0x4484FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484F8u;
        // 0x4484fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448500u;
        goto label_448500;
    }
    ctx->pc = 0x4484F8u;
    {
        const bool branch_taken_0x4484f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4484FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4484F8u;
        // 0x4484fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4484f8) {
            ctx->pc = 0x44863Cu;
            goto label_44863c;
        }
    }
    ctx->pc = 0x448500u;
label_448500:
    // 0x448500: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448504:
    // 0x448504: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448508:
    // 0x448508: 0x1262004b  beq         $s3, $v0, . + 4 + (0x4B << 2)
label_44850c:
    if (ctx->pc == 0x44850Cu) {
        ctx->pc = 0x44850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448508u;
        // 0x44850c: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448510u;
        goto label_448510;
    }
    ctx->pc = 0x448508u;
    {
        const bool branch_taken_0x448508 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x44850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448508u;
        // 0x44850c: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448508) {
            ctx->pc = 0x448638u;
            goto label_448638;
        }
    }
    ctx->pc = 0x448510u;
label_448510:
    // 0x448510: 0x2772021  addu        $a0, $s3, $s7
    ctx->pc = 0x448510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 23)));
label_448514:
    // 0x448514: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x448514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
label_448518:
    // 0x448518: 0x131027  nor         $v0, $zero, $s3
    ctx->pc = 0x448518u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
label_44851c:
    // 0x44851c: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x44851cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_448520:
    // 0x448520: 0x838018  mult        $s0, $a0, $v1
    ctx->pc = 0x448520u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_448524:
    // 0x448524: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_448528:
    if (ctx->pc == 0x448528u) {
        ctx->pc = 0x448528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448524u;
        // 0x448528: 0x3652ffff  ori         $s2, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x44852Cu;
        goto label_44852c;
    }
    ctx->pc = 0x448524u;
    {
        const bool branch_taken_0x448524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x448528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448524u;
        // 0x448528: 0x3652ffff  ori         $s2, $s2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448524) {
            ctx->pc = 0x448588u;
            goto label_448588;
        }
    }
    ctx->pc = 0x44852Cu;
label_44852c:
    // 0x44852c: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x44852cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_448530:
    // 0x448530: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_448534:
    if (ctx->pc == 0x448534u) {
        ctx->pc = 0x448534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448530u;
        // 0x448534: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448538u;
        goto label_448538;
    }
    ctx->pc = 0x448530u;
    {
        const bool branch_taken_0x448530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448530u;
        // 0x448534: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448530) {
            ctx->pc = 0x44856Cu;
            goto label_44856c;
        }
    }
    ctx->pc = 0x448538u;
label_448538:
    // 0x448538: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_44853c:
    if (ctx->pc == 0x44853Cu) {
        ctx->pc = 0x44853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448538u;
        // 0x44853c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448540u;
        goto label_448540;
    }
    ctx->pc = 0x448538u;
    {
        const bool branch_taken_0x448538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448538u;
        // 0x44853c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448538) {
            ctx->pc = 0x448554u;
            goto label_448554;
        }
    }
    ctx->pc = 0x448540u;
label_448540:
    // 0x448540: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x448540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_448544:
    // 0x448544: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x448544u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_448548:
    // 0x448548: 0xc111532  jal         func_4454C8
label_44854c:
    if (ctx->pc == 0x44854Cu) {
        ctx->pc = 0x44854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448548u;
        // 0x44854c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448550u;
        goto label_448550;
    }
    ctx->pc = 0x448548u;
    SET_GPR_U32(ctx, 31, 0x448550u);
    ctx->pc = 0x44854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448548u;
    // 0x44854c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x448548u, 0x448550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448550u;
label_448550:
    // 0x448550: 0x2610ffd8  addiu       $s0, $s0, -0x28
    ctx->pc = 0x448550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
label_448554:
    // 0x448554: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x448554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_448558:
    // 0x448558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x448558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44855c:
    // 0x44855c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x44855cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_448560:
    // 0x448560: 0xc111532  jal         func_4454C8
label_448564:
    if (ctx->pc == 0x448564u) {
        ctx->pc = 0x448564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448560u;
        // 0x448564: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448568u;
        goto label_448568;
    }
    ctx->pc = 0x448560u;
    SET_GPR_U32(ctx, 31, 0x448568u);
    ctx->pc = 0x448564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448560u;
    // 0x448564: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x448560u, 0x448568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448568u;
label_448568:
    // 0x448568: 0x2610ffd8  addiu       $s0, $s0, -0x28
    ctx->pc = 0x448568u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
label_44856c:
    // 0x44856c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x44856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_448570:
    // 0x448570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x448570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448574:
    // 0x448574: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x448574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_448578:
    // 0x448578: 0xc111532  jal         func_4454C8
label_44857c:
    if (ctx->pc == 0x44857Cu) {
        ctx->pc = 0x44857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448578u;
        // 0x44857c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448580u;
        goto label_448580;
    }
    ctx->pc = 0x448578u;
    SET_GPR_U32(ctx, 31, 0x448580u);
    ctx->pc = 0x44857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448578u;
    // 0x44857c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x448578u, 0x448580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448580u;
label_448580:
    // 0x448580: 0x1272002d  beq         $s3, $s2, . + 4 + (0x2D << 2)
label_448584:
    if (ctx->pc == 0x448584u) {
        ctx->pc = 0x448584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448580u;
        // 0x448584: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448588u;
        goto label_448588;
    }
    ctx->pc = 0x448580u;
    {
        const bool branch_taken_0x448580 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x448584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448580u;
        // 0x448584: 0x2610ffd8  addiu       $s0, $s0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448580) {
            ctx->pc = 0x448638u;
            goto label_448638;
        }
    }
    ctx->pc = 0x448588u;
label_448588:
    // 0x448588: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x448588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_44858c:
    // 0x44858c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x44858cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_448590:
    // 0x448590: 0x2673fffc  addiu       $s3, $s3, -0x4
    ctx->pc = 0x448590u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_448594:
    // 0x448594: 0xc111532  jal         func_4454C8
label_448598:
    if (ctx->pc == 0x448598u) {
        ctx->pc = 0x448598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448594u;
        // 0x448598: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44859Cu;
        goto label_44859c;
    }
    ctx->pc = 0x448594u;
    SET_GPR_U32(ctx, 31, 0x44859Cu);
    ctx->pc = 0x448598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448594u;
    // 0x448598: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x448594u, 0x44859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44859Cu;
label_44859c:
    // 0x44859c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x44859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4485a0:
    // 0x4485a0: 0x2604ffd8  addiu       $a0, $s0, -0x28
    ctx->pc = 0x4485a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967256));
label_4485a4:
    // 0x4485a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4485a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4485a8:
    // 0x4485a8: 0xc111532  jal         func_4454C8
label_4485ac:
    if (ctx->pc == 0x4485ACu) {
        ctx->pc = 0x4485ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485A8u;
        // 0x4485ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4485B0u;
        goto label_4485b0;
    }
    ctx->pc = 0x4485A8u;
    SET_GPR_U32(ctx, 31, 0x4485B0u);
    ctx->pc = 0x4485ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4485A8u;
    // 0x4485ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x4485A8u, 0x4485B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4485B0u;
label_4485b0:
    // 0x4485b0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4485b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4485b4:
    // 0x4485b4: 0x2604ffb0  addiu       $a0, $s0, -0x50
    ctx->pc = 0x4485b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967216));
label_4485b8:
    // 0x4485b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4485b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4485bc:
    // 0x4485bc: 0xc111532  jal         func_4454C8
label_4485c0:
    if (ctx->pc == 0x4485C0u) {
        ctx->pc = 0x4485C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485BCu;
        // 0x4485c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4485C4u;
        goto label_4485c4;
    }
    ctx->pc = 0x4485BCu;
    SET_GPR_U32(ctx, 31, 0x4485C4u);
    ctx->pc = 0x4485C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4485BCu;
    // 0x4485c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x4485BCu, 0x4485C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4485C4u;
label_4485c4:
    // 0x4485c4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x4485c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4485c8:
    // 0x4485c8: 0x2604ff88  addiu       $a0, $s0, -0x78
    ctx->pc = 0x4485c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967176));
label_4485cc:
    // 0x4485cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4485ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4485d0:
    // 0x4485d0: 0x2610ff60  addiu       $s0, $s0, -0xA0
    ctx->pc = 0x4485d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
label_4485d4:
    // 0x4485d4: 0xc111532  jal         func_4454C8
label_4485d8:
    if (ctx->pc == 0x4485D8u) {
        ctx->pc = 0x4485D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485D4u;
        // 0x4485d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4485DCu;
        goto label_4485dc;
    }
    ctx->pc = 0x4485D4u;
    SET_GPR_U32(ctx, 31, 0x4485DCu);
    ctx->pc = 0x4485D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4485D4u;
    // 0x4485d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x4485D4u, 0x4485DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4485DCu;
label_4485dc:
    // 0x4485dc: 0x5672ffeb  bnel        $s3, $s2, . + 4 + (-0x15 << 2)
label_4485e0:
    if (ctx->pc == 0x4485E0u) {
        ctx->pc = 0x4485E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485DCu;
        // 0x4485e0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4485E4u;
        goto label_4485e4;
    }
    ctx->pc = 0x4485DCu;
    {
        const bool branch_taken_0x4485dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x4485dc) {
            ctx->pc = 0x4485E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4485DCu;
            // 0x4485e0: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x44858Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_44858c;
        }
    }
    ctx->pc = 0x4485E4u;
label_4485e4:
    // 0x4485e4: 0x10000015  b           . + 4 + (0x15 << 2)
label_4485e8:
    if (ctx->pc == 0x4485E8u) {
        ctx->pc = 0x4485E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485E4u;
        // 0x4485e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4485ECu;
        goto label_4485ec;
    }
    ctx->pc = 0x4485E4u;
    {
        const bool branch_taken_0x4485e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4485E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485E4u;
        // 0x4485e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4485e4) {
            ctx->pc = 0x44863Cu;
            goto label_44863c;
        }
    }
    ctx->pc = 0x4485ECu;
label_4485ec:
    // 0x4485ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4485ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4485f0:
    // 0x4485f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4485f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4485f4:
    // 0x4485f4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4485f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4485f8:
    // 0x4485f8: 0xc1035f6  jal         func_40D7D8
label_4485fc:
    if (ctx->pc == 0x4485FCu) {
        ctx->pc = 0x4485FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4485F8u;
        // 0x4485fc: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448600u;
        goto label_448600;
    }
    ctx->pc = 0x4485F8u;
    SET_GPR_U32(ctx, 31, 0x448600u);
    ctx->pc = 0x4485FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4485F8u;
    // 0x4485fc: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4485F8u, 0x448600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448600u;
label_448600:
    // 0x448600: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x448600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_448604:
    // 0x448604: 0xc103628  jal         func_40D8A0
label_448608:
    if (ctx->pc == 0x448608u) {
        ctx->pc = 0x448608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448604u;
        // 0x448608: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44860Cu;
        goto label_44860c;
    }
    ctx->pc = 0x448604u;
    SET_GPR_U32(ctx, 31, 0x44860Cu);
    ctx->pc = 0x448608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448604u;
    // 0x448608: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x448604u, 0x44860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44860Cu;
label_44860c:
    // 0x44860c: 0x1000000b  b           . + 4 + (0xB << 2)
label_448610:
    if (ctx->pc == 0x448610u) {
        ctx->pc = 0x448610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44860Cu;
        // 0x448610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448614u;
        goto label_448614;
    }
    ctx->pc = 0x44860Cu;
    {
        const bool branch_taken_0x44860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44860Cu;
        // 0x448610: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44860c) {
            ctx->pc = 0x44863Cu;
            goto label_44863c;
        }
    }
    ctx->pc = 0x448614u;
label_448614:
    // 0x448614: 0x0  nop
    ctx->pc = 0x448614u;
    // NOP
label_448618:
    // 0x448618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x448618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_44861c:
    // 0x44861c: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x44861cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_448620:
    // 0x448620: 0xc1035f6  jal         func_40D7D8
label_448624:
    if (ctx->pc == 0x448624u) {
        ctx->pc = 0x448624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448620u;
        // 0x448624: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448628u;
        goto label_448628;
    }
    ctx->pc = 0x448620u;
    SET_GPR_U32(ctx, 31, 0x448628u);
    ctx->pc = 0x448624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448620u;
    // 0x448624: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x448620u, 0x448628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448628u;
label_448628:
    // 0x448628: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x448628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_44862c:
    // 0x44862c: 0xc103628  jal         func_40D8A0
label_448630:
    if (ctx->pc == 0x448630u) {
        ctx->pc = 0x448630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44862Cu;
        // 0x448630: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448634u;
        goto label_448634;
    }
    ctx->pc = 0x44862Cu;
    SET_GPR_U32(ctx, 31, 0x448634u);
    ctx->pc = 0x448630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x44862Cu;
    // 0x448630: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x44862Cu, 0x448634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448634u;
label_448634:
    // 0x448634: 0x0  nop
    ctx->pc = 0x448634u;
    // NOP
label_448638:
    // 0x448638: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x448638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44863c:
    // 0x44863c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x44863cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_448640:
    // 0x448640: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x448640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_448644:
    // 0x448644: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x448644u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_448648:
    // 0x448648: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x448648u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_44864c:
    // 0x44864c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x44864cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_448650:
    // 0x448650: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x448650u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_448654:
    // 0x448654: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x448654u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_448658:
    // 0x448658: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x448658u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_44865c:
    // 0x44865c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x44865cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_448660:
    // 0x448660: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x448660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_448664:
    // 0x448664: 0x3e00008  jr          $ra
label_448668:
    if (ctx->pc == 0x448668u) {
        ctx->pc = 0x448668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448664u;
        // 0x448668: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44866Cu;
        goto label_44866c;
    }
    ctx->pc = 0x448664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448664u;
        // 0x448668: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44866Cu;
label_44866c:
    // 0x44866c: 0x0  nop
    ctx->pc = 0x44866cu;
    // NOP
label_448670:
    // 0x448670: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x448670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_448674:
    // 0x448674: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x448674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_448678:
    // 0x448678: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x448678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_44867c:
    // 0x44867c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44867cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448680:
    // 0x448680: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x448680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_448684:
    // 0x448684: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x448684u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_448688:
    // 0x448688: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x448688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_44868c:
    // 0x44868c: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_448690:
    if (ctx->pc == 0x448690u) {
        ctx->pc = 0x448690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44868Cu;
        // 0x448690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448694u;
        goto label_448694;
    }
    ctx->pc = 0x44868Cu;
    {
        const bool branch_taken_0x44868c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x448690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44868Cu;
        // 0x448690: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44868c) {
            ctx->pc = 0x4487ECu;
            goto label_4487ec;
        }
    }
    ctx->pc = 0x448694u;
label_448694:
    // 0x448694: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x448694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_448698:
    // 0x448698: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_44869c:
    if (ctx->pc == 0x44869Cu) {
        ctx->pc = 0x44869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448698u;
        // 0x44869c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486A0u;
        goto label_4486a0;
    }
    ctx->pc = 0x448698u;
    {
        const bool branch_taken_0x448698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448698u;
        // 0x44869c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448698) {
            ctx->pc = 0x4487F0u;
            goto label_4487f0;
        }
    }
    ctx->pc = 0x4486A0u;
label_4486a0:
    // 0x4486a0: 0x12600054  beqz        $s3, . + 4 + (0x54 << 2)
label_4486a4:
    if (ctx->pc == 0x4486A4u) {
        ctx->pc = 0x4486A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486A0u;
        // 0x4486a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486A8u;
        goto label_4486a8;
    }
    ctx->pc = 0x4486A0u;
    {
        const bool branch_taken_0x4486a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486A0u;
        // 0x4486a4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486a0) {
            ctx->pc = 0x4487F4u;
            goto label_4487f4;
        }
    }
    ctx->pc = 0x4486A8u;
label_4486a8:
    // 0x4486a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4486a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4486ac:
    // 0x4486ac: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_4486b0:
    if (ctx->pc == 0x4486B0u) {
        ctx->pc = 0x4486B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486ACu;
        // 0x4486b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486B4u;
        goto label_4486b4;
    }
    ctx->pc = 0x4486ACu;
    {
        const bool branch_taken_0x4486ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486ACu;
        // 0x4486b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486ac) {
            ctx->pc = 0x4487F4u;
            goto label_4487f4;
        }
    }
    ctx->pc = 0x4486B4u;
label_4486b4:
    // 0x4486b4: 0x10c0004f  beqz        $a2, . + 4 + (0x4F << 2)
label_4486b8:
    if (ctx->pc == 0x4486B8u) {
        ctx->pc = 0x4486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486B4u;
        // 0x4486b8: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486BCu;
        goto label_4486bc;
    }
    ctx->pc = 0x4486B4u;
    {
        const bool branch_taken_0x4486b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486B4u;
        // 0x4486b8: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486b4) {
            ctx->pc = 0x4487F4u;
            goto label_4487f4;
        }
    }
    ctx->pc = 0x4486BCu;
label_4486bc:
    // 0x4486bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4486bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4486c0:
    // 0x4486c0: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4486c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4486c4:
    // 0x4486c4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4486c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4486c8:
    // 0x4486c8: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x4486c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4486cc:
    // 0x4486cc: 0xc111b5c  jal         func_446D70
label_4486d0:
    if (ctx->pc == 0x4486D0u) {
        ctx->pc = 0x4486D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486CCu;
        // 0x4486d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486D4u;
        goto label_4486d4;
    }
    ctx->pc = 0x4486CCu;
    SET_GPR_U32(ctx, 31, 0x4486D4u);
    ctx->pc = 0x4486D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4486CCu;
    // 0x4486d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446D70u, 0x4486CCu, 0x4486D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4486D4u;
label_4486d4:
    // 0x4486d4: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
label_4486d8:
    if (ctx->pc == 0x4486D8u) {
        ctx->pc = 0x4486D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486D4u;
        // 0x4486d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486DCu;
        goto label_4486dc;
    }
    ctx->pc = 0x4486D4u;
    {
        const bool branch_taken_0x4486d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486D4u;
        // 0x4486d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486d4) {
            ctx->pc = 0x4487F0u;
            goto label_4487f0;
        }
    }
    ctx->pc = 0x4486DCu;
label_4486dc:
    // 0x4486dc: 0x8e700004  lw          $s0, 0x4($s3)
    ctx->pc = 0x4486dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4486e0:
    // 0x4486e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4486e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4486e4:
    // 0x4486e4: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x4486e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4486e8:
    // 0x4486e8: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x4486e8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_4486ec:
    // 0x4486ec: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_4486f0:
    if (ctx->pc == 0x4486F0u) {
        ctx->pc = 0x4486F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486ECu;
        // 0x4486f0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4486F4u;
        goto label_4486f4;
    }
    ctx->pc = 0x4486ECu;
    {
        const bool branch_taken_0x4486ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4486F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486ECu;
        // 0x4486f0: 0x103080  sll         $a2, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4486ec) {
            ctx->pc = 0x448700u;
            goto label_448700;
        }
    }
    ctx->pc = 0x4486F4u;
label_4486f4:
    // 0x4486f4: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x4486f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4486f8:
    // 0x4486f8: 0xc0bb778  jal         func_2EDDE0
label_4486fc:
    if (ctx->pc == 0x4486FCu) {
        ctx->pc = 0x4486FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4486F8u;
        // 0x4486fc: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448700u;
        goto label_448700;
    }
    ctx->pc = 0x4486F8u;
    SET_GPR_U32(ctx, 31, 0x448700u);
    ctx->pc = 0x4486FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4486F8u;
    // 0x4486fc: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4486F8u, 0x448700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448700u;
label_448700:
    // 0x448700: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x448700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_448704:
    // 0x448704: 0x206102b  sltu        $v0, $s0, $a2
    ctx->pc = 0x448704u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_448708:
    // 0x448708: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_44870c:
    if (ctx->pc == 0x44870Cu) {
        ctx->pc = 0x44870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448708u;
        // 0x44870c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448710u;
        goto label_448710;
    }
    ctx->pc = 0x448708u;
    {
        const bool branch_taken_0x448708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448708u;
        // 0x44870c: 0xd03023  subu        $a2, $a2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448708) {
            ctx->pc = 0x448728u;
            goto label_448728;
        }
    }
    ctx->pc = 0x448710u;
label_448710:
    // 0x448710: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x448710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_448714:
    // 0x448714: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x448714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_448718:
    // 0x448718: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x448718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_44871c:
    // 0x44871c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x44871cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_448720:
    // 0x448720: 0xc0bb7e6  jal         func_2EDF98
label_448724:
    if (ctx->pc == 0x448724u) {
        ctx->pc = 0x448724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448720u;
        // 0x448724: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448728u;
        goto label_448728;
    }
    ctx->pc = 0x448720u;
    SET_GPR_U32(ctx, 31, 0x448728u);
    ctx->pc = 0x448724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448720u;
    // 0x448724: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x448720u, 0x448728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448728u;
label_448728:
    // 0x448728: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x448728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_44872c:
    // 0x44872c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x44872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_448730:
    // 0x448730: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x448730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_448734:
    // 0x448734: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x448734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_448738:
    // 0x448738: 0x2451823  subu        $v1, $s2, $a1
    ctx->pc = 0x448738u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_44873c:
    // 0x44873c: 0x2652023  subu        $a0, $s3, $a1
    ctx->pc = 0x44873cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_448740:
    // 0x448740: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x448740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_448744:
    // 0x448744: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x448744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_448748:
    // 0x448748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x448748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44874c:
    // 0x44874c: 0x358c3  sra         $t3, $v1, 3
    ctx->pc = 0x44874cu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 3), 3));
label_448750:
    // 0x448750: 0x10c00021  beqz        $a2, . + 4 + (0x21 << 2)
label_448754:
    if (ctx->pc == 0x448754u) {
        ctx->pc = 0x448754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448750u;
        // 0x448754: 0x420c3  sra         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448758u;
        goto label_448758;
    }
    ctx->pc = 0x448750u;
    {
        const bool branch_taken_0x448750 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x448754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448750u;
        // 0x448754: 0x420c3  sra         $a0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448750) {
            ctx->pc = 0x4487D8u;
            goto label_4487d8;
        }
    }
    ctx->pc = 0x448758u;
label_448758:
    // 0x448758: 0x240d0028  addiu       $t5, $zero, 0x28
    ctx->pc = 0x448758u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_44875c:
    // 0x44875c: 0x240c0028  addiu       $t4, $zero, 0x28
    ctx->pc = 0x44875cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_448760:
    // 0x448760: 0xed1018  mult        $v0, $a3, $t5
    ctx->pc = 0x448760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448764:
    // 0x448764: 0x0  nop
    ctx->pc = 0x448764u;
    // NOP
label_448768:
    // 0x448768: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x448768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44876c:
    // 0x44876c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x44876cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448770:
    // 0x448770: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x448770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_448774:
    // 0x448774: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x448774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_448778:
    // 0x448778: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_44877c:
    if (ctx->pc == 0x44877Cu) {
        ctx->pc = 0x44877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448778u;
        // 0x44877c: 0x24ea0001  addiu       $t2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448780u;
        goto label_448780;
    }
    ctx->pc = 0x448778u;
    {
        const bool branch_taken_0x448778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x44877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448778u;
        // 0x44877c: 0x24ea0001  addiu       $t2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448778) {
            ctx->pc = 0x4487C4u;
            goto label_4487c4;
        }
    }
    ctx->pc = 0x448780u;
label_448780:
    // 0x448780: 0xec3818  mult        $a3, $a3, $t4
    ctx->pc = 0x448780u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_448784:
    // 0x448784: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x448784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_448788:
    // 0x448788: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x448788u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_44878c:
    // 0x44878c: 0x0  nop
    ctx->pc = 0x44878cu;
    // NOP
label_448790:
    // 0x448790: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x448790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_448794:
    // 0x448794: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x448794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_448798:
    // 0x448798: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x448798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_44879c:
    // 0x44879c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x44879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4487a0:
    // 0x4487a0: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
label_4487a4:
    if (ctx->pc == 0x4487A4u) {
        ctx->pc = 0x4487A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487A0u;
        // 0x4487a4: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4487A8u;
        goto label_4487a8;
    }
    ctx->pc = 0x4487A0u;
    {
        const bool branch_taken_0x4487a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x4487a0) {
            ctx->pc = 0x4487A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4487A0u;
            // 0x4487a4: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4487A8u;
            goto label_4487a8;
        }
    }
    ctx->pc = 0x4487A8u;
label_4487a8:
    // 0x4487a8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4487a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4487ac:
    // 0x4487ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4487acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4487b0:
    // 0x4487b0: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x4487b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_4487b4:
    // 0x4487b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4487b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4487b8:
    // 0x4487b8: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x4487b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4487bc:
    // 0x4487bc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4487c0:
    if (ctx->pc == 0x4487C0u) {
        ctx->pc = 0x4487C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487BCu;
        // 0x4487c0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4487C4u;
        goto label_4487c4;
    }
    ctx->pc = 0x4487BCu;
    {
        const bool branch_taken_0x4487bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4487C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487BCu;
        // 0x4487c0: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487bc) {
            ctx->pc = 0x448790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448790;
        }
    }
    ctx->pc = 0x4487C4u;
label_4487c4:
    // 0x4487c4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x4487c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4487c8:
    // 0x4487c8: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x4487c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4487cc:
    // 0x4487cc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x4487ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4487d0:
    // 0x4487d0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_4487d4:
    if (ctx->pc == 0x4487D4u) {
        ctx->pc = 0x4487D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487D0u;
        // 0x4487d4: 0xed1018  mult        $v0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4487D8u;
        goto label_4487d8;
    }
    ctx->pc = 0x4487D0u;
    {
        const bool branch_taken_0x4487d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4487D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487D0u;
        // 0x4487d4: 0xed1018  mult        $v0, $a3, $t5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487d0) {
            ctx->pc = 0x448768u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448768;
        }
    }
    ctx->pc = 0x4487D8u;
label_4487d8:
    // 0x4487d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4487d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4487dc:
    // 0x4487dc: 0xc111532  jal         func_4454C8
label_4487e0:
    if (ctx->pc == 0x4487E0u) {
        ctx->pc = 0x4487E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487DCu;
        // 0x4487e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4487E4u;
        goto label_4487e4;
    }
    ctx->pc = 0x4487DCu;
    SET_GPR_U32(ctx, 31, 0x4487E4u);
    ctx->pc = 0x4487E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4487DCu;
    // 0x4487e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x4487DCu, 0x4487E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4487E4u;
label_4487e4:
    // 0x4487e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_4487e8:
    if (ctx->pc == 0x4487E8u) {
        ctx->pc = 0x4487E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487E4u;
        // 0x4487e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4487ECu;
        goto label_4487ec;
    }
    ctx->pc = 0x4487E4u;
    {
        const bool branch_taken_0x4487e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4487E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4487E4u;
        // 0x4487e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4487e4) {
            ctx->pc = 0x4487F0u;
            goto label_4487f0;
        }
    }
    ctx->pc = 0x4487ECu;
label_4487ec:
    // 0x4487ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4487ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4487f0:
    // 0x4487f0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4487f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4487f4:
    // 0x4487f4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4487f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4487f8:
    // 0x4487f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4487f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4487fc:
    // 0x4487fc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4487fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_448800:
    // 0x448800: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x448800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_448804:
    // 0x448804: 0x3e00008  jr          $ra
label_448808:
    if (ctx->pc == 0x448808u) {
        ctx->pc = 0x448808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448804u;
        // 0x448808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44880Cu;
        goto label_44880c;
    }
    ctx->pc = 0x448804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448804u;
        // 0x448808: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44880Cu;
label_44880c:
    // 0x44880c: 0x0  nop
    ctx->pc = 0x44880cu;
    // NOP
label_448810:
    // 0x448810: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x448810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_448814:
    // 0x448814: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x448814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_448818:
    // 0x448818: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x448818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_44881c:
    // 0x44881c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x44881cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_448820:
    // 0x448820: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x448820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_448824:
    // 0x448824: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x448824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448828:
    // 0x448828: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x448828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_44882c:
    // 0x44882c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x44882cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_448830:
    // 0x448830: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x448830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_448834:
    // 0x448834: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x448834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_448838:
    // 0x448838: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x448838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_44883c:
    // 0x44883c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x44883cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_448840:
    // 0x448840: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x448840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_448844:
    // 0x448844: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x448844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_448848:
    // 0x448848: 0x12800197  beqz        $s4, . + 4 + (0x197 << 2)
label_44884c:
    if (ctx->pc == 0x44884Cu) {
        ctx->pc = 0x44884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448848u;
        // 0x44884c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448850u;
        goto label_448850;
    }
    ctx->pc = 0x448848u;
    {
        const bool branch_taken_0x448848 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x44884Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448848u;
        // 0x44884c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448848) {
            ctx->pc = 0x448EA8u;
            goto label_448ea8;
        }
    }
    ctx->pc = 0x448850u;
label_448850:
    // 0x448850: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_448854:
    if (ctx->pc == 0x448854u) {
        ctx->pc = 0x448858u;
        goto label_448858;
    }
    ctx->pc = 0x448850u;
    {
        const bool branch_taken_0x448850 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x448850) {
            ctx->pc = 0x448860u;
            goto label_448860;
        }
    }
    ctx->pc = 0x448858u;
label_448858:
    // 0x448858: 0x12c00194  beqz        $s6, . + 4 + (0x194 << 2)
label_44885c:
    if (ctx->pc == 0x44885Cu) {
        ctx->pc = 0x44885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448858u;
        // 0x44885c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448860u;
        goto label_448860;
    }
    ctx->pc = 0x448858u;
    {
        const bool branch_taken_0x448858 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x44885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448858u;
        // 0x44885c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448858) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x448860u;
label_448860:
    // 0x448860: 0x12600192  beqz        $s3, . + 4 + (0x192 << 2)
label_448864:
    if (ctx->pc == 0x448864u) {
        ctx->pc = 0x448864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448860u;
        // 0x448864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448868u;
        goto label_448868;
    }
    ctx->pc = 0x448860u;
    {
        const bool branch_taken_0x448860 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x448864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448860u;
        // 0x448864: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448860) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x448868u;
label_448868:
    // 0x448868: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x448868u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
label_44886c:
    // 0x44886c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x44886cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_448870:
    // 0x448870: 0x36f7ffff  ori         $s7, $s7, 0xFFFF
    ctx->pc = 0x448870u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
label_448874:
    // 0x448874: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x448874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_448878:
    // 0x448878: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
label_44887c:
    if (ctx->pc == 0x44887Cu) {
        ctx->pc = 0x44887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448878u;
        // 0x44887c: 0xafb70010  sw          $s7, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448880u;
        goto label_448880;
    }
    ctx->pc = 0x448878u;
    {
        const bool branch_taken_0x448878 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x44887Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448878u;
        // 0x44887c: 0xafb70010  sw          $s7, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448878) {
            ctx->pc = 0x448894u;
            goto label_448894;
        }
    }
    ctx->pc = 0x448880u;
label_448880:
    // 0x448880: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x448880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_448884:
    // 0x448884: 0x12c80016  beq         $s6, $t0, . + 4 + (0x16 << 2)
label_448888:
    if (ctx->pc == 0x448888u) {
        ctx->pc = 0x448888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448884u;
        // 0x448888: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44888Cu;
        goto label_44888c;
    }
    ctx->pc = 0x448884u;
    {
        const bool branch_taken_0x448884 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x448888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448884u;
        // 0x448888: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448884) {
            ctx->pc = 0x4488E0u;
            goto label_4488e0;
        }
    }
    ctx->pc = 0x44888Cu;
label_44888c:
    // 0x44888c: 0x10000188  b           . + 4 + (0x188 << 2)
label_448890:
    if (ctx->pc == 0x448890u) {
        ctx->pc = 0x448894u;
        goto label_448894;
    }
    ctx->pc = 0x44888Cu;
    {
        const bool branch_taken_0x44888c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x44888c) {
            ctx->pc = 0x448EB0u;
            goto label_448eb0;
        }
    }
    ctx->pc = 0x448894u;
label_448894:
    // 0x448894: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x448894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_448898:
    // 0x448898: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x448898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_44889c:
    // 0x44889c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x44889cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4488a0:
    // 0x4488a0: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x4488a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_4488a4:
    // 0x4488a4: 0x2a51823  subu        $v1, $s5, $a1
    ctx->pc = 0x4488a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_4488a8:
    // 0x4488a8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4488a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_4488ac:
    // 0x4488ac: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4488acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_4488b0:
    // 0x4488b0: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4488b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4488b4:
    // 0x4488b4: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x4488b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_4488b8:
    // 0x4488b8: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x4488b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_4488bc:
    // 0x4488bc: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x4488bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4488c0:
    // 0x4488c0: 0x14950005  bne         $a0, $s5, . + 4 + (0x5 << 2)
label_4488c4:
    if (ctx->pc == 0x4488C4u) {
        ctx->pc = 0x4488C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488C0u;
        // 0x4488c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4488C8u;
        goto label_4488c8;
    }
    ctx->pc = 0x4488C0u;
    {
        const bool branch_taken_0x4488c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x4488C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488C0u;
        // 0x4488c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488c0) {
            ctx->pc = 0x4488D8u;
            goto label_4488d8;
        }
    }
    ctx->pc = 0x4488C8u;
label_4488c8:
    // 0x4488c8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x4488c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_4488cc:
    // 0x4488cc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x4488ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4488d0:
    // 0x4488d0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x4488d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4488d4:
    // 0x4488d4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x4488d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_4488d8:
    // 0x4488d8: 0x10d70174  beq         $a2, $s7, . + 4 + (0x174 << 2)
label_4488dc:
    if (ctx->pc == 0x4488DCu) {
        ctx->pc = 0x4488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488D8u;
        // 0x4488dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4488E0u;
        goto label_4488e0;
    }
    ctx->pc = 0x4488D8u;
    {
        const bool branch_taken_0x4488d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 23));
        ctx->pc = 0x4488DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488D8u;
        // 0x4488dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488d8) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x4488E0u;
label_4488e0:
    // 0x4488e0: 0x16c00006  bnez        $s6, . + 4 + (0x6 << 2)
label_4488e4:
    if (ctx->pc == 0x4488E4u) {
        ctx->pc = 0x4488E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488E0u;
        // 0x4488e4: 0x2c81823  subu        $v1, $s6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4488E8u;
        goto label_4488e8;
    }
    ctx->pc = 0x4488E0u;
    {
        const bool branch_taken_0x4488e0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4488E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488E0u;
        // 0x4488e4: 0x2c81823  subu        $v1, $s6, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488e0) {
            ctx->pc = 0x4488FCu;
            goto label_4488fc;
        }
    }
    ctx->pc = 0x4488E8u;
label_4488e8:
    // 0x4488e8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x4488e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_4488ec:
    // 0x4488ec: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_4488f0:
    if (ctx->pc == 0x4488F0u) {
        ctx->pc = 0x4488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488ECu;
        // 0x4488f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4488F4u;
        goto label_4488f4;
    }
    ctx->pc = 0x4488ECu;
    {
        const bool branch_taken_0x4488ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4488F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488ECu;
        // 0x4488f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488ec) {
            ctx->pc = 0x448940u;
            goto label_448940;
        }
    }
    ctx->pc = 0x4488F4u;
label_4488f4:
    // 0x4488f4: 0x1000016e  b           . + 4 + (0x16E << 2)
label_4488f8:
    if (ctx->pc == 0x4488F8u) {
        ctx->pc = 0x4488F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488F4u;
        // 0x4488f8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4488FCu;
        goto label_4488fc;
    }
    ctx->pc = 0x4488F4u;
    {
        const bool branch_taken_0x4488f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4488F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4488F4u;
        // 0x4488f8: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4488f4) {
            ctx->pc = 0x448EB0u;
            goto label_448eb0;
        }
    }
    ctx->pc = 0x4488FCu;
label_4488fc:
    // 0x4488fc: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x4488fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
label_448900:
    // 0x448900: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x448900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_448904:
    // 0x448904: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x448904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_448908:
    // 0x448908: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x448908u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_44890c:
    // 0x44890c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x44890cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_448910:
    // 0x448910: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x448910u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_448914:
    // 0x448914: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x448914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448918:
    // 0x448918: 0x482021  addu        $a0, $v0, $t0
    ctx->pc = 0x448918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_44891c:
    // 0x44891c: 0x14960004  bne         $a0, $s6, . + 4 + (0x4 << 2)
label_448920:
    if (ctx->pc == 0x448920u) {
        ctx->pc = 0x448920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44891Cu;
        // 0x448920: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448924u;
        goto label_448924;
    }
    ctx->pc = 0x44891Cu;
    {
        const bool branch_taken_0x44891c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x448920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44891Cu;
        // 0x448920: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x44891c) {
            ctx->pc = 0x448930u;
            goto label_448930;
        }
    }
    ctx->pc = 0x448924u;
label_448924:
    // 0x448924: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x448924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_448928:
    // 0x448928: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x448928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_44892c:
    // 0x44892c: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x44892cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_448930:
    // 0x448930: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448934:
    // 0x448934: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448938:
    // 0x448938: 0x10e2015c  beq         $a3, $v0, . + 4 + (0x15C << 2)
label_44893c:
    if (ctx->pc == 0x44893Cu) {
        ctx->pc = 0x44893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448938u;
        // 0x44893c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448940u;
        goto label_448940;
    }
    ctx->pc = 0x448938u;
    {
        const bool branch_taken_0x448938 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x44893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448938u;
        // 0x44893c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448938) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x448940u;
label_448940:
    // 0x448940: 0x12a00018  beqz        $s5, . + 4 + (0x18 << 2)
label_448944:
    if (ctx->pc == 0x448944u) {
        ctx->pc = 0x448944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448940u;
        // 0x448944: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448948u;
        goto label_448948;
    }
    ctx->pc = 0x448940u;
    {
        const bool branch_taken_0x448940 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x448944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448940u;
        // 0x448944: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448940) {
            ctx->pc = 0x4489A4u;
            goto label_4489a4;
        }
    }
    ctx->pc = 0x448948u;
label_448948:
    // 0x448948: 0x52c00017  beql        $s6, $zero, . + 4 + (0x17 << 2)
label_44894c:
    if (ctx->pc == 0x44894Cu) {
        ctx->pc = 0x44894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448948u;
        // 0x44894c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448950u;
        goto label_448950;
    }
    ctx->pc = 0x448948u;
    {
        const bool branch_taken_0x448948 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x448948) {
            ctx->pc = 0x44894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448948u;
            // 0x44894c: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4489A8u;
            goto label_4489a8;
        }
    }
    ctx->pc = 0x448950u;
label_448950:
    // 0x448950: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x448950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_448954:
    // 0x448954: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x448954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448958:
    // 0x448958: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_44895c:
    if (ctx->pc == 0x44895Cu) {
        ctx->pc = 0x44895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448958u;
        // 0x44895c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448960u;
        goto label_448960;
    }
    ctx->pc = 0x448958u;
    {
        const bool branch_taken_0x448958 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x44895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448958u;
        // 0x44895c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448958) {
            ctx->pc = 0x448994u;
            goto label_448994;
        }
    }
    ctx->pc = 0x448960u;
label_448960:
    // 0x448960: 0x8ea60008  lw          $a2, 0x8($s5)
    ctx->pc = 0x448960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_448964:
    // 0x448964: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x448964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_448968:
    // 0x448968: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x448968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_44896c:
    // 0x44896c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x44896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448970:
    // 0x448970: 0x54670004  bnel        $v1, $a3, . + 4 + (0x4 << 2)
label_448974:
    if (ctx->pc == 0x448974u) {
        ctx->pc = 0x448974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448970u;
        // 0x448974: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448978u;
        goto label_448978;
    }
    ctx->pc = 0x448970u;
    {
        const bool branch_taken_0x448970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x448970) {
            ctx->pc = 0x448974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448970u;
            // 0x448974: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448984u;
            goto label_448984;
        }
    }
    ctx->pc = 0x448978u;
label_448978:
    // 0x448978: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x448978u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_44897c:
    // 0x44897c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x44897cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_448980:
    // 0x448980: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x448980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_448984:
    // 0x448984: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x448984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_448988:
    // 0x448988: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x448988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_44898c:
    // 0x44898c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_448990:
    if (ctx->pc == 0x448990u) {
        ctx->pc = 0x448990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44898Cu;
        // 0x448990: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448994u;
        goto label_448994;
    }
    ctx->pc = 0x44898Cu;
    {
        const bool branch_taken_0x44898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44898Cu;
        // 0x448990: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44898c) {
            ctx->pc = 0x448968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448968;
        }
    }
    ctx->pc = 0x448994u;
label_448994:
    // 0x448994: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448998:
    // 0x448998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_44899c:
    // 0x44899c: 0x12e20142  beq         $s7, $v0, . + 4 + (0x142 << 2)
label_4489a0:
    if (ctx->pc == 0x4489A0u) {
        ctx->pc = 0x4489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44899Cu;
        // 0x4489a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489A4u;
        goto label_4489a4;
    }
    ctx->pc = 0x44899Cu;
    {
        const bool branch_taken_0x44899c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x4489A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44899Cu;
        // 0x4489a0: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44899c) {
            ctx->pc = 0x448EA8u;
            goto label_448ea8;
        }
    }
    ctx->pc = 0x4489A4u;
label_4489a4:
    // 0x4489a4: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x4489a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4489a8:
    // 0x4489a8: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x4489a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_4489ac:
    // 0x4489ac: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x4489acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_4489b0:
    // 0x4489b0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x4489b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_4489b4:
    // 0x4489b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x4489b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_4489b8:
    // 0x4489b8: 0x40f809  jalr        $v0
label_4489bc:
    if (ctx->pc == 0x4489BCu) {
        ctx->pc = 0x4489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489B8u;
        // 0x4489bc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489C0u;
        goto label_4489c0;
    }
    ctx->pc = 0x4489B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4489C0u);
        ctx->pc = 0x4489BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489B8u;
        // 0x4489bc: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4489B8u, 0x4489C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4489C0u;
label_4489c0:
    // 0x4489c0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x4489c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4489c4:
    // 0x4489c4: 0x17c0000c  bnez        $fp, . + 4 + (0xC << 2)
label_4489c8:
    if (ctx->pc == 0x4489C8u) {
        ctx->pc = 0x4489C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489C4u;
        // 0x4489c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489CCu;
        goto label_4489cc;
    }
    ctx->pc = 0x4489C4u;
    {
        const bool branch_taken_0x4489c4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x4489C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489C4u;
        // 0x4489c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489c4) {
            ctx->pc = 0x4489F8u;
            goto label_4489f8;
        }
    }
    ctx->pc = 0x4489CCu;
label_4489cc:
    // 0x4489cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4489ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_4489d0:
    // 0x4489d0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4489d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_4489d4:
    // 0x4489d4: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x4489d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_4489d8:
    // 0x4489d8: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x4489d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_4489dc:
    // 0x4489dc: 0xc1035f6  jal         func_40D7D8
label_4489e0:
    if (ctx->pc == 0x4489E0u) {
        ctx->pc = 0x4489E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489DCu;
        // 0x4489e0: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489E4u;
        goto label_4489e4;
    }
    ctx->pc = 0x4489DCu;
    SET_GPR_U32(ctx, 31, 0x4489E4u);
    ctx->pc = 0x4489E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4489DCu;
    // 0x4489e0: 0x528c0  sll         $a1, $a1, 3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x4489DCu, 0x4489E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4489E4u;
label_4489e4:
    // 0x4489e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4489e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4489e8:
    // 0x4489e8: 0xc103628  jal         func_40D8A0
label_4489ec:
    if (ctx->pc == 0x4489ECu) {
        ctx->pc = 0x4489ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489E8u;
        // 0x4489ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489F0u;
        goto label_4489f0;
    }
    ctx->pc = 0x4489E8u;
    SET_GPR_U32(ctx, 31, 0x4489F0u);
    ctx->pc = 0x4489ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4489E8u;
    // 0x4489ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x4489E8u, 0x4489F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4489F0u;
label_4489f0:
    // 0x4489f0: 0x1000012e  b           . + 4 + (0x12E << 2)
label_4489f4:
    if (ctx->pc == 0x4489F4u) {
        ctx->pc = 0x4489F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489F0u;
        // 0x4489f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4489F8u;
        goto label_4489f8;
    }
    ctx->pc = 0x4489F0u;
    {
        const bool branch_taken_0x4489f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4489F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489F0u;
        // 0x4489f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489f0) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x4489F8u;
label_4489f8:
    // 0x4489f8: 0x12a00025  beqz        $s5, . + 4 + (0x25 << 2)
label_4489fc:
    if (ctx->pc == 0x4489FCu) {
        ctx->pc = 0x4489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489F8u;
        // 0x4489fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A00u;
        goto label_448a00;
    }
    ctx->pc = 0x4489F8u;
    {
        const bool branch_taken_0x4489f8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4489FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4489F8u;
        // 0x4489fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4489f8) {
            ctx->pc = 0x448A90u;
            goto label_448a90;
        }
    }
    ctx->pc = 0x448A00u;
label_448a00:
    // 0x448a00: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x448a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_448a04:
    // 0x448a04: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_448a08:
    if (ctx->pc == 0x448A08u) {
        ctx->pc = 0x448A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A04u;
        // 0x448a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A0Cu;
        goto label_448a0c;
    }
    ctx->pc = 0x448A04u;
    {
        const bool branch_taken_0x448a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A04u;
        // 0x448a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a04) {
            ctx->pc = 0x448A90u;
            goto label_448a90;
        }
    }
    ctx->pc = 0x448A0Cu;
label_448a0c:
    // 0x448a0c: 0x8eaa000c  lw          $t2, 0xC($s5)
    ctx->pc = 0x448a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_448a10:
    // 0x448a10: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x448a10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_448a14:
    // 0x448a14: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x448a14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448a18:
    // 0x448a18: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x448a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_448a1c:
    // 0x448a1c: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x448a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_448a20:
    // 0x448a20: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x448a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_448a24:
    // 0x448a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x448a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448a28:
    // 0x448a28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_448a2c:
    if (ctx->pc == 0x448A2Cu) {
        ctx->pc = 0x448A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A28u;
        // 0x448a2c: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A30u;
        goto label_448a30;
    }
    ctx->pc = 0x448A28u;
    {
        const bool branch_taken_0x448a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A28u;
        // 0x448a2c: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a28) {
            ctx->pc = 0x448A80u;
            goto label_448a80;
        }
    }
    ctx->pc = 0x448A30u;
label_448a30:
    // 0x448a30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x448a30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448a34:
    // 0x448a34: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_448a38:
    if (ctx->pc == 0x448A38u) {
        ctx->pc = 0x448A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A34u;
        // 0x448a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A3Cu;
        goto label_448a3c;
    }
    ctx->pc = 0x448A34u;
    {
        const bool branch_taken_0x448a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x448A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A34u;
        // 0x448a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a34) {
            ctx->pc = 0x448A68u;
            goto label_448a68;
        }
    }
    ctx->pc = 0x448A3Cu;
label_448a3c:
    // 0x448a3c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x448a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_448a40:
    // 0x448a40: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x448a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_448a44:
    // 0x448a44: 0x0  nop
    ctx->pc = 0x448a44u;
    // NOP
label_448a48:
    // 0x448a48: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x448a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_448a4c:
    // 0x448a4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x448a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448a50:
    // 0x448a50: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x448a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_448a54:
    // 0x448a54: 0xa3200a  movz        $a0, $a1, $v1
    ctx->pc = 0x448a54u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_448a58:
    // 0x448a58: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x448a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_448a5c:
    // 0x448a5c: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x448a5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_448a60:
    // 0x448a60: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_448a64:
    if (ctx->pc == 0x448A64u) {
        ctx->pc = 0x448A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A60u;
        // 0x448a64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A68u;
        goto label_448a68;
    }
    ctx->pc = 0x448A60u;
    {
        const bool branch_taken_0x448a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A60u;
        // 0x448a64: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a60) {
            ctx->pc = 0x448A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448a48;
        }
    }
    ctx->pc = 0x448A68u;
label_448a68:
    // 0x448a68: 0x14910006  bne         $a0, $s1, . + 4 + (0x6 << 2)
label_448a6c:
    if (ctx->pc == 0x448A6Cu) {
        ctx->pc = 0x448A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A68u;
        // 0x448a6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A70u;
        goto label_448a70;
    }
    ctx->pc = 0x448A68u;
    {
        const bool branch_taken_0x448a68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x448A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A68u;
        // 0x448a6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a68) {
            ctx->pc = 0x448A84u;
            goto label_448a84;
        }
    }
    ctx->pc = 0x448A70u;
label_448a70:
    // 0x448a70: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x448a70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
label_448a74:
    // 0x448a74: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x448a74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_448a78:
    // 0x448a78: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x448a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_448a7c:
    // 0x448a7c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x448a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_448a80:
    // 0x448a80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x448a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_448a84:
    // 0x448a84: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x448a84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_448a88:
    // 0x448a88: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_448a8c:
    if (ctx->pc == 0x448A8Cu) {
        ctx->pc = 0x448A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A88u;
        // 0x448a8c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448A90u;
        goto label_448a90;
    }
    ctx->pc = 0x448A88u;
    {
        const bool branch_taken_0x448a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A88u;
        // 0x448a8c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a88) {
            ctx->pc = 0x448A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448a20;
        }
    }
    ctx->pc = 0x448A90u;
label_448a90:
    // 0x448a90: 0x12c00027  beqz        $s6, . + 4 + (0x27 << 2)
label_448a94:
    if (ctx->pc == 0x448A94u) {
        ctx->pc = 0x448A98u;
        goto label_448a98;
    }
    ctx->pc = 0x448A90u;
    {
        const bool branch_taken_0x448a90 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x448a90) {
            ctx->pc = 0x448B30u;
            goto label_448b30;
        }
    }
    ctx->pc = 0x448A98u;
label_448a98:
    // 0x448a98: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x448a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_448a9c:
    // 0x448a9c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_448aa0:
    if (ctx->pc == 0x448AA0u) {
        ctx->pc = 0x448AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A9Cu;
        // 0x448aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448AA4u;
        goto label_448aa4;
    }
    ctx->pc = 0x448A9Cu;
    {
        const bool branch_taken_0x448a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448A9Cu;
        // 0x448aa0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448a9c) {
            ctx->pc = 0x448B30u;
            goto label_448b30;
        }
    }
    ctx->pc = 0x448AA4u;
label_448aa4:
    // 0x448aa4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x448aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_448aa8:
    // 0x448aa8: 0x8eca000c  lw          $t2, 0xC($s6)
    ctx->pc = 0x448aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_448aac:
    // 0x448aac: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x448aacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_448ab0:
    // 0x448ab0: 0x5e4021  addu        $t0, $v0, $fp
    ctx->pc = 0x448ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_448ab4:
    // 0x448ab4: 0x26270001  addiu       $a3, $s1, 0x1
    ctx->pc = 0x448ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_448ab8:
    // 0x448ab8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x448ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_448abc:
    // 0x448abc: 0x0  nop
    ctx->pc = 0x448abcu;
    // NOP
label_448ac0:
    // 0x448ac0: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x448ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_448ac4:
    // 0x448ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x448ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448ac8:
    // 0x448ac8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_448acc:
    if (ctx->pc == 0x448ACCu) {
        ctx->pc = 0x448ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448AC8u;
        // 0x448acc: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448AD0u;
        goto label_448ad0;
    }
    ctx->pc = 0x448AC8u;
    {
        const bool branch_taken_0x448ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448AC8u;
        // 0x448acc: 0x24b20001  addiu       $s2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ac8) {
            ctx->pc = 0x448B20u;
            goto label_448b20;
        }
    }
    ctx->pc = 0x448AD0u;
label_448ad0:
    // 0x448ad0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x448ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448ad4:
    // 0x448ad4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_448ad8:
    if (ctx->pc == 0x448AD8u) {
        ctx->pc = 0x448AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448AD4u;
        // 0x448ad8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448ADCu;
        goto label_448adc;
    }
    ctx->pc = 0x448AD4u;
    {
        const bool branch_taken_0x448ad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x448AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448AD4u;
        // 0x448ad8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ad4) {
            ctx->pc = 0x448B08u;
            goto label_448b08;
        }
    }
    ctx->pc = 0x448ADCu;
label_448adc:
    // 0x448adc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x448adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_448ae0:
    // 0x448ae0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x448ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_448ae4:
    // 0x448ae4: 0x0  nop
    ctx->pc = 0x448ae4u;
    // NOP
label_448ae8:
    // 0x448ae8: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x448ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_448aec:
    // 0x448aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x448aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_448af0:
    // 0x448af0: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x448af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
label_448af4:
    // 0x448af4: 0xa3200a  movz        $a0, $a1, $v1
    ctx->pc = 0x448af4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_448af8:
    // 0x448af8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x448af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_448afc:
    // 0x448afc: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x448afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_448b00:
    // 0x448b00: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_448b04:
    if (ctx->pc == 0x448B04u) {
        ctx->pc = 0x448B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B00u;
        // 0x448b04: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B08u;
        goto label_448b08;
    }
    ctx->pc = 0x448B00u;
    {
        const bool branch_taken_0x448b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B00u;
        // 0x448b04: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b00) {
            ctx->pc = 0x448AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448ae8;
        }
    }
    ctx->pc = 0x448B08u;
label_448b08:
    // 0x448b08: 0x14910006  bne         $a0, $s1, . + 4 + (0x6 << 2)
label_448b0c:
    if (ctx->pc == 0x448B0Cu) {
        ctx->pc = 0x448B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B08u;
        // 0x448b0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B10u;
        goto label_448b10;
    }
    ctx->pc = 0x448B08u;
    {
        const bool branch_taken_0x448b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x448B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B08u;
        // 0x448b0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b08) {
            ctx->pc = 0x448B24u;
            goto label_448b24;
        }
    }
    ctx->pc = 0x448B10u;
label_448b10:
    // 0x448b10: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x448b10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
label_448b14:
    // 0x448b14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x448b14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_448b18:
    // 0x448b18: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x448b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_448b1c:
    // 0x448b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x448b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_448b20:
    // 0x448b20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x448b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_448b24:
    // 0x448b24: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x448b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_448b28:
    // 0x448b28: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_448b2c:
    if (ctx->pc == 0x448B2Cu) {
        ctx->pc = 0x448B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B28u;
        // 0x448b2c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B30u;
        goto label_448b30;
    }
    ctx->pc = 0x448B28u;
    {
        const bool branch_taken_0x448b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B28u;
        // 0x448b2c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b28) {
            ctx->pc = 0x448AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448ac0;
        }
    }
    ctx->pc = 0x448B30u;
label_448b30:
    // 0x448b30: 0xc112074  jal         func_4481D0
label_448b34:
    if (ctx->pc == 0x448B34u) {
        ctx->pc = 0x448B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B30u;
        // 0x448b34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B38u;
        goto label_448b38;
    }
    ctx->pc = 0x448B30u;
    SET_GPR_U32(ctx, 31, 0x448B38u);
    ctx->pc = 0x448B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448B30u;
    // 0x448b34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4481D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4481D0u, 0x448B30u, 0x448B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448B38u;
label_448b38:
    // 0x448b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x448b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_448b3c:
    // 0x448b3c: 0x120000da  beqz        $s0, . + 4 + (0xDA << 2)
label_448b40:
    if (ctx->pc == 0x448B40u) {
        ctx->pc = 0x448B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B3Cu;
        // 0x448b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B44u;
        goto label_448b44;
    }
    ctx->pc = 0x448B3Cu;
    {
        const bool branch_taken_0x448b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B3Cu;
        // 0x448b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b3c) {
            ctx->pc = 0x448EA8u;
            goto label_448ea8;
        }
    }
    ctx->pc = 0x448B44u;
label_448b44:
    // 0x448b44: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x448b44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_448b48:
    // 0x448b48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x448b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_448b4c:
    // 0x448b4c: 0xc1120d8  jal         func_448360
label_448b50:
    if (ctx->pc == 0x448B50u) {
        ctx->pc = 0x448B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B4Cu;
        // 0x448b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B54u;
        goto label_448b54;
    }
    ctx->pc = 0x448B4Cu;
    SET_GPR_U32(ctx, 31, 0x448B54u);
    ctx->pc = 0x448B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448B4Cu;
    // 0x448b50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x448360u;
    goto label_448360;
    ctx->pc = 0x448B54u;
label_448b54:
    // 0x448b54: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x448b54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_448b58:
    // 0x448b58: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x448b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_448b5c:
    // 0x448b5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x448b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_448b60:
    // 0x448b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x448b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448b64:
    // 0x448b64: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x448b64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_448b68:
    // 0x448b68: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x448b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448b6c:
    // 0x448b6c: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_448b70:
    if (ctx->pc == 0x448B70u) {
        ctx->pc = 0x448B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B6Cu;
        // 0x448b70: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B74u;
        goto label_448b74;
    }
    ctx->pc = 0x448B6Cu;
    {
        const bool branch_taken_0x448b6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B6Cu;
        // 0x448b70: 0x439821  addu        $s3, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b6c) {
            ctx->pc = 0x448CA0u;
            goto label_448ca0;
        }
    }
    ctx->pc = 0x448B74u;
label_448b74:
    // 0x448b74: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x448b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_448b78:
    // 0x448b78: 0x24b20001  addiu       $s2, $a1, 0x1
    ctx->pc = 0x448b78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_448b7c:
    // 0x448b7c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x448b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_448b80:
    // 0x448b80: 0x12800043  beqz        $s4, . + 4 + (0x43 << 2)
label_448b84:
    if (ctx->pc == 0x448B84u) {
        ctx->pc = 0x448B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B80u;
        // 0x448b84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B88u;
        goto label_448b88;
    }
    ctx->pc = 0x448B80u;
    {
        const bool branch_taken_0x448b80 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x448B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B80u;
        // 0x448b84: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448b80) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448B88u;
label_448b88:
    // 0x448b88: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x448b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_448b8c:
    // 0x448b8c: 0x50400041  beql        $v0, $zero, . + 4 + (0x41 << 2)
label_448b90:
    if (ctx->pc == 0x448B90u) {
        ctx->pc = 0x448B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B8Cu;
        // 0x448b90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B94u;
        goto label_448b94;
    }
    ctx->pc = 0x448B8Cu;
    {
        const bool branch_taken_0x448b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448b8c) {
            ctx->pc = 0x448B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448B8Cu;
            // 0x448b90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448B94u;
label_448b94:
    // 0x448b94: 0x5260003f  beql        $s3, $zero, . + 4 + (0x3F << 2)
label_448b98:
    if (ctx->pc == 0x448B98u) {
        ctx->pc = 0x448B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448B94u;
        // 0x448b98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448B9Cu;
        goto label_448b9c;
    }
    ctx->pc = 0x448B94u;
    {
        const bool branch_taken_0x448b94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x448b94) {
            ctx->pc = 0x448B98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448B94u;
            // 0x448b98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448B9Cu;
label_448b9c:
    // 0x448b9c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x448b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_448ba0:
    // 0x448ba0: 0x5040003c  beql        $v0, $zero, . + 4 + (0x3C << 2)
label_448ba4:
    if (ctx->pc == 0x448BA4u) {
        ctx->pc = 0x448BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BA0u;
        // 0x448ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BA8u;
        goto label_448ba8;
    }
    ctx->pc = 0x448BA0u;
    {
        const bool branch_taken_0x448ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448ba0) {
            ctx->pc = 0x448BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448BA0u;
            // 0x448ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448BA8u;
label_448ba8:
    // 0x448ba8: 0x10a00039  beqz        $a1, . + 4 + (0x39 << 2)
label_448bac:
    if (ctx->pc == 0x448BACu) {
        ctx->pc = 0x448BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BA8u;
        // 0x448bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BB0u;
        goto label_448bb0;
    }
    ctx->pc = 0x448BA8u;
    {
        const bool branch_taken_0x448ba8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x448BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BA8u;
        // 0x448bac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ba8) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448BB0u;
label_448bb0:
    // 0x448bb0: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x448bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_448bb4:
    // 0x448bb4: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
label_448bb8:
    if (ctx->pc == 0x448BB8u) {
        ctx->pc = 0x448BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BB4u;
        // 0x448bb8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BBCu;
        goto label_448bbc;
    }
    ctx->pc = 0x448BB4u;
    {
        const bool branch_taken_0x448bb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BB4u;
        // 0x448bb8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448bb4) {
            ctx->pc = 0x448C64u;
            goto label_448c64;
        }
    }
    ctx->pc = 0x448BBCu;
label_448bbc:
    // 0x448bbc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x448bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_448bc0:
    // 0x448bc0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x448bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_448bc4:
    // 0x448bc4: 0x31040003  andi        $a0, $t0, 0x3
    ctx->pc = 0x448bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_448bc8:
    // 0x448bc8: 0x19000011  blez        $t0, . + 4 + (0x11 << 2)
label_448bcc:
    if (ctx->pc == 0x448BCCu) {
        ctx->pc = 0x448BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BC8u;
        // 0x448bcc: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BD0u;
        goto label_448bd0;
    }
    ctx->pc = 0x448BC8u;
    {
        const bool branch_taken_0x448bc8 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x448BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BC8u;
        // 0x448bcc: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448bc8) {
            ctx->pc = 0x448C10u;
            goto label_448c10;
        }
    }
    ctx->pc = 0x448BD0u;
label_448bd0:
    // 0x448bd0: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_448bd4:
    if (ctx->pc == 0x448BD4u) {
        ctx->pc = 0x448BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BD0u;
        // 0x448bd4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BD8u;
        goto label_448bd8;
    }
    ctx->pc = 0x448BD0u;
    {
        const bool branch_taken_0x448bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x448bd0) {
            ctx->pc = 0x448BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448BD0u;
            // 0x448bd4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C2Cu;
            goto label_448c2c;
        }
    }
    ctx->pc = 0x448BD8u;
label_448bd8:
    // 0x448bd8: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x448bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_448bdc:
    // 0x448bdc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_448be0:
    if (ctx->pc == 0x448BE0u) {
        ctx->pc = 0x448BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BDCu;
        // 0x448be0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BE4u;
        goto label_448be4;
    }
    ctx->pc = 0x448BDCu;
    {
        const bool branch_taken_0x448bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448bdc) {
            ctx->pc = 0x448BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448BDCu;
            // 0x448be0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C14u;
            goto label_448c14;
        }
    }
    ctx->pc = 0x448BE4u;
label_448be4:
    // 0x448be4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x448be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_448be8:
    // 0x448be8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_448bec:
    if (ctx->pc == 0x448BECu) {
        ctx->pc = 0x448BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BE8u;
        // 0x448bec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BF0u;
        goto label_448bf0;
    }
    ctx->pc = 0x448BE8u;
    {
        const bool branch_taken_0x448be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448be8) {
            ctx->pc = 0x448BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448BE8u;
            // 0x448bec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C04u;
            goto label_448c04;
        }
    }
    ctx->pc = 0x448BF0u;
label_448bf0:
    // 0x448bf0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x448bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_448bf4:
    // 0x448bf4: 0x10450026  beq         $v0, $a1, . + 4 + (0x26 << 2)
label_448bf8:
    if (ctx->pc == 0x448BF8u) {
        ctx->pc = 0x448BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BF4u;
        // 0x448bf8: 0x24e3000c  addiu       $v1, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448BFCu;
        goto label_448bfc;
    }
    ctx->pc = 0x448BF4u;
    {
        const bool branch_taken_0x448bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x448BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448BF4u;
        // 0x448bf8: 0x24e3000c  addiu       $v1, $a3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448bf4) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448BFCu;
label_448bfc:
    // 0x448bfc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x448bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_448c00:
    // 0x448c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448c04:
    // 0x448c04: 0x10450022  beq         $v0, $a1, . + 4 + (0x22 << 2)
label_448c08:
    if (ctx->pc == 0x448C08u) {
        ctx->pc = 0x448C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C04u;
        // 0x448c08: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C0Cu;
        goto label_448c0c;
    }
    ctx->pc = 0x448C04u;
    {
        const bool branch_taken_0x448c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x448C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C04u;
        // 0x448c08: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c04) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448C0Cu;
label_448c0c:
    // 0x448c0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x448c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_448c10:
    // 0x448c10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448c14:
    // 0x448c14: 0x1045001e  beq         $v0, $a1, . + 4 + (0x1E << 2)
label_448c18:
    if (ctx->pc == 0x448C18u) {
        ctx->pc = 0x448C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C14u;
        // 0x448c18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C1Cu;
        goto label_448c1c;
    }
    ctx->pc = 0x448C14u;
    {
        const bool branch_taken_0x448c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x448C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C14u;
        // 0x448c18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c14) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448C1Cu;
label_448c1c:
    // 0x448c1c: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x448c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_448c20:
    // 0x448c20: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_448c24:
    if (ctx->pc == 0x448C24u) {
        ctx->pc = 0x448C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C20u;
        // 0x448c24: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C28u;
        goto label_448c28;
    }
    ctx->pc = 0x448C20u;
    {
        const bool branch_taken_0x448c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C20u;
        // 0x448c24: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c20) {
            ctx->pc = 0x448C64u;
            goto label_448c64;
        }
    }
    ctx->pc = 0x448C28u;
label_448c28:
    // 0x448c28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x448c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_448c2c:
    // 0x448c2c: 0x50450019  beql        $v0, $a1, . + 4 + (0x19 << 2)
label_448c30:
    if (ctx->pc == 0x448C30u) {
        ctx->pc = 0x448C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C2Cu;
        // 0x448c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C34u;
        goto label_448c34;
    }
    ctx->pc = 0x448C2Cu;
    {
        const bool branch_taken_0x448c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x448c2c) {
            ctx->pc = 0x448C30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448C2Cu;
            // 0x448c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448C34u;
label_448c34:
    // 0x448c34: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x448c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_448c38:
    // 0x448c38: 0x50450016  beql        $v0, $a1, . + 4 + (0x16 << 2)
label_448c3c:
    if (ctx->pc == 0x448C3Cu) {
        ctx->pc = 0x448C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C38u;
        // 0x448c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C40u;
        goto label_448c40;
    }
    ctx->pc = 0x448C38u;
    {
        const bool branch_taken_0x448c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x448c38) {
            ctx->pc = 0x448C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448C38u;
            // 0x448c3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448C40u;
label_448c40:
    // 0x448c40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x448c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_448c44:
    // 0x448c44: 0x50450013  beql        $v0, $a1, . + 4 + (0x13 << 2)
label_448c48:
    if (ctx->pc == 0x448C48u) {
        ctx->pc = 0x448C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C44u;
        // 0x448c48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C4Cu;
        goto label_448c4c;
    }
    ctx->pc = 0x448C44u;
    {
        const bool branch_taken_0x448c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x448c44) {
            ctx->pc = 0x448C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448C44u;
            // 0x448c48: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448C4Cu;
label_448c4c:
    // 0x448c4c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x448c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_448c50:
    // 0x448c50: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
label_448c54:
    if (ctx->pc == 0x448C54u) {
        ctx->pc = 0x448C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C50u;
        // 0x448c54: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C58u;
        goto label_448c58;
    }
    ctx->pc = 0x448C50u;
    {
        const bool branch_taken_0x448c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x448C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C50u;
        // 0x448c54: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c50) {
            ctx->pc = 0x448C90u;
            goto label_448c90;
        }
    }
    ctx->pc = 0x448C58u;
label_448c58:
    // 0x448c58: 0xc8102b  sltu        $v0, $a2, $t0
    ctx->pc = 0x448c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_448c5c:
    // 0x448c5c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_448c60:
    if (ctx->pc == 0x448C60u) {
        ctx->pc = 0x448C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C5Cu;
        // 0x448c60: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C64u;
        goto label_448c64;
    }
    ctx->pc = 0x448C5Cu;
    {
        const bool branch_taken_0x448c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C5Cu;
        // 0x448c60: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c5c) {
            ctx->pc = 0x448C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448c28;
        }
    }
    ctx->pc = 0x448C64u;
label_448c64:
    // 0x448c64: 0xc111a64  jal         func_446990
label_448c68:
    if (ctx->pc == 0x448C68u) {
        ctx->pc = 0x448C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C64u;
        // 0x448c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C6Cu;
        goto label_448c6c;
    }
    ctx->pc = 0x448C64u;
    SET_GPR_U32(ctx, 31, 0x448C6Cu);
    ctx->pc = 0x448C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448C64u;
    // 0x448c68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x446990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x446990u, 0x448C64u, 0x448C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448C6Cu;
label_448c6c:
    // 0x448c6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x448c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_448c70:
    // 0x448c70: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_448c74:
    if (ctx->pc == 0x448C74u) {
        ctx->pc = 0x448C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C70u;
        // 0x448c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448C78u;
        goto label_448c78;
    }
    ctx->pc = 0x448C70u;
    {
        const bool branch_taken_0x448c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x448C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C70u;
        // 0x448c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c70) {
            ctx->pc = 0x448C94u;
            goto label_448c94;
        }
    }
    ctx->pc = 0x448C78u;
label_448c78:
    // 0x448c78: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x448c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_448c7c:
    // 0x448c7c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x448c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_448c80:
    // 0x448c80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x448c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_448c84:
    // 0x448c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_448c88:
    // 0x448c88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x448c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_448c8c:
    // 0x448c8c: 0xac43fffc  sw          $v1, -0x4($v0)
    ctx->pc = 0x448c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 3));
label_448c90:
    // 0x448c90: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x448c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_448c94:
    // 0x448c94: 0xb1102b  sltu        $v0, $a1, $s1
    ctx->pc = 0x448c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_448c98:
    // 0x448c98: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_448c9c:
    if (ctx->pc == 0x448C9Cu) {
        ctx->pc = 0x448C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C98u;
        // 0x448c9c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448CA0u;
        goto label_448ca0;
    }
    ctx->pc = 0x448C98u;
    {
        const bool branch_taken_0x448c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x448C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448C98u;
        // 0x448c9c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448c98) {
            ctx->pc = 0x448B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_448b78;
        }
    }
    ctx->pc = 0x448CA0u;
label_448ca0:
    // 0x448ca0: 0x12a00048  beqz        $s5, . + 4 + (0x48 << 2)
label_448ca4:
    if (ctx->pc == 0x448CA4u) {
        ctx->pc = 0x448CA8u;
        goto label_448ca8;
    }
    ctx->pc = 0x448CA0u;
    {
        const bool branch_taken_0x448ca0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x448ca0) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448CA8u;
label_448ca8:
    // 0x448ca8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x448ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_448cac:
    // 0x448cac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_448cb0:
    if (ctx->pc == 0x448CB0u) {
        ctx->pc = 0x448CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CACu;
        // 0x448cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448CB4u;
        goto label_448cb4;
    }
    ctx->pc = 0x448CACu;
    {
        const bool branch_taken_0x448cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CACu;
        // 0x448cb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448cac) {
            ctx->pc = 0x448CCCu;
            goto label_448ccc;
        }
    }
    ctx->pc = 0x448CB4u;
label_448cb4:
    // 0x448cb4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x448cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_448cb8:
    // 0x448cb8: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x448cb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_448cbc:
    // 0x448cbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_448cc0:
    if (ctx->pc == 0x448CC0u) {
        ctx->pc = 0x448CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CBCu;
        // 0x448cc0: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448CC4u;
        goto label_448cc4;
    }
    ctx->pc = 0x448CBCu;
    {
        const bool branch_taken_0x448cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CBCu;
        // 0x448cc0: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448cbc) {
            ctx->pc = 0x448CCCu;
            goto label_448ccc;
        }
    }
    ctx->pc = 0x448CC4u;
label_448cc4:
    // 0x448cc4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x448cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_448cc8:
    // 0x448cc8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x448cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_448ccc:
    // 0x448ccc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_448cd0:
    if (ctx->pc == 0x448CD0u) {
        ctx->pc = 0x448CD4u;
        goto label_448cd4;
    }
    ctx->pc = 0x448CCCu;
    {
        const bool branch_taken_0x448ccc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x448ccc) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448CD4u;
label_448cd4:
    // 0x448cd4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x448cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448cd8:
    // 0x448cd8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_448cdc:
    if (ctx->pc == 0x448CDCu) {
        ctx->pc = 0x448CE0u;
        goto label_448ce0;
    }
    ctx->pc = 0x448CD8u;
    {
        const bool branch_taken_0x448cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448cd8) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448CE0u;
label_448ce0:
    // 0x448ce0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_448ce4:
    if (ctx->pc == 0x448CE4u) {
        ctx->pc = 0x448CE8u;
        goto label_448ce8;
    }
    ctx->pc = 0x448CE0u;
    {
        const bool branch_taken_0x448ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x448ce0) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448CE8u;
label_448ce8:
    // 0x448ce8: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_448cec:
    if (ctx->pc == 0x448CECu) {
        ctx->pc = 0x448CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CE8u;
        // 0x448cec: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448CF0u;
        goto label_448cf0;
    }
    ctx->pc = 0x448CE8u;
    {
        const bool branch_taken_0x448ce8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x448CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448CE8u;
        // 0x448cec: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ce8) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448CF0u;
label_448cf0:
    // 0x448cf0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x448cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_448cf4:
    // 0x448cf4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x448cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448cf8:
    // 0x448cf8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x448cf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_448cfc:
    // 0x448cfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x448cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_448d00:
    // 0x448d00: 0x14560004  bne         $v0, $s6, . + 4 + (0x4 << 2)
label_448d04:
    if (ctx->pc == 0x448D04u) {
        ctx->pc = 0x448D08u;
        goto label_448d08;
    }
    ctx->pc = 0x448D00u;
    {
        const bool branch_taken_0x448d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x448d00) {
            ctx->pc = 0x448D14u;
            goto label_448d14;
        }
    }
    ctx->pc = 0x448D08u;
label_448d08:
    // 0x448d08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448d0c:
    // 0x448d0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448d10:
    // 0x448d10: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x448d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_448d14:
    // 0x448d14: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_448d18:
    if (ctx->pc == 0x448D18u) {
        ctx->pc = 0x448D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D14u;
        // 0x448d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448D1Cu;
        goto label_448d1c;
    }
    ctx->pc = 0x448D14u;
    {
        const bool branch_taken_0x448d14 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D14u;
        // 0x448d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d14) {
            ctx->pc = 0x448D40u;
            goto label_448d40;
        }
    }
    ctx->pc = 0x448D1Cu;
label_448d1c:
    // 0x448d1c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x448d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_448d20:
    // 0x448d20: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_448d24:
    if (ctx->pc == 0x448D24u) {
        ctx->pc = 0x448D28u;
        goto label_448d28;
    }
    ctx->pc = 0x448D20u;
    {
        const bool branch_taken_0x448d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d20) {
            ctx->pc = 0x448D40u;
            goto label_448d40;
        }
    }
    ctx->pc = 0x448D28u;
label_448d28:
    // 0x448d28: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x448d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_448d2c:
    // 0x448d2c: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x448d2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_448d30:
    // 0x448d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_448d34:
    if (ctx->pc == 0x448D34u) {
        ctx->pc = 0x448D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D30u;
        // 0x448d34: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448D38u;
        goto label_448d38;
    }
    ctx->pc = 0x448D30u;
    {
        const bool branch_taken_0x448d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D30u;
        // 0x448d34: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d30) {
            ctx->pc = 0x448D40u;
            goto label_448d40;
        }
    }
    ctx->pc = 0x448D38u;
label_448d38:
    // 0x448d38: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x448d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_448d3c:
    // 0x448d3c: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x448d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_448d40:
    // 0x448d40: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_448d44:
    if (ctx->pc == 0x448D44u) {
        ctx->pc = 0x448D48u;
        goto label_448d48;
    }
    ctx->pc = 0x448D40u;
    {
        const bool branch_taken_0x448d40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d40) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D48u;
label_448d48:
    // 0x448d48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x448d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448d4c:
    // 0x448d4c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_448d50:
    if (ctx->pc == 0x448D50u) {
        ctx->pc = 0x448D54u;
        goto label_448d54;
    }
    ctx->pc = 0x448D4Cu;
    {
        const bool branch_taken_0x448d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d4c) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D54u;
label_448d54:
    // 0x448d54: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_448d58:
    if (ctx->pc == 0x448D58u) {
        ctx->pc = 0x448D5Cu;
        goto label_448d5c;
    }
    ctx->pc = 0x448D54u;
    {
        const bool branch_taken_0x448d54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d54) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D5Cu;
label_448d5c:
    // 0x448d5c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448d60:
    // 0x448d60: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x448d60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_448d64:
    // 0x448d64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448d68:
    // 0x448d68: 0x15020016  bne         $t0, $v0, . + 4 + (0x16 << 2)
label_448d6c:
    if (ctx->pc == 0x448D6Cu) {
        ctx->pc = 0x448D70u;
        goto label_448d70;
    }
    ctx->pc = 0x448D68u;
    {
        const bool branch_taken_0x448d68 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x448d68) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D70u;
label_448d70:
    // 0x448d70: 0x12600014  beqz        $s3, . + 4 + (0x14 << 2)
label_448d74:
    if (ctx->pc == 0x448D74u) {
        ctx->pc = 0x448D78u;
        goto label_448d78;
    }
    ctx->pc = 0x448D70u;
    {
        const bool branch_taken_0x448d70 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x448d70) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D78u;
label_448d78:
    // 0x448d78: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x448d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_448d7c:
    // 0x448d7c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_448d80:
    if (ctx->pc == 0x448D80u) {
        ctx->pc = 0x448D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D7Cu;
        // 0x448d80: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448D84u;
        goto label_448d84;
    }
    ctx->pc = 0x448D7Cu;
    {
        const bool branch_taken_0x448d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448D7Cu;
        // 0x448d80: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448d7c) {
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448D84u;
label_448d84:
    // 0x448d84: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x448d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448d88:
    // 0x448d88: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x448d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_448d8c:
    // 0x448d8c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x448d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_448d90:
    // 0x448d90: 0x2651023  subu        $v0, $s3, $a1
    ctx->pc = 0x448d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
label_448d94:
    // 0x448d94: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x448d94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_448d98:
    // 0x448d98: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x448d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448d9c:
    // 0x448d9c: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x448d9cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_448da0:
    // 0x448da0: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x448da0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448da4:
    // 0x448da4: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x448da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_448da8:
    // 0x448da8: 0x14930004  bne         $a0, $s3, . + 4 + (0x4 << 2)
label_448dac:
    if (ctx->pc == 0x448DACu) {
        ctx->pc = 0x448DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DA8u;
        // 0x448dac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448DB0u;
        goto label_448db0;
    }
    ctx->pc = 0x448DA8u;
    {
        const bool branch_taken_0x448da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x448DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DA8u;
        // 0x448dac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448da8) {
            ctx->pc = 0x448DBCu;
            goto label_448dbc;
        }
    }
    ctx->pc = 0x448DB0u;
label_448db0:
    // 0x448db0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x448db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_448db4:
    // 0x448db4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x448db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_448db8:
    // 0x448db8: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448db8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448dbc:
    // 0x448dbc: 0x54c80001  bnel        $a2, $t0, . + 4 + (0x1 << 2)
label_448dc0:
    if (ctx->pc == 0x448DC0u) {
        ctx->pc = 0x448DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DBCu;
        // 0x448dc0: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448DC4u;
        goto label_448dc4;
    }
    ctx->pc = 0x448DBCu;
    {
        const bool branch_taken_0x448dbc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x448dbc) {
            ctx->pc = 0x448DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448DBCu;
            // 0x448dc0: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448DC4u;
            goto label_448dc4;
        }
    }
    ctx->pc = 0x448DC4u;
label_448dc4:
    // 0x448dc4: 0x12c0002a  beqz        $s6, . + 4 + (0x2A << 2)
label_448dc8:
    if (ctx->pc == 0x448DC8u) {
        ctx->pc = 0x448DCCu;
        goto label_448dcc;
    }
    ctx->pc = 0x448DC4u;
    {
        const bool branch_taken_0x448dc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x448dc4) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448DCCu;
label_448dcc:
    // 0x448dcc: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
label_448dd0:
    if (ctx->pc == 0x448DD0u) {
        ctx->pc = 0x448DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DCCu;
        // 0x448dd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448DD4u;
        goto label_448dd4;
    }
    ctx->pc = 0x448DCCu;
    {
        const bool branch_taken_0x448dcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x448DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DCCu;
        // 0x448dd0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448dcc) {
            ctx->pc = 0x448DECu;
            goto label_448dec;
        }
    }
    ctx->pc = 0x448DD4u;
label_448dd4:
    // 0x448dd4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x448dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_448dd8:
    // 0x448dd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_448ddc:
    if (ctx->pc == 0x448DDCu) {
        ctx->pc = 0x448DE0u;
        goto label_448de0;
    }
    ctx->pc = 0x448DD8u;
    {
        const bool branch_taken_0x448dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448dd8) {
            ctx->pc = 0x448DECu;
            goto label_448dec;
        }
    }
    ctx->pc = 0x448DE0u;
label_448de0:
    // 0x448de0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x448de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_448de4:
    // 0x448de4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_448de8:
    if (ctx->pc == 0x448DE8u) {
        ctx->pc = 0x448DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448DE4u;
        // 0x448de8: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448DECu;
        goto label_448dec;
    }
    ctx->pc = 0x448DE4u;
    {
        const bool branch_taken_0x448de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x448de4) {
            ctx->pc = 0x448DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448DE4u;
            // 0x448de8: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448DECu;
            goto label_448dec;
        }
    }
    ctx->pc = 0x448DECu;
label_448dec:
    // 0x448dec: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_448df0:
    if (ctx->pc == 0x448DF0u) {
        ctx->pc = 0x448DF4u;
        goto label_448df4;
    }
    ctx->pc = 0x448DECu;
    {
        const bool branch_taken_0x448dec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x448dec) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448DF4u;
label_448df4:
    // 0x448df4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x448df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_448df8:
    // 0x448df8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_448dfc:
    if (ctx->pc == 0x448DFCu) {
        ctx->pc = 0x448E00u;
        goto label_448e00;
    }
    ctx->pc = 0x448DF8u;
    {
        const bool branch_taken_0x448df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x448df8) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E00u;
label_448e00:
    // 0x448e00: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
label_448e04:
    if (ctx->pc == 0x448E04u) {
        ctx->pc = 0x448E08u;
        goto label_448e08;
    }
    ctx->pc = 0x448E00u;
    {
        const bool branch_taken_0x448e00 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x448e00) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E08u;
label_448e08:
    // 0x448e08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x448e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_448e0c:
    // 0x448e0c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x448e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_448e10:
    // 0x448e10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x448e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_448e14:
    // 0x448e14: 0x15020016  bne         $t0, $v0, . + 4 + (0x16 << 2)
label_448e18:
    if (ctx->pc == 0x448E18u) {
        ctx->pc = 0x448E1Cu;
        goto label_448e1c;
    }
    ctx->pc = 0x448E14u;
    {
        const bool branch_taken_0x448e14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x448e14) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E1Cu;
label_448e1c:
    // 0x448e1c: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
label_448e20:
    if (ctx->pc == 0x448E20u) {
        ctx->pc = 0x448E24u;
        goto label_448e24;
    }
    ctx->pc = 0x448E1Cu;
    {
        const bool branch_taken_0x448e1c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x448e1c) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E24u;
label_448e24:
    // 0x448e24: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x448e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_448e28:
    // 0x448e28: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_448e2c:
    if (ctx->pc == 0x448E2Cu) {
        ctx->pc = 0x448E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E28u;
        // 0x448e2c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E30u;
        goto label_448e30;
    }
    ctx->pc = 0x448E28u;
    {
        const bool branch_taken_0x448e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x448E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E28u;
        // 0x448e2c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e28) {
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E30u;
label_448e30:
    // 0x448e30: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x448e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_448e34:
    // 0x448e34: 0x3c03cccc  lui         $v1, 0xCCCC
    ctx->pc = 0x448e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52428 << 16));
label_448e38:
    // 0x448e38: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x448e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_448e3c:
    // 0x448e3c: 0x2c51023  subu        $v0, $s6, $a1
    ctx->pc = 0x448e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_448e40:
    // 0x448e40: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x448e40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_448e44:
    // 0x448e44: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x448e44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448e48:
    // 0x448e48: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x448e48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
label_448e4c:
    // 0x448e4c: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x448e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_448e50:
    // 0x448e50: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x448e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_448e54:
    // 0x448e54: 0x14960004  bne         $a0, $s6, . + 4 + (0x4 << 2)
label_448e58:
    if (ctx->pc == 0x448E58u) {
        ctx->pc = 0x448E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E54u;
        // 0x448e58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E5Cu;
        goto label_448e5c;
    }
    ctx->pc = 0x448E54u;
    {
        const bool branch_taken_0x448e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 22));
        ctx->pc = 0x448E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E54u;
        // 0x448e58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x448e54) {
            ctx->pc = 0x448E68u;
            goto label_448e68;
        }
    }
    ctx->pc = 0x448E5Cu;
label_448e5c:
    // 0x448e5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x448e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_448e60:
    // 0x448e60: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x448e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_448e64:
    // 0x448e64: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x448e64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_448e68:
    // 0x448e68: 0x54c80001  bnel        $a2, $t0, . + 4 + (0x1 << 2)
label_448e6c:
    if (ctx->pc == 0x448E6Cu) {
        ctx->pc = 0x448E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E68u;
        // 0x448e6c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E70u;
        goto label_448e70;
    }
    ctx->pc = 0x448E68u;
    {
        const bool branch_taken_0x448e68 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x448e68) {
            ctx->pc = 0x448E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448E68u;
            // 0x448e6c: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448E70u;
            goto label_448e70;
        }
    }
    ctx->pc = 0x448E70u;
label_448e70:
    // 0x448e70: 0xc111dea  jal         func_4477A8
label_448e74:
    if (ctx->pc == 0x448E74u) {
        ctx->pc = 0x448E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E70u;
        // 0x448e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E78u;
        goto label_448e78;
    }
    ctx->pc = 0x448E70u;
    SET_GPR_U32(ctx, 31, 0x448E78u);
    ctx->pc = 0x448E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448E70u;
    // 0x448e74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4477A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4477A8u, 0x448E70u, 0x448E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448E78u;
label_448e78:
    // 0x448e78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x448e78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_448e7c:
    // 0x448e7c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
label_448e80:
    if (ctx->pc == 0x448E80u) {
        ctx->pc = 0x448E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E7Cu;
        // 0x448e80: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E84u;
        goto label_448e84;
    }
    ctx->pc = 0x448E7Cu;
    {
        const bool branch_taken_0x448e7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x448e7c) {
            ctx->pc = 0x448E80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x448E7Cu;
            // 0x448e80: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x448E90u;
            goto label_448e90;
        }
    }
    ctx->pc = 0x448E84u;
label_448e84:
    // 0x448e84: 0xc1116c6  jal         func_445B18
label_448e88:
    if (ctx->pc == 0x448E88u) {
        ctx->pc = 0x448E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E84u;
        // 0x448e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448E8Cu;
        goto label_448e8c;
    }
    ctx->pc = 0x448E84u;
    SET_GPR_U32(ctx, 31, 0x448E8Cu);
    ctx->pc = 0x448E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x448E84u;
    // 0x448e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x445B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445B18u, 0x448E84u, 0x448E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x448E8Cu;
label_448e8c:
    // 0x448e8c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x448e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_448e90:
    // 0x448e90: 0x2443e880  addiu       $v1, $v0, -0x1780
    ctx->pc = 0x448e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_448e94:
    // 0x448e94: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x448e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_448e98:
    // 0x448e98: 0x40f809  jalr        $v0
label_448e9c:
    if (ctx->pc == 0x448E9Cu) {
        ctx->pc = 0x448E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E98u;
        // 0x448e9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EA0u;
        goto label_448ea0;
    }
    ctx->pc = 0x448E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x448EA0u);
        ctx->pc = 0x448E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448E98u;
        // 0x448e9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448E98u, 0x448EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x448EA0u;
label_448ea0:
    // 0x448ea0: 0x10000002  b           . + 4 + (0x2 << 2)
label_448ea4:
    if (ctx->pc == 0x448EA4u) {
        ctx->pc = 0x448EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EA0u;
        // 0x448ea4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EA8u;
        goto label_448ea8;
    }
    ctx->pc = 0x448EA0u;
    {
        const bool branch_taken_0x448ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x448EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448EA0u;
        // 0x448ea4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x448ea0) {
            ctx->pc = 0x448EACu;
            goto label_448eac;
        }
    }
    ctx->pc = 0x448EA8u;
label_448ea8:
    // 0x448ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x448ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_448eac:
    // 0x448eac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x448eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_448eb0:
    // 0x448eb0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x448eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_448eb4:
    // 0x448eb4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x448eb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_448eb8:
    // 0x448eb8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x448eb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_448ebc:
    // 0x448ebc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x448ebcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_448ec0:
    // 0x448ec0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x448ec0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_448ec4:
    // 0x448ec4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x448ec4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_448ec8:
    // 0x448ec8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x448ec8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_448ecc:
    // 0x448ecc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x448eccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_448ed0:
    // 0x448ed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x448ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_448ed4:
    // 0x448ed4: 0x3e00008  jr          $ra
label_448ed8:
    if (ctx->pc == 0x448ED8u) {
        ctx->pc = 0x448ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448ED4u;
        // 0x448ed8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x448EDCu;
        goto label_448edc;
    }
    ctx->pc = 0x448ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x448ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x448ED4u;
        // 0x448ed8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x448ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x448EDCu;
label_448edc:
    // 0x448edc: 0x0  nop
    ctx->pc = 0x448edcu;
    // NOP
    ctx->pc = 0x448ee0u;
}
