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

// Function: sub_00495520
// Address: 0x495520 - 0x495f80
void sub_00495520_0x495520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00495520_0x495520");
#endif

    switch (ctx->pc) {
        case 0x495520u: goto label_495520;
        case 0x495524u: goto label_495524;
        case 0x495528u: goto label_495528;
        case 0x49552cu: goto label_49552c;
        case 0x495530u: goto label_495530;
        case 0x495534u: goto label_495534;
        case 0x495538u: goto label_495538;
        case 0x49553cu: goto label_49553c;
        case 0x495540u: goto label_495540;
        case 0x495544u: goto label_495544;
        case 0x495548u: goto label_495548;
        case 0x49554cu: goto label_49554c;
        case 0x495550u: goto label_495550;
        case 0x495554u: goto label_495554;
        case 0x495558u: goto label_495558;
        case 0x49555cu: goto label_49555c;
        case 0x495560u: goto label_495560;
        case 0x495564u: goto label_495564;
        case 0x495568u: goto label_495568;
        case 0x49556cu: goto label_49556c;
        case 0x495570u: goto label_495570;
        case 0x495574u: goto label_495574;
        case 0x495578u: goto label_495578;
        case 0x49557cu: goto label_49557c;
        case 0x495580u: goto label_495580;
        case 0x495584u: goto label_495584;
        case 0x495588u: goto label_495588;
        case 0x49558cu: goto label_49558c;
        case 0x495590u: goto label_495590;
        case 0x495594u: goto label_495594;
        case 0x495598u: goto label_495598;
        case 0x49559cu: goto label_49559c;
        case 0x4955a0u: goto label_4955a0;
        case 0x4955a4u: goto label_4955a4;
        case 0x4955a8u: goto label_4955a8;
        case 0x4955acu: goto label_4955ac;
        case 0x4955b0u: goto label_4955b0;
        case 0x4955b4u: goto label_4955b4;
        case 0x4955b8u: goto label_4955b8;
        case 0x4955bcu: goto label_4955bc;
        case 0x4955c0u: goto label_4955c0;
        case 0x4955c4u: goto label_4955c4;
        case 0x4955c8u: goto label_4955c8;
        case 0x4955ccu: goto label_4955cc;
        case 0x4955d0u: goto label_4955d0;
        case 0x4955d4u: goto label_4955d4;
        case 0x4955d8u: goto label_4955d8;
        case 0x4955dcu: goto label_4955dc;
        case 0x4955e0u: goto label_4955e0;
        case 0x4955e4u: goto label_4955e4;
        case 0x4955e8u: goto label_4955e8;
        case 0x4955ecu: goto label_4955ec;
        case 0x4955f0u: goto label_4955f0;
        case 0x4955f4u: goto label_4955f4;
        case 0x4955f8u: goto label_4955f8;
        case 0x4955fcu: goto label_4955fc;
        case 0x495600u: goto label_495600;
        case 0x495604u: goto label_495604;
        case 0x495608u: goto label_495608;
        case 0x49560cu: goto label_49560c;
        case 0x495610u: goto label_495610;
        case 0x495614u: goto label_495614;
        case 0x495618u: goto label_495618;
        case 0x49561cu: goto label_49561c;
        case 0x495620u: goto label_495620;
        case 0x495624u: goto label_495624;
        case 0x495628u: goto label_495628;
        case 0x49562cu: goto label_49562c;
        case 0x495630u: goto label_495630;
        case 0x495634u: goto label_495634;
        case 0x495638u: goto label_495638;
        case 0x49563cu: goto label_49563c;
        case 0x495640u: goto label_495640;
        case 0x495644u: goto label_495644;
        case 0x495648u: goto label_495648;
        case 0x49564cu: goto label_49564c;
        case 0x495650u: goto label_495650;
        case 0x495654u: goto label_495654;
        case 0x495658u: goto label_495658;
        case 0x49565cu: goto label_49565c;
        case 0x495660u: goto label_495660;
        case 0x495664u: goto label_495664;
        case 0x495668u: goto label_495668;
        case 0x49566cu: goto label_49566c;
        case 0x495670u: goto label_495670;
        case 0x495674u: goto label_495674;
        case 0x495678u: goto label_495678;
        case 0x49567cu: goto label_49567c;
        case 0x495680u: goto label_495680;
        case 0x495684u: goto label_495684;
        case 0x495688u: goto label_495688;
        case 0x49568cu: goto label_49568c;
        case 0x495690u: goto label_495690;
        case 0x495694u: goto label_495694;
        case 0x495698u: goto label_495698;
        case 0x49569cu: goto label_49569c;
        case 0x4956a0u: goto label_4956a0;
        case 0x4956a4u: goto label_4956a4;
        case 0x4956a8u: goto label_4956a8;
        case 0x4956acu: goto label_4956ac;
        case 0x4956b0u: goto label_4956b0;
        case 0x4956b4u: goto label_4956b4;
        case 0x4956b8u: goto label_4956b8;
        case 0x4956bcu: goto label_4956bc;
        case 0x4956c0u: goto label_4956c0;
        case 0x4956c4u: goto label_4956c4;
        case 0x4956c8u: goto label_4956c8;
        case 0x4956ccu: goto label_4956cc;
        case 0x4956d0u: goto label_4956d0;
        case 0x4956d4u: goto label_4956d4;
        case 0x4956d8u: goto label_4956d8;
        case 0x4956dcu: goto label_4956dc;
        case 0x4956e0u: goto label_4956e0;
        case 0x4956e4u: goto label_4956e4;
        case 0x4956e8u: goto label_4956e8;
        case 0x4956ecu: goto label_4956ec;
        case 0x4956f0u: goto label_4956f0;
        case 0x4956f4u: goto label_4956f4;
        case 0x4956f8u: goto label_4956f8;
        case 0x4956fcu: goto label_4956fc;
        case 0x495700u: goto label_495700;
        case 0x495704u: goto label_495704;
        case 0x495708u: goto label_495708;
        case 0x49570cu: goto label_49570c;
        case 0x495710u: goto label_495710;
        case 0x495714u: goto label_495714;
        case 0x495718u: goto label_495718;
        case 0x49571cu: goto label_49571c;
        case 0x495720u: goto label_495720;
        case 0x495724u: goto label_495724;
        case 0x495728u: goto label_495728;
        case 0x49572cu: goto label_49572c;
        case 0x495730u: goto label_495730;
        case 0x495734u: goto label_495734;
        case 0x495738u: goto label_495738;
        case 0x49573cu: goto label_49573c;
        case 0x495740u: goto label_495740;
        case 0x495744u: goto label_495744;
        case 0x495748u: goto label_495748;
        case 0x49574cu: goto label_49574c;
        case 0x495750u: goto label_495750;
        case 0x495754u: goto label_495754;
        case 0x495758u: goto label_495758;
        case 0x49575cu: goto label_49575c;
        case 0x495760u: goto label_495760;
        case 0x495764u: goto label_495764;
        case 0x495768u: goto label_495768;
        case 0x49576cu: goto label_49576c;
        case 0x495770u: goto label_495770;
        case 0x495774u: goto label_495774;
        case 0x495778u: goto label_495778;
        case 0x49577cu: goto label_49577c;
        case 0x495780u: goto label_495780;
        case 0x495784u: goto label_495784;
        case 0x495788u: goto label_495788;
        case 0x49578cu: goto label_49578c;
        case 0x495790u: goto label_495790;
        case 0x495794u: goto label_495794;
        case 0x495798u: goto label_495798;
        case 0x49579cu: goto label_49579c;
        case 0x4957a0u: goto label_4957a0;
        case 0x4957a4u: goto label_4957a4;
        case 0x4957a8u: goto label_4957a8;
        case 0x4957acu: goto label_4957ac;
        case 0x4957b0u: goto label_4957b0;
        case 0x4957b4u: goto label_4957b4;
        case 0x4957b8u: goto label_4957b8;
        case 0x4957bcu: goto label_4957bc;
        case 0x4957c0u: goto label_4957c0;
        case 0x4957c4u: goto label_4957c4;
        case 0x4957c8u: goto label_4957c8;
        case 0x4957ccu: goto label_4957cc;
        case 0x4957d0u: goto label_4957d0;
        case 0x4957d4u: goto label_4957d4;
        case 0x4957d8u: goto label_4957d8;
        case 0x4957dcu: goto label_4957dc;
        case 0x4957e0u: goto label_4957e0;
        case 0x4957e4u: goto label_4957e4;
        case 0x4957e8u: goto label_4957e8;
        case 0x4957ecu: goto label_4957ec;
        case 0x4957f0u: goto label_4957f0;
        case 0x4957f4u: goto label_4957f4;
        case 0x4957f8u: goto label_4957f8;
        case 0x4957fcu: goto label_4957fc;
        case 0x495800u: goto label_495800;
        case 0x495804u: goto label_495804;
        case 0x495808u: goto label_495808;
        case 0x49580cu: goto label_49580c;
        case 0x495810u: goto label_495810;
        case 0x495814u: goto label_495814;
        case 0x495818u: goto label_495818;
        case 0x49581cu: goto label_49581c;
        case 0x495820u: goto label_495820;
        case 0x495824u: goto label_495824;
        case 0x495828u: goto label_495828;
        case 0x49582cu: goto label_49582c;
        case 0x495830u: goto label_495830;
        case 0x495834u: goto label_495834;
        case 0x495838u: goto label_495838;
        case 0x49583cu: goto label_49583c;
        case 0x495840u: goto label_495840;
        case 0x495844u: goto label_495844;
        case 0x495848u: goto label_495848;
        case 0x49584cu: goto label_49584c;
        case 0x495850u: goto label_495850;
        case 0x495854u: goto label_495854;
        case 0x495858u: goto label_495858;
        case 0x49585cu: goto label_49585c;
        case 0x495860u: goto label_495860;
        case 0x495864u: goto label_495864;
        case 0x495868u: goto label_495868;
        case 0x49586cu: goto label_49586c;
        case 0x495870u: goto label_495870;
        case 0x495874u: goto label_495874;
        case 0x495878u: goto label_495878;
        case 0x49587cu: goto label_49587c;
        case 0x495880u: goto label_495880;
        case 0x495884u: goto label_495884;
        case 0x495888u: goto label_495888;
        case 0x49588cu: goto label_49588c;
        case 0x495890u: goto label_495890;
        case 0x495894u: goto label_495894;
        case 0x495898u: goto label_495898;
        case 0x49589cu: goto label_49589c;
        case 0x4958a0u: goto label_4958a0;
        case 0x4958a4u: goto label_4958a4;
        case 0x4958a8u: goto label_4958a8;
        case 0x4958acu: goto label_4958ac;
        case 0x4958b0u: goto label_4958b0;
        case 0x4958b4u: goto label_4958b4;
        case 0x4958b8u: goto label_4958b8;
        case 0x4958bcu: goto label_4958bc;
        case 0x4958c0u: goto label_4958c0;
        case 0x4958c4u: goto label_4958c4;
        case 0x4958c8u: goto label_4958c8;
        case 0x4958ccu: goto label_4958cc;
        case 0x4958d0u: goto label_4958d0;
        case 0x4958d4u: goto label_4958d4;
        case 0x4958d8u: goto label_4958d8;
        case 0x4958dcu: goto label_4958dc;
        case 0x4958e0u: goto label_4958e0;
        case 0x4958e4u: goto label_4958e4;
        case 0x4958e8u: goto label_4958e8;
        case 0x4958ecu: goto label_4958ec;
        case 0x4958f0u: goto label_4958f0;
        case 0x4958f4u: goto label_4958f4;
        case 0x4958f8u: goto label_4958f8;
        case 0x4958fcu: goto label_4958fc;
        case 0x495900u: goto label_495900;
        case 0x495904u: goto label_495904;
        case 0x495908u: goto label_495908;
        case 0x49590cu: goto label_49590c;
        case 0x495910u: goto label_495910;
        case 0x495914u: goto label_495914;
        case 0x495918u: goto label_495918;
        case 0x49591cu: goto label_49591c;
        case 0x495920u: goto label_495920;
        case 0x495924u: goto label_495924;
        case 0x495928u: goto label_495928;
        case 0x49592cu: goto label_49592c;
        case 0x495930u: goto label_495930;
        case 0x495934u: goto label_495934;
        case 0x495938u: goto label_495938;
        case 0x49593cu: goto label_49593c;
        case 0x495940u: goto label_495940;
        case 0x495944u: goto label_495944;
        case 0x495948u: goto label_495948;
        case 0x49594cu: goto label_49594c;
        case 0x495950u: goto label_495950;
        case 0x495954u: goto label_495954;
        case 0x495958u: goto label_495958;
        case 0x49595cu: goto label_49595c;
        case 0x495960u: goto label_495960;
        case 0x495964u: goto label_495964;
        case 0x495968u: goto label_495968;
        case 0x49596cu: goto label_49596c;
        case 0x495970u: goto label_495970;
        case 0x495974u: goto label_495974;
        case 0x495978u: goto label_495978;
        case 0x49597cu: goto label_49597c;
        case 0x495980u: goto label_495980;
        case 0x495984u: goto label_495984;
        case 0x495988u: goto label_495988;
        case 0x49598cu: goto label_49598c;
        case 0x495990u: goto label_495990;
        case 0x495994u: goto label_495994;
        case 0x495998u: goto label_495998;
        case 0x49599cu: goto label_49599c;
        case 0x4959a0u: goto label_4959a0;
        case 0x4959a4u: goto label_4959a4;
        case 0x4959a8u: goto label_4959a8;
        case 0x4959acu: goto label_4959ac;
        case 0x4959b0u: goto label_4959b0;
        case 0x4959b4u: goto label_4959b4;
        case 0x4959b8u: goto label_4959b8;
        case 0x4959bcu: goto label_4959bc;
        case 0x4959c0u: goto label_4959c0;
        case 0x4959c4u: goto label_4959c4;
        case 0x4959c8u: goto label_4959c8;
        case 0x4959ccu: goto label_4959cc;
        case 0x4959d0u: goto label_4959d0;
        case 0x4959d4u: goto label_4959d4;
        case 0x4959d8u: goto label_4959d8;
        case 0x4959dcu: goto label_4959dc;
        case 0x4959e0u: goto label_4959e0;
        case 0x4959e4u: goto label_4959e4;
        case 0x4959e8u: goto label_4959e8;
        case 0x4959ecu: goto label_4959ec;
        case 0x4959f0u: goto label_4959f0;
        case 0x4959f4u: goto label_4959f4;
        case 0x4959f8u: goto label_4959f8;
        case 0x4959fcu: goto label_4959fc;
        case 0x495a00u: goto label_495a00;
        case 0x495a04u: goto label_495a04;
        case 0x495a08u: goto label_495a08;
        case 0x495a0cu: goto label_495a0c;
        case 0x495a10u: goto label_495a10;
        case 0x495a14u: goto label_495a14;
        case 0x495a18u: goto label_495a18;
        case 0x495a1cu: goto label_495a1c;
        case 0x495a20u: goto label_495a20;
        case 0x495a24u: goto label_495a24;
        case 0x495a28u: goto label_495a28;
        case 0x495a2cu: goto label_495a2c;
        case 0x495a30u: goto label_495a30;
        case 0x495a34u: goto label_495a34;
        case 0x495a38u: goto label_495a38;
        case 0x495a3cu: goto label_495a3c;
        case 0x495a40u: goto label_495a40;
        case 0x495a44u: goto label_495a44;
        case 0x495a48u: goto label_495a48;
        case 0x495a4cu: goto label_495a4c;
        case 0x495a50u: goto label_495a50;
        case 0x495a54u: goto label_495a54;
        case 0x495a58u: goto label_495a58;
        case 0x495a5cu: goto label_495a5c;
        case 0x495a60u: goto label_495a60;
        case 0x495a64u: goto label_495a64;
        case 0x495a68u: goto label_495a68;
        case 0x495a6cu: goto label_495a6c;
        case 0x495a70u: goto label_495a70;
        case 0x495a74u: goto label_495a74;
        case 0x495a78u: goto label_495a78;
        case 0x495a7cu: goto label_495a7c;
        case 0x495a80u: goto label_495a80;
        case 0x495a84u: goto label_495a84;
        case 0x495a88u: goto label_495a88;
        case 0x495a8cu: goto label_495a8c;
        case 0x495a90u: goto label_495a90;
        case 0x495a94u: goto label_495a94;
        case 0x495a98u: goto label_495a98;
        case 0x495a9cu: goto label_495a9c;
        case 0x495aa0u: goto label_495aa0;
        case 0x495aa4u: goto label_495aa4;
        case 0x495aa8u: goto label_495aa8;
        case 0x495aacu: goto label_495aac;
        case 0x495ab0u: goto label_495ab0;
        case 0x495ab4u: goto label_495ab4;
        case 0x495ab8u: goto label_495ab8;
        case 0x495abcu: goto label_495abc;
        case 0x495ac0u: goto label_495ac0;
        case 0x495ac4u: goto label_495ac4;
        case 0x495ac8u: goto label_495ac8;
        case 0x495accu: goto label_495acc;
        case 0x495ad0u: goto label_495ad0;
        case 0x495ad4u: goto label_495ad4;
        case 0x495ad8u: goto label_495ad8;
        case 0x495adcu: goto label_495adc;
        case 0x495ae0u: goto label_495ae0;
        case 0x495ae4u: goto label_495ae4;
        case 0x495ae8u: goto label_495ae8;
        case 0x495aecu: goto label_495aec;
        case 0x495af0u: goto label_495af0;
        case 0x495af4u: goto label_495af4;
        case 0x495af8u: goto label_495af8;
        case 0x495afcu: goto label_495afc;
        case 0x495b00u: goto label_495b00;
        case 0x495b04u: goto label_495b04;
        case 0x495b08u: goto label_495b08;
        case 0x495b0cu: goto label_495b0c;
        case 0x495b10u: goto label_495b10;
        case 0x495b14u: goto label_495b14;
        case 0x495b18u: goto label_495b18;
        case 0x495b1cu: goto label_495b1c;
        case 0x495b20u: goto label_495b20;
        case 0x495b24u: goto label_495b24;
        case 0x495b28u: goto label_495b28;
        case 0x495b2cu: goto label_495b2c;
        case 0x495b30u: goto label_495b30;
        case 0x495b34u: goto label_495b34;
        case 0x495b38u: goto label_495b38;
        case 0x495b3cu: goto label_495b3c;
        case 0x495b40u: goto label_495b40;
        case 0x495b44u: goto label_495b44;
        case 0x495b48u: goto label_495b48;
        case 0x495b4cu: goto label_495b4c;
        case 0x495b50u: goto label_495b50;
        case 0x495b54u: goto label_495b54;
        case 0x495b58u: goto label_495b58;
        case 0x495b5cu: goto label_495b5c;
        case 0x495b60u: goto label_495b60;
        case 0x495b64u: goto label_495b64;
        case 0x495b68u: goto label_495b68;
        case 0x495b6cu: goto label_495b6c;
        case 0x495b70u: goto label_495b70;
        case 0x495b74u: goto label_495b74;
        case 0x495b78u: goto label_495b78;
        case 0x495b7cu: goto label_495b7c;
        case 0x495b80u: goto label_495b80;
        case 0x495b84u: goto label_495b84;
        case 0x495b88u: goto label_495b88;
        case 0x495b8cu: goto label_495b8c;
        case 0x495b90u: goto label_495b90;
        case 0x495b94u: goto label_495b94;
        case 0x495b98u: goto label_495b98;
        case 0x495b9cu: goto label_495b9c;
        case 0x495ba0u: goto label_495ba0;
        case 0x495ba4u: goto label_495ba4;
        case 0x495ba8u: goto label_495ba8;
        case 0x495bacu: goto label_495bac;
        case 0x495bb0u: goto label_495bb0;
        case 0x495bb4u: goto label_495bb4;
        case 0x495bb8u: goto label_495bb8;
        case 0x495bbcu: goto label_495bbc;
        case 0x495bc0u: goto label_495bc0;
        case 0x495bc4u: goto label_495bc4;
        case 0x495bc8u: goto label_495bc8;
        case 0x495bccu: goto label_495bcc;
        case 0x495bd0u: goto label_495bd0;
        case 0x495bd4u: goto label_495bd4;
        case 0x495bd8u: goto label_495bd8;
        case 0x495bdcu: goto label_495bdc;
        case 0x495be0u: goto label_495be0;
        case 0x495be4u: goto label_495be4;
        case 0x495be8u: goto label_495be8;
        case 0x495becu: goto label_495bec;
        case 0x495bf0u: goto label_495bf0;
        case 0x495bf4u: goto label_495bf4;
        case 0x495bf8u: goto label_495bf8;
        case 0x495bfcu: goto label_495bfc;
        case 0x495c00u: goto label_495c00;
        case 0x495c04u: goto label_495c04;
        case 0x495c08u: goto label_495c08;
        case 0x495c0cu: goto label_495c0c;
        case 0x495c10u: goto label_495c10;
        case 0x495c14u: goto label_495c14;
        case 0x495c18u: goto label_495c18;
        case 0x495c1cu: goto label_495c1c;
        case 0x495c20u: goto label_495c20;
        case 0x495c24u: goto label_495c24;
        case 0x495c28u: goto label_495c28;
        case 0x495c2cu: goto label_495c2c;
        case 0x495c30u: goto label_495c30;
        case 0x495c34u: goto label_495c34;
        case 0x495c38u: goto label_495c38;
        case 0x495c3cu: goto label_495c3c;
        case 0x495c40u: goto label_495c40;
        case 0x495c44u: goto label_495c44;
        case 0x495c48u: goto label_495c48;
        case 0x495c4cu: goto label_495c4c;
        case 0x495c50u: goto label_495c50;
        case 0x495c54u: goto label_495c54;
        case 0x495c58u: goto label_495c58;
        case 0x495c5cu: goto label_495c5c;
        case 0x495c60u: goto label_495c60;
        case 0x495c64u: goto label_495c64;
        case 0x495c68u: goto label_495c68;
        case 0x495c6cu: goto label_495c6c;
        case 0x495c70u: goto label_495c70;
        case 0x495c74u: goto label_495c74;
        case 0x495c78u: goto label_495c78;
        case 0x495c7cu: goto label_495c7c;
        case 0x495c80u: goto label_495c80;
        case 0x495c84u: goto label_495c84;
        case 0x495c88u: goto label_495c88;
        case 0x495c8cu: goto label_495c8c;
        case 0x495c90u: goto label_495c90;
        case 0x495c94u: goto label_495c94;
        case 0x495c98u: goto label_495c98;
        case 0x495c9cu: goto label_495c9c;
        case 0x495ca0u: goto label_495ca0;
        case 0x495ca4u: goto label_495ca4;
        case 0x495ca8u: goto label_495ca8;
        case 0x495cacu: goto label_495cac;
        case 0x495cb0u: goto label_495cb0;
        case 0x495cb4u: goto label_495cb4;
        case 0x495cb8u: goto label_495cb8;
        case 0x495cbcu: goto label_495cbc;
        case 0x495cc0u: goto label_495cc0;
        case 0x495cc4u: goto label_495cc4;
        case 0x495cc8u: goto label_495cc8;
        case 0x495cccu: goto label_495ccc;
        case 0x495cd0u: goto label_495cd0;
        case 0x495cd4u: goto label_495cd4;
        case 0x495cd8u: goto label_495cd8;
        case 0x495cdcu: goto label_495cdc;
        case 0x495ce0u: goto label_495ce0;
        case 0x495ce4u: goto label_495ce4;
        case 0x495ce8u: goto label_495ce8;
        case 0x495cecu: goto label_495cec;
        case 0x495cf0u: goto label_495cf0;
        case 0x495cf4u: goto label_495cf4;
        case 0x495cf8u: goto label_495cf8;
        case 0x495cfcu: goto label_495cfc;
        case 0x495d00u: goto label_495d00;
        case 0x495d04u: goto label_495d04;
        case 0x495d08u: goto label_495d08;
        case 0x495d0cu: goto label_495d0c;
        case 0x495d10u: goto label_495d10;
        case 0x495d14u: goto label_495d14;
        case 0x495d18u: goto label_495d18;
        case 0x495d1cu: goto label_495d1c;
        case 0x495d20u: goto label_495d20;
        case 0x495d24u: goto label_495d24;
        case 0x495d28u: goto label_495d28;
        case 0x495d2cu: goto label_495d2c;
        case 0x495d30u: goto label_495d30;
        case 0x495d34u: goto label_495d34;
        case 0x495d38u: goto label_495d38;
        case 0x495d3cu: goto label_495d3c;
        case 0x495d40u: goto label_495d40;
        case 0x495d44u: goto label_495d44;
        case 0x495d48u: goto label_495d48;
        case 0x495d4cu: goto label_495d4c;
        case 0x495d50u: goto label_495d50;
        case 0x495d54u: goto label_495d54;
        case 0x495d58u: goto label_495d58;
        case 0x495d5cu: goto label_495d5c;
        case 0x495d60u: goto label_495d60;
        case 0x495d64u: goto label_495d64;
        case 0x495d68u: goto label_495d68;
        case 0x495d6cu: goto label_495d6c;
        case 0x495d70u: goto label_495d70;
        case 0x495d74u: goto label_495d74;
        case 0x495d78u: goto label_495d78;
        case 0x495d7cu: goto label_495d7c;
        case 0x495d80u: goto label_495d80;
        case 0x495d84u: goto label_495d84;
        case 0x495d88u: goto label_495d88;
        case 0x495d8cu: goto label_495d8c;
        case 0x495d90u: goto label_495d90;
        case 0x495d94u: goto label_495d94;
        case 0x495d98u: goto label_495d98;
        case 0x495d9cu: goto label_495d9c;
        case 0x495da0u: goto label_495da0;
        case 0x495da4u: goto label_495da4;
        case 0x495da8u: goto label_495da8;
        case 0x495dacu: goto label_495dac;
        case 0x495db0u: goto label_495db0;
        case 0x495db4u: goto label_495db4;
        case 0x495db8u: goto label_495db8;
        case 0x495dbcu: goto label_495dbc;
        case 0x495dc0u: goto label_495dc0;
        case 0x495dc4u: goto label_495dc4;
        case 0x495dc8u: goto label_495dc8;
        case 0x495dccu: goto label_495dcc;
        case 0x495dd0u: goto label_495dd0;
        case 0x495dd4u: goto label_495dd4;
        case 0x495dd8u: goto label_495dd8;
        case 0x495ddcu: goto label_495ddc;
        case 0x495de0u: goto label_495de0;
        case 0x495de4u: goto label_495de4;
        case 0x495de8u: goto label_495de8;
        case 0x495decu: goto label_495dec;
        case 0x495df0u: goto label_495df0;
        case 0x495df4u: goto label_495df4;
        case 0x495df8u: goto label_495df8;
        case 0x495dfcu: goto label_495dfc;
        case 0x495e00u: goto label_495e00;
        case 0x495e04u: goto label_495e04;
        case 0x495e08u: goto label_495e08;
        case 0x495e0cu: goto label_495e0c;
        case 0x495e10u: goto label_495e10;
        case 0x495e14u: goto label_495e14;
        case 0x495e18u: goto label_495e18;
        case 0x495e1cu: goto label_495e1c;
        case 0x495e20u: goto label_495e20;
        case 0x495e24u: goto label_495e24;
        case 0x495e28u: goto label_495e28;
        case 0x495e2cu: goto label_495e2c;
        case 0x495e30u: goto label_495e30;
        case 0x495e34u: goto label_495e34;
        case 0x495e38u: goto label_495e38;
        case 0x495e3cu: goto label_495e3c;
        case 0x495e40u: goto label_495e40;
        case 0x495e44u: goto label_495e44;
        case 0x495e48u: goto label_495e48;
        case 0x495e4cu: goto label_495e4c;
        case 0x495e50u: goto label_495e50;
        case 0x495e54u: goto label_495e54;
        case 0x495e58u: goto label_495e58;
        case 0x495e5cu: goto label_495e5c;
        case 0x495e60u: goto label_495e60;
        case 0x495e64u: goto label_495e64;
        case 0x495e68u: goto label_495e68;
        case 0x495e6cu: goto label_495e6c;
        case 0x495e70u: goto label_495e70;
        case 0x495e74u: goto label_495e74;
        case 0x495e78u: goto label_495e78;
        case 0x495e7cu: goto label_495e7c;
        case 0x495e80u: goto label_495e80;
        case 0x495e84u: goto label_495e84;
        case 0x495e88u: goto label_495e88;
        case 0x495e8cu: goto label_495e8c;
        case 0x495e90u: goto label_495e90;
        case 0x495e94u: goto label_495e94;
        case 0x495e98u: goto label_495e98;
        case 0x495e9cu: goto label_495e9c;
        case 0x495ea0u: goto label_495ea0;
        case 0x495ea4u: goto label_495ea4;
        case 0x495ea8u: goto label_495ea8;
        case 0x495eacu: goto label_495eac;
        case 0x495eb0u: goto label_495eb0;
        case 0x495eb4u: goto label_495eb4;
        case 0x495eb8u: goto label_495eb8;
        case 0x495ebcu: goto label_495ebc;
        case 0x495ec0u: goto label_495ec0;
        case 0x495ec4u: goto label_495ec4;
        case 0x495ec8u: goto label_495ec8;
        case 0x495eccu: goto label_495ecc;
        case 0x495ed0u: goto label_495ed0;
        case 0x495ed4u: goto label_495ed4;
        case 0x495ed8u: goto label_495ed8;
        case 0x495edcu: goto label_495edc;
        case 0x495ee0u: goto label_495ee0;
        case 0x495ee4u: goto label_495ee4;
        case 0x495ee8u: goto label_495ee8;
        case 0x495eecu: goto label_495eec;
        case 0x495ef0u: goto label_495ef0;
        case 0x495ef4u: goto label_495ef4;
        case 0x495ef8u: goto label_495ef8;
        case 0x495efcu: goto label_495efc;
        case 0x495f00u: goto label_495f00;
        case 0x495f04u: goto label_495f04;
        case 0x495f08u: goto label_495f08;
        case 0x495f0cu: goto label_495f0c;
        case 0x495f10u: goto label_495f10;
        case 0x495f14u: goto label_495f14;
        case 0x495f18u: goto label_495f18;
        case 0x495f1cu: goto label_495f1c;
        case 0x495f20u: goto label_495f20;
        case 0x495f24u: goto label_495f24;
        case 0x495f28u: goto label_495f28;
        case 0x495f2cu: goto label_495f2c;
        case 0x495f30u: goto label_495f30;
        case 0x495f34u: goto label_495f34;
        case 0x495f38u: goto label_495f38;
        case 0x495f3cu: goto label_495f3c;
        case 0x495f40u: goto label_495f40;
        case 0x495f44u: goto label_495f44;
        case 0x495f48u: goto label_495f48;
        case 0x495f4cu: goto label_495f4c;
        case 0x495f50u: goto label_495f50;
        case 0x495f54u: goto label_495f54;
        case 0x495f58u: goto label_495f58;
        case 0x495f5cu: goto label_495f5c;
        case 0x495f60u: goto label_495f60;
        case 0x495f64u: goto label_495f64;
        case 0x495f68u: goto label_495f68;
        case 0x495f6cu: goto label_495f6c;
        case 0x495f70u: goto label_495f70;
        case 0x495f74u: goto label_495f74;
        case 0x495f78u: goto label_495f78;
        case 0x495f7cu: goto label_495f7c;
        default: break;
    }

    ctx->pc = 0x495520u;

