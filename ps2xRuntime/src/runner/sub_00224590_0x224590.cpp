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

// Function: sub_00224590
// Address: 0x224590 - 0x225300
void sub_00224590_0x224590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224590_0x224590");
#endif

    switch (ctx->pc) {
        case 0x224590u: goto label_224590;
        case 0x224594u: goto label_224594;
        case 0x224598u: goto label_224598;
        case 0x22459cu: goto label_22459c;
        case 0x2245a0u: goto label_2245a0;
        case 0x2245a4u: goto label_2245a4;
        case 0x2245a8u: goto label_2245a8;
        case 0x2245acu: goto label_2245ac;
        case 0x2245b0u: goto label_2245b0;
        case 0x2245b4u: goto label_2245b4;
        case 0x2245b8u: goto label_2245b8;
        case 0x2245bcu: goto label_2245bc;
        case 0x2245c0u: goto label_2245c0;
        case 0x2245c4u: goto label_2245c4;
        case 0x2245c8u: goto label_2245c8;
        case 0x2245ccu: goto label_2245cc;
        case 0x2245d0u: goto label_2245d0;
        case 0x2245d4u: goto label_2245d4;
        case 0x2245d8u: goto label_2245d8;
        case 0x2245dcu: goto label_2245dc;
        case 0x2245e0u: goto label_2245e0;
        case 0x2245e4u: goto label_2245e4;
        case 0x2245e8u: goto label_2245e8;
        case 0x2245ecu: goto label_2245ec;
        case 0x2245f0u: goto label_2245f0;
        case 0x2245f4u: goto label_2245f4;
        case 0x2245f8u: goto label_2245f8;
        case 0x2245fcu: goto label_2245fc;
        case 0x224600u: goto label_224600;
        case 0x224604u: goto label_224604;
        case 0x224608u: goto label_224608;
        case 0x22460cu: goto label_22460c;
        case 0x224610u: goto label_224610;
        case 0x224614u: goto label_224614;
        case 0x224618u: goto label_224618;
        case 0x22461cu: goto label_22461c;
        case 0x224620u: goto label_224620;
        case 0x224624u: goto label_224624;
        case 0x224628u: goto label_224628;
        case 0x22462cu: goto label_22462c;
        case 0x224630u: goto label_224630;
        case 0x224634u: goto label_224634;
        case 0x224638u: goto label_224638;
        case 0x22463cu: goto label_22463c;
        case 0x224640u: goto label_224640;
        case 0x224644u: goto label_224644;
        case 0x224648u: goto label_224648;
        case 0x22464cu: goto label_22464c;
        case 0x224650u: goto label_224650;
        case 0x224654u: goto label_224654;
        case 0x224658u: goto label_224658;
        case 0x22465cu: goto label_22465c;
        case 0x224660u: goto label_224660;
        case 0x224664u: goto label_224664;
        case 0x224668u: goto label_224668;
        case 0x22466cu: goto label_22466c;
        case 0x224670u: goto label_224670;
        case 0x224674u: goto label_224674;
        case 0x224678u: goto label_224678;
        case 0x22467cu: goto label_22467c;
        case 0x224680u: goto label_224680;
        case 0x224684u: goto label_224684;
        case 0x224688u: goto label_224688;
        case 0x22468cu: goto label_22468c;
        case 0x224690u: goto label_224690;
        case 0x224694u: goto label_224694;
        case 0x224698u: goto label_224698;
        case 0x22469cu: goto label_22469c;
        case 0x2246a0u: goto label_2246a0;
        case 0x2246a4u: goto label_2246a4;
        case 0x2246a8u: goto label_2246a8;
        case 0x2246acu: goto label_2246ac;
        case 0x2246b0u: goto label_2246b0;
        case 0x2246b4u: goto label_2246b4;
        case 0x2246b8u: goto label_2246b8;
        case 0x2246bcu: goto label_2246bc;
        case 0x2246c0u: goto label_2246c0;
        case 0x2246c4u: goto label_2246c4;
        case 0x2246c8u: goto label_2246c8;
        case 0x2246ccu: goto label_2246cc;
        case 0x2246d0u: goto label_2246d0;
        case 0x2246d4u: goto label_2246d4;
        case 0x2246d8u: goto label_2246d8;
        case 0x2246dcu: goto label_2246dc;
        case 0x2246e0u: goto label_2246e0;
        case 0x2246e4u: goto label_2246e4;
        case 0x2246e8u: goto label_2246e8;
        case 0x2246ecu: goto label_2246ec;
        case 0x2246f0u: goto label_2246f0;
        case 0x2246f4u: goto label_2246f4;
        case 0x2246f8u: goto label_2246f8;
        case 0x2246fcu: goto label_2246fc;
        case 0x224700u: goto label_224700;
        case 0x224704u: goto label_224704;
        case 0x224708u: goto label_224708;
        case 0x22470cu: goto label_22470c;
        case 0x224710u: goto label_224710;
        case 0x224714u: goto label_224714;
        case 0x224718u: goto label_224718;
        case 0x22471cu: goto label_22471c;
        case 0x224720u: goto label_224720;
        case 0x224724u: goto label_224724;
        case 0x224728u: goto label_224728;
        case 0x22472cu: goto label_22472c;
        case 0x224730u: goto label_224730;
        case 0x224734u: goto label_224734;
        case 0x224738u: goto label_224738;
        case 0x22473cu: goto label_22473c;
        case 0x224740u: goto label_224740;
        case 0x224744u: goto label_224744;
        case 0x224748u: goto label_224748;
        case 0x22474cu: goto label_22474c;
        case 0x224750u: goto label_224750;
        case 0x224754u: goto label_224754;
        case 0x224758u: goto label_224758;
        case 0x22475cu: goto label_22475c;
        case 0x224760u: goto label_224760;
        case 0x224764u: goto label_224764;
        case 0x224768u: goto label_224768;
        case 0x22476cu: goto label_22476c;
        case 0x224770u: goto label_224770;
        case 0x224774u: goto label_224774;
        case 0x224778u: goto label_224778;
        case 0x22477cu: goto label_22477c;
        case 0x224780u: goto label_224780;
        case 0x224784u: goto label_224784;
        case 0x224788u: goto label_224788;
        case 0x22478cu: goto label_22478c;
        case 0x224790u: goto label_224790;
        case 0x224794u: goto label_224794;
        case 0x224798u: goto label_224798;
        case 0x22479cu: goto label_22479c;
        case 0x2247a0u: goto label_2247a0;
        case 0x2247a4u: goto label_2247a4;
        case 0x2247a8u: goto label_2247a8;
        case 0x2247acu: goto label_2247ac;
        case 0x2247b0u: goto label_2247b0;
        case 0x2247b4u: goto label_2247b4;
        case 0x2247b8u: goto label_2247b8;
        case 0x2247bcu: goto label_2247bc;
        case 0x2247c0u: goto label_2247c0;
        case 0x2247c4u: goto label_2247c4;
        case 0x2247c8u: goto label_2247c8;
        case 0x2247ccu: goto label_2247cc;
        case 0x2247d0u: goto label_2247d0;
        case 0x2247d4u: goto label_2247d4;
        case 0x2247d8u: goto label_2247d8;
        case 0x2247dcu: goto label_2247dc;
        case 0x2247e0u: goto label_2247e0;
        case 0x2247e4u: goto label_2247e4;
        case 0x2247e8u: goto label_2247e8;
        case 0x2247ecu: goto label_2247ec;
        case 0x2247f0u: goto label_2247f0;
        case 0x2247f4u: goto label_2247f4;
        case 0x2247f8u: goto label_2247f8;
        case 0x2247fcu: goto label_2247fc;
        case 0x224800u: goto label_224800;
        case 0x224804u: goto label_224804;
        case 0x224808u: goto label_224808;
        case 0x22480cu: goto label_22480c;
        case 0x224810u: goto label_224810;
        case 0x224814u: goto label_224814;
        case 0x224818u: goto label_224818;
        case 0x22481cu: goto label_22481c;
        case 0x224820u: goto label_224820;
        case 0x224824u: goto label_224824;
        case 0x224828u: goto label_224828;
        case 0x22482cu: goto label_22482c;
        case 0x224830u: goto label_224830;
        case 0x224834u: goto label_224834;
        case 0x224838u: goto label_224838;
        case 0x22483cu: goto label_22483c;
        case 0x224840u: goto label_224840;
        case 0x224844u: goto label_224844;
        case 0x224848u: goto label_224848;
        case 0x22484cu: goto label_22484c;
        case 0x224850u: goto label_224850;
        case 0x224854u: goto label_224854;
        case 0x224858u: goto label_224858;
        case 0x22485cu: goto label_22485c;
        case 0x224860u: goto label_224860;
        case 0x224864u: goto label_224864;
        case 0x224868u: goto label_224868;
        case 0x22486cu: goto label_22486c;
        case 0x224870u: goto label_224870;
        case 0x224874u: goto label_224874;
        case 0x224878u: goto label_224878;
        case 0x22487cu: goto label_22487c;
        case 0x224880u: goto label_224880;
        case 0x224884u: goto label_224884;
        case 0x224888u: goto label_224888;
        case 0x22488cu: goto label_22488c;
        case 0x224890u: goto label_224890;
        case 0x224894u: goto label_224894;
        case 0x224898u: goto label_224898;
        case 0x22489cu: goto label_22489c;
        case 0x2248a0u: goto label_2248a0;
        case 0x2248a4u: goto label_2248a4;
        case 0x2248a8u: goto label_2248a8;
        case 0x2248acu: goto label_2248ac;
        case 0x2248b0u: goto label_2248b0;
        case 0x2248b4u: goto label_2248b4;
        case 0x2248b8u: goto label_2248b8;
        case 0x2248bcu: goto label_2248bc;
        case 0x2248c0u: goto label_2248c0;
        case 0x2248c4u: goto label_2248c4;
        case 0x2248c8u: goto label_2248c8;
        case 0x2248ccu: goto label_2248cc;
        case 0x2248d0u: goto label_2248d0;
        case 0x2248d4u: goto label_2248d4;
        case 0x2248d8u: goto label_2248d8;
        case 0x2248dcu: goto label_2248dc;
        case 0x2248e0u: goto label_2248e0;
        case 0x2248e4u: goto label_2248e4;
        case 0x2248e8u: goto label_2248e8;
        case 0x2248ecu: goto label_2248ec;
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        case 0x224900u: goto label_224900;
        case 0x224904u: goto label_224904;
        case 0x224908u: goto label_224908;
        case 0x22490cu: goto label_22490c;
        case 0x224910u: goto label_224910;
        case 0x224914u: goto label_224914;
        case 0x224918u: goto label_224918;
        case 0x22491cu: goto label_22491c;
        case 0x224920u: goto label_224920;
        case 0x224924u: goto label_224924;
        case 0x224928u: goto label_224928;
        case 0x22492cu: goto label_22492c;
        case 0x224930u: goto label_224930;
        case 0x224934u: goto label_224934;
        case 0x224938u: goto label_224938;
        case 0x22493cu: goto label_22493c;
        case 0x224940u: goto label_224940;
        case 0x224944u: goto label_224944;
        case 0x224948u: goto label_224948;
        case 0x22494cu: goto label_22494c;
        case 0x224950u: goto label_224950;
        case 0x224954u: goto label_224954;
        case 0x224958u: goto label_224958;
        case 0x22495cu: goto label_22495c;
        case 0x224960u: goto label_224960;
        case 0x224964u: goto label_224964;
        case 0x224968u: goto label_224968;
        case 0x22496cu: goto label_22496c;
        case 0x224970u: goto label_224970;
        case 0x224974u: goto label_224974;
        case 0x224978u: goto label_224978;
        case 0x22497cu: goto label_22497c;
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        case 0x224a40u: goto label_224a40;
        case 0x224a44u: goto label_224a44;
        case 0x224a48u: goto label_224a48;
        case 0x224a4cu: goto label_224a4c;
        case 0x224a50u: goto label_224a50;
        case 0x224a54u: goto label_224a54;
        case 0x224a58u: goto label_224a58;
        case 0x224a5cu: goto label_224a5c;
        case 0x224a60u: goto label_224a60;
        case 0x224a64u: goto label_224a64;
        case 0x224a68u: goto label_224a68;
        case 0x224a6cu: goto label_224a6c;
        case 0x224a70u: goto label_224a70;
        case 0x224a74u: goto label_224a74;
        case 0x224a78u: goto label_224a78;
        case 0x224a7cu: goto label_224a7c;
        case 0x224a80u: goto label_224a80;
        case 0x224a84u: goto label_224a84;
        case 0x224a88u: goto label_224a88;
        case 0x224a8cu: goto label_224a8c;
        case 0x224a90u: goto label_224a90;
        case 0x224a94u: goto label_224a94;
        case 0x224a98u: goto label_224a98;
        case 0x224a9cu: goto label_224a9c;
        case 0x224aa0u: goto label_224aa0;
        case 0x224aa4u: goto label_224aa4;
        case 0x224aa8u: goto label_224aa8;
        case 0x224aacu: goto label_224aac;
        case 0x224ab0u: goto label_224ab0;
        case 0x224ab4u: goto label_224ab4;
        case 0x224ab8u: goto label_224ab8;
        case 0x224abcu: goto label_224abc;
        case 0x224ac0u: goto label_224ac0;
        case 0x224ac4u: goto label_224ac4;
        case 0x224ac8u: goto label_224ac8;
        case 0x224accu: goto label_224acc;
        case 0x224ad0u: goto label_224ad0;
        case 0x224ad4u: goto label_224ad4;
        case 0x224ad8u: goto label_224ad8;
        case 0x224adcu: goto label_224adc;
        case 0x224ae0u: goto label_224ae0;
        case 0x224ae4u: goto label_224ae4;
        case 0x224ae8u: goto label_224ae8;
        case 0x224aecu: goto label_224aec;
        case 0x224af0u: goto label_224af0;
        case 0x224af4u: goto label_224af4;
        case 0x224af8u: goto label_224af8;
        case 0x224afcu: goto label_224afc;
        case 0x224b00u: goto label_224b00;
        case 0x224b04u: goto label_224b04;
        case 0x224b08u: goto label_224b08;
        case 0x224b0cu: goto label_224b0c;
        case 0x224b10u: goto label_224b10;
        case 0x224b14u: goto label_224b14;
        case 0x224b18u: goto label_224b18;
        case 0x224b1cu: goto label_224b1c;
        case 0x224b20u: goto label_224b20;
        case 0x224b24u: goto label_224b24;
        case 0x224b28u: goto label_224b28;
        case 0x224b2cu: goto label_224b2c;
        case 0x224b30u: goto label_224b30;
        case 0x224b34u: goto label_224b34;
        case 0x224b38u: goto label_224b38;
        case 0x224b3cu: goto label_224b3c;
        case 0x224b40u: goto label_224b40;
        case 0x224b44u: goto label_224b44;
        case 0x224b48u: goto label_224b48;
        case 0x224b4cu: goto label_224b4c;
        case 0x224b50u: goto label_224b50;
        case 0x224b54u: goto label_224b54;
        case 0x224b58u: goto label_224b58;
        case 0x224b5cu: goto label_224b5c;
        case 0x224b60u: goto label_224b60;
        case 0x224b64u: goto label_224b64;
        case 0x224b68u: goto label_224b68;
        case 0x224b6cu: goto label_224b6c;
        case 0x224b70u: goto label_224b70;
        case 0x224b74u: goto label_224b74;
        case 0x224b78u: goto label_224b78;
        case 0x224b7cu: goto label_224b7c;
        case 0x224b80u: goto label_224b80;
        case 0x224b84u: goto label_224b84;
        case 0x224b88u: goto label_224b88;
        case 0x224b8cu: goto label_224b8c;
        case 0x224b90u: goto label_224b90;
        case 0x224b94u: goto label_224b94;
        case 0x224b98u: goto label_224b98;
        case 0x224b9cu: goto label_224b9c;
        case 0x224ba0u: goto label_224ba0;
        case 0x224ba4u: goto label_224ba4;
        case 0x224ba8u: goto label_224ba8;
        case 0x224bacu: goto label_224bac;
        case 0x224bb0u: goto label_224bb0;
        case 0x224bb4u: goto label_224bb4;
        case 0x224bb8u: goto label_224bb8;
        case 0x224bbcu: goto label_224bbc;
        case 0x224bc0u: goto label_224bc0;
        case 0x224bc4u: goto label_224bc4;
        case 0x224bc8u: goto label_224bc8;
        case 0x224bccu: goto label_224bcc;
        case 0x224bd0u: goto label_224bd0;
        case 0x224bd4u: goto label_224bd4;
        case 0x224bd8u: goto label_224bd8;
        case 0x224bdcu: goto label_224bdc;
        case 0x224be0u: goto label_224be0;
        case 0x224be4u: goto label_224be4;
        case 0x224be8u: goto label_224be8;
        case 0x224becu: goto label_224bec;
        case 0x224bf0u: goto label_224bf0;
        case 0x224bf4u: goto label_224bf4;
        case 0x224bf8u: goto label_224bf8;
        case 0x224bfcu: goto label_224bfc;
        case 0x224c00u: goto label_224c00;
        case 0x224c04u: goto label_224c04;
        case 0x224c08u: goto label_224c08;
        case 0x224c0cu: goto label_224c0c;
        case 0x224c10u: goto label_224c10;
        case 0x224c14u: goto label_224c14;
        case 0x224c18u: goto label_224c18;
        case 0x224c1cu: goto label_224c1c;
        case 0x224c20u: goto label_224c20;
        case 0x224c24u: goto label_224c24;
        case 0x224c28u: goto label_224c28;
        case 0x224c2cu: goto label_224c2c;
        case 0x224c30u: goto label_224c30;
        case 0x224c34u: goto label_224c34;
        case 0x224c38u: goto label_224c38;
        case 0x224c3cu: goto label_224c3c;
        case 0x224c40u: goto label_224c40;
        case 0x224c44u: goto label_224c44;
        case 0x224c48u: goto label_224c48;
        case 0x224c4cu: goto label_224c4c;
        case 0x224c50u: goto label_224c50;
        case 0x224c54u: goto label_224c54;
        case 0x224c58u: goto label_224c58;
        case 0x224c5cu: goto label_224c5c;
        case 0x224c60u: goto label_224c60;
        case 0x224c64u: goto label_224c64;
        case 0x224c68u: goto label_224c68;
        case 0x224c6cu: goto label_224c6c;
        case 0x224c70u: goto label_224c70;
        case 0x224c74u: goto label_224c74;
        case 0x224c78u: goto label_224c78;
        case 0x224c7cu: goto label_224c7c;
        case 0x224c80u: goto label_224c80;
        case 0x224c84u: goto label_224c84;
        case 0x224c88u: goto label_224c88;
        case 0x224c8cu: goto label_224c8c;
        case 0x224c90u: goto label_224c90;
        case 0x224c94u: goto label_224c94;
        case 0x224c98u: goto label_224c98;
        case 0x224c9cu: goto label_224c9c;
        case 0x224ca0u: goto label_224ca0;
        case 0x224ca4u: goto label_224ca4;
        case 0x224ca8u: goto label_224ca8;
        case 0x224cacu: goto label_224cac;
        case 0x224cb0u: goto label_224cb0;
        case 0x224cb4u: goto label_224cb4;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cbcu: goto label_224cbc;
        case 0x224cc0u: goto label_224cc0;
        case 0x224cc4u: goto label_224cc4;
        case 0x224cc8u: goto label_224cc8;
        case 0x224cccu: goto label_224ccc;
        case 0x224cd0u: goto label_224cd0;
        case 0x224cd4u: goto label_224cd4;
        case 0x224cd8u: goto label_224cd8;
        case 0x224cdcu: goto label_224cdc;
        case 0x224ce0u: goto label_224ce0;
        case 0x224ce4u: goto label_224ce4;
        case 0x224ce8u: goto label_224ce8;
        case 0x224cecu: goto label_224cec;
        case 0x224cf0u: goto label_224cf0;
        case 0x224cf4u: goto label_224cf4;
        case 0x224cf8u: goto label_224cf8;
        case 0x224cfcu: goto label_224cfc;
        case 0x224d00u: goto label_224d00;
        case 0x224d04u: goto label_224d04;
        case 0x224d08u: goto label_224d08;
        case 0x224d0cu: goto label_224d0c;
        case 0x224d10u: goto label_224d10;
        case 0x224d14u: goto label_224d14;
        case 0x224d18u: goto label_224d18;
        case 0x224d1cu: goto label_224d1c;
        case 0x224d20u: goto label_224d20;
        case 0x224d24u: goto label_224d24;
        case 0x224d28u: goto label_224d28;
        case 0x224d2cu: goto label_224d2c;
        case 0x224d30u: goto label_224d30;
        case 0x224d34u: goto label_224d34;
        case 0x224d38u: goto label_224d38;
        case 0x224d3cu: goto label_224d3c;
        case 0x224d40u: goto label_224d40;
        case 0x224d44u: goto label_224d44;
        case 0x224d48u: goto label_224d48;
        case 0x224d4cu: goto label_224d4c;
        case 0x224d50u: goto label_224d50;
        case 0x224d54u: goto label_224d54;
        case 0x224d58u: goto label_224d58;
        case 0x224d5cu: goto label_224d5c;
        case 0x224d60u: goto label_224d60;
        case 0x224d64u: goto label_224d64;
        case 0x224d68u: goto label_224d68;
        case 0x224d6cu: goto label_224d6c;
        case 0x224d70u: goto label_224d70;
        case 0x224d74u: goto label_224d74;
        case 0x224d78u: goto label_224d78;
        case 0x224d7cu: goto label_224d7c;
        case 0x224d80u: goto label_224d80;
        case 0x224d84u: goto label_224d84;
        case 0x224d88u: goto label_224d88;
        case 0x224d8cu: goto label_224d8c;
        case 0x224d90u: goto label_224d90;
        case 0x224d94u: goto label_224d94;
        case 0x224d98u: goto label_224d98;
        case 0x224d9cu: goto label_224d9c;
        case 0x224da0u: goto label_224da0;
        case 0x224da4u: goto label_224da4;
        case 0x224da8u: goto label_224da8;
        case 0x224dacu: goto label_224dac;
        case 0x224db0u: goto label_224db0;
        case 0x224db4u: goto label_224db4;
        case 0x224db8u: goto label_224db8;
        case 0x224dbcu: goto label_224dbc;
        case 0x224dc0u: goto label_224dc0;
        case 0x224dc4u: goto label_224dc4;
        case 0x224dc8u: goto label_224dc8;
        case 0x224dccu: goto label_224dcc;
        case 0x224dd0u: goto label_224dd0;
        case 0x224dd4u: goto label_224dd4;
        case 0x224dd8u: goto label_224dd8;
        case 0x224ddcu: goto label_224ddc;
        case 0x224de0u: goto label_224de0;
        case 0x224de4u: goto label_224de4;
        case 0x224de8u: goto label_224de8;
        case 0x224decu: goto label_224dec;
        case 0x224df0u: goto label_224df0;
        case 0x224df4u: goto label_224df4;
        case 0x224df8u: goto label_224df8;
        case 0x224dfcu: goto label_224dfc;
        case 0x224e00u: goto label_224e00;
        case 0x224e04u: goto label_224e04;
        case 0x224e08u: goto label_224e08;
        case 0x224e0cu: goto label_224e0c;
        case 0x224e10u: goto label_224e10;
        case 0x224e14u: goto label_224e14;
        case 0x224e18u: goto label_224e18;
        case 0x224e1cu: goto label_224e1c;
        case 0x224e20u: goto label_224e20;
        case 0x224e24u: goto label_224e24;
        case 0x224e28u: goto label_224e28;
        case 0x224e2cu: goto label_224e2c;
        case 0x224e30u: goto label_224e30;
        case 0x224e34u: goto label_224e34;
        case 0x224e38u: goto label_224e38;
        case 0x224e3cu: goto label_224e3c;
        case 0x224e40u: goto label_224e40;
        case 0x224e44u: goto label_224e44;
        case 0x224e48u: goto label_224e48;
        case 0x224e4cu: goto label_224e4c;
        case 0x224e50u: goto label_224e50;
        case 0x224e54u: goto label_224e54;
        case 0x224e58u: goto label_224e58;
        case 0x224e5cu: goto label_224e5c;
        case 0x224e60u: goto label_224e60;
        case 0x224e64u: goto label_224e64;
        case 0x224e68u: goto label_224e68;
        case 0x224e6cu: goto label_224e6c;
        case 0x224e70u: goto label_224e70;
        case 0x224e74u: goto label_224e74;
        case 0x224e78u: goto label_224e78;
        case 0x224e7cu: goto label_224e7c;
        case 0x224e80u: goto label_224e80;
        case 0x224e84u: goto label_224e84;
        case 0x224e88u: goto label_224e88;
        case 0x224e8cu: goto label_224e8c;
        case 0x224e90u: goto label_224e90;
        case 0x224e94u: goto label_224e94;
        case 0x224e98u: goto label_224e98;
        case 0x224e9cu: goto label_224e9c;
        case 0x224ea0u: goto label_224ea0;
        case 0x224ea4u: goto label_224ea4;
        case 0x224ea8u: goto label_224ea8;
        case 0x224eacu: goto label_224eac;
        case 0x224eb0u: goto label_224eb0;
        case 0x224eb4u: goto label_224eb4;
        case 0x224eb8u: goto label_224eb8;
        case 0x224ebcu: goto label_224ebc;
        case 0x224ec0u: goto label_224ec0;
        case 0x224ec4u: goto label_224ec4;
        case 0x224ec8u: goto label_224ec8;
        case 0x224eccu: goto label_224ecc;
        case 0x224ed0u: goto label_224ed0;
        case 0x224ed4u: goto label_224ed4;
        case 0x224ed8u: goto label_224ed8;
        case 0x224edcu: goto label_224edc;
        case 0x224ee0u: goto label_224ee0;
        case 0x224ee4u: goto label_224ee4;
        case 0x224ee8u: goto label_224ee8;
        case 0x224eecu: goto label_224eec;
        case 0x224ef0u: goto label_224ef0;
        case 0x224ef4u: goto label_224ef4;
        case 0x224ef8u: goto label_224ef8;
        case 0x224efcu: goto label_224efc;
        case 0x224f00u: goto label_224f00;
        case 0x224f04u: goto label_224f04;
        case 0x224f08u: goto label_224f08;
        case 0x224f0cu: goto label_224f0c;
        case 0x224f10u: goto label_224f10;
        case 0x224f14u: goto label_224f14;
        case 0x224f18u: goto label_224f18;
        case 0x224f1cu: goto label_224f1c;
        case 0x224f20u: goto label_224f20;
        case 0x224f24u: goto label_224f24;
        case 0x224f28u: goto label_224f28;
        case 0x224f2cu: goto label_224f2c;
        case 0x224f30u: goto label_224f30;
        case 0x224f34u: goto label_224f34;
        case 0x224f38u: goto label_224f38;
        case 0x224f3cu: goto label_224f3c;
        case 0x224f40u: goto label_224f40;
        case 0x224f44u: goto label_224f44;
        case 0x224f48u: goto label_224f48;
        case 0x224f4cu: goto label_224f4c;
        case 0x224f50u: goto label_224f50;
        case 0x224f54u: goto label_224f54;
        case 0x224f58u: goto label_224f58;
        case 0x224f5cu: goto label_224f5c;
        case 0x224f60u: goto label_224f60;
        case 0x224f64u: goto label_224f64;
        case 0x224f68u: goto label_224f68;
        case 0x224f6cu: goto label_224f6c;
        case 0x224f70u: goto label_224f70;
        case 0x224f74u: goto label_224f74;
        case 0x224f78u: goto label_224f78;
        case 0x224f7cu: goto label_224f7c;
        case 0x224f80u: goto label_224f80;
        case 0x224f84u: goto label_224f84;
        case 0x224f88u: goto label_224f88;
        case 0x224f8cu: goto label_224f8c;
        case 0x224f90u: goto label_224f90;
        case 0x224f94u: goto label_224f94;
        case 0x224f98u: goto label_224f98;
        case 0x224f9cu: goto label_224f9c;
        case 0x224fa0u: goto label_224fa0;
        case 0x224fa4u: goto label_224fa4;
        case 0x224fa8u: goto label_224fa8;
        case 0x224facu: goto label_224fac;
        case 0x224fb0u: goto label_224fb0;
        case 0x224fb4u: goto label_224fb4;
        case 0x224fb8u: goto label_224fb8;
        case 0x224fbcu: goto label_224fbc;
        case 0x224fc0u: goto label_224fc0;
        case 0x224fc4u: goto label_224fc4;
        case 0x224fc8u: goto label_224fc8;
        case 0x224fccu: goto label_224fcc;
        case 0x224fd0u: goto label_224fd0;
        case 0x224fd4u: goto label_224fd4;
        case 0x224fd8u: goto label_224fd8;
        case 0x224fdcu: goto label_224fdc;
        case 0x224fe0u: goto label_224fe0;
        case 0x224fe4u: goto label_224fe4;
        case 0x224fe8u: goto label_224fe8;
        case 0x224fecu: goto label_224fec;
        case 0x224ff0u: goto label_224ff0;
        case 0x224ff4u: goto label_224ff4;
        case 0x224ff8u: goto label_224ff8;
        case 0x224ffcu: goto label_224ffc;
        case 0x225000u: goto label_225000;
        case 0x225004u: goto label_225004;
        case 0x225008u: goto label_225008;
        case 0x22500cu: goto label_22500c;
        case 0x225010u: goto label_225010;
        case 0x225014u: goto label_225014;
        case 0x225018u: goto label_225018;
        case 0x22501cu: goto label_22501c;
        case 0x225020u: goto label_225020;
        case 0x225024u: goto label_225024;
        case 0x225028u: goto label_225028;
        case 0x22502cu: goto label_22502c;
        case 0x225030u: goto label_225030;
        case 0x225034u: goto label_225034;
        case 0x225038u: goto label_225038;
        case 0x22503cu: goto label_22503c;
        case 0x225040u: goto label_225040;
        case 0x225044u: goto label_225044;
        case 0x225048u: goto label_225048;
        case 0x22504cu: goto label_22504c;
        case 0x225050u: goto label_225050;
        case 0x225054u: goto label_225054;
        case 0x225058u: goto label_225058;
        case 0x22505cu: goto label_22505c;
        case 0x225060u: goto label_225060;
        case 0x225064u: goto label_225064;
        case 0x225068u: goto label_225068;
        case 0x22506cu: goto label_22506c;
        case 0x225070u: goto label_225070;
        case 0x225074u: goto label_225074;
        case 0x225078u: goto label_225078;
        case 0x22507cu: goto label_22507c;
        case 0x225080u: goto label_225080;
        case 0x225084u: goto label_225084;
        case 0x225088u: goto label_225088;
        case 0x22508cu: goto label_22508c;
        case 0x225090u: goto label_225090;
        case 0x225094u: goto label_225094;
        case 0x225098u: goto label_225098;
        case 0x22509cu: goto label_22509c;
        case 0x2250a0u: goto label_2250a0;
        case 0x2250a4u: goto label_2250a4;
        case 0x2250a8u: goto label_2250a8;
        case 0x2250acu: goto label_2250ac;
        case 0x2250b0u: goto label_2250b0;
        case 0x2250b4u: goto label_2250b4;
        case 0x2250b8u: goto label_2250b8;
        case 0x2250bcu: goto label_2250bc;
        case 0x2250c0u: goto label_2250c0;
        case 0x2250c4u: goto label_2250c4;
        case 0x2250c8u: goto label_2250c8;
        case 0x2250ccu: goto label_2250cc;
        case 0x2250d0u: goto label_2250d0;
        case 0x2250d4u: goto label_2250d4;
        case 0x2250d8u: goto label_2250d8;
        case 0x2250dcu: goto label_2250dc;
        case 0x2250e0u: goto label_2250e0;
        case 0x2250e4u: goto label_2250e4;
        case 0x2250e8u: goto label_2250e8;
        case 0x2250ecu: goto label_2250ec;
        case 0x2250f0u: goto label_2250f0;
        case 0x2250f4u: goto label_2250f4;
        case 0x2250f8u: goto label_2250f8;
        case 0x2250fcu: goto label_2250fc;
        case 0x225100u: goto label_225100;
        case 0x225104u: goto label_225104;
        case 0x225108u: goto label_225108;
        case 0x22510cu: goto label_22510c;
        case 0x225110u: goto label_225110;
        case 0x225114u: goto label_225114;
        case 0x225118u: goto label_225118;
        case 0x22511cu: goto label_22511c;
        case 0x225120u: goto label_225120;
        case 0x225124u: goto label_225124;
        case 0x225128u: goto label_225128;
        case 0x22512cu: goto label_22512c;
        case 0x225130u: goto label_225130;
        case 0x225134u: goto label_225134;
        case 0x225138u: goto label_225138;
        case 0x22513cu: goto label_22513c;
        case 0x225140u: goto label_225140;
        case 0x225144u: goto label_225144;
        case 0x225148u: goto label_225148;
        case 0x22514cu: goto label_22514c;
        case 0x225150u: goto label_225150;
        case 0x225154u: goto label_225154;
        case 0x225158u: goto label_225158;
        case 0x22515cu: goto label_22515c;
        case 0x225160u: goto label_225160;
        case 0x225164u: goto label_225164;
        case 0x225168u: goto label_225168;
        case 0x22516cu: goto label_22516c;
        case 0x225170u: goto label_225170;
        case 0x225174u: goto label_225174;
        case 0x225178u: goto label_225178;
        case 0x22517cu: goto label_22517c;
        case 0x225180u: goto label_225180;
        case 0x225184u: goto label_225184;
        case 0x225188u: goto label_225188;
        case 0x22518cu: goto label_22518c;
        case 0x225190u: goto label_225190;
        case 0x225194u: goto label_225194;
        case 0x225198u: goto label_225198;
        case 0x22519cu: goto label_22519c;
        case 0x2251a0u: goto label_2251a0;
        case 0x2251a4u: goto label_2251a4;
        case 0x2251a8u: goto label_2251a8;
        case 0x2251acu: goto label_2251ac;
        case 0x2251b0u: goto label_2251b0;
        case 0x2251b4u: goto label_2251b4;
        case 0x2251b8u: goto label_2251b8;
        case 0x2251bcu: goto label_2251bc;
        case 0x2251c0u: goto label_2251c0;
        case 0x2251c4u: goto label_2251c4;
        case 0x2251c8u: goto label_2251c8;
        case 0x2251ccu: goto label_2251cc;
        case 0x2251d0u: goto label_2251d0;
        case 0x2251d4u: goto label_2251d4;
        case 0x2251d8u: goto label_2251d8;
        case 0x2251dcu: goto label_2251dc;
        case 0x2251e0u: goto label_2251e0;
        case 0x2251e4u: goto label_2251e4;
        case 0x2251e8u: goto label_2251e8;
        case 0x2251ecu: goto label_2251ec;
        case 0x2251f0u: goto label_2251f0;
        case 0x2251f4u: goto label_2251f4;
        case 0x2251f8u: goto label_2251f8;
        case 0x2251fcu: goto label_2251fc;
        case 0x225200u: goto label_225200;
        case 0x225204u: goto label_225204;
        case 0x225208u: goto label_225208;
        case 0x22520cu: goto label_22520c;
        case 0x225210u: goto label_225210;
        case 0x225214u: goto label_225214;
        case 0x225218u: goto label_225218;
        case 0x22521cu: goto label_22521c;
        case 0x225220u: goto label_225220;
        case 0x225224u: goto label_225224;
        case 0x225228u: goto label_225228;
        case 0x22522cu: goto label_22522c;
        case 0x225230u: goto label_225230;
        case 0x225234u: goto label_225234;
        case 0x225238u: goto label_225238;
        case 0x22523cu: goto label_22523c;
        case 0x225240u: goto label_225240;
        case 0x225244u: goto label_225244;
        case 0x225248u: goto label_225248;
        case 0x22524cu: goto label_22524c;
        case 0x225250u: goto label_225250;
        case 0x225254u: goto label_225254;
        case 0x225258u: goto label_225258;
        case 0x22525cu: goto label_22525c;
        case 0x225260u: goto label_225260;
        case 0x225264u: goto label_225264;
        case 0x225268u: goto label_225268;
        case 0x22526cu: goto label_22526c;
        case 0x225270u: goto label_225270;
        case 0x225274u: goto label_225274;
        case 0x225278u: goto label_225278;
        case 0x22527cu: goto label_22527c;
        case 0x225280u: goto label_225280;
        case 0x225284u: goto label_225284;
        case 0x225288u: goto label_225288;
        case 0x22528cu: goto label_22528c;
        case 0x225290u: goto label_225290;
        case 0x225294u: goto label_225294;
        case 0x225298u: goto label_225298;
        case 0x22529cu: goto label_22529c;
        case 0x2252a0u: goto label_2252a0;
        case 0x2252a4u: goto label_2252a4;
        case 0x2252a8u: goto label_2252a8;
        case 0x2252acu: goto label_2252ac;
        case 0x2252b0u: goto label_2252b0;
        case 0x2252b4u: goto label_2252b4;
        case 0x2252b8u: goto label_2252b8;
        case 0x2252bcu: goto label_2252bc;
        case 0x2252c0u: goto label_2252c0;
        case 0x2252c4u: goto label_2252c4;
        case 0x2252c8u: goto label_2252c8;
        case 0x2252ccu: goto label_2252cc;
        case 0x2252d0u: goto label_2252d0;
        case 0x2252d4u: goto label_2252d4;
        case 0x2252d8u: goto label_2252d8;
        case 0x2252dcu: goto label_2252dc;
        case 0x2252e0u: goto label_2252e0;
        case 0x2252e4u: goto label_2252e4;
        case 0x2252e8u: goto label_2252e8;
        case 0x2252ecu: goto label_2252ec;
        case 0x2252f0u: goto label_2252f0;
        case 0x2252f4u: goto label_2252f4;
        case 0x2252f8u: goto label_2252f8;
        case 0x2252fcu: goto label_2252fc;
        default: break;
    }

    ctx->pc = 0x224590u;

