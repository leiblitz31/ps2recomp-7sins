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

// Function: sub_002C8490
// Address: 0x2c8490 - 0x2c94e0
void sub_002C8490_0x2c8490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8490_0x2c8490");
#endif

    switch (ctx->pc) {
        case 0x2c8490u: goto label_2c8490;
        case 0x2c8494u: goto label_2c8494;
        case 0x2c8498u: goto label_2c8498;
        case 0x2c849cu: goto label_2c849c;
        case 0x2c84a0u: goto label_2c84a0;
        case 0x2c84a4u: goto label_2c84a4;
        case 0x2c84a8u: goto label_2c84a8;
        case 0x2c84acu: goto label_2c84ac;
        case 0x2c84b0u: goto label_2c84b0;
        case 0x2c84b4u: goto label_2c84b4;
        case 0x2c84b8u: goto label_2c84b8;
        case 0x2c84bcu: goto label_2c84bc;
        case 0x2c84c0u: goto label_2c84c0;
        case 0x2c84c4u: goto label_2c84c4;
        case 0x2c84c8u: goto label_2c84c8;
        case 0x2c84ccu: goto label_2c84cc;
        case 0x2c84d0u: goto label_2c84d0;
        case 0x2c84d4u: goto label_2c84d4;
        case 0x2c84d8u: goto label_2c84d8;
        case 0x2c84dcu: goto label_2c84dc;
        case 0x2c84e0u: goto label_2c84e0;
        case 0x2c84e4u: goto label_2c84e4;
        case 0x2c84e8u: goto label_2c84e8;
        case 0x2c84ecu: goto label_2c84ec;
        case 0x2c84f0u: goto label_2c84f0;
        case 0x2c84f4u: goto label_2c84f4;
        case 0x2c84f8u: goto label_2c84f8;
        case 0x2c84fcu: goto label_2c84fc;
        case 0x2c8500u: goto label_2c8500;
        case 0x2c8504u: goto label_2c8504;
        case 0x2c8508u: goto label_2c8508;
        case 0x2c850cu: goto label_2c850c;
        case 0x2c8510u: goto label_2c8510;
        case 0x2c8514u: goto label_2c8514;
        case 0x2c8518u: goto label_2c8518;
        case 0x2c851cu: goto label_2c851c;
        case 0x2c8520u: goto label_2c8520;
        case 0x2c8524u: goto label_2c8524;
        case 0x2c8528u: goto label_2c8528;
        case 0x2c852cu: goto label_2c852c;
        case 0x2c8530u: goto label_2c8530;
        case 0x2c8534u: goto label_2c8534;
        case 0x2c8538u: goto label_2c8538;
        case 0x2c853cu: goto label_2c853c;
        case 0x2c8540u: goto label_2c8540;
        case 0x2c8544u: goto label_2c8544;
        case 0x2c8548u: goto label_2c8548;
        case 0x2c854cu: goto label_2c854c;
        case 0x2c8550u: goto label_2c8550;
        case 0x2c8554u: goto label_2c8554;
        case 0x2c8558u: goto label_2c8558;
        case 0x2c855cu: goto label_2c855c;
        case 0x2c8560u: goto label_2c8560;
        case 0x2c8564u: goto label_2c8564;
        case 0x2c8568u: goto label_2c8568;
        case 0x2c856cu: goto label_2c856c;
        case 0x2c8570u: goto label_2c8570;
        case 0x2c8574u: goto label_2c8574;
        case 0x2c8578u: goto label_2c8578;
        case 0x2c857cu: goto label_2c857c;
        case 0x2c8580u: goto label_2c8580;
        case 0x2c8584u: goto label_2c8584;
        case 0x2c8588u: goto label_2c8588;
        case 0x2c858cu: goto label_2c858c;
        case 0x2c8590u: goto label_2c8590;
        case 0x2c8594u: goto label_2c8594;
        case 0x2c8598u: goto label_2c8598;
        case 0x2c859cu: goto label_2c859c;
        case 0x2c85a0u: goto label_2c85a0;
        case 0x2c85a4u: goto label_2c85a4;
        case 0x2c85a8u: goto label_2c85a8;
        case 0x2c85acu: goto label_2c85ac;
        case 0x2c85b0u: goto label_2c85b0;
        case 0x2c85b4u: goto label_2c85b4;
        case 0x2c85b8u: goto label_2c85b8;
        case 0x2c85bcu: goto label_2c85bc;
        case 0x2c85c0u: goto label_2c85c0;
        case 0x2c85c4u: goto label_2c85c4;
        case 0x2c85c8u: goto label_2c85c8;
        case 0x2c85ccu: goto label_2c85cc;
        case 0x2c85d0u: goto label_2c85d0;
        case 0x2c85d4u: goto label_2c85d4;
        case 0x2c85d8u: goto label_2c85d8;
        case 0x2c85dcu: goto label_2c85dc;
        case 0x2c85e0u: goto label_2c85e0;
        case 0x2c85e4u: goto label_2c85e4;
        case 0x2c85e8u: goto label_2c85e8;
        case 0x2c85ecu: goto label_2c85ec;
        case 0x2c85f0u: goto label_2c85f0;
        case 0x2c85f4u: goto label_2c85f4;
        case 0x2c85f8u: goto label_2c85f8;
        case 0x2c85fcu: goto label_2c85fc;
        case 0x2c8600u: goto label_2c8600;
        case 0x2c8604u: goto label_2c8604;
        case 0x2c8608u: goto label_2c8608;
        case 0x2c860cu: goto label_2c860c;
        case 0x2c8610u: goto label_2c8610;
        case 0x2c8614u: goto label_2c8614;
        case 0x2c8618u: goto label_2c8618;
        case 0x2c861cu: goto label_2c861c;
        case 0x2c8620u: goto label_2c8620;
        case 0x2c8624u: goto label_2c8624;
        case 0x2c8628u: goto label_2c8628;
        case 0x2c862cu: goto label_2c862c;
        case 0x2c8630u: goto label_2c8630;
        case 0x2c8634u: goto label_2c8634;
        case 0x2c8638u: goto label_2c8638;
        case 0x2c863cu: goto label_2c863c;
        case 0x2c8640u: goto label_2c8640;
        case 0x2c8644u: goto label_2c8644;
        case 0x2c8648u: goto label_2c8648;
        case 0x2c864cu: goto label_2c864c;
        case 0x2c8650u: goto label_2c8650;
        case 0x2c8654u: goto label_2c8654;
        case 0x2c8658u: goto label_2c8658;
        case 0x2c865cu: goto label_2c865c;
        case 0x2c8660u: goto label_2c8660;
        case 0x2c8664u: goto label_2c8664;
        case 0x2c8668u: goto label_2c8668;
        case 0x2c866cu: goto label_2c866c;
        case 0x2c8670u: goto label_2c8670;
        case 0x2c8674u: goto label_2c8674;
        case 0x2c8678u: goto label_2c8678;
        case 0x2c867cu: goto label_2c867c;
        case 0x2c8680u: goto label_2c8680;
        case 0x2c8684u: goto label_2c8684;
        case 0x2c8688u: goto label_2c8688;
        case 0x2c868cu: goto label_2c868c;
        case 0x2c8690u: goto label_2c8690;
        case 0x2c8694u: goto label_2c8694;
        case 0x2c8698u: goto label_2c8698;
        case 0x2c869cu: goto label_2c869c;
        case 0x2c86a0u: goto label_2c86a0;
        case 0x2c86a4u: goto label_2c86a4;
        case 0x2c86a8u: goto label_2c86a8;
        case 0x2c86acu: goto label_2c86ac;
        case 0x2c86b0u: goto label_2c86b0;
        case 0x2c86b4u: goto label_2c86b4;
        case 0x2c86b8u: goto label_2c86b8;
        case 0x2c86bcu: goto label_2c86bc;
        case 0x2c86c0u: goto label_2c86c0;
        case 0x2c86c4u: goto label_2c86c4;
        case 0x2c86c8u: goto label_2c86c8;
        case 0x2c86ccu: goto label_2c86cc;
        case 0x2c86d0u: goto label_2c86d0;
        case 0x2c86d4u: goto label_2c86d4;
        case 0x2c86d8u: goto label_2c86d8;
        case 0x2c86dcu: goto label_2c86dc;
        case 0x2c86e0u: goto label_2c86e0;
        case 0x2c86e4u: goto label_2c86e4;
        case 0x2c86e8u: goto label_2c86e8;
        case 0x2c86ecu: goto label_2c86ec;
        case 0x2c86f0u: goto label_2c86f0;
        case 0x2c86f4u: goto label_2c86f4;
        case 0x2c86f8u: goto label_2c86f8;
        case 0x2c86fcu: goto label_2c86fc;
        case 0x2c8700u: goto label_2c8700;
        case 0x2c8704u: goto label_2c8704;
        case 0x2c8708u: goto label_2c8708;
        case 0x2c870cu: goto label_2c870c;
        case 0x2c8710u: goto label_2c8710;
        case 0x2c8714u: goto label_2c8714;
        case 0x2c8718u: goto label_2c8718;
        case 0x2c871cu: goto label_2c871c;
        case 0x2c8720u: goto label_2c8720;
        case 0x2c8724u: goto label_2c8724;
        case 0x2c8728u: goto label_2c8728;
        case 0x2c872cu: goto label_2c872c;
        case 0x2c8730u: goto label_2c8730;
        case 0x2c8734u: goto label_2c8734;
        case 0x2c8738u: goto label_2c8738;
        case 0x2c873cu: goto label_2c873c;
        case 0x2c8740u: goto label_2c8740;
        case 0x2c8744u: goto label_2c8744;
        case 0x2c8748u: goto label_2c8748;
        case 0x2c874cu: goto label_2c874c;
        case 0x2c8750u: goto label_2c8750;
        case 0x2c8754u: goto label_2c8754;
        case 0x2c8758u: goto label_2c8758;
        case 0x2c875cu: goto label_2c875c;
        case 0x2c8760u: goto label_2c8760;
        case 0x2c8764u: goto label_2c8764;
        case 0x2c8768u: goto label_2c8768;
        case 0x2c876cu: goto label_2c876c;
        case 0x2c8770u: goto label_2c8770;
        case 0x2c8774u: goto label_2c8774;
        case 0x2c8778u: goto label_2c8778;
        case 0x2c877cu: goto label_2c877c;
        case 0x2c8780u: goto label_2c8780;
        case 0x2c8784u: goto label_2c8784;
        case 0x2c8788u: goto label_2c8788;
        case 0x2c878cu: goto label_2c878c;
        case 0x2c8790u: goto label_2c8790;
        case 0x2c8794u: goto label_2c8794;
        case 0x2c8798u: goto label_2c8798;
        case 0x2c879cu: goto label_2c879c;
        case 0x2c87a0u: goto label_2c87a0;
        case 0x2c87a4u: goto label_2c87a4;
        case 0x2c87a8u: goto label_2c87a8;
        case 0x2c87acu: goto label_2c87ac;
        case 0x2c87b0u: goto label_2c87b0;
        case 0x2c87b4u: goto label_2c87b4;
        case 0x2c87b8u: goto label_2c87b8;
        case 0x2c87bcu: goto label_2c87bc;
        case 0x2c87c0u: goto label_2c87c0;
        case 0x2c87c4u: goto label_2c87c4;
        case 0x2c87c8u: goto label_2c87c8;
        case 0x2c87ccu: goto label_2c87cc;
        case 0x2c87d0u: goto label_2c87d0;
        case 0x2c87d4u: goto label_2c87d4;
        case 0x2c87d8u: goto label_2c87d8;
        case 0x2c87dcu: goto label_2c87dc;
        case 0x2c87e0u: goto label_2c87e0;
        case 0x2c87e4u: goto label_2c87e4;
        case 0x2c87e8u: goto label_2c87e8;
        case 0x2c87ecu: goto label_2c87ec;
        case 0x2c87f0u: goto label_2c87f0;
        case 0x2c87f4u: goto label_2c87f4;
        case 0x2c87f8u: goto label_2c87f8;
        case 0x2c87fcu: goto label_2c87fc;
        case 0x2c8800u: goto label_2c8800;
        case 0x2c8804u: goto label_2c8804;
        case 0x2c8808u: goto label_2c8808;
        case 0x2c880cu: goto label_2c880c;
        case 0x2c8810u: goto label_2c8810;
        case 0x2c8814u: goto label_2c8814;
        case 0x2c8818u: goto label_2c8818;
        case 0x2c881cu: goto label_2c881c;
        case 0x2c8820u: goto label_2c8820;
        case 0x2c8824u: goto label_2c8824;
        case 0x2c8828u: goto label_2c8828;
        case 0x2c882cu: goto label_2c882c;
        case 0x2c8830u: goto label_2c8830;
        case 0x2c8834u: goto label_2c8834;
        case 0x2c8838u: goto label_2c8838;
        case 0x2c883cu: goto label_2c883c;
        case 0x2c8840u: goto label_2c8840;
        case 0x2c8844u: goto label_2c8844;
        case 0x2c8848u: goto label_2c8848;
        case 0x2c884cu: goto label_2c884c;
        case 0x2c8850u: goto label_2c8850;
        case 0x2c8854u: goto label_2c8854;
        case 0x2c8858u: goto label_2c8858;
        case 0x2c885cu: goto label_2c885c;
        case 0x2c8860u: goto label_2c8860;
        case 0x2c8864u: goto label_2c8864;
        case 0x2c8868u: goto label_2c8868;
        case 0x2c886cu: goto label_2c886c;
        case 0x2c8870u: goto label_2c8870;
        case 0x2c8874u: goto label_2c8874;
        case 0x2c8878u: goto label_2c8878;
        case 0x2c887cu: goto label_2c887c;
        case 0x2c8880u: goto label_2c8880;
        case 0x2c8884u: goto label_2c8884;
        case 0x2c8888u: goto label_2c8888;
        case 0x2c888cu: goto label_2c888c;
        case 0x2c8890u: goto label_2c8890;
        case 0x2c8894u: goto label_2c8894;
        case 0x2c8898u: goto label_2c8898;
        case 0x2c889cu: goto label_2c889c;
        case 0x2c88a0u: goto label_2c88a0;
        case 0x2c88a4u: goto label_2c88a4;
        case 0x2c88a8u: goto label_2c88a8;
        case 0x2c88acu: goto label_2c88ac;
        case 0x2c88b0u: goto label_2c88b0;
        case 0x2c88b4u: goto label_2c88b4;
        case 0x2c88b8u: goto label_2c88b8;
        case 0x2c88bcu: goto label_2c88bc;
        case 0x2c88c0u: goto label_2c88c0;
        case 0x2c88c4u: goto label_2c88c4;
        case 0x2c88c8u: goto label_2c88c8;
        case 0x2c88ccu: goto label_2c88cc;
        case 0x2c88d0u: goto label_2c88d0;
        case 0x2c88d4u: goto label_2c88d4;
        case 0x2c88d8u: goto label_2c88d8;
        case 0x2c88dcu: goto label_2c88dc;
        case 0x2c88e0u: goto label_2c88e0;
        case 0x2c88e4u: goto label_2c88e4;
        case 0x2c88e8u: goto label_2c88e8;
        case 0x2c88ecu: goto label_2c88ec;
        case 0x2c88f0u: goto label_2c88f0;
        case 0x2c88f4u: goto label_2c88f4;
        case 0x2c88f8u: goto label_2c88f8;
        case 0x2c88fcu: goto label_2c88fc;
        case 0x2c8900u: goto label_2c8900;
        case 0x2c8904u: goto label_2c8904;
        case 0x2c8908u: goto label_2c8908;
        case 0x2c890cu: goto label_2c890c;
        case 0x2c8910u: goto label_2c8910;
        case 0x2c8914u: goto label_2c8914;
        case 0x2c8918u: goto label_2c8918;
        case 0x2c891cu: goto label_2c891c;
        case 0x2c8920u: goto label_2c8920;
        case 0x2c8924u: goto label_2c8924;
        case 0x2c8928u: goto label_2c8928;
        case 0x2c892cu: goto label_2c892c;
        case 0x2c8930u: goto label_2c8930;
        case 0x2c8934u: goto label_2c8934;
        case 0x2c8938u: goto label_2c8938;
        case 0x2c893cu: goto label_2c893c;
        case 0x2c8940u: goto label_2c8940;
        case 0x2c8944u: goto label_2c8944;
        case 0x2c8948u: goto label_2c8948;
        case 0x2c894cu: goto label_2c894c;
        case 0x2c8950u: goto label_2c8950;
        case 0x2c8954u: goto label_2c8954;
        case 0x2c8958u: goto label_2c8958;
        case 0x2c895cu: goto label_2c895c;
        case 0x2c8960u: goto label_2c8960;
        case 0x2c8964u: goto label_2c8964;
        case 0x2c8968u: goto label_2c8968;
        case 0x2c896cu: goto label_2c896c;
        case 0x2c8970u: goto label_2c8970;
        case 0x2c8974u: goto label_2c8974;
        case 0x2c8978u: goto label_2c8978;
        case 0x2c897cu: goto label_2c897c;
        case 0x2c8980u: goto label_2c8980;
        case 0x2c8984u: goto label_2c8984;
        case 0x2c8988u: goto label_2c8988;
        case 0x2c898cu: goto label_2c898c;
        case 0x2c8990u: goto label_2c8990;
        case 0x2c8994u: goto label_2c8994;
        case 0x2c8998u: goto label_2c8998;
        case 0x2c899cu: goto label_2c899c;
        case 0x2c89a0u: goto label_2c89a0;
        case 0x2c89a4u: goto label_2c89a4;
        case 0x2c89a8u: goto label_2c89a8;
        case 0x2c89acu: goto label_2c89ac;
        case 0x2c89b0u: goto label_2c89b0;
        case 0x2c89b4u: goto label_2c89b4;
        case 0x2c89b8u: goto label_2c89b8;
        case 0x2c89bcu: goto label_2c89bc;
        case 0x2c89c0u: goto label_2c89c0;
        case 0x2c89c4u: goto label_2c89c4;
        case 0x2c89c8u: goto label_2c89c8;
        case 0x2c89ccu: goto label_2c89cc;
        case 0x2c89d0u: goto label_2c89d0;
        case 0x2c89d4u: goto label_2c89d4;
        case 0x2c89d8u: goto label_2c89d8;
        case 0x2c89dcu: goto label_2c89dc;
        case 0x2c89e0u: goto label_2c89e0;
        case 0x2c89e4u: goto label_2c89e4;
        case 0x2c89e8u: goto label_2c89e8;
        case 0x2c89ecu: goto label_2c89ec;
        case 0x2c89f0u: goto label_2c89f0;
        case 0x2c89f4u: goto label_2c89f4;
        case 0x2c89f8u: goto label_2c89f8;
        case 0x2c89fcu: goto label_2c89fc;
        case 0x2c8a00u: goto label_2c8a00;
        case 0x2c8a04u: goto label_2c8a04;
        case 0x2c8a08u: goto label_2c8a08;
        case 0x2c8a0cu: goto label_2c8a0c;
        case 0x2c8a10u: goto label_2c8a10;
        case 0x2c8a14u: goto label_2c8a14;
        case 0x2c8a18u: goto label_2c8a18;
        case 0x2c8a1cu: goto label_2c8a1c;
        case 0x2c8a20u: goto label_2c8a20;
        case 0x2c8a24u: goto label_2c8a24;
        case 0x2c8a28u: goto label_2c8a28;
        case 0x2c8a2cu: goto label_2c8a2c;
        case 0x2c8a30u: goto label_2c8a30;
        case 0x2c8a34u: goto label_2c8a34;
        case 0x2c8a38u: goto label_2c8a38;
        case 0x2c8a3cu: goto label_2c8a3c;
        case 0x2c8a40u: goto label_2c8a40;
        case 0x2c8a44u: goto label_2c8a44;
        case 0x2c8a48u: goto label_2c8a48;
        case 0x2c8a4cu: goto label_2c8a4c;
        case 0x2c8a50u: goto label_2c8a50;
        case 0x2c8a54u: goto label_2c8a54;
        case 0x2c8a58u: goto label_2c8a58;
        case 0x2c8a5cu: goto label_2c8a5c;
        case 0x2c8a60u: goto label_2c8a60;
        case 0x2c8a64u: goto label_2c8a64;
        case 0x2c8a68u: goto label_2c8a68;
        case 0x2c8a6cu: goto label_2c8a6c;
        case 0x2c8a70u: goto label_2c8a70;
        case 0x2c8a74u: goto label_2c8a74;
        case 0x2c8a78u: goto label_2c8a78;
        case 0x2c8a7cu: goto label_2c8a7c;
        case 0x2c8a80u: goto label_2c8a80;
        case 0x2c8a84u: goto label_2c8a84;
        case 0x2c8a88u: goto label_2c8a88;
        case 0x2c8a8cu: goto label_2c8a8c;
        case 0x2c8a90u: goto label_2c8a90;
        case 0x2c8a94u: goto label_2c8a94;
        case 0x2c8a98u: goto label_2c8a98;
        case 0x2c8a9cu: goto label_2c8a9c;
        case 0x2c8aa0u: goto label_2c8aa0;
        case 0x2c8aa4u: goto label_2c8aa4;
        case 0x2c8aa8u: goto label_2c8aa8;
        case 0x2c8aacu: goto label_2c8aac;
        case 0x2c8ab0u: goto label_2c8ab0;
        case 0x2c8ab4u: goto label_2c8ab4;
        case 0x2c8ab8u: goto label_2c8ab8;
        case 0x2c8abcu: goto label_2c8abc;
        case 0x2c8ac0u: goto label_2c8ac0;
        case 0x2c8ac4u: goto label_2c8ac4;
        case 0x2c8ac8u: goto label_2c8ac8;
        case 0x2c8accu: goto label_2c8acc;
        case 0x2c8ad0u: goto label_2c8ad0;
        case 0x2c8ad4u: goto label_2c8ad4;
        case 0x2c8ad8u: goto label_2c8ad8;
        case 0x2c8adcu: goto label_2c8adc;
        case 0x2c8ae0u: goto label_2c8ae0;
        case 0x2c8ae4u: goto label_2c8ae4;
        case 0x2c8ae8u: goto label_2c8ae8;
        case 0x2c8aecu: goto label_2c8aec;
        case 0x2c8af0u: goto label_2c8af0;
        case 0x2c8af4u: goto label_2c8af4;
        case 0x2c8af8u: goto label_2c8af8;
        case 0x2c8afcu: goto label_2c8afc;
        case 0x2c8b00u: goto label_2c8b00;
        case 0x2c8b04u: goto label_2c8b04;
        case 0x2c8b08u: goto label_2c8b08;
        case 0x2c8b0cu: goto label_2c8b0c;
        case 0x2c8b10u: goto label_2c8b10;
        case 0x2c8b14u: goto label_2c8b14;
        case 0x2c8b18u: goto label_2c8b18;
        case 0x2c8b1cu: goto label_2c8b1c;
        case 0x2c8b20u: goto label_2c8b20;
        case 0x2c8b24u: goto label_2c8b24;
        case 0x2c8b28u: goto label_2c8b28;
        case 0x2c8b2cu: goto label_2c8b2c;
        case 0x2c8b30u: goto label_2c8b30;
        case 0x2c8b34u: goto label_2c8b34;
        case 0x2c8b38u: goto label_2c8b38;
        case 0x2c8b3cu: goto label_2c8b3c;
        case 0x2c8b40u: goto label_2c8b40;
        case 0x2c8b44u: goto label_2c8b44;
        case 0x2c8b48u: goto label_2c8b48;
        case 0x2c8b4cu: goto label_2c8b4c;
        case 0x2c8b50u: goto label_2c8b50;
        case 0x2c8b54u: goto label_2c8b54;
        case 0x2c8b58u: goto label_2c8b58;
        case 0x2c8b5cu: goto label_2c8b5c;
        case 0x2c8b60u: goto label_2c8b60;
        case 0x2c8b64u: goto label_2c8b64;
        case 0x2c8b68u: goto label_2c8b68;
        case 0x2c8b6cu: goto label_2c8b6c;
        case 0x2c8b70u: goto label_2c8b70;
        case 0x2c8b74u: goto label_2c8b74;
        case 0x2c8b78u: goto label_2c8b78;
        case 0x2c8b7cu: goto label_2c8b7c;
        case 0x2c8b80u: goto label_2c8b80;
        case 0x2c8b84u: goto label_2c8b84;
        case 0x2c8b88u: goto label_2c8b88;
        case 0x2c8b8cu: goto label_2c8b8c;
        case 0x2c8b90u: goto label_2c8b90;
        case 0x2c8b94u: goto label_2c8b94;
        case 0x2c8b98u: goto label_2c8b98;
        case 0x2c8b9cu: goto label_2c8b9c;
        case 0x2c8ba0u: goto label_2c8ba0;
        case 0x2c8ba4u: goto label_2c8ba4;
        case 0x2c8ba8u: goto label_2c8ba8;
        case 0x2c8bacu: goto label_2c8bac;
        case 0x2c8bb0u: goto label_2c8bb0;
        case 0x2c8bb4u: goto label_2c8bb4;
        case 0x2c8bb8u: goto label_2c8bb8;
        case 0x2c8bbcu: goto label_2c8bbc;
        case 0x2c8bc0u: goto label_2c8bc0;
        case 0x2c8bc4u: goto label_2c8bc4;
        case 0x2c8bc8u: goto label_2c8bc8;
        case 0x2c8bccu: goto label_2c8bcc;
        case 0x2c8bd0u: goto label_2c8bd0;
        case 0x2c8bd4u: goto label_2c8bd4;
        case 0x2c8bd8u: goto label_2c8bd8;
        case 0x2c8bdcu: goto label_2c8bdc;
        case 0x2c8be0u: goto label_2c8be0;
        case 0x2c8be4u: goto label_2c8be4;
        case 0x2c8be8u: goto label_2c8be8;
        case 0x2c8becu: goto label_2c8bec;
        case 0x2c8bf0u: goto label_2c8bf0;
        case 0x2c8bf4u: goto label_2c8bf4;
        case 0x2c8bf8u: goto label_2c8bf8;
        case 0x2c8bfcu: goto label_2c8bfc;
        case 0x2c8c00u: goto label_2c8c00;
        case 0x2c8c04u: goto label_2c8c04;
        case 0x2c8c08u: goto label_2c8c08;
        case 0x2c8c0cu: goto label_2c8c0c;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c14u: goto label_2c8c14;
        case 0x2c8c18u: goto label_2c8c18;
        case 0x2c8c1cu: goto label_2c8c1c;
        case 0x2c8c20u: goto label_2c8c20;
        case 0x2c8c24u: goto label_2c8c24;
        case 0x2c8c28u: goto label_2c8c28;
        case 0x2c8c2cu: goto label_2c8c2c;
        case 0x2c8c30u: goto label_2c8c30;
        case 0x2c8c34u: goto label_2c8c34;
        case 0x2c8c38u: goto label_2c8c38;
        case 0x2c8c3cu: goto label_2c8c3c;
        case 0x2c8c40u: goto label_2c8c40;
        case 0x2c8c44u: goto label_2c8c44;
        case 0x2c8c48u: goto label_2c8c48;
        case 0x2c8c4cu: goto label_2c8c4c;
        case 0x2c8c50u: goto label_2c8c50;
        case 0x2c8c54u: goto label_2c8c54;
        case 0x2c8c58u: goto label_2c8c58;
        case 0x2c8c5cu: goto label_2c8c5c;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8c64u: goto label_2c8c64;
        case 0x2c8c68u: goto label_2c8c68;
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8c70u: goto label_2c8c70;
        case 0x2c8c74u: goto label_2c8c74;
        case 0x2c8c78u: goto label_2c8c78;
        case 0x2c8c7cu: goto label_2c8c7c;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8c84u: goto label_2c8c84;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8c8cu: goto label_2c8c8c;
        case 0x2c8c90u: goto label_2c8c90;
        case 0x2c8c94u: goto label_2c8c94;
        case 0x2c8c98u: goto label_2c8c98;
        case 0x2c8c9cu: goto label_2c8c9c;
        case 0x2c8ca0u: goto label_2c8ca0;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8ca8u: goto label_2c8ca8;
        case 0x2c8cacu: goto label_2c8cac;
        case 0x2c8cb0u: goto label_2c8cb0;
        case 0x2c8cb4u: goto label_2c8cb4;
        case 0x2c8cb8u: goto label_2c8cb8;
        case 0x2c8cbcu: goto label_2c8cbc;
        case 0x2c8cc0u: goto label_2c8cc0;
        case 0x2c8cc4u: goto label_2c8cc4;
        case 0x2c8cc8u: goto label_2c8cc8;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cd0u: goto label_2c8cd0;
        case 0x2c8cd4u: goto label_2c8cd4;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8ce8u: goto label_2c8ce8;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf0u: goto label_2c8cf0;
        case 0x2c8cf4u: goto label_2c8cf4;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8cfcu: goto label_2c8cfc;
        case 0x2c8d00u: goto label_2c8d00;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d08u: goto label_2c8d08;
        case 0x2c8d0cu: goto label_2c8d0c;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d14u: goto label_2c8d14;
        case 0x2c8d18u: goto label_2c8d18;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d20u: goto label_2c8d20;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d28u: goto label_2c8d28;
        case 0x2c8d2cu: goto label_2c8d2c;
        case 0x2c8d30u: goto label_2c8d30;
        case 0x2c8d34u: goto label_2c8d34;
        case 0x2c8d38u: goto label_2c8d38;
        case 0x2c8d3cu: goto label_2c8d3c;
        case 0x2c8d40u: goto label_2c8d40;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d48u: goto label_2c8d48;
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d54u: goto label_2c8d54;
        case 0x2c8d58u: goto label_2c8d58;
        case 0x2c8d5cu: goto label_2c8d5c;
        case 0x2c8d60u: goto label_2c8d60;
        case 0x2c8d64u: goto label_2c8d64;
        case 0x2c8d68u: goto label_2c8d68;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8d70u: goto label_2c8d70;
        case 0x2c8d74u: goto label_2c8d74;
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8d7cu: goto label_2c8d7c;
        case 0x2c8d80u: goto label_2c8d80;
        case 0x2c8d84u: goto label_2c8d84;
        case 0x2c8d88u: goto label_2c8d88;
        case 0x2c8d8cu: goto label_2c8d8c;
        case 0x2c8d90u: goto label_2c8d90;
        case 0x2c8d94u: goto label_2c8d94;
        case 0x2c8d98u: goto label_2c8d98;
        case 0x2c8d9cu: goto label_2c8d9c;
        case 0x2c8da0u: goto label_2c8da0;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8da8u: goto label_2c8da8;
        case 0x2c8dacu: goto label_2c8dac;
        case 0x2c8db0u: goto label_2c8db0;
        case 0x2c8db4u: goto label_2c8db4;
        case 0x2c8db8u: goto label_2c8db8;
        case 0x2c8dbcu: goto label_2c8dbc;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8dc8u: goto label_2c8dc8;
        case 0x2c8dccu: goto label_2c8dcc;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8dd4u: goto label_2c8dd4;
        case 0x2c8dd8u: goto label_2c8dd8;
        case 0x2c8ddcu: goto label_2c8ddc;
        case 0x2c8de0u: goto label_2c8de0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8de8u: goto label_2c8de8;
        case 0x2c8decu: goto label_2c8dec;
        case 0x2c8df0u: goto label_2c8df0;
        case 0x2c8df4u: goto label_2c8df4;
        case 0x2c8df8u: goto label_2c8df8;
        case 0x2c8dfcu: goto label_2c8dfc;
        case 0x2c8e00u: goto label_2c8e00;
        case 0x2c8e04u: goto label_2c8e04;
        case 0x2c8e08u: goto label_2c8e08;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e10u: goto label_2c8e10;
        case 0x2c8e14u: goto label_2c8e14;
        case 0x2c8e18u: goto label_2c8e18;
        case 0x2c8e1cu: goto label_2c8e1c;
        case 0x2c8e20u: goto label_2c8e20;
        case 0x2c8e24u: goto label_2c8e24;
        case 0x2c8e28u: goto label_2c8e28;
        case 0x2c8e2cu: goto label_2c8e2c;
        case 0x2c8e30u: goto label_2c8e30;
        case 0x2c8e34u: goto label_2c8e34;
        case 0x2c8e38u: goto label_2c8e38;
        case 0x2c8e3cu: goto label_2c8e3c;
        case 0x2c8e40u: goto label_2c8e40;
        case 0x2c8e44u: goto label_2c8e44;
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e4cu: goto label_2c8e4c;
        case 0x2c8e50u: goto label_2c8e50;
        case 0x2c8e54u: goto label_2c8e54;
        case 0x2c8e58u: goto label_2c8e58;
        case 0x2c8e5cu: goto label_2c8e5c;
        case 0x2c8e60u: goto label_2c8e60;
        case 0x2c8e64u: goto label_2c8e64;
        case 0x2c8e68u: goto label_2c8e68;
        case 0x2c8e6cu: goto label_2c8e6c;
        case 0x2c8e70u: goto label_2c8e70;
        case 0x2c8e74u: goto label_2c8e74;
        case 0x2c8e78u: goto label_2c8e78;
        case 0x2c8e7cu: goto label_2c8e7c;
        case 0x2c8e80u: goto label_2c8e80;
        case 0x2c8e84u: goto label_2c8e84;
        case 0x2c8e88u: goto label_2c8e88;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8e90u: goto label_2c8e90;
        case 0x2c8e94u: goto label_2c8e94;
        case 0x2c8e98u: goto label_2c8e98;
        case 0x2c8e9cu: goto label_2c8e9c;
        case 0x2c8ea0u: goto label_2c8ea0;
        case 0x2c8ea4u: goto label_2c8ea4;
        case 0x2c8ea8u: goto label_2c8ea8;
        case 0x2c8eacu: goto label_2c8eac;
        case 0x2c8eb0u: goto label_2c8eb0;
        case 0x2c8eb4u: goto label_2c8eb4;
        case 0x2c8eb8u: goto label_2c8eb8;
        case 0x2c8ebcu: goto label_2c8ebc;
        case 0x2c8ec0u: goto label_2c8ec0;
        case 0x2c8ec4u: goto label_2c8ec4;
        case 0x2c8ec8u: goto label_2c8ec8;
        case 0x2c8eccu: goto label_2c8ecc;
        case 0x2c8ed0u: goto label_2c8ed0;
        case 0x2c8ed4u: goto label_2c8ed4;
        case 0x2c8ed8u: goto label_2c8ed8;
        case 0x2c8edcu: goto label_2c8edc;
        case 0x2c8ee0u: goto label_2c8ee0;
        case 0x2c8ee4u: goto label_2c8ee4;
        case 0x2c8ee8u: goto label_2c8ee8;
        case 0x2c8eecu: goto label_2c8eec;
        case 0x2c8ef0u: goto label_2c8ef0;
        case 0x2c8ef4u: goto label_2c8ef4;
        case 0x2c8ef8u: goto label_2c8ef8;
        case 0x2c8efcu: goto label_2c8efc;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f04u: goto label_2c8f04;
        case 0x2c8f08u: goto label_2c8f08;
        case 0x2c8f0cu: goto label_2c8f0c;
        case 0x2c8f10u: goto label_2c8f10;
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f18u: goto label_2c8f18;
        case 0x2c8f1cu: goto label_2c8f1c;
        case 0x2c8f20u: goto label_2c8f20;
        case 0x2c8f24u: goto label_2c8f24;
        case 0x2c8f28u: goto label_2c8f28;
        case 0x2c8f2cu: goto label_2c8f2c;
        case 0x2c8f30u: goto label_2c8f30;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f38u: goto label_2c8f38;
        case 0x2c8f3cu: goto label_2c8f3c;
        case 0x2c8f40u: goto label_2c8f40;
        case 0x2c8f44u: goto label_2c8f44;
        case 0x2c8f48u: goto label_2c8f48;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f50u: goto label_2c8f50;
        case 0x2c8f54u: goto label_2c8f54;
        case 0x2c8f58u: goto label_2c8f58;
        case 0x2c8f5cu: goto label_2c8f5c;
        case 0x2c8f60u: goto label_2c8f60;
        case 0x2c8f64u: goto label_2c8f64;
        case 0x2c8f68u: goto label_2c8f68;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f70u: goto label_2c8f70;
        case 0x2c8f74u: goto label_2c8f74;
        case 0x2c8f78u: goto label_2c8f78;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f80u: goto label_2c8f80;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c8f8cu: goto label_2c8f8c;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c8f94u: goto label_2c8f94;
        case 0x2c8f98u: goto label_2c8f98;
        case 0x2c8f9cu: goto label_2c8f9c;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8fa4u: goto label_2c8fa4;
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8facu: goto label_2c8fac;
        case 0x2c8fb0u: goto label_2c8fb0;
        case 0x2c8fb4u: goto label_2c8fb4;
        case 0x2c8fb8u: goto label_2c8fb8;
        case 0x2c8fbcu: goto label_2c8fbc;
        case 0x2c8fc0u: goto label_2c8fc0;
        case 0x2c8fc4u: goto label_2c8fc4;
        case 0x2c8fc8u: goto label_2c8fc8;
        case 0x2c8fccu: goto label_2c8fcc;
        case 0x2c8fd0u: goto label_2c8fd0;
        case 0x2c8fd4u: goto label_2c8fd4;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fdcu: goto label_2c8fdc;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8fe4u: goto label_2c8fe4;
        case 0x2c8fe8u: goto label_2c8fe8;
        case 0x2c8fecu: goto label_2c8fec;
        case 0x2c8ff0u: goto label_2c8ff0;
        case 0x2c8ff4u: goto label_2c8ff4;
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        case 0x2c90a0u: goto label_2c90a0;
        case 0x2c90a4u: goto label_2c90a4;
        case 0x2c90a8u: goto label_2c90a8;
        case 0x2c90acu: goto label_2c90ac;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90b8u: goto label_2c90b8;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90c4u: goto label_2c90c4;
        case 0x2c90c8u: goto label_2c90c8;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90d4u: goto label_2c90d4;
        case 0x2c90d8u: goto label_2c90d8;
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90e0u: goto label_2c90e0;
        case 0x2c90e4u: goto label_2c90e4;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c90ecu: goto label_2c90ec;
        case 0x2c90f0u: goto label_2c90f0;
        case 0x2c90f4u: goto label_2c90f4;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c90fcu: goto label_2c90fc;
        case 0x2c9100u: goto label_2c9100;
        case 0x2c9104u: goto label_2c9104;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c910cu: goto label_2c910c;
        case 0x2c9110u: goto label_2c9110;
        case 0x2c9114u: goto label_2c9114;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9120u: goto label_2c9120;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c9128u: goto label_2c9128;
        case 0x2c912cu: goto label_2c912c;
        case 0x2c9130u: goto label_2c9130;
        case 0x2c9134u: goto label_2c9134;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c913cu: goto label_2c913c;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c9144u: goto label_2c9144;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c914cu: goto label_2c914c;
        case 0x2c9150u: goto label_2c9150;
        case 0x2c9154u: goto label_2c9154;
        case 0x2c9158u: goto label_2c9158;
        case 0x2c915cu: goto label_2c915c;
        case 0x2c9160u: goto label_2c9160;
        case 0x2c9164u: goto label_2c9164;
        case 0x2c9168u: goto label_2c9168;
        case 0x2c916cu: goto label_2c916c;
        case 0x2c9170u: goto label_2c9170;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c9178u: goto label_2c9178;
        case 0x2c917cu: goto label_2c917c;
        case 0x2c9180u: goto label_2c9180;
        case 0x2c9184u: goto label_2c9184;
        case 0x2c9188u: goto label_2c9188;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c9190u: goto label_2c9190;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c9198u: goto label_2c9198;
        case 0x2c919cu: goto label_2c919c;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91a4u: goto label_2c91a4;
        case 0x2c91a8u: goto label_2c91a8;
        case 0x2c91acu: goto label_2c91ac;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91b4u: goto label_2c91b4;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91c8u: goto label_2c91c8;
        case 0x2c91ccu: goto label_2c91cc;
        case 0x2c91d0u: goto label_2c91d0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91d8u: goto label_2c91d8;
        case 0x2c91dcu: goto label_2c91dc;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91e8u: goto label_2c91e8;
        case 0x2c91ecu: goto label_2c91ec;
        case 0x2c91f0u: goto label_2c91f0;
        case 0x2c91f4u: goto label_2c91f4;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9204u: goto label_2c9204;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9210u: goto label_2c9210;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9218u: goto label_2c9218;
        case 0x2c921cu: goto label_2c921c;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9224u: goto label_2c9224;
        case 0x2c9228u: goto label_2c9228;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c9234u: goto label_2c9234;
        case 0x2c9238u: goto label_2c9238;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c9240u: goto label_2c9240;
        case 0x2c9244u: goto label_2c9244;
        case 0x2c9248u: goto label_2c9248;
        case 0x2c924cu: goto label_2c924c;
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c9258u: goto label_2c9258;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c9260u: goto label_2c9260;
        case 0x2c9264u: goto label_2c9264;
        case 0x2c9268u: goto label_2c9268;
        case 0x2c926cu: goto label_2c926c;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c9274u: goto label_2c9274;
        case 0x2c9278u: goto label_2c9278;
        case 0x2c927cu: goto label_2c927c;
        case 0x2c9280u: goto label_2c9280;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c9288u: goto label_2c9288;
        case 0x2c928cu: goto label_2c928c;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c9294u: goto label_2c9294;
        case 0x2c9298u: goto label_2c9298;
        case 0x2c929cu: goto label_2c929c;
        case 0x2c92a0u: goto label_2c92a0;
        case 0x2c92a4u: goto label_2c92a4;
        case 0x2c92a8u: goto label_2c92a8;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b0u: goto label_2c92b0;
        case 0x2c92b4u: goto label_2c92b4;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92bcu: goto label_2c92bc;
        case 0x2c92c0u: goto label_2c92c0;
        case 0x2c92c4u: goto label_2c92c4;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92ccu: goto label_2c92cc;
        case 0x2c92d0u: goto label_2c92d0;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92d8u: goto label_2c92d8;
        case 0x2c92dcu: goto label_2c92dc;
        case 0x2c92e0u: goto label_2c92e0;
        case 0x2c92e4u: goto label_2c92e4;
        case 0x2c92e8u: goto label_2c92e8;
        case 0x2c92ecu: goto label_2c92ec;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c92f4u: goto label_2c92f4;
        case 0x2c92f8u: goto label_2c92f8;
        case 0x2c92fcu: goto label_2c92fc;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c9304u: goto label_2c9304;
        case 0x2c9308u: goto label_2c9308;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9310u: goto label_2c9310;
        case 0x2c9314u: goto label_2c9314;
        case 0x2c9318u: goto label_2c9318;
        case 0x2c931cu: goto label_2c931c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9324u: goto label_2c9324;
        case 0x2c9328u: goto label_2c9328;
        case 0x2c932cu: goto label_2c932c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9334u: goto label_2c9334;
        case 0x2c9338u: goto label_2c9338;
        case 0x2c933cu: goto label_2c933c;
        case 0x2c9340u: goto label_2c9340;
        case 0x2c9344u: goto label_2c9344;
        case 0x2c9348u: goto label_2c9348;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c9354u: goto label_2c9354;
        case 0x2c9358u: goto label_2c9358;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9364u: goto label_2c9364;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c9370u: goto label_2c9370;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9380u: goto label_2c9380;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c9390u: goto label_2c9390;
        case 0x2c9394u: goto label_2c9394;
        case 0x2c9398u: goto label_2c9398;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c93a4u: goto label_2c93a4;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c93acu: goto label_2c93ac;
        case 0x2c93b0u: goto label_2c93b0;
        case 0x2c93b4u: goto label_2c93b4;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93bcu: goto label_2c93bc;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93c4u: goto label_2c93c4;
        case 0x2c93c8u: goto label_2c93c8;
        case 0x2c93ccu: goto label_2c93cc;
        case 0x2c93d0u: goto label_2c93d0;
        case 0x2c93d4u: goto label_2c93d4;
        case 0x2c93d8u: goto label_2c93d8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93e0u: goto label_2c93e0;
        case 0x2c93e4u: goto label_2c93e4;
        case 0x2c93e8u: goto label_2c93e8;
        case 0x2c93ecu: goto label_2c93ec;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c93f4u: goto label_2c93f4;
        case 0x2c93f8u: goto label_2c93f8;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c9404u: goto label_2c9404;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c9414u: goto label_2c9414;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c9420u: goto label_2c9420;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9428u: goto label_2c9428;
        case 0x2c942cu: goto label_2c942c;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9434u: goto label_2c9434;
        case 0x2c9438u: goto label_2c9438;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9440u: goto label_2c9440;
        case 0x2c9444u: goto label_2c9444;
        case 0x2c9448u: goto label_2c9448;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9450u: goto label_2c9450;
        case 0x2c9454u: goto label_2c9454;
        case 0x2c9458u: goto label_2c9458;
        case 0x2c945cu: goto label_2c945c;
        case 0x2c9460u: goto label_2c9460;
        case 0x2c9464u: goto label_2c9464;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9470u: goto label_2c9470;
        case 0x2c9474u: goto label_2c9474;
        case 0x2c9478u: goto label_2c9478;
        case 0x2c947cu: goto label_2c947c;
        case 0x2c9480u: goto label_2c9480;
        case 0x2c9484u: goto label_2c9484;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c948cu: goto label_2c948c;
        case 0x2c9490u: goto label_2c9490;
        case 0x2c9494u: goto label_2c9494;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c949cu: goto label_2c949c;
        case 0x2c94a0u: goto label_2c94a0;
        case 0x2c94a4u: goto label_2c94a4;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94acu: goto label_2c94ac;
        case 0x2c94b0u: goto label_2c94b0;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94b8u: goto label_2c94b8;
        case 0x2c94bcu: goto label_2c94bc;
        case 0x2c94c0u: goto label_2c94c0;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c94c8u: goto label_2c94c8;
        case 0x2c94ccu: goto label_2c94cc;
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        default: break;
    }

    ctx->pc = 0x2c8490u;

