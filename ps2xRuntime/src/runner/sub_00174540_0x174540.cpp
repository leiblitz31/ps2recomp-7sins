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

// Function: sub_00174540
// Address: 0x174540 - 0x175a00
void sub_00174540_0x174540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174540_0x174540");
#endif

    switch (ctx->pc) {
        case 0x174540u: goto label_174540;
        case 0x174544u: goto label_174544;
        case 0x174548u: goto label_174548;
        case 0x17454cu: goto label_17454c;
        case 0x174550u: goto label_174550;
        case 0x174554u: goto label_174554;
        case 0x174558u: goto label_174558;
        case 0x17455cu: goto label_17455c;
        case 0x174560u: goto label_174560;
        case 0x174564u: goto label_174564;
        case 0x174568u: goto label_174568;
        case 0x17456cu: goto label_17456c;
        case 0x174570u: goto label_174570;
        case 0x174574u: goto label_174574;
        case 0x174578u: goto label_174578;
        case 0x17457cu: goto label_17457c;
        case 0x174580u: goto label_174580;
        case 0x174584u: goto label_174584;
        case 0x174588u: goto label_174588;
        case 0x17458cu: goto label_17458c;
        case 0x174590u: goto label_174590;
        case 0x174594u: goto label_174594;
        case 0x174598u: goto label_174598;
        case 0x17459cu: goto label_17459c;
        case 0x1745a0u: goto label_1745a0;
        case 0x1745a4u: goto label_1745a4;
        case 0x1745a8u: goto label_1745a8;
        case 0x1745acu: goto label_1745ac;
        case 0x1745b0u: goto label_1745b0;
        case 0x1745b4u: goto label_1745b4;
        case 0x1745b8u: goto label_1745b8;
        case 0x1745bcu: goto label_1745bc;
        case 0x1745c0u: goto label_1745c0;
        case 0x1745c4u: goto label_1745c4;
        case 0x1745c8u: goto label_1745c8;
        case 0x1745ccu: goto label_1745cc;
        case 0x1745d0u: goto label_1745d0;
        case 0x1745d4u: goto label_1745d4;
        case 0x1745d8u: goto label_1745d8;
        case 0x1745dcu: goto label_1745dc;
        case 0x1745e0u: goto label_1745e0;
        case 0x1745e4u: goto label_1745e4;
        case 0x1745e8u: goto label_1745e8;
        case 0x1745ecu: goto label_1745ec;
        case 0x1745f0u: goto label_1745f0;
        case 0x1745f4u: goto label_1745f4;
        case 0x1745f8u: goto label_1745f8;
        case 0x1745fcu: goto label_1745fc;
        case 0x174600u: goto label_174600;
        case 0x174604u: goto label_174604;
        case 0x174608u: goto label_174608;
        case 0x17460cu: goto label_17460c;
        case 0x174610u: goto label_174610;
        case 0x174614u: goto label_174614;
        case 0x174618u: goto label_174618;
        case 0x17461cu: goto label_17461c;
        case 0x174620u: goto label_174620;
        case 0x174624u: goto label_174624;
        case 0x174628u: goto label_174628;
        case 0x17462cu: goto label_17462c;
        case 0x174630u: goto label_174630;
        case 0x174634u: goto label_174634;
        case 0x174638u: goto label_174638;
        case 0x17463cu: goto label_17463c;
        case 0x174640u: goto label_174640;
        case 0x174644u: goto label_174644;
        case 0x174648u: goto label_174648;
        case 0x17464cu: goto label_17464c;
        case 0x174650u: goto label_174650;
        case 0x174654u: goto label_174654;
        case 0x174658u: goto label_174658;
        case 0x17465cu: goto label_17465c;
        case 0x174660u: goto label_174660;
        case 0x174664u: goto label_174664;
        case 0x174668u: goto label_174668;
        case 0x17466cu: goto label_17466c;
        case 0x174670u: goto label_174670;
        case 0x174674u: goto label_174674;
        case 0x174678u: goto label_174678;
        case 0x17467cu: goto label_17467c;
        case 0x174680u: goto label_174680;
        case 0x174684u: goto label_174684;
        case 0x174688u: goto label_174688;
        case 0x17468cu: goto label_17468c;
        case 0x174690u: goto label_174690;
        case 0x174694u: goto label_174694;
        case 0x174698u: goto label_174698;
        case 0x17469cu: goto label_17469c;
        case 0x1746a0u: goto label_1746a0;
        case 0x1746a4u: goto label_1746a4;
        case 0x1746a8u: goto label_1746a8;
        case 0x1746acu: goto label_1746ac;
        case 0x1746b0u: goto label_1746b0;
        case 0x1746b4u: goto label_1746b4;
        case 0x1746b8u: goto label_1746b8;
        case 0x1746bcu: goto label_1746bc;
        case 0x1746c0u: goto label_1746c0;
        case 0x1746c4u: goto label_1746c4;
        case 0x1746c8u: goto label_1746c8;
        case 0x1746ccu: goto label_1746cc;
        case 0x1746d0u: goto label_1746d0;
        case 0x1746d4u: goto label_1746d4;
        case 0x1746d8u: goto label_1746d8;
        case 0x1746dcu: goto label_1746dc;
        case 0x1746e0u: goto label_1746e0;
        case 0x1746e4u: goto label_1746e4;
        case 0x1746e8u: goto label_1746e8;
        case 0x1746ecu: goto label_1746ec;
        case 0x1746f0u: goto label_1746f0;
        case 0x1746f4u: goto label_1746f4;
        case 0x1746f8u: goto label_1746f8;
        case 0x1746fcu: goto label_1746fc;
        case 0x174700u: goto label_174700;
        case 0x174704u: goto label_174704;
        case 0x174708u: goto label_174708;
        case 0x17470cu: goto label_17470c;
        case 0x174710u: goto label_174710;
        case 0x174714u: goto label_174714;
        case 0x174718u: goto label_174718;
        case 0x17471cu: goto label_17471c;
        case 0x174720u: goto label_174720;
        case 0x174724u: goto label_174724;
        case 0x174728u: goto label_174728;
        case 0x17472cu: goto label_17472c;
        case 0x174730u: goto label_174730;
        case 0x174734u: goto label_174734;
        case 0x174738u: goto label_174738;
        case 0x17473cu: goto label_17473c;
        case 0x174740u: goto label_174740;
        case 0x174744u: goto label_174744;
        case 0x174748u: goto label_174748;
        case 0x17474cu: goto label_17474c;
        case 0x174750u: goto label_174750;
        case 0x174754u: goto label_174754;
        case 0x174758u: goto label_174758;
        case 0x17475cu: goto label_17475c;
        case 0x174760u: goto label_174760;
        case 0x174764u: goto label_174764;
        case 0x174768u: goto label_174768;
        case 0x17476cu: goto label_17476c;
        case 0x174770u: goto label_174770;
        case 0x174774u: goto label_174774;
        case 0x174778u: goto label_174778;
        case 0x17477cu: goto label_17477c;
        case 0x174780u: goto label_174780;
        case 0x174784u: goto label_174784;
        case 0x174788u: goto label_174788;
        case 0x17478cu: goto label_17478c;
        case 0x174790u: goto label_174790;
        case 0x174794u: goto label_174794;
        case 0x174798u: goto label_174798;
        case 0x17479cu: goto label_17479c;
        case 0x1747a0u: goto label_1747a0;
        case 0x1747a4u: goto label_1747a4;
        case 0x1747a8u: goto label_1747a8;
        case 0x1747acu: goto label_1747ac;
        case 0x1747b0u: goto label_1747b0;
        case 0x1747b4u: goto label_1747b4;
        case 0x1747b8u: goto label_1747b8;
        case 0x1747bcu: goto label_1747bc;
        case 0x1747c0u: goto label_1747c0;
        case 0x1747c4u: goto label_1747c4;
        case 0x1747c8u: goto label_1747c8;
        case 0x1747ccu: goto label_1747cc;
        case 0x1747d0u: goto label_1747d0;
        case 0x1747d4u: goto label_1747d4;
        case 0x1747d8u: goto label_1747d8;
        case 0x1747dcu: goto label_1747dc;
        case 0x1747e0u: goto label_1747e0;
        case 0x1747e4u: goto label_1747e4;
        case 0x1747e8u: goto label_1747e8;
        case 0x1747ecu: goto label_1747ec;
        case 0x1747f0u: goto label_1747f0;
        case 0x1747f4u: goto label_1747f4;
        case 0x1747f8u: goto label_1747f8;
        case 0x1747fcu: goto label_1747fc;
        case 0x174800u: goto label_174800;
        case 0x174804u: goto label_174804;
        case 0x174808u: goto label_174808;
        case 0x17480cu: goto label_17480c;
        case 0x174810u: goto label_174810;
        case 0x174814u: goto label_174814;
        case 0x174818u: goto label_174818;
        case 0x17481cu: goto label_17481c;
        case 0x174820u: goto label_174820;
        case 0x174824u: goto label_174824;
        case 0x174828u: goto label_174828;
        case 0x17482cu: goto label_17482c;
        case 0x174830u: goto label_174830;
        case 0x174834u: goto label_174834;
        case 0x174838u: goto label_174838;
        case 0x17483cu: goto label_17483c;
        case 0x174840u: goto label_174840;
        case 0x174844u: goto label_174844;
        case 0x174848u: goto label_174848;
        case 0x17484cu: goto label_17484c;
        case 0x174850u: goto label_174850;
        case 0x174854u: goto label_174854;
        case 0x174858u: goto label_174858;
        case 0x17485cu: goto label_17485c;
        case 0x174860u: goto label_174860;
        case 0x174864u: goto label_174864;
        case 0x174868u: goto label_174868;
        case 0x17486cu: goto label_17486c;
        case 0x174870u: goto label_174870;
        case 0x174874u: goto label_174874;
        case 0x174878u: goto label_174878;
        case 0x17487cu: goto label_17487c;
        case 0x174880u: goto label_174880;
        case 0x174884u: goto label_174884;
        case 0x174888u: goto label_174888;
        case 0x17488cu: goto label_17488c;
        case 0x174890u: goto label_174890;
        case 0x174894u: goto label_174894;
        case 0x174898u: goto label_174898;
        case 0x17489cu: goto label_17489c;
        case 0x1748a0u: goto label_1748a0;
        case 0x1748a4u: goto label_1748a4;
        case 0x1748a8u: goto label_1748a8;
        case 0x1748acu: goto label_1748ac;
        case 0x1748b0u: goto label_1748b0;
        case 0x1748b4u: goto label_1748b4;
        case 0x1748b8u: goto label_1748b8;
        case 0x1748bcu: goto label_1748bc;
        case 0x1748c0u: goto label_1748c0;
        case 0x1748c4u: goto label_1748c4;
        case 0x1748c8u: goto label_1748c8;
        case 0x1748ccu: goto label_1748cc;
        case 0x1748d0u: goto label_1748d0;
        case 0x1748d4u: goto label_1748d4;
        case 0x1748d8u: goto label_1748d8;
        case 0x1748dcu: goto label_1748dc;
        case 0x1748e0u: goto label_1748e0;
        case 0x1748e4u: goto label_1748e4;
        case 0x1748e8u: goto label_1748e8;
        case 0x1748ecu: goto label_1748ec;
        case 0x1748f0u: goto label_1748f0;
        case 0x1748f4u: goto label_1748f4;
        case 0x1748f8u: goto label_1748f8;
        case 0x1748fcu: goto label_1748fc;
        case 0x174900u: goto label_174900;
        case 0x174904u: goto label_174904;
        case 0x174908u: goto label_174908;
        case 0x17490cu: goto label_17490c;
        case 0x174910u: goto label_174910;
        case 0x174914u: goto label_174914;
        case 0x174918u: goto label_174918;
        case 0x17491cu: goto label_17491c;
        case 0x174920u: goto label_174920;
        case 0x174924u: goto label_174924;
        case 0x174928u: goto label_174928;
        case 0x17492cu: goto label_17492c;
        case 0x174930u: goto label_174930;
        case 0x174934u: goto label_174934;
        case 0x174938u: goto label_174938;
        case 0x17493cu: goto label_17493c;
        case 0x174940u: goto label_174940;
        case 0x174944u: goto label_174944;
        case 0x174948u: goto label_174948;
        case 0x17494cu: goto label_17494c;
        case 0x174950u: goto label_174950;
        case 0x174954u: goto label_174954;
        case 0x174958u: goto label_174958;
        case 0x17495cu: goto label_17495c;
        case 0x174960u: goto label_174960;
        case 0x174964u: goto label_174964;
        case 0x174968u: goto label_174968;
        case 0x17496cu: goto label_17496c;
        case 0x174970u: goto label_174970;
        case 0x174974u: goto label_174974;
        case 0x174978u: goto label_174978;
        case 0x17497cu: goto label_17497c;
        case 0x174980u: goto label_174980;
        case 0x174984u: goto label_174984;
        case 0x174988u: goto label_174988;
        case 0x17498cu: goto label_17498c;
        case 0x174990u: goto label_174990;
        case 0x174994u: goto label_174994;
        case 0x174998u: goto label_174998;
        case 0x17499cu: goto label_17499c;
        case 0x1749a0u: goto label_1749a0;
        case 0x1749a4u: goto label_1749a4;
        case 0x1749a8u: goto label_1749a8;
        case 0x1749acu: goto label_1749ac;
        case 0x1749b0u: goto label_1749b0;
        case 0x1749b4u: goto label_1749b4;
        case 0x1749b8u: goto label_1749b8;
        case 0x1749bcu: goto label_1749bc;
        case 0x1749c0u: goto label_1749c0;
        case 0x1749c4u: goto label_1749c4;
        case 0x1749c8u: goto label_1749c8;
        case 0x1749ccu: goto label_1749cc;
        case 0x1749d0u: goto label_1749d0;
        case 0x1749d4u: goto label_1749d4;
        case 0x1749d8u: goto label_1749d8;
        case 0x1749dcu: goto label_1749dc;
        case 0x1749e0u: goto label_1749e0;
        case 0x1749e4u: goto label_1749e4;
        case 0x1749e8u: goto label_1749e8;
        case 0x1749ecu: goto label_1749ec;
        case 0x1749f0u: goto label_1749f0;
        case 0x1749f4u: goto label_1749f4;
        case 0x1749f8u: goto label_1749f8;
        case 0x1749fcu: goto label_1749fc;
        case 0x174a00u: goto label_174a00;
        case 0x174a04u: goto label_174a04;
        case 0x174a08u: goto label_174a08;
        case 0x174a0cu: goto label_174a0c;
        case 0x174a10u: goto label_174a10;
        case 0x174a14u: goto label_174a14;
        case 0x174a18u: goto label_174a18;
        case 0x174a1cu: goto label_174a1c;
        case 0x174a20u: goto label_174a20;
        case 0x174a24u: goto label_174a24;
        case 0x174a28u: goto label_174a28;
        case 0x174a2cu: goto label_174a2c;
        case 0x174a30u: goto label_174a30;
        case 0x174a34u: goto label_174a34;
        case 0x174a38u: goto label_174a38;
        case 0x174a3cu: goto label_174a3c;
        case 0x174a40u: goto label_174a40;
        case 0x174a44u: goto label_174a44;
        case 0x174a48u: goto label_174a48;
        case 0x174a4cu: goto label_174a4c;
        case 0x174a50u: goto label_174a50;
        case 0x174a54u: goto label_174a54;
        case 0x174a58u: goto label_174a58;
        case 0x174a5cu: goto label_174a5c;
        case 0x174a60u: goto label_174a60;
        case 0x174a64u: goto label_174a64;
        case 0x174a68u: goto label_174a68;
        case 0x174a6cu: goto label_174a6c;
        case 0x174a70u: goto label_174a70;
        case 0x174a74u: goto label_174a74;
        case 0x174a78u: goto label_174a78;
        case 0x174a7cu: goto label_174a7c;
        case 0x174a80u: goto label_174a80;
        case 0x174a84u: goto label_174a84;
        case 0x174a88u: goto label_174a88;
        case 0x174a8cu: goto label_174a8c;
        case 0x174a90u: goto label_174a90;
        case 0x174a94u: goto label_174a94;
        case 0x174a98u: goto label_174a98;
        case 0x174a9cu: goto label_174a9c;
        case 0x174aa0u: goto label_174aa0;
        case 0x174aa4u: goto label_174aa4;
        case 0x174aa8u: goto label_174aa8;
        case 0x174aacu: goto label_174aac;
        case 0x174ab0u: goto label_174ab0;
        case 0x174ab4u: goto label_174ab4;
        case 0x174ab8u: goto label_174ab8;
        case 0x174abcu: goto label_174abc;
        case 0x174ac0u: goto label_174ac0;
        case 0x174ac4u: goto label_174ac4;
        case 0x174ac8u: goto label_174ac8;
        case 0x174accu: goto label_174acc;
        case 0x174ad0u: goto label_174ad0;
        case 0x174ad4u: goto label_174ad4;
        case 0x174ad8u: goto label_174ad8;
        case 0x174adcu: goto label_174adc;
        case 0x174ae0u: goto label_174ae0;
        case 0x174ae4u: goto label_174ae4;
        case 0x174ae8u: goto label_174ae8;
        case 0x174aecu: goto label_174aec;
        case 0x174af0u: goto label_174af0;
        case 0x174af4u: goto label_174af4;
        case 0x174af8u: goto label_174af8;
        case 0x174afcu: goto label_174afc;
        case 0x174b00u: goto label_174b00;
        case 0x174b04u: goto label_174b04;
        case 0x174b08u: goto label_174b08;
        case 0x174b0cu: goto label_174b0c;
        case 0x174b10u: goto label_174b10;
        case 0x174b14u: goto label_174b14;
        case 0x174b18u: goto label_174b18;
        case 0x174b1cu: goto label_174b1c;
        case 0x174b20u: goto label_174b20;
        case 0x174b24u: goto label_174b24;
        case 0x174b28u: goto label_174b28;
        case 0x174b2cu: goto label_174b2c;
        case 0x174b30u: goto label_174b30;
        case 0x174b34u: goto label_174b34;
        case 0x174b38u: goto label_174b38;
        case 0x174b3cu: goto label_174b3c;
        case 0x174b40u: goto label_174b40;
        case 0x174b44u: goto label_174b44;
        case 0x174b48u: goto label_174b48;
        case 0x174b4cu: goto label_174b4c;
        case 0x174b50u: goto label_174b50;
        case 0x174b54u: goto label_174b54;
        case 0x174b58u: goto label_174b58;
        case 0x174b5cu: goto label_174b5c;
        case 0x174b60u: goto label_174b60;
        case 0x174b64u: goto label_174b64;
        case 0x174b68u: goto label_174b68;
        case 0x174b6cu: goto label_174b6c;
        case 0x174b70u: goto label_174b70;
        case 0x174b74u: goto label_174b74;
        case 0x174b78u: goto label_174b78;
        case 0x174b7cu: goto label_174b7c;
        case 0x174b80u: goto label_174b80;
        case 0x174b84u: goto label_174b84;
        case 0x174b88u: goto label_174b88;
        case 0x174b8cu: goto label_174b8c;
        case 0x174b90u: goto label_174b90;
        case 0x174b94u: goto label_174b94;
        case 0x174b98u: goto label_174b98;
        case 0x174b9cu: goto label_174b9c;
        case 0x174ba0u: goto label_174ba0;
        case 0x174ba4u: goto label_174ba4;
        case 0x174ba8u: goto label_174ba8;
        case 0x174bacu: goto label_174bac;
        case 0x174bb0u: goto label_174bb0;
        case 0x174bb4u: goto label_174bb4;
        case 0x174bb8u: goto label_174bb8;
        case 0x174bbcu: goto label_174bbc;
        case 0x174bc0u: goto label_174bc0;
        case 0x174bc4u: goto label_174bc4;
        case 0x174bc8u: goto label_174bc8;
        case 0x174bccu: goto label_174bcc;
        case 0x174bd0u: goto label_174bd0;
        case 0x174bd4u: goto label_174bd4;
        case 0x174bd8u: goto label_174bd8;
        case 0x174bdcu: goto label_174bdc;
        case 0x174be0u: goto label_174be0;
        case 0x174be4u: goto label_174be4;
        case 0x174be8u: goto label_174be8;
        case 0x174becu: goto label_174bec;
        case 0x174bf0u: goto label_174bf0;
        case 0x174bf4u: goto label_174bf4;
        case 0x174bf8u: goto label_174bf8;
        case 0x174bfcu: goto label_174bfc;
        case 0x174c00u: goto label_174c00;
        case 0x174c04u: goto label_174c04;
        case 0x174c08u: goto label_174c08;
        case 0x174c0cu: goto label_174c0c;
        case 0x174c10u: goto label_174c10;
        case 0x174c14u: goto label_174c14;
        case 0x174c18u: goto label_174c18;
        case 0x174c1cu: goto label_174c1c;
        case 0x174c20u: goto label_174c20;
        case 0x174c24u: goto label_174c24;
        case 0x174c28u: goto label_174c28;
        case 0x174c2cu: goto label_174c2c;
        case 0x174c30u: goto label_174c30;
        case 0x174c34u: goto label_174c34;
        case 0x174c38u: goto label_174c38;
        case 0x174c3cu: goto label_174c3c;
        case 0x174c40u: goto label_174c40;
        case 0x174c44u: goto label_174c44;
        case 0x174c48u: goto label_174c48;
        case 0x174c4cu: goto label_174c4c;
        case 0x174c50u: goto label_174c50;
        case 0x174c54u: goto label_174c54;
        case 0x174c58u: goto label_174c58;
        case 0x174c5cu: goto label_174c5c;
        case 0x174c60u: goto label_174c60;
        case 0x174c64u: goto label_174c64;
        case 0x174c68u: goto label_174c68;
        case 0x174c6cu: goto label_174c6c;
        case 0x174c70u: goto label_174c70;
        case 0x174c74u: goto label_174c74;
        case 0x174c78u: goto label_174c78;
        case 0x174c7cu: goto label_174c7c;
        case 0x174c80u: goto label_174c80;
        case 0x174c84u: goto label_174c84;
        case 0x174c88u: goto label_174c88;
        case 0x174c8cu: goto label_174c8c;
        case 0x174c90u: goto label_174c90;
        case 0x174c94u: goto label_174c94;
        case 0x174c98u: goto label_174c98;
        case 0x174c9cu: goto label_174c9c;
        case 0x174ca0u: goto label_174ca0;
        case 0x174ca4u: goto label_174ca4;
        case 0x174ca8u: goto label_174ca8;
        case 0x174cacu: goto label_174cac;
        case 0x174cb0u: goto label_174cb0;
        case 0x174cb4u: goto label_174cb4;
        case 0x174cb8u: goto label_174cb8;
        case 0x174cbcu: goto label_174cbc;
        case 0x174cc0u: goto label_174cc0;
        case 0x174cc4u: goto label_174cc4;
        case 0x174cc8u: goto label_174cc8;
        case 0x174cccu: goto label_174ccc;
        case 0x174cd0u: goto label_174cd0;
        case 0x174cd4u: goto label_174cd4;
        case 0x174cd8u: goto label_174cd8;
        case 0x174cdcu: goto label_174cdc;
        case 0x174ce0u: goto label_174ce0;
        case 0x174ce4u: goto label_174ce4;
        case 0x174ce8u: goto label_174ce8;
        case 0x174cecu: goto label_174cec;
        case 0x174cf0u: goto label_174cf0;
        case 0x174cf4u: goto label_174cf4;
        case 0x174cf8u: goto label_174cf8;
        case 0x174cfcu: goto label_174cfc;
        case 0x174d00u: goto label_174d00;
        case 0x174d04u: goto label_174d04;
        case 0x174d08u: goto label_174d08;
        case 0x174d0cu: goto label_174d0c;
        case 0x174d10u: goto label_174d10;
        case 0x174d14u: goto label_174d14;
        case 0x174d18u: goto label_174d18;
        case 0x174d1cu: goto label_174d1c;
        case 0x174d20u: goto label_174d20;
        case 0x174d24u: goto label_174d24;
        case 0x174d28u: goto label_174d28;
        case 0x174d2cu: goto label_174d2c;
        case 0x174d30u: goto label_174d30;
        case 0x174d34u: goto label_174d34;
        case 0x174d38u: goto label_174d38;
        case 0x174d3cu: goto label_174d3c;
        case 0x174d40u: goto label_174d40;
        case 0x174d44u: goto label_174d44;
        case 0x174d48u: goto label_174d48;
        case 0x174d4cu: goto label_174d4c;
        case 0x174d50u: goto label_174d50;
        case 0x174d54u: goto label_174d54;
        case 0x174d58u: goto label_174d58;
        case 0x174d5cu: goto label_174d5c;
        case 0x174d60u: goto label_174d60;
        case 0x174d64u: goto label_174d64;
        case 0x174d68u: goto label_174d68;
        case 0x174d6cu: goto label_174d6c;
        case 0x174d70u: goto label_174d70;
        case 0x174d74u: goto label_174d74;
        case 0x174d78u: goto label_174d78;
        case 0x174d7cu: goto label_174d7c;
        case 0x174d80u: goto label_174d80;
        case 0x174d84u: goto label_174d84;
        case 0x174d88u: goto label_174d88;
        case 0x174d8cu: goto label_174d8c;
        case 0x174d90u: goto label_174d90;
        case 0x174d94u: goto label_174d94;
        case 0x174d98u: goto label_174d98;
        case 0x174d9cu: goto label_174d9c;
        case 0x174da0u: goto label_174da0;
        case 0x174da4u: goto label_174da4;
        case 0x174da8u: goto label_174da8;
        case 0x174dacu: goto label_174dac;
        case 0x174db0u: goto label_174db0;
        case 0x174db4u: goto label_174db4;
        case 0x174db8u: goto label_174db8;
        case 0x174dbcu: goto label_174dbc;
        case 0x174dc0u: goto label_174dc0;
        case 0x174dc4u: goto label_174dc4;
        case 0x174dc8u: goto label_174dc8;
        case 0x174dccu: goto label_174dcc;
        case 0x174dd0u: goto label_174dd0;
        case 0x174dd4u: goto label_174dd4;
        case 0x174dd8u: goto label_174dd8;
        case 0x174ddcu: goto label_174ddc;
        case 0x174de0u: goto label_174de0;
        case 0x174de4u: goto label_174de4;
        case 0x174de8u: goto label_174de8;
        case 0x174decu: goto label_174dec;
        case 0x174df0u: goto label_174df0;
        case 0x174df4u: goto label_174df4;
        case 0x174df8u: goto label_174df8;
        case 0x174dfcu: goto label_174dfc;
        case 0x174e00u: goto label_174e00;
        case 0x174e04u: goto label_174e04;
        case 0x174e08u: goto label_174e08;
        case 0x174e0cu: goto label_174e0c;
        case 0x174e10u: goto label_174e10;
        case 0x174e14u: goto label_174e14;
        case 0x174e18u: goto label_174e18;
        case 0x174e1cu: goto label_174e1c;
        case 0x174e20u: goto label_174e20;
        case 0x174e24u: goto label_174e24;
        case 0x174e28u: goto label_174e28;
        case 0x174e2cu: goto label_174e2c;
        case 0x174e30u: goto label_174e30;
        case 0x174e34u: goto label_174e34;
        case 0x174e38u: goto label_174e38;
        case 0x174e3cu: goto label_174e3c;
        case 0x174e40u: goto label_174e40;
        case 0x174e44u: goto label_174e44;
        case 0x174e48u: goto label_174e48;
        case 0x174e4cu: goto label_174e4c;
        case 0x174e50u: goto label_174e50;
        case 0x174e54u: goto label_174e54;
        case 0x174e58u: goto label_174e58;
        case 0x174e5cu: goto label_174e5c;
        case 0x174e60u: goto label_174e60;
        case 0x174e64u: goto label_174e64;
        case 0x174e68u: goto label_174e68;
        case 0x174e6cu: goto label_174e6c;
        case 0x174e70u: goto label_174e70;
        case 0x174e74u: goto label_174e74;
        case 0x174e78u: goto label_174e78;
        case 0x174e7cu: goto label_174e7c;
        case 0x174e80u: goto label_174e80;
        case 0x174e84u: goto label_174e84;
        case 0x174e88u: goto label_174e88;
        case 0x174e8cu: goto label_174e8c;
        case 0x174e90u: goto label_174e90;
        case 0x174e94u: goto label_174e94;
        case 0x174e98u: goto label_174e98;
        case 0x174e9cu: goto label_174e9c;
        case 0x174ea0u: goto label_174ea0;
        case 0x174ea4u: goto label_174ea4;
        case 0x174ea8u: goto label_174ea8;
        case 0x174eacu: goto label_174eac;
        case 0x174eb0u: goto label_174eb0;
        case 0x174eb4u: goto label_174eb4;
        case 0x174eb8u: goto label_174eb8;
        case 0x174ebcu: goto label_174ebc;
        case 0x174ec0u: goto label_174ec0;
        case 0x174ec4u: goto label_174ec4;
        case 0x174ec8u: goto label_174ec8;
        case 0x174eccu: goto label_174ecc;
        case 0x174ed0u: goto label_174ed0;
        case 0x174ed4u: goto label_174ed4;
        case 0x174ed8u: goto label_174ed8;
        case 0x174edcu: goto label_174edc;
        case 0x174ee0u: goto label_174ee0;
        case 0x174ee4u: goto label_174ee4;
        case 0x174ee8u: goto label_174ee8;
        case 0x174eecu: goto label_174eec;
        case 0x174ef0u: goto label_174ef0;
        case 0x174ef4u: goto label_174ef4;
        case 0x174ef8u: goto label_174ef8;
        case 0x174efcu: goto label_174efc;
        case 0x174f00u: goto label_174f00;
        case 0x174f04u: goto label_174f04;
        case 0x174f08u: goto label_174f08;
        case 0x174f0cu: goto label_174f0c;
        case 0x174f10u: goto label_174f10;
        case 0x174f14u: goto label_174f14;
        case 0x174f18u: goto label_174f18;
        case 0x174f1cu: goto label_174f1c;
        case 0x174f20u: goto label_174f20;
        case 0x174f24u: goto label_174f24;
        case 0x174f28u: goto label_174f28;
        case 0x174f2cu: goto label_174f2c;
        case 0x174f30u: goto label_174f30;
        case 0x174f34u: goto label_174f34;
        case 0x174f38u: goto label_174f38;
        case 0x174f3cu: goto label_174f3c;
        case 0x174f40u: goto label_174f40;
        case 0x174f44u: goto label_174f44;
        case 0x174f48u: goto label_174f48;
        case 0x174f4cu: goto label_174f4c;
        case 0x174f50u: goto label_174f50;
        case 0x174f54u: goto label_174f54;
        case 0x174f58u: goto label_174f58;
        case 0x174f5cu: goto label_174f5c;
        case 0x174f60u: goto label_174f60;
        case 0x174f64u: goto label_174f64;
        case 0x174f68u: goto label_174f68;
        case 0x174f6cu: goto label_174f6c;
        case 0x174f70u: goto label_174f70;
        case 0x174f74u: goto label_174f74;
        case 0x174f78u: goto label_174f78;
        case 0x174f7cu: goto label_174f7c;
        case 0x174f80u: goto label_174f80;
        case 0x174f84u: goto label_174f84;
        case 0x174f88u: goto label_174f88;
        case 0x174f8cu: goto label_174f8c;
        case 0x174f90u: goto label_174f90;
        case 0x174f94u: goto label_174f94;
        case 0x174f98u: goto label_174f98;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa0u: goto label_174fa0;
        case 0x174fa4u: goto label_174fa4;
        case 0x174fa8u: goto label_174fa8;
        case 0x174facu: goto label_174fac;
        case 0x174fb0u: goto label_174fb0;
        case 0x174fb4u: goto label_174fb4;
        case 0x174fb8u: goto label_174fb8;
        case 0x174fbcu: goto label_174fbc;
        case 0x174fc0u: goto label_174fc0;
        case 0x174fc4u: goto label_174fc4;
        case 0x174fc8u: goto label_174fc8;
        case 0x174fccu: goto label_174fcc;
        case 0x174fd0u: goto label_174fd0;
        case 0x174fd4u: goto label_174fd4;
        case 0x174fd8u: goto label_174fd8;
        case 0x174fdcu: goto label_174fdc;
        case 0x174fe0u: goto label_174fe0;
        case 0x174fe4u: goto label_174fe4;
        case 0x174fe8u: goto label_174fe8;
        case 0x174fecu: goto label_174fec;
        case 0x174ff0u: goto label_174ff0;
        case 0x174ff4u: goto label_174ff4;
        case 0x174ff8u: goto label_174ff8;
        case 0x174ffcu: goto label_174ffc;
        case 0x175000u: goto label_175000;
        case 0x175004u: goto label_175004;
        case 0x175008u: goto label_175008;
        case 0x17500cu: goto label_17500c;
        case 0x175010u: goto label_175010;
        case 0x175014u: goto label_175014;
        case 0x175018u: goto label_175018;
        case 0x17501cu: goto label_17501c;
        case 0x175020u: goto label_175020;
        case 0x175024u: goto label_175024;
        case 0x175028u: goto label_175028;
        case 0x17502cu: goto label_17502c;
        case 0x175030u: goto label_175030;
        case 0x175034u: goto label_175034;
        case 0x175038u: goto label_175038;
        case 0x17503cu: goto label_17503c;
        case 0x175040u: goto label_175040;
        case 0x175044u: goto label_175044;
        case 0x175048u: goto label_175048;
        case 0x17504cu: goto label_17504c;
        case 0x175050u: goto label_175050;
        case 0x175054u: goto label_175054;
        case 0x175058u: goto label_175058;
        case 0x17505cu: goto label_17505c;
        case 0x175060u: goto label_175060;
        case 0x175064u: goto label_175064;
        case 0x175068u: goto label_175068;
        case 0x17506cu: goto label_17506c;
        case 0x175070u: goto label_175070;
        case 0x175074u: goto label_175074;
        case 0x175078u: goto label_175078;
        case 0x17507cu: goto label_17507c;
        case 0x175080u: goto label_175080;
        case 0x175084u: goto label_175084;
        case 0x175088u: goto label_175088;
        case 0x17508cu: goto label_17508c;
        case 0x175090u: goto label_175090;
        case 0x175094u: goto label_175094;
        case 0x175098u: goto label_175098;
        case 0x17509cu: goto label_17509c;
        case 0x1750a0u: goto label_1750a0;
        case 0x1750a4u: goto label_1750a4;
        case 0x1750a8u: goto label_1750a8;
        case 0x1750acu: goto label_1750ac;
        case 0x1750b0u: goto label_1750b0;
        case 0x1750b4u: goto label_1750b4;
        case 0x1750b8u: goto label_1750b8;
        case 0x1750bcu: goto label_1750bc;
        case 0x1750c0u: goto label_1750c0;
        case 0x1750c4u: goto label_1750c4;
        case 0x1750c8u: goto label_1750c8;
        case 0x1750ccu: goto label_1750cc;
        case 0x1750d0u: goto label_1750d0;
        case 0x1750d4u: goto label_1750d4;
        case 0x1750d8u: goto label_1750d8;
        case 0x1750dcu: goto label_1750dc;
        case 0x1750e0u: goto label_1750e0;
        case 0x1750e4u: goto label_1750e4;
        case 0x1750e8u: goto label_1750e8;
        case 0x1750ecu: goto label_1750ec;
        case 0x1750f0u: goto label_1750f0;
        case 0x1750f4u: goto label_1750f4;
        case 0x1750f8u: goto label_1750f8;
        case 0x1750fcu: goto label_1750fc;
        case 0x175100u: goto label_175100;
        case 0x175104u: goto label_175104;
        case 0x175108u: goto label_175108;
        case 0x17510cu: goto label_17510c;
        case 0x175110u: goto label_175110;
        case 0x175114u: goto label_175114;
        case 0x175118u: goto label_175118;
        case 0x17511cu: goto label_17511c;
        case 0x175120u: goto label_175120;
        case 0x175124u: goto label_175124;
        case 0x175128u: goto label_175128;
        case 0x17512cu: goto label_17512c;
        case 0x175130u: goto label_175130;
        case 0x175134u: goto label_175134;
        case 0x175138u: goto label_175138;
        case 0x17513cu: goto label_17513c;
        case 0x175140u: goto label_175140;
        case 0x175144u: goto label_175144;
        case 0x175148u: goto label_175148;
        case 0x17514cu: goto label_17514c;
        case 0x175150u: goto label_175150;
        case 0x175154u: goto label_175154;
        case 0x175158u: goto label_175158;
        case 0x17515cu: goto label_17515c;
        case 0x175160u: goto label_175160;
        case 0x175164u: goto label_175164;
        case 0x175168u: goto label_175168;
        case 0x17516cu: goto label_17516c;
        case 0x175170u: goto label_175170;
        case 0x175174u: goto label_175174;
        case 0x175178u: goto label_175178;
        case 0x17517cu: goto label_17517c;
        case 0x175180u: goto label_175180;
        case 0x175184u: goto label_175184;
        case 0x175188u: goto label_175188;
        case 0x17518cu: goto label_17518c;
        case 0x175190u: goto label_175190;
        case 0x175194u: goto label_175194;
        case 0x175198u: goto label_175198;
        case 0x17519cu: goto label_17519c;
        case 0x1751a0u: goto label_1751a0;
        case 0x1751a4u: goto label_1751a4;
        case 0x1751a8u: goto label_1751a8;
        case 0x1751acu: goto label_1751ac;
        case 0x1751b0u: goto label_1751b0;
        case 0x1751b4u: goto label_1751b4;
        case 0x1751b8u: goto label_1751b8;
        case 0x1751bcu: goto label_1751bc;
        case 0x1751c0u: goto label_1751c0;
        case 0x1751c4u: goto label_1751c4;
        case 0x1751c8u: goto label_1751c8;
        case 0x1751ccu: goto label_1751cc;
        case 0x1751d0u: goto label_1751d0;
        case 0x1751d4u: goto label_1751d4;
        case 0x1751d8u: goto label_1751d8;
        case 0x1751dcu: goto label_1751dc;
        case 0x1751e0u: goto label_1751e0;
        case 0x1751e4u: goto label_1751e4;
        case 0x1751e8u: goto label_1751e8;
        case 0x1751ecu: goto label_1751ec;
        case 0x1751f0u: goto label_1751f0;
        case 0x1751f4u: goto label_1751f4;
        case 0x1751f8u: goto label_1751f8;
        case 0x1751fcu: goto label_1751fc;
        case 0x175200u: goto label_175200;
        case 0x175204u: goto label_175204;
        case 0x175208u: goto label_175208;
        case 0x17520cu: goto label_17520c;
        case 0x175210u: goto label_175210;
        case 0x175214u: goto label_175214;
        case 0x175218u: goto label_175218;
        case 0x17521cu: goto label_17521c;
        case 0x175220u: goto label_175220;
        case 0x175224u: goto label_175224;
        case 0x175228u: goto label_175228;
        case 0x17522cu: goto label_17522c;
        case 0x175230u: goto label_175230;
        case 0x175234u: goto label_175234;
        case 0x175238u: goto label_175238;
        case 0x17523cu: goto label_17523c;
        case 0x175240u: goto label_175240;
        case 0x175244u: goto label_175244;
        case 0x175248u: goto label_175248;
        case 0x17524cu: goto label_17524c;
        case 0x175250u: goto label_175250;
        case 0x175254u: goto label_175254;
        case 0x175258u: goto label_175258;
        case 0x17525cu: goto label_17525c;
        case 0x175260u: goto label_175260;
        case 0x175264u: goto label_175264;
        case 0x175268u: goto label_175268;
        case 0x17526cu: goto label_17526c;
        case 0x175270u: goto label_175270;
        case 0x175274u: goto label_175274;
        case 0x175278u: goto label_175278;
        case 0x17527cu: goto label_17527c;
        case 0x175280u: goto label_175280;
        case 0x175284u: goto label_175284;
        case 0x175288u: goto label_175288;
        case 0x17528cu: goto label_17528c;
        case 0x175290u: goto label_175290;
        case 0x175294u: goto label_175294;
        case 0x175298u: goto label_175298;
        case 0x17529cu: goto label_17529c;
        case 0x1752a0u: goto label_1752a0;
        case 0x1752a4u: goto label_1752a4;
        case 0x1752a8u: goto label_1752a8;
        case 0x1752acu: goto label_1752ac;
        case 0x1752b0u: goto label_1752b0;
        case 0x1752b4u: goto label_1752b4;
        case 0x1752b8u: goto label_1752b8;
        case 0x1752bcu: goto label_1752bc;
        case 0x1752c0u: goto label_1752c0;
        case 0x1752c4u: goto label_1752c4;
        case 0x1752c8u: goto label_1752c8;
        case 0x1752ccu: goto label_1752cc;
        case 0x1752d0u: goto label_1752d0;
        case 0x1752d4u: goto label_1752d4;
        case 0x1752d8u: goto label_1752d8;
        case 0x1752dcu: goto label_1752dc;
        case 0x1752e0u: goto label_1752e0;
        case 0x1752e4u: goto label_1752e4;
        case 0x1752e8u: goto label_1752e8;
        case 0x1752ecu: goto label_1752ec;
        case 0x1752f0u: goto label_1752f0;
        case 0x1752f4u: goto label_1752f4;
        case 0x1752f8u: goto label_1752f8;
        case 0x1752fcu: goto label_1752fc;
        case 0x175300u: goto label_175300;
        case 0x175304u: goto label_175304;
        case 0x175308u: goto label_175308;
        case 0x17530cu: goto label_17530c;
        case 0x175310u: goto label_175310;
        case 0x175314u: goto label_175314;
        case 0x175318u: goto label_175318;
        case 0x17531cu: goto label_17531c;
        case 0x175320u: goto label_175320;
        case 0x175324u: goto label_175324;
        case 0x175328u: goto label_175328;
        case 0x17532cu: goto label_17532c;
        case 0x175330u: goto label_175330;
        case 0x175334u: goto label_175334;
        case 0x175338u: goto label_175338;
        case 0x17533cu: goto label_17533c;
        case 0x175340u: goto label_175340;
        case 0x175344u: goto label_175344;
        case 0x175348u: goto label_175348;
        case 0x17534cu: goto label_17534c;
        case 0x175350u: goto label_175350;
        case 0x175354u: goto label_175354;
        case 0x175358u: goto label_175358;
        case 0x17535cu: goto label_17535c;
        case 0x175360u: goto label_175360;
        case 0x175364u: goto label_175364;
        case 0x175368u: goto label_175368;
        case 0x17536cu: goto label_17536c;
        case 0x175370u: goto label_175370;
        case 0x175374u: goto label_175374;
        case 0x175378u: goto label_175378;
        case 0x17537cu: goto label_17537c;
        case 0x175380u: goto label_175380;
        case 0x175384u: goto label_175384;
        case 0x175388u: goto label_175388;
        case 0x17538cu: goto label_17538c;
        case 0x175390u: goto label_175390;
        case 0x175394u: goto label_175394;
        case 0x175398u: goto label_175398;
        case 0x17539cu: goto label_17539c;
        case 0x1753a0u: goto label_1753a0;
        case 0x1753a4u: goto label_1753a4;
        case 0x1753a8u: goto label_1753a8;
        case 0x1753acu: goto label_1753ac;
        case 0x1753b0u: goto label_1753b0;
        case 0x1753b4u: goto label_1753b4;
        case 0x1753b8u: goto label_1753b8;
        case 0x1753bcu: goto label_1753bc;
        case 0x1753c0u: goto label_1753c0;
        case 0x1753c4u: goto label_1753c4;
        case 0x1753c8u: goto label_1753c8;
        case 0x1753ccu: goto label_1753cc;
        case 0x1753d0u: goto label_1753d0;
        case 0x1753d4u: goto label_1753d4;
        case 0x1753d8u: goto label_1753d8;
        case 0x1753dcu: goto label_1753dc;
        case 0x1753e0u: goto label_1753e0;
        case 0x1753e4u: goto label_1753e4;
        case 0x1753e8u: goto label_1753e8;
        case 0x1753ecu: goto label_1753ec;
        case 0x1753f0u: goto label_1753f0;
        case 0x1753f4u: goto label_1753f4;
        case 0x1753f8u: goto label_1753f8;
        case 0x1753fcu: goto label_1753fc;
        case 0x175400u: goto label_175400;
        case 0x175404u: goto label_175404;
        case 0x175408u: goto label_175408;
        case 0x17540cu: goto label_17540c;
        case 0x175410u: goto label_175410;
        case 0x175414u: goto label_175414;
        case 0x175418u: goto label_175418;
        case 0x17541cu: goto label_17541c;
        case 0x175420u: goto label_175420;
        case 0x175424u: goto label_175424;
        case 0x175428u: goto label_175428;
        case 0x17542cu: goto label_17542c;
        case 0x175430u: goto label_175430;
        case 0x175434u: goto label_175434;
        case 0x175438u: goto label_175438;
        case 0x17543cu: goto label_17543c;
        case 0x175440u: goto label_175440;
        case 0x175444u: goto label_175444;
        case 0x175448u: goto label_175448;
        case 0x17544cu: goto label_17544c;
        case 0x175450u: goto label_175450;
        case 0x175454u: goto label_175454;
        case 0x175458u: goto label_175458;
        case 0x17545cu: goto label_17545c;
        case 0x175460u: goto label_175460;
        case 0x175464u: goto label_175464;
        case 0x175468u: goto label_175468;
        case 0x17546cu: goto label_17546c;
        case 0x175470u: goto label_175470;
        case 0x175474u: goto label_175474;
        case 0x175478u: goto label_175478;
        case 0x17547cu: goto label_17547c;
        case 0x175480u: goto label_175480;
        case 0x175484u: goto label_175484;
        case 0x175488u: goto label_175488;
        case 0x17548cu: goto label_17548c;
        case 0x175490u: goto label_175490;
        case 0x175494u: goto label_175494;
        case 0x175498u: goto label_175498;
        case 0x17549cu: goto label_17549c;
        case 0x1754a0u: goto label_1754a0;
        case 0x1754a4u: goto label_1754a4;
        case 0x1754a8u: goto label_1754a8;
        case 0x1754acu: goto label_1754ac;
        case 0x1754b0u: goto label_1754b0;
        case 0x1754b4u: goto label_1754b4;
        case 0x1754b8u: goto label_1754b8;
        case 0x1754bcu: goto label_1754bc;
        case 0x1754c0u: goto label_1754c0;
        case 0x1754c4u: goto label_1754c4;
        case 0x1754c8u: goto label_1754c8;
        case 0x1754ccu: goto label_1754cc;
        case 0x1754d0u: goto label_1754d0;
        case 0x1754d4u: goto label_1754d4;
        case 0x1754d8u: goto label_1754d8;
        case 0x1754dcu: goto label_1754dc;
        case 0x1754e0u: goto label_1754e0;
        case 0x1754e4u: goto label_1754e4;
        case 0x1754e8u: goto label_1754e8;
        case 0x1754ecu: goto label_1754ec;
        case 0x1754f0u: goto label_1754f0;
        case 0x1754f4u: goto label_1754f4;
        case 0x1754f8u: goto label_1754f8;
        case 0x1754fcu: goto label_1754fc;
        case 0x175500u: goto label_175500;
        case 0x175504u: goto label_175504;
        case 0x175508u: goto label_175508;
        case 0x17550cu: goto label_17550c;
        case 0x175510u: goto label_175510;
        case 0x175514u: goto label_175514;
        case 0x175518u: goto label_175518;
        case 0x17551cu: goto label_17551c;
        case 0x175520u: goto label_175520;
        case 0x175524u: goto label_175524;
        case 0x175528u: goto label_175528;
        case 0x17552cu: goto label_17552c;
        case 0x175530u: goto label_175530;
        case 0x175534u: goto label_175534;
        case 0x175538u: goto label_175538;
        case 0x17553cu: goto label_17553c;
        case 0x175540u: goto label_175540;
        case 0x175544u: goto label_175544;
        case 0x175548u: goto label_175548;
        case 0x17554cu: goto label_17554c;
        case 0x175550u: goto label_175550;
        case 0x175554u: goto label_175554;
        case 0x175558u: goto label_175558;
        case 0x17555cu: goto label_17555c;
        case 0x175560u: goto label_175560;
        case 0x175564u: goto label_175564;
        case 0x175568u: goto label_175568;
        case 0x17556cu: goto label_17556c;
        case 0x175570u: goto label_175570;
        case 0x175574u: goto label_175574;
        case 0x175578u: goto label_175578;
        case 0x17557cu: goto label_17557c;
        case 0x175580u: goto label_175580;
        case 0x175584u: goto label_175584;
        case 0x175588u: goto label_175588;
        case 0x17558cu: goto label_17558c;
        case 0x175590u: goto label_175590;
        case 0x175594u: goto label_175594;
        case 0x175598u: goto label_175598;
        case 0x17559cu: goto label_17559c;
        case 0x1755a0u: goto label_1755a0;
        case 0x1755a4u: goto label_1755a4;
        case 0x1755a8u: goto label_1755a8;
        case 0x1755acu: goto label_1755ac;
        case 0x1755b0u: goto label_1755b0;
        case 0x1755b4u: goto label_1755b4;
        case 0x1755b8u: goto label_1755b8;
        case 0x1755bcu: goto label_1755bc;
        case 0x1755c0u: goto label_1755c0;
        case 0x1755c4u: goto label_1755c4;
        case 0x1755c8u: goto label_1755c8;
        case 0x1755ccu: goto label_1755cc;
        case 0x1755d0u: goto label_1755d0;
        case 0x1755d4u: goto label_1755d4;
        case 0x1755d8u: goto label_1755d8;
        case 0x1755dcu: goto label_1755dc;
        case 0x1755e0u: goto label_1755e0;
        case 0x1755e4u: goto label_1755e4;
        case 0x1755e8u: goto label_1755e8;
        case 0x1755ecu: goto label_1755ec;
        case 0x1755f0u: goto label_1755f0;
        case 0x1755f4u: goto label_1755f4;
        case 0x1755f8u: goto label_1755f8;
        case 0x1755fcu: goto label_1755fc;
        case 0x175600u: goto label_175600;
        case 0x175604u: goto label_175604;
        case 0x175608u: goto label_175608;
        case 0x17560cu: goto label_17560c;
        case 0x175610u: goto label_175610;
        case 0x175614u: goto label_175614;
        case 0x175618u: goto label_175618;
        case 0x17561cu: goto label_17561c;
        case 0x175620u: goto label_175620;
        case 0x175624u: goto label_175624;
        case 0x175628u: goto label_175628;
        case 0x17562cu: goto label_17562c;
        case 0x175630u: goto label_175630;
        case 0x175634u: goto label_175634;
        case 0x175638u: goto label_175638;
        case 0x17563cu: goto label_17563c;
        case 0x175640u: goto label_175640;
        case 0x175644u: goto label_175644;
        case 0x175648u: goto label_175648;
        case 0x17564cu: goto label_17564c;
        case 0x175650u: goto label_175650;
        case 0x175654u: goto label_175654;
        case 0x175658u: goto label_175658;
        case 0x17565cu: goto label_17565c;
        case 0x175660u: goto label_175660;
        case 0x175664u: goto label_175664;
        case 0x175668u: goto label_175668;
        case 0x17566cu: goto label_17566c;
        case 0x175670u: goto label_175670;
        case 0x175674u: goto label_175674;
        case 0x175678u: goto label_175678;
        case 0x17567cu: goto label_17567c;
        case 0x175680u: goto label_175680;
        case 0x175684u: goto label_175684;
        case 0x175688u: goto label_175688;
        case 0x17568cu: goto label_17568c;
        case 0x175690u: goto label_175690;
        case 0x175694u: goto label_175694;
        case 0x175698u: goto label_175698;
        case 0x17569cu: goto label_17569c;
        case 0x1756a0u: goto label_1756a0;
        case 0x1756a4u: goto label_1756a4;
        case 0x1756a8u: goto label_1756a8;
        case 0x1756acu: goto label_1756ac;
        case 0x1756b0u: goto label_1756b0;
        case 0x1756b4u: goto label_1756b4;
        case 0x1756b8u: goto label_1756b8;
        case 0x1756bcu: goto label_1756bc;
        case 0x1756c0u: goto label_1756c0;
        case 0x1756c4u: goto label_1756c4;
        case 0x1756c8u: goto label_1756c8;
        case 0x1756ccu: goto label_1756cc;
        case 0x1756d0u: goto label_1756d0;
        case 0x1756d4u: goto label_1756d4;
        case 0x1756d8u: goto label_1756d8;
        case 0x1756dcu: goto label_1756dc;
        case 0x1756e0u: goto label_1756e0;
        case 0x1756e4u: goto label_1756e4;
        case 0x1756e8u: goto label_1756e8;
        case 0x1756ecu: goto label_1756ec;
        case 0x1756f0u: goto label_1756f0;
        case 0x1756f4u: goto label_1756f4;
        case 0x1756f8u: goto label_1756f8;
        case 0x1756fcu: goto label_1756fc;
        case 0x175700u: goto label_175700;
        case 0x175704u: goto label_175704;
        case 0x175708u: goto label_175708;
        case 0x17570cu: goto label_17570c;
        case 0x175710u: goto label_175710;
        case 0x175714u: goto label_175714;
        case 0x175718u: goto label_175718;
        case 0x17571cu: goto label_17571c;
        case 0x175720u: goto label_175720;
        case 0x175724u: goto label_175724;
        case 0x175728u: goto label_175728;
        case 0x17572cu: goto label_17572c;
        case 0x175730u: goto label_175730;
        case 0x175734u: goto label_175734;
        case 0x175738u: goto label_175738;
        case 0x17573cu: goto label_17573c;
        case 0x175740u: goto label_175740;
        case 0x175744u: goto label_175744;
        case 0x175748u: goto label_175748;
        case 0x17574cu: goto label_17574c;
        case 0x175750u: goto label_175750;
        case 0x175754u: goto label_175754;
        case 0x175758u: goto label_175758;
        case 0x17575cu: goto label_17575c;
        case 0x175760u: goto label_175760;
        case 0x175764u: goto label_175764;
        case 0x175768u: goto label_175768;
        case 0x17576cu: goto label_17576c;
        case 0x175770u: goto label_175770;
        case 0x175774u: goto label_175774;
        case 0x175778u: goto label_175778;
        case 0x17577cu: goto label_17577c;
        case 0x175780u: goto label_175780;
        case 0x175784u: goto label_175784;
        case 0x175788u: goto label_175788;
        case 0x17578cu: goto label_17578c;
        case 0x175790u: goto label_175790;
        case 0x175794u: goto label_175794;
        case 0x175798u: goto label_175798;
        case 0x17579cu: goto label_17579c;
        case 0x1757a0u: goto label_1757a0;
        case 0x1757a4u: goto label_1757a4;
        case 0x1757a8u: goto label_1757a8;
        case 0x1757acu: goto label_1757ac;
        case 0x1757b0u: goto label_1757b0;
        case 0x1757b4u: goto label_1757b4;
        case 0x1757b8u: goto label_1757b8;
        case 0x1757bcu: goto label_1757bc;
        case 0x1757c0u: goto label_1757c0;
        case 0x1757c4u: goto label_1757c4;
        case 0x1757c8u: goto label_1757c8;
        case 0x1757ccu: goto label_1757cc;
        case 0x1757d0u: goto label_1757d0;
        case 0x1757d4u: goto label_1757d4;
        case 0x1757d8u: goto label_1757d8;
        case 0x1757dcu: goto label_1757dc;
        case 0x1757e0u: goto label_1757e0;
        case 0x1757e4u: goto label_1757e4;
        case 0x1757e8u: goto label_1757e8;
        case 0x1757ecu: goto label_1757ec;
        case 0x1757f0u: goto label_1757f0;
        case 0x1757f4u: goto label_1757f4;
        case 0x1757f8u: goto label_1757f8;
        case 0x1757fcu: goto label_1757fc;
        case 0x175800u: goto label_175800;
        case 0x175804u: goto label_175804;
        case 0x175808u: goto label_175808;
        case 0x17580cu: goto label_17580c;
        case 0x175810u: goto label_175810;
        case 0x175814u: goto label_175814;
        case 0x175818u: goto label_175818;
        case 0x17581cu: goto label_17581c;
        case 0x175820u: goto label_175820;
        case 0x175824u: goto label_175824;
        case 0x175828u: goto label_175828;
        case 0x17582cu: goto label_17582c;
        case 0x175830u: goto label_175830;
        case 0x175834u: goto label_175834;
        case 0x175838u: goto label_175838;
        case 0x17583cu: goto label_17583c;
        case 0x175840u: goto label_175840;
        case 0x175844u: goto label_175844;
        case 0x175848u: goto label_175848;
        case 0x17584cu: goto label_17584c;
        case 0x175850u: goto label_175850;
        case 0x175854u: goto label_175854;
        case 0x175858u: goto label_175858;
        case 0x17585cu: goto label_17585c;
        case 0x175860u: goto label_175860;
        case 0x175864u: goto label_175864;
        case 0x175868u: goto label_175868;
        case 0x17586cu: goto label_17586c;
        case 0x175870u: goto label_175870;
        case 0x175874u: goto label_175874;
        case 0x175878u: goto label_175878;
        case 0x17587cu: goto label_17587c;
        case 0x175880u: goto label_175880;
        case 0x175884u: goto label_175884;
        case 0x175888u: goto label_175888;
        case 0x17588cu: goto label_17588c;
        case 0x175890u: goto label_175890;
        case 0x175894u: goto label_175894;
        case 0x175898u: goto label_175898;
        case 0x17589cu: goto label_17589c;
        case 0x1758a0u: goto label_1758a0;
        case 0x1758a4u: goto label_1758a4;
        case 0x1758a8u: goto label_1758a8;
        case 0x1758acu: goto label_1758ac;
        case 0x1758b0u: goto label_1758b0;
        case 0x1758b4u: goto label_1758b4;
        case 0x1758b8u: goto label_1758b8;
        case 0x1758bcu: goto label_1758bc;
        case 0x1758c0u: goto label_1758c0;
        case 0x1758c4u: goto label_1758c4;
        case 0x1758c8u: goto label_1758c8;
        case 0x1758ccu: goto label_1758cc;
        case 0x1758d0u: goto label_1758d0;
        case 0x1758d4u: goto label_1758d4;
        case 0x1758d8u: goto label_1758d8;
        case 0x1758dcu: goto label_1758dc;
        case 0x1758e0u: goto label_1758e0;
        case 0x1758e4u: goto label_1758e4;
        case 0x1758e8u: goto label_1758e8;
        case 0x1758ecu: goto label_1758ec;
        case 0x1758f0u: goto label_1758f0;
        case 0x1758f4u: goto label_1758f4;
        case 0x1758f8u: goto label_1758f8;
        case 0x1758fcu: goto label_1758fc;
        case 0x175900u: goto label_175900;
        case 0x175904u: goto label_175904;
        case 0x175908u: goto label_175908;
        case 0x17590cu: goto label_17590c;
        case 0x175910u: goto label_175910;
        case 0x175914u: goto label_175914;
        case 0x175918u: goto label_175918;
        case 0x17591cu: goto label_17591c;
        case 0x175920u: goto label_175920;
        case 0x175924u: goto label_175924;
        case 0x175928u: goto label_175928;
        case 0x17592cu: goto label_17592c;
        case 0x175930u: goto label_175930;
        case 0x175934u: goto label_175934;
        case 0x175938u: goto label_175938;
        case 0x17593cu: goto label_17593c;
        case 0x175940u: goto label_175940;
        case 0x175944u: goto label_175944;
        case 0x175948u: goto label_175948;
        case 0x17594cu: goto label_17594c;
        case 0x175950u: goto label_175950;
        case 0x175954u: goto label_175954;
        case 0x175958u: goto label_175958;
        case 0x17595cu: goto label_17595c;
        case 0x175960u: goto label_175960;
        case 0x175964u: goto label_175964;
        case 0x175968u: goto label_175968;
        case 0x17596cu: goto label_17596c;
        case 0x175970u: goto label_175970;
        case 0x175974u: goto label_175974;
        case 0x175978u: goto label_175978;
        case 0x17597cu: goto label_17597c;
        case 0x175980u: goto label_175980;
        case 0x175984u: goto label_175984;
        case 0x175988u: goto label_175988;
        case 0x17598cu: goto label_17598c;
        case 0x175990u: goto label_175990;
        case 0x175994u: goto label_175994;
        case 0x175998u: goto label_175998;
        case 0x17599cu: goto label_17599c;
        case 0x1759a0u: goto label_1759a0;
        case 0x1759a4u: goto label_1759a4;
        case 0x1759a8u: goto label_1759a8;
        case 0x1759acu: goto label_1759ac;
        case 0x1759b0u: goto label_1759b0;
        case 0x1759b4u: goto label_1759b4;
        case 0x1759b8u: goto label_1759b8;
        case 0x1759bcu: goto label_1759bc;
        case 0x1759c0u: goto label_1759c0;
        case 0x1759c4u: goto label_1759c4;
        case 0x1759c8u: goto label_1759c8;
        case 0x1759ccu: goto label_1759cc;
        case 0x1759d0u: goto label_1759d0;
        case 0x1759d4u: goto label_1759d4;
        case 0x1759d8u: goto label_1759d8;
        case 0x1759dcu: goto label_1759dc;
        case 0x1759e0u: goto label_1759e0;
        case 0x1759e4u: goto label_1759e4;
        case 0x1759e8u: goto label_1759e8;
        case 0x1759ecu: goto label_1759ec;
        case 0x1759f0u: goto label_1759f0;
        case 0x1759f4u: goto label_1759f4;
        case 0x1759f8u: goto label_1759f8;
        case 0x1759fcu: goto label_1759fc;
        default: break;
    }

    ctx->pc = 0x174540u;