label_224590:
    // 0x224590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_224594:
    // 0x224594: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_224598:
    // 0x224598: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x224598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_22459c:
    // 0x22459c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x22459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_2245a0:
    // 0x2245a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2245a4:
    // 0x2245a4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2245a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2245a8:
    // 0x2245a8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2245a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2245ac:
    // 0x2245ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2245acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2245b0:
    // 0x2245b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2245b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2245b4:
    // 0x2245b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2245b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2245b8:
    // 0x2245b8: 0x320f809  jalr        $t9
label_2245bc:
    if (ctx->pc == 0x2245BCu) {
        ctx->pc = 0x2245C0u;
        goto label_2245c0;
    }
    ctx->pc = 0x2245B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2245C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2245B8u, 0x2245C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2245C0u;
label_2245c0:
    // 0x2245c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2245c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2245c4:
    // 0x2245c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2245c8:
    // 0x2245c8: 0x3e00008  jr          $ra
label_2245cc:
    if (ctx->pc == 0x2245CCu) {
        ctx->pc = 0x2245D0u;
        goto label_2245d0;
    }
    ctx->pc = 0x2245C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2245C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2245D0u;
label_2245d0:
    // 0x2245d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2245d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2245d4:
    // 0x2245d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2245d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2245d8:
    // 0x2245d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2245d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2245dc:
    // 0x2245dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2245dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2245e0:
    // 0x2245e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2245e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2245e4:
    // 0x2245e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2245e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2245e8:
    // 0x2245e8: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2245e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2245ec:
    // 0x2245ec: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2245ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2245f0:
    // 0x2245f0: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x2245f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