label_495520:
    // 0x495520: 0x27bdf820  addiu       $sp, $sp, -0x7E0
    ctx->pc = 0x495520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965280));
label_495524:
    // 0x495524: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x495524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_495528:
    // 0x495528: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x495528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_49552c:
    // 0x49552c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x49552cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_495530:
    // 0x495530: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x495530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_495534:
    // 0x495534: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x495534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_495538:
    // 0x495538: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x495538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49553c:
    // 0x49553c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49553cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_495540:
    // 0x495540: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x495540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_495544:
    // 0x495544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x495544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_495548:
    // 0x495548: 0xafa407c0  sw          $a0, 0x7C0($sp)
    ctx->pc = 0x495548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1984), GPR_U32(ctx, 4));
label_49554c:
    // 0x49554c: 0xa3a507d0  sb          $a1, 0x7D0($sp)
    ctx->pc = 0x49554cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2000), (uint8_t)GPR_U32(ctx, 5));
label_495550:
    // 0x495550: 0x93a207d0  lbu         $v0, 0x7D0($sp)
    ctx->pc = 0x495550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2000)));
label_495554:
    // 0x495554: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x495554u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_495558:
    // 0x495558: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_49555c:
    if (ctx->pc == 0x49555Cu) {
        ctx->pc = 0x495560u;
        goto label_495560;
    }
    ctx->pc = 0x495558u;
    {
        const bool branch_taken_0x495558 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x495558) {
            ctx->pc = 0x49557Cu;
            goto label_49557c;
        }
    }
    ctx->pc = 0x495560u;