label_174540:
    // 0x174540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_174544:
    // 0x174544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174548:
    // 0x174548: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x174548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17454c:
    // 0x17454c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174550:
    // 0x174550: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174554:
    // 0x174554: 0xc0557e8  jal         func_155FA0
label_174558:
    if (ctx->pc == 0x174558u) {
        ctx->pc = 0x17455Cu;
        goto label_17455c;
    }
    ctx->pc = 0x174554u;
    SET_GPR_U32(ctx, 31, 0x17455Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x174554u, 0x17455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17455Cu;
label_17455c:
    // 0x17455c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17455cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_174560:
    // 0x174560: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x174560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
label_174564:
    // 0x174564: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174568:
    // 0x174568: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17456c:
    // 0x17456c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174570:
    // 0x174570: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174574:
    // 0x174574: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x174574u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
label_174578:
    // 0x174578: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17457c:
    // 0x17457c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174580:
    // 0x174580: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x174580u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_174584:
    // 0x174584: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174588:
    // 0x174588: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_17458c:
    // 0x17458c: 0xc056254  jal         func_158950
label_174590:
    if (ctx->pc == 0x174590u) {
        ctx->pc = 0x174594u;
        goto label_174594;
    }
    ctx->pc = 0x17458Cu;
    SET_GPR_U32(ctx, 31, 0x174594u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x17458Cu, 0x174594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174594u;
label_174594:
    // 0x174594: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174598:
    // 0x174598: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_17459c:
    // 0x17459c: 0xc056254  jal         func_158950
label_1745a0:
    if (ctx->pc == 0x1745A0u) {
        ctx->pc = 0x1745A4u;
        goto label_1745a4;
    }
    ctx->pc = 0x17459Cu;
    SET_GPR_U32(ctx, 31, 0x1745A4u);
    ctx->pc = 0x158950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158950u, 0x17459Cu, 0x1745A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1745A4u;
label_1745a4:
    // 0x1745a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745a8:
    // 0x1745a8: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x1745a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_1745ac:
    // 0x1745ac: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1745acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1745b0:
    // 0x1745b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1745b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1745b4:
    // 0x1745b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745b8:
    // 0x1745b8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x1745b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
label_1745bc:
    // 0x1745bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1745bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1745c0:
    // 0x1745c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745c4:
    // 0x1745c4: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x1745c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
label_1745c8:
    // 0x1745c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745cc:
    // 0x1745cc: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x1745ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
label_1745d0:
    // 0x1745d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745d4:
    // 0x1745d4: 0xa0400098  sb          $zero, 0x98($v0)
    ctx->pc = 0x1745d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 0));