label_2245f4:
    // 0x2245f4: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_2245f8:
    // 0x2245f8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2245f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2245fc:
    // 0x2245fc: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2245fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224600:
    // 0x224600: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224604:
    // 0x224604: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224608:
    // 0x224608: 0xc088708  jal         func_221C20
label_22460c:
    if (ctx->pc == 0x22460Cu) {
        ctx->pc = 0x224610u;
        goto label_224610;
    }
    ctx->pc = 0x224608u;
    SET_GPR_U32(ctx, 31, 0x224610u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224608u, 0x224610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224610u;
label_224610:
    // 0x224610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224614:
    // 0x224614: 0x10000017  b           . + 4 + (0x17 << 2)
label_224618:
    if (ctx->pc == 0x224618u) {
        ctx->pc = 0x22461Cu;
        goto label_22461c;
    }
    ctx->pc = 0x224614u;
    {
        const bool branch_taken_0x224614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224614) {
            ctx->pc = 0x224674u;
            goto label_224674;
        }
    }
    ctx->pc = 0x22461Cu;
label_22461c:
    // 0x22461c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x22461cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_224620:
    // 0x224620: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224624:
    // 0x224624: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224624u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224628:
    // 0x224628: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_22462c:
    // 0x22462c: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_224630:
    if (ctx->pc == 0x224630u) {
        ctx->pc = 0x224634u;
        goto label_224634;
    }
    ctx->pc = 0x22462Cu;
    {
        const bool branch_taken_0x22462c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22462c) {
            ctx->pc = 0x224670u;
            goto label_224670;
        }
    }
    ctx->pc = 0x224634u;
label_224634:
    // 0x224634: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x224634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_224638:
    // 0x224638: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22463c:
    if (ctx->pc == 0x22463Cu) {
        ctx->pc = 0x224640u;
        goto label_224640;
    }
    ctx->pc = 0x224638u;
    {
        const bool branch_taken_0x224638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224638) {
            ctx->pc = 0x22464Cu;
            goto label_22464c;
        }
    }
    ctx->pc = 0x224640u;
label_224640:
    // 0x224640: 0x27939c54  addiu       $s3, $gp, -0x63AC
    ctx->pc = 0x224640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941780));
label_224644:
    // 0x224644: 0x10000002  b           . + 4 + (0x2 << 2)
label_224648:
    if (ctx->pc == 0x224648u) {
        ctx->pc = 0x22464Cu;
        goto label_22464c;
    }
    ctx->pc = 0x224644u;
    {
        const bool branch_taken_0x224644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224644) {
            ctx->pc = 0x224650u;
            goto label_224650;
        }
    }
    ctx->pc = 0x22464Cu;
label_22464c:
    // 0x22464c: 0x27939c58  addiu       $s3, $gp, -0x63A8
    ctx->pc = 0x22464cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941784));
label_224650:
    // 0x224650: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224654:
    // 0x224654: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224658:
    // 0x224658: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x224658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22465c:
    // 0x22465c: 0xc041ba4  jal         func_106E90
label_224660:
    if (ctx->pc == 0x224660u) {
        ctx->pc = 0x224664u;
        goto label_224664;
    }
    ctx->pc = 0x22465Cu;
    SET_GPR_U32(ctx, 31, 0x224664u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x22465Cu, 0x224664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224664u;
label_224664:
    // 0x224664: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224668:
    // 0x224668: 0x10000031  b           . + 4 + (0x31 << 2)
label_22466c:
    if (ctx->pc == 0x22466Cu) {
        ctx->pc = 0x224670u;
        goto label_224670;
    }
    ctx->pc = 0x224668u;
    {
        const bool branch_taken_0x224668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224668) {
            ctx->pc = 0x224730u;
            goto label_224730;
        }
    }
    ctx->pc = 0x224670u;
label_224670:
    // 0x224670: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224674:
    // 0x224674: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224678:
    // 0x224678: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22467c:
    // 0x22467c: 0xc088700  jal         func_221C00
label_224680:
    if (ctx->pc == 0x224680u) {
        ctx->pc = 0x224684u;
        goto label_224684;
    }
    ctx->pc = 0x22467Cu;
    SET_GPR_U32(ctx, 31, 0x224684u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x22467Cu, 0x224684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224684u;
label_224684:
    // 0x224684: 0x1602ffe5  bne         $s0, $v0, . + 4 + (-0x1B << 2)
label_224688:
    if (ctx->pc == 0x224688u) {
        ctx->pc = 0x22468Cu;
        goto label_22468c;
    }
    ctx->pc = 0x224684u;
    {
        const bool branch_taken_0x224684 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224684) {
            ctx->pc = 0x22461Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22461c;
        }
    }
    ctx->pc = 0x22468Cu;
label_22468c:
    // 0x22468c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224690:
    // 0x224690: 0xc119b68  jal         func_466DA0
label_224694:
    if (ctx->pc == 0x224694u) {
        ctx->pc = 0x224698u;
        goto label_224698;
    }
    ctx->pc = 0x224690u;
    SET_GPR_U32(ctx, 31, 0x224698u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224690u, 0x224698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224698u;
label_224698:
    // 0x224698: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22469c:
    // 0x22469c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2246a0:
    // 0x2246a0: 0xc0400e0  jal         func_100380
label_2246a4:
    if (ctx->pc == 0x2246A4u) {
        ctx->pc = 0x2246A8u;
        goto label_2246a8;
    }
    ctx->pc = 0x2246A0u;
    SET_GPR_U32(ctx, 31, 0x2246A8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2246A0u, 0x2246A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246A8u;
label_2246a8:
    // 0x2246a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2246a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2246ac:
    // 0x2246ac: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_2246b0:
    if (ctx->pc == 0x2246B0u) {
        ctx->pc = 0x2246B4u;
        goto label_2246b4;
    }
    ctx->pc = 0x2246ACu;
    {
        const bool branch_taken_0x2246ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246ac) {
            ctx->pc = 0x2246C4u;
            goto label_2246c4;
        }
    }
    ctx->pc = 0x2246B4u;
label_2246b4:
    // 0x2246b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2246b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2246b8:
    // 0x2246b8: 0xc088ecc  jal         func_223B30
label_2246bc:
    if (ctx->pc == 0x2246BCu) {
        ctx->pc = 0x2246C0u;
        goto label_2246c0;
    }
    ctx->pc = 0x2246B8u;
    SET_GPR_U32(ctx, 31, 0x2246C0u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x2246B8u, 0x2246C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2246C0u;
label_2246c0:
    // 0x2246c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2246c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2246c4:
    // 0x2246c4: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x2246c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_2246c8:
    // 0x2246c8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2246c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2246cc:
    // 0x2246cc: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2246ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2246d0:
    // 0x2246d0: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2246d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2246d4:
    // 0x2246d4: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x2246d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_2246d8:
    // 0x2246d8: 0x93a20080  lbu         $v0, 0x80($sp)
    ctx->pc = 0x2246d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
label_2246dc:
    // 0x2246dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2246e0:
    if (ctx->pc == 0x2246E0u) {
        ctx->pc = 0x2246E4u;
        goto label_2246e4;
    }
    ctx->pc = 0x2246DCu;
    {
        const bool branch_taken_0x2246dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246dc) {
            ctx->pc = 0x2246F0u;
            goto label_2246f0;
        }
    }
    ctx->pc = 0x2246E4u;
label_2246e4:
    // 0x2246e4: 0x27929c54  addiu       $s2, $gp, -0x63AC
    ctx->pc = 0x2246e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941780));
label_2246e8:
    // 0x2246e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2246ec:
    if (ctx->pc == 0x2246ECu) {
        ctx->pc = 0x2246F0u;
        goto label_2246f0;
    }
    ctx->pc = 0x2246E8u;
    {
        const bool branch_taken_0x2246e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2246e8) {
            ctx->pc = 0x2246F4u;
            goto label_2246f4;
        }
    }
    ctx->pc = 0x2246F0u;