label_2c8490:
    // 0x2c8490: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2c8490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_2c8494:
    // 0x2c8494: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2c8494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2c8498:
    // 0x2c8498: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2c8498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_2c849c:
    // 0x2c849c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2c849cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_2c84a0:
    // 0x2c84a0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2c84a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_2c84a4:
    // 0x2c84a4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2c84a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2c84a8:
    // 0x2c84a8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2c84ac:
    // 0x2c84ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2c84acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2c84b0:
    // 0x2c84b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2c84b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2c84b4:
    // 0x2c84b4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2c84b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2c84b8:
    // 0x2c84b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c84b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2c84bc:
    // 0x2c84bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2c84bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2c84c0:
    // 0x2c84c0: 0xafa401e0  sw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c84c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 4));
label_2c84c4:
    // 0x2c84c4: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2c84c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c84c8:
    // 0x2c84c8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2c84c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c84cc:
    // 0x2c84cc: 0x10a003f4  beqz        $a1, . + 4 + (0x3F4 << 2)
label_2c84d0:
    if (ctx->pc == 0x2C84D0u) {
        ctx->pc = 0x2C84D4u;
        goto label_2c84d4;
    }
    ctx->pc = 0x2C84CCu;
    {
        const bool branch_taken_0x2c84cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c84cc) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C84D4u;