label_495560:
    // 0x495560: 0x8f85c15c  lw          $a1, -0x3EA4($gp)
    ctx->pc = 0x495560u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_495564:
    // 0x495564: 0x8fa207c0  lw          $v0, 0x7C0($sp)
    ctx->pc = 0x495564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1984)));
label_495568:
    // 0x495568: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_49556c:
    if (ctx->pc == 0x49556Cu) {
        ctx->pc = 0x495570u;
        goto label_495570;
    }
    ctx->pc = 0x495568u;
    {
        const bool branch_taken_0x495568 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x495568) {
            ctx->pc = 0x49557Cu;
            goto label_49557c;
        }
    }
    ctx->pc = 0x495570u;
label_495570:
    // 0x495570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x495570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495574:
    // 0x495574: 0x10000273  b           . + 4 + (0x273 << 2)
label_495578:
    if (ctx->pc == 0x495578u) {
        ctx->pc = 0x49557Cu;
        goto label_49557c;
    }
    ctx->pc = 0x495574u;
    {
        const bool branch_taken_0x495574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495574) {
            ctx->pc = 0x495F44u;
            goto label_495f44;
        }
    }
    ctx->pc = 0x49557Cu;
label_49557c:
    // 0x49557c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49557cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495580:
    // 0x495580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x495580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495584:
    // 0x495584: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x495584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_495588:
    // 0x495588: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x495588u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49558c:
    // 0x49558c: 0x8f84c15c  lw          $a0, -0x3EA4($gp)
    ctx->pc = 0x49558cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_495590:
    // 0x495590: 0xaf84c160  sw          $a0, -0x3EA0($gp)
    ctx->pc = 0x495590u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951264), GPR_U32(ctx, 4));
label_495594:
    // 0x495594: 0x8fa207c0  lw          $v0, 0x7C0($sp)
    ctx->pc = 0x495594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1984)));
label_495598:
    // 0x495598: 0xaf82c15c  sw          $v0, -0x3EA4($gp)
    ctx->pc = 0x495598u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951260), GPR_U32(ctx, 2));
label_49559c:
    // 0x49559c: 0x8f84c15c  lw          $a0, -0x3EA4($gp)
    ctx->pc = 0x49559cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_4955a0:
    // 0x4955a0: 0xc125a38  jal         func_4968E0
label_4955a4:
    if (ctx->pc == 0x4955A4u) {
        ctx->pc = 0x4955A8u;
        goto label_4955a8;
    }
    ctx->pc = 0x4955A0u;
    SET_GPR_U32(ctx, 31, 0x4955A8u);
    ctx->pc = 0x4968E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4968E0u, 0x4955A0u, 0x4955A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955A8u;
label_4955a8:
    // 0x4955a8: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x4955a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4955ac:
    // 0x4955ac: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x4955acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4955b0:
    // 0x4955b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4955b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4955b4:
    // 0x4955b4: 0xc0406d0  jal         func_101B40
label_4955b8:
    if (ctx->pc == 0x4955B8u) {
        ctx->pc = 0x4955BCu;
        goto label_4955bc;
    }
    ctx->pc = 0x4955B4u;
    SET_GPR_U32(ctx, 31, 0x4955BCu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x4955B4u, 0x4955BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955BCu;
label_4955bc:
    // 0x4955bc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x4955bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4955c0:
    // 0x4955c0: 0x8c427e78  lw          $v0, 0x7E78($v0)
    ctx->pc = 0x4955c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_4955c4:
    // 0x4955c4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x4955c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4955c8:
    // 0x4955c8: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x4955c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4955cc:
    // 0x4955cc: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x4955ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_4955d0:
    // 0x4955d0: 0x24a555e8  addiu       $a1, $a1, 0x55E8
    ctx->pc = 0x4955d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21992));
label_4955d4:
    // 0x4955d4: 0xc119600  jal         func_465800
label_4955d8:
    if (ctx->pc == 0x4955D8u) {
        ctx->pc = 0x4955DCu;
        goto label_4955dc;
    }
    ctx->pc = 0x4955D4u;
    SET_GPR_U32(ctx, 31, 0x4955DCu);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x4955D4u, 0x4955DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4955DCu;
label_4955dc:
    // 0x4955dc: 0x8f84c15c  lw          $a0, -0x3EA4($gp)
    ctx->pc = 0x4955dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951260)));
label_4955e0:
    // 0x4955e0: 0x2c810013  sltiu       $at, $a0, 0x13
    ctx->pc = 0x4955e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_4955e4:
    // 0x4955e4: 0x10200250  beqz        $at, . + 4 + (0x250 << 2)
label_4955e8:
    if (ctx->pc == 0x4955E8u) {
        ctx->pc = 0x4955ECu;
        goto label_4955ec;
    }
    ctx->pc = 0x4955E4u;
    {
        const bool branch_taken_0x4955e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4955e4) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x4955ECu;
label_4955ec:
    // 0x4955ec: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4955ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_4955f0:
    // 0x4955f0: 0x24a51e20  addiu       $a1, $a1, 0x1E20
    ctx->pc = 0x4955f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7712));
label_4955f4:
    // 0x4955f4: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x4955f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4955f8:
    // 0x4955f8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x4955f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_4955fc:
    // 0x4955fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4955fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_495600:
    // 0x495600: 0x400008  jr          $v0
label_495604:
    if (ctx->pc == 0x495604u) {
        ctx->pc = 0x495608u;
        goto label_495608;
    }
    ctx->pc = 0x495600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x495608u: goto label_495608;
            case 0x495628u: goto label_495628;
            case 0x495670u: goto label_495670;
            case 0x495798u: goto label_495798;
            case 0x4957BCu: goto label_4957bc;
            case 0x4957E8u: goto label_4957e8;
            case 0x49580Cu: goto label_49580c;
            case 0x495918u: goto label_495918;
            case 0x495C50u: goto label_495c50;
            case 0x495D64u: goto label_495d64;
            case 0x495D94u: goto label_495d94;
            case 0x495DC8u: goto label_495dc8;
            case 0x495E00u: goto label_495e00;
            case 0x495F1Cu: goto label_495f1c;
            case 0x495F28u: goto label_495f28;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495600u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x495608u;
label_495608:
    // 0x495608: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x495608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49560c:
    // 0x49560c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49560cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495610:
    // 0x495610: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x495610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495614:
    // 0x495614: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495618:
    // 0x495618: 0x40f809  jalr        $v0
label_49561c:
    if (ctx->pc == 0x49561Cu) {
        ctx->pc = 0x495620u;
        goto label_495620;
    }
    ctx->pc = 0x495618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495620u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495618u, 0x495620u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495620u;
label_495620:
    // 0x495620: 0x10000241  b           . + 4 + (0x241 << 2)
label_495624:
    if (ctx->pc == 0x495624u) {
        ctx->pc = 0x495628u;
        goto label_495628;
    }
    ctx->pc = 0x495620u;
    {
        const bool branch_taken_0x495620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495620) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495628u;
label_495628:
    // 0x495628: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x495628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_49562c:
    // 0x49562c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x49562cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_495630:
    // 0x495630: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495634:
    // 0x495634: 0x27a907b0  addiu       $t1, $sp, 0x7B0
    ctx->pc = 0x495634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495638:
    // 0x495638: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x495638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_49563c:
    // 0x49563c: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x49563cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495640:
    // 0x495640: 0x40f809  jalr        $v0
label_495644:
    if (ctx->pc == 0x495644u) {
        ctx->pc = 0x495648u;
        goto label_495648;
    }
    ctx->pc = 0x495640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495648u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495640u, 0x495648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495648u;
label_495648:
    // 0x495648: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x495648u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49564c:
    // 0x49564c: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
label_495650:
    if (ctx->pc == 0x495650u) {
        ctx->pc = 0x495654u;
        goto label_495654;
    }
    ctx->pc = 0x49564Cu;
    {
        const bool branch_taken_0x49564c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x49564c) {
            ctx->pc = 0x495660u;
            goto label_495660;
        }
    }
    ctx->pc = 0x495654u;
label_495654:
    // 0x495654: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x495654u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495658:
    // 0x495658: 0x10000002  b           . + 4 + (0x2 << 2)
label_49565c:
    if (ctx->pc == 0x49565Cu) {
        ctx->pc = 0x495660u;
        goto label_495660;
    }
    ctx->pc = 0x495658u;
    {
        const bool branch_taken_0x495658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495658) {
            ctx->pc = 0x495664u;
            goto label_495664;
        }
    }
    ctx->pc = 0x495660u;