label_2246f0:
    // 0x2246f0: 0x27929c58  addiu       $s2, $gp, -0x63A8
    ctx->pc = 0x2246f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941784));
label_2246f4:
    // 0x2246f4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2246f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2246f8:
    // 0x2246f8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2246f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2246fc:
    // 0x2246fc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2246fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224700:
    // 0x224700: 0xc041ba4  jal         func_106E90
label_224704:
    if (ctx->pc == 0x224704u) {
        ctx->pc = 0x224708u;
        goto label_224708;
    }
    ctx->pc = 0x224700u;
    SET_GPR_U32(ctx, 31, 0x224708u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224700u, 0x224708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224708u;
label_224708:
    // 0x224708: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_22470c:
    // 0x22470c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22470cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224710:
    // 0x224710: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x224710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_224714:
    // 0x224714: 0xc088c8c  jal         func_223230
label_224718:
    if (ctx->pc == 0x224718u) {
        ctx->pc = 0x22471Cu;
        goto label_22471c;
    }
    ctx->pc = 0x224714u;
    SET_GPR_U32(ctx, 31, 0x22471Cu);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x224714u, 0x22471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22471Cu;
label_22471c:
    // 0x22471c: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x22471cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224720:
    // 0x224720: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x224720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_224724:
    // 0x224724: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_224728:
    // 0x224728: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_22472c:
    // 0x22472c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224730:
    // 0x224730: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x224730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_224734:
    // 0x224734: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x224734u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_224738:
    // 0x224738: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224738u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22473c:
    // 0x22473c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22473cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224740:
    // 0x224740: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224744:
    // 0x224744: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x224744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_224748:
    // 0x224748: 0x3e00008  jr          $ra
label_22474c:
    if (ctx->pc == 0x22474Cu) {
        ctx->pc = 0x224750u;
        goto label_224750;
    }
    ctx->pc = 0x224748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224750u;
label_224750:
    // 0x224750: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x224750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_224754:
    // 0x224754: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_224758:
    // 0x224758: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_22475c:
    // 0x22475c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22475cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224760:
    // 0x224760: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x224760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_224764:
    // 0x224764: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x224764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_224768:
    // 0x224768: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x224768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_22476c:
    // 0x22476c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x22476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_224770:
    // 0x224770: 0x27859c5c  addiu       $a1, $gp, -0x63A4
    ctx->pc = 0x224770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941788));
label_224774:
    // 0x224774: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x224774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_224778:
    // 0x224778: 0xc0bc3e2  jal         func_2F0F88
label_22477c:
    if (ctx->pc == 0x22477Cu) {
        ctx->pc = 0x224780u;
        goto label_224780;
    }
    ctx->pc = 0x224778u;
    SET_GPR_U32(ctx, 31, 0x224780u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x224778u, 0x224780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224780u;
label_224780:
    // 0x224780: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224784:
    // 0x224784: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_224788:
    // 0x224788: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224788u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_22478c:
    // 0x22478c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x22478cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224790:
    // 0x224790: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224794:
    // 0x224794: 0xc088708  jal         func_221C20
label_224798:
    if (ctx->pc == 0x224798u) {
        ctx->pc = 0x22479Cu;
        goto label_22479c;
    }
    ctx->pc = 0x224794u;
    SET_GPR_U32(ctx, 31, 0x22479Cu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224794u, 0x22479Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22479Cu;
label_22479c:
    // 0x22479c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22479cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2247a0:
    // 0x2247a0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2247a4:
    if (ctx->pc == 0x2247A4u) {
        ctx->pc = 0x2247A8u;
        goto label_2247a8;
    }
    ctx->pc = 0x2247A0u;
    {
        const bool branch_taken_0x2247a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2247a0) {
            ctx->pc = 0x2247E4u;
            goto label_2247e4;
        }
    }
    ctx->pc = 0x2247A8u;
label_2247a8:
    // 0x2247a8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2247a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2247ac:
    // 0x2247ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2247acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2247b0:
    // 0x2247b0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2247b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2247b4:
    // 0x2247b4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2247b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2247b8:
    // 0x2247b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2247bc:
    if (ctx->pc == 0x2247BCu) {
        ctx->pc = 0x2247C0u;
        goto label_2247c0;
    }
    ctx->pc = 0x2247B8u;
    {
        const bool branch_taken_0x2247b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2247b8) {
            ctx->pc = 0x2247E0u;
            goto label_2247e0;
        }
    }
    ctx->pc = 0x2247C0u;
label_2247c0:
    // 0x2247c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2247c4:
    // 0x2247c4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x2247c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2247c8:
    // 0x2247c8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2247c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2247cc:
    // 0x2247cc: 0xc041ba4  jal         func_106E90
label_2247d0:
    if (ctx->pc == 0x2247D0u) {
        ctx->pc = 0x2247D4u;
        goto label_2247d4;
    }
    ctx->pc = 0x2247CCu;
    SET_GPR_U32(ctx, 31, 0x2247D4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2247CCu, 0x2247D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247D4u;
label_2247d4:
    // 0x2247d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2247d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2247d8:
    // 0x2247d8: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2247dc:
    if (ctx->pc == 0x2247DCu) {
        ctx->pc = 0x2247E0u;
        goto label_2247e0;
    }
    ctx->pc = 0x2247D8u;
    {
        const bool branch_taken_0x2247d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2247d8) {
            ctx->pc = 0x224884u;
            goto label_224884;
        }
    }
    ctx->pc = 0x2247E0u;
label_2247e0:
    // 0x2247e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2247e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2247e4:
    // 0x2247e4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2247e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2247e8:
    // 0x2247e8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2247e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2247ec:
    // 0x2247ec: 0xc088700  jal         func_221C00
label_2247f0:
    if (ctx->pc == 0x2247F0u) {
        ctx->pc = 0x2247F4u;
        goto label_2247f4;
    }
    ctx->pc = 0x2247ECu;
    SET_GPR_U32(ctx, 31, 0x2247F4u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x2247ECu, 0x2247F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2247F4u;
label_2247f4:
    // 0x2247f4: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_2247f8:
    if (ctx->pc == 0x2247F8u) {
        ctx->pc = 0x2247FCu;
        goto label_2247fc;
    }
    ctx->pc = 0x2247F4u;
    {
        const bool branch_taken_0x2247f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2247f4) {
            ctx->pc = 0x2247A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2247a8;
        }
    }
    ctx->pc = 0x2247FCu;
label_2247fc:
    // 0x2247fc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2247fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224800:
    // 0x224800: 0xc119b68  jal         func_466DA0