label_1745d8:
    // 0x1745d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745dc:
    // 0x1745dc: 0xa0400099  sb          $zero, 0x99($v0)
    ctx->pc = 0x1745dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 0));
label_1745e0:
    // 0x1745e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745e4:
    // 0x1745e4: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x1745e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
label_1745e8:
    // 0x1745e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1745e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1745ec:
    // 0x1745ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1745ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1745f0:
    // 0x1745f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1745f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1745f4:
    // 0x1745f4: 0x3e00008  jr          $ra
label_1745f8:
    if (ctx->pc == 0x1745F8u) {
        ctx->pc = 0x1745FCu;
        goto label_1745fc;
    }
    ctx->pc = 0x1745F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1745F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1745FCu;
label_1745fc:
    // 0x1745fc: 0x0  nop
    ctx->pc = 0x1745fcu;
    // NOP
label_174600:
    // 0x174600: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_174604:
    // 0x174604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174608:
    // 0x174608: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x174608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17460c:
    // 0x17460c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x17460cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_174610:
    // 0x174610: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174614:
    // 0x174614: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_174618:
    if (ctx->pc == 0x174618u) {
        ctx->pc = 0x17461Cu;
        goto label_17461c;
    }
    ctx->pc = 0x174614u;
    {
        const bool branch_taken_0x174614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174614) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x17461Cu;
label_17461c:
    // 0x17461c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x17461cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_174620:
    // 0x174620: 0x24633e70  addiu       $v1, $v1, 0x3E70
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15984));
label_174624:
    // 0x174624: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174628:
    // 0x174628: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x174628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17462c:
    // 0x17462c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x17462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174630:
    // 0x174630: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x174630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_174634:
    // 0x174634: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x174634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_174638:
    // 0x174638: 0xc056094  jal         func_158250