label_495660:
    // 0x495660: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x495660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495664:
    // 0x495664: 0xaf92c148  sw          $s2, -0x3EB8($gp)
    ctx->pc = 0x495664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951240), GPR_U32(ctx, 18));
label_495668:
    // 0x495668: 0x1000022f  b           . + 4 + (0x22F << 2)
label_49566c:
    if (ctx->pc == 0x49566Cu) {
        ctx->pc = 0x495670u;
        goto label_495670;
    }
    ctx->pc = 0x495668u;
    {
        const bool branch_taken_0x495668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495668) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495670u;
label_495670:
    // 0x495670: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495674:
    // 0x495674: 0x8c427e78  lw          $v0, 0x7E78($v0)
    ctx->pc = 0x495674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495678:
    // 0x495678: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x495678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_49567c:
    // 0x49567c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x49567cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_495680:
    // 0x495680: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x495680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_495684:
    // 0x495684: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x495684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_495688:
    // 0x495688: 0x246381a0  addiu       $v1, $v1, -0x7E60
    ctx->pc = 0x495688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934944));
label_49568c:
    // 0x49568c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x49568cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_495690:
    // 0x495690: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495694:
    // 0x495694: 0x8c457e74  lw          $a1, 0x7E74($v0)
    ctx->pc = 0x495694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495698:
    // 0x495698: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x495698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49569c:
    // 0x49569c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49569cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_4956a0:
    // 0x4956a0: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x4956a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_4956a4:
    // 0x4956a4: 0xc117d0c  jal         func_45F430
label_4956a8:
    if (ctx->pc == 0x4956A8u) {
        ctx->pc = 0x4956ACu;
        goto label_4956ac;
    }
    ctx->pc = 0x4956A4u;
    SET_GPR_U32(ctx, 31, 0x4956ACu);
    ctx->pc = 0x45F430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F430u, 0x4956A4u, 0x4956ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4956ACu;
label_4956ac:
    // 0x4956ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4956acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4956b0:
    // 0x4956b0: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x4956b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_4956b4:
    // 0x4956b4: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x4956b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4956b8:
    // 0x4956b8: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x4956b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4956bc:
    // 0x4956bc: 0x14a00032  bnez        $a1, . + 4 + (0x32 << 2)
label_4956c0:
    if (ctx->pc == 0x4956C0u) {
        ctx->pc = 0x4956C4u;
        goto label_4956c4;
    }
    ctx->pc = 0x4956BCu;
    {
        const bool branch_taken_0x4956bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4956bc) {
            ctx->pc = 0x495788u;
            goto label_495788;
        }
    }
    ctx->pc = 0x4956C4u;
label_4956c4:
    // 0x4956c4: 0x8f86b770  lw          $a2, -0x4890($gp)
    ctx->pc = 0x4956c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948720)));
label_4956c8:
    // 0x4956c8: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
label_4956cc:
    if (ctx->pc == 0x4956CCu) {
        ctx->pc = 0x4956D0u;
        goto label_4956d0;
    }
    ctx->pc = 0x4956C8u;
    {
        const bool branch_taken_0x4956c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4956c8) {
            ctx->pc = 0x495788u;
            goto label_495788;
        }
    }
    ctx->pc = 0x4956D0u;
label_4956d0:
    // 0x4956d0: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x4956d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4956d4:
    // 0x4956d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4956d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4956d8:
    // 0x4956d8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4956d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4956dc:
    // 0x4956dc: 0x27a607a0  addiu       $a2, $sp, 0x7A0
    ctx->pc = 0x4956dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_4956e0:
    // 0x4956e0: 0xc115ee8  jal         func_457BA0
label_4956e4:
    if (ctx->pc == 0x4956E4u) {
        ctx->pc = 0x4956E8u;
        goto label_4956e8;
    }
    ctx->pc = 0x4956E0u;
    SET_GPR_U32(ctx, 31, 0x4956E8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4956E0u, 0x4956E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4956E8u;
label_4956e8:
    // 0x4956e8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4956ec:
    if (ctx->pc == 0x4956ECu) {
        ctx->pc = 0x4956F0u;
        goto label_4956f0;
    }
    ctx->pc = 0x4956E8u;
    {
        const bool branch_taken_0x4956e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4956e8) {
            ctx->pc = 0x495788u;
            goto label_495788;
        }
    }
    ctx->pc = 0x4956F0u;
label_4956f0:
    // 0x4956f0: 0x8fa507a8  lw          $a1, 0x7A8($sp)
    ctx->pc = 0x4956f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1960)));
label_4956f4:
    // 0x4956f4: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_4956f8:
    if (ctx->pc == 0x4956F8u) {
        ctx->pc = 0x4956FCu;
        goto label_4956fc;
    }
    ctx->pc = 0x4956F4u;
    {
        const bool branch_taken_0x4956f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4956f4) {
            ctx->pc = 0x495788u;
            goto label_495788;
        }
    }
    ctx->pc = 0x4956FCu;
label_4956fc:
    // 0x4956fc: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x4956fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_495700:
    // 0x495700: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x495700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495704:
    // 0x495704: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x495704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495708:
    // 0x495708: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_49570c:
    // 0x49570c: 0x8fa607a4  lw          $a2, 0x7A4($sp)
    ctx->pc = 0x49570cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1956)));
label_495710:
    // 0x495710: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x495710u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_495714:
    // 0x495714: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x495714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_495718:
    // 0x495718: 0x2408020d  addiu       $t0, $zero, 0x20D
    ctx->pc = 0x495718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 525));
label_49571c:
    // 0x49571c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x49571cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_495720:
    // 0x495720: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x495720u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495724:
    // 0x495724: 0xc113940  jal         func_44E500
label_495728:
    if (ctx->pc == 0x495728u) {
        ctx->pc = 0x49572Cu;
        goto label_49572c;
    }
    ctx->pc = 0x495724u;
    SET_GPR_U32(ctx, 31, 0x49572Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495724u, 0x49572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49572Cu;
label_49572c:
    // 0x49572c: 0x27a20630  addiu       $v0, $sp, 0x630
    ctx->pc = 0x49572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_495730:
    // 0x495730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495734:
    // 0x495734: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x495734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
label_495738:
    // 0x495738: 0x24a55620  addiu       $a1, $a1, 0x5620
    ctx->pc = 0x495738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22048));
label_49573c:
    // 0x49573c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495740:
    // 0x495740: 0x8c467e78  lw          $a2, 0x7E78($v0)
    ctx->pc = 0x495740u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495744:
    // 0x495744: 0xc115c24  jal         func_457090
label_495748:
    if (ctx->pc == 0x495748u) {
        ctx->pc = 0x49574Cu;
        goto label_49574c;
    }
    ctx->pc = 0x495744u;
    SET_GPR_U32(ctx, 31, 0x49574Cu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495744u, 0x49574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49574Cu;
label_49574c:
    // 0x49574c: 0x27a60630  addiu       $a2, $sp, 0x630
    ctx->pc = 0x49574cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_495750:
    // 0x495750: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x495750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495754:
    // 0x495754: 0x8fa207a8  lw          $v0, 0x7A8($sp)
    ctx->pc = 0x495754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1960)));
label_495758:
    // 0x495758: 0x40f809  jalr        $v0
label_49575c:
    if (ctx->pc == 0x49575Cu) {
        ctx->pc = 0x495760u;
        goto label_495760;
    }
    ctx->pc = 0x495758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495760u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495758u, 0x495760u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495760u;
label_495760:
    // 0x495760: 0xaf82b770  sw          $v0, -0x4890($gp)
    ctx->pc = 0x495760u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948720), GPR_U32(ctx, 2));
label_495764:
    // 0x495764: 0x8fa20630  lw          $v0, 0x630($sp)
    ctx->pc = 0x495764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1584)));
label_495768:
    // 0x495768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_49576c:
    if (ctx->pc == 0x49576Cu) {
        ctx->pc = 0x495770u;
        goto label_495770;
    }
    ctx->pc = 0x495768u;
    {
        const bool branch_taken_0x495768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495768) {
            ctx->pc = 0x495778u;
            goto label_495778;
        }
    }
    ctx->pc = 0x495770u;
label_495770:
    // 0x495770: 0xd  break       0
    ctx->pc = 0x495770u;
    runtime->handleBreak(rdram, ctx);
label_495774:
    // 0x495774: 0x0  nop
    ctx->pc = 0x495774u;
    // NOP
label_495778:
    // 0x495778: 0x27a40630  addiu       $a0, $sp, 0x630
    ctx->pc = 0x495778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1584));
label_49577c:
    // 0x49577c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x49577cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495780:
    // 0x495780: 0xc11392c  jal         func_44E4B0
label_495784:
    if (ctx->pc == 0x495784u) {
        ctx->pc = 0x495788u;
        goto label_495788;
    }
    ctx->pc = 0x495780u;
    SET_GPR_U32(ctx, 31, 0x495788u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495780u, 0x495788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495788u;
label_495788:
    // 0x495788: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x495788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49578c:
    // 0x49578c: 0xaf85b72c  sw          $a1, -0x48D4($gp)
    ctx->pc = 0x49578cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 5));
label_495790:
    // 0x495790: 0x100001e5  b           . + 4 + (0x1E5 << 2)
label_495794:
    if (ctx->pc == 0x495794u) {
        ctx->pc = 0x495798u;
        goto label_495798;
    }
    ctx->pc = 0x495790u;
    {
        const bool branch_taken_0x495790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495790) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495798u;
label_495798:
    // 0x495798: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x495798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49579c:
    // 0x49579c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x49579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4957a0:
    // 0x4957a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4957a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4957a4:
    // 0x4957a4: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x4957a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4957a8:
    // 0x4957a8: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4957a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4957ac:
    // 0x4957ac: 0x40f809  jalr        $v0
label_4957b0:
    if (ctx->pc == 0x4957B0u) {
        ctx->pc = 0x4957B4u;
        goto label_4957b4;
    }
    ctx->pc = 0x4957ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4957B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4957ACu, 0x4957B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4957B4u;
label_4957b4:
    // 0x4957b4: 0x100001dc  b           . + 4 + (0x1DC << 2)
label_4957b8:
    if (ctx->pc == 0x4957B8u) {
        ctx->pc = 0x4957BCu;
        goto label_4957bc;
    }
    ctx->pc = 0x4957B4u;
    {
        const bool branch_taken_0x4957b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4957b4) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x4957BCu;
label_4957bc:
    // 0x4957bc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x4957bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4957c0:
    // 0x4957c0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4957c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4957c4:
    // 0x4957c4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x4957c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4957c8:
    // 0x4957c8: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4957c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4957cc:
    // 0x4957cc: 0x27a907b0  addiu       $t1, $sp, 0x7B0
    ctx->pc = 0x4957ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4957d0:
    // 0x4957d0: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x4957d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4957d4:
    // 0x4957d4: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4957d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4957d8:
    // 0x4957d8: 0x40f809  jalr        $v0
label_4957dc:
    if (ctx->pc == 0x4957DCu) {
        ctx->pc = 0x4957E0u;
        goto label_4957e0;
    }
    ctx->pc = 0x4957D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4957E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4957D8u, 0x4957E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4957E0u;
label_4957e0:
    // 0x4957e0: 0x100001d1  b           . + 4 + (0x1D1 << 2)
label_4957e4:
    if (ctx->pc == 0x4957E4u) {
        ctx->pc = 0x4957E8u;
        goto label_4957e8;
    }
    ctx->pc = 0x4957E0u;
    {
        const bool branch_taken_0x4957e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4957e0) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x4957E8u;
label_4957e8:
    // 0x4957e8: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x4957e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4957ec:
    // 0x4957ec: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4957ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4957f0:
    // 0x4957f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4957f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4957f4:
    // 0x4957f4: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x4957f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4957f8:
    // 0x4957f8: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4957f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_4957fc:
    // 0x4957fc: 0x40f809  jalr        $v0
label_495800:
    if (ctx->pc == 0x495800u) {
        ctx->pc = 0x495804u;
        goto label_495804;
    }
    ctx->pc = 0x4957FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4957FCu, 0x495804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495804u;
label_495804:
    // 0x495804: 0x100001c8  b           . + 4 + (0x1C8 << 2)
label_495808:
    if (ctx->pc == 0x495808u) {
        ctx->pc = 0x49580Cu;
        goto label_49580c;
    }
    ctx->pc = 0x495804u;
    {
        const bool branch_taken_0x495804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495804) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x49580Cu;
label_49580c:
    // 0x49580c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495810:
    // 0x495810: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x495810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495814:
    // 0x495814: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495818:
    // 0x495818: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x495818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_49581c:
    // 0x49581c: 0xc117d54  jal         func_45F550
label_495820:
    if (ctx->pc == 0x495820u) {
        ctx->pc = 0x495824u;
        goto label_495824;
    }
    ctx->pc = 0x49581Cu;
    SET_GPR_U32(ctx, 31, 0x495824u);
    ctx->pc = 0x45F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F550u, 0x49581Cu, 0x495824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495824u;
label_495824:
    // 0x495824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x495824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495828:
    // 0x495828: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x495828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_49582c:
    // 0x49582c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x49582cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495830:
    // 0x495830: 0x307400ff  andi        $s4, $v1, 0xFF
    ctx->pc = 0x495830u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_495834:
    // 0x495834: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_495838:
    if (ctx->pc == 0x495838u) {
        ctx->pc = 0x49583Cu;
        goto label_49583c;
    }
    ctx->pc = 0x495834u;
    {
        const bool branch_taken_0x495834 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x495834) {
            ctx->pc = 0x4958E4u;
            goto label_4958e4;
        }
    }
    ctx->pc = 0x49583Cu;
label_49583c:
    // 0x49583c: 0x8f84b774  lw          $a0, -0x488C($gp)
    ctx->pc = 0x49583cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948724)));
label_495840:
    // 0x495840: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