label_2c84d4:
    // 0x2c84d4: 0xc05bca4  jal         func_16F290
label_2c84d8:
    if (ctx->pc == 0x2C84D8u) {
        ctx->pc = 0x2C84DCu;
        goto label_2c84dc;
    }
    ctx->pc = 0x2C84D4u;
    SET_GPR_U32(ctx, 31, 0x2C84DCu);
    ctx->pc = 0x16F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F290u, 0x2C84D4u, 0x2C84DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C84DCu;
label_2c84dc:
    // 0x2c84dc: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x2c84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_2c84e0:
    // 0x2c84e0: 0x2442bd40  addiu       $v0, $v0, -0x42C0
    ctx->pc = 0x2c84e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950208));
label_2c84e4:
    // 0x2c84e4: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2c84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_2c84e8:
    // 0x2c84e8: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x2c84e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_2c84ec:
    // 0x2c84ec: 0x80f809  jalr        $a0
label_2c84f0:
    if (ctx->pc == 0x2C84F0u) {
        ctx->pc = 0x2C84F4u;
        goto label_2c84f4;
    }
    ctx->pc = 0x2C84ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x2C84F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C84ECu, 0x2C84F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C84F4u;
label_2c84f4:
    // 0x2c84f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c84f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c84f8:
    // 0x2c84f8: 0xc0406f0  jal         func_101BC0
label_2c84fc:
    if (ctx->pc == 0x2C84FCu) {
        ctx->pc = 0x2C8500u;
        goto label_2c8500;
    }
    ctx->pc = 0x2C84F8u;
    SET_GPR_U32(ctx, 31, 0x2C8500u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2C84F8u, 0x2C8500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8500u;
label_2c8500:
    // 0x2c8500: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2c8500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2c8504:
    // 0x2c8504: 0x104303e6  beq         $v0, $v1, . + 4 + (0x3E6 << 2)
label_2c8508:
    if (ctx->pc == 0x2C8508u) {
        ctx->pc = 0x2C850Cu;
        goto label_2c850c;
    }
    ctx->pc = 0x2C8504u;
    {
        const bool branch_taken_0x2c8504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8504) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C850Cu;
label_2c850c:
    // 0x2c850c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c850cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8510:
    // 0x2c8510: 0x8c85002c  lw          $a1, 0x2C($a0)
    ctx->pc = 0x2c8510u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2c8514:
    // 0x2c8514: 0x14a00137  bnez        $a1, . + 4 + (0x137 << 2)
label_2c8518:
    if (ctx->pc == 0x2C8518u) {
        ctx->pc = 0x2C851Cu;
        goto label_2c851c;
    }
    ctx->pc = 0x2C8514u;
    {
        const bool branch_taken_0x2c8514 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8514) {
            ctx->pc = 0x2C89F4u;
            goto label_2c89f4;
        }
    }
    ctx->pc = 0x2C851Cu;
label_2c851c:
    // 0x2c851c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c851cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8520:
    // 0x2c8520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8524:
    // 0x2c8524: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c8524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8528:
    // 0x2c8528: 0xc085538  jal         func_2154E0
label_2c852c:
    if (ctx->pc == 0x2C852Cu) {
        ctx->pc = 0x2C8530u;
        goto label_2c8530;
    }
    ctx->pc = 0x2C8528u;
    SET_GPR_U32(ctx, 31, 0x2C8530u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8528u, 0x2C8530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8530u;
label_2c8530:
    // 0x2c8530: 0xafa201d4  sw          $v0, 0x1D4($sp)
    ctx->pc = 0x2c8530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 2));
label_2c8534:
    // 0x2c8534: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x2c8534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2c8538:
    // 0x2c8538: 0xc05ce40  jal         func_173900
label_2c853c:
    if (ctx->pc == 0x2C853Cu) {
        ctx->pc = 0x2C8540u;
        goto label_2c8540;
    }
    ctx->pc = 0x2C8538u;
    SET_GPR_U32(ctx, 31, 0x2C8540u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2C8538u, 0x2C8540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8540u;
label_2c8540:
    // 0x2c8540: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x2c8540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_2c8544:
    // 0x2c8544: 0x8fa501d0  lw          $a1, 0x1D0($sp)
    ctx->pc = 0x2c8544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_2c8548:
    // 0x2c8548: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c854c:
    // 0x2c854c: 0xc040aa8  jal         func_102AA0
label_2c8550:
    if (ctx->pc == 0x2C8550u) {
        ctx->pc = 0x2C8554u;
        goto label_2c8554;
    }
    ctx->pc = 0x2C854Cu;
    SET_GPR_U32(ctx, 31, 0x2C8554u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C854Cu, 0x2C8554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8554u;
label_2c8554:
    // 0x2c8554: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x2c8554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_2c8558:
    // 0x2c8558: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2c8558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c855c:
    // 0x2c855c: 0x90830008  lbu         $v1, 0x8($a0)
    ctx->pc = 0x2c855cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
label_2c8560:
    // 0x2c8560: 0x106003cf  beqz        $v1, . + 4 + (0x3CF << 2)
label_2c8564:
    if (ctx->pc == 0x2C8564u) {
        ctx->pc = 0x2C8568u;
        goto label_2c8568;
    }
    ctx->pc = 0x2C8560u;
    {
        const bool branch_taken_0x2c8560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8560) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8568u;
label_2c8568:
    // 0x2c8568: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c8568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c856c:
    // 0x2c856c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2c8570:
    if (ctx->pc == 0x2C8570u) {
        ctx->pc = 0x2C8574u;
        goto label_2c8574;
    }
    ctx->pc = 0x2C856Cu;
    {
        const bool branch_taken_0x2c856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c856c) {
            ctx->pc = 0x2C8620u;
            goto label_2c8620;
        }
    }
    ctx->pc = 0x2C8574u;
label_2c8574:
    // 0x2c8574: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2c8574u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2c8578:
    // 0x2c8578: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c8578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2c857c:
    // 0x2c857c: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x2c857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
label_2c8580:
    // 0x2c8580: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c8584:
    // 0x2c8584: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8588:
    // 0x2c8588: 0x8fa201cc  lw          $v0, 0x1CC($sp)
    ctx->pc = 0x2c8588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_2c858c:
    // 0x2c858c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c858cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8590:
    // 0x2c8590: 0xc040a90  jal         func_102A40
label_2c8594:
    if (ctx->pc == 0x2C8594u) {
        ctx->pc = 0x2C8598u;
        goto label_2c8598;
    }
    ctx->pc = 0x2C8590u;
    SET_GPR_U32(ctx, 31, 0x2C8598u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C8590u, 0x2C8598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8598u;
label_2c8598:
    // 0x2c8598: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c859c:
    // 0x2c859c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2c85a0:
    // 0x2c85a0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2c85a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2c85a4:
    // 0x2c85a4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c85a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c85a8:
    // 0x2c85a8: 0x24a5e210  addiu       $a1, $a1, -0x1DF0
    ctx->pc = 0x2c85a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959632));
label_2c85ac:
    // 0x2c85ac: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2c85acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2c85b0:
    // 0x2c85b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c85b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c85b4:
    // 0x2c85b4: 0x8fa301cc  lw          $v1, 0x1CC($sp)
    ctx->pc = 0x2c85b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 460)));
label_2c85b8:
    // 0x2c85b8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c85b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c85bc:
    // 0x2c85bc: 0xc040a90  jal         func_102A40
label_2c85c0:
    if (ctx->pc == 0x2C85C0u) {
        ctx->pc = 0x2C85C4u;
        goto label_2c85c4;
    }
    ctx->pc = 0x2C85BCu;
    SET_GPR_U32(ctx, 31, 0x2C85C4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C85BCu, 0x2C85C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C85C4u;
label_2c85c4:
    // 0x2c85c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c85c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c85c8:
    // 0x2c85c8: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2c85c8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c85cc:
    // 0x2c85cc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2c85ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c85d0:
    // 0x2c85d0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2c85d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c85d4:
    // 0x2c85d4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c85d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c85d8:
    // 0x2c85d8: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2c85d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_2c85dc:
    // 0x2c85dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2c85dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c85e0:
    // 0x2c85e0: 0x0  nop
    ctx->pc = 0x2c85e0u;
    // NOP
label_2c85e4:
    // 0x2c85e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c85e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c85e8:
    // 0x2c85e8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_2c85ec:
    if (ctx->pc == 0x2C85ECu) {
        ctx->pc = 0x2C85F0u;
        goto label_2c85f0;
    }
    ctx->pc = 0x2C85E8u;
    {
        const bool branch_taken_0x2c85e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c85e8) {
            ctx->pc = 0x2C861Cu;
            goto label_2c861c;
        }
    }
    ctx->pc = 0x2C85F0u;
label_2c85f0:
    // 0x2c85f0: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x2c85f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2c85f4:
    // 0x2c85f4: 0x3c03004f  lui         $v1, 0x4F
    ctx->pc = 0x2c85f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)79 << 16));
label_2c85f8:
    // 0x2c85f8: 0x2463e210  addiu       $v1, $v1, -0x1DF0
    ctx->pc = 0x2c85f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959632));
label_2c85fc:
    // 0x2c85fc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2c85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8600:
    // 0x2c8600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8604:
    // 0x2c8604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c8604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8608:
    // 0x2c8608: 0x652004  sllv        $a0, $a1, $v1
    ctx->pc = 0x2c8608u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
label_2c860c:
    // 0x2c860c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2c860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8610:
    // 0x2c8610: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x2c8610u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_2c8614:
    // 0x2c8614: 0x10000005  b           . + 4 + (0x5 << 2)
label_2c8618:
    if (ctx->pc == 0x2C8618u) {
        ctx->pc = 0x2C861Cu;
        goto label_2c861c;
    }
    ctx->pc = 0x2C8614u;
    {
        const bool branch_taken_0x2c8614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8614) {
            ctx->pc = 0x2C862Cu;
            goto label_2c862c;
        }
    }
    ctx->pc = 0x2C861Cu;
label_2c861c:
    // 0x2c861c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2c861cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2c8620:
    // 0x2c8620: 0x2e640003  sltiu       $a0, $s3, 0x3
    ctx->pc = 0x2c8620u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2c8624:
    // 0x2c8624: 0x1480ffd3  bnez        $a0, . + 4 + (-0x2D << 2)
label_2c8628:
    if (ctx->pc == 0x2C8628u) {
        ctx->pc = 0x2C862Cu;
        goto label_2c862c;
    }
    ctx->pc = 0x2C8624u;
    {
        const bool branch_taken_0x2c8624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8624) {
            ctx->pc = 0x2C8574u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8574;
        }
    }
    ctx->pc = 0x2C862Cu;
label_2c862c:
    // 0x2c862c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2c862cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8630:
    // 0x2c8630: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x2c8630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2c8634:
    // 0x2c8634: 0x1080039a  beqz        $a0, . + 4 + (0x39A << 2)
label_2c8638:
    if (ctx->pc == 0x2C8638u) {
        ctx->pc = 0x2C863Cu;
        goto label_2c863c;
    }
    ctx->pc = 0x2C8634u;
    {
        const bool branch_taken_0x2c8634 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8634) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C863Cu;
label_2c863c:
    // 0x2c863c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2c863cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2c8640:
    // 0x2c8640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c8644:
    // 0x2c8644: 0x0  nop
    ctx->pc = 0x2c8644u;
    // NOP
label_2c8648:
    // 0x2c8648: 0xe780a4dc  swc1        $f0, -0x5B24($gp)
    ctx->pc = 0x2c8648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943964), bits); }
label_2c864c:
    // 0x2c864c: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x2c864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
label_2c8650:
    // 0x2c8650: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c8650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c8654:
    // 0x2c8654: 0xc04c608  jal         func_131820
label_2c8658:
    if (ctx->pc == 0x2C8658u) {
        ctx->pc = 0x2C865Cu;
        goto label_2c865c;
    }
    ctx->pc = 0x2C8654u;
    SET_GPR_U32(ctx, 31, 0x2C865Cu);
    ctx->pc = 0x131820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131820u, 0x2C8654u, 0x2C865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C865Cu;
label_2c865c:
    // 0x2c865c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c865cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8660:
    // 0x2c8660: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8664:
    // 0x2c8664: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c8664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c8668:
    // 0x2c8668: 0xc085538  jal         func_2154E0
label_2c866c:
    if (ctx->pc == 0x2C866Cu) {
        ctx->pc = 0x2C8670u;
        goto label_2c8670;
    }
    ctx->pc = 0x2C8668u;
    SET_GPR_U32(ctx, 31, 0x2C8670u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8668u, 0x2C8670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8670u;
label_2c8670:
    // 0x2c8670: 0xafa201c8  sw          $v0, 0x1C8($sp)
    ctx->pc = 0x2c8670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 2));
label_2c8674:
    // 0x2c8674: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x2c8674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_2c8678:
    // 0x2c8678: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c867c:
    // 0x2c867c: 0xc0ae044  jal         func_2B8110
label_2c8680:
    if (ctx->pc == 0x2C8680u) {
        ctx->pc = 0x2C8684u;
        goto label_2c8684;
    }
    ctx->pc = 0x2C867Cu;
    SET_GPR_U32(ctx, 31, 0x2C8684u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2C867Cu, 0x2C8684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8684u;
label_2c8684:
    // 0x2c8684: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c8684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8688:
    // 0x2c8688: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c8688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c868c:
    // 0x2c868c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c868cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c8690:
    // 0x2c8690: 0xc085538  jal         func_2154E0
label_2c8694:
    if (ctx->pc == 0x2C8694u) {
        ctx->pc = 0x2C8698u;
        goto label_2c8698;
    }
    ctx->pc = 0x2C8690u;
    SET_GPR_U32(ctx, 31, 0x2C8698u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8690u, 0x2C8698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8698u;
label_2c8698:
    // 0x2c8698: 0xafa201c4  sw          $v0, 0x1C4($sp)
    ctx->pc = 0x2c8698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 2));
label_2c869c:
    // 0x2c869c: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x2c869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2c86a0:
    // 0x2c86a0: 0xc09c5d8  jal         func_271760
label_2c86a4:
    if (ctx->pc == 0x2C86A4u) {
        ctx->pc = 0x2C86A8u;
        goto label_2c86a8;
    }
    ctx->pc = 0x2C86A0u;
    SET_GPR_U32(ctx, 31, 0x2C86A8u);
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x2C86A0u, 0x2C86A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86A8u;
label_2c86a8:
    // 0x2c86a8: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x2c86a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_2c86ac:
    // 0x2c86ac: 0x8fb501c0  lw          $s5, 0x1C0($sp)
    ctx->pc = 0x2c86acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2c86b0:
    // 0x2c86b0: 0x10150009  beq         $zero, $s5, . + 4 + (0x9 << 2)
label_2c86b4:
    if (ctx->pc == 0x2C86B4u) {
        ctx->pc = 0x2C86B8u;
        goto label_2c86b8;
    }
    ctx->pc = 0x2C86B0u;
    {
        const bool branch_taken_0x2c86b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x2c86b0) {
            ctx->pc = 0x2C86D8u;
            goto label_2c86d8;
        }
    }
    ctx->pc = 0x2C86B8u;
label_2c86b8:
    // 0x2c86b8: 0x8fa401c0  lw          $a0, 0x1C0($sp)
    ctx->pc = 0x2c86b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
label_2c86bc:
    // 0x2c86bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c86bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c86c0:
    // 0x2c86c0: 0xc09c3f0  jal         func_270FC0
label_2c86c4:
    if (ctx->pc == 0x2C86C4u) {
        ctx->pc = 0x2C86C8u;
        goto label_2c86c8;
    }
    ctx->pc = 0x2C86C0u;
    SET_GPR_U32(ctx, 31, 0x2C86C8u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2C86C0u, 0x2C86C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86C8u;
label_2c86c8:
    // 0x2c86c8: 0x8fa401c4  lw          $a0, 0x1C4($sp)
    ctx->pc = 0x2c86c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 452)));
label_2c86cc:
    // 0x2c86cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c86ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c86d0:
    // 0x2c86d0: 0xc09c3f0  jal         func_270FC0
label_2c86d4:
    if (ctx->pc == 0x2C86D4u) {
        ctx->pc = 0x2C86D8u;
        goto label_2c86d8;
    }
    ctx->pc = 0x2C86D0u;
    SET_GPR_U32(ctx, 31, 0x2C86D8u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2C86D0u, 0x2C86D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86D8u;
label_2c86d8:
    // 0x2c86d8: 0x8fa901e0  lw          $t1, 0x1E0($sp)
    ctx->pc = 0x2c86d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c86dc:
    // 0x2c86dc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c86dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c86e0:
    // 0x2c86e0: 0x8d240094  lw          $a0, 0x94($t1)
    ctx->pc = 0x2c86e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 148)));
label_2c86e4:
    // 0x2c86e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c86e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c86e8:
    // 0x2c86e8: 0xc0b4d8c  jal         func_2D3630
label_2c86ec:
    if (ctx->pc == 0x2C86ECu) {
        ctx->pc = 0x2C86F0u;
        goto label_2c86f0;
    }
    ctx->pc = 0x2C86E8u;
    SET_GPR_U32(ctx, 31, 0x2C86F0u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2C86E8u, 0x2C86F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C86F0u;
label_2c86f0:
    // 0x2c86f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2c86f4:
    if (ctx->pc == 0x2C86F4u) {
        ctx->pc = 0x2C86F8u;
        goto label_2c86f8;
    }
    ctx->pc = 0x2C86F0u;
    {
        const bool branch_taken_0x2c86f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c86f0) {
            ctx->pc = 0x2C8724u;
            goto label_2c8724;
        }
    }
    ctx->pc = 0x2C86F8u;
label_2c86f8:
    // 0x2c86f8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c86f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c86fc:
    // 0x2c86fc: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c86fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8700:
    // 0x2c8700: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2c8700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2c8704:
    // 0x2c8704: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2c8704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c8708:
    // 0x2c8708: 0xc0b4d8c  jal         func_2D3630
label_2c870c:
    if (ctx->pc == 0x2C870Cu) {
        ctx->pc = 0x2C8710u;
        goto label_2c8710;
    }
    ctx->pc = 0x2C8708u;
    SET_GPR_U32(ctx, 31, 0x2C8710u);
    ctx->pc = 0x2D3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3630u, 0x2C8708u, 0x2C8710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8710u;
label_2c8710:
    // 0x2c8710: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2c8710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8714:
    // 0x2c8714: 0x8ca40094  lw          $a0, 0x94($a1)
    ctx->pc = 0x2c8714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2c8718:
    // 0x2c8718: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c871c:
    // 0x2c871c: 0xc0b4a64  jal         func_2D2990
label_2c8720:
    if (ctx->pc == 0x2C8720u) {
        ctx->pc = 0x2C8724u;
        goto label_2c8724;
    }
    ctx->pc = 0x2C871Cu;
    SET_GPR_U32(ctx, 31, 0x2C8724u);
    ctx->pc = 0x2D2990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2990u, 0x2C871Cu, 0x2C8724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8724u;
label_2c8724:
    // 0x2c8724: 0xaf80bcbc  sw          $zero, -0x4344($gp)
    ctx->pc = 0x2c8724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950076), GPR_U32(ctx, 0));
label_2c8728:
    // 0x2c8728: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c872c:
    // 0x2c872c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c8730:
    // 0x2c8730: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8734:
    // 0x2c8734: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
label_2c8738:
    if (ctx->pc == 0x2C8738u) {
        ctx->pc = 0x2C873Cu;
        goto label_2c873c;
    }
    ctx->pc = 0x2C8734u;
    {
        const bool branch_taken_0x2c8734 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8734) {
            ctx->pc = 0x2C87B0u;
            goto label_2c87b0;
        }
    }
    ctx->pc = 0x2C873Cu;
label_2c873c:
    // 0x2c873c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8740:
    // 0x2c8740: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
label_2c8744:
    if (ctx->pc == 0x2C8744u) {
        ctx->pc = 0x2C8748u;
        goto label_2c8748;
    }
    ctx->pc = 0x2C8740u;
    {
        const bool branch_taken_0x2c8740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8740) {
            ctx->pc = 0x2C8784u;
            goto label_2c8784;
        }
    }
    ctx->pc = 0x2C8748u;
label_2c8748:
    // 0x2c8748: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c874c:
    // 0x2c874c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2c8750:
    if (ctx->pc == 0x2C8750u) {
        ctx->pc = 0x2C8754u;
        goto label_2c8754;
    }
    ctx->pc = 0x2C874Cu;
    {
        const bool branch_taken_0x2c874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c874c) {
            ctx->pc = 0x2C875Cu;
            goto label_2c875c;
        }
    }
    ctx->pc = 0x2C8754u;
label_2c8754:
    // 0x2c8754: 0x10000020  b           . + 4 + (0x20 << 2)
label_2c8758:
    if (ctx->pc == 0x2C8758u) {
        ctx->pc = 0x2C875Cu;
        goto label_2c875c;
    }
    ctx->pc = 0x2C8754u;
    {
        const bool branch_taken_0x2c8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8754) {
            ctx->pc = 0x2C87D8u;
            goto label_2c87d8;
        }
    }
    ctx->pc = 0x2C875Cu;
label_2c875c:
    // 0x2c875c: 0xc09a360  jal         func_268D80
label_2c8760:
    if (ctx->pc == 0x2C8760u) {
        ctx->pc = 0x2C8764u;
        goto label_2c8764;
    }
    ctx->pc = 0x2C875Cu;
    SET_GPR_U32(ctx, 31, 0x2C8764u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C875Cu, 0x2C8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8764u;
label_2c8764:
    // 0x2c8764: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8768:
    // 0x2c8768: 0x2785a4e0  addiu       $a1, $gp, -0x5B20
    ctx->pc = 0x2c8768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943968));
label_2c876c:
    // 0x2c876c: 0xc09a364  jal         func_268D90
label_2c8770:
    if (ctx->pc == 0x2C8770u) {
        ctx->pc = 0x2C8774u;
        goto label_2c8774;
    }
    ctx->pc = 0x2C876Cu;
    SET_GPR_U32(ctx, 31, 0x2C8774u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C876Cu, 0x2C8774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8774u;
label_2c8774:
    // 0x2c8774: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8778:
    // 0x2c8778: 0xaf82bcb8  sw          $v0, -0x4348($gp)
    ctx->pc = 0x2c8778u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 2));