label_224804:
    if (ctx->pc == 0x224804u) {
        ctx->pc = 0x224808u;
        goto label_224808;
    }
    ctx->pc = 0x224800u;
    SET_GPR_U32(ctx, 31, 0x224808u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224800u, 0x224808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224808u;
label_224808:
    // 0x224808: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22480c:
    // 0x22480c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22480cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224810:
    // 0x224810: 0xc0400e0  jal         func_100380
label_224814:
    if (ctx->pc == 0x224814u) {
        ctx->pc = 0x224818u;
        goto label_224818;
    }
    ctx->pc = 0x224810u;
    SET_GPR_U32(ctx, 31, 0x224818u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224810u, 0x224818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224818u;
label_224818:
    // 0x224818: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22481c:
    // 0x22481c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_224820:
    if (ctx->pc == 0x224820u) {
        ctx->pc = 0x224824u;
        goto label_224824;
    }
    ctx->pc = 0x22481Cu;
    {
        const bool branch_taken_0x22481c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22481c) {
            ctx->pc = 0x224834u;
            goto label_224834;
        }
    }
    ctx->pc = 0x224824u;
label_224824:
    // 0x224824: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224828:
    // 0x224828: 0xc088ecc  jal         func_223B30
label_22482c:
    if (ctx->pc == 0x22482Cu) {
        ctx->pc = 0x224830u;
        goto label_224830;
    }
    ctx->pc = 0x224828u;
    SET_GPR_U32(ctx, 31, 0x224830u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x224828u, 0x224830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224830u;
label_224830:
    // 0x224830: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224834:
    // 0x224834: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x224834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_224838:
    // 0x224838: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x224838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22483c:
    // 0x22483c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x22483cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224840:
    // 0x224840: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_224844:
    // 0x224844: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x224844u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_224848:
    // 0x224848: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_22484c:
    // 0x22484c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x22484cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224850:
    // 0x224850: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x224850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_224854:
    // 0x224854: 0xc041ba4  jal         func_106E90
label_224858:
    if (ctx->pc == 0x224858u) {
        ctx->pc = 0x22485Cu;
        goto label_22485c;
    }
    ctx->pc = 0x224854u;
    SET_GPR_U32(ctx, 31, 0x22485Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224854u, 0x22485Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22485Cu;
label_22485c:
    // 0x22485c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x22485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224860:
    // 0x224860: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224864:
    // 0x224864: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x224864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_224868:
    // 0x224868: 0xc088c8c  jal         func_223230
label_22486c:
    if (ctx->pc == 0x22486Cu) {
        ctx->pc = 0x224870u;
        goto label_224870;
    }
    ctx->pc = 0x224868u;
    SET_GPR_U32(ctx, 31, 0x224870u);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x224868u, 0x224870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224870u;
label_224870:
    // 0x224870: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x224870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224874:
    // 0x224874: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x224874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_224878:
    // 0x224878: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_22487c:
    // 0x22487c: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x22487cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224880:
    // 0x224880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224884:
    // 0x224884: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224888:
    // 0x224888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22488c:
    // 0x22488c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22488cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224890:
    // 0x224890: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x224890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_224894:
    // 0x224894: 0x3e00008  jr          $ra
label_224898:
    if (ctx->pc == 0x224898u) {
        ctx->pc = 0x22489Cu;
        goto label_22489c;
    }
    ctx->pc = 0x224894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22489Cu;
label_22489c:
    // 0x22489c: 0x0  nop
    ctx->pc = 0x22489cu;
    // NOP
label_2248a0:
    // 0x2248a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2248a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2248a4:
    // 0x2248a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2248a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2248a8:
    // 0x2248a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2248a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2248ac:
    // 0x2248ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2248acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2248b0:
    // 0x2248b0: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2248b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_2248b4:
    // 0x2248b4: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2248b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_2248b8:
    // 0x2248b8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2248b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_2248bc:
    // 0x2248bc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2248c0:
    // 0x2248c0: 0x27859c60  addiu       $a1, $gp, -0x63A0
    ctx->pc = 0x2248c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941792));
label_2248c4:
    // 0x2248c4: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2248c8:
    // 0x2248c8: 0xc0bc3e2  jal         func_2F0F88
label_2248cc:
    if (ctx->pc == 0x2248CCu) {
        ctx->pc = 0x2248D0u;
        goto label_2248d0;
    }
    ctx->pc = 0x2248C8u;
    SET_GPR_U32(ctx, 31, 0x2248D0u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x2248C8u, 0x2248D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248D0u;
label_2248d0:
    // 0x2248d0: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2248d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_2248d4:
    // 0x2248d4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2248d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2248d8:
    // 0x2248d8: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2248d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_2248dc:
    // 0x2248dc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2248e0:
    // 0x2248e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2248e4:
    // 0x2248e4: 0xc088708  jal         func_221C20
label_2248e8:
    if (ctx->pc == 0x2248E8u) {
        ctx->pc = 0x2248ECu;
        goto label_2248ec;
    }
    ctx->pc = 0x2248E4u;
    SET_GPR_U32(ctx, 31, 0x2248ECu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2248E4u, 0x2248ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2248ECu;
label_2248ec:
    // 0x2248ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2248ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2248f0:
    // 0x2248f0: 0x10000010  b           . + 4 + (0x10 << 2)
label_2248f4:
    if (ctx->pc == 0x2248F4u) {
        ctx->pc = 0x2248F8u;
        goto label_2248f8;
    }
    ctx->pc = 0x2248F0u;
    {
        const bool branch_taken_0x2248f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2248f0) {
            ctx->pc = 0x224934u;
            goto label_224934;
        }
    }
    ctx->pc = 0x2248F8u;
label_2248f8:
    // 0x2248f8: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2248f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2248fc:
    // 0x2248fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2248fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224900:
    // 0x224900: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224904:
    // 0x224904: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224908:
    // 0x224908: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_22490c:
    if (ctx->pc == 0x22490Cu) {
        ctx->pc = 0x224910u;
        goto label_224910;
    }
    ctx->pc = 0x224908u;
    {
        const bool branch_taken_0x224908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224908) {
            ctx->pc = 0x224930u;
            goto label_224930;
        }
    }
    ctx->pc = 0x224910u;
label_224910:
    // 0x224910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224914:
    // 0x224914: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224918:
    // 0x224918: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x224918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_22491c:
    // 0x22491c: 0xc041ba4  jal         func_106E90
label_224920:
    if (ctx->pc == 0x224920u) {
        ctx->pc = 0x224924u;
        goto label_224924;
    }
    ctx->pc = 0x22491Cu;
    SET_GPR_U32(ctx, 31, 0x224924u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x22491Cu, 0x224924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224924u;
label_224924:
    // 0x224924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224928:
    // 0x224928: 0x1000002a  b           . + 4 + (0x2A << 2)
label_22492c:
    if (ctx->pc == 0x22492Cu) {
        ctx->pc = 0x224930u;
        goto label_224930;
    }
    ctx->pc = 0x224928u;
    {
        const bool branch_taken_0x224928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224928) {
            ctx->pc = 0x2249D4u;
            goto label_2249d4;
        }
    }
    ctx->pc = 0x224930u;
label_224930:
    // 0x224930: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224934:
    // 0x224934: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224938:
    // 0x224938: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22493c:
    // 0x22493c: 0xc088700  jal         func_221C00
label_224940:
    if (ctx->pc == 0x224940u) {
        ctx->pc = 0x224944u;
        goto label_224944;
    }
    ctx->pc = 0x22493Cu;
    SET_GPR_U32(ctx, 31, 0x224944u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x22493Cu, 0x224944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224944u;
label_224944:
    // 0x224944: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_224948:
    if (ctx->pc == 0x224948u) {
        ctx->pc = 0x22494Cu;
        goto label_22494c;
    }
    ctx->pc = 0x224944u;
    {
        const bool branch_taken_0x224944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224944) {
            ctx->pc = 0x2248F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2248f8;
        }
    }
    ctx->pc = 0x22494Cu;
label_22494c:
    // 0x22494c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224950:
    // 0x224950: 0xc119b68  jal         func_466DA0
label_224954:
    if (ctx->pc == 0x224954u) {
        ctx->pc = 0x224958u;
        goto label_224958;
    }
    ctx->pc = 0x224950u;
    SET_GPR_U32(ctx, 31, 0x224958u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224950u, 0x224958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224958u;
label_224958:
    // 0x224958: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22495c:
    // 0x22495c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x22495cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224960:
    // 0x224960: 0xc0400e0  jal         func_100380
label_224964:
    if (ctx->pc == 0x224964u) {
        ctx->pc = 0x224968u;
        goto label_224968;
    }
    ctx->pc = 0x224960u;
    SET_GPR_U32(ctx, 31, 0x224968u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224960u, 0x224968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224968u;
label_224968:
    // 0x224968: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22496c:
    // 0x22496c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_224970:
    if (ctx->pc == 0x224970u) {
        ctx->pc = 0x224974u;
        goto label_224974;
    }
    ctx->pc = 0x22496Cu;
    {
        const bool branch_taken_0x22496c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22496c) {
            ctx->pc = 0x224984u;
            goto label_224984;
        }
    }
    ctx->pc = 0x224974u;
label_224974:
    // 0x224974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224978:
    // 0x224978: 0xc088ecc  jal         func_223B30
label_22497c:
    if (ctx->pc == 0x22497Cu) {
        ctx->pc = 0x224980u;
        goto label_224980;
    }
    ctx->pc = 0x224978u;
    SET_GPR_U32(ctx, 31, 0x224980u);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x224978u, 0x224980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224980u;
label_224980:
    // 0x224980: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224984:
    // 0x224984: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x224984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_224988:
    // 0x224988: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x224988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_22498c:
    // 0x22498c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x22498cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224990:
    // 0x224990: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_224994:
    // 0x224994: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x224994u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_224998:
    // 0x224998: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_22499c:
    // 0x22499c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2249a0:
    // 0x2249a0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2249a4:
    // 0x2249a4: 0xc041ba4  jal         func_106E90
label_2249a8:
    if (ctx->pc == 0x2249A8u) {
        ctx->pc = 0x2249ACu;
        goto label_2249ac;
    }
    ctx->pc = 0x2249A4u;
    SET_GPR_U32(ctx, 31, 0x2249ACu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2249A4u, 0x2249ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249ACu;
label_2249ac:
    // 0x2249ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2249acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2249b0:
    // 0x2249b0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2249b4:
    // 0x2249b4: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_2249b8:
    // 0x2249b8: 0xc088c8c  jal         func_223230
label_2249bc:
    if (ctx->pc == 0x2249BCu) {
        ctx->pc = 0x2249C0u;
        goto label_2249c0;
    }
    ctx->pc = 0x2249B8u;
    SET_GPR_U32(ctx, 31, 0x2249C0u);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x2249B8u, 0x2249C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2249C0u;
label_2249c0:
    // 0x2249c0: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_2249c4:
    // 0x2249c4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2249c8:
    // 0x2249c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2249c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2249cc:
    // 0x2249cc: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x2249ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_2249d0:
    // 0x2249d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2249d4:
    // 0x2249d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2249d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2249d8:
    // 0x2249d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2249d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2249dc:
    // 0x2249dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2249dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2249e0:
    // 0x2249e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2249e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2249e4:
    // 0x2249e4: 0x3e00008  jr          $ra
label_2249e8:
    if (ctx->pc == 0x2249E8u) {
        ctx->pc = 0x2249ECu;
        goto label_2249ec;
    }
    ctx->pc = 0x2249E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2249ECu;
label_2249ec:
    // 0x2249ec: 0x0  nop
    ctx->pc = 0x2249ecu;
    // NOP
label_2249f0:
    // 0x2249f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2249f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2249f4:
    // 0x2249f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2249f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2249f8:
    // 0x2249f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2249f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2249fc:
    // 0x2249fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2249fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224a00:
    // 0x224a00: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x224a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_224a04:
    // 0x224a04: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x224a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_224a08:
    // 0x224a08: 0xe7ac0080  swc1        $f12, 0x80($sp)
    ctx->pc = 0x224a08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_224a0c:
    // 0x224a0c: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x224a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_224a10:
    // 0x224a10: 0xc0bec3e  jal         func_2FB0F8
label_224a14:
    if (ctx->pc == 0x224A14u) {
        ctx->pc = 0x224A18u;
        goto label_224a18;
    }
    ctx->pc = 0x224A10u;
    SET_GPR_U32(ctx, 31, 0x224A18u);
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x224A10u, 0x224A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A18u;
label_224a18:
    // 0x224a18: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x224a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_224a1c:
    // 0x224a1c: 0x27859c68  addiu       $a1, $gp, -0x6398
    ctx->pc = 0x224a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941800));
label_224a20:
    // 0x224a20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x224a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224a24:
    // 0x224a24: 0xc0bc3e2  jal         func_2F0F88
label_224a28:
    if (ctx->pc == 0x224A28u) {
        ctx->pc = 0x224A2Cu;
        goto label_224a2c;
    }
    ctx->pc = 0x224A24u;
    SET_GPR_U32(ctx, 31, 0x224A2Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x224A24u, 0x224A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A2Cu;
label_224a2c:
    // 0x224a2c: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224a30:
    // 0x224a30: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_224a34:
    // 0x224a34: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224a34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224a38:
    // 0x224a38: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224a3c:
    // 0x224a3c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224a40:
    // 0x224a40: 0xc088708  jal         func_221C20
label_224a44:
    if (ctx->pc == 0x224A44u) {
        ctx->pc = 0x224A48u;
        goto label_224a48;
    }
    ctx->pc = 0x224A40u;
    SET_GPR_U32(ctx, 31, 0x224A48u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224A40u, 0x224A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A48u;
label_224a48:
    // 0x224a48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224a4c:
    // 0x224a4c: 0x10000010  b           . + 4 + (0x10 << 2)
label_224a50:
    if (ctx->pc == 0x224A50u) {
        ctx->pc = 0x224A54u;
        goto label_224a54;
    }
    ctx->pc = 0x224A4Cu;
    {
        const bool branch_taken_0x224a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a4c) {
            ctx->pc = 0x224A90u;
            goto label_224a90;
        }
    }
    ctx->pc = 0x224A54u;
label_224a54:
    // 0x224a54: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x224a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_224a58:
    // 0x224a58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224a5c:
    // 0x224a5c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224a60:
    // 0x224a60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224a64:
    // 0x224a64: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_224a68:
    if (ctx->pc == 0x224A68u) {
        ctx->pc = 0x224A6Cu;
        goto label_224a6c;
    }
    ctx->pc = 0x224A64u;
    {
        const bool branch_taken_0x224a64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224a64) {
            ctx->pc = 0x224A8Cu;
            goto label_224a8c;
        }
    }
    ctx->pc = 0x224A6Cu;
label_224a6c:
    // 0x224a6c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224a70:
    // 0x224a70: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224a74:
    // 0x224a74: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x224a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_224a78:
    // 0x224a78: 0xc041ba4  jal         func_106E90
label_224a7c:
    if (ctx->pc == 0x224A7Cu) {
        ctx->pc = 0x224A80u;
        goto label_224a80;
    }
    ctx->pc = 0x224A78u;
    SET_GPR_U32(ctx, 31, 0x224A80u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224A78u, 0x224A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224A80u;
label_224a80:
    // 0x224a80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224a84:
    // 0x224a84: 0x1000002a  b           . + 4 + (0x2A << 2)
label_224a88:
    if (ctx->pc == 0x224A88u) {
        ctx->pc = 0x224A8Cu;
        goto label_224a8c;
    }
    ctx->pc = 0x224A84u;
    {
        const bool branch_taken_0x224a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a84) {
            ctx->pc = 0x224B30u;
            goto label_224b30;
        }
    }
    ctx->pc = 0x224A8Cu;
label_224a8c:
    // 0x224a8c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224a90:
    // 0x224a90: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224a94:
    // 0x224a94: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224a98:
    // 0x224a98: 0xc088700  jal         func_221C00
label_224a9c:
    if (ctx->pc == 0x224A9Cu) {
        ctx->pc = 0x224AA0u;
        goto label_224aa0;
    }
    ctx->pc = 0x224A98u;
    SET_GPR_U32(ctx, 31, 0x224AA0u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224A98u, 0x224AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AA0u;
label_224aa0:
    // 0x224aa0: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_224aa4:
    if (ctx->pc == 0x224AA4u) {
        ctx->pc = 0x224AA8u;
        goto label_224aa8;
    }
    ctx->pc = 0x224AA0u;
    {
        const bool branch_taken_0x224aa0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224aa0) {
            ctx->pc = 0x224A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224a54;
        }
    }
    ctx->pc = 0x224AA8u;
label_224aa8:
    // 0x224aa8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224aac:
    // 0x224aac: 0xc119b68  jal         func_466DA0
label_224ab0:
    if (ctx->pc == 0x224AB0u) {
        ctx->pc = 0x224AB4u;
        goto label_224ab4;
    }
    ctx->pc = 0x224AACu;
    SET_GPR_U32(ctx, 31, 0x224AB4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224AACu, 0x224AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AB4u;
label_224ab4:
    // 0x224ab4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224ab8:
    // 0x224ab8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224abc:
    // 0x224abc: 0xc0400e0  jal         func_100380
label_224ac0:
    if (ctx->pc == 0x224AC0u) {
        ctx->pc = 0x224AC4u;
        goto label_224ac4;
    }
    ctx->pc = 0x224ABCu;
    SET_GPR_U32(ctx, 31, 0x224AC4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224ABCu, 0x224AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224AC4u;
label_224ac4:
    // 0x224ac4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224ac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224ac8:
    // 0x224ac8: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_224acc:
    if (ctx->pc == 0x224ACCu) {
        ctx->pc = 0x224AD0u;
        goto label_224ad0;
    }
    ctx->pc = 0x224AC8u;
    {
        const bool branch_taken_0x224ac8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ac8) {
            ctx->pc = 0x224AE0u;
            goto label_224ae0;
        }
    }
    ctx->pc = 0x224AD0u;
label_224ad0:
    // 0x224ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224ad4:
    // 0x224ad4: 0xc088ecc  jal         func_223B30
label_224ad8:
    if (ctx->pc == 0x224AD8u) {
        ctx->pc = 0x224ADCu;
        goto label_224adc;
    }
    ctx->pc = 0x224AD4u;
    SET_GPR_U32(ctx, 31, 0x224ADCu);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x224AD4u, 0x224ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224ADCu;
label_224adc:
    // 0x224adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224ae0:
    // 0x224ae0: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x224ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
label_224ae4:
    // 0x224ae4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x224ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_224ae8:
    // 0x224ae8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x224ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224aec:
    // 0x224aec: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_224af0:
    // 0x224af0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x224af0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_224af4:
    // 0x224af4: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x224af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_224af8:
    // 0x224af8: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224afc:
    // 0x224afc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x224afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_224b00:
    // 0x224b00: 0xc041ba4  jal         func_106E90
label_224b04:
    if (ctx->pc == 0x224B04u) {
        ctx->pc = 0x224B08u;
        goto label_224b08;
    }
    ctx->pc = 0x224B00u;
    SET_GPR_U32(ctx, 31, 0x224B08u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224B00u, 0x224B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B08u;
label_224b08:
    // 0x224b08: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224b0c:
    // 0x224b0c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224b10:
    // 0x224b10: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x224b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_224b14:
    // 0x224b14: 0xc088c8c  jal         func_223230
label_224b18:
    if (ctx->pc == 0x224B18u) {
        ctx->pc = 0x224B1Cu;
        goto label_224b1c;
    }
    ctx->pc = 0x224B14u;
    SET_GPR_U32(ctx, 31, 0x224B1Cu);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x224B14u, 0x224B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B1Cu;
label_224b1c:
    // 0x224b1c: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x224b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224b20:
    // 0x224b20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x224b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_224b24:
    // 0x224b24: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_224b28:
    // 0x224b28: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224b28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224b2c:
    // 0x224b2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224b30:
    // 0x224b30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224b34:
    // 0x224b34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224b34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224b38:
    // 0x224b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224b3c:
    // 0x224b3c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x224b3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_224b40:
    // 0x224b40: 0x3e00008  jr          $ra
label_224b44:
    if (ctx->pc == 0x224B44u) {
        ctx->pc = 0x224B48u;
        goto label_224b48;
    }
    ctx->pc = 0x224B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B48u;
label_224b48:
    // 0x224b48: 0x0  nop
    ctx->pc = 0x224b48u;
    // NOP
label_224b4c:
    // 0x224b4c: 0x0  nop
    ctx->pc = 0x224b4cu;
    // NOP
label_224b50:
    // 0x224b50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224b54:
    // 0x224b54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_224b58:
    // 0x224b58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224b5c:
    // 0x224b5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224b60:
    // 0x224b60: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x224b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_224b64:
    // 0x224b64: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x224b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_224b68:
    // 0x224b68: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x224b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_224b6c:
    // 0x224b6c: 0x8f82c034  lw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224b70:
    // 0x224b70: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x224b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_224b74:
    // 0x224b74: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224b74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224b78:
    // 0x224b78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224b7c:
    // 0x224b7c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224b80:
    // 0x224b80: 0xc088708  jal         func_221C20
label_224b84:
    if (ctx->pc == 0x224B84u) {
        ctx->pc = 0x224B88u;
        goto label_224b88;
    }
    ctx->pc = 0x224B80u;
    SET_GPR_U32(ctx, 31, 0x224B88u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224B80u, 0x224B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224B88u;
label_224b88:
    // 0x224b88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224b8c:
    // 0x224b8c: 0x10000010  b           . + 4 + (0x10 << 2)
label_224b90:
    if (ctx->pc == 0x224B90u) {
        ctx->pc = 0x224B94u;
        goto label_224b94;
    }
    ctx->pc = 0x224B8Cu;
    {
        const bool branch_taken_0x224b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224b8c) {
            ctx->pc = 0x224BD0u;
            goto label_224bd0;
        }
    }
    ctx->pc = 0x224B94u;
label_224b94:
    // 0x224b94: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x224b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224b98:
    // 0x224b98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224b9c:
    // 0x224b9c: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224ba0:
    // 0x224ba0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224ba4:
    // 0x224ba4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_224ba8:
    if (ctx->pc == 0x224BA8u) {
        ctx->pc = 0x224BACu;
        goto label_224bac;
    }
    ctx->pc = 0x224BA4u;
    {
        const bool branch_taken_0x224ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224ba4) {
            ctx->pc = 0x224BCCu;
            goto label_224bcc;
        }
    }
    ctx->pc = 0x224BACu;
label_224bac:
    // 0x224bac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224bb0:
    // 0x224bb0: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224bb4:
    // 0x224bb4: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224bb8:
    // 0x224bb8: 0xc041ba4  jal         func_106E90
label_224bbc:
    if (ctx->pc == 0x224BBCu) {
        ctx->pc = 0x224BC0u;
        goto label_224bc0;
    }
    ctx->pc = 0x224BB8u;
    SET_GPR_U32(ctx, 31, 0x224BC0u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224BB8u, 0x224BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BC0u;
label_224bc0:
    // 0x224bc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224bc4:
    // 0x224bc4: 0x1000002a  b           . + 4 + (0x2A << 2)
label_224bc8:
    if (ctx->pc == 0x224BC8u) {
        ctx->pc = 0x224BCCu;
        goto label_224bcc;
    }
    ctx->pc = 0x224BC4u;
    {
        const bool branch_taken_0x224bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224bc4) {
            ctx->pc = 0x224C70u;
            goto label_224c70;
        }
    }
    ctx->pc = 0x224BCCu;
label_224bcc:
    // 0x224bcc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224bd0:
    // 0x224bd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224bd4:
    // 0x224bd4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224bd8:
    // 0x224bd8: 0xc088700  jal         func_221C00
label_224bdc:
    if (ctx->pc == 0x224BDCu) {
        ctx->pc = 0x224BE0u;
        goto label_224be0;
    }
    ctx->pc = 0x224BD8u;
    SET_GPR_U32(ctx, 31, 0x224BE0u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224BD8u, 0x224BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BE0u;
label_224be0:
    // 0x224be0: 0x1602ffec  bne         $s0, $v0, . + 4 + (-0x14 << 2)
label_224be4:
    if (ctx->pc == 0x224BE4u) {
        ctx->pc = 0x224BE8u;
        goto label_224be8;
    }
    ctx->pc = 0x224BE0u;
    {
        const bool branch_taken_0x224be0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224be0) {
            ctx->pc = 0x224B94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224b94;
        }
    }
    ctx->pc = 0x224BE8u;
label_224be8:
    // 0x224be8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224bec:
    // 0x224bec: 0xc119b68  jal         func_466DA0
label_224bf0:
    if (ctx->pc == 0x224BF0u) {
        ctx->pc = 0x224BF4u;
        goto label_224bf4;
    }
    ctx->pc = 0x224BECu;
    SET_GPR_U32(ctx, 31, 0x224BF4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x224BECu, 0x224BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BF4u;
label_224bf4:
    // 0x224bf4: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x224bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_224bf8:
    // 0x224bf8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224bfc:
    // 0x224bfc: 0xc0400e0  jal         func_100380
label_224c00:
    if (ctx->pc == 0x224C00u) {
        ctx->pc = 0x224C04u;
        goto label_224c04;
    }
    ctx->pc = 0x224BFCu;
    SET_GPR_U32(ctx, 31, 0x224C04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x224BFCu, 0x224C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C04u;
label_224c04:
    // 0x224c04: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224c08:
    // 0x224c08: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_224c0c:
    if (ctx->pc == 0x224C0Cu) {
        ctx->pc = 0x224C10u;
        goto label_224c10;
    }
    ctx->pc = 0x224C08u;
    {
        const bool branch_taken_0x224c08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x224c08) {
            ctx->pc = 0x224C20u;
            goto label_224c20;
        }
    }
    ctx->pc = 0x224C10u;
label_224c10:
    // 0x224c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224c14:
    // 0x224c14: 0xc088ecc  jal         func_223B30
label_224c18:
    if (ctx->pc == 0x224C18u) {
        ctx->pc = 0x224C1Cu;
        goto label_224c1c;
    }
    ctx->pc = 0x224C14u;
    SET_GPR_U32(ctx, 31, 0x224C1Cu);
    ctx->pc = 0x223B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B30u, 0x224C14u, 0x224C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C1Cu;
label_224c1c:
    // 0x224c1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224c20:
    // 0x224c20: 0xafb1003c  sw          $s1, 0x3C($sp)
    ctx->pc = 0x224c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
label_224c24:
    // 0x224c24: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224c28:
    // 0x224c28: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x224c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224c2c:
    // 0x224c2c: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x224c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_224c30:
    // 0x224c30: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x224c30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
label_224c34:
    // 0x224c34: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x224c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_224c38:
    // 0x224c38: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224c3c:
    // 0x224c3c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x224c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224c40:
    // 0x224c40: 0xc041ba4  jal         func_106E90
label_224c44:
    if (ctx->pc == 0x224C44u) {
        ctx->pc = 0x224C48u;
        goto label_224c48;
    }
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x224C40u, 0x224C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C48u;
label_224c48:
    // 0x224c48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224c4c:
    // 0x224c4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224c50:
    // 0x224c50: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x224c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_224c54:
    // 0x224c54: 0xc088c8c  jal         func_223230
label_224c58:
    if (ctx->pc == 0x224C58u) {
        ctx->pc = 0x224C5Cu;
        goto label_224c5c;
    }
    ctx->pc = 0x224C54u;
    SET_GPR_U32(ctx, 31, 0x224C5Cu);
    ctx->pc = 0x223230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223230u, 0x224C54u, 0x224C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C5Cu;
label_224c5c:
    // 0x224c5c: 0x8f83c034  lw          $v1, -0x3FCC($gp)
    ctx->pc = 0x224c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950964)));