label_495844:
    if (ctx->pc == 0x495844u) {
        ctx->pc = 0x495848u;
        goto label_495848;
    }
    ctx->pc = 0x495840u;
    {
        const bool branch_taken_0x495840 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495840) {
            ctx->pc = 0x4958E4u;
            goto label_4958e4;
        }
    }
    ctx->pc = 0x495848u;
label_495848:
    // 0x495848: 0x8f85bf38  lw          $a1, -0x40C8($gp)
    ctx->pc = 0x495848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_49584c:
    // 0x49584c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x49584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_495850:
    // 0x495850: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495854:
    // 0x495854: 0x27a60790  addiu       $a2, $sp, 0x790
    ctx->pc = 0x495854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1936));
label_495858:
    // 0x495858: 0xc115ee8  jal         func_457BA0
label_49585c:
    if (ctx->pc == 0x49585Cu) {
        ctx->pc = 0x495860u;
        goto label_495860;
    }
    ctx->pc = 0x495858u;
    SET_GPR_U32(ctx, 31, 0x495860u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x495858u, 0x495860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495860u;
label_495860:
    // 0x495860: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_495864:
    if (ctx->pc == 0x495864u) {
        ctx->pc = 0x495868u;
        goto label_495868;
    }
    ctx->pc = 0x495860u;
    {
        const bool branch_taken_0x495860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495860) {
            ctx->pc = 0x4958E4u;
            goto label_4958e4;
        }
    }
    ctx->pc = 0x495868u;
label_495868:
    // 0x495868: 0x8fa20798  lw          $v0, 0x798($sp)
    ctx->pc = 0x495868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1944)));
label_49586c:
    // 0x49586c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_495870:
    if (ctx->pc == 0x495870u) {
        ctx->pc = 0x495874u;
        goto label_495874;
    }
    ctx->pc = 0x49586Cu;
    {
        const bool branch_taken_0x49586c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x49586c) {
            ctx->pc = 0x4958E4u;
            goto label_4958e4;
        }
    }
    ctx->pc = 0x495874u;
label_495874:
    // 0x495874: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x495874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_495878:
    // 0x495878: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_49587c:
    // 0x49587c: 0x8fa60794  lw          $a2, 0x794($sp)
    ctx->pc = 0x49587cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1940)));
label_495880:
    // 0x495880: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x495880u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_495884:
    // 0x495884: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x495884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_495888:
    // 0x495888: 0x24080224  addiu       $t0, $zero, 0x224
    ctx->pc = 0x495888u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 548));
label_49588c:
    // 0x49588c: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x49588cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_495890:
    // 0x495890: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x495890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495894:
    // 0x495894: 0xc113940  jal         func_44E500
label_495898:
    if (ctx->pc == 0x495898u) {
        ctx->pc = 0x49589Cu;
        goto label_49589c;
    }
    ctx->pc = 0x495894u;
    SET_GPR_U32(ctx, 31, 0x49589Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495894u, 0x49589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49589Cu;
label_49589c:
    // 0x49589c: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x49589cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4958a0:
    // 0x4958a0: 0x2785b788  addiu       $a1, $gp, -0x4878
    ctx->pc = 0x4958a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_4958a4:
    // 0x4958a4: 0xc115c24  jal         func_457090
label_4958a8:
    if (ctx->pc == 0x4958A8u) {
        ctx->pc = 0x4958ACu;
        goto label_4958ac;
    }
    ctx->pc = 0x4958A4u;
    SET_GPR_U32(ctx, 31, 0x4958ACu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4958A4u, 0x4958ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4958ACu;
label_4958ac:
    // 0x4958ac: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x4958acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4958b0:
    // 0x4958b0: 0x8fa20798  lw          $v0, 0x798($sp)
    ctx->pc = 0x4958b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1944)));
label_4958b4:
    // 0x4958b4: 0x40f809  jalr        $v0
label_4958b8:
    if (ctx->pc == 0x4958B8u) {
        ctx->pc = 0x4958BCu;
        goto label_4958bc;
    }
    ctx->pc = 0x4958B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4958BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4958B4u, 0x4958BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4958BCu;
label_4958bc:
    // 0x4958bc: 0xaf82b774  sw          $v0, -0x488C($gp)
    ctx->pc = 0x4958bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948724), GPR_U32(ctx, 2));
label_4958c0:
    // 0x4958c0: 0x8fa20510  lw          $v0, 0x510($sp)
    ctx->pc = 0x4958c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1296)));
label_4958c4:
    // 0x4958c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4958c8:
    if (ctx->pc == 0x4958C8u) {
        ctx->pc = 0x4958CCu;
        goto label_4958cc;
    }
    ctx->pc = 0x4958C4u;
    {
        const bool branch_taken_0x4958c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4958c4) {
            ctx->pc = 0x4958D4u;
            goto label_4958d4;
        }
    }
    ctx->pc = 0x4958CCu;
label_4958cc:
    // 0x4958cc: 0xd  break       0
    ctx->pc = 0x4958ccu;
    runtime->handleBreak(rdram, ctx);
label_4958d0:
    // 0x4958d0: 0x0  nop
    ctx->pc = 0x4958d0u;
    // NOP
label_4958d4:
    // 0x4958d4: 0x27a40510  addiu       $a0, $sp, 0x510
    ctx->pc = 0x4958d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4958d8:
    // 0x4958d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4958d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4958dc:
    // 0x4958dc: 0xc11392c  jal         func_44E4B0
label_4958e0:
    if (ctx->pc == 0x4958E0u) {
        ctx->pc = 0x4958E4u;
        goto label_4958e4;
    }
    ctx->pc = 0x4958DCu;
    SET_GPR_U32(ctx, 31, 0x4958E4u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x4958DCu, 0x4958E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4958E4u;
label_4958e4:
    // 0x4958e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4958e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4958e8:
    // 0x4958e8: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_4958ec:
    if (ctx->pc == 0x4958ECu) {
        ctx->pc = 0x4958F0u;
        goto label_4958f0;
    }
    ctx->pc = 0x4958E8u;
    {
        const bool branch_taken_0x4958e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x4958e8) {
            ctx->pc = 0x495908u;
            goto label_495908;
        }
    }
    ctx->pc = 0x4958F0u;
label_4958f0:
    // 0x4958f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4958f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4958f4:
    // 0x4958f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4958f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4958f8:
    // 0x4958f8: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x4958f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_4958fc:
    // 0x4958fc: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x4958fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495900:
    // 0x495900: 0x40f809  jalr        $v0
label_495904:
    if (ctx->pc == 0x495904u) {
        ctx->pc = 0x495908u;
        goto label_495908;
    }
    ctx->pc = 0x495900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495908u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495900u, 0x495908u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495908u;
label_495908:
    // 0x495908: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x495908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49590c:
    // 0x49590c: 0xaf82b72c  sw          $v0, -0x48D4($gp)
    ctx->pc = 0x49590cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 2));
label_495910:
    // 0x495910: 0x10000185  b           . + 4 + (0x185 << 2)
label_495914:
    if (ctx->pc == 0x495914u) {
        ctx->pc = 0x495918u;
        goto label_495918;
    }
    ctx->pc = 0x495910u;
    {
        const bool branch_taken_0x495910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495910) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495918u;
label_495918:
    // 0x495918: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49591c:
    // 0x49591c: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x49591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_495920:
    // 0x495920: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x495920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_495924:
    // 0x495924: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
label_495928:
    if (ctx->pc == 0x495928u) {
        ctx->pc = 0x49592Cu;
        goto label_49592c;
    }
    ctx->pc = 0x495924u;
    {
        const bool branch_taken_0x495924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x495924) {
            ctx->pc = 0x495A70u;
            goto label_495a70;
        }
    }
    ctx->pc = 0x49592Cu;
label_49592c:
    // 0x49592c: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x49592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495930:
    // 0x495930: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x495930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_495934:
    // 0x495934: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495938:
    // 0x495938: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x495938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_49593c:
    // 0x49593c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x49593cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495940:
    // 0x495940: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495944:
    // 0x495944: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x495944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_495948:
    // 0x495948: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49594c:
    // 0x49594c: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x49594cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_495950:
    // 0x495950: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x495950u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495954:
    // 0x495954: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495958:
    // 0x495958: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x495958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_49595c:
    // 0x49595c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x49595cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495960:
    // 0x495960: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x495960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_495964:
    // 0x495964: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x495964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495968:
    // 0x495968: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_49596c:
    // 0x49596c: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x49596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495970:
    // 0x495970: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495974:
    // 0x495974: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x495974u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495978:
    // 0x495978: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x495978u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_49597c:
    // 0x49597c: 0x24c67ea4  addiu       $a2, $a2, 0x7EA4
    ctx->pc = 0x49597cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32420));
label_495980:
    // 0x495980: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x495980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
label_495984:
    // 0x495984: 0x8d0802dc  lw          $t0, 0x2DC($t0)
    ctx->pc = 0x495984u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 732)));
label_495988:
    // 0x495988: 0x8c690294  lw          $t1, 0x294($v1)
    ctx->pc = 0x495988u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_49598c:
    // 0x49598c: 0xc117eb8  jal         func_45FAE0
label_495990:
    if (ctx->pc == 0x495990u) {
        ctx->pc = 0x495994u;
        goto label_495994;
    }
    ctx->pc = 0x49598Cu;
    SET_GPR_U32(ctx, 31, 0x495994u);
    ctx->pc = 0x45FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45FAE0u, 0x49598Cu, 0x495994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495994u;
label_495994:
    // 0x495994: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x495994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495998:
    // 0x495998: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x495998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_49599c:
    // 0x49599c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x49599cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4959a0:
    // 0x4959a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4959a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4959a4:
    // 0x4959a4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_4959a8:
    if (ctx->pc == 0x4959A8u) {
        ctx->pc = 0x4959ACu;
        goto label_4959ac;
    }
    ctx->pc = 0x4959A4u;
    {
        const bool branch_taken_0x4959a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4959a4) {
            ctx->pc = 0x495A50u;
            goto label_495a50;
        }
    }
    ctx->pc = 0x4959ACu;
label_4959ac:
    // 0x4959ac: 0x8f82b778  lw          $v0, -0x4888($gp)
    ctx->pc = 0x4959acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948728)));
label_4959b0:
    // 0x4959b0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4959b4:
    if (ctx->pc == 0x4959B4u) {
        ctx->pc = 0x4959B8u;
        goto label_4959b8;
    }
    ctx->pc = 0x4959B0u;
    {
        const bool branch_taken_0x4959b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4959b0) {
            ctx->pc = 0x495A50u;
            goto label_495a50;
        }
    }
    ctx->pc = 0x4959B8u;
label_4959b8:
    // 0x4959b8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4959b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4959bc:
    // 0x4959bc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4959bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4959c0:
    // 0x4959c0: 0x27a60780  addiu       $a2, $sp, 0x780
    ctx->pc = 0x4959c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1920));
label_4959c4:
    // 0x4959c4: 0xc115ee8  jal         func_457BA0
label_4959c8:
    if (ctx->pc == 0x4959C8u) {
        ctx->pc = 0x4959CCu;
        goto label_4959cc;
    }
    ctx->pc = 0x4959C4u;
    SET_GPR_U32(ctx, 31, 0x4959CCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4959C4u, 0x4959CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4959CCu;
label_4959cc:
    // 0x4959cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4959d0:
    if (ctx->pc == 0x4959D0u) {
        ctx->pc = 0x4959D4u;
        goto label_4959d4;
    }
    ctx->pc = 0x4959CCu;
    {
        const bool branch_taken_0x4959cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4959cc) {
            ctx->pc = 0x495A50u;
            goto label_495a50;
        }
    }
    ctx->pc = 0x4959D4u;
label_4959d4:
    // 0x4959d4: 0x8fa20788  lw          $v0, 0x788($sp)
    ctx->pc = 0x4959d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1928)));
label_4959d8:
    // 0x4959d8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4959dc:
    if (ctx->pc == 0x4959DCu) {
        ctx->pc = 0x4959E0u;
        goto label_4959e0;
    }
    ctx->pc = 0x4959D8u;
    {
        const bool branch_taken_0x4959d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4959d8) {
            ctx->pc = 0x495A50u;
            goto label_495a50;
        }
    }
    ctx->pc = 0x4959E0u;
label_4959e0:
    // 0x4959e0: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x4959e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_4959e4:
    // 0x4959e4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4959e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4959e8:
    // 0x4959e8: 0x8fa60784  lw          $a2, 0x784($sp)
    ctx->pc = 0x4959e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1924)));
label_4959ec:
    // 0x4959ec: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x4959ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_4959f0:
    // 0x4959f0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x4959f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_4959f4:
    // 0x4959f4: 0x24080236  addiu       $t0, $zero, 0x236
    ctx->pc = 0x4959f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 566));
label_4959f8:
    // 0x4959f8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x4959f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_4959fc:
    // 0x4959fc: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x4959fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495a00:
    // 0x495a00: 0xc113940  jal         func_44E500
label_495a04:
    if (ctx->pc == 0x495A04u) {
        ctx->pc = 0x495A08u;
        goto label_495a08;
    }
    ctx->pc = 0x495A00u;
    SET_GPR_U32(ctx, 31, 0x495A08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495A00u, 0x495A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495A08u;
label_495a08:
    // 0x495a08: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x495a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_495a0c:
    // 0x495a0c: 0x2785b788  addiu       $a1, $gp, -0x4878
    ctx->pc = 0x495a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_495a10:
    // 0x495a10: 0xc115c24  jal         func_457090
label_495a14:
    if (ctx->pc == 0x495A14u) {
        ctx->pc = 0x495A18u;
        goto label_495a18;
    }
    ctx->pc = 0x495A10u;
    SET_GPR_U32(ctx, 31, 0x495A18u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495A10u, 0x495A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495A18u;
label_495a18:
    // 0x495a18: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x495a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_495a1c:
    // 0x495a1c: 0x8fa20788  lw          $v0, 0x788($sp)
    ctx->pc = 0x495a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1928)));