label_2c877c:
    // 0x2c877c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2c8780:
    if (ctx->pc == 0x2C8780u) {
        ctx->pc = 0x2C8784u;
        goto label_2c8784;
    }
    ctx->pc = 0x2C877Cu;
    {
        const bool branch_taken_0x2c877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c877c) {
            ctx->pc = 0x2C87E0u;
            goto label_2c87e0;
        }
    }
    ctx->pc = 0x2C8784u;
label_2c8784:
    // 0x2c8784: 0xc09a360  jal         func_268D80
label_2c8788:
    if (ctx->pc == 0x2C8788u) {
        ctx->pc = 0x2C878Cu;
        goto label_2c878c;
    }
    ctx->pc = 0x2C8784u;
    SET_GPR_U32(ctx, 31, 0x2C878Cu);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C8784u, 0x2C878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C878Cu;
label_2c878c:
    // 0x2c878c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c878cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8790:
    // 0x2c8790: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c8790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c8794:
    // 0x2c8794: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x2c8794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
label_2c8798:
    // 0x2c8798: 0xc09a364  jal         func_268D90
label_2c879c:
    if (ctx->pc == 0x2C879Cu) {
        ctx->pc = 0x2C87A0u;
        goto label_2c87a0;
    }
    ctx->pc = 0x2C8798u;
    SET_GPR_U32(ctx, 31, 0x2C87A0u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C8798u, 0x2C87A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87A0u;
label_2c87a0:
    // 0x2c87a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2c87a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c87a4:
    // 0x2c87a4: 0xaf85bcb8  sw          $a1, -0x4348($gp)
    ctx->pc = 0x2c87a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 5));
label_2c87a8:
    // 0x2c87a8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2c87ac:
    if (ctx->pc == 0x2C87ACu) {
        ctx->pc = 0x2C87B0u;
        goto label_2c87b0;
    }
    ctx->pc = 0x2C87A8u;
    {
        const bool branch_taken_0x2c87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c87a8) {
            ctx->pc = 0x2C87E0u;
            goto label_2c87e0;
        }
    }
    ctx->pc = 0x2C87B0u;
label_2c87b0:
    // 0x2c87b0: 0xc09a360  jal         func_268D80
label_2c87b4:
    if (ctx->pc == 0x2C87B4u) {
        ctx->pc = 0x2C87B8u;
        goto label_2c87b8;
    }
    ctx->pc = 0x2C87B0u;
    SET_GPR_U32(ctx, 31, 0x2C87B8u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C87B0u, 0x2C87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87B8u;
label_2c87b8:
    // 0x2c87b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c87b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c87bc:
    // 0x2c87bc: 0x2785a4e8  addiu       $a1, $gp, -0x5B18
    ctx->pc = 0x2c87bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943976));
label_2c87c0:
    // 0x2c87c0: 0xc09a364  jal         func_268D90
label_2c87c4:
    if (ctx->pc == 0x2C87C4u) {
        ctx->pc = 0x2C87C8u;
        goto label_2c87c8;
    }
    ctx->pc = 0x2C87C0u;
    SET_GPR_U32(ctx, 31, 0x2C87C8u);
    ctx->pc = 0x268D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D90u, 0x2C87C0u, 0x2C87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87C8u;
label_2c87c8:
    // 0x2c87c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2c87c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c87cc:
    // 0x2c87cc: 0xaf82bcb8  sw          $v0, -0x4348($gp)
    ctx->pc = 0x2c87ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 2));
label_2c87d0:
    // 0x2c87d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2c87d4:
    if (ctx->pc == 0x2C87D4u) {
        ctx->pc = 0x2C87D8u;
        goto label_2c87d8;
    }
    ctx->pc = 0x2C87D0u;
    {
        const bool branch_taken_0x2c87d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c87d0) {
            ctx->pc = 0x2C87E0u;
            goto label_2c87e0;
        }
    }
    ctx->pc = 0x2C87D8u;
label_2c87d8:
    // 0x2c87d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c87d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c87dc:
    // 0x2c87dc: 0xaf82bcb8  sw          $v0, -0x4348($gp)
    ctx->pc = 0x2c87dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 2));
label_2c87e0:
    // 0x2c87e0: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x2c87e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2c87e4:
    // 0x2c87e4: 0xc0480fc  jal         func_1203F0
label_2c87e8:
    if (ctx->pc == 0x2C87E8u) {
        ctx->pc = 0x2C87ECu;
        goto label_2c87ec;
    }
    ctx->pc = 0x2C87E4u;
    SET_GPR_U32(ctx, 31, 0x2C87ECu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C87E4u, 0x2C87ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C87ECu;
label_2c87ec:
    // 0x2c87ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c87f0:
    if (ctx->pc == 0x2C87F0u) {
        ctx->pc = 0x2C87F4u;
        goto label_2c87f4;
    }
    ctx->pc = 0x2C87ECu;
    {
        const bool branch_taken_0x2c87ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c87ec) {
            ctx->pc = 0x2C8808u;
            goto label_2c8808;
        }
    }
    ctx->pc = 0x2C87F4u;
label_2c87f4:
    // 0x2c87f4: 0x8fa401d4  lw          $a0, 0x1D4($sp)
    ctx->pc = 0x2c87f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 468)));
label_2c87f8:
    // 0x2c87f8: 0xc09b35c  jal         func_26CD70
label_2c87fc:
    if (ctx->pc == 0x2C87FCu) {
        ctx->pc = 0x2C8800u;
        goto label_2c8800;
    }
    ctx->pc = 0x2C87F8u;
    SET_GPR_U32(ctx, 31, 0x2C8800u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C87F8u, 0x2C8800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8800u;
label_2c8800:
    // 0x2c8800: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2c8804:
    if (ctx->pc == 0x2C8804u) {
        ctx->pc = 0x2C8808u;
        goto label_2c8808;
    }
    ctx->pc = 0x2C8800u;
    {
        const bool branch_taken_0x2c8800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8800) {
            ctx->pc = 0x2C8828u;
            goto label_2c8828;
        }
    }
    ctx->pc = 0x2C8808u;
label_2c8808:
    // 0x2c8808: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c880c:
    // 0x2c880c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8810:
    // 0x2c8810: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8814:
    // 0x2c8814: 0xc0b1704  jal         func_2C5C10
label_2c8818:
    if (ctx->pc == 0x2C8818u) {
        ctx->pc = 0x2C881Cu;
        goto label_2c881c;
    }
    ctx->pc = 0x2C8814u;
    SET_GPR_U32(ctx, 31, 0x2C881Cu);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C8814u, 0x2C881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C881Cu;
label_2c881c:
    // 0x2c881c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2c8820:
    if (ctx->pc == 0x2C8820u) {
        ctx->pc = 0x2C8824u;
        goto label_2c8824;
    }
    ctx->pc = 0x2C881Cu;
    {
        const bool branch_taken_0x2c881c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c881c) {
            ctx->pc = 0x2C8828u;
            goto label_2c8828;
        }
    }
    ctx->pc = 0x2C8824u;
label_2c8824:
    // 0x2c8824: 0xaf80bcb8  sw          $zero, -0x4348($gp)
    ctx->pc = 0x2c8824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 0));
label_2c8828:
    // 0x2c8828: 0xc090864  jal         func_242190
label_2c882c:
    if (ctx->pc == 0x2C882Cu) {
        ctx->pc = 0x2C8830u;
        goto label_2c8830;
    }
    ctx->pc = 0x2C8828u;
    SET_GPR_U32(ctx, 31, 0x2C8830u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C8828u, 0x2C8830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8830u;
label_2c8830:
    // 0x2c8830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8834:
    // 0x2c8834: 0xc090590  jal         func_241640
label_2c8838:
    if (ctx->pc == 0x2C8838u) {
        ctx->pc = 0x2C883Cu;
        goto label_2c883c;
    }
    ctx->pc = 0x2C8834u;
    SET_GPR_U32(ctx, 31, 0x2C883Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2C8834u, 0x2C883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C883Cu;
label_2c883c:
    // 0x2c883c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c883cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8840:
    // 0x2c8840: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2c8840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c8844:
    // 0x2c8844: 0xc09157c  jal         func_2455F0
label_2c8848:
    if (ctx->pc == 0x2C8848u) {
        ctx->pc = 0x2C884Cu;
        goto label_2c884c;
    }
    ctx->pc = 0x2C8844u;
    SET_GPR_U32(ctx, 31, 0x2C884Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2C8844u, 0x2C884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C884Cu;
label_2c884c:
    // 0x2c884c: 0xafa201bc  sw          $v0, 0x1BC($sp)
    ctx->pc = 0x2c884cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 2));
label_2c8850:
    // 0x2c8850: 0x8fa401bc  lw          $a0, 0x1BC($sp)
    ctx->pc = 0x2c8850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2c8854:
    // 0x2c8854: 0xc040e7c  jal         func_1039F0
label_2c8858:
    if (ctx->pc == 0x2C8858u) {
        ctx->pc = 0x2C885Cu;
        goto label_2c885c;
    }
    ctx->pc = 0x2C8854u;
    SET_GPR_U32(ctx, 31, 0x2C885Cu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2C8854u, 0x2C885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C885Cu;
label_2c885c:
    // 0x2c885c: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x2c885cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_2c8860:
    // 0x2c8860: 0x10000055  b           . + 4 + (0x55 << 2)
label_2c8864:
    if (ctx->pc == 0x2C8864u) {
        ctx->pc = 0x2C8868u;
        goto label_2c8868;
    }
    ctx->pc = 0x2C8860u;
    {
        const bool branch_taken_0x2c8860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8860) {
            ctx->pc = 0x2C89B8u;
            goto label_2c89b8;
        }
    }
    ctx->pc = 0x2C8868u;
label_2c8868:
    // 0x2c8868: 0x8fa301b8  lw          $v1, 0x1B8($sp)
    ctx->pc = 0x2c8868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2c886c:
    // 0x2c886c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2c886cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8870:
    // 0x2c8870: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8874:
    // 0x2c8874: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8878:
    // 0x2c8878: 0x1202004c  beq         $s0, $v0, . + 4 + (0x4C << 2)
label_2c887c:
    if (ctx->pc == 0x2C887Cu) {
        ctx->pc = 0x2C8880u;
        goto label_2c8880;
    }
    ctx->pc = 0x2C8878u;
    {
        const bool branch_taken_0x2c8878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8878) {
            ctx->pc = 0x2C89ACu;
            goto label_2c89ac;
        }
    }
    ctx->pc = 0x2C8880u;
label_2c8880:
    // 0x2c8880: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8884:
    // 0x2c8884: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c8884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c8888:
    // 0x2c8888: 0x12050048  beq         $s0, $a1, . + 4 + (0x48 << 2)
label_2c888c:
    if (ctx->pc == 0x2C888Cu) {
        ctx->pc = 0x2C8890u;
        goto label_2c8890;
    }
    ctx->pc = 0x2C8888u;
    {
        const bool branch_taken_0x2c8888 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x2c8888) {
            ctx->pc = 0x2C89ACu;
            goto label_2c89ac;
        }
    }
    ctx->pc = 0x2C8890u;
label_2c8890:
    // 0x2c8890: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8894:
    // 0x2c8894: 0xc0913ec  jal         func_244FB0
label_2c8898:
    if (ctx->pc == 0x2C8898u) {
        ctx->pc = 0x2C889Cu;
        goto label_2c889c;
    }
    ctx->pc = 0x2C8894u;
    SET_GPR_U32(ctx, 31, 0x2C889Cu);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x2C8894u, 0x2C889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C889Cu;
label_2c889c:
    // 0x2c889c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c889cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c88a0:
    // 0x2c88a0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c88a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c88a4:
    // 0x2c88a4: 0x24a5e230  addiu       $a1, $a1, -0x1DD0
    ctx->pc = 0x2c88a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959664));
label_2c88a8:
    // 0x2c88a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c88a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c88ac:
    // 0x2c88ac: 0xc047314  jal         func_11CC50
label_2c88b0:
    if (ctx->pc == 0x2C88B0u) {
        ctx->pc = 0x2C88B4u;
        goto label_2c88b4;
    }
    ctx->pc = 0x2C88ACu;
    SET_GPR_U32(ctx, 31, 0x2C88B4u);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C88ACu, 0x2C88B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88B4u;
label_2c88b4:
    // 0x2c88b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c88b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c88b8:
    // 0x2c88b8: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c88b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c88bc:
    // 0x2c88bc: 0xc085538  jal         func_2154E0
label_2c88c0:
    if (ctx->pc == 0x2C88C0u) {
        ctx->pc = 0x2C88C4u;
        goto label_2c88c4;
    }
    ctx->pc = 0x2C88BCu;
    SET_GPR_U32(ctx, 31, 0x2C88C4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C88BCu, 0x2C88C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88C4u;
label_2c88c4:
    // 0x2c88c4: 0xafa201b4  sw          $v0, 0x1B4($sp)
    ctx->pc = 0x2c88c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 2));
label_2c88c8:
    // 0x2c88c8: 0x8fa401b4  lw          $a0, 0x1B4($sp)
    ctx->pc = 0x2c88c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
label_2c88cc:
    // 0x2c88cc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c88ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c88d0:
    // 0x2c88d0: 0xc0ae044  jal         func_2B8110
label_2c88d4:
    if (ctx->pc == 0x2C88D4u) {
        ctx->pc = 0x2C88D8u;
        goto label_2c88d8;
    }
    ctx->pc = 0x2C88D0u;
    SET_GPR_U32(ctx, 31, 0x2C88D8u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2C88D0u, 0x2C88D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88D8u;
label_2c88d8:
    // 0x2c88d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c88d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c88dc:
    // 0x2c88dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c88dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c88e0:
    // 0x2c88e0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2c88e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c88e4:
    // 0x2c88e4: 0xc085538  jal         func_2154E0
label_2c88e8:
    if (ctx->pc == 0x2C88E8u) {
        ctx->pc = 0x2C88ECu;
        goto label_2c88ec;
    }
    ctx->pc = 0x2C88E4u;
    SET_GPR_U32(ctx, 31, 0x2C88ECu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C88E4u, 0x2C88ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C88ECu;
label_2c88ec:
    // 0x2c88ec: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x2c88ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_2c88f0:
    // 0x2c88f0: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x2c88f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2c88f4:
    // 0x2c88f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c88f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c88f8:
    // 0x2c88f8: 0xc09c5d8  jal         func_271760
label_2c88fc:
    if (ctx->pc == 0x2C88FCu) {
        ctx->pc = 0x2C8900u;
        goto label_2c8900;
    }
    ctx->pc = 0x2C88F8u;
    SET_GPR_U32(ctx, 31, 0x2C8900u);
    ctx->pc = 0x271760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271760u, 0x2C88F8u, 0x2C8900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8900u;
label_2c8900:
    // 0x2c8900: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x2c8900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_2c8904:
    // 0x2c8904: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x2c8904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2c8908:
    // 0x2c8908: 0x10020009  beq         $zero, $v0, . + 4 + (0x9 << 2)
label_2c890c:
    if (ctx->pc == 0x2C890Cu) {
        ctx->pc = 0x2C8910u;
        goto label_2c8910;
    }
    ctx->pc = 0x2C8908u;
    {
        const bool branch_taken_0x2c8908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c8908) {
            ctx->pc = 0x2C8930u;
            goto label_2c8930;
        }
    }
    ctx->pc = 0x2C8910u;
label_2c8910:
    // 0x2c8910: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x2c8910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_2c8914:
    // 0x2c8914: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8918:
    // 0x2c8918: 0xc09c3f0  jal         func_270FC0
label_2c891c:
    if (ctx->pc == 0x2C891Cu) {
        ctx->pc = 0x2C8920u;
        goto label_2c8920;
    }
    ctx->pc = 0x2C8918u;
    SET_GPR_U32(ctx, 31, 0x2C8920u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2C8918u, 0x2C8920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8920u;
label_2c8920:
    // 0x2c8920: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x2c8920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_2c8924:
    // 0x2c8924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c8924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8928:
    // 0x2c8928: 0xc09c3f0  jal         func_270FC0
label_2c892c:
    if (ctx->pc == 0x2C892Cu) {
        ctx->pc = 0x2C8930u;
        goto label_2c8930;
    }
    ctx->pc = 0x2C8928u;
    SET_GPR_U32(ctx, 31, 0x2C8930u);
    ctx->pc = 0x270FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270FC0u, 0x2C8928u, 0x2C8930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8930u;
label_2c8930:
    // 0x2c8930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c8930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8934:
    // 0x2c8934: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c8934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8938:
    // 0x2c8938: 0xc085538  jal         func_2154E0
label_2c893c:
    if (ctx->pc == 0x2C893Cu) {
        ctx->pc = 0x2C8940u;
        goto label_2c8940;
    }
    ctx->pc = 0x2C8938u;
    SET_GPR_U32(ctx, 31, 0x2C8940u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8938u, 0x2C8940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8940u;
label_2c8940:
    // 0x2c8940: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x2c8940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_2c8944:
    // 0x2c8944: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2c8944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2c8948:
    // 0x2c8948: 0xc0480fc  jal         func_1203F0
label_2c894c:
    if (ctx->pc == 0x2C894Cu) {
        ctx->pc = 0x2C8950u;
        goto label_2c8950;
    }
    ctx->pc = 0x2C8948u;
    SET_GPR_U32(ctx, 31, 0x2C8950u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C8948u, 0x2C8950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8950u;
label_2c8950:
    // 0x2c8950: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c8954:
    if (ctx->pc == 0x2C8954u) {
        ctx->pc = 0x2C8958u;
        goto label_2c8958;
    }
    ctx->pc = 0x2C8950u;
    {
        const bool branch_taken_0x2c8950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8950) {
            ctx->pc = 0x2C896Cu;
            goto label_2c896c;
        }
    }
    ctx->pc = 0x2C8958u;
label_2c8958:
    // 0x2c8958: 0x8fa401a8  lw          $a0, 0x1A8($sp)
    ctx->pc = 0x2c8958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_2c895c:
    // 0x2c895c: 0xc09b35c  jal         func_26CD70
label_2c8960:
    if (ctx->pc == 0x2C8960u) {
        ctx->pc = 0x2C8964u;
        goto label_2c8964;
    }
    ctx->pc = 0x2C895Cu;
    SET_GPR_U32(ctx, 31, 0x2C8964u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C895Cu, 0x2C8964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8964u;
label_2c8964:
    // 0x2c8964: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2c8968:
    if (ctx->pc == 0x2C8968u) {
        ctx->pc = 0x2C896Cu;
        goto label_2c896c;
    }
    ctx->pc = 0x2C8964u;
    {
        const bool branch_taken_0x2c8964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8964) {
            ctx->pc = 0x2C897Cu;
            goto label_2c897c;
        }
    }
    ctx->pc = 0x2C896Cu;
label_2c896c:
    // 0x2c896c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c896cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8970:
    // 0x2c8970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8974:
    // 0x2c8974: 0xc0b1704  jal         func_2C5C10
label_2c8978:
    if (ctx->pc == 0x2C8978u) {
        ctx->pc = 0x2C897Cu;
        goto label_2c897c;
    }
    ctx->pc = 0x2C8974u;
    SET_GPR_U32(ctx, 31, 0x2C897Cu);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C8974u, 0x2C897Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C897Cu;
label_2c897c:
    // 0x2c897c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c897cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8980:
    // 0x2c8980: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c8980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c8984:
    // 0x2c8984: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c8984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c8988:
    // 0x2c8988: 0xc0b4db0  jal         func_2D36C0
label_2c898c:
    if (ctx->pc == 0x2C898Cu) {
        ctx->pc = 0x2C8990u;
        goto label_2c8990;
    }
    ctx->pc = 0x2C8988u;
    SET_GPR_U32(ctx, 31, 0x2C8990u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C8988u, 0x2C8990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8990u;
label_2c8990:
    // 0x2c8990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c8994:
    if (ctx->pc == 0x2C8994u) {
        ctx->pc = 0x2C8998u;
        goto label_2c8998;
    }
    ctx->pc = 0x2C8990u;
    {
        const bool branch_taken_0x2c8990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8990) {
            ctx->pc = 0x2C89ACu;
            goto label_2c89ac;
        }
    }
    ctx->pc = 0x2C8998u;
label_2c8998:
    // 0x2c8998: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2c8998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c899c:
    // 0x2c899c: 0x8c640094  lw          $a0, 0x94($v1)
    ctx->pc = 0x2c899cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2c89a0:
    // 0x2c89a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c89a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c89a4:
    // 0x2c89a4: 0xc0b5ad0  jal         func_2D6B40
label_2c89a8:
    if (ctx->pc == 0x2C89A8u) {
        ctx->pc = 0x2C89ACu;
        goto label_2c89ac;
    }
    ctx->pc = 0x2C89A4u;
    SET_GPR_U32(ctx, 31, 0x2C89ACu);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2C89A4u, 0x2C89ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89ACu;
label_2c89ac:
    // 0x2c89ac: 0x8fa601b8  lw          $a2, 0x1B8($sp)
    ctx->pc = 0x2c89acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2c89b0:
    // 0x2c89b0: 0x24c70004  addiu       $a3, $a2, 0x4
    ctx->pc = 0x2c89b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2c89b4:
    // 0x2c89b4: 0xafa701b8  sw          $a3, 0x1B8($sp)
    ctx->pc = 0x2c89b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 7));
label_2c89b8:
    // 0x2c89b8: 0x8fa201b8  lw          $v0, 0x1B8($sp)
    ctx->pc = 0x2c89b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 440)));
label_2c89bc:
    // 0x2c89bc: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c89bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2c89c0:
    // 0x2c89c0: 0x8fa901bc  lw          $t1, 0x1BC($sp)
    ctx->pc = 0x2c89c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 444)));
label_2c89c4:
    // 0x2c89c4: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x2c89c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c89c8:
    // 0x2c89c8: 0xc04147c  jal         func_1051F0
label_2c89cc:
    if (ctx->pc == 0x2C89CCu) {
        ctx->pc = 0x2C89D0u;
        goto label_2c89d0;
    }
    ctx->pc = 0x2C89C8u;
    SET_GPR_U32(ctx, 31, 0x2C89D0u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2C89C8u, 0x2C89D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89D0u;
label_2c89d0:
    // 0x2c89d0: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x2c89d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c89d4:
    // 0x2c89d4: 0x1462ffa4  bne         $v1, $v0, . + 4 + (-0x5C << 2)
label_2c89d8:
    if (ctx->pc == 0x2C89D8u) {
        ctx->pc = 0x2C89DCu;
        goto label_2c89dc;
    }
    ctx->pc = 0x2C89D4u;
    {
        const bool branch_taken_0x2c89d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c89d4) {
            ctx->pc = 0x2C8868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8868;
        }
    }
    ctx->pc = 0x2C89DCu;
label_2c89dc:
    // 0x2c89dc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x2c89dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c89e0:
    // 0x2c89e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c89e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c89e4:
    // 0x2c89e4: 0xc08ef28  jal         func_23BCA0
label_2c89e8:
    if (ctx->pc == 0x2C89E8u) {
        ctx->pc = 0x2C89ECu;
        goto label_2c89ec;
    }
    ctx->pc = 0x2C89E4u;
    SET_GPR_U32(ctx, 31, 0x2C89ECu);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2C89E4u, 0x2C89ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C89ECu;
