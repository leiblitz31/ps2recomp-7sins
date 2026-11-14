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

// Function: sub_00248560
// Address: 0x248560 - 0x248df0
void sub_00248560_0x248560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248560_0x248560");
#endif

    switch (ctx->pc) {
        case 0x248560u: goto label_248560;
        case 0x248564u: goto label_248564;
        case 0x248568u: goto label_248568;
        case 0x24856cu: goto label_24856c;
        case 0x248570u: goto label_248570;
        case 0x248574u: goto label_248574;
        case 0x248578u: goto label_248578;
        case 0x24857cu: goto label_24857c;
        case 0x248580u: goto label_248580;
        case 0x248584u: goto label_248584;
        case 0x248588u: goto label_248588;
        case 0x24858cu: goto label_24858c;
        case 0x248590u: goto label_248590;
        case 0x248594u: goto label_248594;
        case 0x248598u: goto label_248598;
        case 0x24859cu: goto label_24859c;
        case 0x2485a0u: goto label_2485a0;
        case 0x2485a4u: goto label_2485a4;
        case 0x2485a8u: goto label_2485a8;
        case 0x2485acu: goto label_2485ac;
        case 0x2485b0u: goto label_2485b0;
        case 0x2485b4u: goto label_2485b4;
        case 0x2485b8u: goto label_2485b8;
        case 0x2485bcu: goto label_2485bc;
        case 0x2485c0u: goto label_2485c0;
        case 0x2485c4u: goto label_2485c4;
        case 0x2485c8u: goto label_2485c8;
        case 0x2485ccu: goto label_2485cc;
        case 0x2485d0u: goto label_2485d0;
        case 0x2485d4u: goto label_2485d4;
        case 0x2485d8u: goto label_2485d8;
        case 0x2485dcu: goto label_2485dc;
        case 0x2485e0u: goto label_2485e0;
        case 0x2485e4u: goto label_2485e4;
        case 0x2485e8u: goto label_2485e8;
        case 0x2485ecu: goto label_2485ec;
        case 0x2485f0u: goto label_2485f0;
        case 0x2485f4u: goto label_2485f4;
        case 0x2485f8u: goto label_2485f8;
        case 0x2485fcu: goto label_2485fc;
        case 0x248600u: goto label_248600;
        case 0x248604u: goto label_248604;
        case 0x248608u: goto label_248608;
        case 0x24860cu: goto label_24860c;
        case 0x248610u: goto label_248610;
        case 0x248614u: goto label_248614;
        case 0x248618u: goto label_248618;
        case 0x24861cu: goto label_24861c;
        case 0x248620u: goto label_248620;
        case 0x248624u: goto label_248624;
        case 0x248628u: goto label_248628;
        case 0x24862cu: goto label_24862c;
        case 0x248630u: goto label_248630;
        case 0x248634u: goto label_248634;
        case 0x248638u: goto label_248638;
        case 0x24863cu: goto label_24863c;
        case 0x248640u: goto label_248640;
        case 0x248644u: goto label_248644;
        case 0x248648u: goto label_248648;
        case 0x24864cu: goto label_24864c;
        case 0x248650u: goto label_248650;
        case 0x248654u: goto label_248654;
        case 0x248658u: goto label_248658;
        case 0x24865cu: goto label_24865c;
        case 0x248660u: goto label_248660;
        case 0x248664u: goto label_248664;
        case 0x248668u: goto label_248668;
        case 0x24866cu: goto label_24866c;
        case 0x248670u: goto label_248670;
        case 0x248674u: goto label_248674;
        case 0x248678u: goto label_248678;
        case 0x24867cu: goto label_24867c;
        case 0x248680u: goto label_248680;
        case 0x248684u: goto label_248684;
        case 0x248688u: goto label_248688;
        case 0x24868cu: goto label_24868c;
        case 0x248690u: goto label_248690;
        case 0x248694u: goto label_248694;
        case 0x248698u: goto label_248698;
        case 0x24869cu: goto label_24869c;
        case 0x2486a0u: goto label_2486a0;
        case 0x2486a4u: goto label_2486a4;
        case 0x2486a8u: goto label_2486a8;
        case 0x2486acu: goto label_2486ac;
        case 0x2486b0u: goto label_2486b0;
        case 0x2486b4u: goto label_2486b4;
        case 0x2486b8u: goto label_2486b8;
        case 0x2486bcu: goto label_2486bc;
        case 0x2486c0u: goto label_2486c0;
        case 0x2486c4u: goto label_2486c4;
        case 0x2486c8u: goto label_2486c8;
        case 0x2486ccu: goto label_2486cc;
        case 0x2486d0u: goto label_2486d0;
        case 0x2486d4u: goto label_2486d4;
        case 0x2486d8u: goto label_2486d8;
        case 0x2486dcu: goto label_2486dc;
        case 0x2486e0u: goto label_2486e0;
        case 0x2486e4u: goto label_2486e4;
        case 0x2486e8u: goto label_2486e8;
        case 0x2486ecu: goto label_2486ec;
        case 0x2486f0u: goto label_2486f0;
        case 0x2486f4u: goto label_2486f4;
        case 0x2486f8u: goto label_2486f8;
        case 0x2486fcu: goto label_2486fc;
        case 0x248700u: goto label_248700;
        case 0x248704u: goto label_248704;
        case 0x248708u: goto label_248708;
        case 0x24870cu: goto label_24870c;
        case 0x248710u: goto label_248710;
        case 0x248714u: goto label_248714;
        case 0x248718u: goto label_248718;
        case 0x24871cu: goto label_24871c;
        case 0x248720u: goto label_248720;
        case 0x248724u: goto label_248724;
        case 0x248728u: goto label_248728;
        case 0x24872cu: goto label_24872c;
        case 0x248730u: goto label_248730;
        case 0x248734u: goto label_248734;
        case 0x248738u: goto label_248738;
        case 0x24873cu: goto label_24873c;
        case 0x248740u: goto label_248740;
        case 0x248744u: goto label_248744;
        case 0x248748u: goto label_248748;
        case 0x24874cu: goto label_24874c;
        case 0x248750u: goto label_248750;
        case 0x248754u: goto label_248754;
        case 0x248758u: goto label_248758;
        case 0x24875cu: goto label_24875c;
        case 0x248760u: goto label_248760;
        case 0x248764u: goto label_248764;
        case 0x248768u: goto label_248768;
        case 0x24876cu: goto label_24876c;
        case 0x248770u: goto label_248770;
        case 0x248774u: goto label_248774;
        case 0x248778u: goto label_248778;
        case 0x24877cu: goto label_24877c;
        case 0x248780u: goto label_248780;
        case 0x248784u: goto label_248784;
        case 0x248788u: goto label_248788;
        case 0x24878cu: goto label_24878c;
        case 0x248790u: goto label_248790;
        case 0x248794u: goto label_248794;
        case 0x248798u: goto label_248798;
        case 0x24879cu: goto label_24879c;
        case 0x2487a0u: goto label_2487a0;
        case 0x2487a4u: goto label_2487a4;
        case 0x2487a8u: goto label_2487a8;
        case 0x2487acu: goto label_2487ac;
        case 0x2487b0u: goto label_2487b0;
        case 0x2487b4u: goto label_2487b4;
        case 0x2487b8u: goto label_2487b8;
        case 0x2487bcu: goto label_2487bc;
        case 0x2487c0u: goto label_2487c0;
        case 0x2487c4u: goto label_2487c4;
        case 0x2487c8u: goto label_2487c8;
        case 0x2487ccu: goto label_2487cc;
        case 0x2487d0u: goto label_2487d0;
        case 0x2487d4u: goto label_2487d4;
        case 0x2487d8u: goto label_2487d8;
        case 0x2487dcu: goto label_2487dc;
        case 0x2487e0u: goto label_2487e0;
        case 0x2487e4u: goto label_2487e4;
        case 0x2487e8u: goto label_2487e8;
        case 0x2487ecu: goto label_2487ec;
        case 0x2487f0u: goto label_2487f0;
        case 0x2487f4u: goto label_2487f4;
        case 0x2487f8u: goto label_2487f8;
        case 0x2487fcu: goto label_2487fc;
        case 0x248800u: goto label_248800;
        case 0x248804u: goto label_248804;
        case 0x248808u: goto label_248808;
        case 0x24880cu: goto label_24880c;
        case 0x248810u: goto label_248810;
        case 0x248814u: goto label_248814;
        case 0x248818u: goto label_248818;
        case 0x24881cu: goto label_24881c;
        case 0x248820u: goto label_248820;
        case 0x248824u: goto label_248824;
        case 0x248828u: goto label_248828;
        case 0x24882cu: goto label_24882c;
        case 0x248830u: goto label_248830;
        case 0x248834u: goto label_248834;
        case 0x248838u: goto label_248838;
        case 0x24883cu: goto label_24883c;
        case 0x248840u: goto label_248840;
        case 0x248844u: goto label_248844;
        case 0x248848u: goto label_248848;
        case 0x24884cu: goto label_24884c;
        case 0x248850u: goto label_248850;
        case 0x248854u: goto label_248854;
        case 0x248858u: goto label_248858;
        case 0x24885cu: goto label_24885c;
        case 0x248860u: goto label_248860;
        case 0x248864u: goto label_248864;
        case 0x248868u: goto label_248868;
        case 0x24886cu: goto label_24886c;
        case 0x248870u: goto label_248870;
        case 0x248874u: goto label_248874;
        case 0x248878u: goto label_248878;
        case 0x24887cu: goto label_24887c;
        case 0x248880u: goto label_248880;
        case 0x248884u: goto label_248884;
        case 0x248888u: goto label_248888;
        case 0x24888cu: goto label_24888c;
        case 0x248890u: goto label_248890;
        case 0x248894u: goto label_248894;
        case 0x248898u: goto label_248898;
        case 0x24889cu: goto label_24889c;
        case 0x2488a0u: goto label_2488a0;
        case 0x2488a4u: goto label_2488a4;
        case 0x2488a8u: goto label_2488a8;
        case 0x2488acu: goto label_2488ac;
        case 0x2488b0u: goto label_2488b0;
        case 0x2488b4u: goto label_2488b4;
        case 0x2488b8u: goto label_2488b8;
        case 0x2488bcu: goto label_2488bc;
        case 0x2488c0u: goto label_2488c0;
        case 0x2488c4u: goto label_2488c4;
        case 0x2488c8u: goto label_2488c8;
        case 0x2488ccu: goto label_2488cc;
        case 0x2488d0u: goto label_2488d0;
        case 0x2488d4u: goto label_2488d4;
        case 0x2488d8u: goto label_2488d8;
        case 0x2488dcu: goto label_2488dc;
        case 0x2488e0u: goto label_2488e0;
        case 0x2488e4u: goto label_2488e4;
        case 0x2488e8u: goto label_2488e8;
        case 0x2488ecu: goto label_2488ec;
        case 0x2488f0u: goto label_2488f0;
        case 0x2488f4u: goto label_2488f4;
        case 0x2488f8u: goto label_2488f8;
        case 0x2488fcu: goto label_2488fc;
        case 0x248900u: goto label_248900;
        case 0x248904u: goto label_248904;
        case 0x248908u: goto label_248908;
        case 0x24890cu: goto label_24890c;
        case 0x248910u: goto label_248910;
        case 0x248914u: goto label_248914;
        case 0x248918u: goto label_248918;
        case 0x24891cu: goto label_24891c;
        case 0x248920u: goto label_248920;
        case 0x248924u: goto label_248924;
        case 0x248928u: goto label_248928;
        case 0x24892cu: goto label_24892c;
        case 0x248930u: goto label_248930;
        case 0x248934u: goto label_248934;
        case 0x248938u: goto label_248938;
        case 0x24893cu: goto label_24893c;
        case 0x248940u: goto label_248940;
        case 0x248944u: goto label_248944;
        case 0x248948u: goto label_248948;
        case 0x24894cu: goto label_24894c;
        case 0x248950u: goto label_248950;
        case 0x248954u: goto label_248954;
        case 0x248958u: goto label_248958;
        case 0x24895cu: goto label_24895c;
        case 0x248960u: goto label_248960;
        case 0x248964u: goto label_248964;
        case 0x248968u: goto label_248968;
        case 0x24896cu: goto label_24896c;
        case 0x248970u: goto label_248970;
        case 0x248974u: goto label_248974;
        case 0x248978u: goto label_248978;
        case 0x24897cu: goto label_24897c;
        case 0x248980u: goto label_248980;
        case 0x248984u: goto label_248984;
        case 0x248988u: goto label_248988;
        case 0x24898cu: goto label_24898c;
        case 0x248990u: goto label_248990;
        case 0x248994u: goto label_248994;
        case 0x248998u: goto label_248998;
        case 0x24899cu: goto label_24899c;
        case 0x2489a0u: goto label_2489a0;
        case 0x2489a4u: goto label_2489a4;
        case 0x2489a8u: goto label_2489a8;
        case 0x2489acu: goto label_2489ac;
        case 0x2489b0u: goto label_2489b0;
        case 0x2489b4u: goto label_2489b4;
        case 0x2489b8u: goto label_2489b8;
        case 0x2489bcu: goto label_2489bc;
        case 0x2489c0u: goto label_2489c0;
        case 0x2489c4u: goto label_2489c4;
        case 0x2489c8u: goto label_2489c8;
        case 0x2489ccu: goto label_2489cc;
        case 0x2489d0u: goto label_2489d0;
        case 0x2489d4u: goto label_2489d4;
        case 0x2489d8u: goto label_2489d8;
        case 0x2489dcu: goto label_2489dc;
        case 0x2489e0u: goto label_2489e0;
        case 0x2489e4u: goto label_2489e4;
        case 0x2489e8u: goto label_2489e8;
        case 0x2489ecu: goto label_2489ec;
        case 0x2489f0u: goto label_2489f0;
        case 0x2489f4u: goto label_2489f4;
        case 0x2489f8u: goto label_2489f8;
        case 0x2489fcu: goto label_2489fc;
        case 0x248a00u: goto label_248a00;
        case 0x248a04u: goto label_248a04;
        case 0x248a08u: goto label_248a08;
        case 0x248a0cu: goto label_248a0c;
        case 0x248a10u: goto label_248a10;
        case 0x248a14u: goto label_248a14;
        case 0x248a18u: goto label_248a18;
        case 0x248a1cu: goto label_248a1c;
        case 0x248a20u: goto label_248a20;
        case 0x248a24u: goto label_248a24;
        case 0x248a28u: goto label_248a28;
        case 0x248a2cu: goto label_248a2c;
        case 0x248a30u: goto label_248a30;
        case 0x248a34u: goto label_248a34;
        case 0x248a38u: goto label_248a38;
        case 0x248a3cu: goto label_248a3c;
        case 0x248a40u: goto label_248a40;
        case 0x248a44u: goto label_248a44;
        case 0x248a48u: goto label_248a48;
        case 0x248a4cu: goto label_248a4c;
        case 0x248a50u: goto label_248a50;
        case 0x248a54u: goto label_248a54;
        case 0x248a58u: goto label_248a58;
        case 0x248a5cu: goto label_248a5c;
        case 0x248a60u: goto label_248a60;
        case 0x248a64u: goto label_248a64;
        case 0x248a68u: goto label_248a68;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a70u: goto label_248a70;
        case 0x248a74u: goto label_248a74;
        case 0x248a78u: goto label_248a78;
        case 0x248a7cu: goto label_248a7c;
        case 0x248a80u: goto label_248a80;
        case 0x248a84u: goto label_248a84;
        case 0x248a88u: goto label_248a88;
        case 0x248a8cu: goto label_248a8c;
        case 0x248a90u: goto label_248a90;
        case 0x248a94u: goto label_248a94;
        case 0x248a98u: goto label_248a98;
        case 0x248a9cu: goto label_248a9c;
        case 0x248aa0u: goto label_248aa0;
        case 0x248aa4u: goto label_248aa4;
        case 0x248aa8u: goto label_248aa8;
        case 0x248aacu: goto label_248aac;
        case 0x248ab0u: goto label_248ab0;
        case 0x248ab4u: goto label_248ab4;
        case 0x248ab8u: goto label_248ab8;
        case 0x248abcu: goto label_248abc;
        case 0x248ac0u: goto label_248ac0;
        case 0x248ac4u: goto label_248ac4;
        case 0x248ac8u: goto label_248ac8;
        case 0x248accu: goto label_248acc;
        case 0x248ad0u: goto label_248ad0;
        case 0x248ad4u: goto label_248ad4;
        case 0x248ad8u: goto label_248ad8;
        case 0x248adcu: goto label_248adc;
        case 0x248ae0u: goto label_248ae0;
        case 0x248ae4u: goto label_248ae4;
        case 0x248ae8u: goto label_248ae8;
        case 0x248aecu: goto label_248aec;
        case 0x248af0u: goto label_248af0;
        case 0x248af4u: goto label_248af4;
        case 0x248af8u: goto label_248af8;
        case 0x248afcu: goto label_248afc;
        case 0x248b00u: goto label_248b00;
        case 0x248b04u: goto label_248b04;
        case 0x248b08u: goto label_248b08;
        case 0x248b0cu: goto label_248b0c;
        case 0x248b10u: goto label_248b10;
        case 0x248b14u: goto label_248b14;
        case 0x248b18u: goto label_248b18;
        case 0x248b1cu: goto label_248b1c;
        case 0x248b20u: goto label_248b20;
        case 0x248b24u: goto label_248b24;
        case 0x248b28u: goto label_248b28;
        case 0x248b2cu: goto label_248b2c;
        case 0x248b30u: goto label_248b30;
        case 0x248b34u: goto label_248b34;
        case 0x248b38u: goto label_248b38;
        case 0x248b3cu: goto label_248b3c;
        case 0x248b40u: goto label_248b40;
        case 0x248b44u: goto label_248b44;
        case 0x248b48u: goto label_248b48;
        case 0x248b4cu: goto label_248b4c;
        case 0x248b50u: goto label_248b50;
        case 0x248b54u: goto label_248b54;
        case 0x248b58u: goto label_248b58;
        case 0x248b5cu: goto label_248b5c;
        case 0x248b60u: goto label_248b60;
        case 0x248b64u: goto label_248b64;
        case 0x248b68u: goto label_248b68;
        case 0x248b6cu: goto label_248b6c;
        case 0x248b70u: goto label_248b70;
        case 0x248b74u: goto label_248b74;
        case 0x248b78u: goto label_248b78;
        case 0x248b7cu: goto label_248b7c;
        case 0x248b80u: goto label_248b80;
        case 0x248b84u: goto label_248b84;
        case 0x248b88u: goto label_248b88;
        case 0x248b8cu: goto label_248b8c;
        case 0x248b90u: goto label_248b90;
        case 0x248b94u: goto label_248b94;
        case 0x248b98u: goto label_248b98;
        case 0x248b9cu: goto label_248b9c;
        case 0x248ba0u: goto label_248ba0;
        case 0x248ba4u: goto label_248ba4;
        case 0x248ba8u: goto label_248ba8;
        case 0x248bacu: goto label_248bac;
        case 0x248bb0u: goto label_248bb0;
        case 0x248bb4u: goto label_248bb4;
        case 0x248bb8u: goto label_248bb8;
        case 0x248bbcu: goto label_248bbc;
        case 0x248bc0u: goto label_248bc0;
        case 0x248bc4u: goto label_248bc4;
        case 0x248bc8u: goto label_248bc8;
        case 0x248bccu: goto label_248bcc;
        case 0x248bd0u: goto label_248bd0;
        case 0x248bd4u: goto label_248bd4;
        case 0x248bd8u: goto label_248bd8;
        case 0x248bdcu: goto label_248bdc;
        case 0x248be0u: goto label_248be0;
        case 0x248be4u: goto label_248be4;
        case 0x248be8u: goto label_248be8;
        case 0x248becu: goto label_248bec;
        case 0x248bf0u: goto label_248bf0;
        case 0x248bf4u: goto label_248bf4;
        case 0x248bf8u: goto label_248bf8;
        case 0x248bfcu: goto label_248bfc;
        case 0x248c00u: goto label_248c00;
        case 0x248c04u: goto label_248c04;
        case 0x248c08u: goto label_248c08;
        case 0x248c0cu: goto label_248c0c;
        case 0x248c10u: goto label_248c10;
        case 0x248c14u: goto label_248c14;
        case 0x248c18u: goto label_248c18;
        case 0x248c1cu: goto label_248c1c;
        case 0x248c20u: goto label_248c20;
        case 0x248c24u: goto label_248c24;
        case 0x248c28u: goto label_248c28;
        case 0x248c2cu: goto label_248c2c;
        case 0x248c30u: goto label_248c30;
        case 0x248c34u: goto label_248c34;
        case 0x248c38u: goto label_248c38;
        case 0x248c3cu: goto label_248c3c;
        case 0x248c40u: goto label_248c40;
        case 0x248c44u: goto label_248c44;
        case 0x248c48u: goto label_248c48;
        case 0x248c4cu: goto label_248c4c;
        case 0x248c50u: goto label_248c50;
        case 0x248c54u: goto label_248c54;
        case 0x248c58u: goto label_248c58;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c60u: goto label_248c60;
        case 0x248c64u: goto label_248c64;
        case 0x248c68u: goto label_248c68;
        case 0x248c6cu: goto label_248c6c;
        case 0x248c70u: goto label_248c70;
        case 0x248c74u: goto label_248c74;
        case 0x248c78u: goto label_248c78;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c80u: goto label_248c80;
        case 0x248c84u: goto label_248c84;
        case 0x248c88u: goto label_248c88;
        case 0x248c8cu: goto label_248c8c;
        case 0x248c90u: goto label_248c90;
        case 0x248c94u: goto label_248c94;
        case 0x248c98u: goto label_248c98;
        case 0x248c9cu: goto label_248c9c;
        case 0x248ca0u: goto label_248ca0;
        case 0x248ca4u: goto label_248ca4;
        case 0x248ca8u: goto label_248ca8;
        case 0x248cacu: goto label_248cac;
        case 0x248cb0u: goto label_248cb0;
        case 0x248cb4u: goto label_248cb4;
        case 0x248cb8u: goto label_248cb8;
        case 0x248cbcu: goto label_248cbc;
        case 0x248cc0u: goto label_248cc0;
        case 0x248cc4u: goto label_248cc4;
        case 0x248cc8u: goto label_248cc8;
        case 0x248cccu: goto label_248ccc;
        case 0x248cd0u: goto label_248cd0;
        case 0x248cd4u: goto label_248cd4;
        case 0x248cd8u: goto label_248cd8;
        case 0x248cdcu: goto label_248cdc;
        case 0x248ce0u: goto label_248ce0;
        case 0x248ce4u: goto label_248ce4;
        case 0x248ce8u: goto label_248ce8;
        case 0x248cecu: goto label_248cec;
        case 0x248cf0u: goto label_248cf0;
        case 0x248cf4u: goto label_248cf4;
        case 0x248cf8u: goto label_248cf8;
        case 0x248cfcu: goto label_248cfc;
        case 0x248d00u: goto label_248d00;
        case 0x248d04u: goto label_248d04;
        case 0x248d08u: goto label_248d08;
        case 0x248d0cu: goto label_248d0c;
        case 0x248d10u: goto label_248d10;
        case 0x248d14u: goto label_248d14;
        case 0x248d18u: goto label_248d18;
        case 0x248d1cu: goto label_248d1c;
        case 0x248d20u: goto label_248d20;
        case 0x248d24u: goto label_248d24;
        case 0x248d28u: goto label_248d28;
        case 0x248d2cu: goto label_248d2c;
        case 0x248d30u: goto label_248d30;
        case 0x248d34u: goto label_248d34;
        case 0x248d38u: goto label_248d38;
        case 0x248d3cu: goto label_248d3c;
        case 0x248d40u: goto label_248d40;
        case 0x248d44u: goto label_248d44;
        case 0x248d48u: goto label_248d48;
        case 0x248d4cu: goto label_248d4c;
        case 0x248d50u: goto label_248d50;
        case 0x248d54u: goto label_248d54;
        case 0x248d58u: goto label_248d58;
        case 0x248d5cu: goto label_248d5c;
        case 0x248d60u: goto label_248d60;
        case 0x248d64u: goto label_248d64;
        case 0x248d68u: goto label_248d68;
        case 0x248d6cu: goto label_248d6c;
        case 0x248d70u: goto label_248d70;
        case 0x248d74u: goto label_248d74;
        case 0x248d78u: goto label_248d78;
        case 0x248d7cu: goto label_248d7c;
        case 0x248d80u: goto label_248d80;
        case 0x248d84u: goto label_248d84;
        case 0x248d88u: goto label_248d88;
        case 0x248d8cu: goto label_248d8c;
        case 0x248d90u: goto label_248d90;
        case 0x248d94u: goto label_248d94;
        case 0x248d98u: goto label_248d98;
        case 0x248d9cu: goto label_248d9c;
        case 0x248da0u: goto label_248da0;
        case 0x248da4u: goto label_248da4;
        case 0x248da8u: goto label_248da8;
        case 0x248dacu: goto label_248dac;
        case 0x248db0u: goto label_248db0;
        case 0x248db4u: goto label_248db4;
        case 0x248db8u: goto label_248db8;
        case 0x248dbcu: goto label_248dbc;
        case 0x248dc0u: goto label_248dc0;
        case 0x248dc4u: goto label_248dc4;
        case 0x248dc8u: goto label_248dc8;
        case 0x248dccu: goto label_248dcc;
        case 0x248dd0u: goto label_248dd0;
        case 0x248dd4u: goto label_248dd4;
        case 0x248dd8u: goto label_248dd8;
        case 0x248ddcu: goto label_248ddc;
        case 0x248de0u: goto label_248de0;
        case 0x248de4u: goto label_248de4;
        case 0x248de8u: goto label_248de8;
        case 0x248decu: goto label_248dec;
        default: break;
    }

    ctx->pc = 0x248560u;