label_495a20:
    // 0x495a20: 0x40f809  jalr        $v0
label_495a24:
    if (ctx->pc == 0x495A24u) {
        ctx->pc = 0x495A28u;
        goto label_495a28;
    }
    ctx->pc = 0x495A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495A28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495A20u, 0x495A28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495A28u;
label_495a28:
    // 0x495a28: 0xaf82b778  sw          $v0, -0x4888($gp)
    ctx->pc = 0x495a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948728), GPR_U32(ctx, 2));
label_495a2c:
    // 0x495a2c: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x495a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_495a30:
    // 0x495a30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_495a34:
    if (ctx->pc == 0x495A34u) {
        ctx->pc = 0x495A38u;
        goto label_495a38;
    }
    ctx->pc = 0x495A30u;
    {
        const bool branch_taken_0x495a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495a30) {
            ctx->pc = 0x495A40u;
            goto label_495a40;
        }
    }
    ctx->pc = 0x495A38u;
label_495a38:
    // 0x495a38: 0xd  break       0
    ctx->pc = 0x495a38u;
    runtime->handleBreak(rdram, ctx);
label_495a3c:
    // 0x495a3c: 0x0  nop
    ctx->pc = 0x495a3cu;
    // NOP
label_495a40:
    // 0x495a40: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x495a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_495a44:
    // 0x495a44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495a48:
    // 0x495a48: 0xc11392c  jal         func_44E4B0
label_495a4c:
    if (ctx->pc == 0x495A4Cu) {
        ctx->pc = 0x495A50u;
        goto label_495a50;
    }
    ctx->pc = 0x495A48u;
    SET_GPR_U32(ctx, 31, 0x495A50u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495A48u, 0x495A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495A50u;
label_495a50:
    // 0x495a50: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x495a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_495a54:
    // 0x495a54: 0xaf82b72c  sw          $v0, -0x48D4($gp)
    ctx->pc = 0x495a54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 2));
label_495a58:
    // 0x495a58: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x495a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_495a5c:
    // 0x495a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495a60:
    // 0x495a60: 0xc125548  jal         func_495520
label_495a64:
    if (ctx->pc == 0x495A64u) {
        ctx->pc = 0x495A68u;
        goto label_495a68;
    }
    ctx->pc = 0x495A60u;
    SET_GPR_U32(ctx, 31, 0x495A68u);
    ctx->pc = 0x495520u;
    goto label_495520;
    ctx->pc = 0x495A68u;
label_495a68:
    // 0x495a68: 0x1000012f  b           . + 4 + (0x12F << 2)
label_495a6c:
    if (ctx->pc == 0x495A6Cu) {
        ctx->pc = 0x495A70u;
        goto label_495a70;
    }
    ctx->pc = 0x495A68u;
    {
        const bool branch_taken_0x495a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495a68) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495A70u;
label_495a70:
    // 0x495a70: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495a74:
    // 0x495a74: 0x8c437e70  lw          $v1, 0x7E70($v0)
    ctx->pc = 0x495a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32368)));
label_495a78:
    // 0x495a78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x495a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_495a7c:
    // 0x495a7c: 0x1462012a  bne         $v1, $v0, . + 4 + (0x12A << 2)
label_495a80:
    if (ctx->pc == 0x495A80u) {
        ctx->pc = 0x495A84u;
        goto label_495a84;
    }
    ctx->pc = 0x495A7Cu;
    {
        const bool branch_taken_0x495a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x495a7c) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495A84u;
label_495a84:
    // 0x495a84: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495a88:
    // 0x495a88: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_495a8c:
    if (ctx->pc == 0x495A8Cu) {
        ctx->pc = 0x495A90u;
        goto label_495a90;
    }
    ctx->pc = 0x495A88u;
    {
        const bool branch_taken_0x495a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495a88) {
            ctx->pc = 0x495B0Cu;
            goto label_495b0c;
        }
    }
    ctx->pc = 0x495A90u;
label_495a90:
    // 0x495a90: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x495a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_495a94:
    // 0x495a94: 0x24847e7d  addiu       $a0, $a0, 0x7E7D
    ctx->pc = 0x495a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32381));
label_495a98:
    // 0x495a98: 0xc0bc60c  jal         func_2F1830
label_495a9c:
    if (ctx->pc == 0x495A9Cu) {
        ctx->pc = 0x495AA0u;
        goto label_495aa0;
    }
    ctx->pc = 0x495A98u;
    SET_GPR_U32(ctx, 31, 0x495AA0u);
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x495A98u, 0x495AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495AA0u;
label_495aa0:
    // 0x495aa0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_495aa4:
    if (ctx->pc == 0x495AA4u) {
        ctx->pc = 0x495AA8u;
        goto label_495aa8;
    }
    ctx->pc = 0x495AA0u;
    {
        const bool branch_taken_0x495aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495aa0) {
            ctx->pc = 0x495B0Cu;
            goto label_495b0c;
        }
    }
    ctx->pc = 0x495AA8u;
label_495aa8:
    // 0x495aa8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495aac:
    // 0x495aac: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x495aacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495ab0:
    // 0x495ab0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495ab4:
    // 0x495ab4: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x495ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495ab8:
    // 0x495ab8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x495ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_495abc:
    // 0x495abc: 0x24c67ea4  addiu       $a2, $a2, 0x7EA4
    ctx->pc = 0x495abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32420));
label_495ac0:
    // 0x495ac0: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x495ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
label_495ac4:
    // 0x495ac4: 0x24e77e7d  addiu       $a3, $a3, 0x7E7D
    ctx->pc = 0x495ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32381));
label_495ac8:
    // 0x495ac8: 0xc118fec  jal         func_463FB0
label_495acc:
    if (ctx->pc == 0x495ACCu) {
        ctx->pc = 0x495AD0u;
        goto label_495ad0;
    }
    ctx->pc = 0x495AC8u;
    SET_GPR_U32(ctx, 31, 0x495AD0u);
    ctx->pc = 0x463FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463FB0u, 0x495AC8u, 0x495AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495AD0u;
label_495ad0:
    // 0x495ad0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x495ad0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495ad4:
    // 0x495ad4: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
label_495ad8:
    if (ctx->pc == 0x495AD8u) {
        ctx->pc = 0x495ADCu;
        goto label_495adc;
    }
    ctx->pc = 0x495AD4u;
    {
        const bool branch_taken_0x495ad4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x495ad4) {
            ctx->pc = 0x495B0Cu;
            goto label_495b0c;
        }
    }
    ctx->pc = 0x495ADCu;
label_495adc:
    // 0x495adc: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x495adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_495ae0:
    // 0x495ae0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495ae4:
    // 0x495ae4: 0xc125548  jal         func_495520
label_495ae8:
    if (ctx->pc == 0x495AE8u) {
        ctx->pc = 0x495AECu;
        goto label_495aec;
    }
    ctx->pc = 0x495AE4u;
    SET_GPR_U32(ctx, 31, 0x495AECu);
    ctx->pc = 0x495520u;
    goto label_495520;
    ctx->pc = 0x495AECu;
label_495aec:
    // 0x495aec: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x495aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495af0:
    // 0x495af0: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x495af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495af4:
    // 0x495af4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495af8:
    // 0x495af8: 0xc0406a0  jal         func_101A80
label_495afc:
    if (ctx->pc == 0x495AFCu) {
        ctx->pc = 0x495B00u;
        goto label_495b00;
    }
    ctx->pc = 0x495AF8u;
    SET_GPR_U32(ctx, 31, 0x495B00u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x495AF8u, 0x495B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B00u;
label_495b00:
    // 0x495b00: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x495b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_495b04:
    // 0x495b04: 0x1000010f  b           . + 4 + (0x10F << 2)
label_495b08:
    if (ctx->pc == 0x495B08u) {
        ctx->pc = 0x495B0Cu;
        goto label_495b0c;
    }
    ctx->pc = 0x495B04u;
    {
        const bool branch_taken_0x495b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495b04) {
            ctx->pc = 0x495F44u;
            goto label_495f44;
        }
    }
    ctx->pc = 0x495B0Cu;
label_495b0c:
    // 0x495b0c: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495b10:
    // 0x495b10: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x495b10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_495b14:
    // 0x495b14: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495b18:
    // 0x495b18: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x495b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_495b1c:
    // 0x495b1c: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x495b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495b20:
    // 0x495b20: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495b24:
    // 0x495b24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x495b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_495b28:
    // 0x495b28: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495b2c:
    // 0x495b2c: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x495b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_495b30:
    // 0x495b30: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x495b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495b34:
    // 0x495b34: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495b38:
    // 0x495b38: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x495b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_495b3c:
    // 0x495b3c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495b40:
    // 0x495b40: 0x24427e70  addiu       $v0, $v0, 0x7E70
    ctx->pc = 0x495b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32368));
label_495b44:
    // 0x495b44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x495b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_495b48:
    // 0x495b48: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495b4c:
    // 0x495b4c: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x495b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495b50:
    // 0x495b50: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495b54:
    // 0x495b54: 0x8c457e78  lw          $a1, 0x7E78($v0)
    ctx->pc = 0x495b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495b58:
    // 0x495b58: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x495b58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_495b5c:
    // 0x495b5c: 0x24c67ea4  addiu       $a2, $a2, 0x7EA4
    ctx->pc = 0x495b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32420));
label_495b60:
    // 0x495b60: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x495b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
label_495b64:
    // 0x495b64: 0x8d0802dc  lw          $t0, 0x2DC($t0)
    ctx->pc = 0x495b64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 732)));
label_495b68:
    // 0x495b68: 0x8c690294  lw          $t1, 0x294($v1)
    ctx->pc = 0x495b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
label_495b6c:
    // 0x495b6c: 0xc117e60  jal         func_45F980
label_495b70:
    if (ctx->pc == 0x495B70u) {
        ctx->pc = 0x495B74u;
        goto label_495b74;
    }
    ctx->pc = 0x495B6Cu;
    SET_GPR_U32(ctx, 31, 0x495B74u);
    ctx->pc = 0x45F980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F980u, 0x495B6Cu, 0x495B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495B74u;
label_495b74:
    // 0x495b74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x495b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495b78:
    // 0x495b78: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x495b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_495b7c:
    // 0x495b7c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x495b7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495b80:
    // 0x495b80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x495b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_495b84:
    // 0x495b84: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_495b88:
    if (ctx->pc == 0x495B88u) {
        ctx->pc = 0x495B8Cu;
        goto label_495b8c;
    }
    ctx->pc = 0x495B84u;
    {
        const bool branch_taken_0x495b84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495b84) {
            ctx->pc = 0x495C30u;
            goto label_495c30;
        }
    }
    ctx->pc = 0x495B8Cu;
label_495b8c:
    // 0x495b8c: 0x8f82b77c  lw          $v0, -0x4884($gp)
    ctx->pc = 0x495b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948732)));
label_495b90:
    // 0x495b90: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_495b94:
    if (ctx->pc == 0x495B94u) {
        ctx->pc = 0x495B98u;
        goto label_495b98;
    }
    ctx->pc = 0x495B90u;
    {
        const bool branch_taken_0x495b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495b90) {
            ctx->pc = 0x495C30u;
            goto label_495c30;
        }
    }
    ctx->pc = 0x495B98u;
label_495b98:
    // 0x495b98: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x495b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_495b9c:
    // 0x495b9c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495ba0:
    // 0x495ba0: 0x27a60770  addiu       $a2, $sp, 0x770
    ctx->pc = 0x495ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1904));
label_495ba4:
    // 0x495ba4: 0xc115ee8  jal         func_457BA0
label_495ba8:
    if (ctx->pc == 0x495BA8u) {
        ctx->pc = 0x495BACu;
        goto label_495bac;
    }
    ctx->pc = 0x495BA4u;
    SET_GPR_U32(ctx, 31, 0x495BACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x495BA4u, 0x495BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BACu;
label_495bac:
    // 0x495bac: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_495bb0:
    if (ctx->pc == 0x495BB0u) {
        ctx->pc = 0x495BB4u;
        goto label_495bb4;
    }
    ctx->pc = 0x495BACu;
    {
        const bool branch_taken_0x495bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495bac) {
            ctx->pc = 0x495C30u;
            goto label_495c30;
        }
    }
    ctx->pc = 0x495BB4u;
label_495bb4:
    // 0x495bb4: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x495bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_495bb8:
    // 0x495bb8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_495bbc:
    if (ctx->pc == 0x495BBCu) {
        ctx->pc = 0x495BC0u;
        goto label_495bc0;
    }
    ctx->pc = 0x495BB8u;
    {
        const bool branch_taken_0x495bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495bb8) {
            ctx->pc = 0x495C30u;
            goto label_495c30;
        }
    }
    ctx->pc = 0x495BC0u;
label_495bc0:
    // 0x495bc0: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x495bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_495bc4:
    // 0x495bc4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495bc8:
    // 0x495bc8: 0x8fa60774  lw          $a2, 0x774($sp)
    ctx->pc = 0x495bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1908)));
label_495bcc:
    // 0x495bcc: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x495bccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_495bd0:
    // 0x495bd0: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x495bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_495bd4:
    // 0x495bd4: 0x24080253  addiu       $t0, $zero, 0x253
    ctx->pc = 0x495bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 595));
label_495bd8:
    // 0x495bd8: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x495bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_495bdc:
    // 0x495bdc: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x495bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495be0:
    // 0x495be0: 0xc113940  jal         func_44E500