label_2c89ec:
    // 0x2c89ec: 0x100002ac  b           . + 4 + (0x2AC << 2)
label_2c89f0:
    if (ctx->pc == 0x2C89F0u) {
        ctx->pc = 0x2C89F4u;
        goto label_2c89f4;
    }
    ctx->pc = 0x2C89ECu;
    {
        const bool branch_taken_0x2c89ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c89ec) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C89F4u;
label_2c89f4:
    // 0x2c89f4: 0xa3a001df  sb          $zero, 0x1DF($sp)
    ctx->pc = 0x2c89f4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 479), (uint8_t)GPR_U32(ctx, 0));
label_2c89f8:
    // 0x2c89f8: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x2c89f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_2c89fc:
    // 0x2c89fc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2c89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c8a00:
    // 0x2c8a00: 0xc780a4dc  lwc1        $f0, -0x5B24($gp)
    ctx->pc = 0x2c8a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c8a04:
    // 0x2c8a04: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c8a04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c8a08:
    // 0x2c8a08: 0xe780a4dc  swc1        $f0, -0x5B24($gp)
    ctx->pc = 0x2c8a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294943964), bits); }
label_2c8a0c:
    // 0x2c8a0c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2c8a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c8a10:
    // 0x2c8a10: 0xc780a4dc  lwc1        $f0, -0x5B24($gp)
    ctx->pc = 0x2c8a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943964)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c8a14:
    // 0x2c8a14: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8a14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8a18:
    // 0x2c8a18: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2c8a1c:
    if (ctx->pc == 0x2C8A1Cu) {
        ctx->pc = 0x2C8A20u;
        goto label_2c8a20;
    }
    ctx->pc = 0x2C8A18u;
    {
        const bool branch_taken_0x2c8a18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8a18) {
            ctx->pc = 0x2C8A2Cu;
            goto label_2c8a2c;
        }
    }
    ctx->pc = 0x2C8A20u;
label_2c8a20:
    // 0x2c8a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c8a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8a24:
    // 0x2c8a24: 0xa3a501df  sb          $a1, 0x1DF($sp)
    ctx->pc = 0x2c8a24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 479), (uint8_t)GPR_U32(ctx, 5));
label_2c8a28:
    // 0x2c8a28: 0xaf80bcb8  sw          $zero, -0x4348($gp)
    ctx->pc = 0x2c8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 0));
label_2c8a2c:
    // 0x2c8a2c: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8a30:
    // 0x2c8a30: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8a34:
    // 0x2c8a34: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c8a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c8a38:
    // 0x2c8a38: 0xc085538  jal         func_2154E0
label_2c8a3c:
    if (ctx->pc == 0x2C8A3Cu) {
        ctx->pc = 0x2C8A40u;
        goto label_2c8a40;
    }
    ctx->pc = 0x2C8A38u;
    SET_GPR_U32(ctx, 31, 0x2C8A40u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8A38u, 0x2C8A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A40u;
label_2c8a40:
    // 0x2c8a40: 0xafa201a4  sw          $v0, 0x1A4($sp)
    ctx->pc = 0x2c8a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 2));
label_2c8a44:
    // 0x2c8a44: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x2c8a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2c8a48:
    // 0x2c8a48: 0xc063dd0  jal         func_18F740
label_2c8a4c:
    if (ctx->pc == 0x2C8A4Cu) {
        ctx->pc = 0x2C8A50u;
        goto label_2c8a50;
    }
    ctx->pc = 0x2C8A48u;
    SET_GPR_U32(ctx, 31, 0x2C8A50u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8A48u, 0x2C8A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A50u;
label_2c8a50:
    // 0x2c8a50: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2c8a54:
    if (ctx->pc == 0x2C8A54u) {
        ctx->pc = 0x2C8A58u;
        goto label_2c8a58;
    }
    ctx->pc = 0x2C8A50u;
    {
        const bool branch_taken_0x2c8a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a50) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C8A58u;
label_2c8a58:
    // 0x2c8a58: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x2c8a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2c8a5c:
    // 0x2c8a5c: 0xc063dd0  jal         func_18F740
label_2c8a60:
    if (ctx->pc == 0x2C8A60u) {
        ctx->pc = 0x2C8A64u;
        goto label_2c8a64;
    }
    ctx->pc = 0x2C8A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A64u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8A5Cu, 0x2C8A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A64u;
label_2c8a64:
    // 0x2c8a64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8a64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8a68:
    // 0x2c8a68: 0xc05140c  jal         func_145030
label_2c8a6c:
    if (ctx->pc == 0x2C8A6Cu) {
        ctx->pc = 0x2C8A70u;
        goto label_2c8a70;
    }
    ctx->pc = 0x2C8A68u;
    SET_GPR_U32(ctx, 31, 0x2C8A70u);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x2C8A68u, 0x2C8A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A70u;
label_2c8a70:
    // 0x2c8a70: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_2c8a74:
    if (ctx->pc == 0x2C8A74u) {
        ctx->pc = 0x2C8A78u;
        goto label_2c8a78;
    }
    ctx->pc = 0x2C8A70u;
    {
        const bool branch_taken_0x2c8a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a70) {
            ctx->pc = 0x2C8A9Cu;
            goto label_2c8a9c;
        }
    }
    ctx->pc = 0x2C8A78u;
label_2c8a78:
    // 0x2c8a78: 0x8fa401a4  lw          $a0, 0x1A4($sp)
    ctx->pc = 0x2c8a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_2c8a7c:
    // 0x2c8a7c: 0xc063dd0  jal         func_18F740
label_2c8a80:
    if (ctx->pc == 0x2C8A80u) {
        ctx->pc = 0x2C8A84u;
        goto label_2c8a84;
    }
    ctx->pc = 0x2C8A7Cu;
    SET_GPR_U32(ctx, 31, 0x2C8A84u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8A7Cu, 0x2C8A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A84u;
label_2c8a84:
    // 0x2c8a84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8a88:
    // 0x2c8a88: 0xc0ae418  jal         func_2B9060
label_2c8a8c:
    if (ctx->pc == 0x2C8A8Cu) {
        ctx->pc = 0x2C8A90u;
        goto label_2c8a90;
    }
    ctx->pc = 0x2C8A88u;
    SET_GPR_U32(ctx, 31, 0x2C8A90u);
    ctx->pc = 0x2B9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9060u, 0x2C8A88u, 0x2C8A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8A90u;
label_2c8a90:
    // 0x2c8a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8a94:
    // 0x2c8a94: 0x10800282  beqz        $a0, . + 4 + (0x282 << 2)
label_2c8a98:
    if (ctx->pc == 0x2C8A98u) {
        ctx->pc = 0x2C8A9Cu;
        goto label_2c8a9c;
    }
    ctx->pc = 0x2C8A94u;
    {
        const bool branch_taken_0x2c8a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8a94) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8A9Cu;
label_2c8a9c:
    // 0x2c8a9c: 0x8f85bcb8  lw          $a1, -0x4348($gp)
    ctx->pc = 0x2c8a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950072)));
label_2c8aa0:
    // 0x2c8aa0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2c8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2c8aa4:
    // 0x2c8aa4: 0x10a30250  beq         $a1, $v1, . + 4 + (0x250 << 2)
label_2c8aa8:
    if (ctx->pc == 0x2C8AA8u) {
        ctx->pc = 0x2C8AACu;
        goto label_2c8aac;
    }
    ctx->pc = 0x2C8AA4u;
    {
        const bool branch_taken_0x2c8aa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8aa4) {
            ctx->pc = 0x2C93E8u;
            goto label_2c93e8;
        }
    }
    ctx->pc = 0x2C8AACu;
label_2c8aac:
    // 0x2c8aac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c8aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c8ab0:
    // 0x2c8ab0: 0x10a40211  beq         $a1, $a0, . + 4 + (0x211 << 2)
label_2c8ab4:
    if (ctx->pc == 0x2C8AB4u) {
        ctx->pc = 0x2C8AB8u;
        goto label_2c8ab8;
    }
    ctx->pc = 0x2C8AB0u;
    {
        const bool branch_taken_0x2c8ab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c8ab0) {
            ctx->pc = 0x2C92F8u;
            goto label_2c92f8;
        }
    }
    ctx->pc = 0x2C8AB8u;
label_2c8ab8:
    // 0x2c8ab8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2c8ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8abc:
    // 0x2c8abc: 0x10a3012a  beq         $a1, $v1, . + 4 + (0x12A << 2)
label_2c8ac0:
    if (ctx->pc == 0x2C8AC0u) {
        ctx->pc = 0x2C8AC4u;
        goto label_2c8ac4;
    }
    ctx->pc = 0x2C8ABCu;
    {
        const bool branch_taken_0x2c8abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c8abc) {
            ctx->pc = 0x2C8F68u;
            goto label_2c8f68;
        }
    }
    ctx->pc = 0x2C8AC4u;
label_2c8ac4:
    // 0x2c8ac4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c8ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8ac8:
    // 0x2c8ac8: 0x10a4007d  beq         $a1, $a0, . + 4 + (0x7D << 2)
label_2c8acc:
    if (ctx->pc == 0x2C8ACCu) {
        ctx->pc = 0x2C8AD0u;
        goto label_2c8ad0;
    }
    ctx->pc = 0x2C8AC8u;
    {
        const bool branch_taken_0x2c8ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x2c8ac8) {
            ctx->pc = 0x2C8CC0u;
            goto label_2c8cc0;
        }
    }
    ctx->pc = 0x2C8AD0u;
label_2c8ad0:
    // 0x2c8ad0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2c8ad4:
    if (ctx->pc == 0x2C8AD4u) {
        ctx->pc = 0x2C8AD8u;
        goto label_2c8ad8;
    }
    ctx->pc = 0x2C8AD0u;
    {
        const bool branch_taken_0x2c8ad0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ad0) {
            ctx->pc = 0x2C8AE0u;
            goto label_2c8ae0;
        }
    }
    ctx->pc = 0x2C8AD8u;
label_2c8ad8:
    // 0x2c8ad8: 0x10000271  b           . + 4 + (0x271 << 2)
label_2c8adc:
    if (ctx->pc == 0x2C8ADCu) {
        ctx->pc = 0x2C8AE0u;
        goto label_2c8ae0;
    }
    ctx->pc = 0x2C8AD8u;
    {
        const bool branch_taken_0x2c8ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ad8) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8AE0u;
label_2c8ae0:
    // 0x2c8ae0: 0x93a201df  lbu         $v0, 0x1DF($sp)
    ctx->pc = 0x2c8ae0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 479)));
label_2c8ae4:
    // 0x2c8ae4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2c8ae8:
    if (ctx->pc == 0x2C8AE8u) {
        ctx->pc = 0x2C8AECu;
        goto label_2c8aec;
    }
    ctx->pc = 0x2C8AE4u;
    {
        const bool branch_taken_0x2c8ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ae4) {
            ctx->pc = 0x2C8B0Cu;
            goto label_2c8b0c;
        }
    }
    ctx->pc = 0x2C8AECu;
label_2c8aec:
    // 0x2c8aec: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c8aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8af0:
    // 0x2c8af0: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c8af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8af4:
    // 0x2c8af4: 0x8c440094  lw          $a0, 0x94($v0)
    ctx->pc = 0x2c8af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_2c8af8:
    // 0x2c8af8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c8af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8afc:
    // 0x2c8afc: 0xc0b4db0  jal         func_2D36C0
label_2c8b00:
    if (ctx->pc == 0x2C8B00u) {
        ctx->pc = 0x2C8B04u;
        goto label_2c8b04;
    }
    ctx->pc = 0x2C8AFCu;
    SET_GPR_U32(ctx, 31, 0x2C8B04u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C8AFCu, 0x2C8B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B04u;
label_2c8b04:
    // 0x2c8b04: 0x14400266  bnez        $v0, . + 4 + (0x266 << 2)
label_2c8b08:
    if (ctx->pc == 0x2C8B08u) {
        ctx->pc = 0x2C8B0Cu;
        goto label_2c8b0c;
    }
    ctx->pc = 0x2C8B04u;
    {
        const bool branch_taken_0x2c8b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b04) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8B0Cu;
label_2c8b0c:
    // 0x2c8b0c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c8b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8b10:
    // 0x2c8b10: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2c8b10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_2c8b14:
    // 0x2c8b14: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c8b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8b18:
    // 0x2c8b18: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c8b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c8b1c:
    // 0x2c8b1c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c8b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8b20:
    // 0x2c8b20: 0xc085538  jal         func_2154E0
label_2c8b24:
    if (ctx->pc == 0x2C8B24u) {
        ctx->pc = 0x2C8B28u;
        goto label_2c8b28;
    }
    ctx->pc = 0x2C8B20u;
    SET_GPR_U32(ctx, 31, 0x2C8B28u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8B20u, 0x2C8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B28u;
label_2c8b28:
    // 0x2c8b28: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x2c8b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
label_2c8b2c:
    // 0x2c8b2c: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x2c8b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2c8b30:
    // 0x2c8b30: 0xc05ce40  jal         func_173900
label_2c8b34:
    if (ctx->pc == 0x2C8B34u) {
        ctx->pc = 0x2C8B38u;
        goto label_2c8b38;
    }
    ctx->pc = 0x2C8B30u;
    SET_GPR_U32(ctx, 31, 0x2C8B38u);
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x2C8B30u, 0x2C8B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B38u;
label_2c8b38:
    // 0x2c8b38: 0xafa2019c  sw          $v0, 0x19C($sp)
    ctx->pc = 0x2c8b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
label_2c8b3c:
    // 0x2c8b3c: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x2c8b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2c8b40:
    // 0x2c8b40: 0xc040aa8  jal         func_102AA0
label_2c8b44:
    if (ctx->pc == 0x2C8B44u) {
        ctx->pc = 0x2C8B48u;
        goto label_2c8b48;
    }
    ctx->pc = 0x2C8B40u;
    SET_GPR_U32(ctx, 31, 0x2C8B48u);
    ctx->pc = 0x102AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AA0u, 0x2C8B40u, 0x2C8B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B48u;
label_2c8b48:
    // 0x2c8b48: 0xafa20198  sw          $v0, 0x198($sp)
    ctx->pc = 0x2c8b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 2));
label_2c8b4c:
    // 0x2c8b4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c8b4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b50:
    // 0x2c8b50: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2c8b54:
    if (ctx->pc == 0x2C8B54u) {
        ctx->pc = 0x2C8B58u;
        goto label_2c8b58;
    }
    ctx->pc = 0x2C8B50u;
    {
        const bool branch_taken_0x2c8b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8b50) {
            ctx->pc = 0x2C8C40u;
            goto label_2c8c40;
        }
    }
    ctx->pc = 0x2C8B58u;
label_2c8b58:
    // 0x2c8b58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2c8b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2c8b5c:
    // 0x2c8b5c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c8b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c8b60:
    // 0x2c8b60: 0x24a5e210  addiu       $a1, $a1, -0x1DF0
    ctx->pc = 0x2c8b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959632));
label_2c8b64:
    // 0x2c8b64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2c8b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2c8b68:
    // 0x2c8b68: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8b6c:
    // 0x2c8b6c: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2c8b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2c8b70:
    // 0x2c8b70: 0xc040a90  jal         func_102A40
label_2c8b74:
    if (ctx->pc == 0x2C8B74u) {
        ctx->pc = 0x2C8B78u;
        goto label_2c8b78;
    }
    ctx->pc = 0x2C8B70u;
    SET_GPR_U32(ctx, 31, 0x2C8B78u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C8B70u, 0x2C8B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8B78u;
label_2c8b78:
    // 0x2c8b78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8b78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8b7c:
    // 0x2c8b7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8b80:
    // 0x2c8b80: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c8b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2c8b84:
    // 0x2c8b84: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x2c8b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2c8b88:
    // 0x2c8b88: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c8b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c8b8c:
    // 0x2c8b8c: 0x24a5e210  addiu       $a1, $a1, -0x1DF0
    ctx->pc = 0x2c8b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959632));
label_2c8b90:
    // 0x2c8b90: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x2c8b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_2c8b94:
    // 0x2c8b94: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2c8b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c8b98:
    // 0x2c8b98: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2c8b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2c8b9c:
    // 0x2c8b9c: 0xc040a90  jal         func_102A40
label_2c8ba0:
    if (ctx->pc == 0x2C8BA0u) {
        ctx->pc = 0x2C8BA4u;
        goto label_2c8ba4;
    }
    ctx->pc = 0x2C8B9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8BA4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C8B9Cu, 0x2C8BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BA4u;
label_2c8ba4:
    // 0x2c8ba4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8ba8:
    // 0x2c8ba8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c8ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c8bac:
    // 0x2c8bac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c8bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c8bb0:
    // 0x2c8bb0: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2c8bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c8bb4:
    // 0x2c8bb4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c8bb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c8bb8:
    // 0x2c8bb8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_2c8bbc:
    // 0x2c8bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c8bc0:
    // 0x2c8bc0: 0x0  nop
    ctx->pc = 0x2c8bc0u;
    // NOP
label_2c8bc4:
    // 0x2c8bc4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c8bc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c8bc8:
    // 0x2c8bc8: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_2c8bcc:
    if (ctx->pc == 0x2C8BCCu) {
        ctx->pc = 0x2C8BD0u;
        goto label_2c8bd0;
    }
    ctx->pc = 0x2C8BC8u;
    {
        const bool branch_taken_0x2c8bc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c8bc8) {
            ctx->pc = 0x2C8C04u;
            goto label_2c8c04;
        }
    }
    ctx->pc = 0x2C8BD0u;
label_2c8bd0:
    // 0x2c8bd0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2c8bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2c8bd4:
    // 0x2c8bd4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c8bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2c8bd8:
    // 0x2c8bd8: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c8bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2c8bdc:
    // 0x2c8bdc: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x2c8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
label_2c8be0:
    // 0x2c8be0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8be4:
    // 0x2c8be4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8be8:
    // 0x2c8be8: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2c8bec:
    // 0x2c8bec: 0xc040a90  jal         func_102A40
label_2c8bf0:
    if (ctx->pc == 0x2C8BF0u) {
        ctx->pc = 0x2C8BF4u;
        goto label_2c8bf4;
    }
    ctx->pc = 0x2C8BECu;
    SET_GPR_U32(ctx, 31, 0x2C8BF4u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C8BECu, 0x2C8BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8BF4u;
label_2c8bf4:
    // 0x2c8bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8bf8:
    // 0x2c8bf8: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x2c8bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2c8bfc:
    // 0x2c8bfc: 0x1000000f  b           . + 4 + (0xF << 2)
label_2c8c00:
    if (ctx->pc == 0x2C8C00u) {
        ctx->pc = 0x2C8C04u;
        goto label_2c8c04;
    }
    ctx->pc = 0x2C8BFCu;
    {
        const bool branch_taken_0x2c8bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bfc) {
            ctx->pc = 0x2C8C3Cu;
            goto label_2c8c3c;
        }
    }
    ctx->pc = 0x2C8C04u;
label_2c8c04:
    // 0x2c8c04: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2c8c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2c8c08:
    // 0x2c8c08: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c8c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2c8c0c:
    // 0x2c8c0c: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x2c8c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
label_2c8c10:
    // 0x2c8c10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8c14:
    // 0x2c8c14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8c18:
    // 0x2c8c18: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x2c8c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2c8c1c:
    // 0x2c8c1c: 0xc040a90  jal         func_102A40
label_2c8c20:
    if (ctx->pc == 0x2C8C20u) {
        ctx->pc = 0x2C8C24u;
        goto label_2c8c24;
    }
    ctx->pc = 0x2C8C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C24u);
    ctx->pc = 0x102A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102A40u, 0x2C8C1Cu, 0x2C8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C24u;
label_2c8c24:
    // 0x2c8c24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c8c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8c28:
    // 0x2c8c28: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x2c8c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_2c8c2c:
    // 0x2c8c2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c8c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c8c30:
    // 0x2c8c30: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2c8c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c8c34:
    // 0x2c8c34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c8c34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c8c38:
    // 0x2c8c38: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2c8c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2c8c3c:
    // 0x2c8c3c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2c8c40:
    // 0x2c8c40: 0x2e220003  sltiu       $v0, $s1, 0x3
    ctx->pc = 0x2c8c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2c8c44:
    // 0x2c8c44: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_2c8c48:
    if (ctx->pc == 0x2C8C48u) {
        ctx->pc = 0x2C8C4Cu;
        goto label_2c8c4c;
    }
    ctx->pc = 0x2C8C44u;
    {
        const bool branch_taken_0x2c8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8c44) {
            ctx->pc = 0x2C8B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8b58;
        }
    }
    ctx->pc = 0x2C8C4Cu;
label_2c8c4c:
    // 0x2c8c4c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c8c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c8c50:
    // 0x2c8c50: 0xc088560  jal         func_221580
label_2c8c54:
    if (ctx->pc == 0x2C8C54u) {
        ctx->pc = 0x2C8C58u;
        goto label_2c8c58;
    }
    ctx->pc = 0x2C8C50u;
    SET_GPR_U32(ctx, 31, 0x2C8C58u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x2C8C50u, 0x2C8C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C58u;
label_2c8c58:
    // 0x2c8c58: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c8c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c8c5c:
    // 0x2c8c5c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c8c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c8c60:
    // 0x2c8c60: 0x24a5e248  addiu       $a1, $a1, -0x1DB8
    ctx->pc = 0x2c8c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959688));
label_2c8c64:
    // 0x2c8c64: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c8c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2c8c68:
    // 0x2c8c68: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x2c8c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
label_2c8c6c:
    // 0x2c8c6c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c70:
    // 0x2c8c70: 0xc041b90  jal         func_106E40