label_17463c:
    if (ctx->pc == 0x17463Cu) {
        ctx->pc = 0x174640u;
        goto label_174640;
    }
    ctx->pc = 0x174638u;
    SET_GPR_U32(ctx, 31, 0x174640u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x174638u, 0x174640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174640u;
label_174640:
    // 0x174640: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174644:
    // 0x174644: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174648:
    // 0x174648: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x174648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17464c:
    // 0x17464c: 0xc056094  jal         func_158250
label_174650:
    if (ctx->pc == 0x174650u) {
        ctx->pc = 0x174654u;
        goto label_174654;
    }
    ctx->pc = 0x17464Cu;
    SET_GPR_U32(ctx, 31, 0x174654u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x17464Cu, 0x174654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174654u;
label_174654:
    // 0x174654: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174658:
    // 0x174658: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17465c:
    // 0x17465c: 0xc055950  jal         func_156540
label_174660:
    if (ctx->pc == 0x174660u) {
        ctx->pc = 0x174664u;
        goto label_174664;
    }
    ctx->pc = 0x17465Cu;
    SET_GPR_U32(ctx, 31, 0x174664u);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x17465Cu, 0x174664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174664u;
label_174664:
    // 0x174664: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_174668:
    // 0x174668: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x174668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_17466c:
    // 0x17466c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x17466cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_174670:
    // 0x174670: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_174674:
    if (ctx->pc == 0x174674u) {
        ctx->pc = 0x174678u;
        goto label_174678;
    }
    ctx->pc = 0x174670u;
    {
        const bool branch_taken_0x174670 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x174670) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x174678u;
label_174678:
    // 0x174678: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17467c:
    // 0x17467c: 0xc0ba070  jal         func_2E81C0
label_174680:
    if (ctx->pc == 0x174680u) {
        ctx->pc = 0x174684u;
        goto label_174684;
    }
    ctx->pc = 0x17467Cu;
    SET_GPR_U32(ctx, 31, 0x174684u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x17467Cu, 0x174684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174684u;
label_174684:
    // 0x174684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_174688:
    // 0x174688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17468c:
    // 0x17468c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17468cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_174690:
    // 0x174690: 0x3e00008  jr          $ra
label_174694:
    if (ctx->pc == 0x174694u) {
        ctx->pc = 0x174698u;
        goto label_174698;
    }
    ctx->pc = 0x174690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174698u;
label_174698:
    // 0x174698: 0x0  nop
    ctx->pc = 0x174698u;
    // NOP
label_17469c:
    // 0x17469c: 0x0  nop
    ctx->pc = 0x17469cu;
    // NOP
label_1746a0:
    // 0x1746a0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1746a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1746a4:
    // 0x1746a4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1746a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1746a8:
    // 0x1746a8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1746a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1746ac:
    // 0x1746ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1746acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1746b0:
    // 0x1746b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1746b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1746b4:
    // 0x1746b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1746b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1746b8:
    // 0x1746b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1746b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1746bc:
    // 0x1746bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1746bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1746c0:
    // 0x1746c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1746c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1746c4:
    // 0x1746c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1746c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1746c8:
    // 0x1746c8: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x1746c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_1746cc:
    // 0x1746cc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1746ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1746d0:
    // 0x1746d0: 0xc055974  jal         func_1565D0
label_1746d4:
    if (ctx->pc == 0x1746D4u) {
        ctx->pc = 0x1746D8u;
        goto label_1746d8;
    }
    ctx->pc = 0x1746D0u;
    SET_GPR_U32(ctx, 31, 0x1746D8u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x1746D0u, 0x1746D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746D8u;
label_1746d8:
    // 0x1746d8: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x1746d8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1746dc:
    // 0x1746dc: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1746dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1746e0:
    // 0x1746e0: 0x32a200ff  andi        $v0, $s5, 0xFF
    ctx->pc = 0x1746e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1746e4:
    // 0x1746e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1746e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1746e8:
    // 0x1746e8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_1746ec:
    if (ctx->pc == 0x1746ECu) {
        ctx->pc = 0x1746F0u;
        goto label_1746f0;
    }
    ctx->pc = 0x1746E8u;
    {
        const bool branch_taken_0x1746e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1746e8) {
            ctx->pc = 0x174710u;
            goto label_174710;
        }
    }
    ctx->pc = 0x1746F0u;
label_1746f0:
    // 0x1746f0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1746f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1746f4:
    // 0x1746f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1746f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1746f8:
    // 0x1746f8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1746f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1746fc:
    // 0x1746fc: 0x24a548a0  addiu       $a1, $a1, 0x48A0
    ctx->pc = 0x1746fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18592));
label_174700:
    // 0x174700: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x174700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174704:
    // 0x174704: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x174704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_174708:
    // 0x174708: 0x320f809  jalr        $t9
label_17470c:
    if (ctx->pc == 0x17470Cu) {
        ctx->pc = 0x174710u;
        goto label_174710;
    }
    ctx->pc = 0x174708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x174710u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174708u, 0x174710u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174710u;
label_174710:
    // 0x174710: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174714:
    // 0x174714: 0x24b60064  addiu       $s6, $a1, 0x64
    ctx->pc = 0x174714u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_174718:
    // 0x174718: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17471c:
    // 0x17471c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x17471cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_174720:
    // 0x174720: 0xc056708  jal         func_159C20
label_174724:
    if (ctx->pc == 0x174724u) {
        ctx->pc = 0x174728u;
        goto label_174728;
    }
    ctx->pc = 0x174720u;
    SET_GPR_U32(ctx, 31, 0x174728u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x174720u, 0x174728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174728u;
label_174728:
    // 0x174728: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17472c:
    // 0x17472c: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x17472cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174730:
    // 0x174730: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x174730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_174734:
    // 0x174734: 0xc056708  jal         func_159C20
label_174738:
    if (ctx->pc == 0x174738u) {
        ctx->pc = 0x17473Cu;
        goto label_17473c;
    }
    ctx->pc = 0x174734u;
    SET_GPR_U32(ctx, 31, 0x17473Cu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x174734u, 0x17473Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17473Cu;
label_17473c:
    // 0x17473c: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x17473cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174740:
    // 0x174740: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174744:
    // 0x174744: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174744u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174748:
    // 0x174748: 0x24a548c0  addiu       $a1, $a1, 0x48C0
    ctx->pc = 0x174748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18624));
label_17474c:
    // 0x17474c: 0xc0552e4  jal         func_154B90
label_174750:
    if (ctx->pc == 0x174750u) {
        ctx->pc = 0x174754u;
        goto label_174754;
    }
    ctx->pc = 0x17474Cu;
    SET_GPR_U32(ctx, 31, 0x174754u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17474Cu, 0x174754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174754u;
label_174754:
    // 0x174754: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x174754u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174758:
    // 0x174758: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17475c:
    // 0x17475c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17475cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174760:
    // 0x174760: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x174760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_174764:
    // 0x174764: 0xc05612c  jal         func_1584B0
label_174768:
    if (ctx->pc == 0x174768u) {
        ctx->pc = 0x17476Cu;
        goto label_17476c;
    }
    ctx->pc = 0x174764u;
    SET_GPR_U32(ctx, 31, 0x17476Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174764u, 0x17476Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17476Cu;
label_17476c:
    // 0x17476c: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x17476cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_174770:
    // 0x174770: 0x8fb000d0  lw          $s0, 0xD0($sp)
    ctx->pc = 0x174770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174774:
    // 0x174774: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174778:
    // 0x174778: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174778u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_17477c:
    // 0x17477c: 0x24a548d0  addiu       $a1, $a1, 0x48D0
    ctx->pc = 0x17477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18640));
label_174780:
    // 0x174780: 0xc0552e4  jal         func_154B90
label_174784:
    if (ctx->pc == 0x174784u) {
        ctx->pc = 0x174788u;
        goto label_174788;
    }
    ctx->pc = 0x174780u;
    SET_GPR_U32(ctx, 31, 0x174788u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174780u, 0x174788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174788u;
label_174788:
    // 0x174788: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174788u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17478c:
    // 0x17478c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x17478cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174790:
    // 0x174790: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x174790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174794:
    // 0x174794: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x174794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_174798:
    // 0x174798: 0xc05612c  jal         func_1584B0
label_17479c:
    if (ctx->pc == 0x17479Cu) {
        ctx->pc = 0x1747A0u;
        goto label_1747a0;
    }
    ctx->pc = 0x174798u;
    SET_GPR_U32(ctx, 31, 0x1747A0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174798u, 0x1747A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747A0u;
label_1747a0:
    // 0x1747a0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1747a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_1747a4:
    // 0x1747a4: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x1747a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1747a8:
    // 0x1747a8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1747a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1747ac:
    // 0x1747ac: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1747acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1747b0:
    // 0x1747b0: 0x24a548e0  addiu       $a1, $a1, 0x48E0
    ctx->pc = 0x1747b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18656));
label_1747b4:
    // 0x1747b4: 0xc0552e4  jal         func_154B90
label_1747b8:
    if (ctx->pc == 0x1747B8u) {
        ctx->pc = 0x1747BCu;
        goto label_1747bc;
    }
    ctx->pc = 0x1747B4u;
    SET_GPR_U32(ctx, 31, 0x1747BCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1747B4u, 0x1747BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747BCu;
label_1747bc:
    // 0x1747bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1747bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1747c0:
    // 0x1747c0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1747c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1747c4:
    // 0x1747c4: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x1747c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_1747c8:
    // 0x1747c8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1747c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1747cc:
    // 0x1747cc: 0xc05612c  jal         func_1584B0
label_1747d0:
    if (ctx->pc == 0x1747D0u) {
        ctx->pc = 0x1747D4u;
        goto label_1747d4;
    }
    ctx->pc = 0x1747CCu;
    SET_GPR_U32(ctx, 31, 0x1747D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1747CCu, 0x1747D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1747D4u;
label_1747d4:
    // 0x1747d4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1747d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1747d8:
    // 0x1747d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1747d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1747dc:
    // 0x1747dc: 0x10000039  b           . + 4 + (0x39 << 2)
label_1747e0:
    if (ctx->pc == 0x1747E0u) {
        ctx->pc = 0x1747E4u;
        goto label_1747e4;
    }
    ctx->pc = 0x1747DCu;
    {
        const bool branch_taken_0x1747dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1747dc) {
            ctx->pc = 0x1748C4u;
            goto label_1748c4;
        }
    }
    ctx->pc = 0x1747E4u;
label_1747e4:
    // 0x1747e4: 0x26360001  addiu       $s6, $s1, 0x1
    ctx->pc = 0x1747e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1747e8:
    // 0x1747e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1747e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1747ec:
    // 0x1747ec: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1747ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1747f0:
    // 0x1747f0: 0x24a548f0  addiu       $a1, $a1, 0x48F0
    ctx->pc = 0x1747f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18672));
label_1747f4:
    // 0x1747f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1747f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1747f8:
    // 0x1747f8: 0xc0bc3e2  jal         func_2F0F88