label_248560:
    // 0x248560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x248560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_248564:
    // 0x248564: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x248564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_248568:
    // 0x248568: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x248568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_24856c:
    // 0x24856c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_248570:
    // 0x248570: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x248570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_248574:
    // 0x248574: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x248574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_248578:
    // 0x248578: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_24857c:
    // 0x24857c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x24857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_248580:
    // 0x248580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x248580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248584:
    // 0x248584: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x248584u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_248588:
    // 0x248588: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x248588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_24858c:
    // 0x24858c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x24858cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_248590:
    // 0x248590: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x248590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_248594:
    // 0x248594: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x248594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_248598:
    // 0x248598: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24859c:
    // 0x24859c: 0xc04d354  jal         func_134D50
label_2485a0:
    if (ctx->pc == 0x2485A0u) {
        ctx->pc = 0x2485A4u;
        goto label_2485a4;
    }
    ctx->pc = 0x24859Cu;
    SET_GPR_U32(ctx, 31, 0x2485A4u);
    ctx->pc = 0x134D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134D50u, 0x24859Cu, 0x2485A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2485A4u;
label_2485a4:
    // 0x2485a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2485a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2485a8:
    // 0x2485a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2485a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2485ac:
    // 0x2485ac: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2485acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2485b0:
    // 0x2485b0: 0x3e00008  jr          $ra