label_2c8c74:
    if (ctx->pc == 0x2C8C74u) {
        ctx->pc = 0x2C8C78u;
        goto label_2c8c78;
    }
    ctx->pc = 0x2C8C70u;
    SET_GPR_U32(ctx, 31, 0x2C8C78u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x2C8C70u, 0x2C8C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C78u;
label_2c8c78:
    // 0x2c8c78: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c8c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c8c7c:
    // 0x2c8c7c: 0x2402054c  addiu       $v0, $zero, 0x54C
    ctx->pc = 0x2c8c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
label_2c8c80:
    // 0x2c8c80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c84:
    // 0x2c8c84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c8c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c8c88:
    // 0x2c8c88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c8c88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c8c:
    // 0x2c8c8c: 0xc040924  jal         func_102490
label_2c8c90:
    if (ctx->pc == 0x2C8C90u) {
        ctx->pc = 0x2C8C94u;
        goto label_2c8c94;
    }
    ctx->pc = 0x2C8C8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C94u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x2C8C8Cu, 0x2C8C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C94u;
label_2c8c94:
    // 0x2c8c94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8c94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c98:
    // 0x2c8c98: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2c8c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c8c9c:
    // 0x2c8c9c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x2c8c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c8ca0:
    // 0x2c8ca0: 0xc08ef28  jal         func_23BCA0
label_2c8ca4:
    if (ctx->pc == 0x2C8CA4u) {
        ctx->pc = 0x2C8CA8u;
        goto label_2c8ca8;
    }
    ctx->pc = 0x2C8CA0u;
    SET_GPR_U32(ctx, 31, 0x2C8CA8u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x2C8CA0u, 0x2C8CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CA8u;
label_2c8ca8:
    // 0x2c8ca8: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2c8ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_2c8cac:
    // 0x2c8cac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c8cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c8cb0:
    // 0x2c8cb0: 0xc0887b4  jal         func_221ED0
label_2c8cb4:
    if (ctx->pc == 0x2C8CB4u) {
        ctx->pc = 0x2C8CB8u;
        goto label_2c8cb8;
    }
    ctx->pc = 0x2C8CB0u;
    SET_GPR_U32(ctx, 31, 0x2C8CB8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x2C8CB0u, 0x2C8CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CB8u;
label_2c8cb8:
    // 0x2c8cb8: 0x100001f9  b           . + 4 + (0x1F9 << 2)
label_2c8cbc:
    if (ctx->pc == 0x2C8CBCu) {
        ctx->pc = 0x2C8CC0u;
        goto label_2c8cc0;
    }
    ctx->pc = 0x2C8CB8u;
    {
        const bool branch_taken_0x2c8cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8cb8) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8CC0u;
label_2c8cc0:
    // 0x2c8cc0: 0x8f84bcc4  lw          $a0, -0x433C($gp)
    ctx->pc = 0x2c8cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8cc4:
    // 0x2c8cc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c8cc8:
    // 0x2c8cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ccc:
    // 0x2c8ccc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c8cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8cd0:
    // 0x2c8cd0: 0xc085538  jal         func_2154E0
label_2c8cd4:
    if (ctx->pc == 0x2C8CD4u) {
        ctx->pc = 0x2C8CD8u;
        goto label_2c8cd8;
    }
    ctx->pc = 0x2C8CD0u;
    SET_GPR_U32(ctx, 31, 0x2C8CD8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8CD0u, 0x2C8CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CD8u;
label_2c8cd8:
    // 0x2c8cd8: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x2c8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
label_2c8cdc:
    // 0x2c8cdc: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x2c8cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_2c8ce0:
    // 0x2c8ce0: 0xc0480fc  jal         func_1203F0
label_2c8ce4:
    if (ctx->pc == 0x2C8CE4u) {
        ctx->pc = 0x2C8CE8u;
        goto label_2c8ce8;
    }
    ctx->pc = 0x2C8CE0u;
    SET_GPR_U32(ctx, 31, 0x2C8CE8u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C8CE0u, 0x2C8CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8CE8u;
label_2c8ce8:
    // 0x2c8ce8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8ce8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cec:
    // 0x2c8cec: 0x146001ec  bnez        $v1, . + 4 + (0x1EC << 2)
label_2c8cf0:
    if (ctx->pc == 0x2C8CF0u) {
        ctx->pc = 0x2C8CF4u;
        goto label_2c8cf4;
    }
    ctx->pc = 0x2C8CECu;
    {
        const bool branch_taken_0x2c8cec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8cec) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8CF4u;
label_2c8cf4:
    // 0x2c8cf4: 0x8fa40174  lw          $a0, 0x174($sp)
    ctx->pc = 0x2c8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_2c8cf8:
    // 0x2c8cf8: 0xc09b35c  jal         func_26CD70
label_2c8cfc:
    if (ctx->pc == 0x2C8CFCu) {
        ctx->pc = 0x2C8D00u;
        goto label_2c8d00;
    }
    ctx->pc = 0x2C8CF8u;
    SET_GPR_U32(ctx, 31, 0x2C8D00u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C8CF8u, 0x2C8D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D00u;
label_2c8d00:
    // 0x2c8d00: 0x144001e7  bnez        $v0, . + 4 + (0x1E7 << 2)
label_2c8d04:
    if (ctx->pc == 0x2C8D04u) {
        ctx->pc = 0x2C8D08u;
        goto label_2c8d08;
    }
    ctx->pc = 0x2C8D00u;
    {
        const bool branch_taken_0x2c8d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d00) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8D08u;
label_2c8d08:
    // 0x2c8d08: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8d0c:
    // 0x2c8d0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8d10:
    // 0x2c8d10: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d14:
    // 0x2c8d14: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x2c8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8d18:
    // 0x2c8d18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8d18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d1c:
    // 0x2c8d1c: 0xc085538  jal         func_2154E0
label_2c8d20:
    if (ctx->pc == 0x2C8D20u) {
        ctx->pc = 0x2C8D24u;
        goto label_2c8d24;
    }
    ctx->pc = 0x2C8D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D24u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8D1Cu, 0x2C8D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D24u;
label_2c8d24:
    // 0x2c8d24: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x2c8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_2c8d28:
    // 0x2c8d28: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8d2c:
    // 0x2c8d2c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2c8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2c8d30:
    // 0x2c8d30: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2c8d30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2c8d34:
    // 0x2c8d34: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8d38:
    // 0x2c8d38: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2c8d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c8d3c:
    // 0x2c8d3c: 0xc085538  jal         func_2154E0
label_2c8d40:
    if (ctx->pc == 0x2C8D40u) {
        ctx->pc = 0x2C8D44u;
        goto label_2c8d44;
    }
    ctx->pc = 0x2C8D3Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D44u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8D3Cu, 0x2C8D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D44u;
label_2c8d44:
    // 0x2c8d44: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x2c8d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_2c8d48:
    // 0x2c8d48: 0x8fa501e0  lw          $a1, 0x1E0($sp)
    ctx->pc = 0x2c8d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8d4c:
    // 0x2c8d4c: 0x8f83bcc4  lw          $v1, -0x433C($gp)
    ctx->pc = 0x2c8d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8d50:
    // 0x2c8d50: 0x8ca20094  lw          $v0, 0x94($a1)
    ctx->pc = 0x2c8d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_2c8d54:
    // 0x2c8d54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d58:
    // 0x2c8d58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8d5c:
    // 0x2c8d5c: 0xc0b4db0  jal         func_2D36C0
label_2c8d60:
    if (ctx->pc == 0x2C8D60u) {
        ctx->pc = 0x2C8D64u;
        goto label_2c8d64;
    }
    ctx->pc = 0x2C8D5Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D64u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C8D5Cu, 0x2C8D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D64u;
label_2c8d64:
    // 0x2c8d64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d68:
    // 0x2c8d68: 0x146001cd  bnez        $v1, . + 4 + (0x1CD << 2)
label_2c8d6c:
    if (ctx->pc == 0x2C8D6Cu) {
        ctx->pc = 0x2C8D70u;
        goto label_2c8d70;
    }
    ctx->pc = 0x2C8D68u;
    {
        const bool branch_taken_0x2c8d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d68) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8D70u;
label_2c8d70:
    // 0x2c8d70: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8d74:
    // 0x2c8d74: 0xc063dd0  jal         func_18F740
label_2c8d78:
    if (ctx->pc == 0x2C8D78u) {
        ctx->pc = 0x2C8D7Cu;
        goto label_2c8d7c;
    }
    ctx->pc = 0x2C8D74u;
    SET_GPR_U32(ctx, 31, 0x2C8D7Cu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8D74u, 0x2C8D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D7Cu;
label_2c8d7c:
    // 0x2c8d7c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8d7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d80:
    // 0x2c8d80: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_2c8d84:
    if (ctx->pc == 0x2C8D84u) {
        ctx->pc = 0x2C8D88u;
        goto label_2c8d88;
    }
    ctx->pc = 0x2C8D80u;
    {
        const bool branch_taken_0x2c8d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8d80) {
            ctx->pc = 0x2C8DD8u;
            goto label_2c8dd8;
        }
    }
    ctx->pc = 0x2C8D88u;
label_2c8d88:
    // 0x2c8d88: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8d8c:
    // 0x2c8d8c: 0xc063dd0  jal         func_18F740
label_2c8d90:
    if (ctx->pc == 0x2C8D90u) {
        ctx->pc = 0x2C8D94u;
        goto label_2c8d94;
    }
    ctx->pc = 0x2C8D8Cu;
    SET_GPR_U32(ctx, 31, 0x2C8D94u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8D8Cu, 0x2C8D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8D94u;
label_2c8d94:
    // 0x2c8d94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d98:
    // 0x2c8d98: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d9c:
    // 0x2c8d9c: 0xc05140c  jal         func_145030
label_2c8da0:
    if (ctx->pc == 0x2C8DA0u) {
        ctx->pc = 0x2C8DA4u;
        goto label_2c8da4;
    }
    ctx->pc = 0x2C8D9Cu;
    SET_GPR_U32(ctx, 31, 0x2C8DA4u);
    ctx->pc = 0x145030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145030u, 0x2C8D9Cu, 0x2C8DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DA4u;
label_2c8da4:
    // 0x2c8da4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8da4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8da8:
    // 0x2c8da8: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2c8dac:
    if (ctx->pc == 0x2C8DACu) {
        ctx->pc = 0x2C8DB0u;
        goto label_2c8db0;
    }
    ctx->pc = 0x2C8DA8u;
    {
        const bool branch_taken_0x2c8da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8da8) {
            ctx->pc = 0x2C8DD8u;
            goto label_2c8dd8;
        }
    }
    ctx->pc = 0x2C8DB0u;
label_2c8db0:
    // 0x2c8db0: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8db4:
    // 0x2c8db4: 0xc063dd0  jal         func_18F740
label_2c8db8:
    if (ctx->pc == 0x2C8DB8u) {
        ctx->pc = 0x2C8DBCu;
        goto label_2c8dbc;
    }
    ctx->pc = 0x2C8DB4u;
    SET_GPR_U32(ctx, 31, 0x2C8DBCu);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C8DB4u, 0x2C8DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DBCu;
label_2c8dbc:
    // 0x2c8dbc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8dbcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8dc0:
    // 0x2c8dc0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c8dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c8dc4:
    // 0x2c8dc4: 0xc0ae418  jal         func_2B9060
label_2c8dc8:
    if (ctx->pc == 0x2C8DC8u) {
        ctx->pc = 0x2C8DCCu;
        goto label_2c8dcc;
    }
    ctx->pc = 0x2C8DC4u;
    SET_GPR_U32(ctx, 31, 0x2C8DCCu);
    ctx->pc = 0x2B9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9060u, 0x2C8DC4u, 0x2C8DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DCCu;
label_2c8dcc:
    // 0x2c8dcc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c8dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8dd0:
    // 0x2c8dd0: 0x126001b3  beqz        $s3, . + 4 + (0x1B3 << 2)
label_2c8dd4:
    if (ctx->pc == 0x2C8DD4u) {
        ctx->pc = 0x2C8DD8u;
        goto label_2c8dd8;
    }
    ctx->pc = 0x2C8DD0u;
    {
        const bool branch_taken_0x2c8dd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dd0) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8DD8u;
label_2c8dd8:
    // 0x2c8dd8: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x2c8dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_2c8ddc:
    // 0x2c8ddc: 0xc0ae154  jal         func_2B8550
label_2c8de0:
    if (ctx->pc == 0x2C8DE0u) {
        ctx->pc = 0x2C8DE4u;
        goto label_2c8de4;
    }
    ctx->pc = 0x2C8DDCu;
    SET_GPR_U32(ctx, 31, 0x2C8DE4u);
    ctx->pc = 0x2B8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8550u, 0x2C8DDCu, 0x2C8DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DE4u;
label_2c8de4:
    // 0x2c8de4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8de4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8de8:
    // 0x2c8de8: 0x106001ad  beqz        $v1, . + 4 + (0x1AD << 2)
label_2c8dec:
    if (ctx->pc == 0x2C8DECu) {
        ctx->pc = 0x2C8DF0u;
        goto label_2c8df0;
    }
    ctx->pc = 0x2C8DE8u;
    {
        const bool branch_taken_0x2c8de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8de8) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8DF0u;
label_2c8df0:
    // 0x2c8df0: 0x8fa40170  lw          $a0, 0x170($sp)
    ctx->pc = 0x2c8df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_2c8df4:
    // 0x2c8df4: 0xc0480fc  jal         func_1203F0
label_2c8df8:
    if (ctx->pc == 0x2C8DF8u) {
        ctx->pc = 0x2C8DFCu;
        goto label_2c8dfc;
    }
    ctx->pc = 0x2C8DF4u;
    SET_GPR_U32(ctx, 31, 0x2C8DFCu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C8DF4u, 0x2C8DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8DFCu;
label_2c8dfc:
    // 0x2c8dfc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_2c8e00:
    if (ctx->pc == 0x2C8E00u) {
        ctx->pc = 0x2C8E04u;
        goto label_2c8e04;
    }
    ctx->pc = 0x2C8DFCu;
    {
        const bool branch_taken_0x2c8dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8dfc) {
            ctx->pc = 0x2C8F48u;
            goto label_2c8f48;
        }
    }
    ctx->pc = 0x2C8E04u;
label_2c8e04:
    // 0x2c8e04: 0xaf80bcb8  sw          $zero, -0x4348($gp)
    ctx->pc = 0x2c8e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 0));
label_2c8e08:
    // 0x2c8e08: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c8e08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e0c:
    // 0x2c8e0c: 0xc090864  jal         func_242190
label_2c8e10:
    if (ctx->pc == 0x2C8E10u) {
        ctx->pc = 0x2C8E14u;
        goto label_2c8e14;
    }
    ctx->pc = 0x2C8E0Cu;
    SET_GPR_U32(ctx, 31, 0x2C8E14u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C8E0Cu, 0x2C8E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E14u;
label_2c8e14:
    // 0x2c8e14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e18:
    // 0x2c8e18: 0xc090590  jal         func_241640
label_2c8e1c:
    if (ctx->pc == 0x2C8E1Cu) {
        ctx->pc = 0x2C8E20u;
        goto label_2c8e20;
    }
    ctx->pc = 0x2C8E18u;
    SET_GPR_U32(ctx, 31, 0x2C8E20u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2C8E18u, 0x2C8E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E20u;
label_2c8e20:
    // 0x2c8e20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e24:
    // 0x2c8e24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e28:
    // 0x2c8e28: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c8e2c:
    // 0x2c8e2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e30:
    // 0x2c8e30: 0xc09157c  jal         func_2455F0
label_2c8e34:
    if (ctx->pc == 0x2C8E34u) {
        ctx->pc = 0x2C8E38u;
        goto label_2c8e38;
    }
    ctx->pc = 0x2C8E30u;
    SET_GPR_U32(ctx, 31, 0x2C8E38u);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2C8E30u, 0x2C8E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E38u;
label_2c8e38:
    // 0x2c8e38: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2c8e38u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e3c:
    // 0x2c8e3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e40:
    // 0x2c8e40: 0xc040e7c  jal         func_1039F0
label_2c8e44:
    if (ctx->pc == 0x2C8E44u) {
        ctx->pc = 0x2C8E48u;
        goto label_2c8e48;
    }
    ctx->pc = 0x2C8E40u;
    SET_GPR_U32(ctx, 31, 0x2C8E48u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2C8E40u, 0x2C8E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E48u;
label_2c8e48:
    // 0x2c8e48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e4c:
    // 0x2c8e4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c8e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e50:
    // 0x2c8e50: 0x10000016  b           . + 4 + (0x16 << 2)
label_2c8e54:
    if (ctx->pc == 0x2C8E54u) {
        ctx->pc = 0x2C8E58u;
        goto label_2c8e58;
    }
    ctx->pc = 0x2C8E50u;
    {
        const bool branch_taken_0x2c8e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e50) {
            ctx->pc = 0x2C8EACu;
            goto label_2c8eac;
        }
    }
    ctx->pc = 0x2C8E58u;
label_2c8e58:
    // 0x2c8e58: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8e5c:
    // 0x2c8e5c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e60:
    // 0x2c8e60: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x2c8e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_2c8e64:
    // 0x2c8e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e68:
    // 0x2c8e68: 0xc085538  jal         func_2154E0
label_2c8e6c:
    if (ctx->pc == 0x2C8E6Cu) {
        ctx->pc = 0x2C8E70u;
        goto label_2c8e70;
    }
    ctx->pc = 0x2C8E68u;
    SET_GPR_U32(ctx, 31, 0x2C8E70u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8E68u, 0x2C8E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E70u;
label_2c8e70:
    // 0x2c8e70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e74:
    // 0x2c8e74: 0xafa40168  sw          $a0, 0x168($sp)
    ctx->pc = 0x2c8e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 4));
label_2c8e78:
    // 0x2c8e78: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2c8e78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_2c8e7c:
    // 0x2c8e7c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c8e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e80:
    // 0x2c8e80: 0xc094178  jal         func_2505E0
label_2c8e84:
    if (ctx->pc == 0x2C8E84u) {
        ctx->pc = 0x2C8E88u;
        goto label_2c8e88;
    }
    ctx->pc = 0x2C8E80u;
    SET_GPR_U32(ctx, 31, 0x2C8E88u);
    ctx->pc = 0x2505E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2505E0u, 0x2C8E80u, 0x2C8E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8E88u;
label_2c8e88:
    // 0x2c8e88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c8e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8e8c:
    // 0x2c8e8c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_2c8e90:
    if (ctx->pc == 0x2C8E90u) {
        ctx->pc = 0x2C8E94u;
        goto label_2c8e94;
    }
    ctx->pc = 0x2C8E8Cu;
    {
        const bool branch_taken_0x2c8e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c8e8c) {
            ctx->pc = 0x2C8EA4u;
            goto label_2c8ea4;
        }
    }
    ctx->pc = 0x2C8E94u;
label_2c8e94:
    // 0x2c8e94: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8e98:
    // 0x2c8e98: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c8e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e9c:
    // 0x2c8e9c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c8ea0:
    if (ctx->pc == 0x2C8EA0u) {
        ctx->pc = 0x2C8EA4u;
        goto label_2c8ea4;
    }
    ctx->pc = 0x2C8E9Cu;
    {
        const bool branch_taken_0x2c8e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8e9c) {
            ctx->pc = 0x2C8EC0u;
            goto label_2c8ec0;
        }
    }
    ctx->pc = 0x2C8EA4u;
label_2c8ea4:
    // 0x2c8ea4: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x2c8ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2c8ea8:
    // 0x2c8ea8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c8ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c8eac:
    // 0x2c8eac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8eb0:
    // 0x2c8eb0: 0xc04147c  jal         func_1051F0
label_2c8eb4:
    if (ctx->pc == 0x2C8EB4u) {
        ctx->pc = 0x2C8EB8u;
        goto label_2c8eb8;
    }
    ctx->pc = 0x2C8EB0u;
    SET_GPR_U32(ctx, 31, 0x2C8EB8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2C8EB0u, 0x2C8EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EB8u;
label_2c8eb8:
    // 0x2c8eb8: 0x1642ffe7  bne         $s2, $v0, . + 4 + (-0x19 << 2)
label_2c8ebc:
    if (ctx->pc == 0x2C8EBCu) {
        ctx->pc = 0x2C8EC0u;
        goto label_2c8ec0;
    }
    ctx->pc = 0x2C8EB8u;
    {
        const bool branch_taken_0x2c8eb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8eb8) {
            ctx->pc = 0x2C8E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c8e58;
        }
    }
    ctx->pc = 0x2C8EC0u;
label_2c8ec0:
    // 0x2c8ec0: 0x1415000b  bne         $zero, $s5, . + 4 + (0xB << 2)
label_2c8ec4:
    if (ctx->pc == 0x2C8EC4u) {
        ctx->pc = 0x2C8EC8u;
        goto label_2c8ec8;
    }
    ctx->pc = 0x2C8EC0u;
    {
        const bool branch_taken_0x2c8ec0 = (GPR_U64(ctx, 0) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c8ec0) {
            ctx->pc = 0x2C8EF0u;
            goto label_2c8ef0;
        }
    }
    ctx->pc = 0x2C8EC8u;
label_2c8ec8:
    // 0x2c8ec8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ecc:
    // 0x2c8ecc: 0xc0411f0  jal         func_1047C0
label_2c8ed0:
    if (ctx->pc == 0x2C8ED0u) {
        ctx->pc = 0x2C8ED4u;
        goto label_2c8ed4;
    }
    ctx->pc = 0x2C8ECCu;
    SET_GPR_U32(ctx, 31, 0x2C8ED4u);
    ctx->pc = 0x1047C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1047C0u, 0x2C8ECCu, 0x2C8ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8ED4u;
label_2c8ed4:
    // 0x2c8ed4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ed8:
    // 0x2c8ed8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2c8edc:
    if (ctx->pc == 0x2C8EDCu) {
        ctx->pc = 0x2C8EE0u;
        goto label_2c8ee0;
    }
    ctx->pc = 0x2C8ED8u;
    {
        const bool branch_taken_0x2c8ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8ed8) {
            ctx->pc = 0x2C8EF0u;
            goto label_2c8ef0;
        }
    }
    ctx->pc = 0x2C8EE0u;
label_2c8ee0:
    // 0x2c8ee0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ee4:
    // 0x2c8ee4: 0xc040e7c  jal         func_1039F0
label_2c8ee8:
    if (ctx->pc == 0x2C8EE8u) {
        ctx->pc = 0x2C8EECu;
        goto label_2c8eec;
    }
    ctx->pc = 0x2C8EE4u;
    SET_GPR_U32(ctx, 31, 0x2C8EECu);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2C8EE4u, 0x2C8EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8EECu;
label_2c8eec:
    // 0x2c8eec: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2c8eecu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8ef0:
    // 0x2c8ef0: 0x10150013  beq         $zero, $s5, . + 4 + (0x13 << 2)
label_2c8ef4:
    if (ctx->pc == 0x2C8EF4u) {
        ctx->pc = 0x2C8EF8u;
        goto label_2c8ef8;
    }
    ctx->pc = 0x2C8EF0u;
    {
        const bool branch_taken_0x2c8ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x2c8ef0) {
            ctx->pc = 0x2C8F40u;
            goto label_2c8f40;
        }
    }
    ctx->pc = 0x2C8EF8u;
label_2c8ef8:
    // 0x2c8ef8: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c8ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8efc:
    // 0x2c8efc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8f00:
    // 0x2c8f00: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2c8f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2c8f04:
    // 0x2c8f04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c8f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8f08:
    // 0x2c8f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c8f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f0c:
    // 0x2c8f0c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2c8f0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f10:
    // 0x2c8f10: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c8f10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f14:
    // 0x2c8f14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c8f14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f18:
    // 0x2c8f18: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2c8f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c8f1c:
    // 0x2c8f1c: 0xc0b43d8  jal         func_2D0F60
label_2c8f20:
    if (ctx->pc == 0x2C8F20u) {
        ctx->pc = 0x2C8F24u;
        goto label_2c8f24;
    }
    ctx->pc = 0x2C8F1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8F24u);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2C8F1Cu, 0x2C8F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F24u;
label_2c8f24:
    // 0x2c8f24: 0xa3a201dc  sb          $v0, 0x1DC($sp)
    ctx->pc = 0x2c8f24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 476), (uint8_t)GPR_U32(ctx, 2));
label_2c8f28:
    // 0x2c8f28: 0x93a401dc  lbu         $a0, 0x1DC($sp)
    ctx->pc = 0x2c8f28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 476)));
label_2c8f2c:
    // 0x2c8f2c: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x2c8f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2c8f30:
    // 0x2c8f30: 0x14a0015b  bnez        $a1, . + 4 + (0x15B << 2)
label_2c8f34:
    if (ctx->pc == 0x2C8F34u) {
        ctx->pc = 0x2C8F38u;
        goto label_2c8f38;
    }
    ctx->pc = 0x2C8F30u;
    {
        const bool branch_taken_0x2c8f30 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f30) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8F38u;