label_1747fc:
    if (ctx->pc == 0x1747FCu) {
        ctx->pc = 0x174800u;
        goto label_174800;
    }
    ctx->pc = 0x1747F8u;
    SET_GPR_U32(ctx, 31, 0x174800u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x1747F8u, 0x174800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174800u;
label_174800:
    // 0x174800: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174804:
    // 0x174804: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x174804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_174808:
    // 0x174808: 0xc0552e4  jal         func_154B90
label_17480c:
    if (ctx->pc == 0x17480Cu) {
        ctx->pc = 0x174810u;
        goto label_174810;
    }
    ctx->pc = 0x174808u;
    SET_GPR_U32(ctx, 31, 0x174810u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174808u, 0x174810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174810u;
label_174810:
    // 0x174810: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174810u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174814:
    // 0x174814: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x174814u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174818:
    // 0x174818: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x174818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_17481c:
    // 0x17481c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174820:
    // 0x174820: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174820u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174824:
    // 0x174824: 0xc08c8dc  jal         func_232370
label_174828:
    if (ctx->pc == 0x174828u) {
        ctx->pc = 0x17482Cu;
        goto label_17482c;
    }
    ctx->pc = 0x174824u;
    SET_GPR_U32(ctx, 31, 0x17482Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174824u, 0x17482Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17482Cu;
label_17482c:
    // 0x17482c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x17482cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_174830:
    // 0x174830: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x174830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_174834:
    // 0x174834: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174838:
    // 0x174838: 0x24a54900  addiu       $a1, $a1, 0x4900
    ctx->pc = 0x174838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18688));
label_17483c:
    // 0x17483c: 0xc0bc3e2  jal         func_2F0F88
label_174840:
    if (ctx->pc == 0x174840u) {
        ctx->pc = 0x174844u;
        goto label_174844;
    }
    ctx->pc = 0x17483Cu;
    SET_GPR_U32(ctx, 31, 0x174844u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17483Cu, 0x174844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174844u;
label_174844:
    // 0x174844: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x174844u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174848:
    // 0x174848: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17484c:
    // 0x17484c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x17484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_174850:
    // 0x174850: 0xc0552e4  jal         func_154B90
label_174854:
    if (ctx->pc == 0x174854u) {
        ctx->pc = 0x174858u;
        goto label_174858;
    }
    ctx->pc = 0x174850u;
    SET_GPR_U32(ctx, 31, 0x174858u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174850u, 0x174858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174858u;
label_174858:
    // 0x174858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x174858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17485c:
    // 0x17485c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x17485cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174860:
    // 0x174860: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x174860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_174864:
    // 0x174864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x174864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_174868:
    // 0x174868: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17486c:
    // 0x17486c: 0xc08c8dc  jal         func_232370
label_174870:
    if (ctx->pc == 0x174870u) {
        ctx->pc = 0x174874u;
        goto label_174874;
    }
    ctx->pc = 0x17486Cu;
    SET_GPR_U32(ctx, 31, 0x174874u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17486Cu, 0x174874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174874u;
label_174874:
    // 0x174874: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_174878:
    if (ctx->pc == 0x174878u) {
        ctx->pc = 0x17487Cu;
        goto label_17487c;
    }
    ctx->pc = 0x174874u;
    {
        const bool branch_taken_0x174874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x174874) {
            ctx->pc = 0x1748C0u;
            goto label_1748c0;
        }
    }
    ctx->pc = 0x17487Cu;
label_17487c:
    // 0x17487c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x17487cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_174880:
    // 0x174880: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174884:
    // 0x174884: 0x24a54920  addiu       $a1, $a1, 0x4920
    ctx->pc = 0x174884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18720));
label_174888:
    // 0x174888: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17488c:
    // 0x17488c: 0xc0bc3e2  jal         func_2F0F88
label_174890:
    if (ctx->pc == 0x174890u) {
        ctx->pc = 0x174894u;
        goto label_174894;
    }
    ctx->pc = 0x17488Cu;
    SET_GPR_U32(ctx, 31, 0x174894u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x17488Cu, 0x174894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174894u;
label_174894:
    // 0x174894: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174898:
    // 0x174898: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x174898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_17489c:
    // 0x17489c: 0xc0552e4  jal         func_154B90
label_1748a0:
    if (ctx->pc == 0x1748A0u) {
        ctx->pc = 0x1748A4u;
        goto label_1748a4;
    }
    ctx->pc = 0x17489Cu;
    SET_GPR_U32(ctx, 31, 0x1748A4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17489Cu, 0x1748A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748A4u;
label_1748a4:
    // 0x1748a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1748a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1748a8:
    // 0x1748a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1748a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1748ac:
    // 0x1748ac: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1748acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1748b0:
    // 0x1748b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1748b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1748b4:
    // 0x1748b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1748b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1748b8:
    // 0x1748b8: 0xc08c8dc  jal         func_232370
label_1748bc:
    if (ctx->pc == 0x1748BCu) {
        ctx->pc = 0x1748C0u;
        goto label_1748c0;
    }
    ctx->pc = 0x1748B8u;
    SET_GPR_U32(ctx, 31, 0x1748C0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1748B8u, 0x1748C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748C0u;
label_1748c0:
    // 0x1748c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1748c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1748c4:
    // 0x1748c4: 0x2e210006  sltiu       $at, $s1, 0x6
    ctx->pc = 0x1748c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1748c8:
    // 0x1748c8: 0x1420ffc6  bnez        $at, . + 4 + (-0x3A << 2)
label_1748cc:
    if (ctx->pc == 0x1748CCu) {
        ctx->pc = 0x1748D0u;
        goto label_1748d0;
    }
    ctx->pc = 0x1748C8u;
    {
        const bool branch_taken_0x1748c8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1748c8) {
            ctx->pc = 0x1747E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1747e4;
        }
    }
    ctx->pc = 0x1748D0u;
label_1748d0:
    // 0x1748d0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1748d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1748d4:
    // 0x1748d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1748d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1748d8:
    // 0x1748d8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1748d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1748dc:
    // 0x1748dc: 0x24a54938  addiu       $a1, $a1, 0x4938
    ctx->pc = 0x1748dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18744));
label_1748e0:
    // 0x1748e0: 0xc0552e4  jal         func_154B90
label_1748e4:
    if (ctx->pc == 0x1748E4u) {
        ctx->pc = 0x1748E8u;
        goto label_1748e8;
    }
    ctx->pc = 0x1748E0u;
    SET_GPR_U32(ctx, 31, 0x1748E8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1748E0u, 0x1748E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1748E8u;
label_1748e8:
    // 0x1748e8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1748e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1748ec:
    // 0x1748ec: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1748ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1748f0:
    // 0x1748f0: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1748f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1748f4:
    // 0x1748f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1748f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1748f8:
    // 0x1748f8: 0xc05612c  jal         func_1584B0
label_1748fc:
    if (ctx->pc == 0x1748FCu) {
        ctx->pc = 0x174900u;
        goto label_174900;
    }
    ctx->pc = 0x1748F8u;
    SET_GPR_U32(ctx, 31, 0x174900u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1748F8u, 0x174900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174900u;
label_174900:
    // 0x174900: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174904:
    // 0x174904: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174908:
    // 0x174908: 0x278590a8  addiu       $a1, $gp, -0x6F58
    ctx->pc = 0x174908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938792));
label_17490c:
    // 0x17490c: 0xc0552e4  jal         func_154B90
label_174910:
    if (ctx->pc == 0x174910u) {
        ctx->pc = 0x174914u;
        goto label_174914;
    }
    ctx->pc = 0x17490Cu;
    SET_GPR_U32(ctx, 31, 0x174914u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17490Cu, 0x174914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174914u;
label_174914:
    // 0x174914: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174914u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174918:
    // 0x174918: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17491c:
    // 0x17491c: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x17491cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_174920:
    // 0x174920: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x174920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_174924:
    // 0x174924: 0xc05612c  jal         func_1584B0
label_174928:
    if (ctx->pc == 0x174928u) {
        ctx->pc = 0x17492Cu;
        goto label_17492c;
    }
    ctx->pc = 0x174924u;
    SET_GPR_U32(ctx, 31, 0x17492Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174924u, 0x17492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17492Cu;
label_17492c:
    // 0x17492c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x17492cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174930:
    // 0x174930: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174934:
    // 0x174934: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174938:
    // 0x174938: 0x278590b0  addiu       $a1, $gp, -0x6F50
    ctx->pc = 0x174938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938800));
label_17493c:
    // 0x17493c: 0xc0552e4  jal         func_154B90
label_174940:
    if (ctx->pc == 0x174940u) {
        ctx->pc = 0x174944u;
        goto label_174944;
    }
    ctx->pc = 0x17493Cu;
    SET_GPR_U32(ctx, 31, 0x174944u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17493Cu, 0x174944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174944u;
label_174944:
    // 0x174944: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174948:
    // 0x174948: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17494c:
    // 0x17494c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174950:
    // 0x174950: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x174950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_174954:
    // 0x174954: 0xc05612c  jal         func_1584B0
label_174958:
    if (ctx->pc == 0x174958u) {
        ctx->pc = 0x17495Cu;
        goto label_17495c;
    }
    ctx->pc = 0x174954u;
    SET_GPR_U32(ctx, 31, 0x17495Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174954u, 0x17495Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17495Cu;
label_17495c:
    // 0x17495c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x17495cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174960:
    // 0x174960: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174964:
    // 0x174964: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174964u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174968:
    // 0x174968: 0x24a54948  addiu       $a1, $a1, 0x4948
    ctx->pc = 0x174968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18760));
label_17496c:
    // 0x17496c: 0xc0552e4  jal         func_154B90
label_174970:
    if (ctx->pc == 0x174970u) {
        ctx->pc = 0x174974u;
        goto label_174974;
    }
    ctx->pc = 0x17496Cu;
    SET_GPR_U32(ctx, 31, 0x174974u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17496Cu, 0x174974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174974u;
label_174974:
    // 0x174974: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174978:
    // 0x174978: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17497c:
    // 0x17497c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x17497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174980:
    // 0x174980: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x174980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_174984:
    // 0x174984: 0xc05612c  jal         func_1584B0
label_174988:
    if (ctx->pc == 0x174988u) {
        ctx->pc = 0x17498Cu;
        goto label_17498c;
    }
    ctx->pc = 0x174984u;
    SET_GPR_U32(ctx, 31, 0x17498Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174984u, 0x17498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17498Cu;
label_17498c:
    // 0x17498c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x17498cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174990:
    // 0x174990: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174994:
    // 0x174994: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174998:
    // 0x174998: 0x24a54958  addiu       $a1, $a1, 0x4958
    ctx->pc = 0x174998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18776));
label_17499c:
    // 0x17499c: 0xc0552e4  jal         func_154B90
label_1749a0:
    if (ctx->pc == 0x1749A0u) {
        ctx->pc = 0x1749A4u;
        goto label_1749a4;
    }
    ctx->pc = 0x17499Cu;
    SET_GPR_U32(ctx, 31, 0x1749A4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x17499Cu, 0x1749A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749A4u;
label_1749a4:
    // 0x1749a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1749a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1749a8:
    // 0x1749a8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1749a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1749ac:
    // 0x1749ac: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x1749acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1749b0:
    // 0x1749b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1749b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1749b4:
    // 0x1749b4: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1749b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_1749b8:
    // 0x1749b8: 0xc05612c  jal         func_1584B0
label_1749bc:
    if (ctx->pc == 0x1749BCu) {
        ctx->pc = 0x1749C0u;
        goto label_1749c0;
    }
    ctx->pc = 0x1749B8u;
    SET_GPR_U32(ctx, 31, 0x1749C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1749B8u, 0x1749C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749C0u;
label_1749c0:
    // 0x1749c0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x1749c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_1749c4:
    // 0x1749c4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1749c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1749c8:
    // 0x1749c8: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1749c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1749cc:
    // 0x1749cc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1749ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1749d0:
    // 0x1749d0: 0xc05612c  jal         func_1584B0
label_1749d4:
    if (ctx->pc == 0x1749D4u) {
        ctx->pc = 0x1749D8u;
        goto label_1749d8;
    }
    ctx->pc = 0x1749D0u;
    SET_GPR_U32(ctx, 31, 0x1749D8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1749D0u, 0x1749D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749D8u;
label_1749d8:
    // 0x1749d8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1749d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1749dc:
    // 0x1749dc: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x1749dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1749e0:
    // 0x1749e0: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x1749e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1749e4:
    // 0x1749e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1749e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1749e8:
    // 0x1749e8: 0xc08c8dc  jal         func_232370
label_1749ec:
    if (ctx->pc == 0x1749ECu) {
        ctx->pc = 0x1749F0u;
        goto label_1749f0;
    }
    ctx->pc = 0x1749E8u;
    SET_GPR_U32(ctx, 31, 0x1749F0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1749E8u, 0x1749F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1749F0u;
label_1749f0:
    // 0x1749f0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1749f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1749f4:
    // 0x1749f4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x1749f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_1749f8:
    // 0x1749f8: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x1749f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_1749fc:
    // 0x1749fc: 0xc05612c  jal         func_1584B0
label_174a00:
    if (ctx->pc == 0x174A00u) {
        ctx->pc = 0x174A04u;
        goto label_174a04;
    }
    ctx->pc = 0x1749FCu;
    SET_GPR_U32(ctx, 31, 0x174A04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1749FCu, 0x174A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A04u;
label_174a04:
    // 0x174a04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x174a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174a08:
    // 0x174a08: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x174a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a0c:
    // 0x174a0c: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x174a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_174a10:
    // 0x174a10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a14:
    // 0x174a14: 0xc08c8dc  jal         func_232370
label_174a18:
    if (ctx->pc == 0x174A18u) {
        ctx->pc = 0x174A1Cu;
        goto label_174a1c;
    }
    ctx->pc = 0x174A14u;
    SET_GPR_U32(ctx, 31, 0x174A1Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174A14u, 0x174A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A1Cu;
label_174a1c:
    // 0x174a1c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a20:
    // 0x174a20: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174a24:
    // 0x174a24: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x174a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_174a28:
    // 0x174a28: 0xc05612c  jal         func_1584B0
label_174a2c:
    if (ctx->pc == 0x174A2Cu) {
        ctx->pc = 0x174A30u;
        goto label_174a30;
    }
    ctx->pc = 0x174A28u;
    SET_GPR_U32(ctx, 31, 0x174A30u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174A28u, 0x174A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A30u;
label_174a30:
    // 0x174a30: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x174a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_174a34:
    // 0x174a34: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x174a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a38:
    // 0x174a38: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x174a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_174a3c:
    // 0x174a3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a40:
    // 0x174a40: 0xc08c8dc  jal         func_232370
label_174a44:
    if (ctx->pc == 0x174A44u) {
        ctx->pc = 0x174A48u;
        goto label_174a48;
    }
    ctx->pc = 0x174A40u;
    SET_GPR_U32(ctx, 31, 0x174A48u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174A40u, 0x174A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A48u;
label_174a48:
    // 0x174a48: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a4c:
    // 0x174a4c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174a50:
    // 0x174a50: 0x24a54968  addiu       $a1, $a1, 0x4968
    ctx->pc = 0x174a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18792));
label_174a54:
    // 0x174a54: 0xc0552e4  jal         func_154B90
label_174a58:
    if (ctx->pc == 0x174A58u) {
        ctx->pc = 0x174A5Cu;
        goto label_174a5c;
    }
    ctx->pc = 0x174A54u;
    SET_GPR_U32(ctx, 31, 0x174A5Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174A54u, 0x174A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A5Cu;
label_174a5c:
    // 0x174a5c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174a60:
    // 0x174a60: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a64:
    // 0x174a64: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x174a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174a68:
    // 0x174a68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a6c:
    // 0x174a6c: 0xc05612c  jal         func_1584B0
label_174a70:
    if (ctx->pc == 0x174A70u) {
        ctx->pc = 0x174A74u;
        goto label_174a74;
    }
    ctx->pc = 0x174A6Cu;
    SET_GPR_U32(ctx, 31, 0x174A74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174A6Cu, 0x174A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A74u;
label_174a74:
    // 0x174a74: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174a78:
    // 0x174a78: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a7c:
    // 0x174a7c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174a80:
    // 0x174a80: 0x24a54978  addiu       $a1, $a1, 0x4978
    ctx->pc = 0x174a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18808));
label_174a84:
    // 0x174a84: 0xc0552e4  jal         func_154B90
label_174a88:
    if (ctx->pc == 0x174A88u) {
        ctx->pc = 0x174A8Cu;
        goto label_174a8c;
    }
    ctx->pc = 0x174A84u;
    SET_GPR_U32(ctx, 31, 0x174A8Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174A84u, 0x174A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174A8Cu;
label_174a8c:
    // 0x174a8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174a8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174a90:
    // 0x174a90: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174a94:
    // 0x174a94: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x174a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_174a98:
    // 0x174a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174a9c:
    // 0x174a9c: 0xc05612c  jal         func_1584B0
label_174aa0:
    if (ctx->pc == 0x174AA0u) {
        ctx->pc = 0x174AA4u;
        goto label_174aa4;
    }
    ctx->pc = 0x174A9Cu;
    SET_GPR_U32(ctx, 31, 0x174AA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174A9Cu, 0x174AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AA4u;
label_174aa4:
    // 0x174aa4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174aa8:
    // 0x174aa8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174aac:
    // 0x174aac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ab0:
    // 0x174ab0: 0x278590b8  addiu       $a1, $gp, -0x6F48
    ctx->pc = 0x174ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938808));
label_174ab4:
    // 0x174ab4: 0xc0552e4  jal         func_154B90
label_174ab8:
    if (ctx->pc == 0x174AB8u) {
        ctx->pc = 0x174ABCu;
        goto label_174abc;
    }
    ctx->pc = 0x174AB4u;
    SET_GPR_U32(ctx, 31, 0x174ABCu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174AB4u, 0x174ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174ABCu;
label_174abc:
    // 0x174abc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ac0:
    // 0x174ac0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174ac4:
    // 0x174ac4: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x174ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_174ac8:
    // 0x174ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174acc:
    // 0x174acc: 0xc05612c  jal         func_1584B0
label_174ad0:
    if (ctx->pc == 0x174AD0u) {
        ctx->pc = 0x174AD4u;
        goto label_174ad4;
    }
    ctx->pc = 0x174ACCu;
    SET_GPR_U32(ctx, 31, 0x174AD4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174ACCu, 0x174AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AD4u;
label_174ad4:
    // 0x174ad4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174ad8:
    // 0x174ad8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174adc:
    // 0x174adc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174ae0:
    // 0x174ae0: 0x24a54988  addiu       $a1, $a1, 0x4988
    ctx->pc = 0x174ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18824));
label_174ae4:
    // 0x174ae4: 0xc0552e4  jal         func_154B90
label_174ae8:
    if (ctx->pc == 0x174AE8u) {
        ctx->pc = 0x174AECu;
        goto label_174aec;
    }
    ctx->pc = 0x174AE4u;
    SET_GPR_U32(ctx, 31, 0x174AECu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174AE4u, 0x174AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174AECu;
label_174aec:
    // 0x174aec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174af0:
    // 0x174af0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174af4:
    // 0x174af4: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x174af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_174af8:
    // 0x174af8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x174af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174afc:
    // 0x174afc: 0xc05612c  jal         func_1584B0
label_174b00:
    if (ctx->pc == 0x174B00u) {
        ctx->pc = 0x174B04u;
        goto label_174b04;
    }
    ctx->pc = 0x174AFCu;
    SET_GPR_U32(ctx, 31, 0x174B04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174AFCu, 0x174B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B04u;
label_174b04:
    // 0x174b04: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174b04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174b08:
    // 0x174b08: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b0c:
    // 0x174b0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174b10:
    // 0x174b10: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174b10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174b14:
    // 0x174b14: 0x24a54998  addiu       $a1, $a1, 0x4998
    ctx->pc = 0x174b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18840));
label_174b18:
    // 0x174b18: 0xc0552e4  jal         func_154B90
label_174b1c:
    if (ctx->pc == 0x174B1Cu) {
        ctx->pc = 0x174B20u;
        goto label_174b20;
    }
    ctx->pc = 0x174B18u;
    SET_GPR_U32(ctx, 31, 0x174B20u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174B18u, 0x174B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B20u;
label_174b20:
    // 0x174b20: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174b20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174b24:
    // 0x174b24: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b28:
    // 0x174b28: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x174b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_174b2c:
    // 0x174b2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174b30:
    // 0x174b30: 0xc05612c  jal         func_1584B0
label_174b34:
    if (ctx->pc == 0x174B34u) {
        ctx->pc = 0x174B38u;
        goto label_174b38;
    }
    ctx->pc = 0x174B30u;
    SET_GPR_U32(ctx, 31, 0x174B38u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174B30u, 0x174B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B38u;
label_174b38:
    // 0x174b38: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174b38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174b3c:
    // 0x174b3c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b40:
    // 0x174b40: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174b44:
    // 0x174b44: 0x24a549a8  addiu       $a1, $a1, 0x49A8
    ctx->pc = 0x174b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18856));
label_174b48:
    // 0x174b48: 0xc0552e4  jal         func_154B90
label_174b4c:
    if (ctx->pc == 0x174B4Cu) {
        ctx->pc = 0x174B50u;
        goto label_174b50;
    }
    ctx->pc = 0x174B48u;
    SET_GPR_U32(ctx, 31, 0x174B50u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174B48u, 0x174B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B50u;
label_174b50:
    // 0x174b50: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174b50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174b54:
    // 0x174b54: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b58:
    // 0x174b58: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174b5c:
    // 0x174b5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x174b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174b60:
    // 0x174b60: 0xc05612c  jal         func_1584B0
label_174b64:
    if (ctx->pc == 0x174B64u) {
        ctx->pc = 0x174B68u;
        goto label_174b68;
    }
    ctx->pc = 0x174B60u;
    SET_GPR_U32(ctx, 31, 0x174B68u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174B60u, 0x174B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B68u;
label_174b68:
    // 0x174b68: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174b68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174b6c:
    // 0x174b6c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b70:
    // 0x174b70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174b70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174b74:
    // 0x174b74: 0x24a549b8  addiu       $a1, $a1, 0x49B8
    ctx->pc = 0x174b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18872));
label_174b78:
    // 0x174b78: 0xc0552e4  jal         func_154B90
label_174b7c:
    if (ctx->pc == 0x174B7Cu) {
        ctx->pc = 0x174B80u;
        goto label_174b80;
    }
    ctx->pc = 0x174B78u;
    SET_GPR_U32(ctx, 31, 0x174B80u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174B78u, 0x174B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B80u;
label_174b80:
    // 0x174b80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174b80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174b84:
    // 0x174b84: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174b88:
    // 0x174b88: 0x24430064  addiu       $v1, $v0, 0x64
    ctx->pc = 0x174b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_174b8c:
    // 0x174b8c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x174b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_174b90:
    // 0x174b90: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174b94:
    // 0x174b94: 0xc05612c  jal         func_1584B0
label_174b98:
    if (ctx->pc == 0x174B98u) {
        ctx->pc = 0x174B9Cu;
        goto label_174b9c;
    }
    ctx->pc = 0x174B94u;
    SET_GPR_U32(ctx, 31, 0x174B9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174B94u, 0x174B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174B9Cu;
label_174b9c:
    // 0x174b9c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174ba0:
    // 0x174ba0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174ba4:
    // 0x174ba4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174ba8:
    // 0x174ba8: 0x24a549d0  addiu       $a1, $a1, 0x49D0
    ctx->pc = 0x174ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18896));
label_174bac:
    // 0x174bac: 0xc0552e4  jal         func_154B90
label_174bb0:
    if (ctx->pc == 0x174BB0u) {
        ctx->pc = 0x174BB4u;
        goto label_174bb4;
    }
    ctx->pc = 0x174BACu;
    SET_GPR_U32(ctx, 31, 0x174BB4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174BACu, 0x174BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BB4u;
label_174bb4:
    // 0x174bb4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174bb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174bb8:
    // 0x174bb8: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x174bb8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174bbc:
    // 0x174bbc: 0x26e40058  addiu       $a0, $s7, 0x58
    ctx->pc = 0x174bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 88));
label_174bc0:
    // 0x174bc0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174bc4:
    // 0x174bc4: 0xc05612c  jal         func_1584B0
label_174bc8:
    if (ctx->pc == 0x174BC8u) {
        ctx->pc = 0x174BCCu;
        goto label_174bcc;
    }
    ctx->pc = 0x174BC4u;
    SET_GPR_U32(ctx, 31, 0x174BCCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174BC4u, 0x174BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BCCu;
label_174bcc:
    // 0x174bcc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174bd0:
    // 0x174bd0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174bd4:
    // 0x174bd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174bd8:
    // 0x174bd8: 0x24a549f0  addiu       $a1, $a1, 0x49F0
    ctx->pc = 0x174bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18928));
label_174bdc:
    // 0x174bdc: 0xc0552e4  jal         func_154B90
label_174be0:
    if (ctx->pc == 0x174BE0u) {
        ctx->pc = 0x174BE4u;
        goto label_174be4;
    }
    ctx->pc = 0x174BDCu;
    SET_GPR_U32(ctx, 31, 0x174BE4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174BDCu, 0x174BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BE4u;
label_174be4:
    // 0x174be4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174be4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174be8:
    // 0x174be8: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x174be8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174bec:
    // 0x174bec: 0x26e40064  addiu       $a0, $s7, 0x64
    ctx->pc = 0x174becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
label_174bf0:
    // 0x174bf0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x174bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174bf4:
    // 0x174bf4: 0xc05612c  jal         func_1584B0
label_174bf8:
    if (ctx->pc == 0x174BF8u) {
        ctx->pc = 0x174BFCu;
        goto label_174bfc;
    }
    ctx->pc = 0x174BF4u;
    SET_GPR_U32(ctx, 31, 0x174BFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174BF4u, 0x174BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174BFCu;
label_174bfc:
    // 0x174bfc: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174c00:
    // 0x174c00: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c04:
    // 0x174c04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174c08:
    // 0x174c08: 0x24a54a08  addiu       $a1, $a1, 0x4A08
    ctx->pc = 0x174c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18952));
label_174c0c:
    // 0x174c0c: 0xc0552e4  jal         func_154B90
label_174c10:
    if (ctx->pc == 0x174C10u) {
        ctx->pc = 0x174C14u;
        goto label_174c14;
    }
    ctx->pc = 0x174C0Cu;
    SET_GPR_U32(ctx, 31, 0x174C14u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174C0Cu, 0x174C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C14u;
label_174c14:
    // 0x174c14: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174c14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174c18:
    // 0x174c18: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x174c18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c1c:
    // 0x174c1c: 0x26e40058  addiu       $a0, $s7, 0x58
    ctx->pc = 0x174c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 88));
label_174c20:
    // 0x174c20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x174c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174c24:
    // 0x174c24: 0xc05612c  jal         func_1584B0
label_174c28:
    if (ctx->pc == 0x174C28u) {
        ctx->pc = 0x174C2Cu;
        goto label_174c2c;
    }
    ctx->pc = 0x174C24u;
    SET_GPR_U32(ctx, 31, 0x174C2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174C24u, 0x174C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C2Cu;
label_174c2c:
    // 0x174c2c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174c30:
    // 0x174c30: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c34:
    // 0x174c34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174c38:
    // 0x174c38: 0x24a54a18  addiu       $a1, $a1, 0x4A18
    ctx->pc = 0x174c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18968));
label_174c3c:
    // 0x174c3c: 0xc0552e4  jal         func_154B90
label_174c40:
    if (ctx->pc == 0x174C40u) {
        ctx->pc = 0x174C44u;
        goto label_174c44;
    }
    ctx->pc = 0x174C3Cu;
    SET_GPR_U32(ctx, 31, 0x174C44u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174C3Cu, 0x174C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C44u;
label_174c44:
    // 0x174c44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174c44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174c48:
    // 0x174c48: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c4c:
    // 0x174c4c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174c50:
    // 0x174c50: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x174c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_174c54:
    // 0x174c54: 0xc05612c  jal         func_1584B0
label_174c58:
    if (ctx->pc == 0x174C58u) {
        ctx->pc = 0x174C5Cu;
        goto label_174c5c;
    }
    ctx->pc = 0x174C54u;
    SET_GPR_U32(ctx, 31, 0x174C5Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174C54u, 0x174C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C5Cu;
label_174c5c:
    // 0x174c5c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174c60:
    // 0x174c60: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c64:
    // 0x174c64: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174c68:
    // 0x174c68: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x174c68u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_174c6c:
    // 0x174c6c: 0x26d64a28  addiu       $s6, $s6, 0x4A28
    ctx->pc = 0x174c6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 18984));
label_174c70:
    // 0x174c70: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x174c70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174c74:
    // 0x174c74: 0xc0552e4  jal         func_154B90
label_174c78:
    if (ctx->pc == 0x174C78u) {
        ctx->pc = 0x174C7Cu;
        goto label_174c7c;
    }
    ctx->pc = 0x174C74u;
    SET_GPR_U32(ctx, 31, 0x174C7Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174C74u, 0x174C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C7Cu;
label_174c7c:
    // 0x174c7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x174c7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174c80:
    // 0x174c80: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c84:
    // 0x174c84: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x174c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174c88:
    // 0x174c88: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x174c88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_174c8c:
    // 0x174c8c: 0xc05612c  jal         func_1584B0
label_174c90:
    if (ctx->pc == 0x174C90u) {
        ctx->pc = 0x174C94u;
        goto label_174c94;
    }
    ctx->pc = 0x174C8Cu;
    SET_GPR_U32(ctx, 31, 0x174C94u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174C8Cu, 0x174C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174C94u;
label_174c94:
    // 0x174c94: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x174c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_174c98:
    // 0x174c98: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174c9c:
    // 0x174c9c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174ca0:
    // 0x174ca0: 0x24a54a40  addiu       $a1, $a1, 0x4A40
    ctx->pc = 0x174ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19008));
label_174ca4:
    // 0x174ca4: 0xc0552e4  jal         func_154B90
label_174ca8:
    if (ctx->pc == 0x174CA8u) {
        ctx->pc = 0x174CACu;
        goto label_174cac;
    }
    ctx->pc = 0x174CA4u;
    SET_GPR_U32(ctx, 31, 0x174CACu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174CA4u, 0x174CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CACu;
label_174cac:
    // 0x174cac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174cacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174cb0:
    // 0x174cb0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174cb4:
    // 0x174cb4: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174cb8:
    // 0x174cb8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x174cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_174cbc:
    // 0x174cbc: 0xc05612c  jal         func_1584B0
label_174cc0:
    if (ctx->pc == 0x174CC0u) {
        ctx->pc = 0x174CC4u;
        goto label_174cc4;
    }
    ctx->pc = 0x174CBCu;
    SET_GPR_U32(ctx, 31, 0x174CC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174CBCu, 0x174CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CC4u;
label_174cc4:
    // 0x174cc4: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174cc8:
    // 0x174cc8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174ccc:
    // 0x174ccc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174cd0:
    // 0x174cd0: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x174cd0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_174cd4:
    // 0x174cd4: 0x26d64a50  addiu       $s6, $s6, 0x4A50
    ctx->pc = 0x174cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19024));
label_174cd8:
    // 0x174cd8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x174cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174cdc:
    // 0x174cdc: 0xc0552e4  jal         func_154B90
label_174ce0:
    if (ctx->pc == 0x174CE0u) {
        ctx->pc = 0x174CE4u;
        goto label_174ce4;
    }
    ctx->pc = 0x174CDCu;
    SET_GPR_U32(ctx, 31, 0x174CE4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174CDCu, 0x174CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CE4u;
label_174ce4:
    // 0x174ce4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x174ce4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ce8:
    // 0x174ce8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174cec:
    // 0x174cec: 0x24a40058  addiu       $a0, $a1, 0x58
    ctx->pc = 0x174cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174cf0:
    // 0x174cf0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x174cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_174cf4:
    // 0x174cf4: 0xc05612c  jal         func_1584B0
label_174cf8:
    if (ctx->pc == 0x174CF8u) {
        ctx->pc = 0x174CFCu;
        goto label_174cfc;
    }
    ctx->pc = 0x174CF4u;
    SET_GPR_U32(ctx, 31, 0x174CFCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174CF4u, 0x174CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174CFCu;
label_174cfc:
    // 0x174cfc: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x174cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_174d00:
    // 0x174d00: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d04:
    // 0x174d04: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174d08:
    // 0x174d08: 0x24a54a70  addiu       $a1, $a1, 0x4A70
    ctx->pc = 0x174d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19056));
label_174d0c:
    // 0x174d0c: 0xc0552e4  jal         func_154B90
label_174d10:
    if (ctx->pc == 0x174D10u) {
        ctx->pc = 0x174D14u;
        goto label_174d14;
    }
    ctx->pc = 0x174D0Cu;
    SET_GPR_U32(ctx, 31, 0x174D14u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174D0Cu, 0x174D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D14u;
label_174d14:
    // 0x174d14: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174d14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d18:
    // 0x174d18: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d1c:
    // 0x174d1c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174d20:
    // 0x174d20: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x174d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_174d24:
    // 0x174d24: 0xc05612c  jal         func_1584B0
label_174d28:
    if (ctx->pc == 0x174D28u) {
        ctx->pc = 0x174D2Cu;
        goto label_174d2c;
    }
    ctx->pc = 0x174D24u;
    SET_GPR_U32(ctx, 31, 0x174D2Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174D24u, 0x174D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D2Cu;
label_174d2c:
    // 0x174d2c: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x174d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_174d30:
    // 0x174d30: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d34:
    // 0x174d34: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174d38:
    // 0x174d38: 0x24424a90  addiu       $v0, $v0, 0x4A90
    ctx->pc = 0x174d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19088));
label_174d3c:
    // 0x174d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d40:
    // 0x174d40: 0xc0552e4  jal         func_154B90
label_174d44:
    if (ctx->pc == 0x174D44u) {
        ctx->pc = 0x174D48u;
        goto label_174d48;
    }
    ctx->pc = 0x174D40u;
    SET_GPR_U32(ctx, 31, 0x174D48u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174D40u, 0x174D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D48u;
label_174d48:
    // 0x174d48: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174d48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d4c:
    // 0x174d4c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d50:
    // 0x174d50: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174d54:
    // 0x174d54: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x174d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_174d58:
    // 0x174d58: 0xc05612c  jal         func_1584B0
label_174d5c:
    if (ctx->pc == 0x174D5Cu) {
        ctx->pc = 0x174D60u;
        goto label_174d60;
    }
    ctx->pc = 0x174D58u;
    SET_GPR_U32(ctx, 31, 0x174D60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174D58u, 0x174D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D60u;
label_174d60:
    // 0x174d60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d64:
    // 0x174d64: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x174d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_174d68:
    // 0x174d68: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d6c:
    // 0x174d6c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d70:
    // 0x174d70: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x174d70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_174d74:
    // 0x174d74: 0x24a54ab0  addiu       $a1, $a1, 0x4AB0
    ctx->pc = 0x174d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19120));
label_174d78:
    // 0x174d78: 0xc0552e4  jal         func_154B90
label_174d7c:
    if (ctx->pc == 0x174D7Cu) {
        ctx->pc = 0x174D80u;
        goto label_174d80;
    }
    ctx->pc = 0x174D78u;
    SET_GPR_U32(ctx, 31, 0x174D80u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174D78u, 0x174D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D80u;
label_174d80:
    // 0x174d80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174d80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d84:
    // 0x174d84: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174d88:
    // 0x174d88: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x174d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174d8c:
    // 0x174d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174d90:
    // 0x174d90: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x174d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_174d94:
    // 0x174d94: 0xc05612c  jal         func_1584B0
label_174d98:
    if (ctx->pc == 0x174D98u) {
        ctx->pc = 0x174D9Cu;
        goto label_174d9c;
    }
    ctx->pc = 0x174D94u;
    SET_GPR_U32(ctx, 31, 0x174D9Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174D94u, 0x174D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174D9Cu;
label_174d9c:
    // 0x174d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174da0:
    // 0x174da0: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174da4:
    // 0x174da4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174da8:
    // 0x174da8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174dac:
    // 0x174dac: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174db0:
    // 0x174db0: 0x24424ad0  addiu       $v0, $v0, 0x4AD0
    ctx->pc = 0x174db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19152));
label_174db4:
    // 0x174db4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174db8:
    // 0x174db8: 0xc0552e4  jal         func_154B90
label_174dbc:
    if (ctx->pc == 0x174DBCu) {
        ctx->pc = 0x174DC0u;
        goto label_174dc0;
    }
    ctx->pc = 0x174DB8u;
    SET_GPR_U32(ctx, 31, 0x174DC0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174DB8u, 0x174DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DC0u;
label_174dc0:
    // 0x174dc0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174dc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174dc4:
    // 0x174dc4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174dc8:
    // 0x174dc8: 0x24b70058  addiu       $s7, $a1, 0x58
    ctx->pc = 0x174dc8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174dcc:
    // 0x174dcc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x174dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_174dd0:
    // 0x174dd0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x174dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_174dd4:
    // 0x174dd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174dd8:
    // 0x174dd8: 0xc05612c  jal         func_1584B0
label_174ddc:
    if (ctx->pc == 0x174DDCu) {
        ctx->pc = 0x174DE0u;
        goto label_174de0;
    }
    ctx->pc = 0x174DD8u;
    SET_GPR_U32(ctx, 31, 0x174DE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174DD8u, 0x174DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174DE0u;
label_174de0:
    // 0x174de0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174de4:
    // 0x174de4: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174de8:
    // 0x174de8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174dec:
    // 0x174dec: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174df0:
    // 0x174df0: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174df4:
    // 0x174df4: 0x24424af0  addiu       $v0, $v0, 0x4AF0
    ctx->pc = 0x174df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19184));
label_174df8:
    // 0x174df8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174dfc:
    // 0x174dfc: 0xc0552e4  jal         func_154B90
label_174e00:
    if (ctx->pc == 0x174E00u) {
        ctx->pc = 0x174E04u;
        goto label_174e04;
    }
    ctx->pc = 0x174DFCu;
    SET_GPR_U32(ctx, 31, 0x174E04u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174DFCu, 0x174E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E04u;
label_174e04:
    // 0x174e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x174e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e08:
    // 0x174e08: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174e0c:
    // 0x174e0c: 0x24b60058  addiu       $s6, $a1, 0x58
    ctx->pc = 0x174e0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174e10:
    // 0x174e10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174e14:
    // 0x174e14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x174e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_174e18:
    // 0x174e18: 0xc05612c  jal         func_1584B0
label_174e1c:
    if (ctx->pc == 0x174E1Cu) {
        ctx->pc = 0x174E20u;
        goto label_174e20;
    }
    ctx->pc = 0x174E18u;
    SET_GPR_U32(ctx, 31, 0x174E20u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174E18u, 0x174E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E20u;
label_174e20:
    // 0x174e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e24:
    // 0x174e24: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x174e24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
label_174e28:
    // 0x174e28: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174e2c:
    // 0x174e2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174e30:
    // 0x174e30: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174e34:
    // 0x174e34: 0x24424b10  addiu       $v0, $v0, 0x4B10
    ctx->pc = 0x174e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19216));
label_174e38:
    // 0x174e38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e3c:
    // 0x174e3c: 0xc0552e4  jal         func_154B90
label_174e40:
    if (ctx->pc == 0x174E40u) {
        ctx->pc = 0x174E44u;
        goto label_174e44;
    }
    ctx->pc = 0x174E3Cu;
    SET_GPR_U32(ctx, 31, 0x174E44u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174E3Cu, 0x174E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E44u;
label_174e44:
    // 0x174e44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174e44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e48:
    // 0x174e48: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174e48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174e4c:
    // 0x174e4c: 0x24b00058  addiu       $s0, $a1, 0x58
    ctx->pc = 0x174e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174e50:
    // 0x174e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_174e54:
    // 0x174e54: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x174e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_174e58:
    // 0x174e58: 0xc05612c  jal         func_1584B0
label_174e5c:
    if (ctx->pc == 0x174E5Cu) {
        ctx->pc = 0x174E60u;
        goto label_174e60;
    }
    ctx->pc = 0x174E58u;
    SET_GPR_U32(ctx, 31, 0x174E60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174E58u, 0x174E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E60u;
label_174e60:
    // 0x174e60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e64:
    // 0x174e64: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174e64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174e68:
    // 0x174e68: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174e6c:
    // 0x174e6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174e70:
    // 0x174e70: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174e74:
    // 0x174e74: 0x24424b30  addiu       $v0, $v0, 0x4B30
    ctx->pc = 0x174e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19248));
label_174e78:
    // 0x174e78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e7c:
    // 0x174e7c: 0xc0552e4  jal         func_154B90
label_174e80:
    if (ctx->pc == 0x174E80u) {
        ctx->pc = 0x174E84u;
        goto label_174e84;
    }
    ctx->pc = 0x174E7Cu;
    SET_GPR_U32(ctx, 31, 0x174E84u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174E7Cu, 0x174E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174E84u;
label_174e84:
    // 0x174e84: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e88:
    // 0x174e88: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174e8c:
    // 0x174e8c: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x174e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_174e90:
    // 0x174e90: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174e94:
    // 0x174e94: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x174e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_174e98:
    // 0x174e98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174e9c:
    // 0x174e9c: 0xc05612c  jal         func_1584B0
label_174ea0:
    if (ctx->pc == 0x174EA0u) {
        ctx->pc = 0x174EA4u;
        goto label_174ea4;
    }
    ctx->pc = 0x174E9Cu;
    SET_GPR_U32(ctx, 31, 0x174EA4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174E9Cu, 0x174EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EA4u;
label_174ea4:
    // 0x174ea4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ea8:
    // 0x174ea8: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174eac:
    // 0x174eac: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174eb0:
    // 0x174eb0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174eb4:
    // 0x174eb4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174eb8:
    // 0x174eb8: 0x24424b50  addiu       $v0, $v0, 0x4B50
    ctx->pc = 0x174eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19280));
label_174ebc:
    // 0x174ebc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ec0:
    // 0x174ec0: 0xc0552e4  jal         func_154B90
label_174ec4:
    if (ctx->pc == 0x174EC4u) {
        ctx->pc = 0x174EC8u;
        goto label_174ec8;
    }
    ctx->pc = 0x174EC0u;
    SET_GPR_U32(ctx, 31, 0x174EC8u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174EC0u, 0x174EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EC8u;
label_174ec8:
    // 0x174ec8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174ec8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ecc:
    // 0x174ecc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174ed0:
    // 0x174ed0: 0x24820058  addiu       $v0, $a0, 0x58
    ctx->pc = 0x174ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_174ed4:
    // 0x174ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ed8:
    // 0x174ed8: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x174ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_174edc:
    // 0x174edc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x174edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_174ee0:
    // 0x174ee0: 0xc05612c  jal         func_1584B0
label_174ee4:
    if (ctx->pc == 0x174EE4u) {
        ctx->pc = 0x174EE8u;
        goto label_174ee8;
    }
    ctx->pc = 0x174EE0u;
    SET_GPR_U32(ctx, 31, 0x174EE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174EE0u, 0x174EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174EE8u;
label_174ee8:
    // 0x174ee8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174eec:
    // 0x174eec: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174ef0:
    // 0x174ef0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174ef4:
    // 0x174ef4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174ef8:
    // 0x174ef8: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x174ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_174efc:
    // 0x174efc: 0x24424b70  addiu       $v0, $v0, 0x4B70
    ctx->pc = 0x174efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19312));
label_174f00:
    // 0x174f00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f04:
    // 0x174f04: 0xc0552e4  jal         func_154B90
label_174f08:
    if (ctx->pc == 0x174F08u) {
        ctx->pc = 0x174F0Cu;
        goto label_174f0c;
    }
    ctx->pc = 0x174F04u;
    SET_GPR_U32(ctx, 31, 0x174F0Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x174F04u, 0x174F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F0Cu;
label_174f0c:
    // 0x174f0c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x174f0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f10:
    // 0x174f10: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174f10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174f14:
    // 0x174f14: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x174f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174f18:
    // 0x174f18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f1c:
    // 0x174f1c: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x174f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_174f20:
    // 0x174f20: 0xc05612c  jal         func_1584B0
label_174f24:
    if (ctx->pc == 0x174F24u) {
        ctx->pc = 0x174F28u;
        goto label_174f28;
    }
    ctx->pc = 0x174F20u;
    SET_GPR_U32(ctx, 31, 0x174F28u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174F20u, 0x174F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F28u;
label_174f28:
    // 0x174f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f2c:
    // 0x174f2c: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x174f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_174f30:
    // 0x174f30: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174f34:
    // 0x174f34: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174f38:
    // 0x174f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174f3c:
    // 0x174f3c: 0xc05612c  jal         func_1584B0
label_174f40:
    if (ctx->pc == 0x174F40u) {
        ctx->pc = 0x174F44u;
        goto label_174f44;
    }
    ctx->pc = 0x174F3Cu;
    SET_GPR_U32(ctx, 31, 0x174F44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174F3Cu, 0x174F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F44u;
label_174f44:
    // 0x174f44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f48:
    // 0x174f48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_174f4c:
    // 0x174f4c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174f50:
    // 0x174f50: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x174f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_174f54:
    // 0x174f54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174f58:
    // 0x174f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f5c:
    // 0x174f5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174f5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174f60:
    // 0x174f60: 0xc08c8dc  jal         func_232370
label_174f64:
    if (ctx->pc == 0x174F64u) {
        ctx->pc = 0x174F68u;
        goto label_174f68;
    }
    ctx->pc = 0x174F60u;
    SET_GPR_U32(ctx, 31, 0x174F68u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174F60u, 0x174F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F68u;
label_174f68:
    // 0x174f68: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x174f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174f6c:
    // 0x174f6c: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x174f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_174f70:
    // 0x174f70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x174f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_174f74:
    // 0x174f74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f78:
    // 0x174f78: 0xc05612c  jal         func_1584B0
label_174f7c:
    if (ctx->pc == 0x174F7Cu) {
        ctx->pc = 0x174F80u;
        goto label_174f80;
    }
    ctx->pc = 0x174F78u;
    SET_GPR_U32(ctx, 31, 0x174F80u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174F78u, 0x174F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174F80u;
label_174f80:
    // 0x174f80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x174f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f84:
    // 0x174f84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x174f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_174f88:
    // 0x174f88: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174f8c:
    // 0x174f8c: 0x8cb60034  lw          $s6, 0x34($a1)
    ctx->pc = 0x174f8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_174f90:
    // 0x174f90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x174f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_174f94:
    // 0x174f94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174f98:
    // 0x174f98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174f98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174f9c:
    // 0x174f9c: 0xc08c8dc  jal         func_232370
label_174fa0:
    if (ctx->pc == 0x174FA0u) {
        ctx->pc = 0x174FA4u;
        goto label_174fa4;
    }
    ctx->pc = 0x174F9Cu;
    SET_GPR_U32(ctx, 31, 0x174FA4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174F9Cu, 0x174FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FA4u;
label_174fa4:
    // 0x174fa4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x174fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174fa8:
    // 0x174fa8: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x174fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_174fac:
    // 0x174fac: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x174facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174fb0:
    // 0x174fb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x174fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_174fb4:
    // 0x174fb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fb8:
    // 0x174fb8: 0xc05612c  jal         func_1584B0
label_174fbc:
    if (ctx->pc == 0x174FBCu) {
        ctx->pc = 0x174FC0u;
        goto label_174fc0;
    }
    ctx->pc = 0x174FB8u;
    SET_GPR_U32(ctx, 31, 0x174FC0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174FB8u, 0x174FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FC0u;
label_174fc0:
    // 0x174fc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fc4:
    // 0x174fc4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x174fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_174fc8:
    // 0x174fc8: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174fcc:
    // 0x174fcc: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x174fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_174fd0:
    // 0x174fd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174fd4:
    // 0x174fd4: 0xc08c8dc  jal         func_232370
label_174fd8:
    if (ctx->pc == 0x174FD8u) {
        ctx->pc = 0x174FDCu;
        goto label_174fdc;
    }
    ctx->pc = 0x174FD4u;
    SET_GPR_U32(ctx, 31, 0x174FDCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x174FD4u, 0x174FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FDCu;
label_174fdc:
    // 0x174fdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fe0:
    // 0x174fe0: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x174fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_174fe4:
    // 0x174fe4: 0x24a20058  addiu       $v0, $a1, 0x58
    ctx->pc = 0x174fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_174fe8:
    // 0x174fe8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174fec:
    // 0x174fec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174fecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_174ff0:
    // 0x174ff0: 0xc05612c  jal         func_1584B0
label_174ff4:
    if (ctx->pc == 0x174FF4u) {
        ctx->pc = 0x174FF8u;
        goto label_174ff8;
    }
    ctx->pc = 0x174FF0u;
    SET_GPR_U32(ctx, 31, 0x174FF8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x174FF0u, 0x174FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FF8u;
label_174ff8:
    // 0x174ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x174ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_174ffc:
    // 0x174ffc: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x174ffcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175000:
    // 0x175000: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175004:
    // 0x175004: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_175008:
    // 0x175008: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17500c:
    // 0x17500c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17500cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175010:
    // 0x175010: 0xc08c8dc  jal         func_232370
label_175014:
    if (ctx->pc == 0x175014u) {
        ctx->pc = 0x175018u;
        goto label_175018;
    }
    ctx->pc = 0x175010u;
    SET_GPR_U32(ctx, 31, 0x175018u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175010u, 0x175018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175018u;
label_175018:
    // 0x175018: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17501c:
    // 0x17501c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17501cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175020:
    // 0x175020: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x175020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_175024:
    // 0x175024: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x175024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175028:
    // 0x175028: 0xc05612c  jal         func_1584B0
label_17502c:
    if (ctx->pc == 0x17502Cu) {
        ctx->pc = 0x175030u;
        goto label_175030;
    }
    ctx->pc = 0x175028u;
    SET_GPR_U32(ctx, 31, 0x175030u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175028u, 0x175030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175030u;
label_175030:
    // 0x175030: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x175030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175034:
    // 0x175034: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x175034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_175038:
    // 0x175038: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17503c:
    // 0x17503c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x17503cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_175040:
    // 0x175040: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175044:
    // 0x175044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175048:
    // 0x175048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17504c:
    // 0x17504c: 0xc08c8dc  jal         func_232370
label_175050:
    if (ctx->pc == 0x175050u) {
        ctx->pc = 0x175054u;
        goto label_175054;
    }
    ctx->pc = 0x17504Cu;
    SET_GPR_U32(ctx, 31, 0x175054u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x17504Cu, 0x175054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175054u;
label_175054:
    // 0x175054: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175058:
    // 0x175058: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x175058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_17505c:
    // 0x17505c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17505cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175060:
    // 0x175060: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x175060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_175064:
    // 0x175064: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175068:
    // 0x175068: 0xc05612c  jal         func_1584B0
label_17506c:
    if (ctx->pc == 0x17506Cu) {
        ctx->pc = 0x175070u;
        goto label_175070;
    }
    ctx->pc = 0x175068u;
    SET_GPR_U32(ctx, 31, 0x175070u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175068u, 0x175070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175070u;
label_175070:
    // 0x175070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175074:
    // 0x175074: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175078:
    // 0x175078: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x175078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_17507c:
    // 0x17507c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17507cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175080:
    // 0x175080: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x175080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_175084:
    // 0x175084: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175088:
    // 0x175088: 0xc08c8dc  jal         func_232370
label_17508c:
    if (ctx->pc == 0x17508Cu) {
        ctx->pc = 0x175090u;
        goto label_175090;
    }
    ctx->pc = 0x175088u;
    SET_GPR_U32(ctx, 31, 0x175090u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175088u, 0x175090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175090u;
label_175090:
    // 0x175090: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175094:
    // 0x175094: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x175094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_175098:
    // 0x175098: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17509c:
    // 0x17509c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x17509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1750a0:
    // 0x1750a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1750a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1750a4:
    // 0x1750a4: 0xc05612c  jal         func_1584B0
label_1750a8:
    if (ctx->pc == 0x1750A8u) {
        ctx->pc = 0x1750ACu;
        goto label_1750ac;
    }
    ctx->pc = 0x1750A4u;
    SET_GPR_U32(ctx, 31, 0x1750ACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1750A4u, 0x1750ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750ACu;
label_1750ac:
    // 0x1750ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1750acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1750b0:
    // 0x1750b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1750b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1750b4:
    // 0x1750b4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1750b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1750b8:
    // 0x1750b8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1750b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1750bc:
    // 0x1750bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1750bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1750c0:
    // 0x1750c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1750c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1750c4:
    // 0x1750c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1750c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1750c8:
    // 0x1750c8: 0xc08c8dc  jal         func_232370
label_1750cc:
    if (ctx->pc == 0x1750CCu) {
        ctx->pc = 0x1750D0u;
        goto label_1750d0;
    }
    ctx->pc = 0x1750C8u;
    SET_GPR_U32(ctx, 31, 0x1750D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1750C8u, 0x1750D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750D0u;
label_1750d0:
    // 0x1750d0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1750d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1750d4:
    // 0x1750d4: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x1750d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_1750d8:
    // 0x1750d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1750d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1750dc:
    // 0x1750dc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1750dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1750e0:
    // 0x1750e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1750e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1750e4:
    // 0x1750e4: 0xc05612c  jal         func_1584B0
label_1750e8:
    if (ctx->pc == 0x1750E8u) {
        ctx->pc = 0x1750ECu;
        goto label_1750ec;
    }
    ctx->pc = 0x1750E4u;
    SET_GPR_U32(ctx, 31, 0x1750ECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1750E4u, 0x1750ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1750ECu;
label_1750ec:
    // 0x1750ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1750ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1750f0:
    // 0x1750f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1750f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1750f4:
    // 0x1750f4: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1750f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1750f8:
    // 0x1750f8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1750f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_1750fc:
    // 0x1750fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1750fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175100:
    // 0x175100: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x175100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_175104:
    // 0x175104: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175108:
    // 0x175108: 0xc08c8dc  jal         func_232370
label_17510c:
    if (ctx->pc == 0x17510Cu) {
        ctx->pc = 0x175110u;
        goto label_175110;
    }
    ctx->pc = 0x175108u;
    SET_GPR_U32(ctx, 31, 0x175110u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175108u, 0x175110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175110u;
label_175110:
    // 0x175110: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175114:
    // 0x175114: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x175114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_175118:
    // 0x175118: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17511c:
    // 0x17511c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x17511cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_175120:
    // 0x175120: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175124:
    // 0x175124: 0xc05612c  jal         func_1584B0
label_175128:
    if (ctx->pc == 0x175128u) {
        ctx->pc = 0x17512Cu;
        goto label_17512c;
    }
    ctx->pc = 0x175124u;
    SET_GPR_U32(ctx, 31, 0x17512Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175124u, 0x17512Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17512Cu;
label_17512c:
    // 0x17512c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17512cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175130:
    // 0x175130: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x175130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175134:
    // 0x175134: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175138:
    // 0x175138: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x175138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17513c:
    // 0x17513c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17513cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175140:
    // 0x175140: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x175140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_175144:
    // 0x175144: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175148:
    // 0x175148: 0xc08c8dc  jal         func_232370
label_17514c:
    if (ctx->pc == 0x17514Cu) {
        ctx->pc = 0x175150u;
        goto label_175150;
    }
    ctx->pc = 0x175148u;
    SET_GPR_U32(ctx, 31, 0x175150u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175148u, 0x175150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175150u;
label_175150:
    // 0x175150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175154:
    // 0x175154: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175158:
    // 0x175158: 0x24b60058  addiu       $s6, $a1, 0x58
    ctx->pc = 0x175158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 88));
label_17515c:
    // 0x17515c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17515cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175160:
    // 0x175160: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_175164:
    // 0x175164: 0xc05612c  jal         func_1584B0
label_175168:
    if (ctx->pc == 0x175168u) {
        ctx->pc = 0x17516Cu;
        goto label_17516c;
    }
    ctx->pc = 0x175164u;
    SET_GPR_U32(ctx, 31, 0x17516Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175164u, 0x17516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17516Cu;
label_17516c:
    // 0x17516c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175170:
    // 0x175170: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x175170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_175174:
    // 0x175174: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175178:
    // 0x175178: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x175178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17517c:
    // 0x17517c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175180:
    // 0x175180: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175184:
    // 0x175184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175188:
    // 0x175188: 0xc08c8dc  jal         func_232370
label_17518c:
    if (ctx->pc == 0x17518Cu) {
        ctx->pc = 0x175190u;
        goto label_175190;
    }
    ctx->pc = 0x175188u;
    SET_GPR_U32(ctx, 31, 0x175190u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175188u, 0x175190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175190u;
label_175190:
    // 0x175190: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x175190u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175194:
    // 0x175194: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x175194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175198:
    // 0x175198: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x175198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_17519c:
    // 0x17519c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17519cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751a0:
    // 0x1751a0: 0xc05612c  jal         func_1584B0
label_1751a4:
    if (ctx->pc == 0x1751A4u) {
        ctx->pc = 0x1751A8u;
        goto label_1751a8;
    }
    ctx->pc = 0x1751A0u;
    SET_GPR_U32(ctx, 31, 0x1751A8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1751A0u, 0x1751A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751A8u;
label_1751a8:
    // 0x1751a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1751a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1751ac:
    // 0x1751ac: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1751b0:
    // 0x1751b0: 0x8cb60034  lw          $s6, 0x34($a1)
    ctx->pc = 0x1751b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1751b4:
    // 0x1751b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1751b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1751b8:
    // 0x1751b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1751b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1751bc:
    // 0x1751bc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1751bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751c0:
    // 0x1751c0: 0xc08c8dc  jal         func_232370
label_1751c4:
    if (ctx->pc == 0x1751C4u) {
        ctx->pc = 0x1751C8u;
        goto label_1751c8;
    }
    ctx->pc = 0x1751C0u;
    SET_GPR_U32(ctx, 31, 0x1751C8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1751C0u, 0x1751C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751C8u;
label_1751c8:
    // 0x1751c8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1751c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1751cc:
    // 0x1751cc: 0x24850064  addiu       $a1, $a0, 0x64
    ctx->pc = 0x1751ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_1751d0:
    // 0x1751d0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1751d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1751d4:
    // 0x1751d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1751d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1751d8:
    // 0x1751d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1751d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1751dc:
    // 0x1751dc: 0xc05612c  jal         func_1584B0
label_1751e0:
    if (ctx->pc == 0x1751E0u) {
        ctx->pc = 0x1751E4u;
        goto label_1751e4;
    }
    ctx->pc = 0x1751DCu;
    SET_GPR_U32(ctx, 31, 0x1751E4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1751DCu, 0x1751E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1751E4u;
label_1751e4:
    // 0x1751e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1751e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1751e8:
    // 0x1751e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1751e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1751ec:
    // 0x1751ec: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x1751ecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1751f0:
    // 0x1751f0: 0x8ec40034  lw          $a0, 0x34($s6)
    ctx->pc = 0x1751f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
label_1751f4:
    // 0x1751f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1751f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1751f8:
    // 0x1751f8: 0xc08c8dc  jal         func_232370
label_1751fc:
    if (ctx->pc == 0x1751FCu) {
        ctx->pc = 0x175200u;
        goto label_175200;
    }
    ctx->pc = 0x1751F8u;
    SET_GPR_U32(ctx, 31, 0x175200u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1751F8u, 0x175200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175200u;
label_175200:
    // 0x175200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175204:
    // 0x175204: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175208:
    // 0x175208: 0x24a20064  addiu       $v0, $a1, 0x64
    ctx->pc = 0x175208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_17520c:
    // 0x17520c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175210:
    // 0x175210: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_175214:
    // 0x175214: 0xc05612c  jal         func_1584B0
label_175218:
    if (ctx->pc == 0x175218u) {
        ctx->pc = 0x17521Cu;
        goto label_17521c;
    }
    ctx->pc = 0x175214u;
    SET_GPR_U32(ctx, 31, 0x17521Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175214u, 0x17521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17521Cu;
label_17521c:
    // 0x17521c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17521cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175220:
    // 0x175220: 0x8cb60000  lw          $s6, 0x0($a1)
    ctx->pc = 0x175220u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175224:
    // 0x175224: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175228:
    // 0x175228: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_17522c:
    // 0x17522c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17522cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175230:
    // 0x175230: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175234:
    // 0x175234: 0xc08c8dc  jal         func_232370
label_175238:
    if (ctx->pc == 0x175238u) {
        ctx->pc = 0x17523Cu;
        goto label_17523c;
    }
    ctx->pc = 0x175234u;
    SET_GPR_U32(ctx, 31, 0x17523Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175234u, 0x17523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17523Cu;
label_17523c:
    // 0x17523c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17523cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175240:
    // 0x175240: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175244:
    // 0x175244: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x175244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_175248:
    // 0x175248: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x175248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17524c:
    // 0x17524c: 0xc05612c  jal         func_1584B0
label_175250:
    if (ctx->pc == 0x175250u) {
        ctx->pc = 0x175254u;
        goto label_175254;
    }
    ctx->pc = 0x17524Cu;
    SET_GPR_U32(ctx, 31, 0x175254u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17524Cu, 0x175254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175254u;
label_175254:
    // 0x175254: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x175254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175258:
    // 0x175258: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x175258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_17525c:
    // 0x17525c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17525cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175260:
    // 0x175260: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x175260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_175264:
    // 0x175264: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175268:
    // 0x175268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17526c:
    // 0x17526c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17526cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175270:
    // 0x175270: 0xc08c8dc  jal         func_232370
label_175274:
    if (ctx->pc == 0x175274u) {
        ctx->pc = 0x175278u;
        goto label_175278;
    }
    ctx->pc = 0x175270u;
    SET_GPR_U32(ctx, 31, 0x175278u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175270u, 0x175278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175278u;
label_175278:
    // 0x175278: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17527c:
    // 0x17527c: 0x24850064  addiu       $a1, $a0, 0x64
    ctx->pc = 0x17527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_175280:
    // 0x175280: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175284:
    // 0x175284: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x175284u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175288:
    // 0x175288: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17528c:
    // 0x17528c: 0xc05612c  jal         func_1584B0
label_175290:
    if (ctx->pc == 0x175290u) {
        ctx->pc = 0x175294u;
        goto label_175294;
    }
    ctx->pc = 0x17528Cu;
    SET_GPR_U32(ctx, 31, 0x175294u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x17528Cu, 0x175294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175294u;
label_175294:
    // 0x175294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x175294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175298:
    // 0x175298: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17529c:
    // 0x17529c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x17529cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_1752a0:
    // 0x1752a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1752a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752a4:
    // 0x1752a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1752a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1752a8:
    // 0x1752a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1752a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1752ac:
    // 0x1752ac: 0xc08c8dc  jal         func_232370
label_1752b0:
    if (ctx->pc == 0x1752B0u) {
        ctx->pc = 0x1752B4u;
        goto label_1752b4;
    }
    ctx->pc = 0x1752ACu;
    SET_GPR_U32(ctx, 31, 0x1752B4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1752ACu, 0x1752B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752B4u;
label_1752b4:
    // 0x1752b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1752b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752b8:
    // 0x1752b8: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1752b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1752bc:
    // 0x1752bc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1752bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1752c0:
    // 0x1752c0: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x1752c0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_1752c4:
    // 0x1752c4: 0x26d64b88  addiu       $s6, $s6, 0x4B88
    ctx->pc = 0x1752c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19336));
label_1752c8:
    // 0x1752c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1752c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1752cc:
    // 0x1752cc: 0xc0552e4  jal         func_154B90
label_1752d0:
    if (ctx->pc == 0x1752D0u) {
        ctx->pc = 0x1752D4u;
        goto label_1752d4;
    }
    ctx->pc = 0x1752CCu;
    SET_GPR_U32(ctx, 31, 0x1752D4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1752CCu, 0x1752D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752D4u;
label_1752d4:
    // 0x1752d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1752d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752d8:
    // 0x1752d8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1752d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1752dc:
    // 0x1752dc: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x1752dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_1752e0:
    // 0x1752e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1752e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1752e4:
    // 0x1752e4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1752e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1752e8:
    // 0x1752e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1752e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752ec:
    // 0x1752ec: 0xc05612c  jal         func_1584B0
label_1752f0:
    if (ctx->pc == 0x1752F0u) {
        ctx->pc = 0x1752F4u;
        goto label_1752f4;
    }
    ctx->pc = 0x1752ECu;
    SET_GPR_U32(ctx, 31, 0x1752F4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1752ECu, 0x1752F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1752F4u;
label_1752f4:
    // 0x1752f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1752f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1752f8:
    // 0x1752f8: 0xac970000  sw          $s7, 0x0($a0)
    ctx->pc = 0x1752f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
label_1752fc:
    // 0x1752fc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1752fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175300:
    // 0x175300: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175304:
    // 0x175304: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x175304u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_175308:
    // 0x175308: 0x26d64b98  addiu       $s6, $s6, 0x4B98
    ctx->pc = 0x175308u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19352));
label_17530c:
    // 0x17530c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17530cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175310:
    // 0x175310: 0xc0552e4  jal         func_154B90
label_175314:
    if (ctx->pc == 0x175314u) {
        ctx->pc = 0x175318u;
        goto label_175318;
    }
    ctx->pc = 0x175310u;
    SET_GPR_U32(ctx, 31, 0x175318u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x175310u, 0x175318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175318u;
label_175318:
    // 0x175318: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x175318u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17531c:
    // 0x17531c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17531cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175320:
    // 0x175320: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x175320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_175324:
    // 0x175324: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175328:
    // 0x175328: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x175328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17532c:
    // 0x17532c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175330:
    // 0x175330: 0xc05612c  jal         func_1584B0
label_175334:
    if (ctx->pc == 0x175334u) {
        ctx->pc = 0x175338u;
        goto label_175338;
    }
    ctx->pc = 0x175330u;
    SET_GPR_U32(ctx, 31, 0x175338u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175330u, 0x175338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175338u;
label_175338:
    // 0x175338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17533c:
    // 0x17533c: 0xac970000  sw          $s7, 0x0($a0)
    ctx->pc = 0x17533cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
label_175340:
    // 0x175340: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175344:
    // 0x175344: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175348:
    // 0x175348: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x175348u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_17534c:
    // 0x17534c: 0x26d64ba8  addiu       $s6, $s6, 0x4BA8
    ctx->pc = 0x17534cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19368));
label_175350:
    // 0x175350: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175354:
    // 0x175354: 0xc0552e4  jal         func_154B90
label_175358:
    if (ctx->pc == 0x175358u) {
        ctx->pc = 0x17535Cu;
        goto label_17535c;
    }
    ctx->pc = 0x175354u;
    SET_GPR_U32(ctx, 31, 0x17535Cu);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x175354u, 0x17535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17535Cu;
label_17535c:
    // 0x17535c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x17535cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175360:
    // 0x175360: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175364:
    // 0x175364: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x175364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_175368:
    // 0x175368: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17536c:
    // 0x17536c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x17536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_175370:
    // 0x175370: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175374:
    // 0x175374: 0xc05612c  jal         func_1584B0
label_175378:
    if (ctx->pc == 0x175378u) {
        ctx->pc = 0x17537Cu;
        goto label_17537c;
    }
    ctx->pc = 0x175374u;
    SET_GPR_U32(ctx, 31, 0x17537Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175374u, 0x17537Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17537Cu;
label_17537c:
    // 0x17537c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17537cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175380:
    // 0x175380: 0xac970000  sw          $s7, 0x0($a0)
    ctx->pc = 0x175380u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
label_175384:
    // 0x175384: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x175384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_175388:
    // 0x175388: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17538c:
    // 0x17538c: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x17538cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_175390:
    // 0x175390: 0x26d64bb8  addiu       $s6, $s6, 0x4BB8
    ctx->pc = 0x175390u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19384));
label_175394:
    // 0x175394: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175398:
    // 0x175398: 0xc0bc5c6  jal         func_2F1718
label_17539c:
    if (ctx->pc == 0x17539Cu) {
        ctx->pc = 0x1753A0u;
        goto label_1753a0;
    }
    ctx->pc = 0x175398u;
    SET_GPR_U32(ctx, 31, 0x1753A0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x175398u, 0x1753A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753A0u;
label_1753a0:
    // 0x1753a0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1753a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1753a4:
    // 0x1753a4: 0x10000014  b           . + 4 + (0x14 << 2)
label_1753a8:
    if (ctx->pc == 0x1753A8u) {
        ctx->pc = 0x1753ACu;
        goto label_1753ac;
    }
    ctx->pc = 0x1753A4u;
    {
        const bool branch_taken_0x1753a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1753a4) {
            ctx->pc = 0x1753F8u;
            goto label_1753f8;
        }
    }
    ctx->pc = 0x1753ACu;
label_1753ac:
    // 0x1753ac: 0x26840031  addiu       $a0, $s4, 0x31
    ctx->pc = 0x1753acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 49));
label_1753b0:
    // 0x1753b0: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x1753b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_1753b4:
    // 0x1753b4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x1753b4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_1753b8:
    // 0x1753b8: 0xa3a50098  sb          $a1, 0x98($sp)
    ctx->pc = 0x1753b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 152), (uint8_t)GPR_U32(ctx, 5));
label_1753bc:
    // 0x1753bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1753bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1753c0:
    // 0x1753c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1753c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1753c4:
    // 0x1753c4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1753c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1753c8:
    // 0x1753c8: 0xc0552e4  jal         func_154B90
label_1753cc:
    if (ctx->pc == 0x1753CCu) {
        ctx->pc = 0x1753D0u;
        goto label_1753d0;
    }
    ctx->pc = 0x1753C8u;
    SET_GPR_U32(ctx, 31, 0x1753D0u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1753C8u, 0x1753D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753D0u;
label_1753d0:
    // 0x1753d0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1753d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1753d4:
    // 0x1753d4: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x1753d4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1753d8:
    // 0x1753d8: 0x26850006  addiu       $a1, $s4, 0x6
    ctx->pc = 0x1753d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
label_1753dc:
    // 0x1753dc: 0x26e40064  addiu       $a0, $s7, 0x64
    ctx->pc = 0x1753dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
label_1753e0:
    // 0x1753e0: 0xc05612c  jal         func_1584B0
label_1753e4:
    if (ctx->pc == 0x1753E4u) {
        ctx->pc = 0x1753E8u;
        goto label_1753e8;
    }
    ctx->pc = 0x1753E0u;
    SET_GPR_U32(ctx, 31, 0x1753E8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1753E0u, 0x1753E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1753E8u;
label_1753e8:
    // 0x1753e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1753e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1753ec:
    // 0x1753ec: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x1753ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_1753f0:
    // 0x1753f0: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x1753f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1753f4:
    // 0x1753f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1753f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1753f8:
    // 0x1753f8: 0x2e840008  sltiu       $a0, $s4, 0x8
    ctx->pc = 0x1753f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_1753fc:
    // 0x1753fc: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
label_175400:
    if (ctx->pc == 0x175400u) {
        ctx->pc = 0x175404u;
        goto label_175404;
    }
    ctx->pc = 0x1753FCu;
    {
        const bool branch_taken_0x1753fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1753fc) {
            ctx->pc = 0x1753ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1753ac;
        }
    }
    ctx->pc = 0x175404u;
label_175404:
    // 0x175404: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x175404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_175408:
    // 0x175408: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17540c:
    // 0x17540c: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x17540cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_175410:
    // 0x175410: 0x26d64bc8  addiu       $s6, $s6, 0x4BC8
    ctx->pc = 0x175410u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19400));
label_175414:
    // 0x175414: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175418:
    // 0x175418: 0xc0bc5c6  jal         func_2F1718
label_17541c:
    if (ctx->pc == 0x17541Cu) {
        ctx->pc = 0x175420u;
        goto label_175420;
    }
    ctx->pc = 0x175418u;
    SET_GPR_U32(ctx, 31, 0x175420u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x175418u, 0x175420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175420u;
label_175420:
    // 0x175420: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x175420u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175424:
    // 0x175424: 0x10000014  b           . + 4 + (0x14 << 2)
label_175428:
    if (ctx->pc == 0x175428u) {
        ctx->pc = 0x17542Cu;
        goto label_17542c;
    }
    ctx->pc = 0x175424u;
    {
        const bool branch_taken_0x175424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175424) {
            ctx->pc = 0x175478u;
            goto label_175478;
        }
    }
    ctx->pc = 0x17542Cu;
label_17542c:
    // 0x17542c: 0x26640031  addiu       $a0, $s3, 0x31
    ctx->pc = 0x17542cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 49));
label_175430:
    // 0x175430: 0x42e3c  dsll32      $a1, $a0, 24
    ctx->pc = 0x175430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << (32 + 24));
label_175434:
    // 0x175434: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x175434u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_175438:
    // 0x175438: 0xa3a5009b  sb          $a1, 0x9B($sp)
    ctx->pc = 0x175438u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 155), (uint8_t)GPR_U32(ctx, 5));
label_17543c:
    // 0x17543c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17543cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175440:
    // 0x175440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x175440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175444:
    // 0x175444: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x175444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_175448:
    // 0x175448: 0xc0552e4  jal         func_154B90
label_17544c:
    if (ctx->pc == 0x17544Cu) {
        ctx->pc = 0x175450u;
        goto label_175450;
    }
    ctx->pc = 0x175448u;
    SET_GPR_U32(ctx, 31, 0x175450u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x175448u, 0x175450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175450u;
label_175450:
    // 0x175450: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x175450u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175454:
    // 0x175454: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x175454u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175458:
    // 0x175458: 0x2665000e  addiu       $a1, $s3, 0xE
    ctx->pc = 0x175458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 14));
label_17545c:
    // 0x17545c: 0x26e40064  addiu       $a0, $s7, 0x64
    ctx->pc = 0x17545cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 100));
label_175460:
    // 0x175460: 0xc05612c  jal         func_1584B0
label_175464:
    if (ctx->pc == 0x175464u) {
        ctx->pc = 0x175468u;
        goto label_175468;
    }
    ctx->pc = 0x175460u;
    SET_GPR_U32(ctx, 31, 0x175468u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175460u, 0x175468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175468u;
label_175468:
    // 0x175468: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x175468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17546c:
    // 0x17546c: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x17546cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_175470:
    // 0x175470: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x175470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_175474:
    // 0x175474: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x175474u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175478:
    // 0x175478: 0x2e640005  sltiu       $a0, $s3, 0x5
    ctx->pc = 0x175478u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_17547c:
    // 0x17547c: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
label_175480:
    if (ctx->pc == 0x175480u) {
        ctx->pc = 0x175484u;
        goto label_175484;
    }
    ctx->pc = 0x17547Cu;
    {
        const bool branch_taken_0x17547c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x17547c) {
            ctx->pc = 0x17542Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17542c;
        }
    }
    ctx->pc = 0x175484u;
label_175484:
    // 0x175484: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x175484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_175488:
    // 0x175488: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17548c:
    // 0x17548c: 0x3c16004e  lui         $s6, 0x4E
    ctx->pc = 0x17548cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)78 << 16));
label_175490:
    // 0x175490: 0x26d64bd8  addiu       $s6, $s6, 0x4BD8
    ctx->pc = 0x175490u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 19416));
label_175494:
    // 0x175494: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175498:
    // 0x175498: 0xc0bc5c6  jal         func_2F1718
label_17549c:
    if (ctx->pc == 0x17549Cu) {
        ctx->pc = 0x1754A0u;
        goto label_1754a0;
    }
    ctx->pc = 0x175498u;
    SET_GPR_U32(ctx, 31, 0x1754A0u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x175498u, 0x1754A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754A0u;
label_1754a0:
    // 0x1754a0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1754a4:
    // 0x1754a4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1754a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1754a8:
    // 0x1754a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1754a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1754ac:
    // 0x1754ac: 0xc0552e4  jal         func_154B90
label_1754b0:
    if (ctx->pc == 0x1754B0u) {
        ctx->pc = 0x1754B4u;
        goto label_1754b4;
    }
    ctx->pc = 0x1754ACu;
    SET_GPR_U32(ctx, 31, 0x1754B4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x1754ACu, 0x1754B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754B4u;
label_1754b4:
    // 0x1754b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1754b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1754b8:
    // 0x1754b8: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1754bc:
    // 0x1754bc: 0x24440064  addiu       $a0, $v0, 0x64
    ctx->pc = 0x1754bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_1754c0:
    // 0x1754c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1754c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1754c4:
    // 0x1754c4: 0xc05612c  jal         func_1584B0
label_1754c8:
    if (ctx->pc == 0x1754C8u) {
        ctx->pc = 0x1754CCu;
        goto label_1754cc;
    }
    ctx->pc = 0x1754C4u;
    SET_GPR_U32(ctx, 31, 0x1754CCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1754C4u, 0x1754CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754CCu;
label_1754cc:
    // 0x1754cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1754ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1754d0:
    // 0x1754d0: 0xacb60000  sw          $s6, 0x0($a1)
    ctx->pc = 0x1754d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 22));
label_1754d4:
    // 0x1754d4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1754d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1754d8:
    // 0x1754d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1754d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1754dc:
    // 0x1754dc: 0x10000012  b           . + 4 + (0x12 << 2)
label_1754e0:
    if (ctx->pc == 0x1754E0u) {
        ctx->pc = 0x1754E4u;
        goto label_1754e4;
    }
    ctx->pc = 0x1754DCu;
    {
        const bool branch_taken_0x1754dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1754dc) {
            ctx->pc = 0x175528u;
            goto label_175528;
        }
    }
    ctx->pc = 0x1754E4u;
label_1754e4:
    // 0x1754e4: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1754e8:
    // 0x1754e8: 0x24b60064  addiu       $s6, $a1, 0x64
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
label_1754ec:
    // 0x1754ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1754ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1754f0:
    // 0x1754f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1754f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1754f4:
    // 0x1754f4: 0xc05612c  jal         func_1584B0
label_1754f8:
    if (ctx->pc == 0x1754F8u) {
        ctx->pc = 0x1754FCu;
        goto label_1754fc;
    }
    ctx->pc = 0x1754F4u;
    SET_GPR_U32(ctx, 31, 0x1754FCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1754F4u, 0x1754FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1754FCu;
label_1754fc:
    // 0x1754fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1754fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175500:
    // 0x175500: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x175500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_175504:
    // 0x175504: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x175504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175508:
    // 0x175508: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x175508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_17550c:
    // 0x17550c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17550cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175510:
    // 0x175510: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175510u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175514:
    // 0x175514: 0xc08c8dc  jal         func_232370
label_175518:
    if (ctx->pc == 0x175518u) {
        ctx->pc = 0x17551Cu;
        goto label_17551c;
    }
    ctx->pc = 0x175514u;
    SET_GPR_U32(ctx, 31, 0x17551Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175514u, 0x17551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17551Cu;
label_17551c:
    // 0x17551c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175520:
    // 0x175520: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x175520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_175524:
    // 0x175524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x175524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175528:
    // 0x175528: 0x2e010014  sltiu       $at, $s0, 0x14
    ctx->pc = 0x175528u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_17552c:
    // 0x17552c: 0x1420ffed  bnez        $at, . + 4 + (-0x13 << 2)
label_175530:
    if (ctx->pc == 0x175530u) {
        ctx->pc = 0x175534u;
        goto label_175534;
    }
    ctx->pc = 0x17552Cu;
    {
        const bool branch_taken_0x17552c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17552c) {
            ctx->pc = 0x1754E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1754e4;
        }
    }
    ctx->pc = 0x175534u;
label_175534:
    // 0x175534: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x175534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175538:
    // 0x175538: 0x10000011  b           . + 4 + (0x11 << 2)
label_17553c:
    if (ctx->pc == 0x17553Cu) {
        ctx->pc = 0x175540u;
        goto label_175540;
    }
    ctx->pc = 0x175538u;
    {
        const bool branch_taken_0x175538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175538) {
            ctx->pc = 0x175580u;
            goto label_175580;
        }
    }
    ctx->pc = 0x175540u;
label_175540:
    // 0x175540: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x175540u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175544:
    // 0x175544: 0x26c50058  addiu       $a1, $s6, 0x58
    ctx->pc = 0x175544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
label_175548:
    // 0x175548: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17554c:
    // 0x17554c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17554cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175550:
    // 0x175550: 0xc05612c  jal         func_1584B0
label_175554:
    if (ctx->pc == 0x175554u) {
        ctx->pc = 0x175558u;
        goto label_175558;
    }
    ctx->pc = 0x175550u;
    SET_GPR_U32(ctx, 31, 0x175558u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175550u, 0x175558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175558u;
label_175558:
    // 0x175558: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x175558u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17555c:
    // 0x17555c: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x17555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_175560:
    // 0x175560: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175564:
    // 0x175564: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x175564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_175568:
    // 0x175568: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17556c:
    // 0x17556c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17556cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_175570:
    // 0x175570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175574:
    // 0x175574: 0xc08c8dc  jal         func_232370
label_175578:
    if (ctx->pc == 0x175578u) {
        ctx->pc = 0x17557Cu;
        goto label_17557c;
    }
    ctx->pc = 0x175574u;
    SET_GPR_U32(ctx, 31, 0x17557Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175574u, 0x17557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17557Cu;
label_17557c:
    // 0x17557c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17557cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_175580:
    // 0x175580: 0x2e01000e  sltiu       $at, $s0, 0xE
    ctx->pc = 0x175580u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_175584:
    // 0x175584: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
label_175588:
    if (ctx->pc == 0x175588u) {
        ctx->pc = 0x17558Cu;
        goto label_17558c;
    }
    ctx->pc = 0x175584u;
    {
        const bool branch_taken_0x175584 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x175584) {
            ctx->pc = 0x175540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175540;
        }
    }
    ctx->pc = 0x17558Cu;
label_17558c:
    // 0x17558c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x17558cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_175590:
    // 0x175590: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x175590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175594:
    // 0x175594: 0x10000011  b           . + 4 + (0x11 << 2)
label_175598:
    if (ctx->pc == 0x175598u) {
        ctx->pc = 0x17559Cu;
        goto label_17559c;
    }
    ctx->pc = 0x175594u;
    {
        const bool branch_taken_0x175594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175594) {
            ctx->pc = 0x1755DCu;
            goto label_1755dc;
        }
    }
    ctx->pc = 0x17559Cu;
label_17559c:
    // 0x17559c: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x17559cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1755a0:
    // 0x1755a0: 0x26c50058  addiu       $a1, $s6, 0x58
    ctx->pc = 0x1755a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
label_1755a4:
    // 0x1755a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1755a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1755a8:
    // 0x1755a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1755a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1755ac:
    // 0x1755ac: 0xc05612c  jal         func_1584B0
label_1755b0:
    if (ctx->pc == 0x1755B0u) {
        ctx->pc = 0x1755B4u;
        goto label_1755b4;
    }
    ctx->pc = 0x1755ACu;
    SET_GPR_U32(ctx, 31, 0x1755B4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1755ACu, 0x1755B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755B4u;
label_1755b4:
    // 0x1755b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1755b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1755b8:
    // 0x1755b8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1755b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1755bc:
    // 0x1755bc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x1755bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1755c0:
    // 0x1755c0: 0x8c560034  lw          $s6, 0x34($v0)
    ctx->pc = 0x1755c0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1755c4:
    // 0x1755c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1755c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1755c8:
    // 0x1755c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1755c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1755cc:
    // 0x1755cc: 0xc08c8dc  jal         func_232370
label_1755d0:
    if (ctx->pc == 0x1755D0u) {
        ctx->pc = 0x1755D4u;
        goto label_1755d4;
    }
    ctx->pc = 0x1755CCu;
    SET_GPR_U32(ctx, 31, 0x1755D4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1755CCu, 0x1755D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1755D4u;
label_1755d4:
    // 0x1755d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1755d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1755d8:
    // 0x1755d8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1755d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1755dc:
    // 0x1755dc: 0x2e010019  sltiu       $at, $s0, 0x19
    ctx->pc = 0x1755dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_1755e0:
    // 0x1755e0: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
label_1755e4:
    if (ctx->pc == 0x1755E4u) {
        ctx->pc = 0x1755E8u;
        goto label_1755e8;
    }
    ctx->pc = 0x1755E0u;
    {
        const bool branch_taken_0x1755e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1755e0) {
            ctx->pc = 0x17559Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17559c;
        }
    }
    ctx->pc = 0x1755E8u;
label_1755e8:
    // 0x1755e8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1755ec:
    // 0x1755ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1755ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1755f0:
    // 0x1755f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1755f4:
    if (ctx->pc == 0x1755F4u) {
        ctx->pc = 0x1755F8u;
        goto label_1755f8;
    }
    ctx->pc = 0x1755F0u;
    {
        const bool branch_taken_0x1755f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755f0) {
            ctx->pc = 0x175638u;
            goto label_175638;
        }
    }
    ctx->pc = 0x1755F8u;
label_1755f8:
    // 0x1755f8: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1755f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1755fc:
    // 0x1755fc: 0x24850058  addiu       $a1, $a0, 0x58
    ctx->pc = 0x1755fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
label_175600:
    // 0x175600: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x175600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175604:
    // 0x175604: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x175604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175608:
    // 0x175608: 0xc05612c  jal         func_1584B0
label_17560c:
    if (ctx->pc == 0x17560Cu) {
        ctx->pc = 0x175610u;
        goto label_175610;
    }
    ctx->pc = 0x175608u;
    SET_GPR_U32(ctx, 31, 0x175610u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x175608u, 0x175610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175610u;
label_175610:
    // 0x175610: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x175610u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175614:
    // 0x175614: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x175614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175618:
    // 0x175618: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x175618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_17561c:
    // 0x17561c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x17561cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_175620:
    // 0x175620: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x175620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_175624:
    // 0x175624: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175624u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175628:
    // 0x175628: 0xc08c8dc  jal         func_232370
label_17562c:
    if (ctx->pc == 0x17562Cu) {
        ctx->pc = 0x175630u;
        goto label_175630;
    }
    ctx->pc = 0x175628u;
    SET_GPR_U32(ctx, 31, 0x175630u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x175628u, 0x175630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175630u;
label_175630:
    // 0x175630: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x175630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_175634:
    // 0x175634: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x175634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_175638:
    // 0x175638: 0x2e010019  sltiu       $at, $s0, 0x19
    ctx->pc = 0x175638u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)25) ? 1 : 0);
label_17563c:
    // 0x17563c: 0x1420ffee  bnez        $at, . + 4 + (-0x12 << 2)
label_175640:
    if (ctx->pc == 0x175640u) {
        ctx->pc = 0x175644u;
        goto label_175644;
    }
    ctx->pc = 0x17563Cu;
    {
        const bool branch_taken_0x17563c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17563c) {
            ctx->pc = 0x1755F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1755f8;
        }
    }
    ctx->pc = 0x175644u;
label_175644:
    // 0x175644: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x175644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_175648:
    // 0x175648: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x175648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17564c:
    // 0x17564c: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x17564cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
label_175650:
    // 0x175650: 0x8fb600d0  lw          $s6, 0xD0($sp)
    ctx->pc = 0x175650u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175654:
    // 0x175654: 0xaec00090  sw          $zero, 0x90($s6)
    ctx->pc = 0x175654u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 144), GPR_U32(ctx, 0));
label_175658:
    // 0x175658: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17565c:
    // 0x17565c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175660:
    // 0x175660: 0xac440094  sw          $a0, 0x94($v0)
    ctx->pc = 0x175660u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 4));
label_175664:
    // 0x175664: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x175664u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
label_175668:
    // 0x175668: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x175668u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17566c:
    // 0x17566c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x17566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175670:
    // 0x175670: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x175670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_175674:
    // 0x175674: 0x3c05bf80  lui         $a1, 0xBF80
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49024 << 16));
label_175678:
    // 0x175678: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x175678u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17567c:
    // 0x17567c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17567cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175680:
    // 0x175680: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x175680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_175684:
    // 0x175684: 0x3c16bf80  lui         $s6, 0xBF80
    ctx->pc = 0x175684u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)49024 << 16));
label_175688:
    // 0x175688: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x175688u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17568c:
    // 0x17568c: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x17568cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_175690:
    // 0x175690: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x175690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
label_175694:
    // 0x175694: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x175694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_175698:
    // 0x175698: 0x24424bf0  addiu       $v0, $v0, 0x4BF0
    ctx->pc = 0x175698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19440));