label_2485b4:
    if (ctx->pc == 0x2485B4u) {
        ctx->pc = 0x2485B8u;
        goto label_2485b8;
    }
    ctx->pc = 0x2485B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2485B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2485B8u;
label_2485b8:
    // 0x2485b8: 0x0  nop
    ctx->pc = 0x2485b8u;
    // NOP
label_2485bc:
    // 0x2485bc: 0x0  nop
    ctx->pc = 0x2485bcu;
    // NOP
label_2485c0:
    // 0x2485c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2485c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_2485c4:
    // 0x2485c4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2485c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2485c8:
    // 0x2485c8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2485c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_2485cc:
    // 0x2485cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2485ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2485d0:
    // 0x2485d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2485d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2485d4:
    // 0x2485d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2485d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2485d8:
    // 0x2485d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2485d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2485dc:
    // 0x2485dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2485dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2485e0:
    // 0x2485e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2485e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2485e4:
    // 0x2485e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2485e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2485e8:
    // 0x2485e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2485e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2485ec:
    // 0x2485ec: 0xafa40160  sw          $a0, 0x160($sp)
    ctx->pc = 0x2485ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 4));
label_2485f0:
    // 0x2485f0: 0xafa50170  sw          $a1, 0x170($sp)
    ctx->pc = 0x2485f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 5));
label_2485f4:
    // 0x2485f4: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2485f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2485f8:
    // 0x2485f8: 0xc0422b8  jal         func_108AE0