label_224c60:
    // 0x224c60: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x224c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_224c64:
    // 0x224c64: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x224c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_224c68:
    // 0x224c68: 0xaf82c034  sw          $v0, -0x3FCC($gp)
    ctx->pc = 0x224c68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950964), GPR_U32(ctx, 2));
label_224c6c:
    // 0x224c6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224c70:
    // 0x224c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224c74:
    // 0x224c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224c78:
    // 0x224c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224c7c:
    // 0x224c7c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_224c80:
    // 0x224c80: 0x3e00008  jr          $ra
label_224c84:
    if (ctx->pc == 0x224C84u) {
        ctx->pc = 0x224C88u;
        goto label_224c88;
    }
    ctx->pc = 0x224C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224C88u;
label_224c88:
    // 0x224c88: 0x0  nop
    ctx->pc = 0x224c88u;
    // NOP
label_224c8c:
    // 0x224c8c: 0x0  nop
    ctx->pc = 0x224c8cu;
    // NOP
label_224c90:
    // 0x224c90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x224c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_224c94:
    // 0x224c94: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x224c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_224c98:
    // 0x224c98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x224c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_224c9c:
    // 0x224c9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_224ca0:
    // 0x224ca0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224ca4:
    // 0x224ca4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224ca8:
    // 0x224ca8: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x224ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_224cac:
    // 0x224cac: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x224cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_224cb0:
    // 0x224cb0: 0xa3a60070  sb          $a2, 0x70($sp)
    ctx->pc = 0x224cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 112), (uint8_t)GPR_U32(ctx, 6));
label_224cb4:
    // 0x224cb4: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x224cb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_224cb8:
    // 0x224cb8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_224cbc:
    // 0x224cbc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224cc0:
    // 0x224cc0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224cc4:
    // 0x224cc4: 0xc088708  jal         func_221C20
label_224cc8:
    if (ctx->pc == 0x224CC8u) {
        ctx->pc = 0x224CCCu;
        goto label_224ccc;
    }
    ctx->pc = 0x224CC4u;
    SET_GPR_U32(ctx, 31, 0x224CCCu);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224CC4u, 0x224CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CCCu;
label_224ccc:
    // 0x224ccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224cd0:
    // 0x224cd0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_224cd4:
    if (ctx->pc == 0x224CD4u) {
        ctx->pc = 0x224CD8u;
        goto label_224cd8;
    }
    ctx->pc = 0x224CD0u;
    {
        const bool branch_taken_0x224cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224cd0) {
            ctx->pc = 0x224D3Cu;
            goto label_224d3c;
        }
    }
    ctx->pc = 0x224CD8u;
label_224cd8:
    // 0x224cd8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x224cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224cdc:
    // 0x224cdc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224ce0:
    // 0x224ce0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224ce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224ce4:
    // 0x224ce4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224ce8:
    // 0x224ce8: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_224cec:
    if (ctx->pc == 0x224CECu) {
        ctx->pc = 0x224CF0u;
        goto label_224cf0;
    }
    ctx->pc = 0x224CE8u;
    {
        const bool branch_taken_0x224ce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224ce8) {
            ctx->pc = 0x224D38u;
            goto label_224d38;
        }
    }
    ctx->pc = 0x224CF0u;
label_224cf0:
    // 0x224cf0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224cf4:
    // 0x224cf4: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224cf8:
    // 0x224cf8: 0xc041b38  jal         func_106CE0
label_224cfc:
    if (ctx->pc == 0x224CFCu) {
        ctx->pc = 0x224D00u;
        goto label_224d00;
    }
    ctx->pc = 0x224CF8u;
    SET_GPR_U32(ctx, 31, 0x224D00u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x224CF8u, 0x224D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D00u;
label_224d00:
    // 0x224d00: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x224d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_224d04:
    // 0x224d04: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x224d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_224d08:
    // 0x224d08: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x224d08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_224d0c:
    // 0x224d0c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x224d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_224d10:
    // 0x224d10: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_224d14:
    if (ctx->pc == 0x224D14u) {
        ctx->pc = 0x224D18u;
        goto label_224d18;
    }
    ctx->pc = 0x224D10u;
    {
        const bool branch_taken_0x224d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224d10) {
            ctx->pc = 0x224D28u;
            goto label_224d28;
        }
    }
    ctx->pc = 0x224D18u;
label_224d18:
    // 0x224d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224d1c:
    // 0x224d1c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_224d20:
    // 0x224d20: 0x10000002  b           . + 4 + (0x2 << 2)
label_224d24:
    if (ctx->pc == 0x224D24u) {
        ctx->pc = 0x224D28u;
        goto label_224d28;
    }
    ctx->pc = 0x224D20u;
    {
        const bool branch_taken_0x224d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d20) {
            ctx->pc = 0x224D2Cu;
            goto label_224d2c;
        }
    }
    ctx->pc = 0x224D28u;
label_224d28:
    // 0x224d28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x224d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_224d2c:
    // 0x224d2c: 0x327100ff  andi        $s1, $s3, 0xFF
    ctx->pc = 0x224d2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_224d30:
    // 0x224d30: 0x10000008  b           . + 4 + (0x8 << 2)
label_224d34:
    if (ctx->pc == 0x224D34u) {
        ctx->pc = 0x224D38u;
        goto label_224d38;
    }
    ctx->pc = 0x224D30u;
    {
        const bool branch_taken_0x224d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d30) {
            ctx->pc = 0x224D54u;
            goto label_224d54;
        }
    }
    ctx->pc = 0x224D38u;
label_224d38:
    // 0x224d38: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224d38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224d3c:
    // 0x224d3c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224d40:
    // 0x224d40: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224d44:
    // 0x224d44: 0xc088700  jal         func_221C00
label_224d48:
    if (ctx->pc == 0x224D48u) {
        ctx->pc = 0x224D4Cu;
        goto label_224d4c;
    }
    ctx->pc = 0x224D44u;
    SET_GPR_U32(ctx, 31, 0x224D4Cu);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224D44u, 0x224D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D4Cu;
label_224d4c:
    // 0x224d4c: 0x1602ffe2  bne         $s0, $v0, . + 4 + (-0x1E << 2)
label_224d50:
    if (ctx->pc == 0x224D50u) {
        ctx->pc = 0x224D54u;
        goto label_224d54;
    }
    ctx->pc = 0x224D4Cu;
    {
        const bool branch_taken_0x224d4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224d4c) {
            ctx->pc = 0x224CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224cd8;
        }
    }
    ctx->pc = 0x224D54u;
label_224d54:
    // 0x224d54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224d58:
    // 0x224d58: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x224d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224d5c:
    // 0x224d5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_224d60:
    if (ctx->pc == 0x224D60u) {
        ctx->pc = 0x224D64u;
        goto label_224d64;
    }
    ctx->pc = 0x224D5Cu;
    {
        const bool branch_taken_0x224d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d5c) {
            ctx->pc = 0x224D90u;
            goto label_224d90;
        }
    }
    ctx->pc = 0x224D64u;
label_224d64:
    // 0x224d64: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x224d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224d68:
    // 0x224d68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x224d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224d6c:
    // 0x224d6c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x224d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224d70:
    // 0x224d70: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x224d70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224d74:
    // 0x224d74: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x224d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224d78:
    // 0x224d78: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x224d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_224d7c:
    // 0x224d7c: 0x320f809  jalr        $t9
label_224d80:
    if (ctx->pc == 0x224D80u) {
        ctx->pc = 0x224D84u;
        goto label_224d84;
    }
    ctx->pc = 0x224D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224D84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D7Cu, 0x224D84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224D84u;
label_224d84:
    // 0x224d84: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x224d84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_224d88:
    // 0x224d88: 0x10000002  b           . + 4 + (0x2 << 2)
label_224d8c:
    if (ctx->pc == 0x224D8Cu) {
        ctx->pc = 0x224D90u;
        goto label_224d90;
    }
    ctx->pc = 0x224D88u;
    {
        const bool branch_taken_0x224d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224d88) {
            ctx->pc = 0x224D94u;
            goto label_224d94;
        }
    }
    ctx->pc = 0x224D90u;
label_224d90:
    // 0x224d90: 0x323200ff  andi        $s2, $s1, 0xFF
    ctx->pc = 0x224d90u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_224d94:
    // 0x224d94: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x224d94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224d98:
    // 0x224d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x224d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_224d9c:
    // 0x224d9c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x224d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_224da0:
    // 0x224da0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224da0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224da4:
    // 0x224da4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224da8:
    // 0x224da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224dac:
    // 0x224dac: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x224dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_224db0:
    // 0x224db0: 0x3e00008  jr          $ra
label_224db4:
    if (ctx->pc == 0x224DB4u) {
        ctx->pc = 0x224DB8u;
        goto label_224db8;
    }
    ctx->pc = 0x224DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224DB8u;
label_224db8:
    // 0x224db8: 0x0  nop
    ctx->pc = 0x224db8u;
    // NOP
label_224dbc:
    // 0x224dbc: 0x0  nop
    ctx->pc = 0x224dbcu;
    // NOP
label_224dc0:
    // 0x224dc0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224dc4:
    // 0x224dc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x224dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_224dc8:
    // 0x224dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x224dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_224dcc:
    // 0x224dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224dd0:
    // 0x224dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224dd4:
    // 0x224dd4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x224dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_224dd8:
    // 0x224dd8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x224dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_224ddc:
    // 0x224ddc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x224ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_224de0:
    // 0x224de0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x224de0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224de4:
    // 0x224de4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224de8:
    // 0x224de8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224dec:
    // 0x224dec: 0xc088708  jal         func_221C20
label_224df0:
    if (ctx->pc == 0x224DF0u) {
        ctx->pc = 0x224DF4u;
        goto label_224df4;
    }
    ctx->pc = 0x224DECu;
    SET_GPR_U32(ctx, 31, 0x224DF4u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224DECu, 0x224DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224DF4u;
label_224df4:
    // 0x224df4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224df8:
    // 0x224df8: 0x10000012  b           . + 4 + (0x12 << 2)
label_224dfc:
    if (ctx->pc == 0x224DFCu) {
        ctx->pc = 0x224E00u;
        goto label_224e00;
    }
    ctx->pc = 0x224DF8u;
    {
        const bool branch_taken_0x224df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224df8) {
            ctx->pc = 0x224E44u;
            goto label_224e44;
        }
    }
    ctx->pc = 0x224E00u;
label_224e00:
    // 0x224e00: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x224e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224e04:
    // 0x224e04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224e08:
    // 0x224e08: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224e0c:
    // 0x224e0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224e10:
    // 0x224e10: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_224e14:
    if (ctx->pc == 0x224E14u) {
        ctx->pc = 0x224E18u;
        goto label_224e18;
    }
    ctx->pc = 0x224E10u;
    {
        const bool branch_taken_0x224e10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e10) {
            ctx->pc = 0x224E40u;
            goto label_224e40;
        }
    }
    ctx->pc = 0x224E18u;
label_224e18:
    // 0x224e18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224e1c:
    // 0x224e1c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224e20:
    // 0x224e20: 0xc041b38  jal         func_106CE0
label_224e24:
    if (ctx->pc == 0x224E24u) {
        ctx->pc = 0x224E28u;
        goto label_224e28;
    }
    ctx->pc = 0x224E20u;
    SET_GPR_U32(ctx, 31, 0x224E28u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x224E20u, 0x224E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E28u;
label_224e28:
    // 0x224e28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224e2c:
    // 0x224e2c: 0xc0ba89e  jal         func_2EA278
label_224e30:
    if (ctx->pc == 0x224E30u) {
        ctx->pc = 0x224E34u;
        goto label_224e34;
    }
    ctx->pc = 0x224E2Cu;
    SET_GPR_U32(ctx, 31, 0x224E34u);
    ctx->pc = 0x2EA278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA278u, 0x224E2Cu, 0x224E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E34u;
label_224e34:
    // 0x224e34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224e34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224e38:
    // 0x224e38: 0x10000008  b           . + 4 + (0x8 << 2)
label_224e3c:
    if (ctx->pc == 0x224E3Cu) {
        ctx->pc = 0x224E40u;
        goto label_224e40;
    }
    ctx->pc = 0x224E38u;
    {
        const bool branch_taken_0x224e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e38) {
            ctx->pc = 0x224E5Cu;
            goto label_224e5c;
        }
    }
    ctx->pc = 0x224E40u;
label_224e40:
    // 0x224e40: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224e44:
    // 0x224e44: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224e48:
    // 0x224e48: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224e4c:
    // 0x224e4c: 0xc088700  jal         func_221C00
label_224e50:
    if (ctx->pc == 0x224E50u) {
        ctx->pc = 0x224E54u;
        goto label_224e54;
    }
    ctx->pc = 0x224E4Cu;
    SET_GPR_U32(ctx, 31, 0x224E54u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224E4Cu, 0x224E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224E54u;
label_224e54:
    // 0x224e54: 0x1602ffea  bne         $s0, $v0, . + 4 + (-0x16 << 2)
label_224e58:
    if (ctx->pc == 0x224E58u) {
        ctx->pc = 0x224E5Cu;
        goto label_224e5c;
    }
    ctx->pc = 0x224E54u;
    {
        const bool branch_taken_0x224e54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224e54) {
            ctx->pc = 0x224E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224e00;
        }
    }
    ctx->pc = 0x224E5Cu;