label_17569c:
    // 0x17569c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17569cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1756a0:
    // 0x1756a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1756a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1756a4:
    // 0x1756a4: 0xc107fa4  jal         func_41FE90
label_1756a8:
    if (ctx->pc == 0x1756A8u) {
        ctx->pc = 0x1756ACu;
        goto label_1756ac;
    }
    ctx->pc = 0x1756A4u;
    SET_GPR_U32(ctx, 31, 0x1756ACu);
    ctx->pc = 0x41FE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41FE90u, 0x1756A4u, 0x1756ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1756ACu;
label_1756ac:
    // 0x1756ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1756acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1756b0:
    // 0x1756b0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1756b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1756b4:
    // 0x1756b4: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x1756b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
label_1756b8:
    // 0x1756b8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1756b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1756bc:
    // 0x1756bc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1756bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1756c0:
    // 0x1756c0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1756c0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1756c4:
    // 0x1756c4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1756c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1756c8:
    // 0x1756c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1756c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1756cc:
    // 0x1756cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1756ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1756d0:
    // 0x1756d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1756d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1756d4:
    // 0x1756d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1756d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1756d8:
    // 0x1756d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1756d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1756dc:
    // 0x1756dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1756dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1756e0:
    // 0x1756e0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1756e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1756e4:
    // 0x1756e4: 0x3e00008  jr          $ra