label_2c8f38:
    // 0x2c8f38: 0x10000159  b           . + 4 + (0x159 << 2)
label_2c8f3c:
    if (ctx->pc == 0x2C8F3Cu) {
        ctx->pc = 0x2C8F40u;
        goto label_2c8f40;
    }
    ctx->pc = 0x2C8F38u;
    {
        const bool branch_taken_0x2c8f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f38) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8F40u;
label_2c8f40:
    // 0x2c8f40: 0x10000157  b           . + 4 + (0x157 << 2)
label_2c8f44:
    if (ctx->pc == 0x2C8F44u) {
        ctx->pc = 0x2C8F48u;
        goto label_2c8f48;
    }
    ctx->pc = 0x2C8F40u;
    {
        const bool branch_taken_0x2c8f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f40) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8F48u;
label_2c8f48:
    // 0x2c8f48: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c8f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8f4c:
    // 0x2c8f4c: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8f50:
    // 0x2c8f50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c8f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8f54:
    // 0x2c8f54: 0xc0b1704  jal         func_2C5C10
label_2c8f58:
    if (ctx->pc == 0x2C8F58u) {
        ctx->pc = 0x2C8F5Cu;
        goto label_2c8f5c;
    }
    ctx->pc = 0x2C8F54u;
    SET_GPR_U32(ctx, 31, 0x2C8F5Cu);
    ctx->pc = 0x2C5C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5C10u, 0x2C8F54u, 0x2C8F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F5Cu;
label_2c8f5c:
    // 0x2c8f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f60:
    // 0x2c8f60: 0x1000014f  b           . + 4 + (0x14F << 2)
label_2c8f64:
    if (ctx->pc == 0x2C8F64u) {
        ctx->pc = 0x2C8F68u;
        goto label_2c8f68;
    }
    ctx->pc = 0x2C8F60u;
    {
        const bool branch_taken_0x2c8f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f60) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8F68u;
label_2c8f68:
    // 0x2c8f68: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c8f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c8f6c:
    // 0x2c8f6c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c8f70:
    // 0x2c8f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f74:
    // 0x2c8f74: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c8f78:
    // 0x2c8f78: 0xc085538  jal         func_2154E0
label_2c8f7c:
    if (ctx->pc == 0x2C8F7Cu) {
        ctx->pc = 0x2C8F80u;
        goto label_2c8f80;
    }
    ctx->pc = 0x2C8F78u;
    SET_GPR_U32(ctx, 31, 0x2C8F80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C8F78u, 0x2C8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F80u;
label_2c8f80:
    // 0x2c8f80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f84:
    // 0x2c8f84: 0xafa40164  sw          $a0, 0x164($sp)
    ctx->pc = 0x2c8f84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 4));
label_2c8f88:
    // 0x2c8f88: 0x8fa20164  lw          $v0, 0x164($sp)
    ctx->pc = 0x2c8f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2c8f8c:
    // 0x2c8f8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c8f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f90:
    // 0x2c8f90: 0xc0480fc  jal         func_1203F0
label_2c8f94:
    if (ctx->pc == 0x2C8F94u) {
        ctx->pc = 0x2C8F98u;
        goto label_2c8f98;
    }
    ctx->pc = 0x2C8F90u;
    SET_GPR_U32(ctx, 31, 0x2C8F98u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C8F90u, 0x2C8F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8F98u;
label_2c8f98:
    // 0x2c8f98: 0x14400141  bnez        $v0, . + 4 + (0x141 << 2)
label_2c8f9c:
    if (ctx->pc == 0x2C8F9Cu) {
        ctx->pc = 0x2C8FA0u;
        goto label_2c8fa0;
    }
    ctx->pc = 0x2C8F98u;
    {
        const bool branch_taken_0x2c8f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8f98) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8FA0u;
label_2c8fa0:
    // 0x2c8fa0: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x2c8fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_2c8fa4:
    // 0x2c8fa4: 0xc09b35c  jal         func_26CD70
label_2c8fa8:
    if (ctx->pc == 0x2C8FA8u) {
        ctx->pc = 0x2C8FACu;
        goto label_2c8fac;
    }
    ctx->pc = 0x2C8FA4u;
    SET_GPR_U32(ctx, 31, 0x2C8FACu);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C8FA4u, 0x2C8FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8FACu;
label_2c8fac:
    // 0x2c8fac: 0x1440013c  bnez        $v0, . + 4 + (0x13C << 2)
label_2c8fb0:
    if (ctx->pc == 0x2C8FB0u) {
        ctx->pc = 0x2C8FB4u;
        goto label_2c8fb4;
    }
    ctx->pc = 0x2C8FACu;
    {
        const bool branch_taken_0x2c8fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fac) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C8FB4u;
label_2c8fb4:
    // 0x2c8fb4: 0xaf80bcbc  sw          $zero, -0x4344($gp)
    ctx->pc = 0x2c8fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950076), GPR_U32(ctx, 0));
label_2c8fb8:
    // 0x2c8fb8: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x2c8fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
label_2c8fbc:
    // 0x2c8fbc: 0x34429680  ori         $v0, $v0, 0x9680
    ctx->pc = 0x2c8fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38528);
label_2c8fc0:
    // 0x2c8fc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c8fc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c8fc4:
    // 0x2c8fc4: 0x0  nop
    ctx->pc = 0x2c8fc4u;
    // NOP
label_2c8fc8:
    // 0x2c8fc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c8fc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c8fcc:
    // 0x2c8fcc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2c8fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2c8fd0:
    // 0x2c8fd0: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c8fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c8fd4:
    // 0x2c8fd4: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x2c8fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c8fd8:
    // 0x2c8fd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c8fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c8fdc:
    // 0x2c8fdc: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_2c8fe0:
    if (ctx->pc == 0x2C8FE0u) {
        ctx->pc = 0x2C8FE4u;
        goto label_2c8fe4;
    }
    ctx->pc = 0x2C8FDCu;
    {
        const bool branch_taken_0x2c8fdc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c8fdc) {
            ctx->pc = 0x2C8FF4u;
            goto label_2c8ff4;
        }
    }
    ctx->pc = 0x2C8FE4u;
label_2c8fe4:
    // 0x2c8fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c8fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c8fe8:
    // 0x2c8fe8: 0xa3a201d8  sb          $v0, 0x1D8($sp)
    ctx->pc = 0x2c8fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 2));
label_2c8fec:
    // 0x2c8fec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c8ff0:
    if (ctx->pc == 0x2C8FF0u) {
        ctx->pc = 0x2C8FF4u;
        goto label_2c8ff4;
    }
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C8FF8u;
            goto label_2c8ff8;
        }
    }
    ctx->pc = 0x2C8FF4u;
label_2c8ff4:
    // 0x2c8ff4: 0xa3a001d8  sb          $zero, 0x1D8($sp)
    ctx->pc = 0x2c8ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 472), (uint8_t)GPR_U32(ctx, 0));
label_2c8ff8:
    // 0x2c8ff8: 0x93a201d8  lbu         $v0, 0x1D8($sp)
    ctx->pc = 0x2c8ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 472)));
label_2c8ffc:
    // 0x2c8ffc: 0xa3a201db  sb          $v0, 0x1DB($sp)
    ctx->pc = 0x2c8ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 475), (uint8_t)GPR_U32(ctx, 2));
label_2c9000:
    // 0x2c9000: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c9004:
    // 0x2c9004: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c9008:
    // 0x2c9008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c900c:
    // 0x2c900c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c9010:
    // 0x2c9010: 0xc085538  jal         func_2154E0
label_2c9014:
    if (ctx->pc == 0x2C9014u) {
        ctx->pc = 0x2C9018u;
        goto label_2c9018;
    }
    ctx->pc = 0x2C9010u;
    SET_GPR_U32(ctx, 31, 0x2C9018u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9010u, 0x2C9018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9018u;
label_2c9018:
    // 0x2c9018: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x2c9018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_2c901c:
    // 0x2c901c: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x2c901cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_2c9020:
    // 0x2c9020: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9024:
    // 0x2c9024: 0x27a20100  addiu       $v0, $sp, 0x100
    ctx->pc = 0x2c9024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2c9028:
    // 0x2c9028: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9028u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c902c:
    // 0x2c902c: 0xc090f6c  jal         func_243DB0
label_2c9030:
    if (ctx->pc == 0x2C9030u) {
        ctx->pc = 0x2C9034u;
        goto label_2c9034;
    }
    ctx->pc = 0x2C902Cu;
    SET_GPR_U32(ctx, 31, 0x2C9034u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2C902Cu, 0x2C9034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9034u;
label_2c9034:
    // 0x2c9034: 0xc090864  jal         func_242190
label_2c9038:
    if (ctx->pc == 0x2C9038u) {
        ctx->pc = 0x2C903Cu;
        goto label_2c903c;
    }
    ctx->pc = 0x2C9034u;
    SET_GPR_U32(ctx, 31, 0x2C903Cu);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2C9034u, 0x2C903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C903Cu;
label_2c903c:
    // 0x2c903c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9040:
    // 0x2c9040: 0xc090590  jal         func_241640
label_2c9044:
    if (ctx->pc == 0x2C9044u) {
        ctx->pc = 0x2C9048u;
        goto label_2c9048;
    }
    ctx->pc = 0x2C9040u;
    SET_GPR_U32(ctx, 31, 0x2C9048u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2C9040u, 0x2C9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9048u;
label_2c9048:
    // 0x2c9048: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c904c:
    // 0x2c904c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c9050:
    // 0x2c9050: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9054:
    // 0x2c9054: 0xc09157c  jal         func_2455F0
label_2c9058:
    if (ctx->pc == 0x2C9058u) {
        ctx->pc = 0x2C905Cu;
        goto label_2c905c;
    }
    ctx->pc = 0x2C9054u;
    SET_GPR_U32(ctx, 31, 0x2C905Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2C9054u, 0x2C905Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C905Cu;
label_2c905c:
    // 0x2c905c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c905cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9060:
    // 0x2c9060: 0xafa40158  sw          $a0, 0x158($sp)
    ctx->pc = 0x2c9060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 4));
label_2c9064:
    // 0x2c9064: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x2c9064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2c9068:
    // 0x2c9068: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c906c:
    // 0x2c906c: 0xc040e7c  jal         func_1039F0
label_2c9070:
    if (ctx->pc == 0x2C9070u) {
        ctx->pc = 0x2C9074u;
        goto label_2c9074;
    }
    ctx->pc = 0x2C906Cu;
    SET_GPR_U32(ctx, 31, 0x2C9074u);
    ctx->pc = 0x1039F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1039F0u, 0x2C906Cu, 0x2C9074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9074u;
label_2c9074:
    // 0x2c9074: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c9074u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9078:
    // 0x2c9078: 0x10000054  b           . + 4 + (0x54 << 2)
label_2c907c:
    if (ctx->pc == 0x2C907Cu) {
        ctx->pc = 0x2C9080u;
        goto label_2c9080;
    }
    ctx->pc = 0x2C9078u;
    {
        const bool branch_taken_0x2c9078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9078) {
            ctx->pc = 0x2C91CCu;
            goto label_2c91cc;
        }
    }
    ctx->pc = 0x2C9080u;
label_2c9080:
    // 0x2c9080: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2c9080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_2c9084:
    // 0x2c9084: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c9084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9088:
    // 0x2c9088: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c9088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c908c:
    // 0x2c908c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2c908cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c9090:
    // 0x2c9090: 0x1282004c  beq         $s4, $v0, . + 4 + (0x4C << 2)
label_2c9094:
    if (ctx->pc == 0x2C9094u) {
        ctx->pc = 0x2C9098u;
        goto label_2c9098;
    }
    ctx->pc = 0x2C9090u;
    {
        const bool branch_taken_0x2c9090 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c9090) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C9098u;
label_2c9098:
    // 0x2c9098: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c909c:
    // 0x2c909c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c90a0:
    // 0x2c90a0: 0x12820048  beq         $s4, $v0, . + 4 + (0x48 << 2)
label_2c90a4:
    if (ctx->pc == 0x2C90A4u) {
        ctx->pc = 0x2C90A8u;
        goto label_2c90a8;
    }
    ctx->pc = 0x2C90A0u;
    {
        const bool branch_taken_0x2c90a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c90a0) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C90A8u;
label_2c90a8:
    // 0x2c90a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c90a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c90ac:
    // 0x2c90ac: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c90acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c90b0:
    // 0x2c90b0: 0xc085538  jal         func_2154E0
label_2c90b4:
    if (ctx->pc == 0x2C90B4u) {
        ctx->pc = 0x2C90B8u;
        goto label_2c90b8;
    }
    ctx->pc = 0x2C90B0u;
    SET_GPR_U32(ctx, 31, 0x2C90B8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C90B0u, 0x2C90B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90B8u;
label_2c90b8:
    // 0x2c90b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2c90b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c90bc:
    // 0x2c90bc: 0x10160017  beq         $zero, $s6, . + 4 + (0x17 << 2)
label_2c90c0:
    if (ctx->pc == 0x2C90C0u) {
        ctx->pc = 0x2C90C4u;
        goto label_2c90c4;
    }
    ctx->pc = 0x2C90BCu;
    {
        const bool branch_taken_0x2c90bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 22));
        if (branch_taken_0x2c90bc) {
            ctx->pc = 0x2C911Cu;
            goto label_2c911c;
        }
    }
    ctx->pc = 0x2C90C4u;
label_2c90c4:
    // 0x2c90c4: 0x93a401db  lbu         $a0, 0x1DB($sp)
    ctx->pc = 0x2c90c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 475)));
label_2c90c8:
    // 0x2c90c8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2c90c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2c90cc:
    // 0x2c90cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c90ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c90d0:
    // 0x2c90d0: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_2c90d4:
    if (ctx->pc == 0x2C90D4u) {
        ctx->pc = 0x2C90D8u;
        goto label_2c90d8;
    }
    ctx->pc = 0x2C90D0u;
    {
        const bool branch_taken_0x2c90d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2c90d0) {
            ctx->pc = 0x2C90F4u;
            goto label_2c90f4;
        }
    }
    ctx->pc = 0x2C90D8u;
label_2c90d8:
    // 0x2c90d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c90d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c90dc:
    // 0x2c90dc: 0xc096950  jal         func_25A540
label_2c90e0:
    if (ctx->pc == 0x2C90E0u) {
        ctx->pc = 0x2C90E4u;
        goto label_2c90e4;
    }
    ctx->pc = 0x2C90DCu;
    SET_GPR_U32(ctx, 31, 0x2C90E4u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2C90DCu, 0x2C90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C90E4u;
label_2c90e4:
    // 0x2c90e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c90e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c90e8:
    // 0x2c90e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c90e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c90ec:
    // 0x2c90ec: 0x16020035  bne         $s0, $v0, . + 4 + (0x35 << 2)
label_2c90f0:
    if (ctx->pc == 0x2C90F0u) {
        ctx->pc = 0x2C90F4u;
        goto label_2c90f4;
    }
    ctx->pc = 0x2C90ECu;
    {
        const bool branch_taken_0x2c90ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c90ec) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C90F4u;
label_2c90f4:
    // 0x2c90f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c90f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c90f8:
    // 0x2c90f8: 0xc0480fc  jal         func_1203F0
label_2c90fc:
    if (ctx->pc == 0x2C90FCu) {
        ctx->pc = 0x2C9100u;
        goto label_2c9100;
    }
    ctx->pc = 0x2C90F8u;
    SET_GPR_U32(ctx, 31, 0x2C9100u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C90F8u, 0x2C9100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9100u;
label_2c9100:
    // 0x2c9100: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_2c9104:
    if (ctx->pc == 0x2C9104u) {
        ctx->pc = 0x2C9108u;
        goto label_2c9108;
    }
    ctx->pc = 0x2C9100u;
    {
        const bool branch_taken_0x2c9100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9100) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C9108u;
label_2c9108:
    // 0x2c9108: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c910c:
    // 0x2c910c: 0xc09b35c  jal         func_26CD70
label_2c9110:
    if (ctx->pc == 0x2C9110u) {
        ctx->pc = 0x2C9114u;
        goto label_2c9114;
    }
    ctx->pc = 0x2C910Cu;
    SET_GPR_U32(ctx, 31, 0x2C9114u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C910Cu, 0x2C9114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9114u;
label_2c9114:
    // 0x2c9114: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_2c9118:
    if (ctx->pc == 0x2C9118u) {
        ctx->pc = 0x2C911Cu;
        goto label_2c911c;
    }
    ctx->pc = 0x2C9114u;
    {
        const bool branch_taken_0x2c9114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9114) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C911Cu;
label_2c911c:
    // 0x2c911c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c9120:
    // 0x2c9120: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2c9120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c9124:
    // 0x2c9124: 0xc085538  jal         func_2154E0
label_2c9128:
    if (ctx->pc == 0x2C9128u) {
        ctx->pc = 0x2C912Cu;
        goto label_2c912c;
    }
    ctx->pc = 0x2C9124u;
    SET_GPR_U32(ctx, 31, 0x2C912Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9124u, 0x2C912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C912Cu;
label_2c912c:
    // 0x2c912c: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x2c912cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_2c9130:
    // 0x2c9130: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x2c9130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
label_2c9134:
    // 0x2c9134: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9138:
    // 0x2c9138: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2c9138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2c913c:
    // 0x2c913c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c913cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9140:
    // 0x2c9140: 0xc090f6c  jal         func_243DB0
label_2c9144:
    if (ctx->pc == 0x2C9144u) {
        ctx->pc = 0x2C9148u;
        goto label_2c9148;
    }
    ctx->pc = 0x2C9140u;
    SET_GPR_U32(ctx, 31, 0x2C9148u);
    ctx->pc = 0x243DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243DB0u, 0x2C9140u, 0x2C9148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9148u;
label_2c9148:
    // 0x2c9148: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c914c:
    // 0x2c914c: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x2c914cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9150:
    // 0x2c9150: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x2c9150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9154:
    // 0x2c9154: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c9158:
    // 0x2c9158: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2c9158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c915c:
    // 0x2c915c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x2c915cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9160:
    // 0x2c9160: 0xc7a00104  lwc1        $f0, 0x104($sp)
    ctx->pc = 0x2c9160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9164:
    // 0x2c9164: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9164u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c9168:
    // 0x2c9168: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2c9168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_2c916c:
    // 0x2c916c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2c916cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9170:
    // 0x2c9170: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x2c9170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c9174:
    // 0x2c9174: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c9174u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c9178:
    // 0x2c9178: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2c9178u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2c917c:
    // 0x2c917c: 0xc7a300f0  lwc1        $f3, 0xF0($sp)
    ctx->pc = 0x2c917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2c9180:
    // 0x2c9180: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x2c9180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2c9184:
    // 0x2c9184: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x2c9184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c9188:
    // 0x2c9188: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x2c9188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c918c:
    // 0x2c918c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2c918cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2c9190:
    // 0x2c9190: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2c9190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c9194:
    // 0x2c9194: 0x0  nop
    ctx->pc = 0x2c9194u;
    // NOP
label_2c9198:
    // 0x2c9198: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2c9198u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_2c919c:
    // 0x2c919c: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x2c919cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_2c91a0:
    // 0x2c91a0: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x2c91a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_2c91a4:
    // 0x2c91a4: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2c91a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2c91a8:
    // 0x2c91a8: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x2c91a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c91ac:
    // 0x2c91ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2c91acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2c91b0:
    // 0x2c91b0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2c91b4:
    if (ctx->pc == 0x2C91B4u) {
        ctx->pc = 0x2C91B8u;
        goto label_2c91b8;
    }
    ctx->pc = 0x2C91B0u;
    {
        const bool branch_taken_0x2c91b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c91b0) {
            ctx->pc = 0x2C91C4u;
            goto label_2c91c4;
        }
    }
    ctx->pc = 0x2C91B8u;
label_2c91b8:
    // 0x2c91b8: 0xc7a00150  lwc1        $f0, 0x150($sp)
    ctx->pc = 0x2c91b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c91bc:
    // 0x2c91bc: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x2c91bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2c91c0:
    // 0x2c91c0: 0xaf94bcbc  sw          $s4, -0x4344($gp)
    ctx->pc = 0x2c91c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950076), GPR_U32(ctx, 20));
label_2c91c4:
    // 0x2c91c4: 0x26e20004  addiu       $v0, $s7, 0x4
    ctx->pc = 0x2c91c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
label_2c91c8:
    // 0x2c91c8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2c91c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c91cc:
    // 0x2c91cc: 0x8fa40158  lw          $a0, 0x158($sp)
    ctx->pc = 0x2c91ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_2c91d0:
    // 0x2c91d0: 0xc04147c  jal         func_1051F0
label_2c91d4:
    if (ctx->pc == 0x2C91D4u) {
        ctx->pc = 0x2C91D8u;
        goto label_2c91d8;
    }
    ctx->pc = 0x2C91D0u;
    SET_GPR_U32(ctx, 31, 0x2C91D8u);
    ctx->pc = 0x1051F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051F0u, 0x2C91D0u, 0x2C91D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C91D8u;
label_2c91d8:
    // 0x2c91d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c91d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c91dc:
    // 0x2c91dc: 0x16e5ffa8  bne         $s7, $a1, . + 4 + (-0x58 << 2)
label_2c91e0:
    if (ctx->pc == 0x2C91E0u) {
        ctx->pc = 0x2C91E4u;
        goto label_2c91e4;
    }
    ctx->pc = 0x2C91DCu;
    {
        const bool branch_taken_0x2c91dc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 5));
        if (branch_taken_0x2c91dc) {
            ctx->pc = 0x2C9080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9080;
        }
    }
    ctx->pc = 0x2C91E4u;
label_2c91e4:
    // 0x2c91e4: 0x8f83bcbc  lw          $v1, -0x4344($gp)
    ctx->pc = 0x2c91e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950076)));
label_2c91e8:
    // 0x2c91e8: 0x1003003f  beq         $zero, $v1, . + 4 + (0x3F << 2)
label_2c91ec:
    if (ctx->pc == 0x2C91ECu) {
        ctx->pc = 0x2C91F0u;
        goto label_2c91f0;
    }
    ctx->pc = 0x2C91E8u;
    {
        const bool branch_taken_0x2c91e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c91e8) {
            ctx->pc = 0x2C92E8u;
            goto label_2c92e8;
        }
    }
    ctx->pc = 0x2C91F0u;
label_2c91f0:
    // 0x2c91f0: 0x8f85bcbc  lw          $a1, -0x4344($gp)
    ctx->pc = 0x2c91f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950076)));
label_2c91f4:
    // 0x2c91f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c91f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c91f8:
    // 0x2c91f8: 0xc0913ec  jal         func_244FB0
label_2c91fc:
    if (ctx->pc == 0x2C91FCu) {
        ctx->pc = 0x2C9200u;
        goto label_2c9200;
    }
    ctx->pc = 0x2C91F8u;
    SET_GPR_U32(ctx, 31, 0x2C9200u);
    ctx->pc = 0x244FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244FB0u, 0x2C91F8u, 0x2C9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9200u;
label_2c9200:
    // 0x2c9200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9204:
    // 0x2c9204: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2c9204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