label_495be4:
    if (ctx->pc == 0x495BE4u) {
        ctx->pc = 0x495BE8u;
        goto label_495be8;
    }
    ctx->pc = 0x495BE0u;
    SET_GPR_U32(ctx, 31, 0x495BE8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495BE0u, 0x495BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BE8u;
label_495be8:
    // 0x495be8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x495be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_495bec:
    // 0x495bec: 0x2785b788  addiu       $a1, $gp, -0x4878
    ctx->pc = 0x495becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_495bf0:
    // 0x495bf0: 0xc115c24  jal         func_457090
label_495bf4:
    if (ctx->pc == 0x495BF4u) {
        ctx->pc = 0x495BF8u;
        goto label_495bf8;
    }
    ctx->pc = 0x495BF0u;
    SET_GPR_U32(ctx, 31, 0x495BF8u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495BF0u, 0x495BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495BF8u;
label_495bf8:
    // 0x495bf8: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x495bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_495bfc:
    // 0x495bfc: 0x8fa20778  lw          $v0, 0x778($sp)
    ctx->pc = 0x495bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1912)));
label_495c00:
    // 0x495c00: 0x40f809  jalr        $v0
label_495c04:
    if (ctx->pc == 0x495C04u) {
        ctx->pc = 0x495C08u;
        goto label_495c08;
    }
    ctx->pc = 0x495C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495C08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495C00u, 0x495C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495C08u;
label_495c08:
    // 0x495c08: 0xaf82b77c  sw          $v0, -0x4884($gp)
    ctx->pc = 0x495c08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948732), GPR_U32(ctx, 2));
label_495c0c:
    // 0x495c0c: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x495c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_495c10:
    // 0x495c10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_495c14:
    if (ctx->pc == 0x495C14u) {
        ctx->pc = 0x495C18u;
        goto label_495c18;
    }
    ctx->pc = 0x495C10u;
    {
        const bool branch_taken_0x495c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c10) {
            ctx->pc = 0x495C20u;
            goto label_495c20;
        }
    }
    ctx->pc = 0x495C18u;
label_495c18:
    // 0x495c18: 0xd  break       0
    ctx->pc = 0x495c18u;
    runtime->handleBreak(rdram, ctx);
label_495c1c:
    // 0x495c1c: 0x0  nop
    ctx->pc = 0x495c1cu;
    // NOP
label_495c20:
    // 0x495c20: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x495c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_495c24:
    // 0x495c24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495c28:
    // 0x495c28: 0xc11392c  jal         func_44E4B0
label_495c2c:
    if (ctx->pc == 0x495C2Cu) {
        ctx->pc = 0x495C30u;
        goto label_495c30;
    }
    ctx->pc = 0x495C28u;
    SET_GPR_U32(ctx, 31, 0x495C30u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495C28u, 0x495C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C30u;
label_495c30:
    // 0x495c30: 0x2411000e  addiu       $s1, $zero, 0xE
    ctx->pc = 0x495c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_495c34:
    // 0x495c34: 0xaf91b72c  sw          $s1, -0x48D4($gp)
    ctx->pc = 0x495c34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 17));
label_495c38:
    // 0x495c38: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x495c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_495c3c:
    // 0x495c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x495c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_495c40:
    // 0x495c40: 0xc125548  jal         func_495520
label_495c44:
    if (ctx->pc == 0x495C44u) {
        ctx->pc = 0x495C48u;
        goto label_495c48;
    }
    ctx->pc = 0x495C40u;
    SET_GPR_U32(ctx, 31, 0x495C48u);
    ctx->pc = 0x495520u;
    goto label_495520;
    ctx->pc = 0x495C48u;
label_495c48:
    // 0x495c48: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_495c4c:
    if (ctx->pc == 0x495C4Cu) {
        ctx->pc = 0x495C50u;
        goto label_495c50;
    }
    ctx->pc = 0x495C48u;
    {
        const bool branch_taken_0x495c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c48) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495C50u;
label_495c50:
    // 0x495c50: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495c54:
    // 0x495c54: 0x8c447e74  lw          $a0, 0x7E74($v0)
    ctx->pc = 0x495c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495c58:
    // 0x495c58: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495c5c:
    // 0x495c5c: 0x8c427e78  lw          $v0, 0x7E78($v0)
    ctx->pc = 0x495c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495c60:
    // 0x495c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495c64:
    // 0x495c64: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x495c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_495c68:
    // 0x495c68: 0x24c67ea4  addiu       $a2, $a2, 0x7EA4
    ctx->pc = 0x495c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32420));
label_495c6c:
    // 0x495c6c: 0x2782c178  addiu       $v0, $gp, -0x3E88
    ctx->pc = 0x495c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951288));
label_495c70:
    // 0x495c70: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x495c70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495c74:
    // 0x495c74: 0xc117d88  jal         func_45F620
label_495c78:
    if (ctx->pc == 0x495C78u) {
        ctx->pc = 0x495C7Cu;
        goto label_495c7c;
    }
    ctx->pc = 0x495C74u;
    SET_GPR_U32(ctx, 31, 0x495C7Cu);
    ctx->pc = 0x45F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F620u, 0x495C74u, 0x495C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495C7Cu;
label_495c7c:
    // 0x495c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x495c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495c80:
    // 0x495c80: 0x3a060001  xori        $a2, $s0, 0x1
    ctx->pc = 0x495c80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_495c84:
    // 0x495c84: 0x2cc40001  sltiu       $a0, $a2, 0x1
    ctx->pc = 0x495c84u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495c88:
    // 0x495c88: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x495c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_495c8c:
    // 0x495c8c: 0x14a00031  bnez        $a1, . + 4 + (0x31 << 2)
label_495c90:
    if (ctx->pc == 0x495C90u) {
        ctx->pc = 0x495C94u;
        goto label_495c94;
    }
    ctx->pc = 0x495C8Cu;
    {
        const bool branch_taken_0x495c8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x495c8c) {
            ctx->pc = 0x495D54u;
            goto label_495d54;
        }
    }
    ctx->pc = 0x495C94u;
label_495c94:
    // 0x495c94: 0x8f82b780  lw          $v0, -0x4880($gp)
    ctx->pc = 0x495c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948736)));
label_495c98:
    // 0x495c98: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_495c9c:
    if (ctx->pc == 0x495C9Cu) {
        ctx->pc = 0x495CA0u;
        goto label_495ca0;
    }
    ctx->pc = 0x495C98u;
    {
        const bool branch_taken_0x495c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495c98) {
            ctx->pc = 0x495D54u;
            goto label_495d54;
        }
    }
    ctx->pc = 0x495CA0u;
label_495ca0:
    // 0x495ca0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x495ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_495ca4:
    // 0x495ca4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495ca8:
    // 0x495ca8: 0x27a60760  addiu       $a2, $sp, 0x760
    ctx->pc = 0x495ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_495cac:
    // 0x495cac: 0xc115ee8  jal         func_457BA0
label_495cb0:
    if (ctx->pc == 0x495CB0u) {
        ctx->pc = 0x495CB4u;
        goto label_495cb4;
    }
    ctx->pc = 0x495CACu;
    SET_GPR_U32(ctx, 31, 0x495CB4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x495CACu, 0x495CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495CB4u;
label_495cb4:
    // 0x495cb4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_495cb8:
    if (ctx->pc == 0x495CB8u) {
        ctx->pc = 0x495CBCu;
        goto label_495cbc;
    }
    ctx->pc = 0x495CB4u;
    {
        const bool branch_taken_0x495cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495cb4) {
            ctx->pc = 0x495D54u;
            goto label_495d54;
        }
    }
    ctx->pc = 0x495CBCu;
label_495cbc:
    // 0x495cbc: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x495cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_495cc0:
    // 0x495cc0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_495cc4:
    if (ctx->pc == 0x495CC4u) {
        ctx->pc = 0x495CC8u;
        goto label_495cc8;
    }
    ctx->pc = 0x495CC0u;
    {
        const bool branch_taken_0x495cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495cc0) {
            ctx->pc = 0x495D54u;
            goto label_495d54;
        }
    }
    ctx->pc = 0x495CC8u;
label_495cc8:
    // 0x495cc8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x495cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_495ccc:
    // 0x495ccc: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x495cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495cd0:
    // 0x495cd0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x495cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495cd4:
    // 0x495cd4: 0x8fa20764  lw          $v0, 0x764($sp)
    ctx->pc = 0x495cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1892)));
label_495cd8:
    // 0x495cd8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x495cd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495cdc:
    // 0x495cdc: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x495cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
label_495ce0:
    // 0x495ce0: 0x24425210  addiu       $v0, $v0, 0x5210
    ctx->pc = 0x495ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21008));
label_495ce4:
    // 0x495ce4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x495ce4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495ce8:
    // 0x495ce8: 0x2408025f  addiu       $t0, $zero, 0x25F
    ctx->pc = 0x495ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
label_495cec:
    // 0x495cec: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x495cecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_495cf0:
    // 0x495cf0: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x495cf0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495cf4:
    // 0x495cf4: 0xc113940  jal         func_44E500
label_495cf8:
    if (ctx->pc == 0x495CF8u) {
        ctx->pc = 0x495CFCu;
        goto label_495cfc;
    }
    ctx->pc = 0x495CF4u;
    SET_GPR_U32(ctx, 31, 0x495CFCu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495CF4u, 0x495CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495CFCu;
label_495cfc:
    // 0x495cfc: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x495cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_495d00:
    // 0x495d00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495d04:
    // 0x495d04: 0x2792b788  addiu       $s2, $gp, -0x4878
    ctx->pc = 0x495d04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_495d08:
    // 0x495d08: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x495d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_495d0c:
    // 0x495d0c: 0xc115c24  jal         func_457090
label_495d10:
    if (ctx->pc == 0x495D10u) {
        ctx->pc = 0x495D14u;
        goto label_495d14;
    }
    ctx->pc = 0x495D0Cu;
    SET_GPR_U32(ctx, 31, 0x495D14u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495D0Cu, 0x495D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495D14u;
label_495d14:
    // 0x495d14: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x495d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_495d18:
    // 0x495d18: 0x8fa20768  lw          $v0, 0x768($sp)
    ctx->pc = 0x495d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1896)));
label_495d1c:
    // 0x495d1c: 0x40f809  jalr        $v0
label_495d20:
    if (ctx->pc == 0x495D20u) {
        ctx->pc = 0x495D24u;
        goto label_495d24;
    }
    ctx->pc = 0x495D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495D1Cu, 0x495D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495D24u;
label_495d24:
    // 0x495d24: 0xaf82b780  sw          $v0, -0x4880($gp)
    ctx->pc = 0x495d24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948736), GPR_U32(ctx, 2));
label_495d28:
    // 0x495d28: 0x8fa301b0  lw          $v1, 0x1B0($sp)
    ctx->pc = 0x495d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_495d2c:
    // 0x495d2c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_495d30:
    if (ctx->pc == 0x495D30u) {
        ctx->pc = 0x495D34u;
        goto label_495d34;
    }
    ctx->pc = 0x495D2Cu;
    {
        const bool branch_taken_0x495d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x495d2c) {
            ctx->pc = 0x495D3Cu;
            goto label_495d3c;
        }
    }
    ctx->pc = 0x495D34u;
label_495d34:
    // 0x495d34: 0xd  break       0
    ctx->pc = 0x495d34u;
    runtime->handleBreak(rdram, ctx);
label_495d38:
    // 0x495d38: 0x0  nop
    ctx->pc = 0x495d38u;
    // NOP
label_495d3c:
    // 0x495d3c: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x495d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_495d40:
    // 0x495d40: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x495d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495d44:
    // 0x495d44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495d48:
    // 0x495d48: 0xc11392c  jal         func_44E4B0
label_495d4c:
    if (ctx->pc == 0x495D4Cu) {
        ctx->pc = 0x495D50u;
        goto label_495d50;
    }
    ctx->pc = 0x495D48u;
    SET_GPR_U32(ctx, 31, 0x495D50u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495D48u, 0x495D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495D50u;
label_495d50:
    // 0x495d50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495d54:
    // 0x495d54: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x495d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_495d58:
    // 0x495d58: 0xaf82b72c  sw          $v0, -0x48D4($gp)
    ctx->pc = 0x495d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 2));
label_495d5c:
    // 0x495d5c: 0x10000072  b           . + 4 + (0x72 << 2)
label_495d60:
    if (ctx->pc == 0x495D60u) {
        ctx->pc = 0x495D64u;
        goto label_495d64;
    }
    ctx->pc = 0x495D5Cu;
    {
        const bool branch_taken_0x495d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495d5c) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495D64u;
label_495d64:
    // 0x495d64: 0x8f82c174  lw          $v0, -0x3E8C($gp)
    ctx->pc = 0x495d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495d68:
    // 0x495d68: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
label_495d6c:
    if (ctx->pc == 0x495D6Cu) {
        ctx->pc = 0x495D70u;
        goto label_495d70;
    }
    ctx->pc = 0x495D68u;
    {
        const bool branch_taken_0x495d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x495d68) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495D70u;
label_495d70:
    // 0x495d70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x495d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495d74:
    // 0x495d74: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x495d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_495d78:
    // 0x495d78: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x495d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495d7c:
    // 0x495d7c: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495d80:
    // 0x495d80: 0x40f809  jalr        $v0
label_495d84:
    if (ctx->pc == 0x495D84u) {
        ctx->pc = 0x495D88u;
        goto label_495d88;
    }
    ctx->pc = 0x495D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495D88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495D80u, 0x495D88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495D88u;
label_495d88:
    // 0x495d88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495d8c:
    // 0x495d8c: 0x10000066  b           . + 4 + (0x66 << 2)
label_495d90:
    if (ctx->pc == 0x495D90u) {
        ctx->pc = 0x495D94u;
        goto label_495d94;
    }
    ctx->pc = 0x495D8Cu;
    {
        const bool branch_taken_0x495d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495d8c) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495D94u;
label_495d94:
    // 0x495d94: 0x8f86c174  lw          $a2, -0x3E8C($gp)
    ctx->pc = 0x495d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951284)));
label_495d98:
    // 0x495d98: 0x14c00063  bnez        $a2, . + 4 + (0x63 << 2)