label_1756e8:
    if (ctx->pc == 0x1756E8u) {
        ctx->pc = 0x1756ECu;
        goto label_1756ec;
    }
    ctx->pc = 0x1756E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1756ECu;
label_1756ec:
    // 0x1756ec: 0x0  nop
    ctx->pc = 0x1756ecu;
    // NOP
label_1756f0:
    // 0x1756f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1756f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1756f4:
    // 0x1756f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1756f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1756f8:
    // 0x1756f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1756f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1756fc:
    // 0x1756fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1756fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_175700:
    // 0x175700: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x175700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_175704:
    // 0x175704: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x175704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
label_175708:
    // 0x175708: 0xc10822c  jal         func_4208B0
label_17570c:
    if (ctx->pc == 0x17570Cu) {
        ctx->pc = 0x175710u;
        goto label_175710;
    }
    ctx->pc = 0x175708u;
    SET_GPR_U32(ctx, 31, 0x175710u);
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x175708u, 0x175710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175710u;
label_175710:
    // 0x175710: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_175714:
    // 0x175714: 0xc0559ac  jal         func_1566B0
label_175718:
    if (ctx->pc == 0x175718u) {
        ctx->pc = 0x17571Cu;
        goto label_17571c;
    }
    ctx->pc = 0x175714u;
    SET_GPR_U32(ctx, 31, 0x17571Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x175714u, 0x17571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17571Cu;
label_17571c:
    // 0x17571c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17571cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_175720:
    // 0x175720: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x175720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_175724:
    // 0x175724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x175724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_175728:
    // 0x175728: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175728u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17572c:
    // 0x17572c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17572cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_175730:
    // 0x175730: 0x3e00008  jr          $ra
label_175734:
    if (ctx->pc == 0x175734u) {
        ctx->pc = 0x175738u;
        goto label_175738;
    }
    ctx->pc = 0x175730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175730u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175738u;
label_175738:
    // 0x175738: 0x0  nop
    ctx->pc = 0x175738u;
    // NOP
label_17573c:
    // 0x17573c: 0x0  nop
    ctx->pc = 0x17573cu;
    // NOP
label_175740:
    // 0x175740: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x175740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_175744:
    // 0x175744: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x175744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_175748:
    // 0x175748: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x175748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_17574c:
    // 0x17574c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x17574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_175750:
    // 0x175750: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x175750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_175754:
    // 0x175754: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_175758:
    // 0x175758: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x175758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_17575c:
    // 0x17575c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_175760:
    // 0x175760: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x175760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_175764:
    // 0x175764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_175768:
    // 0x175768: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x175768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_17576c:
    // 0x17576c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175770:
    // 0x175770: 0x90420050  lbu         $v0, 0x50($v0)
    ctx->pc = 0x175770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
label_175774:
    // 0x175774: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_175778:
    if (ctx->pc == 0x175778u) {
        ctx->pc = 0x17577Cu;
        goto label_17577c;
    }
    ctx->pc = 0x175774u;
    {
        const bool branch_taken_0x175774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x175774) {
            ctx->pc = 0x175790u;
            goto label_175790;
        }
    }
    ctx->pc = 0x17577Cu;