label_224e5c:
    // 0x224e5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224e60:
    // 0x224e60: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x224e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224e64:
    // 0x224e64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_224e68:
    if (ctx->pc == 0x224E68u) {
        ctx->pc = 0x224E6Cu;
        goto label_224e6c;
    }
    ctx->pc = 0x224E64u;
    {
        const bool branch_taken_0x224e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e64) {
            ctx->pc = 0x224E98u;
            goto label_224e98;
        }
    }
    ctx->pc = 0x224E6Cu;
label_224e6c:
    // 0x224e6c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224e70:
    // 0x224e70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x224e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224e74:
    // 0x224e74: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x224e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224e78:
    // 0x224e78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x224e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224e7c:
    // 0x224e7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x224e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224e80:
    // 0x224e80: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x224e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_224e84:
    // 0x224e84: 0x320f809  jalr        $t9
label_224e88:
    if (ctx->pc == 0x224E88u) {
        ctx->pc = 0x224E8Cu;
        goto label_224e8c;
    }
    ctx->pc = 0x224E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224E8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224E84u, 0x224E8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224E8Cu;
label_224e8c:
    // 0x224e8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x224e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224e90:
    // 0x224e90: 0x10000002  b           . + 4 + (0x2 << 2)
label_224e94:
    if (ctx->pc == 0x224E94u) {
        ctx->pc = 0x224E98u;
        goto label_224e98;
    }
    ctx->pc = 0x224E90u;
    {
        const bool branch_taken_0x224e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224e90) {
            ctx->pc = 0x224E9Cu;
            goto label_224e9c;
        }
    }
    ctx->pc = 0x224E98u;
label_224e98:
    // 0x224e98: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x224e98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224e9c:
    // 0x224e9c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x224e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_224ea0:
    // 0x224ea0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x224ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_224ea4:
    // 0x224ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x224ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_224ea8:
    // 0x224ea8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224ea8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224eac:
    // 0x224eac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224eb0:
    // 0x224eb0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x224eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_224eb4:
    // 0x224eb4: 0x3e00008  jr          $ra
label_224eb8:
    if (ctx->pc == 0x224EB8u) {
        ctx->pc = 0x224EBCu;
        goto label_224ebc;
    }
    ctx->pc = 0x224EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224EBCu;
label_224ebc:
    // 0x224ebc: 0x0  nop
    ctx->pc = 0x224ebcu;
    // NOP
label_224ec0:
    // 0x224ec0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x224ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_224ec4:
    // 0x224ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x224ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_224ec8:
    // 0x224ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x224ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_224ecc:
    // 0x224ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224ed0:
    // 0x224ed0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x224ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_224ed4:
    // 0x224ed4: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x224ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_224ed8:
    // 0x224ed8: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x224ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_224edc:
    // 0x224edc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x224edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_224ee0:
    // 0x224ee0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x224ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_224ee4:
    // 0x224ee4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224ee8:
    // 0x224ee8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224eec:
    // 0x224eec: 0xc088708  jal         func_221C20
label_224ef0:
    if (ctx->pc == 0x224EF0u) {
        ctx->pc = 0x224EF4u;
        goto label_224ef4;
    }
    ctx->pc = 0x224EECu;
    SET_GPR_U32(ctx, 31, 0x224EF4u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224EECu, 0x224EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224EF4u;
label_224ef4:
    // 0x224ef4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224ef8:
    // 0x224ef8: 0x10000013  b           . + 4 + (0x13 << 2)
label_224efc:
    if (ctx->pc == 0x224EFCu) {
        ctx->pc = 0x224F00u;
        goto label_224f00;
    }
    ctx->pc = 0x224EF8u;
    {
        const bool branch_taken_0x224ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ef8) {
            ctx->pc = 0x224F48u;
            goto label_224f48;
        }
    }
    ctx->pc = 0x224F00u;
label_224f00:
    // 0x224f00: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x224f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224f04:
    // 0x224f04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224f08:
    // 0x224f08: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x224f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_224f0c:
    // 0x224f0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x224f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_224f10:
    // 0x224f10: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_224f14:
    if (ctx->pc == 0x224F14u) {
        ctx->pc = 0x224F18u;
        goto label_224f18;
    }
    ctx->pc = 0x224F10u;
    {
        const bool branch_taken_0x224f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x224f10) {
            ctx->pc = 0x224F44u;
            goto label_224f44;
        }
    }
    ctx->pc = 0x224F18u;
label_224f18:
    // 0x224f18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_224f1c:
    // 0x224f1c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x224f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_224f20:
    // 0x224f20: 0xc041b38  jal         func_106CE0
label_224f24:
    if (ctx->pc == 0x224F24u) {
        ctx->pc = 0x224F28u;
        goto label_224f28;
    }
    ctx->pc = 0x224F20u;
    SET_GPR_U32(ctx, 31, 0x224F28u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x224F20u, 0x224F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F28u;
label_224f28:
    // 0x224f28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224f2c:
    // 0x224f2c: 0x27859c60  addiu       $a1, $gp, -0x63A0
    ctx->pc = 0x224f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941792));
label_224f30:
    // 0x224f30: 0x27a6003c  addiu       $a2, $sp, 0x3C
    ctx->pc = 0x224f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_224f34:
    // 0x224f34: 0xc0bc408  jal         func_2F1020
label_224f38:
    if (ctx->pc == 0x224F38u) {
        ctx->pc = 0x224F3Cu;
        goto label_224f3c;
    }
    ctx->pc = 0x224F34u;
    SET_GPR_U32(ctx, 31, 0x224F3Cu);
    ctx->pc = 0x2F1020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1020u, 0x224F34u, 0x224F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F3Cu;
label_224f3c:
    // 0x224f3c: 0x10000008  b           . + 4 + (0x8 << 2)
label_224f40:
    if (ctx->pc == 0x224F40u) {
        ctx->pc = 0x224F44u;
        goto label_224f44;
    }
    ctx->pc = 0x224F3Cu;
    {
        const bool branch_taken_0x224f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f3c) {
            ctx->pc = 0x224F60u;
            goto label_224f60;
        }
    }
    ctx->pc = 0x224F44u;
label_224f44:
    // 0x224f44: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x224f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_224f48:
    // 0x224f48: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224f4c:
    // 0x224f4c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224f50:
    // 0x224f50: 0xc088700  jal         func_221C00
label_224f54:
    if (ctx->pc == 0x224F54u) {
        ctx->pc = 0x224F58u;
        goto label_224f58;
    }
    ctx->pc = 0x224F50u;
    SET_GPR_U32(ctx, 31, 0x224F58u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x224F50u, 0x224F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224F58u;
label_224f58:
    // 0x224f58: 0x1602ffe9  bne         $s0, $v0, . + 4 + (-0x17 << 2)
label_224f5c:
    if (ctx->pc == 0x224F5Cu) {
        ctx->pc = 0x224F60u;
        goto label_224f60;
    }
    ctx->pc = 0x224F58u;
    {
        const bool branch_taken_0x224f58 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x224f58) {
            ctx->pc = 0x224F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224f00;
        }
    }
    ctx->pc = 0x224F60u;
label_224f60:
    // 0x224f60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224f64:
    // 0x224f64: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x224f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224f68:
    // 0x224f68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_224f6c:
    if (ctx->pc == 0x224F6Cu) {
        ctx->pc = 0x224F70u;
        goto label_224f70;
    }
    ctx->pc = 0x224F68u;
    {
        const bool branch_taken_0x224f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f68) {
            ctx->pc = 0x224F9Cu;
            goto label_224f9c;
        }
    }
    ctx->pc = 0x224F70u;
label_224f70:
    // 0x224f70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x224f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_224f74:
    // 0x224f74: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x224f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_224f78:
    // 0x224f78: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x224f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_224f7c:
    // 0x224f7c: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x224f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_224f80:
    // 0x224f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x224f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224f84:
    // 0x224f84: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x224f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_224f88:
    // 0x224f88: 0x320f809  jalr        $t9
label_224f8c:
    if (ctx->pc == 0x224F8Cu) {
        ctx->pc = 0x224F90u;
        goto label_224f90;
    }
    ctx->pc = 0x224F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x224F90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224F88u, 0x224F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x224F90u;
label_224f90:
    // 0x224f90: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x224f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224f94:
    // 0x224f94: 0x10000002  b           . + 4 + (0x2 << 2)
label_224f98:
    if (ctx->pc == 0x224F98u) {
        ctx->pc = 0x224F9Cu;
        goto label_224f9c;
    }
    ctx->pc = 0x224F94u;
    {
        const bool branch_taken_0x224f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224f94) {
            ctx->pc = 0x224FA0u;
            goto label_224fa0;
        }
    }
    ctx->pc = 0x224F9Cu;
label_224f9c:
    // 0x224f9c: 0x8fb1003c  lw          $s1, 0x3C($sp)
    ctx->pc = 0x224f9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_224fa0:
    // 0x224fa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x224fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_224fa4:
    // 0x224fa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224fa8:
    // 0x224fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224fac:
    // 0x224fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224fb0:
    // 0x224fb0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x224fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_224fb4:
    // 0x224fb4: 0x3e00008  jr          $ra
label_224fb8:
    if (ctx->pc == 0x224FB8u) {
        ctx->pc = 0x224FBCu;
        goto label_224fbc;
    }
    ctx->pc = 0x224FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224FB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224FBCu;
label_224fbc:
    // 0x224fbc: 0x0  nop
    ctx->pc = 0x224fbcu;
    // NOP
label_224fc0:
    // 0x224fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x224fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_224fc4:
    // 0x224fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224fc8:
    // 0x224fc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x224fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224fcc:
    // 0x224fcc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x224fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_224fd0:
    // 0x224fd0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x224fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_224fd4:
    // 0x224fd4: 0xe7ac0050  swc1        $f12, 0x50($sp)
    ctx->pc = 0x224fd4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_224fd8:
    // 0x224fd8: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x224fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_224fdc:
    // 0x224fdc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x224fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_224fe0:
    // 0x224fe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x224fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_224fe4:
    // 0x224fe4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x224fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_224fe8:
    // 0x224fe8: 0xc088708  jal         func_221C20
label_224fec:
    if (ctx->pc == 0x224FECu) {
        ctx->pc = 0x224FF0u;
        goto label_224ff0;
    }
    ctx->pc = 0x224FE8u;
    SET_GPR_U32(ctx, 31, 0x224FF0u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x224FE8u, 0x224FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224FF0u;
label_224ff0:
    // 0x224ff0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x224ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_224ff4:
    // 0x224ff4: 0x10000015  b           . + 4 + (0x15 << 2)
label_224ff8:
    if (ctx->pc == 0x224FF8u) {
        ctx->pc = 0x224FFCu;
        goto label_224ffc;
    }
    ctx->pc = 0x224FF4u;
    {
        const bool branch_taken_0x224ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x224ff4) {
            ctx->pc = 0x22504Cu;
            goto label_22504c;
        }
    }
    ctx->pc = 0x224FFCu;
label_224ffc:
    // 0x224ffc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x224ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225000:
    // 0x225000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225004:
    // 0x225004: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x225004u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_225008:
    // 0x225008: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x225008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_22500c:
    // 0x22500c: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_225010:
    if (ctx->pc == 0x225010u) {
        ctx->pc = 0x225014u;
        goto label_225014;
    }
    ctx->pc = 0x22500Cu;
    {
        const bool branch_taken_0x22500c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22500c) {
            ctx->pc = 0x225048u;
            goto label_225048;
        }
    }
    ctx->pc = 0x225014u;
label_225014:
    // 0x225014: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225018:
    // 0x225018: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x225018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_22501c:
    // 0x22501c: 0xc041b38  jal         func_106CE0
label_225020:
    if (ctx->pc == 0x225020u) {
        ctx->pc = 0x225024u;
        goto label_225024;
    }
    ctx->pc = 0x22501Cu;
    SET_GPR_U32(ctx, 31, 0x225024u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x22501Cu, 0x225024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225024u;
label_225024:
    // 0x225024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225028:
    // 0x225028: 0xc0ba898  jal         func_2EA260
label_22502c:
    if (ctx->pc == 0x22502Cu) {
        ctx->pc = 0x225030u;
        goto label_225030;
    }
    ctx->pc = 0x225028u;
    SET_GPR_U32(ctx, 31, 0x225030u);
    ctx->pc = 0x2EA260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA260u, 0x225028u, 0x225030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225030u;
label_225030:
    // 0x225030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x225030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225034:
    // 0x225034: 0xc0bef4c  jal         func_2FBD30
label_225038:
    if (ctx->pc == 0x225038u) {
        ctx->pc = 0x22503Cu;
        goto label_22503c;
    }
    ctx->pc = 0x225034u;
    SET_GPR_U32(ctx, 31, 0x22503Cu);
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x225034u, 0x22503Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22503Cu;
label_22503c:
    // 0x22503c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x22503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_225040:
    // 0x225040: 0x10000008  b           . + 4 + (0x8 << 2)
label_225044:
    if (ctx->pc == 0x225044u) {
        ctx->pc = 0x225048u;
        goto label_225048;
    }
    ctx->pc = 0x225040u;
    {
        const bool branch_taken_0x225040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225040) {
            ctx->pc = 0x225064u;
            goto label_225064;
        }
    }
    ctx->pc = 0x225048u;
label_225048:
    // 0x225048: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x225048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_22504c:
    // 0x22504c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x22504cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_225050:
    // 0x225050: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x225050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_225054:
    // 0x225054: 0xc088700  jal         func_221C00
label_225058:
    if (ctx->pc == 0x225058u) {
        ctx->pc = 0x22505Cu;
        goto label_22505c;
    }
    ctx->pc = 0x225054u;
    SET_GPR_U32(ctx, 31, 0x22505Cu);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x225054u, 0x22505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22505Cu;
label_22505c:
    // 0x22505c: 0x1602ffe7  bne         $s0, $v0, . + 4 + (-0x19 << 2)
label_225060:
    if (ctx->pc == 0x225060u) {
        ctx->pc = 0x225064u;
        goto label_225064;
    }
    ctx->pc = 0x22505Cu;
    {
        const bool branch_taken_0x22505c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x22505c) {
            ctx->pc = 0x224FFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ffc;
        }
    }
    ctx->pc = 0x225064u;
label_225064:
    // 0x225064: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_225068:
    // 0x225068: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x225068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22506c:
    // 0x22506c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_225070:
    if (ctx->pc == 0x225070u) {
        ctx->pc = 0x225074u;
        goto label_225074;
    }
    ctx->pc = 0x22506Cu;
    {
        const bool branch_taken_0x22506c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22506c) {
            ctx->pc = 0x2250A0u;
            goto label_2250a0;
        }
    }
    ctx->pc = 0x225074u;
label_225074:
    // 0x225074: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x225074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_225078:
    // 0x225078: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x225078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22507c:
    // 0x22507c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x22507cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225080:
    // 0x225080: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x225080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_225084:
    // 0x225084: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225088:
    // 0x225088: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x225088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_22508c:
    // 0x22508c: 0x320f809  jalr        $t9
label_225090:
    if (ctx->pc == 0x225090u) {
        ctx->pc = 0x225094u;
        goto label_225094;
    }
    ctx->pc = 0x22508Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225094u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22508Cu, 0x225094u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225094u;
label_225094:
    // 0x225094: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x225094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_225098:
    // 0x225098: 0x10000003  b           . + 4 + (0x3 << 2)
label_22509c:
    if (ctx->pc == 0x22509Cu) {
        ctx->pc = 0x2250A0u;
        goto label_2250a0;
    }
    ctx->pc = 0x225098u;
    {
        const bool branch_taken_0x225098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225098) {
            ctx->pc = 0x2250A8u;
            goto label_2250a8;
        }
    }
    ctx->pc = 0x2250A0u;
label_2250a0:
    // 0x2250a0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x2250a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2250a4:
    // 0x2250a4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2250a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2250a8:
    // 0x2250a8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2250a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2250ac:
    // 0x2250ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2250acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2250b0:
    // 0x2250b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2250b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2250b4:
    // 0x2250b4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2250b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2250b8:
    // 0x2250b8: 0x3e00008  jr          $ra