label_495d9c:
    if (ctx->pc == 0x495D9Cu) {
        ctx->pc = 0x495DA0u;
        goto label_495da0;
    }
    ctx->pc = 0x495D98u;
    {
        const bool branch_taken_0x495d98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x495d98) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495DA0u;
label_495da0:
    // 0x495da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495da4:
    // 0x495da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495da8:
    // 0x495da8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x495da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_495dac:
    // 0x495dac: 0x27a607b0  addiu       $a2, $sp, 0x7B0
    ctx->pc = 0x495dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495db0:
    // 0x495db0: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495db4:
    // 0x495db4: 0x40f809  jalr        $v0
label_495db8:
    if (ctx->pc == 0x495DB8u) {
        ctx->pc = 0x495DBCu;
        goto label_495dbc;
    }
    ctx->pc = 0x495DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495DBCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495DB4u, 0x495DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495DBCu;
label_495dbc:
    // 0x495dbc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x495dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495dc0:
    // 0x495dc0: 0x10000059  b           . + 4 + (0x59 << 2)
label_495dc4:
    if (ctx->pc == 0x495DC4u) {
        ctx->pc = 0x495DC8u;
        goto label_495dc8;
    }
    ctx->pc = 0x495DC0u;
    {
        const bool branch_taken_0x495dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495dc0) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495DC8u;
label_495dc8:
    // 0x495dc8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x495dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_495dcc:
    // 0x495dcc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x495dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_495dd0:
    // 0x495dd0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x495dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_495dd4:
    // 0x495dd4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x495dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_495dd8:
    // 0x495dd8: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x495dd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_495ddc:
    // 0x495ddc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x495ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_495de0:
    // 0x495de0: 0x27a207b0  addiu       $v0, $sp, 0x7B0
    ctx->pc = 0x495de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495de4:
    // 0x495de4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x495de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495de8:
    // 0x495de8: 0x8f82c168  lw          $v0, -0x3E98($gp)
    ctx->pc = 0x495de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951272)));
label_495dec:
    // 0x495dec: 0x40f809  jalr        $v0
label_495df0:
    if (ctx->pc == 0x495DF0u) {
        ctx->pc = 0x495DF4u;
        goto label_495df4;
    }
    ctx->pc = 0x495DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x495DF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495DECu, 0x495DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495DF4u;
label_495df4:
    // 0x495df4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495df8:
    // 0x495df8: 0x1000004b  b           . + 4 + (0x4B << 2)
label_495dfc:
    if (ctx->pc == 0x495DFCu) {
        ctx->pc = 0x495E00u;
        goto label_495e00;
    }
    ctx->pc = 0x495DF8u;
    {
        const bool branch_taken_0x495df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495df8) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495E00u;
label_495e00:
    // 0x495e00: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495e04:
    // 0x495e04: 0x8c467e74  lw          $a2, 0x7E74($v0)
    ctx->pc = 0x495e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32372)));
label_495e08:
    // 0x495e08: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x495e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495e0c:
    // 0x495e0c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495e10:
    // 0x495e10: 0x8c427e78  lw          $v0, 0x7E78($v0)
    ctx->pc = 0x495e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32376)));
label_495e14:
    // 0x495e14: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e18:
    // 0x495e18: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x495e18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_495e1c:
    // 0x495e1c: 0x24c67ea4  addiu       $a2, $a2, 0x7EA4
    ctx->pc = 0x495e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32420));
label_495e20:
    // 0x495e20: 0xc117d68  jal         func_45F5A0
label_495e24:
    if (ctx->pc == 0x495E24u) {
        ctx->pc = 0x495E28u;
        goto label_495e28;
    }
    ctx->pc = 0x495E20u;
    SET_GPR_U32(ctx, 31, 0x495E28u);
    ctx->pc = 0x45F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45F5A0u, 0x495E20u, 0x495E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E28u;
label_495e28:
    // 0x495e28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x495e28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e2c:
    // 0x495e2c: 0x3a020001  xori        $v0, $s0, 0x1
    ctx->pc = 0x495e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)1);
label_495e30:
    // 0x495e30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x495e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_495e34:
    // 0x495e34: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x495e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_495e38:
    // 0x495e38: 0x14800034  bnez        $a0, . + 4 + (0x34 << 2)
label_495e3c:
    if (ctx->pc == 0x495E3Cu) {
        ctx->pc = 0x495E40u;
        goto label_495e40;
    }
    ctx->pc = 0x495E38u;
    {
        const bool branch_taken_0x495e38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x495e38) {
            ctx->pc = 0x495F0Cu;
            goto label_495f0c;
        }
    }
    ctx->pc = 0x495E40u;
label_495e40:
    // 0x495e40: 0x8f85b784  lw          $a1, -0x487C($gp)
    ctx->pc = 0x495e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948740)));
label_495e44:
    // 0x495e44: 0x10a00031  beqz        $a1, . + 4 + (0x31 << 2)
label_495e48:
    if (ctx->pc == 0x495E48u) {
        ctx->pc = 0x495E4Cu;
        goto label_495e4c;
    }
    ctx->pc = 0x495E44u;
    {
        const bool branch_taken_0x495e44 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e44) {
            ctx->pc = 0x495F0Cu;
            goto label_495f0c;
        }
    }
    ctx->pc = 0x495E4Cu;
label_495e4c:
    // 0x495e4c: 0x8f82bf38  lw          $v0, -0x40C8($gp)
    ctx->pc = 0x495e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_495e50:
    // 0x495e50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e54:
    // 0x495e54: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x495e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495e58:
    // 0x495e58: 0x27b10750  addiu       $s1, $sp, 0x750
    ctx->pc = 0x495e58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_495e5c:
    // 0x495e5c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x495e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_495e60:
    // 0x495e60: 0xc115ee8  jal         func_457BA0
label_495e64:
    if (ctx->pc == 0x495E64u) {
        ctx->pc = 0x495E68u;
        goto label_495e68;
    }
    ctx->pc = 0x495E60u;
    SET_GPR_U32(ctx, 31, 0x495E68u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x495E60u, 0x495E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495E68u;
label_495e68:
    // 0x495e68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e6c:
    // 0x495e6c: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_495e70:
    if (ctx->pc == 0x495E70u) {
        ctx->pc = 0x495E74u;
        goto label_495e74;
    }
    ctx->pc = 0x495E6Cu;
    {
        const bool branch_taken_0x495e6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e6c) {
            ctx->pc = 0x495F0Cu;
            goto label_495f0c;
        }
    }
    ctx->pc = 0x495E74u;
label_495e74:
    // 0x495e74: 0x8fa50758  lw          $a1, 0x758($sp)
    ctx->pc = 0x495e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_495e78:
    // 0x495e78: 0x10a00024  beqz        $a1, . + 4 + (0x24 << 2)
label_495e7c:
    if (ctx->pc == 0x495E7Cu) {
        ctx->pc = 0x495E80u;
        goto label_495e80;
    }
    ctx->pc = 0x495E78u;
    {
        const bool branch_taken_0x495e78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x495e78) {
            ctx->pc = 0x495F0Cu;
            goto label_495f0c;
        }
    }
    ctx->pc = 0x495E80u;
label_495e80:
    // 0x495e80: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x495e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_495e84:
    // 0x495e84: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x495e84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_495e88:
    // 0x495e88: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x495e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_495e8c:
    // 0x495e8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e90:
    // 0x495e90: 0x8fa20754  lw          $v0, 0x754($sp)
    ctx->pc = 0x495e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1876)));
label_495e94:
    // 0x495e94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x495e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495e98:
    // 0x495e98: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x495e98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_495e9c:
    // 0x495e9c: 0x24e75210  addiu       $a3, $a3, 0x5210
    ctx->pc = 0x495e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21008));
label_495ea0:
    // 0x495ea0: 0x2408027e  addiu       $t0, $zero, 0x27E
    ctx->pc = 0x495ea0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
label_495ea4:
    // 0x495ea4: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x495ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_495ea8:
    // 0x495ea8: 0x25295600  addiu       $t1, $t1, 0x5600
    ctx->pc = 0x495ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 22016));
label_495eac:
    // 0x495eac: 0xc113940  jal         func_44E500
label_495eb0:
    if (ctx->pc == 0x495EB0u) {
        ctx->pc = 0x495EB4u;
        goto label_495eb4;
    }
    ctx->pc = 0x495EACu;
    SET_GPR_U32(ctx, 31, 0x495EB4u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x495EACu, 0x495EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495EB4u;
label_495eb4:
    // 0x495eb4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x495eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_495eb8:
    // 0x495eb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495ebc:
    // 0x495ebc: 0x2791b788  addiu       $s1, $gp, -0x4878
    ctx->pc = 0x495ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948744));
label_495ec0:
    // 0x495ec0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x495ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_495ec4:
    // 0x495ec4: 0xc115c24  jal         func_457090
label_495ec8:
    if (ctx->pc == 0x495EC8u) {
        ctx->pc = 0x495ECCu;
        goto label_495ecc;
    }
    ctx->pc = 0x495EC4u;
    SET_GPR_U32(ctx, 31, 0x495ECCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x495EC4u, 0x495ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495ECCu;
label_495ecc:
    // 0x495ecc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x495eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495ed0:
    // 0x495ed0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x495ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_495ed4:
    // 0x495ed4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x495ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_495ed8:
    // 0x495ed8: 0x8fa60758  lw          $a2, 0x758($sp)
    ctx->pc = 0x495ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1880)));
label_495edc:
    // 0x495edc: 0xc0f809  jalr        $a2
label_495ee0:
    if (ctx->pc == 0x495EE0u) {
        ctx->pc = 0x495EE4u;
        goto label_495ee4;
    }
    ctx->pc = 0x495EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x495EE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495EDCu, 0x495EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x495EE4u;
label_495ee4:
    // 0x495ee4: 0xaf82b784  sw          $v0, -0x487C($gp)
    ctx->pc = 0x495ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948740), GPR_U32(ctx, 2));
label_495ee8:
    // 0x495ee8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x495ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_495eec:
    // 0x495eec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_495ef0:
    if (ctx->pc == 0x495EF0u) {
        ctx->pc = 0x495EF4u;
        goto label_495ef4;
    }
    ctx->pc = 0x495EECu;
    {
        const bool branch_taken_0x495eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495eec) {
            ctx->pc = 0x495EFCu;
            goto label_495efc;
        }
    }
    ctx->pc = 0x495EF4u;
label_495ef4:
    // 0x495ef4: 0xd  break       0
    ctx->pc = 0x495ef4u;
    runtime->handleBreak(rdram, ctx);
label_495ef8:
    // 0x495ef8: 0x0  nop
    ctx->pc = 0x495ef8u;
    // NOP
label_495efc:
    // 0x495efc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x495efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_495f00:
    // 0x495f00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495f04:
    // 0x495f04: 0xc11392c  jal         func_44E4B0
label_495f08:
    if (ctx->pc == 0x495F08u) {
        ctx->pc = 0x495F0Cu;
        goto label_495f0c;
    }
    ctx->pc = 0x495F04u;
    SET_GPR_U32(ctx, 31, 0x495F0Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x495F04u, 0x495F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495F0Cu;
label_495f0c:
    // 0x495f0c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x495f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_495f10:
    // 0x495f10: 0xaf82b72c  sw          $v0, -0x48D4($gp)
    ctx->pc = 0x495f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948652), GPR_U32(ctx, 2));
label_495f14:
    // 0x495f14: 0x10000004  b           . + 4 + (0x4 << 2)
label_495f18:
    if (ctx->pc == 0x495F18u) {
        ctx->pc = 0x495F1Cu;
        goto label_495f1c;
    }
    ctx->pc = 0x495F14u;
    {
        const bool branch_taken_0x495f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x495f14) {
            ctx->pc = 0x495F28u;
            goto label_495f28;
        }
    }
    ctx->pc = 0x495F1Cu;
label_495f1c:
    // 0x495f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x495f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495f20:
    // 0x495f20: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x495f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_495f24:
    // 0x495f24: 0xac437e70  sw          $v1, 0x7E70($v0)
    ctx->pc = 0x495f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32368), GPR_U32(ctx, 3));
label_495f28:
    // 0x495f28: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x495f28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_495f2c:
    // 0x495f2c: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x495f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_495f30:
    // 0x495f30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x495f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_495f34:
    // 0x495f34: 0xc0406a0  jal         func_101A80
label_495f38:
    if (ctx->pc == 0x495F38u) {
        ctx->pc = 0x495F3Cu;
        goto label_495f3c;
    }
    ctx->pc = 0x495F34u;
    SET_GPR_U32(ctx, 31, 0x495F3Cu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x495F34u, 0x495F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495F3Cu;
label_495f3c:
    // 0x495f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x495f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_495f40:
    // 0x495f40: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x495f40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_495f44:
    // 0x495f44: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x495f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_495f48:
    // 0x495f48: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x495f48u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_495f4c:
    // 0x495f4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x495f4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_495f50:
    // 0x495f50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x495f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_495f54:
    // 0x495f54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x495f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_495f58:
    // 0x495f58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x495f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_495f5c:
    // 0x495f5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x495f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_495f60:
    // 0x495f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x495f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_495f64:
    // 0x495f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x495f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_495f68:
    // 0x495f68: 0x27bd07e0  addiu       $sp, $sp, 0x7E0
    ctx->pc = 0x495f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
label_495f6c:
    // 0x495f6c: 0x3e00008  jr          $ra
label_495f70:
    if (ctx->pc == 0x495F70u) {
        ctx->pc = 0x495F74u;
        goto label_495f74;
    }
    ctx->pc = 0x495F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x495F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x495F74u;
label_495f74:
    // 0x495f74: 0x0  nop
    ctx->pc = 0x495f74u;
    // NOP
label_495f78:
    // 0x495f78: 0x0  nop
    ctx->pc = 0x495f78u;
    // NOP
label_495f7c:
    // 0x495f7c: 0x0  nop
    ctx->pc = 0x495f7cu;
    // NOP
    ctx->pc = 0x495f80u;
}