label_2485fc:
    if (ctx->pc == 0x2485FCu) {
        ctx->pc = 0x248600u;
        goto label_248600;
    }
    ctx->pc = 0x2485F8u;
    SET_GPR_U32(ctx, 31, 0x248600u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2485F8u, 0x248600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248600u;
label_248600:
    // 0x248600: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248604:
    // 0x248604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248608:
    // 0x248608: 0xc08ec98  jal         func_23B260
label_24860c:
    if (ctx->pc == 0x24860Cu) {
        ctx->pc = 0x248610u;
        goto label_248610;
    }
    ctx->pc = 0x248608u;
    SET_GPR_U32(ctx, 31, 0x248610u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x248608u, 0x248610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248610u;
label_248610:
    // 0x248610: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x248610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_248614:
    // 0x248614: 0xafa40158  sw          $a0, 0x158($sp)
    ctx->pc = 0x248614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
label_248618:
    // 0x248618: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_24861c:
    // 0x24861c: 0xc0422b8  jal         func_108AE0
label_248620:
    if (ctx->pc == 0x248620u) {
        ctx->pc = 0x248624u;
        goto label_248624;
    }
    ctx->pc = 0x24861Cu;
    SET_GPR_U32(ctx, 31, 0x248624u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24861Cu, 0x248624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248624u;
label_248624:
    // 0x248624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248628:
    // 0x248628: 0x27a50158  addiu       $a1, $sp, 0x158
    ctx->pc = 0x248628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_24862c:
    // 0x24862c: 0xc0422a8  jal         func_108AA0
label_248630:
    if (ctx->pc == 0x248630u) {
        ctx->pc = 0x248634u;
        goto label_248634;
    }
    ctx->pc = 0x24862Cu;
    SET_GPR_U32(ctx, 31, 0x248634u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24862Cu, 0x248634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248634u;
label_248634:
    // 0x248634: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248638:
    // 0x248638: 0xc0422b8  jal         func_108AE0
label_24863c:
    if (ctx->pc == 0x24863Cu) {
        ctx->pc = 0x248640u;
        goto label_248640;
    }
    ctx->pc = 0x248638u;
    SET_GPR_U32(ctx, 31, 0x248640u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248638u, 0x248640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248640u;
label_248640:
    // 0x248640: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248644:
    // 0x248644: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x248644u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248648:
    // 0x248648: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x248648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_24864c:
    // 0x24864c: 0x320f809  jalr        $t9
label_248650:
    if (ctx->pc == 0x248650u) {
        ctx->pc = 0x248654u;
        goto label_248654;
    }
    ctx->pc = 0x24864Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248654u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24864Cu, 0x248654u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248654u;
label_248654:
    // 0x248654: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x248654u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_248658:
    // 0x248658: 0x144700e5  bne         $v0, $a3, . + 4 + (0xE5 << 2)
label_24865c:
    if (ctx->pc == 0x24865Cu) {
        ctx->pc = 0x248660u;
        goto label_248660;
    }
    ctx->pc = 0x248658u;
    {
        const bool branch_taken_0x248658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x248658) {
            ctx->pc = 0x2489F0u;
            goto label_2489f0;
        }
    }
    ctx->pc = 0x248660u;
label_248660:
    // 0x248660: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248664:
    // 0x248664: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_248668:
    // 0x248668: 0xc0477e0  jal         func_11DF80
label_24866c:
    if (ctx->pc == 0x24866Cu) {
        ctx->pc = 0x248670u;
        goto label_248670;
    }
    ctx->pc = 0x248668u;
    SET_GPR_U32(ctx, 31, 0x248670u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x248668u, 0x248670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248670u;
label_248670:
    // 0x248670: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x248670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_248674:
    // 0x248674: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248678:
    // 0x248678: 0xc0422b8  jal         func_108AE0
label_24867c:
    if (ctx->pc == 0x24867Cu) {
        ctx->pc = 0x248680u;
        goto label_248680;
    }
    ctx->pc = 0x248678u;
    SET_GPR_U32(ctx, 31, 0x248680u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248678u, 0x248680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248680u;
label_248680:
    // 0x248680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248684:
    // 0x248684: 0x27a50154  addiu       $a1, $sp, 0x154
    ctx->pc = 0x248684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_248688:
    // 0x248688: 0xc0422a8  jal         func_108AA0
label_24868c:
    if (ctx->pc == 0x24868Cu) {
        ctx->pc = 0x248690u;
        goto label_248690;
    }
    ctx->pc = 0x248688u;
    SET_GPR_U32(ctx, 31, 0x248690u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248688u, 0x248690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248690u;
label_248690:
    // 0x248690: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x248690u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248694:
    // 0x248694: 0x8cc70048  lw          $a3, 0x48($a2)
    ctx->pc = 0x248694u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_248698:
    // 0x248698: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x248698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24869c:
    // 0x24869c: 0xc0477d8  jal         func_11DF60
label_2486a0:
    if (ctx->pc == 0x2486A0u) {
        ctx->pc = 0x2486A4u;
        goto label_2486a4;
    }
    ctx->pc = 0x24869Cu;
    SET_GPR_U32(ctx, 31, 0x2486A4u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x24869Cu, 0x2486A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486A4u;
label_2486a4:
    // 0x2486a4: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x2486a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_2486a8:
    // 0x2486a8: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2486a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2486ac:
    // 0x2486ac: 0xc0422b8  jal         func_108AE0
label_2486b0:
    if (ctx->pc == 0x2486B0u) {
        ctx->pc = 0x2486B4u;
        goto label_2486b4;
    }
    ctx->pc = 0x2486ACu;
    SET_GPR_U32(ctx, 31, 0x2486B4u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2486ACu, 0x2486B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486B4u;
label_2486b4:
    // 0x2486b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2486b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2486b8:
    // 0x2486b8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x2486b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_2486bc:
    // 0x2486bc: 0xc0422a8  jal         func_108AA0
label_2486c0:
    if (ctx->pc == 0x2486C0u) {
        ctx->pc = 0x2486C4u;
        goto label_2486c4;
    }
    ctx->pc = 0x2486BCu;
    SET_GPR_U32(ctx, 31, 0x2486C4u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2486BCu, 0x2486C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486C4u;
label_2486c4:
    // 0x2486c4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2486c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2486c8:
    // 0x2486c8: 0x10000011  b           . + 4 + (0x11 << 2)
label_2486cc:
    if (ctx->pc == 0x2486CCu) {
        ctx->pc = 0x2486D0u;
        goto label_2486d0;
    }
    ctx->pc = 0x2486C8u;
    {
        const bool branch_taken_0x2486c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2486c8) {
            ctx->pc = 0x248710u;
            goto label_248710;
        }
    }
    ctx->pc = 0x2486D0u;
label_2486d0:
    // 0x2486d0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2486d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2486d4:
    // 0x2486d4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2486d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2486d8:
    // 0x2486d8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2486d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2486dc:
    // 0x2486dc: 0xc064774  jal         func_191DD0
label_2486e0:
    if (ctx->pc == 0x2486E0u) {
        ctx->pc = 0x2486E4u;
        goto label_2486e4;
    }
    ctx->pc = 0x2486DCu;
    SET_GPR_U32(ctx, 31, 0x2486E4u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x2486DCu, 0x2486E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486E4u;
label_2486e4:
    // 0x2486e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2486e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2486e8:
    // 0x2486e8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2486e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2486ec:
    // 0x2486ec: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2486ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_2486f0:
    // 0x2486f0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2486f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2486f4:
    // 0x2486f4: 0xc0422b8  jal         func_108AE0
label_2486f8:
    if (ctx->pc == 0x2486F8u) {
        ctx->pc = 0x2486FCu;
        goto label_2486fc;
    }
    ctx->pc = 0x2486F4u;
    SET_GPR_U32(ctx, 31, 0x2486FCu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2486F4u, 0x2486FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2486FCu;
label_2486fc:
    // 0x2486fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2486fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248700:
    // 0x248700: 0x27a5014c  addiu       $a1, $sp, 0x14C
    ctx->pc = 0x248700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_248704:
    // 0x248704: 0xc0422a8  jal         func_108AA0
label_248708:
    if (ctx->pc == 0x248708u) {
        ctx->pc = 0x24870Cu;
        goto label_24870c;
    }
    ctx->pc = 0x248704u;
    SET_GPR_U32(ctx, 31, 0x24870Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248704u, 0x24870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24870Cu;
label_24870c:
    // 0x24870c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x24870cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_248710:
    // 0x248710: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x248710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_248714:
    // 0x248714: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x248714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_248718:
    // 0x248718: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x248718u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24871c:
    // 0x24871c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x24871cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248720:
    // 0x248720: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_248724:
    if (ctx->pc == 0x248724u) {
        ctx->pc = 0x248728u;
        goto label_248728;
    }
    ctx->pc = 0x248720u;
    {
        const bool branch_taken_0x248720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248720) {
            ctx->pc = 0x2486D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2486d0;
        }
    }
    ctx->pc = 0x248728u;
label_248728:
    // 0x248728: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_24872c:
    // 0x24872c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x24872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248730:
    // 0x248730: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x248730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_248734:
    // 0x248734: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x248734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248738:
    // 0x248738: 0xc0938fc  jal         func_24E3F0
label_24873c:
    if (ctx->pc == 0x24873Cu) {
        ctx->pc = 0x248740u;
        goto label_248740;
    }
    ctx->pc = 0x248738u;
    SET_GPR_U32(ctx, 31, 0x248740u);
    ctx->pc = 0x24E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E3F0u, 0x248738u, 0x248740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248740u;
label_248740:
    // 0x248740: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x248740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_248744:
    // 0x248744: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x248744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_248748:
    // 0x248748: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_24874c:
    if (ctx->pc == 0x24874Cu) {
        ctx->pc = 0x248750u;
        goto label_248750;
    }
    ctx->pc = 0x248748u;
    {
        const bool branch_taken_0x248748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248748) {
            ctx->pc = 0x248854u;
            goto label_248854;
        }
    }
    ctx->pc = 0x248750u;
label_248750:
    // 0x248750: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x248750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_248754:
    // 0x248754: 0xc09247c  jal         func_2491F0
label_248758:
    if (ctx->pc == 0x248758u) {
        ctx->pc = 0x24875Cu;
        goto label_24875c;
    }
    ctx->pc = 0x248754u;
    SET_GPR_U32(ctx, 31, 0x24875Cu);
    ctx->pc = 0x2491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491F0u, 0x248754u, 0x24875Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24875Cu;
label_24875c:
    // 0x24875c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248760:
    // 0x248760: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_248764:
    // 0x248764: 0x27a50108  addiu       $a1, $sp, 0x108
    ctx->pc = 0x248764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_248768:
    // 0x248768: 0xc094d2c  jal         func_2534B0
label_24876c:
    if (ctx->pc == 0x24876Cu) {
        ctx->pc = 0x248770u;
        goto label_248770;
    }
    ctx->pc = 0x248768u;
    SET_GPR_U32(ctx, 31, 0x248770u);
    ctx->pc = 0x2534B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534B0u, 0x248768u, 0x248770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248770u;
label_248770:
    // 0x248770: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x248770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_248774:
    // 0x248774: 0xc09246c  jal         func_2491B0
label_248778:
    if (ctx->pc == 0x248778u) {
        ctx->pc = 0x24877Cu;
        goto label_24877c;
    }
    ctx->pc = 0x248774u;
    SET_GPR_U32(ctx, 31, 0x24877Cu);
    ctx->pc = 0x2491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491B0u, 0x248774u, 0x24877Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24877Cu;
label_24877c:
    // 0x24877c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x24877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_248780:
    // 0x248780: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248784:
    // 0x248784: 0xc0422b8  jal         func_108AE0
label_248788:
    if (ctx->pc == 0x248788u) {
        ctx->pc = 0x24878Cu;
        goto label_24878c;
    }
    ctx->pc = 0x248784u;
    SET_GPR_U32(ctx, 31, 0x24878Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248784u, 0x24878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24878Cu;
label_24878c:
    // 0x24878c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x24878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248790:
    // 0x248790: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x248790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_248794:
    // 0x248794: 0xc0422a8  jal         func_108AA0
label_248798:
    if (ctx->pc == 0x248798u) {
        ctx->pc = 0x24879Cu;
        goto label_24879c;
    }
    ctx->pc = 0x248794u;
    SET_GPR_U32(ctx, 31, 0x24879Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248794u, 0x24879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24879Cu;
label_24879c:
    // 0x24879c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x24879cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2487a0:
    // 0x2487a0: 0x10000022  b           . + 4 + (0x22 << 2)
label_2487a4:
    if (ctx->pc == 0x2487A4u) {
        ctx->pc = 0x2487A8u;
        goto label_2487a8;
    }
    ctx->pc = 0x2487A0u;
    {
        const bool branch_taken_0x2487a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487a0) {
            ctx->pc = 0x24882Cu;
            goto label_24882c;
        }
    }
    ctx->pc = 0x2487A8u;
label_2487a8:
    // 0x2487a8: 0xa7a0015e  sh          $zero, 0x15E($sp)
    ctx->pc = 0x2487a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 0));
label_2487ac:
    // 0x2487ac: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2487acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2487b0:
    // 0x2487b0: 0xc092464  jal         func_249190
label_2487b4:
    if (ctx->pc == 0x2487B4u) {
        ctx->pc = 0x2487B8u;
        goto label_2487b8;
    }
    ctx->pc = 0x2487B0u;
    SET_GPR_U32(ctx, 31, 0x2487B8u);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x2487B0u, 0x2487B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487B8u;
label_2487b8:
    // 0x2487b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2487b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2487bc:
    // 0x2487bc: 0x1000000e  b           . + 4 + (0xE << 2)
label_2487c0:
    if (ctx->pc == 0x2487C0u) {
        ctx->pc = 0x2487C4u;
        goto label_2487c4;
    }
    ctx->pc = 0x2487BCu;
    {
        const bool branch_taken_0x2487bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2487bc) {
            ctx->pc = 0x2487F8u;
            goto label_2487f8;
        }
    }
    ctx->pc = 0x2487C4u;
label_2487c4:
    // 0x2487c4: 0x8e7e0000  lw          $fp, 0x0($s3)
    ctx->pc = 0x2487c4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2487c8:
    // 0x2487c8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2487c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2487cc:
    // 0x2487cc: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2487ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2487d0:
    // 0x2487d0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2487d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2487d4:
    // 0x2487d4: 0xc064774  jal         func_191DD0
label_2487d8:
    if (ctx->pc == 0x2487D8u) {
        ctx->pc = 0x2487DCu;
        goto label_2487dc;
    }
    ctx->pc = 0x2487D4u;
    SET_GPR_U32(ctx, 31, 0x2487DCu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x2487D4u, 0x2487DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487DCu;
label_2487dc:
    // 0x2487dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2487dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2487e0:
    // 0x2487e0: 0x13c2000a  beq         $fp, $v0, . + 4 + (0xA << 2)
label_2487e4:
    if (ctx->pc == 0x2487E4u) {
        ctx->pc = 0x2487E8u;
        goto label_2487e8;
    }
    ctx->pc = 0x2487E0u;
    {
        const bool branch_taken_0x2487e0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        if (branch_taken_0x2487e0) {
            ctx->pc = 0x24880Cu;
            goto label_24880c;
        }
    }
    ctx->pc = 0x2487E8u;
label_2487e8:
    // 0x2487e8: 0x97a2015e  lhu         $v0, 0x15E($sp)
    ctx->pc = 0x2487e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 350)));
label_2487ec:
    // 0x2487ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2487ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2487f0:
    // 0x2487f0: 0xa7a2015e  sh          $v0, 0x15E($sp)
    ctx->pc = 0x2487f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 350), (uint16_t)GPR_U32(ctx, 2));
label_2487f4:
    // 0x2487f4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2487f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2487f8:
    // 0x2487f8: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x2487f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_2487fc:
    // 0x2487fc: 0xc09245c  jal         func_249170
label_248800:
    if (ctx->pc == 0x248800u) {
        ctx->pc = 0x248804u;
        goto label_248804;
    }
    ctx->pc = 0x2487FCu;
    SET_GPR_U32(ctx, 31, 0x248804u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x2487FCu, 0x248804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248804u;
label_248804:
    // 0x248804: 0x1662ffef  bne         $s3, $v0, . + 4 + (-0x11 << 2)
label_248808:
    if (ctx->pc == 0x248808u) {
        ctx->pc = 0x24880Cu;
        goto label_24880c;
    }
    ctx->pc = 0x248804u;
    {
        const bool branch_taken_0x248804 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x248804) {
            ctx->pc = 0x2487C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2487c4;
        }
    }
    ctx->pc = 0x24880Cu;
label_24880c:
    // 0x24880c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x24880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248810:
    // 0x248810: 0xc0422b8  jal         func_108AE0
label_248814:
    if (ctx->pc == 0x248814u) {
        ctx->pc = 0x248818u;
        goto label_248818;
    }
    ctx->pc = 0x248810u;
    SET_GPR_U32(ctx, 31, 0x248818u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248810u, 0x248818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248818u;
label_248818:
    // 0x248818: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24881c:
    // 0x24881c: 0x27a5015e  addiu       $a1, $sp, 0x15E
    ctx->pc = 0x24881cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 350));
label_248820:
    // 0x248820: 0xc089164  jal         func_224590
label_248824:
    if (ctx->pc == 0x248824u) {
        ctx->pc = 0x248828u;
        goto label_248828;
    }
    ctx->pc = 0x248820u;
    SET_GPR_U32(ctx, 31, 0x248828u);
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x248820u, 0x248828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248828u;
label_248828:
    // 0x248828: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x248828u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_24882c:
    // 0x24882c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x24882cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_248830:
    // 0x248830: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x248830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_248834:
    // 0x248834: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x248834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_248838:
    // 0x248838: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x248838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24883c:
    // 0x24883c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_248840:
    if (ctx->pc == 0x248840u) {
        ctx->pc = 0x248844u;
        goto label_248844;
    }
    ctx->pc = 0x24883Cu;
    {
        const bool branch_taken_0x24883c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24883c) {
            ctx->pc = 0x2487A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2487a8;
        }
    }
    ctx->pc = 0x248844u;
label_248844:
    // 0x248844: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x248844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_248848:
    // 0x248848: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x248848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24884c:
    // 0x24884c: 0xc0923d4  jal         func_248F50
label_248850:
    if (ctx->pc == 0x248850u) {
        ctx->pc = 0x248854u;
        goto label_248854;
    }
    ctx->pc = 0x24884Cu;
    SET_GPR_U32(ctx, 31, 0x248854u);
    ctx->pc = 0x248F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F50u, 0x24884Cu, 0x248854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248854u;
label_248854:
    // 0x248854: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248858:
    // 0x248858: 0x2444004c  addiu       $a0, $v0, 0x4C
    ctx->pc = 0x248858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_24885c:
    // 0x24885c: 0xc0923c0  jal         func_248F00
label_248860:
    if (ctx->pc == 0x248860u) {
        ctx->pc = 0x248864u;
        goto label_248864;
    }
    ctx->pc = 0x24885Cu;
    SET_GPR_U32(ctx, 31, 0x248864u);
    ctx->pc = 0x248F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F00u, 0x24885Cu, 0x248864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248864u;
label_248864:
    // 0x248864: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x248864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_248868:
    // 0x248868: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_24886c:
    // 0x24886c: 0xc0422b8  jal         func_108AE0
label_248870:
    if (ctx->pc == 0x248870u) {
        ctx->pc = 0x248874u;
        goto label_248874;
    }
    ctx->pc = 0x24886Cu;
    SET_GPR_U32(ctx, 31, 0x248874u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x24886Cu, 0x248874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248874u;
label_248874:
    // 0x248874: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248878:
    // 0x248878: 0x27a50144  addiu       $a1, $sp, 0x144
    ctx->pc = 0x248878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_24887c:
    // 0x24887c: 0xc0422a8  jal         func_108AA0
label_248880:
    if (ctx->pc == 0x248880u) {
        ctx->pc = 0x248884u;
        goto label_248884;
    }
    ctx->pc = 0x24887Cu;
    SET_GPR_U32(ctx, 31, 0x248884u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x24887Cu, 0x248884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248884u;
label_248884:
    // 0x248884: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248888:
    // 0x248888: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x248888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_24888c:
    // 0x24888c: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x24888cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_248890:
    // 0x248890: 0xc064064  jal         func_190190
label_248894:
    if (ctx->pc == 0x248894u) {
        ctx->pc = 0x248898u;
        goto label_248898;
    }
    ctx->pc = 0x248890u;
    SET_GPR_U32(ctx, 31, 0x248898u);
    ctx->pc = 0x190190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190190u, 0x248890u, 0x248898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248898u;
label_248898:
    // 0x248898: 0x10000048  b           . + 4 + (0x48 << 2)
label_24889c:
    if (ctx->pc == 0x24889Cu) {
        ctx->pc = 0x2488A0u;
        goto label_2488a0;
    }
    ctx->pc = 0x248898u;
    {
        const bool branch_taken_0x248898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248898) {
            ctx->pc = 0x2489BCu;
            goto label_2489bc;
        }
    }
    ctx->pc = 0x2488A0u;
label_2488a0:
    // 0x2488a0: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2488a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2488a4:
    // 0x2488a4: 0xc053b9c  jal         func_14EE70
label_2488a8:
    if (ctx->pc == 0x2488A8u) {
        ctx->pc = 0x2488ACu;
        goto label_2488ac;
    }
    ctx->pc = 0x2488A4u;
    SET_GPR_U32(ctx, 31, 0x2488ACu);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x2488A4u, 0x2488ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488ACu;
label_2488ac:
    // 0x2488ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2488acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2488b0:
    // 0x2488b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2488b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2488b4:
    // 0x2488b4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2488b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_2488b8:
    // 0x2488b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2488b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2488bc:
    // 0x2488bc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x2488bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_2488c0:
    // 0x2488c0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2488c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2488c4:
    // 0x2488c4: 0xc0422b8  jal         func_108AE0
label_2488c8:
    if (ctx->pc == 0x2488C8u) {
        ctx->pc = 0x2488CCu;
        goto label_2488cc;
    }
    ctx->pc = 0x2488C4u;
    SET_GPR_U32(ctx, 31, 0x2488CCu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2488C4u, 0x2488CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488CCu;
label_2488cc:
    // 0x2488cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2488ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2488d0:
    // 0x2488d0: 0x27a5013c  addiu       $a1, $sp, 0x13C
    ctx->pc = 0x2488d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_2488d4:
    // 0x2488d4: 0xc0422a8  jal         func_108AA0
label_2488d8:
    if (ctx->pc == 0x2488D8u) {
        ctx->pc = 0x2488DCu;
        goto label_2488dc;
    }
    ctx->pc = 0x2488D4u;
    SET_GPR_U32(ctx, 31, 0x2488DCu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2488D4u, 0x2488DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488DCu;
label_2488dc:
    // 0x2488dc: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2488dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2488e0:
    // 0x2488e0: 0xc0422b8  jal         func_108AE0
label_2488e4:
    if (ctx->pc == 0x2488E4u) {
        ctx->pc = 0x2488E8u;
        goto label_2488e8;
    }
    ctx->pc = 0x2488E0u;
    SET_GPR_U32(ctx, 31, 0x2488E8u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x2488E0u, 0x2488E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488E8u;
label_2488e8:
    // 0x2488e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2488e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2488ec:
    // 0x2488ec: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x2488ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_2488f0:
    // 0x2488f0: 0xc0422a8  jal         func_108AA0
label_2488f4:
    if (ctx->pc == 0x2488F4u) {
        ctx->pc = 0x2488F8u;
        goto label_2488f8;
    }
    ctx->pc = 0x2488F0u;
    SET_GPR_U32(ctx, 31, 0x2488F8u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x2488F0u, 0x2488F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488F8u;
label_2488f8:
    // 0x2488f8: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2488f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2488fc:
    // 0x2488fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2488fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_248900:
    // 0x248900: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_248904:
    if (ctx->pc == 0x248904u) {
        ctx->pc = 0x248908u;
        goto label_248908;
    }
    ctx->pc = 0x248900u;
    {
        const bool branch_taken_0x248900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248900) {
            ctx->pc = 0x2489B0u;
            goto label_2489b0;
        }
    }
    ctx->pc = 0x248908u;
label_248908:
    // 0x248908: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x248908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_24890c:
    // 0x24890c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x24890cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_248910:
    // 0x248910: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248914:
    // 0x248914: 0xc0a69b0  jal         func_29A6C0
label_248918:
    if (ctx->pc == 0x248918u) {
        ctx->pc = 0x24891Cu;
        goto label_24891c;
    }
    ctx->pc = 0x248914u;
    SET_GPR_U32(ctx, 31, 0x24891Cu);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x248914u, 0x24891Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24891Cu;
label_24891c:
    // 0x24891c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x24891cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248920:
    // 0x248920: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248924:
    // 0x248924: 0xc0422b8  jal         func_108AE0
label_248928:
    if (ctx->pc == 0x248928u) {
        ctx->pc = 0x24892Cu;
        goto label_24892c;
    }
    ctx->pc = 0x248924u;
    SET_GPR_U32(ctx, 31, 0x24892Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248924u, 0x24892Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24892Cu;
label_24892c:
    // 0x24892c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x24892cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248930:
    // 0x248930: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x248930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_248934:
    // 0x248934: 0xc0a66cc  jal         func_299B30
label_248938:
    if (ctx->pc == 0x248938u) {
        ctx->pc = 0x24893Cu;
        goto label_24893c;
    }
    ctx->pc = 0x248934u;
    SET_GPR_U32(ctx, 31, 0x24893Cu);
    ctx->pc = 0x299B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B30u, 0x248934u, 0x24893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24893Cu;
label_24893c:
    // 0x24893c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x24893cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_248940:
    // 0x248940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248944:
    // 0x248944: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x248944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_248948:
    // 0x248948: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248948u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24894c:
    // 0x24894c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24894cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248950:
    // 0x248950: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x248950u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_248954:
    // 0x248954: 0x320f809  jalr        $t9
label_248958:
    if (ctx->pc == 0x248958u) {
        ctx->pc = 0x24895Cu;
        goto label_24895c;
    }
    ctx->pc = 0x248954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24895Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248954u, 0x24895Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24895Cu;
label_24895c:
    // 0x24895c: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x24895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_248960:
    // 0x248960: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x248960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_248964:
    // 0x248964: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x248964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248968:
    // 0x248968: 0xc0a69b0  jal         func_29A6C0
label_24896c:
    if (ctx->pc == 0x24896Cu) {
        ctx->pc = 0x248970u;
        goto label_248970;
    }
    ctx->pc = 0x248968u;
    SET_GPR_U32(ctx, 31, 0x248970u);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x248968u, 0x248970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248970u;
label_248970:
    // 0x248970: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x248970u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248974:
    // 0x248974: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248978:
    // 0x248978: 0xc0422b8  jal         func_108AE0
label_24897c:
    if (ctx->pc == 0x24897Cu) {
        ctx->pc = 0x248980u;
        goto label_248980;
    }
    ctx->pc = 0x248978u;
    SET_GPR_U32(ctx, 31, 0x248980u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248978u, 0x248980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248980u;
label_248980:
    // 0x248980: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x248980u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248984:
    // 0x248984: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x248984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_248988:
    // 0x248988: 0xc0a66cc  jal         func_299B30
label_24898c:
    if (ctx->pc == 0x24898Cu) {
        ctx->pc = 0x248990u;
        goto label_248990;
    }
    ctx->pc = 0x248988u;
    SET_GPR_U32(ctx, 31, 0x248990u);
    ctx->pc = 0x299B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299B30u, 0x248988u, 0x248990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248990u;
label_248990:
    // 0x248990: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x248990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_248994:
    // 0x248994: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248998:
    // 0x248998: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x248998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_24899c:
    // 0x24899c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x24899cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2489a0:
    // 0x2489a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2489a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2489a4:
    // 0x2489a4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2489a8:
    // 0x2489a8: 0x320f809  jalr        $t9
label_2489ac:
    if (ctx->pc == 0x2489ACu) {
        ctx->pc = 0x2489B0u;
        goto label_2489b0;
    }
    ctx->pc = 0x2489A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2489B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2489A8u, 0x2489B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2489B0u;
label_2489b0:
    // 0x2489b0: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2489b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2489b4:
    // 0x2489b4: 0xc064054  jal         func_190150
label_2489b8:
    if (ctx->pc == 0x2489B8u) {
        ctx->pc = 0x2489BCu;
        goto label_2489bc;
    }
    ctx->pc = 0x2489B4u;
    SET_GPR_U32(ctx, 31, 0x2489BCu);
    ctx->pc = 0x190150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190150u, 0x2489B4u, 0x2489BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489BCu;
label_2489bc:
    // 0x2489bc: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2489bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2489c0:
    // 0x2489c0: 0x27a40118  addiu       $a0, $sp, 0x118
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2489c4:
    // 0x2489c4: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x2489c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_2489c8:
    // 0x2489c8: 0xc053ba4  jal         func_14EE90
label_2489cc:
    if (ctx->pc == 0x2489CCu) {
        ctx->pc = 0x2489D0u;
        goto label_2489d0;
    }
    ctx->pc = 0x2489C8u;
    SET_GPR_U32(ctx, 31, 0x2489D0u);
    ctx->pc = 0x14EE90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE90u, 0x2489C8u, 0x2489D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489D0u;
label_2489d0:
    // 0x2489d0: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x2489d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2489d4:
    // 0x2489d4: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x2489d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2489d8:
    // 0x2489d8: 0xc041998  jal         func_106660
label_2489dc:
    if (ctx->pc == 0x2489DCu) {
        ctx->pc = 0x2489E0u;
        goto label_2489e0;
    }
    ctx->pc = 0x2489D8u;
    SET_GPR_U32(ctx, 31, 0x2489E0u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2489D8u, 0x2489E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489E0u;
label_2489e0:
    // 0x2489e0: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_2489e4:
    if (ctx->pc == 0x2489E4u) {
        ctx->pc = 0x2489E8u;
        goto label_2489e8;
    }
    ctx->pc = 0x2489E0u;
    {
        const bool branch_taken_0x2489e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2489e0) {
            ctx->pc = 0x2488A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2488a0;
        }
    }
    ctx->pc = 0x2489E8u;
label_2489e8:
    // 0x2489e8: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2489ec:
    if (ctx->pc == 0x2489ECu) {
        ctx->pc = 0x2489F0u;
        goto label_2489f0;
    }
    ctx->pc = 0x2489E8u;
    {
        const bool branch_taken_0x2489e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2489e8) {
            ctx->pc = 0x248D90u;
            goto label_248d90;
        }
    }
    ctx->pc = 0x2489F0u;
label_2489f0:
    // 0x2489f0: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x2489f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_2489f4:
    // 0x2489f4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x2489f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2489f8:
    // 0x2489f8: 0xc0477e0  jal         func_11DF80
label_2489fc:
    if (ctx->pc == 0x2489FCu) {
        ctx->pc = 0x248A00u;
        goto label_248a00;
    }
    ctx->pc = 0x2489F8u;
    SET_GPR_U32(ctx, 31, 0x248A00u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x2489F8u, 0x248A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A00u;
label_248a00:
    // 0x248a00: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x248a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
label_248a04:
    // 0x248a04: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248a04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248a08:
    // 0x248a08: 0xc0422b8  jal         func_108AE0
label_248a0c:
    if (ctx->pc == 0x248A0Cu) {
        ctx->pc = 0x248A10u;
        goto label_248a10;
    }
    ctx->pc = 0x248A08u;
    SET_GPR_U32(ctx, 31, 0x248A10u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248A08u, 0x248A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A10u;
label_248a10:
    // 0x248a10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a14:
    // 0x248a14: 0x27a50134  addiu       $a1, $sp, 0x134
    ctx->pc = 0x248a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_248a18:
    // 0x248a18: 0xc0422a8  jal         func_108AA0
label_248a1c:
    if (ctx->pc == 0x248A1Cu) {
        ctx->pc = 0x248A20u;
        goto label_248a20;
    }
    ctx->pc = 0x248A18u;
    SET_GPR_U32(ctx, 31, 0x248A20u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248A18u, 0x248A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A20u;
label_248a20:
    // 0x248a20: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248a24:
    // 0x248a24: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_248a28:
    // 0x248a28: 0xc0477d8  jal         func_11DF60
label_248a2c:
    if (ctx->pc == 0x248A2Cu) {
        ctx->pc = 0x248A30u;
        goto label_248a30;
    }
    ctx->pc = 0x248A28u;
    SET_GPR_U32(ctx, 31, 0x248A30u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x248A28u, 0x248A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A30u;
label_248a30:
    // 0x248a30: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x248a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_248a34:
    // 0x248a34: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248a38:
    // 0x248a38: 0xc0422b8  jal         func_108AE0
label_248a3c:
    if (ctx->pc == 0x248A3Cu) {
        ctx->pc = 0x248A40u;
        goto label_248a40;
    }
    ctx->pc = 0x248A38u;
    SET_GPR_U32(ctx, 31, 0x248A40u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248A38u, 0x248A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A40u;
label_248a40:
    // 0x248a40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a44:
    // 0x248a44: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x248a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_248a48:
    // 0x248a48: 0xc0422a8  jal         func_108AA0
label_248a4c:
    if (ctx->pc == 0x248A4Cu) {
        ctx->pc = 0x248A50u;
        goto label_248a50;
    }
    ctx->pc = 0x248A48u;
    SET_GPR_U32(ctx, 31, 0x248A50u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248A48u, 0x248A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A50u;
label_248a50:
    // 0x248a50: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x248a50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248a54:
    // 0x248a54: 0x10000012  b           . + 4 + (0x12 << 2)
label_248a58:
    if (ctx->pc == 0x248A58u) {
        ctx->pc = 0x248A5Cu;
        goto label_248a5c;
    }
    ctx->pc = 0x248A54u;
    {
        const bool branch_taken_0x248a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a54) {
            ctx->pc = 0x248AA0u;
            goto label_248aa0;
        }
    }
    ctx->pc = 0x248A5Cu;
label_248a5c:
    // 0x248a5c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248a60:
    // 0x248a60: 0xc0422b8  jal         func_108AE0
label_248a64:
    if (ctx->pc == 0x248A64u) {
        ctx->pc = 0x248A68u;
        goto label_248a68;
    }
    ctx->pc = 0x248A60u;
    SET_GPR_U32(ctx, 31, 0x248A68u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248A60u, 0x248A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A68u;
label_248a68:
    // 0x248a68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248a6c:
    // 0x248a6c: 0x27a5012c  addiu       $a1, $sp, 0x12C
    ctx->pc = 0x248a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_248a70:
    // 0x248a70: 0xc0422a8  jal         func_108AA0
label_248a74:
    if (ctx->pc == 0x248A74u) {
        ctx->pc = 0x248A78u;
        goto label_248a78;
    }
    ctx->pc = 0x248A70u;
    SET_GPR_U32(ctx, 31, 0x248A78u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248A70u, 0x248A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A78u;
label_248a78:
    // 0x248a78: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248a7c:
    // 0x248a7c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_248a80:
    // 0x248a80: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x248a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_248a84:
    // 0x248a84: 0xc064774  jal         func_191DD0
label_248a88:
    if (ctx->pc == 0x248A88u) {
        ctx->pc = 0x248A8Cu;
        goto label_248a8c;
    }
    ctx->pc = 0x248A84u;
    SET_GPR_U32(ctx, 31, 0x248A8Cu);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x248A84u, 0x248A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x248a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_248a90:
    // 0x248a90: 0x8fa3012c  lw          $v1, 0x12C($sp)
    ctx->pc = 0x248a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_248a94:
    // 0x248a94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x248a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_248a98:
    // 0x248a98: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x248a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_248a9c:
    // 0x248a9c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x248a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_248aa0:
    // 0x248aa0: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x248aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_248aa4:
    // 0x248aa4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x248aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_248aa8:
    // 0x248aa8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x248aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_248aac:
    // 0x248aac: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x248aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248ab0:
    // 0x248ab0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_248ab4:
    if (ctx->pc == 0x248AB4u) {
        ctx->pc = 0x248AB8u;
        goto label_248ab8;
    }
    ctx->pc = 0x248AB0u;
    {
        const bool branch_taken_0x248ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248ab0) {
            ctx->pc = 0x248A5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248a5c;
        }
    }
    ctx->pc = 0x248AB8u;
label_248ab8:
    // 0x248ab8: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248abc:
    // 0x248abc: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x248abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248ac0:
    // 0x248ac0: 0x24450044  addiu       $a1, $v0, 0x44
    ctx->pc = 0x248ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_248ac4:
    // 0x248ac4: 0x8fa60170  lw          $a2, 0x170($sp)
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248ac8:
    // 0x248ac8: 0xc0938fc  jal         func_24E3F0
label_248acc:
    if (ctx->pc == 0x248ACCu) {
        ctx->pc = 0x248AD0u;
        goto label_248ad0;
    }
    ctx->pc = 0x248AC8u;
    SET_GPR_U32(ctx, 31, 0x248AD0u);
    ctx->pc = 0x24E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E3F0u, 0x248AC8u, 0x248AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AD0u;
label_248ad0:
    // 0x248ad0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x248ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_248ad4:
    // 0x248ad4: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x248ad4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_248ad8:
    // 0x248ad8: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_248adc:
    if (ctx->pc == 0x248ADCu) {
        ctx->pc = 0x248AE0u;
        goto label_248ae0;
    }
    ctx->pc = 0x248AD8u;
    {
        const bool branch_taken_0x248ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248ad8) {
            ctx->pc = 0x248BE0u;
            goto label_248be0;
        }
    }
    ctx->pc = 0x248AE0u;
label_248ae0:
    // 0x248ae0: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x248ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_248ae4:
    // 0x248ae4: 0xc09247c  jal         func_2491F0
label_248ae8:
    if (ctx->pc == 0x248AE8u) {
        ctx->pc = 0x248AECu;
        goto label_248aec;
    }
    ctx->pc = 0x248AE4u;
    SET_GPR_U32(ctx, 31, 0x248AECu);
    ctx->pc = 0x2491F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491F0u, 0x248AE4u, 0x248AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AECu;
label_248aec:
    // 0x248aec: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248af0:
    // 0x248af0: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x248af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_248af4:
    // 0x248af4: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x248af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_248af8:
    // 0x248af8: 0xc094d2c  jal         func_2534B0
label_248afc:
    if (ctx->pc == 0x248AFCu) {
        ctx->pc = 0x248B00u;
        goto label_248b00;
    }
    ctx->pc = 0x248AF8u;
    SET_GPR_U32(ctx, 31, 0x248B00u);
    ctx->pc = 0x2534B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2534B0u, 0x248AF8u, 0x248B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B00u;
label_248b00:
    // 0x248b00: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x248b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_248b04:
    // 0x248b04: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248b08:
    // 0x248b08: 0xc0422b8  jal         func_108AE0
label_248b0c:
    if (ctx->pc == 0x248B0Cu) {
        ctx->pc = 0x248B10u;
        goto label_248b10;
    }
    ctx->pc = 0x248B08u;
    SET_GPR_U32(ctx, 31, 0x248B10u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248B08u, 0x248B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B10u;
label_248b10:
    // 0x248b10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248b14:
    // 0x248b14: 0x27a50128  addiu       $a1, $sp, 0x128
    ctx->pc = 0x248b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_248b18:
    // 0x248b18: 0xc0422a8  jal         func_108AA0
label_248b1c:
    if (ctx->pc == 0x248B1Cu) {
        ctx->pc = 0x248B20u;
        goto label_248b20;
    }
    ctx->pc = 0x248B18u;
    SET_GPR_U32(ctx, 31, 0x248B20u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248B18u, 0x248B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B20u;
label_248b20:
    // 0x248b20: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x248b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248b24:
    // 0x248b24: 0x10000024  b           . + 4 + (0x24 << 2)
label_248b28:
    if (ctx->pc == 0x248B28u) {
        ctx->pc = 0x248B2Cu;
        goto label_248b2c;
    }
    ctx->pc = 0x248B24u;
    {
        const bool branch_taken_0x248b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b24) {
            ctx->pc = 0x248BB8u;
            goto label_248bb8;
        }
    }
    ctx->pc = 0x248B2Cu;
label_248b2c:
    // 0x248b2c: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248b30:
    // 0x248b30: 0xc0422b8  jal         func_108AE0
label_248b34:
    if (ctx->pc == 0x248B34u) {
        ctx->pc = 0x248B38u;
        goto label_248b38;
    }
    ctx->pc = 0x248B30u;
    SET_GPR_U32(ctx, 31, 0x248B38u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248B30u, 0x248B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B38u;
label_248b38:
    // 0x248b38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248b3c:
    // 0x248b3c: 0x27a5015c  addiu       $a1, $sp, 0x15C
    ctx->pc = 0x248b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_248b40:
    // 0x248b40: 0xc089164  jal         func_224590
label_248b44:
    if (ctx->pc == 0x248B44u) {
        ctx->pc = 0x248B48u;
        goto label_248b48;
    }
    ctx->pc = 0x248B40u;
    SET_GPR_U32(ctx, 31, 0x248B48u);
    ctx->pc = 0x224590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224590u, 0x248B40u, 0x248B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B48u;
label_248b48:
    // 0x248b48: 0x97a2015c  lhu         $v0, 0x15C($sp)
    ctx->pc = 0x248b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_248b4c:
    // 0x248b4c: 0x305effff  andi        $fp, $v0, 0xFFFF
    ctx->pc = 0x248b4cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_248b50:
    // 0x248b50: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_248b54:
    // 0x248b54: 0xc09246c  jal         func_2491B0
label_248b58:
    if (ctx->pc == 0x248B58u) {
        ctx->pc = 0x248B5Cu;
        goto label_248b5c;
    }
    ctx->pc = 0x248B54u;
    SET_GPR_U32(ctx, 31, 0x248B5Cu);
    ctx->pc = 0x2491B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491B0u, 0x248B54u, 0x248B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B5Cu;
label_248b5c:
    // 0x248b5c: 0x17c20009  bne         $fp, $v0, . + 4 + (0x9 << 2)
label_248b60:
    if (ctx->pc == 0x248B60u) {
        ctx->pc = 0x248B64u;
        goto label_248b64;
    }
    ctx->pc = 0x248B5Cu;
    {
        const bool branch_taken_0x248b5c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        if (branch_taken_0x248b5c) {
            ctx->pc = 0x248B84u;
            goto label_248b84;
        }
    }
    ctx->pc = 0x248B64u;
label_248b64:
    // 0x248b64: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248b68:
    // 0x248b68: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_248b6c:
    // 0x248b6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x248b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_248b70:
    // 0x248b70: 0xc064774  jal         func_191DD0
label_248b74:
    if (ctx->pc == 0x248B74u) {
        ctx->pc = 0x248B78u;
        goto label_248b78;
    }
    ctx->pc = 0x248B70u;
    SET_GPR_U32(ctx, 31, 0x248B78u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x248B70u, 0x248B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B78u;
label_248b78:
    // 0x248b78: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x248b78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_248b7c:
    // 0x248b7c: 0x1000000d  b           . + 4 + (0xD << 2)
label_248b80:
    if (ctx->pc == 0x248B80u) {
        ctx->pc = 0x248B84u;
        goto label_248b84;
    }
    ctx->pc = 0x248B7Cu;
    {
        const bool branch_taken_0x248b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248b7c) {
            ctx->pc = 0x248BB4u;
            goto label_248bb4;
        }
    }
    ctx->pc = 0x248B84u;
label_248b84:
    // 0x248b84: 0x97a2015c  lhu         $v0, 0x15C($sp)
    ctx->pc = 0x248b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 348)));
label_248b88:
    // 0x248b88: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x248b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_248b8c:
    // 0x248b8c: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_248b90:
    // 0x248b90: 0xc0923b0  jal         func_248EC0
label_248b94:
    if (ctx->pc == 0x248B94u) {
        ctx->pc = 0x248B98u;
        goto label_248b98;
    }
    ctx->pc = 0x248B90u;
    SET_GPR_U32(ctx, 31, 0x248B98u);
    ctx->pc = 0x248EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248EC0u, 0x248B90u, 0x248B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B98u;
label_248b98:
    // 0x248b98: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x248b98u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_248b9c:
    // 0x248b9c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248ba0:
    // 0x248ba0: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x248ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_248ba4:
    // 0x248ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x248ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_248ba8:
    // 0x248ba8: 0xc064774  jal         func_191DD0
label_248bac:
    if (ctx->pc == 0x248BACu) {
        ctx->pc = 0x248BB0u;
        goto label_248bb0;
    }
    ctx->pc = 0x248BA8u;
    SET_GPR_U32(ctx, 31, 0x248BB0u);
    ctx->pc = 0x191DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191DD0u, 0x248BA8u, 0x248BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BB0u;
label_248bb0:
    // 0x248bb0: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x248bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
label_248bb4:
    // 0x248bb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x248bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_248bb8:
    // 0x248bb8: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x248bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_248bbc:
    // 0x248bbc: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x248bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_248bc0:
    // 0x248bc0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x248bc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_248bc4:
    // 0x248bc4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x248bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_248bc8:
    // 0x248bc8: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_248bcc:
    if (ctx->pc == 0x248BCCu) {
        ctx->pc = 0x248BD0u;
        goto label_248bd0;
    }
    ctx->pc = 0x248BC8u;
    {
        const bool branch_taken_0x248bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248bc8) {
            ctx->pc = 0x248B2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248b2c;
        }
    }
    ctx->pc = 0x248BD0u;
label_248bd0:
    // 0x248bd0: 0x27a400f8  addiu       $a0, $sp, 0xF8
    ctx->pc = 0x248bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_248bd4:
    // 0x248bd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x248bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248bd8:
    // 0x248bd8: 0xc0923d4  jal         func_248F50
label_248bdc:
    if (ctx->pc == 0x248BDCu) {
        ctx->pc = 0x248BE0u;
        goto label_248be0;
    }
    ctx->pc = 0x248BD8u;
    SET_GPR_U32(ctx, 31, 0x248BE0u);
    ctx->pc = 0x248F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248F50u, 0x248BD8u, 0x248BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BE0u;
label_248be0:
    // 0x248be0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248be4:
    // 0x248be4: 0xc0422b8  jal         func_108AE0
label_248be8:
    if (ctx->pc == 0x248BE8u) {
        ctx->pc = 0x248BECu;
        goto label_248bec;
    }
    ctx->pc = 0x248BE4u;
    SET_GPR_U32(ctx, 31, 0x248BECu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248BE4u, 0x248BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BECu;
label_248bec:
    // 0x248bec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248bf0:
    // 0x248bf0: 0x27a50124  addiu       $a1, $sp, 0x124
    ctx->pc = 0x248bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_248bf4:
    // 0x248bf4: 0xc0422a8  jal         func_108AA0
label_248bf8:
    if (ctx->pc == 0x248BF8u) {
        ctx->pc = 0x248BFCu;
        goto label_248bfc;
    }
    ctx->pc = 0x248BF4u;
    SET_GPR_U32(ctx, 31, 0x248BFCu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248BF4u, 0x248BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248BFCu;
label_248bfc:
    // 0x248bfc: 0x10000054  b           . + 4 + (0x54 << 2)
label_248c00:
    if (ctx->pc == 0x248C00u) {
        ctx->pc = 0x248C04u;
        goto label_248c04;
    }
    ctx->pc = 0x248BFCu;
    {
        const bool branch_taken_0x248bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248bfc) {
            ctx->pc = 0x248D50u;
            goto label_248d50;
        }
    }
    ctx->pc = 0x248C04u;
label_248c04:
    // 0x248c04: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248c08:
    // 0x248c08: 0xc0422b8  jal         func_108AE0
label_248c0c:
    if (ctx->pc == 0x248C0Cu) {
        ctx->pc = 0x248C10u;
        goto label_248c10;
    }
    ctx->pc = 0x248C08u;
    SET_GPR_U32(ctx, 31, 0x248C10u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248C08u, 0x248C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C10u;
label_248c10:
    // 0x248c10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248c14:
    // 0x248c14: 0x27a5011c  addiu       $a1, $sp, 0x11C
    ctx->pc = 0x248c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_248c18:
    // 0x248c18: 0xc0422a8  jal         func_108AA0
label_248c1c:
    if (ctx->pc == 0x248C1Cu) {
        ctx->pc = 0x248C20u;
        goto label_248c20;
    }
    ctx->pc = 0x248C18u;
    SET_GPR_U32(ctx, 31, 0x248C20u);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248C18u, 0x248C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C20u;
label_248c20:
    // 0x248c20: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x248c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248c24:
    // 0x248c24: 0xc0422b8  jal         func_108AE0
label_248c28:
    if (ctx->pc == 0x248C28u) {
        ctx->pc = 0x248C2Cu;
        goto label_248c2c;
    }
    ctx->pc = 0x248C24u;
    SET_GPR_U32(ctx, 31, 0x248C2Cu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248C24u, 0x248C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C2Cu;
label_248c2c:
    // 0x248c2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248c30:
    // 0x248c30: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x248c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_248c34:
    // 0x248c34: 0xc0422a8  jal         func_108AA0
label_248c38:
    if (ctx->pc == 0x248C38u) {
        ctx->pc = 0x248C3Cu;
        goto label_248c3c;
    }
    ctx->pc = 0x248C34u;
    SET_GPR_U32(ctx, 31, 0x248C3Cu);
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x248C34u, 0x248C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C3Cu;
label_248c3c:
    // 0x248c3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x248c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_248c40:
    // 0x248c40: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x248c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_248c44:
    // 0x248c44: 0xc094d74  jal         func_2535D0
label_248c48:
    if (ctx->pc == 0x248C48u) {
        ctx->pc = 0x248C4Cu;
        goto label_248c4c;
    }
    ctx->pc = 0x248C44u;
    SET_GPR_U32(ctx, 31, 0x248C4Cu);
    ctx->pc = 0x2535D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2535D0u, 0x248C44u, 0x248C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C4Cu;
label_248c4c:
    // 0x248c4c: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x248c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248c50:
    // 0x248c50: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x248c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_248c54:
    // 0x248c54: 0x2445004c  addiu       $a1, $v0, 0x4C
    ctx->pc = 0x248c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
label_248c58:
    // 0x248c58: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x248c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_248c5c:
    // 0x248c5c: 0xc09237c  jal         func_248DF0
label_248c60:
    if (ctx->pc == 0x248C60u) {
        ctx->pc = 0x248C64u;
        goto label_248c64;
    }
    ctx->pc = 0x248C5Cu;
    SET_GPR_U32(ctx, 31, 0x248C64u);
    ctx->pc = 0x248DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DF0u, 0x248C5Cu, 0x248C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C64u;
label_248c64:
    // 0x248c64: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_248c68:
    // 0x248c68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x248c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_248c6c:
    // 0x248c6c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248c70:
    // 0x248c70: 0xc094d94  jal         func_253650
label_248c74:
    if (ctx->pc == 0x248C74u) {
        ctx->pc = 0x248C78u;
        goto label_248c78;
    }
    ctx->pc = 0x248C70u;
    SET_GPR_U32(ctx, 31, 0x248C78u);
    ctx->pc = 0x253650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253650u, 0x248C70u, 0x248C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C78u;
label_248c78:
    // 0x248c78: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x248c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_248c7c:
    // 0x248c7c: 0xc053b9c  jal         func_14EE70
label_248c80:
    if (ctx->pc == 0x248C80u) {
        ctx->pc = 0x248C84u;
        goto label_248c84;
    }
    ctx->pc = 0x248C7Cu;
    SET_GPR_U32(ctx, 31, 0x248C84u);
    ctx->pc = 0x14EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EE70u, 0x248C7Cu, 0x248C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C84u;
label_248c84:
    // 0x248c84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248c88:
    // 0x248c88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x248c88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248c8c:
    // 0x248c8c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x248c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_248c90:
    // 0x248c90: 0x2c450002  sltiu       $a1, $v0, 0x2
    ctx->pc = 0x248c90u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_248c94:
    // 0x248c94: 0x14a0002b  bnez        $a1, . + 4 + (0x2B << 2)
label_248c98:
    if (ctx->pc == 0x248C98u) {
        ctx->pc = 0x248C9Cu;
        goto label_248c9c;
    }
    ctx->pc = 0x248C94u;
    {
        const bool branch_taken_0x248c94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x248c94) {
            ctx->pc = 0x248D44u;
            goto label_248d44;
        }
    }
    ctx->pc = 0x248C9Cu;
label_248c9c:
    // 0x248c9c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x248c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248ca0:
    // 0x248ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248ca4:
    // 0x248ca4: 0xc0422b8  jal         func_108AE0
label_248ca8:
    if (ctx->pc == 0x248CA8u) {
        ctx->pc = 0x248CACu;
        goto label_248cac;
    }
    ctx->pc = 0x248CA4u;
    SET_GPR_U32(ctx, 31, 0x248CACu);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248CA4u, 0x248CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CACu;
label_248cac:
    // 0x248cac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248cb0:
    // 0x248cb0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x248cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_248cb4:
    // 0x248cb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248cb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248cb8:
    // 0x248cb8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x248cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_248cbc:
    // 0x248cbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x248cbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248cc0:
    // 0x248cc0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248cc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248cc4:
    // 0x248cc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x248cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248cc8:
    // 0x248cc8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x248cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_248ccc:
    // 0x248ccc: 0x320f809  jalr        $t9
label_248cd0:
    if (ctx->pc == 0x248CD0u) {
        ctx->pc = 0x248CD4u;
        goto label_248cd4;
    }
    ctx->pc = 0x248CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248CD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CCCu, 0x248CD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248CD4u;
label_248cd4:
    // 0x248cd4: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x248cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_248cd8:
    // 0x248cd8: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x248cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_248cdc:
    // 0x248cdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248ce0:
    // 0x248ce0: 0xc0a69c4  jal         func_29A710
label_248ce4:
    if (ctx->pc == 0x248CE4u) {
        ctx->pc = 0x248CE8u;
        goto label_248ce8;
    }
    ctx->pc = 0x248CE0u;
    SET_GPR_U32(ctx, 31, 0x248CE8u);
    ctx->pc = 0x29A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A710u, 0x248CE0u, 0x248CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CE8u;
label_248ce8:
    // 0x248ce8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248cec:
    // 0x248cec: 0xae240020  sw          $a0, 0x20($s1)
    ctx->pc = 0x248cecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 4));
label_248cf0:
    // 0x248cf0: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x248cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248cf4:
    // 0x248cf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248cf8:
    // 0x248cf8: 0xc0422b8  jal         func_108AE0
label_248cfc:
    if (ctx->pc == 0x248CFCu) {
        ctx->pc = 0x248D00u;
        goto label_248d00;
    }
    ctx->pc = 0x248CF8u;
    SET_GPR_U32(ctx, 31, 0x248D00u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248CF8u, 0x248D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D00u;
label_248d00:
    // 0x248d00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d04:
    // 0x248d04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x248d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_248d08:
    // 0x248d08: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x248d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_248d0c:
    // 0x248d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d10:
    // 0x248d10: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x248d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_248d14:
    // 0x248d14: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x248d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248d18:
    // 0x248d18: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x248d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_248d1c:
    // 0x248d1c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x248d1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_248d20:
    // 0x248d20: 0x320f809  jalr        $t9
label_248d24:
    if (ctx->pc == 0x248D24u) {
        ctx->pc = 0x248D28u;
        goto label_248d28;
    }
    ctx->pc = 0x248D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x248D28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248D20u, 0x248D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x248D28u;
label_248d28:
    // 0x248d28: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x248d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
label_248d2c:
    // 0x248d2c: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x248d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_248d30:
    // 0x248d30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d34:
    // 0x248d34: 0xc0a69c4  jal         func_29A710
label_248d38:
    if (ctx->pc == 0x248D38u) {
        ctx->pc = 0x248D3Cu;
        goto label_248d3c;
    }
    ctx->pc = 0x248D34u;
    SET_GPR_U32(ctx, 31, 0x248D3Cu);
    ctx->pc = 0x29A710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A710u, 0x248D34u, 0x248D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D3Cu;
label_248d3c:
    // 0x248d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x248d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d40:
    // 0x248d40: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x248d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
label_248d44:
    // 0x248d44: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x248d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_248d48:
    // 0x248d48: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x248d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_248d4c:
    // 0x248d4c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x248d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_248d50:
    // 0x248d50: 0x8fa40124  lw          $a0, 0x124($sp)
    ctx->pc = 0x248d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_248d54:
    // 0x248d54: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x248d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_248d58:
    // 0x248d58: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x248d58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
label_248d5c:
    // 0x248d5c: 0x1480ffa9  bnez        $a0, . + 4 + (-0x57 << 2)
label_248d60:
    if (ctx->pc == 0x248D60u) {
        ctx->pc = 0x248D64u;
        goto label_248d64;
    }
    ctx->pc = 0x248D5Cu;
    {
        const bool branch_taken_0x248d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x248d5c) {
            ctx->pc = 0x248C04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248c04;
        }
    }
    ctx->pc = 0x248D64u;
label_248d64:
    // 0x248d64: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x248d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248d68:
    // 0x248d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248d6c:
    // 0x248d6c: 0xc093174  jal         func_24C5D0
label_248d70:
    if (ctx->pc == 0x248D70u) {
        ctx->pc = 0x248D74u;
        goto label_248d74;
    }
    ctx->pc = 0x248D6Cu;
    SET_GPR_U32(ctx, 31, 0x248D74u);
    ctx->pc = 0x24C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C5D0u, 0x248D6Cu, 0x248D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D74u;
label_248d74:
    // 0x248d74: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x248d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_248d78:
    // 0x248d78: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x248d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_248d7c:
    // 0x248d7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248d80:
    // 0x248d80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x248d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_248d84:
    // 0x248d84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248d84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248d88:
    // 0x248d88: 0xc0913a0  jal         func_244E80
label_248d8c:
    if (ctx->pc == 0x248D8Cu) {
        ctx->pc = 0x248D90u;
        goto label_248d90;
    }
    ctx->pc = 0x248D88u;
    SET_GPR_U32(ctx, 31, 0x248D90u);
    ctx->pc = 0x244E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244E80u, 0x248D88u, 0x248D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248D90u;
label_248d90:
    // 0x248d90: 0x8fb60170  lw          $s6, 0x170($sp)
    ctx->pc = 0x248d90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_248d94:
    // 0x248d94: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x248d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_248d98:
    // 0x248d98: 0xc0422b8  jal         func_108AE0
label_248d9c:
    if (ctx->pc == 0x248D9Cu) {
        ctx->pc = 0x248DA0u;
        goto label_248da0;
    }
    ctx->pc = 0x248D98u;
    SET_GPR_U32(ctx, 31, 0x248DA0u);
    ctx->pc = 0x108AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AE0u, 0x248D98u, 0x248DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DA0u;
label_248da0:
    // 0x248da0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_248da4:
    // 0x248da4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x248da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248da8:
    // 0x248da8: 0xc08ec98  jal         func_23B260
label_248dac:
    if (ctx->pc == 0x248DACu) {
        ctx->pc = 0x248DB0u;
        goto label_248db0;
    }
    ctx->pc = 0x248DA8u;
    SET_GPR_U32(ctx, 31, 0x248DB0u);
    ctx->pc = 0x23B260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B260u, 0x248DA8u, 0x248DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DB0u;
label_248db0:
    // 0x248db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x248db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248db4:
    // 0x248db4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x248db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_248db8:
    // 0x248db8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x248db8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_248dbc:
    // 0x248dbc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x248dbcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_248dc0:
    // 0x248dc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x248dc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_248dc4:
    // 0x248dc4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x248dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_248dc8:
    // 0x248dc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x248dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_248dcc:
    // 0x248dcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x248dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_248dd0:
    // 0x248dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x248dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_248dd4:
    // 0x248dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x248dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_248dd8:
    // 0x248dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x248dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_248ddc:
    // 0x248ddc: 0x27bd0180  addiu       $sp, $sp, 0x180
    ctx->pc = 0x248ddcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_248de0:
    // 0x248de0: 0x3e00008  jr          $ra
label_248de4:
    if (ctx->pc == 0x248DE4u) {
        ctx->pc = 0x248DE8u;
        goto label_248de8;
    }
    ctx->pc = 0x248DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248DE8u;
label_248de8:
    // 0x248de8: 0x0  nop
    ctx->pc = 0x248de8u;
    // NOP
label_248dec:
    // 0x248dec: 0x0  nop
    ctx->pc = 0x248decu;
    // NOP
    ctx->pc = 0x248df0u;
}