label_2250bc:
    if (ctx->pc == 0x2250BCu) {
        ctx->pc = 0x2250C0u;
        goto label_2250c0;
    }
    ctx->pc = 0x2250B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2250B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2250C0u;
label_2250c0:
    // 0x2250c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2250c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2250c4:
    // 0x2250c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2250c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2250c8:
    // 0x2250c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2250c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2250cc:
    // 0x2250cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2250ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2250d0:
    // 0x2250d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2250d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2250d4:
    // 0x2250d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2250d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2250d8:
    // 0x2250d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x2250d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_2250dc:
    // 0x2250dc: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x2250dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
label_2250e0:
    // 0x2250e0: 0x8fb10060  lw          $s1, 0x60($sp)
    ctx->pc = 0x2250e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2250e4:
    // 0x2250e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2250e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2250e8:
    // 0x2250e8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2250e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2250ec:
    // 0x2250ec: 0xc088708  jal         func_221C20
label_2250f0:
    if (ctx->pc == 0x2250F0u) {
        ctx->pc = 0x2250F4u;
        goto label_2250f4;
    }
    ctx->pc = 0x2250ECu;
    SET_GPR_U32(ctx, 31, 0x2250F4u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2250ECu, 0x2250F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2250F4u;
label_2250f4:
    // 0x2250f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2250f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2250f8:
    // 0x2250f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2250fc:
    if (ctx->pc == 0x2250FCu) {
        ctx->pc = 0x225100u;
        goto label_225100;
    }
    ctx->pc = 0x2250F8u;
    {
        const bool branch_taken_0x2250f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2250f8) {
            ctx->pc = 0x225138u;
            goto label_225138;
        }
    }
    ctx->pc = 0x225100u;
label_225100:
    // 0x225100: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x225100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_225104:
    // 0x225104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225108:
    // 0x225108: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x225108u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22510c:
    // 0x22510c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22510cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_225110:
    // 0x225110: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_225114:
    if (ctx->pc == 0x225114u) {
        ctx->pc = 0x225118u;
        goto label_225118;
    }
    ctx->pc = 0x225110u;
    {
        const bool branch_taken_0x225110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225110) {
            ctx->pc = 0x225134u;
            goto label_225134;
        }
    }
    ctx->pc = 0x225118u;
label_225118:
    // 0x225118: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22511c:
    // 0x22511c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x22511cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_225120:
    // 0x225120: 0xc041b38  jal         func_106CE0
label_225124:
    if (ctx->pc == 0x225124u) {
        ctx->pc = 0x225128u;
        goto label_225128;
    }
    ctx->pc = 0x225120u;
    SET_GPR_U32(ctx, 31, 0x225128u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x225120u, 0x225128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225128u;
label_225128:
    // 0x225128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x225128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22512c:
    // 0x22512c: 0x10000008  b           . + 4 + (0x8 << 2)
label_225130:
    if (ctx->pc == 0x225130u) {
        ctx->pc = 0x225134u;
        goto label_225134;
    }
    ctx->pc = 0x22512Cu;
    {
        const bool branch_taken_0x22512c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22512c) {
            ctx->pc = 0x225150u;
            goto label_225150;
        }
    }
    ctx->pc = 0x225134u;
label_225134:
    // 0x225134: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x225134u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_225138:
    // 0x225138: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_22513c:
    // 0x22513c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22513cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_225140:
    // 0x225140: 0xc088700  jal         func_221C00
label_225144:
    if (ctx->pc == 0x225144u) {
        ctx->pc = 0x225148u;
        goto label_225148;
    }
    ctx->pc = 0x225140u;
    SET_GPR_U32(ctx, 31, 0x225148u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x225140u, 0x225148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225148u;
label_225148:
    // 0x225148: 0x1602ffed  bne         $s0, $v0, . + 4 + (-0x13 << 2)
label_22514c:
    if (ctx->pc == 0x22514Cu) {
        ctx->pc = 0x225150u;
        goto label_225150;
    }
    ctx->pc = 0x225148u;
    {
        const bool branch_taken_0x225148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x225148) {
            ctx->pc = 0x225100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225100;
        }
    }
    ctx->pc = 0x225150u;
label_225150:
    // 0x225150: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225154:
    // 0x225154: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x225154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_225158:
    // 0x225158: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_22515c:
    if (ctx->pc == 0x22515Cu) {
        ctx->pc = 0x225160u;
        goto label_225160;
    }
    ctx->pc = 0x225158u;
    {
        const bool branch_taken_0x225158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x225158) {
            ctx->pc = 0x22518Cu;
            goto label_22518c;
        }
    }
    ctx->pc = 0x225160u;
label_225160:
    // 0x225160: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225164:
    // 0x225164: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x225164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_225168:
    // 0x225168: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x225168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_22516c:
    // 0x22516c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22516cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225170:
    // 0x225170: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225174:
    // 0x225174: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x225174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_225178:
    // 0x225178: 0x320f809  jalr        $t9
label_22517c:
    if (ctx->pc == 0x22517Cu) {
        ctx->pc = 0x225180u;
        goto label_225180;
    }
    ctx->pc = 0x225178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225180u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225178u, 0x225180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225180u;
label_225180:
    // 0x225180: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x225180u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225184:
    // 0x225184: 0x10000002  b           . + 4 + (0x2 << 2)
label_225188:
    if (ctx->pc == 0x225188u) {
        ctx->pc = 0x22518Cu;
        goto label_22518c;
    }
    ctx->pc = 0x225184u;
    {
        const bool branch_taken_0x225184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225184) {
            ctx->pc = 0x225190u;
            goto label_225190;
        }
    }
    ctx->pc = 0x22518Cu;
label_22518c:
    // 0x22518c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x22518cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_225190:
    // 0x225190: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x225190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_225194:
    // 0x225194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x225194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_225198:
    // 0x225198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x225198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22519c:
    // 0x22519c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22519cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2251a0:
    // 0x2251a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2251a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2251a4:
    // 0x2251a4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2251a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_2251a8:
    // 0x2251a8: 0x3e00008  jr          $ra
label_2251ac:
    if (ctx->pc == 0x2251ACu) {
        ctx->pc = 0x2251B0u;
        goto label_2251b0;
    }
    ctx->pc = 0x2251A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2251A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2251B0u;
label_2251b0:
    // 0x2251b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2251b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2251b4:
    // 0x2251b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2251b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2251b8:
    // 0x2251b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2251b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2251bc:
    // 0x2251bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2251bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_2251c0:
    // 0x2251c0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2251c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2251c4:
    // 0x2251c4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2251c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2251c8:
    // 0x2251c8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2251c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2251cc:
    // 0x2251cc: 0xc088708  jal         func_221C20
label_2251d0:
    if (ctx->pc == 0x2251D0u) {
        ctx->pc = 0x2251D4u;
        goto label_2251d4;
    }
    ctx->pc = 0x2251CCu;
    SET_GPR_U32(ctx, 31, 0x2251D4u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x2251CCu, 0x2251D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2251D4u;
label_2251d4:
    // 0x2251d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2251d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2251d8:
    // 0x2251d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2251dc:
    if (ctx->pc == 0x2251DCu) {
        ctx->pc = 0x2251E0u;
        goto label_2251e0;
    }
    ctx->pc = 0x2251D8u;
    {
        const bool branch_taken_0x2251d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251d8) {
            ctx->pc = 0x225208u;
            goto label_225208;
        }
    }
    ctx->pc = 0x2251E0u;
label_2251e0:
    // 0x2251e0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2251e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2251e4:
    // 0x2251e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2251e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2251e8:
    // 0x2251e8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2251e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2251ec:
    // 0x2251ec: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2251ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2251f0:
    // 0x2251f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2251f4:
    if (ctx->pc == 0x2251F4u) {
        ctx->pc = 0x2251F8u;
        goto label_2251f8;
    }
    ctx->pc = 0x2251F0u;
    {
        const bool branch_taken_0x2251f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2251f0) {
            ctx->pc = 0x225204u;
            goto label_225204;
        }
    }
    ctx->pc = 0x2251F8u;
label_2251f8:
    // 0x2251f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2251f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2251fc:
    // 0x2251fc: 0x10000009  b           . + 4 + (0x9 << 2)
label_225200:
    if (ctx->pc == 0x225200u) {
        ctx->pc = 0x225204u;
        goto label_225204;
    }
    ctx->pc = 0x2251FCu;
    {
        const bool branch_taken_0x2251fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2251fc) {
            ctx->pc = 0x225224u;
            goto label_225224;
        }
    }
    ctx->pc = 0x225204u;
label_225204:
    // 0x225204: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x225204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_225208:
    // 0x225208: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_22520c:
    // 0x22520c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x22520cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_225210:
    // 0x225210: 0xc088700  jal         func_221C00
label_225214:
    if (ctx->pc == 0x225214u) {
        ctx->pc = 0x225218u;
        goto label_225218;
    }
    ctx->pc = 0x225210u;
    SET_GPR_U32(ctx, 31, 0x225218u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x225210u, 0x225218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225218u;
label_225218:
    // 0x225218: 0x1602fff1  bne         $s0, $v0, . + 4 + (-0xF << 2)
label_22521c:
    if (ctx->pc == 0x22521Cu) {
        ctx->pc = 0x225220u;
        goto label_225220;
    }
    ctx->pc = 0x225218u;
    {
        const bool branch_taken_0x225218 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x225218) {
            ctx->pc = 0x2251E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2251e0;
        }
    }
    ctx->pc = 0x225220u;
label_225220:
    // 0x225220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x225220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_225224:
    // 0x225224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_225228:
    // 0x225228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x225228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_22522c:
    // 0x22522c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x22522cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_225230:
    // 0x225230: 0x3e00008  jr          $ra
label_225234:
    if (ctx->pc == 0x225234u) {
        ctx->pc = 0x225238u;
        goto label_225238;
    }
    ctx->pc = 0x225230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225238u;
label_225238:
    // 0x225238: 0x0  nop
    ctx->pc = 0x225238u;
    // NOP
label_22523c:
    // 0x22523c: 0x0  nop
    ctx->pc = 0x22523cu;
    // NOP
label_225240:
    // 0x225240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x225240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_225244:
    // 0x225244: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_225248:
    // 0x225248: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x225248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_22524c:
    // 0x22524c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22524cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_225250:
    // 0x225250: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x225250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_225254:
    // 0x225254: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x225254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_225258:
    // 0x225258: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x225258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_22525c:
    // 0x22525c: 0xc088708  jal         func_221C20
label_225260:
    if (ctx->pc == 0x225260u) {
        ctx->pc = 0x225264u;
        goto label_225264;
    }
    ctx->pc = 0x22525Cu;
    SET_GPR_U32(ctx, 31, 0x225264u);
    ctx->pc = 0x221C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C20u, 0x22525Cu, 0x225264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225264u;
label_225264:
    // 0x225264: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x225264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225268:
    // 0x225268: 0x10000019  b           . + 4 + (0x19 << 2)
label_22526c:
    if (ctx->pc == 0x22526Cu) {
        ctx->pc = 0x225270u;
        goto label_225270;
    }
    ctx->pc = 0x225268u;
    {
        const bool branch_taken_0x225268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225268) {
            ctx->pc = 0x2252D0u;
            goto label_2252d0;
        }
    }
    ctx->pc = 0x225270u;
label_225270:
    // 0x225270: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x225270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_225274:
    // 0x225274: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225278:
    // 0x225278: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x225278u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_22527c:
    // 0x22527c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x22527cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_225280:
    // 0x225280: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_225284:
    if (ctx->pc == 0x225284u) {
        ctx->pc = 0x225288u;
        goto label_225288;
    }
    ctx->pc = 0x225280u;
    {
        const bool branch_taken_0x225280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225280) {
            ctx->pc = 0x2252CCu;
            goto label_2252cc;
        }
    }
    ctx->pc = 0x225288u;
label_225288:
    // 0x225288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22528c:
    // 0x22528c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_225290:
    if (ctx->pc == 0x225290u) {
        ctx->pc = 0x225294u;
        goto label_225294;
    }
    ctx->pc = 0x22528Cu;
    {
        const bool branch_taken_0x22528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22528c) {
            ctx->pc = 0x2252B0u;
            goto label_2252b0;
        }
    }
    ctx->pc = 0x225294u;
label_225294:
    // 0x225294: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x225294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_225298:
    // 0x225298: 0xc088840  jal         func_222100
label_22529c:
    if (ctx->pc == 0x22529Cu) {
        ctx->pc = 0x2252A0u;
        goto label_2252a0;
    }
    ctx->pc = 0x225298u;
    SET_GPR_U32(ctx, 31, 0x2252A0u);
    ctx->pc = 0x222100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222100u, 0x225298u, 0x2252A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252A0u;
label_2252a0:
    // 0x2252a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2252a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2252a4:
    // 0x2252a4: 0xc119c5c  jal         func_467170
label_2252a8:
    if (ctx->pc == 0x2252A8u) {
        ctx->pc = 0x2252ACu;
        goto label_2252ac;
    }
    ctx->pc = 0x2252A4u;
    SET_GPR_U32(ctx, 31, 0x2252ACu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x2252A4u, 0x2252ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252ACu;
label_2252ac:
    // 0x2252ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2252acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2252b0:
    // 0x2252b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2252b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2252b4:
    // 0x2252b4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2252b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2252b8:
    // 0x2252b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2252b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2252bc:
    // 0x2252bc: 0xc088d74  jal         func_2235D0
label_2252c0:
    if (ctx->pc == 0x2252C0u) {
        ctx->pc = 0x2252C4u;
        goto label_2252c4;
    }
    ctx->pc = 0x2252BCu;
    SET_GPR_U32(ctx, 31, 0x2252C4u);
    ctx->pc = 0x2235D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235D0u, 0x2252BCu, 0x2252C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252C4u;
label_2252c4:
    // 0x2252c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2252c8:
    if (ctx->pc == 0x2252C8u) {
        ctx->pc = 0x2252CCu;
        goto label_2252cc;
    }
    ctx->pc = 0x2252C4u;
    {
        const bool branch_taken_0x2252c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2252c4) {
            ctx->pc = 0x2252E8u;
            goto label_2252e8;
        }
    }
    ctx->pc = 0x2252CCu;
label_2252cc:
    // 0x2252cc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2252ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2252d0:
    // 0x2252d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2252d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2252d4:
    // 0x2252d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2252d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2252d8:
    // 0x2252d8: 0xc088700  jal         func_221C00
label_2252dc:
    if (ctx->pc == 0x2252DCu) {
        ctx->pc = 0x2252E0u;
        goto label_2252e0;
    }
    ctx->pc = 0x2252D8u;
    SET_GPR_U32(ctx, 31, 0x2252E0u);
    ctx->pc = 0x221C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221C00u, 0x2252D8u, 0x2252E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2252E0u;
label_2252e0:
    // 0x2252e0: 0x1602ffe3  bne         $s0, $v0, . + 4 + (-0x1D << 2)
label_2252e4:
    if (ctx->pc == 0x2252E4u) {
        ctx->pc = 0x2252E8u;
        goto label_2252e8;
    }
    ctx->pc = 0x2252E0u;
    {
        const bool branch_taken_0x2252e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2252e0) {
            ctx->pc = 0x225270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225270;
        }
    }
    ctx->pc = 0x2252E8u;
label_2252e8:
    // 0x2252e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2252e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2252ec:
    // 0x2252ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2252ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2252f0:
    // 0x2252f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2252f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2252f4:
    // 0x2252f4: 0x3e00008  jr          $ra
label_2252f8:
    if (ctx->pc == 0x2252F8u) {
        ctx->pc = 0x2252FCu;
        goto label_2252fc;
    }
    ctx->pc = 0x2252F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2252F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2252FCu;
label_2252fc:
    // 0x2252fc: 0x0  nop
    ctx->pc = 0x2252fcu;
    // NOP
    ctx->pc = 0x225300u;
}