label_2c9208:
    // 0x2c9208: 0x24a5e230  addiu       $a1, $a1, -0x1DD0
    ctx->pc = 0x2c9208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959664));
label_2c920c:
    // 0x2c920c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c920cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9210:
    // 0x2c9210: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2c9210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9214:
    // 0x2c9214: 0xc047314  jal         func_11CC50
label_2c9218:
    if (ctx->pc == 0x2C9218u) {
        ctx->pc = 0x2C921Cu;
        goto label_2c921c;
    }
    ctx->pc = 0x2C9214u;
    SET_GPR_U32(ctx, 31, 0x2C921Cu);
    ctx->pc = 0x11CC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC50u, 0x2C9214u, 0x2C921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C921Cu;
label_2c921c:
    // 0x2c921c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2c921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2c9220:
    // 0x2c9220: 0xaf84bcb8  sw          $a0, -0x4348($gp)
    ctx->pc = 0x2c9220u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 4));
label_2c9224:
    // 0x2c9224: 0xafa0014c  sw          $zero, 0x14C($sp)
    ctx->pc = 0x2c9224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 0));
label_2c9228:
    // 0x2c9228: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c9228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c922c:
    // 0x2c922c: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c922cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c9230:
    // 0x2c9230: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2c9230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c9234:
    // 0x2c9234: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
label_2c9238:
    if (ctx->pc == 0x2C9238u) {
        ctx->pc = 0x2C923Cu;
        goto label_2c923c;
    }
    ctx->pc = 0x2C9234u;
    {
        const bool branch_taken_0x2c9234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9234) {
            ctx->pc = 0x2C926Cu;
            goto label_2c926c;
        }
    }
    ctx->pc = 0x2C923Cu;
label_2c923c:
    // 0x2c923c: 0xc09a360  jal         func_268D80
label_2c9240:
    if (ctx->pc == 0x2C9240u) {
        ctx->pc = 0x2C9244u;
        goto label_2c9244;
    }
    ctx->pc = 0x2C923Cu;
    SET_GPR_U32(ctx, 31, 0x2C9244u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C923Cu, 0x2C9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9244u;
label_2c9244:
    // 0x2c9244: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9248:
    // 0x2c9248: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c924c:
    // 0x2c924c: 0x2782a4e0  addiu       $v0, $gp, -0x5B20
    ctx->pc = 0x2c924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943968));
label_2c9250:
    // 0x2c9250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9254:
    // 0x2c9254: 0xc09a714  jal         func_269C50
label_2c9258:
    if (ctx->pc == 0x2C9258u) {
        ctx->pc = 0x2C925Cu;
        goto label_2c925c;
    }
    ctx->pc = 0x2C9254u;
    SET_GPR_U32(ctx, 31, 0x2C925Cu);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2C9254u, 0x2C925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C925Cu;
label_2c925c:
    // 0x2c925c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c925cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9260:
    // 0x2c9260: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x2c9260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_2c9264:
    // 0x2c9264: 0x1000000f  b           . + 4 + (0xF << 2)
label_2c9268:
    if (ctx->pc == 0x2C9268u) {
        ctx->pc = 0x2C926Cu;
        goto label_2c926c;
    }
    ctx->pc = 0x2C9264u;
    {
        const bool branch_taken_0x2c9264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9264) {
            ctx->pc = 0x2C92A4u;
            goto label_2c92a4;
        }
    }
    ctx->pc = 0x2C926Cu;
label_2c926c:
    // 0x2c926c: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x2c926cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c9270:
    // 0x2c9270: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2c9270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2c9274:
    // 0x2c9274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2c9274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2c9278:
    // 0x2c9278: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_2c927c:
    if (ctx->pc == 0x2C927Cu) {
        ctx->pc = 0x2C9280u;
        goto label_2c9280;
    }
    ctx->pc = 0x2C9278u;
    {
        const bool branch_taken_0x2c9278 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c9278) {
            ctx->pc = 0x2C92A4u;
            goto label_2c92a4;
        }
    }
    ctx->pc = 0x2C9280u;
label_2c9280:
    // 0x2c9280: 0xc09a360  jal         func_268D80
label_2c9284:
    if (ctx->pc == 0x2C9284u) {
        ctx->pc = 0x2C9288u;
        goto label_2c9288;
    }
    ctx->pc = 0x2C9280u;
    SET_GPR_U32(ctx, 31, 0x2C9288u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C9280u, 0x2C9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9288u;
label_2c9288:
    // 0x2c9288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c928c:
    // 0x2c928c: 0x3c02004f  lui         $v0, 0x4F
    ctx->pc = 0x2c928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)79 << 16));
label_2c9290:
    // 0x2c9290: 0x2442e220  addiu       $v0, $v0, -0x1DE0
    ctx->pc = 0x2c9290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959648));
label_2c9294:
    // 0x2c9294: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9298:
    // 0x2c9298: 0xc09a714  jal         func_269C50
label_2c929c:
    if (ctx->pc == 0x2C929Cu) {
        ctx->pc = 0x2C92A0u;
        goto label_2c92a0;
    }
    ctx->pc = 0x2C9298u;
    SET_GPR_U32(ctx, 31, 0x2C92A0u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2C9298u, 0x2C92A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92A0u;
label_2c92a0:
    // 0x2c92a0: 0xafa2014c  sw          $v0, 0x14C($sp)
    ctx->pc = 0x2c92a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 2));
label_2c92a4:
    // 0x2c92a4: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c92a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c92a8:
    // 0x2c92a8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c92ac:
    // 0x2c92ac: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x2c92acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c92b0:
    // 0x2c92b0: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2c92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2c92b4:
    // 0x2c92b4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c92b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c92b8:
    // 0x2c92b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c92b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c92bc:
    // 0x2c92bc: 0x8f86bcbc  lw          $a2, -0x4344($gp)
    ctx->pc = 0x2c92bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950076)));
label_2c92c0:
    // 0x2c92c0: 0x8fa7014c  lw          $a3, 0x14C($sp)
    ctx->pc = 0x2c92c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_2c92c4:
    // 0x2c92c4: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x2c92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_2c92c8:
    // 0x2c92c8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2c92c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2c92cc:
    // 0x2c92cc: 0x7ba800c0  lq          $t0, 0xC0($sp)
    ctx->pc = 0x2c92ccu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c92d0:
    // 0x2c92d0: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x2c92d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c92d4:
    // 0x2c92d4: 0xc0b43d8  jal         func_2D0F60
label_2c92d8:
    if (ctx->pc == 0x2C92D8u) {
        ctx->pc = 0x2C92DCu;
        goto label_2c92dc;
    }
    ctx->pc = 0x2C92D4u;
    SET_GPR_U32(ctx, 31, 0x2C92DCu);
    ctx->pc = 0x2D0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0F60u, 0x2C92D4u, 0x2C92DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C92DCu;
label_2c92dc:
    // 0x2c92dc: 0xa3a201da  sb          $v0, 0x1DA($sp)
    ctx->pc = 0x2c92dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 474), (uint8_t)GPR_U32(ctx, 2));
label_2c92e0:
    // 0x2c92e0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_2c92e4:
    if (ctx->pc == 0x2C92E4u) {
        ctx->pc = 0x2C92E8u;
        goto label_2c92e8;
    }
    ctx->pc = 0x2C92E0u;
    {
        const bool branch_taken_0x2c92e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92e0) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C92E8u;
label_2c92e8:
    // 0x2c92e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c92ec:
    // 0x2c92ec: 0xaf84bcb8  sw          $a0, -0x4348($gp)
    ctx->pc = 0x2c92ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 4));
label_2c92f0:
    // 0x2c92f0: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2c92f4:
    if (ctx->pc == 0x2C92F4u) {
        ctx->pc = 0x2C92F8u;
        goto label_2c92f8;
    }
    ctx->pc = 0x2C92F0u;
    {
        const bool branch_taken_0x2c92f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c92f0) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C92F8u;
label_2c92f8:
    // 0x2c92f8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c92f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c92fc:
    // 0x2c92fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c92fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9300:
    // 0x2c9300: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c9300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c9304:
    // 0x2c9304: 0xc085538  jal         func_2154E0
label_2c9308:
    if (ctx->pc == 0x2C9308u) {
        ctx->pc = 0x2C930Cu;
        goto label_2c930c;
    }
    ctx->pc = 0x2C9304u;
    SET_GPR_U32(ctx, 31, 0x2C930Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9304u, 0x2C930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C930Cu;
label_2c930c:
    // 0x2c930c: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x2c930cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_2c9310:
    // 0x2c9310: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x2c9310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_2c9314:
    // 0x2c9314: 0xc0480fc  jal         func_1203F0
label_2c9318:
    if (ctx->pc == 0x2C9318u) {
        ctx->pc = 0x2C931Cu;
        goto label_2c931c;
    }
    ctx->pc = 0x2C9314u;
    SET_GPR_U32(ctx, 31, 0x2C931Cu);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C9314u, 0x2C931Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C931Cu;
label_2c931c:
    // 0x2c931c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9320:
    // 0x2c9320: 0x14a0005f  bnez        $a1, . + 4 + (0x5F << 2)
label_2c9324:
    if (ctx->pc == 0x2C9324u) {
        ctx->pc = 0x2C9328u;
        goto label_2c9328;
    }
    ctx->pc = 0x2C9320u;
    {
        const bool branch_taken_0x2c9320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9320) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C9328u;
label_2c9328:
    // 0x2c9328: 0x8fa20148  lw          $v0, 0x148($sp)
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_2c932c:
    // 0x2c932c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9330:
    // 0x2c9330: 0xc09b35c  jal         func_26CD70
label_2c9334:
    if (ctx->pc == 0x2C9334u) {
        ctx->pc = 0x2C9338u;
        goto label_2c9338;
    }
    ctx->pc = 0x2C9330u;
    SET_GPR_U32(ctx, 31, 0x2C9338u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C9330u, 0x2C9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9338u;
label_2c9338:
    // 0x2c9338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c933c:
    // 0x2c933c: 0x14800058  bnez        $a0, . + 4 + (0x58 << 2)
label_2c9340:
    if (ctx->pc == 0x2C9340u) {
        ctx->pc = 0x2C9344u;
        goto label_2c9344;
    }
    ctx->pc = 0x2C933Cu;
    {
        const bool branch_taken_0x2c933c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c933c) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C9344u;
label_2c9344:
    // 0x2c9344: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c9348:
    // 0x2c9348: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c9348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c934c:
    // 0x2c934c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x2c934cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2c9350:
    // 0x2c9350: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9354:
    // 0x2c9354: 0xc085538  jal         func_2154E0
label_2c9358:
    if (ctx->pc == 0x2C9358u) {
        ctx->pc = 0x2C935Cu;
        goto label_2c935c;
    }
    ctx->pc = 0x2C9354u;
    SET_GPR_U32(ctx, 31, 0x2C935Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C9354u, 0x2C935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C935Cu;
label_2c935c:
    // 0x2c935c: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2c935cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_2c9360:
    // 0x2c9360: 0x8fa401e0  lw          $a0, 0x1E0($sp)
    ctx->pc = 0x2c9360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_2c9364:
    // 0x2c9364: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c9368:
    // 0x2c9368: 0x8c840094  lw          $a0, 0x94($a0)
    ctx->pc = 0x2c9368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
label_2c936c:
    // 0x2c936c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2c936cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9370:
    // 0x2c9370: 0xc0b4db0  jal         func_2D36C0
label_2c9374:
    if (ctx->pc == 0x2C9374u) {
        ctx->pc = 0x2C9378u;
        goto label_2c9378;
    }
    ctx->pc = 0x2C9370u;
    SET_GPR_U32(ctx, 31, 0x2C9378u);
    ctx->pc = 0x2D36C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D36C0u, 0x2C9370u, 0x2C9378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9378u;
label_2c9378:
    // 0x2c9378: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9378u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c937c:
    // 0x2c937c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2c9380:
    if (ctx->pc == 0x2C9380u) {
        ctx->pc = 0x2C9384u;
        goto label_2c9384;
    }
    ctx->pc = 0x2C937Cu;
    {
        const bool branch_taken_0x2c937c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c937c) {
            ctx->pc = 0x2C93D8u;
            goto label_2c93d8;
        }
    }
    ctx->pc = 0x2C9384u;
label_2c9384:
    // 0x2c9384: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2c9384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2c9388:
    // 0x2c9388: 0xc063dd0  jal         func_18F740
label_2c938c:
    if (ctx->pc == 0x2C938Cu) {
        ctx->pc = 0x2C9390u;
        goto label_2c9390;
    }
    ctx->pc = 0x2C9388u;
    SET_GPR_U32(ctx, 31, 0x2C9390u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C9388u, 0x2C9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9390u;
label_2c9390:
    // 0x2c9390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9394:
    // 0x2c9394: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c9398:
    if (ctx->pc == 0x2C9398u) {
        ctx->pc = 0x2C939Cu;
        goto label_2c939c;
    }
    ctx->pc = 0x2C9394u;
    {
        const bool branch_taken_0x2c9394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9394) {
            ctx->pc = 0x2C93BCu;
            goto label_2c93bc;
        }
    }
    ctx->pc = 0x2C939Cu;
label_2c939c:
    // 0x2c939c: 0x8fa40144  lw          $a0, 0x144($sp)
    ctx->pc = 0x2c939cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2c93a0:
    // 0x2c93a0: 0xc063dd0  jal         func_18F740
label_2c93a4:
    if (ctx->pc == 0x2C93A4u) {
        ctx->pc = 0x2C93A8u;
        goto label_2c93a8;
    }
    ctx->pc = 0x2C93A0u;
    SET_GPR_U32(ctx, 31, 0x2C93A8u);
    ctx->pc = 0x18F740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F740u, 0x2C93A0u, 0x2C93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93A8u;
label_2c93a8:
    // 0x2c93a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c93a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c93ac:
    // 0x2c93ac: 0xc0ae418  jal         func_2B9060
label_2c93b0:
    if (ctx->pc == 0x2C93B0u) {
        ctx->pc = 0x2C93B4u;
        goto label_2c93b4;
    }
    ctx->pc = 0x2C93ACu;
    SET_GPR_U32(ctx, 31, 0x2C93B4u);
    ctx->pc = 0x2B9060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9060u, 0x2C93ACu, 0x2C93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93B4u;
label_2c93b4:
    // 0x2c93b4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_2c93b8:
    if (ctx->pc == 0x2C93B8u) {
        ctx->pc = 0x2C93BCu;
        goto label_2c93bc;
    }
    ctx->pc = 0x2C93B4u;
    {
        const bool branch_taken_0x2c93b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c93b4) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C93BCu;
label_2c93bc:
    // 0x2c93bc: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x2c93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_2c93c0:
    // 0x2c93c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2c93c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c93c4:
    // 0x2c93c4: 0xc0ae154  jal         func_2B8550
label_2c93c8:
    if (ctx->pc == 0x2C93C8u) {
        ctx->pc = 0x2C93CCu;
        goto label_2c93cc;
    }
    ctx->pc = 0x2C93C4u;
    SET_GPR_U32(ctx, 31, 0x2C93CCu);
    ctx->pc = 0x2B8550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8550u, 0x2C93C4u, 0x2C93CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93CCu;
label_2c93cc:
    // 0x2c93cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c93ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c93d0:
    // 0x2c93d0: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
label_2c93d4:
    if (ctx->pc == 0x2C93D4u) {
        ctx->pc = 0x2C93D8u;
        goto label_2c93d8;
    }
    ctx->pc = 0x2C93D0u;
    {
        const bool branch_taken_0x2c93d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c93d0) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C93D8u;
label_2c93d8:
    // 0x2c93d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c93d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c93dc:
    // 0x2c93dc: 0xaf85bcb8  sw          $a1, -0x4348($gp)
    ctx->pc = 0x2c93dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 5));
label_2c93e0:
    // 0x2c93e0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2c93e4:
    if (ctx->pc == 0x2C93E4u) {
        ctx->pc = 0x2C93E8u;
        goto label_2c93e8;
    }
    ctx->pc = 0x2C93E0u;
    {
        const bool branch_taken_0x2c93e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c93e0) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C93E8u;
label_2c93e8:
    // 0x2c93e8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c93ec:
    // 0x2c93ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c93ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c93f0:
    // 0x2c93f0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c93f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2c93f4:
    // 0x2c93f4: 0xc085538  jal         func_2154E0
label_2c93f8:
    if (ctx->pc == 0x2C93F8u) {
        ctx->pc = 0x2C93FCu;
        goto label_2c93fc;
    }
    ctx->pc = 0x2C93F4u;
    SET_GPR_U32(ctx, 31, 0x2C93FCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C93F4u, 0x2C93FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C93FCu;
label_2c93fc:
    // 0x2c93fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c93fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9400:
    // 0x2c9400: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x2c9400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_2c9404:
    // 0x2c9404: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x2c9404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2c9408:
    // 0x2c9408: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2c9408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c940c:
    // 0x2c940c: 0xc0480fc  jal         func_1203F0
label_2c9410:
    if (ctx->pc == 0x2C9410u) {
        ctx->pc = 0x2C9414u;
        goto label_2c9414;
    }
    ctx->pc = 0x2C940Cu;
    SET_GPR_U32(ctx, 31, 0x2C9414u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x2C940Cu, 0x2C9414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9414u;
label_2c9414:
    // 0x2c9414: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_2c9418:
    if (ctx->pc == 0x2C9418u) {
        ctx->pc = 0x2C941Cu;
        goto label_2c941c;
    }
    ctx->pc = 0x2C9414u;
    {
        const bool branch_taken_0x2c9414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9414) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C941Cu;
label_2c941c:
    // 0x2c941c: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x2c941cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_2c9420:
    // 0x2c9420: 0xc09b35c  jal         func_26CD70
label_2c9424:
    if (ctx->pc == 0x2C9424u) {
        ctx->pc = 0x2C9428u;
        goto label_2c9428;
    }
    ctx->pc = 0x2C9420u;
    SET_GPR_U32(ctx, 31, 0x2C9428u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x2C9420u, 0x2C9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9428u;
label_2c9428:
    // 0x2c9428: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_2c942c:
    if (ctx->pc == 0x2C942Cu) {
        ctx->pc = 0x2C9430u;
        goto label_2c9430;
    }
    ctx->pc = 0x2C9428u;
    {
        const bool branch_taken_0x2c9428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c9428) {
            ctx->pc = 0x2C94A0u;
            goto label_2c94a0;
        }
    }
    ctx->pc = 0x2C9430u;
label_2c9430:
    // 0x2c9430: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2c9430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c9434:
    // 0x2c9434: 0xc09ac08  jal         func_26B020
label_2c9438:
    if (ctx->pc == 0x2C9438u) {
        ctx->pc = 0x2C943Cu;
        goto label_2c943c;
    }
    ctx->pc = 0x2C9434u;
    SET_GPR_U32(ctx, 31, 0x2C943Cu);
    ctx->pc = 0x26B020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B020u, 0x2C9434u, 0x2C943Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C943Cu;
label_2c943c:
    // 0x2c943c: 0xc09a360  jal         func_268D80
label_2c9440:
    if (ctx->pc == 0x2C9440u) {
        ctx->pc = 0x2C9444u;
        goto label_2c9444;
    }
    ctx->pc = 0x2C943Cu;
    SET_GPR_U32(ctx, 31, 0x2C9444u);
    ctx->pc = 0x268D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268D80u, 0x2C943Cu, 0x2C9444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9444u;
label_2c9444:
    // 0x2c9444: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9448:
    // 0x2c9448: 0x2785a4e8  addiu       $a1, $gp, -0x5B18
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943976));
label_2c944c:
    // 0x2c944c: 0xc09a714  jal         func_269C50
label_2c9450:
    if (ctx->pc == 0x2C9450u) {
        ctx->pc = 0x2C9454u;
        goto label_2c9454;
    }
    ctx->pc = 0x2C944Cu;
    SET_GPR_U32(ctx, 31, 0x2C9454u);
    ctx->pc = 0x269C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269C50u, 0x2C944Cu, 0x2C9454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9454u;
label_2c9454:
    // 0x2c9454: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x2c9454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_2c9458:
    // 0x2c9458: 0x8f85bcc4  lw          $a1, -0x433C($gp)
    ctx->pc = 0x2c9458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c945c:
    // 0x2c945c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2c945cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2c9460:
    // 0x2c9460: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x2c9460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
label_2c9464:
    // 0x2c9464: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x2c9464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_2c9468:
    // 0x2c9468: 0x1003000b  beq         $zero, $v1, . + 4 + (0xB << 2)
label_2c946c:
    if (ctx->pc == 0x2C946Cu) {
        ctx->pc = 0x2C9470u;
        goto label_2c9470;
    }
    ctx->pc = 0x2C9468u;
    {
        const bool branch_taken_0x2c9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2c9468) {
            ctx->pc = 0x2C9498u;
            goto label_2c9498;
        }
    }
    ctx->pc = 0x2C9470u;
label_2c9470:
    // 0x2c9470: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c9470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_2c9474:
    // 0x2c9474: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x2c9474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_2c9478:
    // 0x2c9478: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x2c9478u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c947c:
    // 0x2c947c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c947cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9480:
    // 0x2c9480: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2c9480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2c9484:
    // 0x2c9484: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c9484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c9488:
    // 0x2c9488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c9488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c948c:
    // 0x2c948c: 0xc0af03c  jal         func_2BC0F0
label_2c9490:
    if (ctx->pc == 0x2C9490u) {
        ctx->pc = 0x2C9494u;
        goto label_2c9494;
    }
    ctx->pc = 0x2C948Cu;
    SET_GPR_U32(ctx, 31, 0x2C9494u);
    ctx->pc = 0x2BC0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F0u, 0x2C948Cu, 0x2C9494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C9494u;
label_2c9494:
    // 0x2c9494: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c9494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c9498:
    // 0x2c9498: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c9498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c949c:
    // 0x2c949c: 0xaf84bcb8  sw          $a0, -0x4348($gp)
    ctx->pc = 0x2c949cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950072), GPR_U32(ctx, 4));
label_2c94a0:
    // 0x2c94a0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2c94a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2c94a4:
    // 0x2c94a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2c94a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c94a8:
    // 0x2c94a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2c94a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c94ac:
    // 0x2c94ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2c94acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c94b0:
    // 0x2c94b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2c94b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c94b4:
    // 0x2c94b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c94b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c94b8:
    // 0x2c94b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2c94b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c94bc:
    // 0x2c94bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2c94bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2c94c0:
    // 0x2c94c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2c94c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2c94c4:
    // 0x2c94c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c94c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2c94c8:
    // 0x2c94c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2c94c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c94cc:
    // 0x2c94cc: 0x27bd01f0  addiu       $sp, $sp, 0x1F0
    ctx->pc = 0x2c94ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_2c94d0:
    // 0x2c94d0: 0x3e00008  jr          $ra
label_2c94d4:
    if (ctx->pc == 0x2C94D4u) {
        ctx->pc = 0x2C94D8u;
        goto label_2c94d8;
    }
    ctx->pc = 0x2C94D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C94D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C94D8u;
label_2c94d8:
    // 0x2c94d8: 0x0  nop
    ctx->pc = 0x2c94d8u;
    // NOP
label_2c94dc:
    // 0x2c94dc: 0x0  nop
    ctx->pc = 0x2c94dcu;
    // NOP
    ctx->pc = 0x2c94e0u;
}