label_17577c:
    // 0x17577c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x17577cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175780:
    // 0x175780: 0xc05dc24  jal         func_177090
label_175784:
    if (ctx->pc == 0x175784u) {
        ctx->pc = 0x175788u;
        goto label_175788;
    }
    ctx->pc = 0x175780u;
    SET_GPR_U32(ctx, 31, 0x175788u);
    ctx->pc = 0x177090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177090u, 0x175780u, 0x175788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175788u;
label_175788:
    // 0x175788: 0x1000005e  b           . + 4 + (0x5E << 2)
label_17578c:
    if (ctx->pc == 0x17578Cu) {
        ctx->pc = 0x175790u;
        goto label_175790;
    }
    ctx->pc = 0x175788u;
    {
        const bool branch_taken_0x175788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175788) {
            ctx->pc = 0x175904u;
            goto label_175904;
        }
    }
    ctx->pc = 0x175790u;
label_175790:
    // 0x175790: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x175790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_175794:
    // 0x175794: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x175794u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_175798:
    // 0x175798: 0x12a0003e  beqz        $s5, . + 4 + (0x3E << 2)
label_17579c:
    if (ctx->pc == 0x17579Cu) {
        ctx->pc = 0x1757A0u;
        goto label_1757a0;
    }
    ctx->pc = 0x175798u;
    {
        const bool branch_taken_0x175798 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x175798) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x1757A0u;
label_1757a0:
    // 0x1757a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1757a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1757a4:
    // 0x1757a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1757a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1757a8:
    // 0x1757a8: 0xc085538  jal         func_2154E0
label_1757ac:
    if (ctx->pc == 0x1757ACu) {
        ctx->pc = 0x1757B0u;
        goto label_1757b0;
    }
    ctx->pc = 0x1757A8u;
    SET_GPR_U32(ctx, 31, 0x1757B0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1757A8u, 0x1757B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757B0u;
label_1757b0:
    // 0x1757b0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1757b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1757b4:
    // 0x1757b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1757b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1757b8:
    // 0x1757b8: 0xc096880  jal         func_25A200
label_1757bc:
    if (ctx->pc == 0x1757BCu) {
        ctx->pc = 0x1757C0u;
        goto label_1757c0;
    }
    ctx->pc = 0x1757B8u;
    SET_GPR_U32(ctx, 31, 0x1757C0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x1757B8u, 0x1757C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757C0u;
label_1757c0:
    // 0x1757c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1757c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1757c4:
    // 0x1757c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1757c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1757c8:
    // 0x1757c8: 0xc0968d0  jal         func_25A340
label_1757cc:
    if (ctx->pc == 0x1757CCu) {
        ctx->pc = 0x1757D0u;
        goto label_1757d0;
    }
    ctx->pc = 0x1757C8u;
    SET_GPR_U32(ctx, 31, 0x1757D0u);
    ctx->pc = 0x25A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A340u, 0x1757C8u, 0x1757D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1757D0u;
label_1757d0:
    // 0x1757d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1757d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1757d4:
    // 0x1757d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1757d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1757d8:
    // 0x1757d8: 0x10130004  beq         $zero, $s3, . + 4 + (0x4 << 2)
label_1757dc:
    if (ctx->pc == 0x1757DCu) {
        ctx->pc = 0x1757E0u;
        goto label_1757e0;
    }
    ctx->pc = 0x1757D8u;
    {
        const bool branch_taken_0x1757d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 19));
        if (branch_taken_0x1757d8) {
            ctx->pc = 0x1757ECu;
            goto label_1757ec;
        }
    }
    ctx->pc = 0x1757E0u;
label_1757e0:
    // 0x1757e0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1757e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1757e4:
    // 0x1757e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1757e8:
    if (ctx->pc == 0x1757E8u) {
        ctx->pc = 0x1757ECu;
        goto label_1757ec;
    }
    ctx->pc = 0x1757E4u;
    {
        const bool branch_taken_0x1757e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757e4) {
            ctx->pc = 0x175804u;
            goto label_175804;
        }
    }
    ctx->pc = 0x1757ECu;
label_1757ec:
    // 0x1757ec: 0x10120004  beq         $zero, $s2, . + 4 + (0x4 << 2)
label_1757f0:
    if (ctx->pc == 0x1757F0u) {
        ctx->pc = 0x1757F4u;
        goto label_1757f4;
    }
    ctx->pc = 0x1757ECu;
    {
        const bool branch_taken_0x1757ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 18));
        if (branch_taken_0x1757ec) {
            ctx->pc = 0x175800u;
            goto label_175800;
        }
    }
    ctx->pc = 0x1757F4u;
label_1757f4:
    // 0x1757f4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1757f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1757f8:
    // 0x1757f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1757fc:
    if (ctx->pc == 0x1757FCu) {
        ctx->pc = 0x175800u;
        goto label_175800;
    }
    ctx->pc = 0x1757F8u;
    {
        const bool branch_taken_0x1757f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1757f8) {
            ctx->pc = 0x175804u;
            goto label_175804;
        }
    }
    ctx->pc = 0x175800u;
label_175800:
    // 0x175800: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x175800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175804:
    // 0x175804: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175808:
    // 0x175808: 0x90420099  lbu         $v0, 0x99($v0)
    ctx->pc = 0x175808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 153)));
label_17580c:
    // 0x17580c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_175810:
    if (ctx->pc == 0x175810u) {
        ctx->pc = 0x175814u;
        goto label_175814;
    }
    ctx->pc = 0x17580Cu;
    {
        const bool branch_taken_0x17580c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17580c) {
            ctx->pc = 0x175864u;
            goto label_175864;
        }
    }
    ctx->pc = 0x175814u;
label_175814:
    // 0x175814: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175818:
    // 0x175818: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x175818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_17581c:
    // 0x17581c: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
label_175820:
    if (ctx->pc == 0x175820u) {
        ctx->pc = 0x175824u;
        goto label_175824;
    }
    ctx->pc = 0x17581Cu;
    {
        const bool branch_taken_0x17581c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x17581c) {
            ctx->pc = 0x175864u;
            goto label_175864;
        }
    }
    ctx->pc = 0x175824u;
label_175824:
    // 0x175824: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175828:
    // 0x175828: 0xac500070  sw          $s0, 0x70($v0)
    ctx->pc = 0x175828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
label_17582c:
    // 0x17582c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17582cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_175830:
    // 0x175830: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175834:
    // 0x175834: 0xa0430050  sb          $v1, 0x50($v0)
    ctx->pc = 0x175834u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 80), (uint8_t)GPR_U32(ctx, 3));
label_175838:
    // 0x175838: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x175838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_17583c:
    // 0x17583c: 0xc05e374  jal         func_178DD0
label_175840:
    if (ctx->pc == 0x175840u) {
        ctx->pc = 0x175844u;
        goto label_175844;
    }
    ctx->pc = 0x17583Cu;
    SET_GPR_U32(ctx, 31, 0x175844u);
    ctx->pc = 0x178DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178DD0u, 0x17583Cu, 0x175844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175844u;
label_175844:
    // 0x175844: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175848:
    // 0x175848: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x175848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_17584c:
    // 0x17584c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_175850:
    if (ctx->pc == 0x175850u) {
        ctx->pc = 0x175854u;
        goto label_175854;
    }
    ctx->pc = 0x17584Cu;
    {
        const bool branch_taken_0x17584c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17584c) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x175854u;
label_175854:
    // 0x175854: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175858:
    // 0x175858: 0xa0400098  sb          $zero, 0x98($v0)
    ctx->pc = 0x175858u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 0));
label_17585c:
    // 0x17585c: 0x1000000d  b           . + 4 + (0xD << 2)
label_175860:
    if (ctx->pc == 0x175860u) {
        ctx->pc = 0x175864u;
        goto label_175864;
    }
    ctx->pc = 0x17585Cu;
    {
        const bool branch_taken_0x17585c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17585c) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x175864u;
label_175864:
    // 0x175864: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175868:
    // 0x175868: 0x90420099  lbu         $v0, 0x99($v0)
    ctx->pc = 0x175868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 153)));
label_17586c:
    // 0x17586c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_175870:
    if (ctx->pc == 0x175870u) {
        ctx->pc = 0x175874u;
        goto label_175874;
    }
    ctx->pc = 0x17586Cu;
    {
        const bool branch_taken_0x17586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17586c) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x175874u;
label_175874:
    // 0x175874: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175878:
    // 0x175878: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x175878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_17587c:
    // 0x17587c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_175880:
    if (ctx->pc == 0x175880u) {
        ctx->pc = 0x175884u;
        goto label_175884;
    }
    ctx->pc = 0x17587Cu;
    {
        const bool branch_taken_0x17587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17587c) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x175884u;
label_175884:
    // 0x175884: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_175888:
    if (ctx->pc == 0x175888u) {
        ctx->pc = 0x17588Cu;
        goto label_17588c;
    }
    ctx->pc = 0x175884u;
    {
        const bool branch_taken_0x175884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x175884) {
            ctx->pc = 0x175894u;
            goto label_175894;
        }
    }
    ctx->pc = 0x17588Cu;
label_17588c:
    // 0x17588c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175890:
    // 0x175890: 0xac500070  sw          $s0, 0x70($v0)
    ctx->pc = 0x175890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
label_175894:
    // 0x175894: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x175894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175898:
    // 0x175898: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x175898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_17589c:
    // 0x17589c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1758a0:
    if (ctx->pc == 0x1758A0u) {
        ctx->pc = 0x1758A4u;
        goto label_1758a4;
    }
    ctx->pc = 0x17589Cu;
    {
        const bool branch_taken_0x17589c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17589c) {
            ctx->pc = 0x175904u;
            goto label_175904;
        }
    }
    ctx->pc = 0x1758A4u;
label_1758a4:
    // 0x1758a4: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1758a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1758a8:
    // 0x1758a8: 0x90420098  lbu         $v0, 0x98($v0)
    ctx->pc = 0x1758a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
label_1758ac:
    // 0x1758ac: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1758b0:
    if (ctx->pc == 0x1758B0u) {
        ctx->pc = 0x1758B4u;
        goto label_1758b4;
    }
    ctx->pc = 0x1758ACu;
    {
        const bool branch_taken_0x1758ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758ac) {
            ctx->pc = 0x175904u;
            goto label_175904;
        }
    }
    ctx->pc = 0x1758B4u;
label_1758b4:
    // 0x1758b4: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1758b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1758b8:
    // 0x1758b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1758bc:
    // 0x1758bc: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_1758c0:
    if (ctx->pc == 0x1758C0u) {
        ctx->pc = 0x1758C4u;
        goto label_1758c4;
    }
    ctx->pc = 0x1758BCu;
    {
        const bool branch_taken_0x1758bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1758bc) {
            ctx->pc = 0x175904u;
            goto label_175904;
        }
    }
    ctx->pc = 0x1758C4u;
label_1758c4:
    // 0x1758c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1758c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1758c8:
    // 0x1758c8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1758c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1758cc:
    // 0x1758cc: 0xc085538  jal         func_2154E0
label_1758d0:
    if (ctx->pc == 0x1758D0u) {
        ctx->pc = 0x1758D4u;
        goto label_1758d4;
    }
    ctx->pc = 0x1758CCu;
    SET_GPR_U32(ctx, 31, 0x1758D4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1758CCu, 0x1758D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758D4u;
label_1758d4:
    // 0x1758d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1758d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1758d8:
    // 0x1758d8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1758d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1758dc:
    // 0x1758dc: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1758e0:
    // 0x1758e0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1758e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1758e4:
    // 0x1758e4: 0xc085538  jal         func_2154E0
label_1758e8:
    if (ctx->pc == 0x1758E8u) {
        ctx->pc = 0x1758ECu;
        goto label_1758ec;
    }
    ctx->pc = 0x1758E4u;
    SET_GPR_U32(ctx, 31, 0x1758ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1758E4u, 0x1758ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1758ECu;
label_1758ec:
    // 0x1758ec: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1758ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1758f0:
    // 0x1758f0: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x1758f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_1758f4:
    // 0x1758f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1758f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1758f8:
    // 0x1758f8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1758f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1758fc:
    // 0x1758fc: 0xc05d690  jal         func_175A40
label_175900:
    if (ctx->pc == 0x175900u) {
        ctx->pc = 0x175904u;
        goto label_175904;
    }
    ctx->pc = 0x1758FCu;
    SET_GPR_U32(ctx, 31, 0x175904u);
    ctx->pc = 0x175A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175A40u, 0x1758FCu, 0x175904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175904u;
label_175904:
    // 0x175904: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x175904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175908:
    // 0x175908: 0x9385badc  lbu         $a1, -0x4524($gp)
    ctx->pc = 0x175908u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294949596)));
label_17590c:
    // 0x17590c: 0xc05e498  jal         func_179260
label_175910:
    if (ctx->pc == 0x175910u) {
        ctx->pc = 0x175914u;
        goto label_175914;
    }
    ctx->pc = 0x17590Cu;
    SET_GPR_U32(ctx, 31, 0x175914u);
    ctx->pc = 0x179260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179260u, 0x17590Cu, 0x175914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175914u;
label_175914:
    // 0x175914: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x175914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_175918:
    // 0x175918: 0xc055b3c  jal         func_156CF0
label_17591c:
    if (ctx->pc == 0x17591Cu) {
        ctx->pc = 0x175920u;
        goto label_175920;
    }
    ctx->pc = 0x175918u;
    SET_GPR_U32(ctx, 31, 0x175920u);
    ctx->pc = 0x156CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156CF0u, 0x175918u, 0x175920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175920u;
label_175920:
    // 0x175920: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x175920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_175924:
    // 0x175924: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x175924u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_175928:
    // 0x175928: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x175928u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17592c:
    // 0x17592c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x17592cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175930:
    // 0x175930: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x175930u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175934:
    // 0x175934: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175934u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_175938:
    // 0x175938: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175938u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17593c:
    // 0x17593c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17593cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175940:
    // 0x175940: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x175940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_175944:
    // 0x175944: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x175944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_175948:
    // 0x175948: 0x3e00008  jr          $ra
label_17594c:
    if (ctx->pc == 0x17594Cu) {
        ctx->pc = 0x175950u;
        goto label_175950;
    }
    ctx->pc = 0x175948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175950u;
label_175950:
    // 0x175950: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_175954:
    // 0x175954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175958:
    // 0x175958: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x175958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_17595c:
    // 0x17595c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x17595cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_175960:
    // 0x175960: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_175964:
    // 0x175964: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x175964u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_175968:
    // 0x175968: 0xc055a78  jal         func_1569E0
label_17596c:
    if (ctx->pc == 0x17596Cu) {
        ctx->pc = 0x175970u;
        goto label_175970;
    }
    ctx->pc = 0x175968u;
    SET_GPR_U32(ctx, 31, 0x175970u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x175968u, 0x175970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175970u;
label_175970:
    // 0x175970: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x175970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_175974:
    // 0x175974: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x175974u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_175978:
    // 0x175978: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_17597c:
    if (ctx->pc == 0x17597Cu) {
        ctx->pc = 0x175980u;
        goto label_175980;
    }
    ctx->pc = 0x175978u;
    {
        const bool branch_taken_0x175978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x175978) {
            ctx->pc = 0x1759ACu;
            goto label_1759ac;
        }
    }
    ctx->pc = 0x175980u;
label_175980:
    // 0x175980: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x175980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_175984:
    // 0x175984: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x175984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_175988:
    // 0x175988: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x175988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17598c:
    // 0x17598c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175990:
    // 0x175990: 0xc05e498  jal         func_179260
label_175994:
    if (ctx->pc == 0x175994u) {
        ctx->pc = 0x175998u;
        goto label_175998;
    }
    ctx->pc = 0x175990u;
    SET_GPR_U32(ctx, 31, 0x175998u);
    ctx->pc = 0x179260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179260u, 0x175990u, 0x175998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175998u;
label_175998:
    // 0x175998: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x175998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17599c:
    // 0x17599c: 0xa0600098  sb          $zero, 0x98($v1)
    ctx->pc = 0x17599cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 152), (uint8_t)GPR_U32(ctx, 0));
label_1759a0:
    // 0x1759a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1759a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1759a4:
    // 0x1759a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1759a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1759a8:
    // 0x1759a8: 0xa0640050  sb          $a0, 0x50($v1)
    ctx->pc = 0x1759a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 4));
label_1759ac:
    // 0x1759ac: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1759acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1759b0:
    // 0x1759b0: 0xa0600099  sb          $zero, 0x99($v1)
    ctx->pc = 0x1759b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 153), (uint8_t)GPR_U32(ctx, 0));
label_1759b4:
    // 0x1759b4: 0x300300ff  andi        $v1, $zero, 0xFF
    ctx->pc = 0x1759b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
label_1759b8:
    // 0x1759b8: 0xa383badc  sb          $v1, -0x4524($gp)
    ctx->pc = 0x1759b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294949596), (uint8_t)GPR_U32(ctx, 3));
label_1759bc:
    // 0x1759bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1759bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1759c0:
    // 0x1759c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1759c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1759c4:
    // 0x1759c4: 0x3e00008  jr          $ra
label_1759c8:
    if (ctx->pc == 0x1759C8u) {
        ctx->pc = 0x1759CCu;
        goto label_1759cc;
    }
    ctx->pc = 0x1759C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1759C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1759CCu;
label_1759cc:
    // 0x1759cc: 0x0  nop
    ctx->pc = 0x1759ccu;
    // NOP
label_1759d0:
    // 0x1759d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1759d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1759d4:
    // 0x1759d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1759d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1759d8:
    // 0x1759d8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1759d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1759dc:
    // 0x1759dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1759dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1759e0:
    // 0x1759e0: 0xc055a84  jal         func_156A10
label_1759e4:
    if (ctx->pc == 0x1759E4u) {
        ctx->pc = 0x1759E8u;
        goto label_1759e8;
    }
    ctx->pc = 0x1759E0u;
    SET_GPR_U32(ctx, 31, 0x1759E8u);
    ctx->pc = 0x156A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156A10u, 0x1759E0u, 0x1759E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1759E8u;
label_1759e8:
    // 0x1759e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1759e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1759ec:
    // 0x1759ec: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1759ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1759f0:
    // 0x1759f0: 0x3e00008  jr          $ra
label_1759f4:
    if (ctx->pc == 0x1759F4u) {
        ctx->pc = 0x1759F8u;
        goto label_1759f8;
    }
    ctx->pc = 0x1759F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1759F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1759F8u;
label_1759f8:
    // 0x1759f8: 0x0  nop
    ctx->pc = 0x1759f8u;
    // NOP
label_1759fc:
    // 0x1759fc: 0x0  nop
    ctx->pc = 0x1759fcu;
    // NOP
    ctx->pc = 0x175a00u;
}
