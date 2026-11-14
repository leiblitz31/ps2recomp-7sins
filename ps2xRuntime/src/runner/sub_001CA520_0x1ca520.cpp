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

// Function: sub_001CA520
// Address: 0x1ca520 - 0x1cc750
void sub_001CA520_0x1ca520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA520_0x1ca520");
#endif

    switch (ctx->pc) {
        case 0x1ca520u: goto label_1ca520;
        case 0x1ca524u: goto label_1ca524;
        case 0x1ca528u: goto label_1ca528;
        case 0x1ca52cu: goto label_1ca52c;
        case 0x1ca530u: goto label_1ca530;
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca538u: goto label_1ca538;
        case 0x1ca53cu: goto label_1ca53c;
        case 0x1ca540u: goto label_1ca540;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca548u: goto label_1ca548;
        case 0x1ca54cu: goto label_1ca54c;
        case 0x1ca550u: goto label_1ca550;
        case 0x1ca554u: goto label_1ca554;
        case 0x1ca558u: goto label_1ca558;
        case 0x1ca55cu: goto label_1ca55c;
        case 0x1ca560u: goto label_1ca560;
        case 0x1ca564u: goto label_1ca564;
        case 0x1ca568u: goto label_1ca568;
        case 0x1ca56cu: goto label_1ca56c;
        case 0x1ca570u: goto label_1ca570;
        case 0x1ca574u: goto label_1ca574;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca57cu: goto label_1ca57c;
        case 0x1ca580u: goto label_1ca580;
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca588u: goto label_1ca588;
        case 0x1ca58cu: goto label_1ca58c;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca594u: goto label_1ca594;
        case 0x1ca598u: goto label_1ca598;
        case 0x1ca59cu: goto label_1ca59c;
        case 0x1ca5a0u: goto label_1ca5a0;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5a8u: goto label_1ca5a8;
        case 0x1ca5acu: goto label_1ca5ac;
        case 0x1ca5b0u: goto label_1ca5b0;
        case 0x1ca5b4u: goto label_1ca5b4;
        case 0x1ca5b8u: goto label_1ca5b8;
        case 0x1ca5bcu: goto label_1ca5bc;
        case 0x1ca5c0u: goto label_1ca5c0;
        case 0x1ca5c4u: goto label_1ca5c4;
        case 0x1ca5c8u: goto label_1ca5c8;
        case 0x1ca5ccu: goto label_1ca5cc;
        case 0x1ca5d0u: goto label_1ca5d0;
        case 0x1ca5d4u: goto label_1ca5d4;
        case 0x1ca5d8u: goto label_1ca5d8;
        case 0x1ca5dcu: goto label_1ca5dc;
        case 0x1ca5e0u: goto label_1ca5e0;
        case 0x1ca5e4u: goto label_1ca5e4;
        case 0x1ca5e8u: goto label_1ca5e8;
        case 0x1ca5ecu: goto label_1ca5ec;
        case 0x1ca5f0u: goto label_1ca5f0;
        case 0x1ca5f4u: goto label_1ca5f4;
        case 0x1ca5f8u: goto label_1ca5f8;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca604u: goto label_1ca604;
        case 0x1ca608u: goto label_1ca608;
        case 0x1ca60cu: goto label_1ca60c;
        case 0x1ca610u: goto label_1ca610;
        case 0x1ca614u: goto label_1ca614;
        case 0x1ca618u: goto label_1ca618;
        case 0x1ca61cu: goto label_1ca61c;
        case 0x1ca620u: goto label_1ca620;
        case 0x1ca624u: goto label_1ca624;
        case 0x1ca628u: goto label_1ca628;
        case 0x1ca62cu: goto label_1ca62c;
        case 0x1ca630u: goto label_1ca630;
        case 0x1ca634u: goto label_1ca634;
        case 0x1ca638u: goto label_1ca638;
        case 0x1ca63cu: goto label_1ca63c;
        case 0x1ca640u: goto label_1ca640;
        case 0x1ca644u: goto label_1ca644;
        case 0x1ca648u: goto label_1ca648;
        case 0x1ca64cu: goto label_1ca64c;
        case 0x1ca650u: goto label_1ca650;
        case 0x1ca654u: goto label_1ca654;
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca65cu: goto label_1ca65c;
        case 0x1ca660u: goto label_1ca660;
        case 0x1ca664u: goto label_1ca664;
        case 0x1ca668u: goto label_1ca668;
        case 0x1ca66cu: goto label_1ca66c;
        case 0x1ca670u: goto label_1ca670;
        case 0x1ca674u: goto label_1ca674;
        case 0x1ca678u: goto label_1ca678;
        case 0x1ca67cu: goto label_1ca67c;
        case 0x1ca680u: goto label_1ca680;
        case 0x1ca684u: goto label_1ca684;
        case 0x1ca688u: goto label_1ca688;
        case 0x1ca68cu: goto label_1ca68c;
        case 0x1ca690u: goto label_1ca690;
        case 0x1ca694u: goto label_1ca694;
        case 0x1ca698u: goto label_1ca698;
        case 0x1ca69cu: goto label_1ca69c;
        case 0x1ca6a0u: goto label_1ca6a0;
        case 0x1ca6a4u: goto label_1ca6a4;
        case 0x1ca6a8u: goto label_1ca6a8;
        case 0x1ca6acu: goto label_1ca6ac;
        case 0x1ca6b0u: goto label_1ca6b0;
        case 0x1ca6b4u: goto label_1ca6b4;
        case 0x1ca6b8u: goto label_1ca6b8;
        case 0x1ca6bcu: goto label_1ca6bc;
        case 0x1ca6c0u: goto label_1ca6c0;
        case 0x1ca6c4u: goto label_1ca6c4;
        case 0x1ca6c8u: goto label_1ca6c8;
        case 0x1ca6ccu: goto label_1ca6cc;
        case 0x1ca6d0u: goto label_1ca6d0;
        case 0x1ca6d4u: goto label_1ca6d4;
        case 0x1ca6d8u: goto label_1ca6d8;
        case 0x1ca6dcu: goto label_1ca6dc;
        case 0x1ca6e0u: goto label_1ca6e0;
        case 0x1ca6e4u: goto label_1ca6e4;
        case 0x1ca6e8u: goto label_1ca6e8;
        case 0x1ca6ecu: goto label_1ca6ec;
        case 0x1ca6f0u: goto label_1ca6f0;
        case 0x1ca6f4u: goto label_1ca6f4;
        case 0x1ca6f8u: goto label_1ca6f8;
        case 0x1ca6fcu: goto label_1ca6fc;
        case 0x1ca700u: goto label_1ca700;
        case 0x1ca704u: goto label_1ca704;
        case 0x1ca708u: goto label_1ca708;
        case 0x1ca70cu: goto label_1ca70c;
        case 0x1ca710u: goto label_1ca710;
        case 0x1ca714u: goto label_1ca714;
        case 0x1ca718u: goto label_1ca718;
        case 0x1ca71cu: goto label_1ca71c;
        case 0x1ca720u: goto label_1ca720;
        case 0x1ca724u: goto label_1ca724;
        case 0x1ca728u: goto label_1ca728;
        case 0x1ca72cu: goto label_1ca72c;
        case 0x1ca730u: goto label_1ca730;
        case 0x1ca734u: goto label_1ca734;
        case 0x1ca738u: goto label_1ca738;
        case 0x1ca73cu: goto label_1ca73c;
        case 0x1ca740u: goto label_1ca740;
        case 0x1ca744u: goto label_1ca744;
        case 0x1ca748u: goto label_1ca748;
        case 0x1ca74cu: goto label_1ca74c;
        case 0x1ca750u: goto label_1ca750;
        case 0x1ca754u: goto label_1ca754;
        case 0x1ca758u: goto label_1ca758;
        case 0x1ca75cu: goto label_1ca75c;
        case 0x1ca760u: goto label_1ca760;
        case 0x1ca764u: goto label_1ca764;
        case 0x1ca768u: goto label_1ca768;
        case 0x1ca76cu: goto label_1ca76c;
        case 0x1ca770u: goto label_1ca770;
        case 0x1ca774u: goto label_1ca774;
        case 0x1ca778u: goto label_1ca778;
        case 0x1ca77cu: goto label_1ca77c;
        case 0x1ca780u: goto label_1ca780;
        case 0x1ca784u: goto label_1ca784;
        case 0x1ca788u: goto label_1ca788;
        case 0x1ca78cu: goto label_1ca78c;
        case 0x1ca790u: goto label_1ca790;
        case 0x1ca794u: goto label_1ca794;
        case 0x1ca798u: goto label_1ca798;
        case 0x1ca79cu: goto label_1ca79c;
        case 0x1ca7a0u: goto label_1ca7a0;
        case 0x1ca7a4u: goto label_1ca7a4;
        case 0x1ca7a8u: goto label_1ca7a8;
        case 0x1ca7acu: goto label_1ca7ac;
        case 0x1ca7b0u: goto label_1ca7b0;
        case 0x1ca7b4u: goto label_1ca7b4;
        case 0x1ca7b8u: goto label_1ca7b8;
        case 0x1ca7bcu: goto label_1ca7bc;
        case 0x1ca7c0u: goto label_1ca7c0;
        case 0x1ca7c4u: goto label_1ca7c4;
        case 0x1ca7c8u: goto label_1ca7c8;
        case 0x1ca7ccu: goto label_1ca7cc;
        case 0x1ca7d0u: goto label_1ca7d0;
        case 0x1ca7d4u: goto label_1ca7d4;
        case 0x1ca7d8u: goto label_1ca7d8;
        case 0x1ca7dcu: goto label_1ca7dc;
        case 0x1ca7e0u: goto label_1ca7e0;
        case 0x1ca7e4u: goto label_1ca7e4;
        case 0x1ca7e8u: goto label_1ca7e8;
        case 0x1ca7ecu: goto label_1ca7ec;
        case 0x1ca7f0u: goto label_1ca7f0;
        case 0x1ca7f4u: goto label_1ca7f4;
        case 0x1ca7f8u: goto label_1ca7f8;
        case 0x1ca7fcu: goto label_1ca7fc;
        case 0x1ca800u: goto label_1ca800;
        case 0x1ca804u: goto label_1ca804;
        case 0x1ca808u: goto label_1ca808;
        case 0x1ca80cu: goto label_1ca80c;
        case 0x1ca810u: goto label_1ca810;
        case 0x1ca814u: goto label_1ca814;
        case 0x1ca818u: goto label_1ca818;
        case 0x1ca81cu: goto label_1ca81c;
        case 0x1ca820u: goto label_1ca820;
        case 0x1ca824u: goto label_1ca824;
        case 0x1ca828u: goto label_1ca828;
        case 0x1ca82cu: goto label_1ca82c;
        case 0x1ca830u: goto label_1ca830;
        case 0x1ca834u: goto label_1ca834;
        case 0x1ca838u: goto label_1ca838;
        case 0x1ca83cu: goto label_1ca83c;
        case 0x1ca840u: goto label_1ca840;
        case 0x1ca844u: goto label_1ca844;
        case 0x1ca848u: goto label_1ca848;
        case 0x1ca84cu: goto label_1ca84c;
        case 0x1ca850u: goto label_1ca850;
        case 0x1ca854u: goto label_1ca854;
        case 0x1ca858u: goto label_1ca858;
        case 0x1ca85cu: goto label_1ca85c;
        case 0x1ca860u: goto label_1ca860;
        case 0x1ca864u: goto label_1ca864;
        case 0x1ca868u: goto label_1ca868;
        case 0x1ca86cu: goto label_1ca86c;
        case 0x1ca870u: goto label_1ca870;
        case 0x1ca874u: goto label_1ca874;
        case 0x1ca878u: goto label_1ca878;
        case 0x1ca87cu: goto label_1ca87c;
        case 0x1ca880u: goto label_1ca880;
        case 0x1ca884u: goto label_1ca884;
        case 0x1ca888u: goto label_1ca888;
        case 0x1ca88cu: goto label_1ca88c;
        case 0x1ca890u: goto label_1ca890;
        case 0x1ca894u: goto label_1ca894;
        case 0x1ca898u: goto label_1ca898;
        case 0x1ca89cu: goto label_1ca89c;
        case 0x1ca8a0u: goto label_1ca8a0;
        case 0x1ca8a4u: goto label_1ca8a4;
        case 0x1ca8a8u: goto label_1ca8a8;
        case 0x1ca8acu: goto label_1ca8ac;
        case 0x1ca8b0u: goto label_1ca8b0;
        case 0x1ca8b4u: goto label_1ca8b4;
        case 0x1ca8b8u: goto label_1ca8b8;
        case 0x1ca8bcu: goto label_1ca8bc;
        case 0x1ca8c0u: goto label_1ca8c0;
        case 0x1ca8c4u: goto label_1ca8c4;
        case 0x1ca8c8u: goto label_1ca8c8;
        case 0x1ca8ccu: goto label_1ca8cc;
        case 0x1ca8d0u: goto label_1ca8d0;
        case 0x1ca8d4u: goto label_1ca8d4;
        case 0x1ca8d8u: goto label_1ca8d8;
        case 0x1ca8dcu: goto label_1ca8dc;
        case 0x1ca8e0u: goto label_1ca8e0;
        case 0x1ca8e4u: goto label_1ca8e4;
        case 0x1ca8e8u: goto label_1ca8e8;
        case 0x1ca8ecu: goto label_1ca8ec;
        case 0x1ca8f0u: goto label_1ca8f0;
        case 0x1ca8f4u: goto label_1ca8f4;
        case 0x1ca8f8u: goto label_1ca8f8;
        case 0x1ca8fcu: goto label_1ca8fc;
        case 0x1ca900u: goto label_1ca900;
        case 0x1ca904u: goto label_1ca904;
        case 0x1ca908u: goto label_1ca908;
        case 0x1ca90cu: goto label_1ca90c;
        case 0x1ca910u: goto label_1ca910;
        case 0x1ca914u: goto label_1ca914;
        case 0x1ca918u: goto label_1ca918;
        case 0x1ca91cu: goto label_1ca91c;
        case 0x1ca920u: goto label_1ca920;
        case 0x1ca924u: goto label_1ca924;
        case 0x1ca928u: goto label_1ca928;
        case 0x1ca92cu: goto label_1ca92c;
        case 0x1ca930u: goto label_1ca930;
        case 0x1ca934u: goto label_1ca934;
        case 0x1ca938u: goto label_1ca938;
        case 0x1ca93cu: goto label_1ca93c;
        case 0x1ca940u: goto label_1ca940;
        case 0x1ca944u: goto label_1ca944;
        case 0x1ca948u: goto label_1ca948;
        case 0x1ca94cu: goto label_1ca94c;
        case 0x1ca950u: goto label_1ca950;
        case 0x1ca954u: goto label_1ca954;
        case 0x1ca958u: goto label_1ca958;
        case 0x1ca95cu: goto label_1ca95c;
        case 0x1ca960u: goto label_1ca960;
        case 0x1ca964u: goto label_1ca964;
        case 0x1ca968u: goto label_1ca968;
        case 0x1ca96cu: goto label_1ca96c;
        case 0x1ca970u: goto label_1ca970;
        case 0x1ca974u: goto label_1ca974;
        case 0x1ca978u: goto label_1ca978;
        case 0x1ca97cu: goto label_1ca97c;
        case 0x1ca980u: goto label_1ca980;
        case 0x1ca984u: goto label_1ca984;
        case 0x1ca988u: goto label_1ca988;
        case 0x1ca98cu: goto label_1ca98c;
        case 0x1ca990u: goto label_1ca990;
        case 0x1ca994u: goto label_1ca994;
        case 0x1ca998u: goto label_1ca998;
        case 0x1ca99cu: goto label_1ca99c;
        case 0x1ca9a0u: goto label_1ca9a0;
        case 0x1ca9a4u: goto label_1ca9a4;
        case 0x1ca9a8u: goto label_1ca9a8;
        case 0x1ca9acu: goto label_1ca9ac;
        case 0x1ca9b0u: goto label_1ca9b0;
        case 0x1ca9b4u: goto label_1ca9b4;
        case 0x1ca9b8u: goto label_1ca9b8;
        case 0x1ca9bcu: goto label_1ca9bc;
        case 0x1ca9c0u: goto label_1ca9c0;
        case 0x1ca9c4u: goto label_1ca9c4;
        case 0x1ca9c8u: goto label_1ca9c8;
        case 0x1ca9ccu: goto label_1ca9cc;
        case 0x1ca9d0u: goto label_1ca9d0;
        case 0x1ca9d4u: goto label_1ca9d4;
        case 0x1ca9d8u: goto label_1ca9d8;
        case 0x1ca9dcu: goto label_1ca9dc;
        case 0x1ca9e0u: goto label_1ca9e0;
        case 0x1ca9e4u: goto label_1ca9e4;
        case 0x1ca9e8u: goto label_1ca9e8;
        case 0x1ca9ecu: goto label_1ca9ec;
        case 0x1ca9f0u: goto label_1ca9f0;
        case 0x1ca9f4u: goto label_1ca9f4;
        case 0x1ca9f8u: goto label_1ca9f8;
        case 0x1ca9fcu: goto label_1ca9fc;
        case 0x1caa00u: goto label_1caa00;
        case 0x1caa04u: goto label_1caa04;
        case 0x1caa08u: goto label_1caa08;
        case 0x1caa0cu: goto label_1caa0c;
        case 0x1caa10u: goto label_1caa10;
        case 0x1caa14u: goto label_1caa14;
        case 0x1caa18u: goto label_1caa18;
        case 0x1caa1cu: goto label_1caa1c;
        case 0x1caa20u: goto label_1caa20;
        case 0x1caa24u: goto label_1caa24;
        case 0x1caa28u: goto label_1caa28;
        case 0x1caa2cu: goto label_1caa2c;
        case 0x1caa30u: goto label_1caa30;
        case 0x1caa34u: goto label_1caa34;
        case 0x1caa38u: goto label_1caa38;
        case 0x1caa3cu: goto label_1caa3c;
        case 0x1caa40u: goto label_1caa40;
        case 0x1caa44u: goto label_1caa44;
        case 0x1caa48u: goto label_1caa48;
        case 0x1caa4cu: goto label_1caa4c;
        case 0x1caa50u: goto label_1caa50;
        case 0x1caa54u: goto label_1caa54;
        case 0x1caa58u: goto label_1caa58;
        case 0x1caa5cu: goto label_1caa5c;
        case 0x1caa60u: goto label_1caa60;
        case 0x1caa64u: goto label_1caa64;
        case 0x1caa68u: goto label_1caa68;
        case 0x1caa6cu: goto label_1caa6c;
        case 0x1caa70u: goto label_1caa70;
        case 0x1caa74u: goto label_1caa74;
        case 0x1caa78u: goto label_1caa78;
        case 0x1caa7cu: goto label_1caa7c;
        case 0x1caa80u: goto label_1caa80;
        case 0x1caa84u: goto label_1caa84;
        case 0x1caa88u: goto label_1caa88;
        case 0x1caa8cu: goto label_1caa8c;
        case 0x1caa90u: goto label_1caa90;
        case 0x1caa94u: goto label_1caa94;
        case 0x1caa98u: goto label_1caa98;
        case 0x1caa9cu: goto label_1caa9c;
        case 0x1caaa0u: goto label_1caaa0;
        case 0x1caaa4u: goto label_1caaa4;
        case 0x1caaa8u: goto label_1caaa8;
        case 0x1caaacu: goto label_1caaac;
        case 0x1caab0u: goto label_1caab0;
        case 0x1caab4u: goto label_1caab4;
        case 0x1caab8u: goto label_1caab8;
        case 0x1caabcu: goto label_1caabc;
        case 0x1caac0u: goto label_1caac0;
        case 0x1caac4u: goto label_1caac4;
        case 0x1caac8u: goto label_1caac8;
        case 0x1caaccu: goto label_1caacc;
        case 0x1caad0u: goto label_1caad0;
        case 0x1caad4u: goto label_1caad4;
        case 0x1caad8u: goto label_1caad8;
        case 0x1caadcu: goto label_1caadc;
        case 0x1caae0u: goto label_1caae0;
        case 0x1caae4u: goto label_1caae4;
        case 0x1caae8u: goto label_1caae8;
        case 0x1caaecu: goto label_1caaec;
        case 0x1caaf0u: goto label_1caaf0;
        case 0x1caaf4u: goto label_1caaf4;
        case 0x1caaf8u: goto label_1caaf8;
        case 0x1caafcu: goto label_1caafc;
        case 0x1cab00u: goto label_1cab00;
        case 0x1cab04u: goto label_1cab04;
        case 0x1cab08u: goto label_1cab08;
        case 0x1cab0cu: goto label_1cab0c;
        case 0x1cab10u: goto label_1cab10;
        case 0x1cab14u: goto label_1cab14;
        case 0x1cab18u: goto label_1cab18;
        case 0x1cab1cu: goto label_1cab1c;
        case 0x1cab20u: goto label_1cab20;
        case 0x1cab24u: goto label_1cab24;
        case 0x1cab28u: goto label_1cab28;
        case 0x1cab2cu: goto label_1cab2c;
        case 0x1cab30u: goto label_1cab30;
        case 0x1cab34u: goto label_1cab34;
        case 0x1cab38u: goto label_1cab38;
        case 0x1cab3cu: goto label_1cab3c;
        case 0x1cab40u: goto label_1cab40;
        case 0x1cab44u: goto label_1cab44;
        case 0x1cab48u: goto label_1cab48;
        case 0x1cab4cu: goto label_1cab4c;
        case 0x1cab50u: goto label_1cab50;
        case 0x1cab54u: goto label_1cab54;
        case 0x1cab58u: goto label_1cab58;
        case 0x1cab5cu: goto label_1cab5c;
        case 0x1cab60u: goto label_1cab60;
        case 0x1cab64u: goto label_1cab64;
        case 0x1cab68u: goto label_1cab68;
        case 0x1cab6cu: goto label_1cab6c;
        case 0x1cab70u: goto label_1cab70;
        case 0x1cab74u: goto label_1cab74;
        case 0x1cab78u: goto label_1cab78;
        case 0x1cab7cu: goto label_1cab7c;
        case 0x1cab80u: goto label_1cab80;
        case 0x1cab84u: goto label_1cab84;
        case 0x1cab88u: goto label_1cab88;
        case 0x1cab8cu: goto label_1cab8c;
        case 0x1cab90u: goto label_1cab90;
        case 0x1cab94u: goto label_1cab94;
        case 0x1cab98u: goto label_1cab98;
        case 0x1cab9cu: goto label_1cab9c;
        case 0x1caba0u: goto label_1caba0;
        case 0x1caba4u: goto label_1caba4;
        case 0x1caba8u: goto label_1caba8;
        case 0x1cabacu: goto label_1cabac;
        case 0x1cabb0u: goto label_1cabb0;
        case 0x1cabb4u: goto label_1cabb4;
        case 0x1cabb8u: goto label_1cabb8;
        case 0x1cabbcu: goto label_1cabbc;
        case 0x1cabc0u: goto label_1cabc0;
        case 0x1cabc4u: goto label_1cabc4;
        case 0x1cabc8u: goto label_1cabc8;
        case 0x1cabccu: goto label_1cabcc;
        case 0x1cabd0u: goto label_1cabd0;
        case 0x1cabd4u: goto label_1cabd4;
        case 0x1cabd8u: goto label_1cabd8;
        case 0x1cabdcu: goto label_1cabdc;
        case 0x1cabe0u: goto label_1cabe0;
        case 0x1cabe4u: goto label_1cabe4;
        case 0x1cabe8u: goto label_1cabe8;
        case 0x1cabecu: goto label_1cabec;
        case 0x1cabf0u: goto label_1cabf0;
        case 0x1cabf4u: goto label_1cabf4;
        case 0x1cabf8u: goto label_1cabf8;
        case 0x1cabfcu: goto label_1cabfc;
        case 0x1cac00u: goto label_1cac00;
        case 0x1cac04u: goto label_1cac04;
        case 0x1cac08u: goto label_1cac08;
        case 0x1cac0cu: goto label_1cac0c;
        case 0x1cac10u: goto label_1cac10;
        case 0x1cac14u: goto label_1cac14;
        case 0x1cac18u: goto label_1cac18;
        case 0x1cac1cu: goto label_1cac1c;
        case 0x1cac20u: goto label_1cac20;
        case 0x1cac24u: goto label_1cac24;
        case 0x1cac28u: goto label_1cac28;
        case 0x1cac2cu: goto label_1cac2c;
        case 0x1cac30u: goto label_1cac30;
        case 0x1cac34u: goto label_1cac34;
        case 0x1cac38u: goto label_1cac38;
        case 0x1cac3cu: goto label_1cac3c;
        case 0x1cac40u: goto label_1cac40;
        case 0x1cac44u: goto label_1cac44;
        case 0x1cac48u: goto label_1cac48;
        case 0x1cac4cu: goto label_1cac4c;
        case 0x1cac50u: goto label_1cac50;
        case 0x1cac54u: goto label_1cac54;
        case 0x1cac58u: goto label_1cac58;
        case 0x1cac5cu: goto label_1cac5c;
        case 0x1cac60u: goto label_1cac60;
        case 0x1cac64u: goto label_1cac64;
        case 0x1cac68u: goto label_1cac68;
        case 0x1cac6cu: goto label_1cac6c;
        case 0x1cac70u: goto label_1cac70;
        case 0x1cac74u: goto label_1cac74;
        case 0x1cac78u: goto label_1cac78;
        case 0x1cac7cu: goto label_1cac7c;
        case 0x1cac80u: goto label_1cac80;
        case 0x1cac84u: goto label_1cac84;
        case 0x1cac88u: goto label_1cac88;
        case 0x1cac8cu: goto label_1cac8c;
        case 0x1cac90u: goto label_1cac90;
        case 0x1cac94u: goto label_1cac94;
        case 0x1cac98u: goto label_1cac98;
        case 0x1cac9cu: goto label_1cac9c;
        case 0x1caca0u: goto label_1caca0;
        case 0x1caca4u: goto label_1caca4;
        case 0x1caca8u: goto label_1caca8;
        case 0x1cacacu: goto label_1cacac;
        case 0x1cacb0u: goto label_1cacb0;
        case 0x1cacb4u: goto label_1cacb4;
        case 0x1cacb8u: goto label_1cacb8;
        case 0x1cacbcu: goto label_1cacbc;
        case 0x1cacc0u: goto label_1cacc0;
        case 0x1cacc4u: goto label_1cacc4;
        case 0x1cacc8u: goto label_1cacc8;
        case 0x1cacccu: goto label_1caccc;
        case 0x1cacd0u: goto label_1cacd0;
        case 0x1cacd4u: goto label_1cacd4;
        case 0x1cacd8u: goto label_1cacd8;
        case 0x1cacdcu: goto label_1cacdc;
        case 0x1cace0u: goto label_1cace0;
        case 0x1cace4u: goto label_1cace4;
        case 0x1cace8u: goto label_1cace8;
        case 0x1cacecu: goto label_1cacec;
        case 0x1cacf0u: goto label_1cacf0;
        case 0x1cacf4u: goto label_1cacf4;
        case 0x1cacf8u: goto label_1cacf8;
        case 0x1cacfcu: goto label_1cacfc;
        case 0x1cad00u: goto label_1cad00;
        case 0x1cad04u: goto label_1cad04;
        case 0x1cad08u: goto label_1cad08;
        case 0x1cad0cu: goto label_1cad0c;
        case 0x1cad10u: goto label_1cad10;
        case 0x1cad14u: goto label_1cad14;
        case 0x1cad18u: goto label_1cad18;
        case 0x1cad1cu: goto label_1cad1c;
        case 0x1cad20u: goto label_1cad20;
        case 0x1cad24u: goto label_1cad24;
        case 0x1cad28u: goto label_1cad28;
        case 0x1cad2cu: goto label_1cad2c;
        case 0x1cad30u: goto label_1cad30;
        case 0x1cad34u: goto label_1cad34;
        case 0x1cad38u: goto label_1cad38;
        case 0x1cad3cu: goto label_1cad3c;
        case 0x1cad40u: goto label_1cad40;
        case 0x1cad44u: goto label_1cad44;
        case 0x1cad48u: goto label_1cad48;
        case 0x1cad4cu: goto label_1cad4c;
        case 0x1cad50u: goto label_1cad50;
        case 0x1cad54u: goto label_1cad54;
        case 0x1cad58u: goto label_1cad58;
        case 0x1cad5cu: goto label_1cad5c;
        case 0x1cad60u: goto label_1cad60;
        case 0x1cad64u: goto label_1cad64;
        case 0x1cad68u: goto label_1cad68;
        case 0x1cad6cu: goto label_1cad6c;
        case 0x1cad70u: goto label_1cad70;
        case 0x1cad74u: goto label_1cad74;
        case 0x1cad78u: goto label_1cad78;
        case 0x1cad7cu: goto label_1cad7c;
        case 0x1cad80u: goto label_1cad80;
        case 0x1cad84u: goto label_1cad84;
        case 0x1cad88u: goto label_1cad88;
        case 0x1cad8cu: goto label_1cad8c;
        case 0x1cad90u: goto label_1cad90;
        case 0x1cad94u: goto label_1cad94;
        case 0x1cad98u: goto label_1cad98;
        case 0x1cad9cu: goto label_1cad9c;
        case 0x1cada0u: goto label_1cada0;
        case 0x1cada4u: goto label_1cada4;
        case 0x1cada8u: goto label_1cada8;
        case 0x1cadacu: goto label_1cadac;
        case 0x1cadb0u: goto label_1cadb0;
        case 0x1cadb4u: goto label_1cadb4;
        case 0x1cadb8u: goto label_1cadb8;
        case 0x1cadbcu: goto label_1cadbc;
        case 0x1cadc0u: goto label_1cadc0;
        case 0x1cadc4u: goto label_1cadc4;
        case 0x1cadc8u: goto label_1cadc8;
        case 0x1cadccu: goto label_1cadcc;
        case 0x1cadd0u: goto label_1cadd0;
        case 0x1cadd4u: goto label_1cadd4;
        case 0x1cadd8u: goto label_1cadd8;
        case 0x1caddcu: goto label_1caddc;
        case 0x1cade0u: goto label_1cade0;
        case 0x1cade4u: goto label_1cade4;
        case 0x1cade8u: goto label_1cade8;
        case 0x1cadecu: goto label_1cadec;
        case 0x1cadf0u: goto label_1cadf0;
        case 0x1cadf4u: goto label_1cadf4;
        case 0x1cadf8u: goto label_1cadf8;
        case 0x1cadfcu: goto label_1cadfc;
        case 0x1cae00u: goto label_1cae00;
        case 0x1cae04u: goto label_1cae04;
        case 0x1cae08u: goto label_1cae08;
        case 0x1cae0cu: goto label_1cae0c;
        case 0x1cae10u: goto label_1cae10;
        case 0x1cae14u: goto label_1cae14;
        case 0x1cae18u: goto label_1cae18;
        case 0x1cae1cu: goto label_1cae1c;
        case 0x1cae20u: goto label_1cae20;
        case 0x1cae24u: goto label_1cae24;
        case 0x1cae28u: goto label_1cae28;
        case 0x1cae2cu: goto label_1cae2c;
        case 0x1cae30u: goto label_1cae30;
        case 0x1cae34u: goto label_1cae34;
        case 0x1cae38u: goto label_1cae38;
        case 0x1cae3cu: goto label_1cae3c;
        case 0x1cae40u: goto label_1cae40;
        case 0x1cae44u: goto label_1cae44;
        case 0x1cae48u: goto label_1cae48;
        case 0x1cae4cu: goto label_1cae4c;
        case 0x1cae50u: goto label_1cae50;
        case 0x1cae54u: goto label_1cae54;
        case 0x1cae58u: goto label_1cae58;
        case 0x1cae5cu: goto label_1cae5c;
        case 0x1cae60u: goto label_1cae60;
        case 0x1cae64u: goto label_1cae64;
        case 0x1cae68u: goto label_1cae68;
        case 0x1cae6cu: goto label_1cae6c;
        case 0x1cae70u: goto label_1cae70;
        case 0x1cae74u: goto label_1cae74;
        case 0x1cae78u: goto label_1cae78;
        case 0x1cae7cu: goto label_1cae7c;
        case 0x1cae80u: goto label_1cae80;
        case 0x1cae84u: goto label_1cae84;
        case 0x1cae88u: goto label_1cae88;
        case 0x1cae8cu: goto label_1cae8c;
        case 0x1cae90u: goto label_1cae90;
        case 0x1cae94u: goto label_1cae94;
        case 0x1cae98u: goto label_1cae98;
        case 0x1cae9cu: goto label_1cae9c;
        case 0x1caea0u: goto label_1caea0;
        case 0x1caea4u: goto label_1caea4;
        case 0x1caea8u: goto label_1caea8;
        case 0x1caeacu: goto label_1caeac;
        case 0x1caeb0u: goto label_1caeb0;
        case 0x1caeb4u: goto label_1caeb4;
        case 0x1caeb8u: goto label_1caeb8;
        case 0x1caebcu: goto label_1caebc;
        case 0x1caec0u: goto label_1caec0;
        case 0x1caec4u: goto label_1caec4;
        case 0x1caec8u: goto label_1caec8;
        case 0x1caeccu: goto label_1caecc;
        case 0x1caed0u: goto label_1caed0;
        case 0x1caed4u: goto label_1caed4;
        case 0x1caed8u: goto label_1caed8;
        case 0x1caedcu: goto label_1caedc;
        case 0x1caee0u: goto label_1caee0;
        case 0x1caee4u: goto label_1caee4;
        case 0x1caee8u: goto label_1caee8;
        case 0x1caeecu: goto label_1caeec;
        case 0x1caef0u: goto label_1caef0;
        case 0x1caef4u: goto label_1caef4;
        case 0x1caef8u: goto label_1caef8;
        case 0x1caefcu: goto label_1caefc;
        case 0x1caf00u: goto label_1caf00;
        case 0x1caf04u: goto label_1caf04;
        case 0x1caf08u: goto label_1caf08;
        case 0x1caf0cu: goto label_1caf0c;
        case 0x1caf10u: goto label_1caf10;
        case 0x1caf14u: goto label_1caf14;
        case 0x1caf18u: goto label_1caf18;
        case 0x1caf1cu: goto label_1caf1c;
        case 0x1caf20u: goto label_1caf20;
        case 0x1caf24u: goto label_1caf24;
        case 0x1caf28u: goto label_1caf28;
        case 0x1caf2cu: goto label_1caf2c;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf34u: goto label_1caf34;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf3cu: goto label_1caf3c;
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf44u: goto label_1caf44;
        case 0x1caf48u: goto label_1caf48;
        case 0x1caf4cu: goto label_1caf4c;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf5cu: goto label_1caf5c;
        case 0x1caf60u: goto label_1caf60;
        case 0x1caf64u: goto label_1caf64;
        case 0x1caf68u: goto label_1caf68;
        case 0x1caf6cu: goto label_1caf6c;
        case 0x1caf70u: goto label_1caf70;
        case 0x1caf74u: goto label_1caf74;
        case 0x1caf78u: goto label_1caf78;
        case 0x1caf7cu: goto label_1caf7c;
        case 0x1caf80u: goto label_1caf80;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf88u: goto label_1caf88;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1caf90u: goto label_1caf90;
        case 0x1caf94u: goto label_1caf94;
        case 0x1caf98u: goto label_1caf98;
        case 0x1caf9cu: goto label_1caf9c;
        case 0x1cafa0u: goto label_1cafa0;
        case 0x1cafa4u: goto label_1cafa4;
        case 0x1cafa8u: goto label_1cafa8;
        case 0x1cafacu: goto label_1cafac;
        case 0x1cafb0u: goto label_1cafb0;
        case 0x1cafb4u: goto label_1cafb4;
        case 0x1cafb8u: goto label_1cafb8;
        case 0x1cafbcu: goto label_1cafbc;
        case 0x1cafc0u: goto label_1cafc0;
        case 0x1cafc4u: goto label_1cafc4;
        case 0x1cafc8u: goto label_1cafc8;
        case 0x1cafccu: goto label_1cafcc;
        case 0x1cafd0u: goto label_1cafd0;
        case 0x1cafd4u: goto label_1cafd4;
        case 0x1cafd8u: goto label_1cafd8;
        case 0x1cafdcu: goto label_1cafdc;
        case 0x1cafe0u: goto label_1cafe0;
        case 0x1cafe4u: goto label_1cafe4;
        case 0x1cafe8u: goto label_1cafe8;
        case 0x1cafecu: goto label_1cafec;
        case 0x1caff0u: goto label_1caff0;
        case 0x1caff4u: goto label_1caff4;
        case 0x1caff8u: goto label_1caff8;
        case 0x1caffcu: goto label_1caffc;
        case 0x1cb000u: goto label_1cb000;
        case 0x1cb004u: goto label_1cb004;
        case 0x1cb008u: goto label_1cb008;
        case 0x1cb00cu: goto label_1cb00c;
        case 0x1cb010u: goto label_1cb010;
        case 0x1cb014u: goto label_1cb014;
        case 0x1cb018u: goto label_1cb018;
        case 0x1cb01cu: goto label_1cb01c;
        case 0x1cb020u: goto label_1cb020;
        case 0x1cb024u: goto label_1cb024;
        case 0x1cb028u: goto label_1cb028;
        case 0x1cb02cu: goto label_1cb02c;
        case 0x1cb030u: goto label_1cb030;
        case 0x1cb034u: goto label_1cb034;
        case 0x1cb038u: goto label_1cb038;
        case 0x1cb03cu: goto label_1cb03c;
        case 0x1cb040u: goto label_1cb040;
        case 0x1cb044u: goto label_1cb044;
        case 0x1cb048u: goto label_1cb048;
        case 0x1cb04cu: goto label_1cb04c;
        case 0x1cb050u: goto label_1cb050;
        case 0x1cb054u: goto label_1cb054;
        case 0x1cb058u: goto label_1cb058;
        case 0x1cb05cu: goto label_1cb05c;
        case 0x1cb060u: goto label_1cb060;
        case 0x1cb064u: goto label_1cb064;
        case 0x1cb068u: goto label_1cb068;
        case 0x1cb06cu: goto label_1cb06c;
        case 0x1cb070u: goto label_1cb070;
        case 0x1cb074u: goto label_1cb074;
        case 0x1cb078u: goto label_1cb078;
        case 0x1cb07cu: goto label_1cb07c;
        case 0x1cb080u: goto label_1cb080;
        case 0x1cb084u: goto label_1cb084;
        case 0x1cb088u: goto label_1cb088;
        case 0x1cb08cu: goto label_1cb08c;
        case 0x1cb090u: goto label_1cb090;
        case 0x1cb094u: goto label_1cb094;
        case 0x1cb098u: goto label_1cb098;
        case 0x1cb09cu: goto label_1cb09c;
        case 0x1cb0a0u: goto label_1cb0a0;
        case 0x1cb0a4u: goto label_1cb0a4;
        case 0x1cb0a8u: goto label_1cb0a8;
        case 0x1cb0acu: goto label_1cb0ac;
        case 0x1cb0b0u: goto label_1cb0b0;
        case 0x1cb0b4u: goto label_1cb0b4;
        case 0x1cb0b8u: goto label_1cb0b8;
        case 0x1cb0bcu: goto label_1cb0bc;
        case 0x1cb0c0u: goto label_1cb0c0;
        case 0x1cb0c4u: goto label_1cb0c4;
        case 0x1cb0c8u: goto label_1cb0c8;
        case 0x1cb0ccu: goto label_1cb0cc;
        case 0x1cb0d0u: goto label_1cb0d0;
        case 0x1cb0d4u: goto label_1cb0d4;
        case 0x1cb0d8u: goto label_1cb0d8;
        case 0x1cb0dcu: goto label_1cb0dc;
        case 0x1cb0e0u: goto label_1cb0e0;
        case 0x1cb0e4u: goto label_1cb0e4;
        case 0x1cb0e8u: goto label_1cb0e8;
        case 0x1cb0ecu: goto label_1cb0ec;
        case 0x1cb0f0u: goto label_1cb0f0;
        case 0x1cb0f4u: goto label_1cb0f4;
        case 0x1cb0f8u: goto label_1cb0f8;
        case 0x1cb0fcu: goto label_1cb0fc;
        case 0x1cb100u: goto label_1cb100;
        case 0x1cb104u: goto label_1cb104;
        case 0x1cb108u: goto label_1cb108;
        case 0x1cb10cu: goto label_1cb10c;
        case 0x1cb110u: goto label_1cb110;
        case 0x1cb114u: goto label_1cb114;
        case 0x1cb118u: goto label_1cb118;
        case 0x1cb11cu: goto label_1cb11c;
        case 0x1cb120u: goto label_1cb120;
        case 0x1cb124u: goto label_1cb124;
        case 0x1cb128u: goto label_1cb128;
        case 0x1cb12cu: goto label_1cb12c;
        case 0x1cb130u: goto label_1cb130;
        case 0x1cb134u: goto label_1cb134;
        case 0x1cb138u: goto label_1cb138;
        case 0x1cb13cu: goto label_1cb13c;
        case 0x1cb140u: goto label_1cb140;
        case 0x1cb144u: goto label_1cb144;
        case 0x1cb148u: goto label_1cb148;
        case 0x1cb14cu: goto label_1cb14c;
        case 0x1cb150u: goto label_1cb150;
        case 0x1cb154u: goto label_1cb154;
        case 0x1cb158u: goto label_1cb158;
        case 0x1cb15cu: goto label_1cb15c;
        case 0x1cb160u: goto label_1cb160;
        case 0x1cb164u: goto label_1cb164;
        case 0x1cb168u: goto label_1cb168;
        case 0x1cb16cu: goto label_1cb16c;
        case 0x1cb170u: goto label_1cb170;
        case 0x1cb174u: goto label_1cb174;
        case 0x1cb178u: goto label_1cb178;
        case 0x1cb17cu: goto label_1cb17c;
        case 0x1cb180u: goto label_1cb180;
        case 0x1cb184u: goto label_1cb184;
        case 0x1cb188u: goto label_1cb188;
        case 0x1cb18cu: goto label_1cb18c;
        case 0x1cb190u: goto label_1cb190;
        case 0x1cb194u: goto label_1cb194;
        case 0x1cb198u: goto label_1cb198;
        case 0x1cb19cu: goto label_1cb19c;
        case 0x1cb1a0u: goto label_1cb1a0;
        case 0x1cb1a4u: goto label_1cb1a4;
        case 0x1cb1a8u: goto label_1cb1a8;
        case 0x1cb1acu: goto label_1cb1ac;
        case 0x1cb1b0u: goto label_1cb1b0;
        case 0x1cb1b4u: goto label_1cb1b4;
        case 0x1cb1b8u: goto label_1cb1b8;
        case 0x1cb1bcu: goto label_1cb1bc;
        case 0x1cb1c0u: goto label_1cb1c0;
        case 0x1cb1c4u: goto label_1cb1c4;
        case 0x1cb1c8u: goto label_1cb1c8;
        case 0x1cb1ccu: goto label_1cb1cc;
        case 0x1cb1d0u: goto label_1cb1d0;
        case 0x1cb1d4u: goto label_1cb1d4;
        case 0x1cb1d8u: goto label_1cb1d8;
        case 0x1cb1dcu: goto label_1cb1dc;
        case 0x1cb1e0u: goto label_1cb1e0;
        case 0x1cb1e4u: goto label_1cb1e4;
        case 0x1cb1e8u: goto label_1cb1e8;
        case 0x1cb1ecu: goto label_1cb1ec;
        case 0x1cb1f0u: goto label_1cb1f0;
        case 0x1cb1f4u: goto label_1cb1f4;
        case 0x1cb1f8u: goto label_1cb1f8;
        case 0x1cb1fcu: goto label_1cb1fc;
        case 0x1cb200u: goto label_1cb200;
        case 0x1cb204u: goto label_1cb204;
        case 0x1cb208u: goto label_1cb208;
        case 0x1cb20cu: goto label_1cb20c;
        case 0x1cb210u: goto label_1cb210;
        case 0x1cb214u: goto label_1cb214;
        case 0x1cb218u: goto label_1cb218;
        case 0x1cb21cu: goto label_1cb21c;
        case 0x1cb220u: goto label_1cb220;
        case 0x1cb224u: goto label_1cb224;
        case 0x1cb228u: goto label_1cb228;
        case 0x1cb22cu: goto label_1cb22c;
        case 0x1cb230u: goto label_1cb230;
        case 0x1cb234u: goto label_1cb234;
        case 0x1cb238u: goto label_1cb238;
        case 0x1cb23cu: goto label_1cb23c;
        case 0x1cb240u: goto label_1cb240;
        case 0x1cb244u: goto label_1cb244;
        case 0x1cb248u: goto label_1cb248;
        case 0x1cb24cu: goto label_1cb24c;
        case 0x1cb250u: goto label_1cb250;
        case 0x1cb254u: goto label_1cb254;
        case 0x1cb258u: goto label_1cb258;
        case 0x1cb25cu: goto label_1cb25c;
        case 0x1cb260u: goto label_1cb260;
        case 0x1cb264u: goto label_1cb264;
        case 0x1cb268u: goto label_1cb268;
        case 0x1cb26cu: goto label_1cb26c;
        case 0x1cb270u: goto label_1cb270;
        case 0x1cb274u: goto label_1cb274;
        case 0x1cb278u: goto label_1cb278;
        case 0x1cb27cu: goto label_1cb27c;
        case 0x1cb280u: goto label_1cb280;
        case 0x1cb284u: goto label_1cb284;
        case 0x1cb288u: goto label_1cb288;
        case 0x1cb28cu: goto label_1cb28c;
        case 0x1cb290u: goto label_1cb290;
        case 0x1cb294u: goto label_1cb294;
        case 0x1cb298u: goto label_1cb298;
        case 0x1cb29cu: goto label_1cb29c;
        case 0x1cb2a0u: goto label_1cb2a0;
        case 0x1cb2a4u: goto label_1cb2a4;
        case 0x1cb2a8u: goto label_1cb2a8;
        case 0x1cb2acu: goto label_1cb2ac;
        case 0x1cb2b0u: goto label_1cb2b0;
        case 0x1cb2b4u: goto label_1cb2b4;
        case 0x1cb2b8u: goto label_1cb2b8;
        case 0x1cb2bcu: goto label_1cb2bc;
        case 0x1cb2c0u: goto label_1cb2c0;
        case 0x1cb2c4u: goto label_1cb2c4;
        case 0x1cb2c8u: goto label_1cb2c8;
        case 0x1cb2ccu: goto label_1cb2cc;
        case 0x1cb2d0u: goto label_1cb2d0;
        case 0x1cb2d4u: goto label_1cb2d4;
        case 0x1cb2d8u: goto label_1cb2d8;
        case 0x1cb2dcu: goto label_1cb2dc;
        case 0x1cb2e0u: goto label_1cb2e0;
        case 0x1cb2e4u: goto label_1cb2e4;
        case 0x1cb2e8u: goto label_1cb2e8;
        case 0x1cb2ecu: goto label_1cb2ec;
        case 0x1cb2f0u: goto label_1cb2f0;
        case 0x1cb2f4u: goto label_1cb2f4;
        case 0x1cb2f8u: goto label_1cb2f8;
        case 0x1cb2fcu: goto label_1cb2fc;
        case 0x1cb300u: goto label_1cb300;
        case 0x1cb304u: goto label_1cb304;
        case 0x1cb308u: goto label_1cb308;
        case 0x1cb30cu: goto label_1cb30c;
        case 0x1cb310u: goto label_1cb310;
        case 0x1cb314u: goto label_1cb314;
        case 0x1cb318u: goto label_1cb318;
        case 0x1cb31cu: goto label_1cb31c;
        case 0x1cb320u: goto label_1cb320;
        case 0x1cb324u: goto label_1cb324;
        case 0x1cb328u: goto label_1cb328;
        case 0x1cb32cu: goto label_1cb32c;
        case 0x1cb330u: goto label_1cb330;
        case 0x1cb334u: goto label_1cb334;
        case 0x1cb338u: goto label_1cb338;
        case 0x1cb33cu: goto label_1cb33c;
        case 0x1cb340u: goto label_1cb340;
        case 0x1cb344u: goto label_1cb344;
        case 0x1cb348u: goto label_1cb348;
        case 0x1cb34cu: goto label_1cb34c;
        case 0x1cb350u: goto label_1cb350;
        case 0x1cb354u: goto label_1cb354;
        case 0x1cb358u: goto label_1cb358;
        case 0x1cb35cu: goto label_1cb35c;
        case 0x1cb360u: goto label_1cb360;
        case 0x1cb364u: goto label_1cb364;
        case 0x1cb368u: goto label_1cb368;
        case 0x1cb36cu: goto label_1cb36c;
        case 0x1cb370u: goto label_1cb370;
        case 0x1cb374u: goto label_1cb374;
        case 0x1cb378u: goto label_1cb378;
        case 0x1cb37cu: goto label_1cb37c;
        case 0x1cb380u: goto label_1cb380;
        case 0x1cb384u: goto label_1cb384;
        case 0x1cb388u: goto label_1cb388;
        case 0x1cb38cu: goto label_1cb38c;
        case 0x1cb390u: goto label_1cb390;
        case 0x1cb394u: goto label_1cb394;
        case 0x1cb398u: goto label_1cb398;
        case 0x1cb39cu: goto label_1cb39c;
        case 0x1cb3a0u: goto label_1cb3a0;
        case 0x1cb3a4u: goto label_1cb3a4;
        case 0x1cb3a8u: goto label_1cb3a8;
        case 0x1cb3acu: goto label_1cb3ac;
        case 0x1cb3b0u: goto label_1cb3b0;
        case 0x1cb3b4u: goto label_1cb3b4;
        case 0x1cb3b8u: goto label_1cb3b8;
        case 0x1cb3bcu: goto label_1cb3bc;
        case 0x1cb3c0u: goto label_1cb3c0;
        case 0x1cb3c4u: goto label_1cb3c4;
        case 0x1cb3c8u: goto label_1cb3c8;
        case 0x1cb3ccu: goto label_1cb3cc;
        case 0x1cb3d0u: goto label_1cb3d0;
        case 0x1cb3d4u: goto label_1cb3d4;
        case 0x1cb3d8u: goto label_1cb3d8;
        case 0x1cb3dcu: goto label_1cb3dc;
        case 0x1cb3e0u: goto label_1cb3e0;
        case 0x1cb3e4u: goto label_1cb3e4;
        case 0x1cb3e8u: goto label_1cb3e8;
        case 0x1cb3ecu: goto label_1cb3ec;
        case 0x1cb3f0u: goto label_1cb3f0;
        case 0x1cb3f4u: goto label_1cb3f4;
        case 0x1cb3f8u: goto label_1cb3f8;
        case 0x1cb3fcu: goto label_1cb3fc;
        case 0x1cb400u: goto label_1cb400;
        case 0x1cb404u: goto label_1cb404;
        case 0x1cb408u: goto label_1cb408;
        case 0x1cb40cu: goto label_1cb40c;
        case 0x1cb410u: goto label_1cb410;
        case 0x1cb414u: goto label_1cb414;
        case 0x1cb418u: goto label_1cb418;
        case 0x1cb41cu: goto label_1cb41c;
        case 0x1cb420u: goto label_1cb420;
        case 0x1cb424u: goto label_1cb424;
        case 0x1cb428u: goto label_1cb428;
        case 0x1cb42cu: goto label_1cb42c;
        case 0x1cb430u: goto label_1cb430;
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb438u: goto label_1cb438;
        case 0x1cb43cu: goto label_1cb43c;
        case 0x1cb440u: goto label_1cb440;
        case 0x1cb444u: goto label_1cb444;
        case 0x1cb448u: goto label_1cb448;
        case 0x1cb44cu: goto label_1cb44c;
        case 0x1cb450u: goto label_1cb450;
        case 0x1cb454u: goto label_1cb454;
        case 0x1cb458u: goto label_1cb458;
        case 0x1cb45cu: goto label_1cb45c;
        case 0x1cb460u: goto label_1cb460;
        case 0x1cb464u: goto label_1cb464;
        case 0x1cb468u: goto label_1cb468;
        case 0x1cb46cu: goto label_1cb46c;
        case 0x1cb470u: goto label_1cb470;
        case 0x1cb474u: goto label_1cb474;
        case 0x1cb478u: goto label_1cb478;
        case 0x1cb47cu: goto label_1cb47c;
        case 0x1cb480u: goto label_1cb480;
        case 0x1cb484u: goto label_1cb484;
        case 0x1cb488u: goto label_1cb488;
        case 0x1cb48cu: goto label_1cb48c;
        case 0x1cb490u: goto label_1cb490;
        case 0x1cb494u: goto label_1cb494;
        case 0x1cb498u: goto label_1cb498;
        case 0x1cb49cu: goto label_1cb49c;
        case 0x1cb4a0u: goto label_1cb4a0;
        case 0x1cb4a4u: goto label_1cb4a4;
        case 0x1cb4a8u: goto label_1cb4a8;
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4b0u: goto label_1cb4b0;
        case 0x1cb4b4u: goto label_1cb4b4;
        case 0x1cb4b8u: goto label_1cb4b8;
        case 0x1cb4bcu: goto label_1cb4bc;
        case 0x1cb4c0u: goto label_1cb4c0;
        case 0x1cb4c4u: goto label_1cb4c4;
        case 0x1cb4c8u: goto label_1cb4c8;
        case 0x1cb4ccu: goto label_1cb4cc;
        case 0x1cb4d0u: goto label_1cb4d0;
        case 0x1cb4d4u: goto label_1cb4d4;
        case 0x1cb4d8u: goto label_1cb4d8;
        case 0x1cb4dcu: goto label_1cb4dc;
        case 0x1cb4e0u: goto label_1cb4e0;
        case 0x1cb4e4u: goto label_1cb4e4;
        case 0x1cb4e8u: goto label_1cb4e8;
        case 0x1cb4ecu: goto label_1cb4ec;
        case 0x1cb4f0u: goto label_1cb4f0;
        case 0x1cb4f4u: goto label_1cb4f4;
        case 0x1cb4f8u: goto label_1cb4f8;
        case 0x1cb4fcu: goto label_1cb4fc;
        case 0x1cb500u: goto label_1cb500;
        case 0x1cb504u: goto label_1cb504;
        case 0x1cb508u: goto label_1cb508;
        case 0x1cb50cu: goto label_1cb50c;
        case 0x1cb510u: goto label_1cb510;
        case 0x1cb514u: goto label_1cb514;
        case 0x1cb518u: goto label_1cb518;
        case 0x1cb51cu: goto label_1cb51c;
        case 0x1cb520u: goto label_1cb520;
        case 0x1cb524u: goto label_1cb524;
        case 0x1cb528u: goto label_1cb528;
        case 0x1cb52cu: goto label_1cb52c;
        case 0x1cb530u: goto label_1cb530;
        case 0x1cb534u: goto label_1cb534;
        case 0x1cb538u: goto label_1cb538;
        case 0x1cb53cu: goto label_1cb53c;
        case 0x1cb540u: goto label_1cb540;
        case 0x1cb544u: goto label_1cb544;
        case 0x1cb548u: goto label_1cb548;
        case 0x1cb54cu: goto label_1cb54c;
        case 0x1cb550u: goto label_1cb550;
        case 0x1cb554u: goto label_1cb554;
        case 0x1cb558u: goto label_1cb558;
        case 0x1cb55cu: goto label_1cb55c;
        case 0x1cb560u: goto label_1cb560;
        case 0x1cb564u: goto label_1cb564;
        case 0x1cb568u: goto label_1cb568;
        case 0x1cb56cu: goto label_1cb56c;
        case 0x1cb570u: goto label_1cb570;
        case 0x1cb574u: goto label_1cb574;
        case 0x1cb578u: goto label_1cb578;
        case 0x1cb57cu: goto label_1cb57c;
        case 0x1cb580u: goto label_1cb580;
        case 0x1cb584u: goto label_1cb584;
        case 0x1cb588u: goto label_1cb588;
        case 0x1cb58cu: goto label_1cb58c;
        case 0x1cb590u: goto label_1cb590;
        case 0x1cb594u: goto label_1cb594;
        case 0x1cb598u: goto label_1cb598;
        case 0x1cb59cu: goto label_1cb59c;
        case 0x1cb5a0u: goto label_1cb5a0;
        case 0x1cb5a4u: goto label_1cb5a4;
        case 0x1cb5a8u: goto label_1cb5a8;
        case 0x1cb5acu: goto label_1cb5ac;
        case 0x1cb5b0u: goto label_1cb5b0;
        case 0x1cb5b4u: goto label_1cb5b4;
        case 0x1cb5b8u: goto label_1cb5b8;
        case 0x1cb5bcu: goto label_1cb5bc;
        case 0x1cb5c0u: goto label_1cb5c0;
        case 0x1cb5c4u: goto label_1cb5c4;
        case 0x1cb5c8u: goto label_1cb5c8;
        case 0x1cb5ccu: goto label_1cb5cc;
        case 0x1cb5d0u: goto label_1cb5d0;
        case 0x1cb5d4u: goto label_1cb5d4;
        case 0x1cb5d8u: goto label_1cb5d8;
        case 0x1cb5dcu: goto label_1cb5dc;
        case 0x1cb5e0u: goto label_1cb5e0;
        case 0x1cb5e4u: goto label_1cb5e4;
        case 0x1cb5e8u: goto label_1cb5e8;
        case 0x1cb5ecu: goto label_1cb5ec;
        case 0x1cb5f0u: goto label_1cb5f0;
        case 0x1cb5f4u: goto label_1cb5f4;
        case 0x1cb5f8u: goto label_1cb5f8;
        case 0x1cb5fcu: goto label_1cb5fc;
        case 0x1cb600u: goto label_1cb600;
        case 0x1cb604u: goto label_1cb604;
        case 0x1cb608u: goto label_1cb608;
        case 0x1cb60cu: goto label_1cb60c;
        case 0x1cb610u: goto label_1cb610;
        case 0x1cb614u: goto label_1cb614;
        case 0x1cb618u: goto label_1cb618;
        case 0x1cb61cu: goto label_1cb61c;
        case 0x1cb620u: goto label_1cb620;
        case 0x1cb624u: goto label_1cb624;
        case 0x1cb628u: goto label_1cb628;
        case 0x1cb62cu: goto label_1cb62c;
        case 0x1cb630u: goto label_1cb630;
        case 0x1cb634u: goto label_1cb634;
        case 0x1cb638u: goto label_1cb638;
        case 0x1cb63cu: goto label_1cb63c;
        case 0x1cb640u: goto label_1cb640;
        case 0x1cb644u: goto label_1cb644;
        case 0x1cb648u: goto label_1cb648;
        case 0x1cb64cu: goto label_1cb64c;
        case 0x1cb650u: goto label_1cb650;
        case 0x1cb654u: goto label_1cb654;
        case 0x1cb658u: goto label_1cb658;
        case 0x1cb65cu: goto label_1cb65c;
        case 0x1cb660u: goto label_1cb660;
        case 0x1cb664u: goto label_1cb664;
        case 0x1cb668u: goto label_1cb668;
        case 0x1cb66cu: goto label_1cb66c;
        case 0x1cb670u: goto label_1cb670;
        case 0x1cb674u: goto label_1cb674;
        case 0x1cb678u: goto label_1cb678;
        case 0x1cb67cu: goto label_1cb67c;
        case 0x1cb680u: goto label_1cb680;
        case 0x1cb684u: goto label_1cb684;
        case 0x1cb688u: goto label_1cb688;
        case 0x1cb68cu: goto label_1cb68c;
        case 0x1cb690u: goto label_1cb690;
        case 0x1cb694u: goto label_1cb694;
        case 0x1cb698u: goto label_1cb698;
        case 0x1cb69cu: goto label_1cb69c;
        case 0x1cb6a0u: goto label_1cb6a0;
        case 0x1cb6a4u: goto label_1cb6a4;
        case 0x1cb6a8u: goto label_1cb6a8;
        case 0x1cb6acu: goto label_1cb6ac;
        case 0x1cb6b0u: goto label_1cb6b0;
        case 0x1cb6b4u: goto label_1cb6b4;
        case 0x1cb6b8u: goto label_1cb6b8;
        case 0x1cb6bcu: goto label_1cb6bc;
        case 0x1cb6c0u: goto label_1cb6c0;
        case 0x1cb6c4u: goto label_1cb6c4;
        case 0x1cb6c8u: goto label_1cb6c8;
        case 0x1cb6ccu: goto label_1cb6cc;
        case 0x1cb6d0u: goto label_1cb6d0;
        case 0x1cb6d4u: goto label_1cb6d4;
        case 0x1cb6d8u: goto label_1cb6d8;
        case 0x1cb6dcu: goto label_1cb6dc;
        case 0x1cb6e0u: goto label_1cb6e0;
        case 0x1cb6e4u: goto label_1cb6e4;
        case 0x1cb6e8u: goto label_1cb6e8;
        case 0x1cb6ecu: goto label_1cb6ec;
        case 0x1cb6f0u: goto label_1cb6f0;
        case 0x1cb6f4u: goto label_1cb6f4;
        case 0x1cb6f8u: goto label_1cb6f8;
        case 0x1cb6fcu: goto label_1cb6fc;
        case 0x1cb700u: goto label_1cb700;
        case 0x1cb704u: goto label_1cb704;
        case 0x1cb708u: goto label_1cb708;
        case 0x1cb70cu: goto label_1cb70c;
        case 0x1cb710u: goto label_1cb710;
        case 0x1cb714u: goto label_1cb714;
        case 0x1cb718u: goto label_1cb718;
        case 0x1cb71cu: goto label_1cb71c;
        case 0x1cb720u: goto label_1cb720;
        case 0x1cb724u: goto label_1cb724;
        case 0x1cb728u: goto label_1cb728;
        case 0x1cb72cu: goto label_1cb72c;
        case 0x1cb730u: goto label_1cb730;
        case 0x1cb734u: goto label_1cb734;
        case 0x1cb738u: goto label_1cb738;
        case 0x1cb73cu: goto label_1cb73c;
        case 0x1cb740u: goto label_1cb740;
        case 0x1cb744u: goto label_1cb744;
        case 0x1cb748u: goto label_1cb748;
        case 0x1cb74cu: goto label_1cb74c;
        case 0x1cb750u: goto label_1cb750;
        case 0x1cb754u: goto label_1cb754;
        case 0x1cb758u: goto label_1cb758;
        case 0x1cb75cu: goto label_1cb75c;
        case 0x1cb760u: goto label_1cb760;
        case 0x1cb764u: goto label_1cb764;
        case 0x1cb768u: goto label_1cb768;
        case 0x1cb76cu: goto label_1cb76c;
        case 0x1cb770u: goto label_1cb770;
        case 0x1cb774u: goto label_1cb774;
        case 0x1cb778u: goto label_1cb778;
        case 0x1cb77cu: goto label_1cb77c;
        case 0x1cb780u: goto label_1cb780;
        case 0x1cb784u: goto label_1cb784;
        case 0x1cb788u: goto label_1cb788;
        case 0x1cb78cu: goto label_1cb78c;
        case 0x1cb790u: goto label_1cb790;
        case 0x1cb794u: goto label_1cb794;
        case 0x1cb798u: goto label_1cb798;
        case 0x1cb79cu: goto label_1cb79c;
        case 0x1cb7a0u: goto label_1cb7a0;
        case 0x1cb7a4u: goto label_1cb7a4;
        case 0x1cb7a8u: goto label_1cb7a8;
        case 0x1cb7acu: goto label_1cb7ac;
        case 0x1cb7b0u: goto label_1cb7b0;
        case 0x1cb7b4u: goto label_1cb7b4;
        case 0x1cb7b8u: goto label_1cb7b8;
        case 0x1cb7bcu: goto label_1cb7bc;
        case 0x1cb7c0u: goto label_1cb7c0;
        case 0x1cb7c4u: goto label_1cb7c4;
        case 0x1cb7c8u: goto label_1cb7c8;
        case 0x1cb7ccu: goto label_1cb7cc;
        case 0x1cb7d0u: goto label_1cb7d0;
        case 0x1cb7d4u: goto label_1cb7d4;
        case 0x1cb7d8u: goto label_1cb7d8;
        case 0x1cb7dcu: goto label_1cb7dc;
        case 0x1cb7e0u: goto label_1cb7e0;
        case 0x1cb7e4u: goto label_1cb7e4;
        case 0x1cb7e8u: goto label_1cb7e8;
        case 0x1cb7ecu: goto label_1cb7ec;
        case 0x1cb7f0u: goto label_1cb7f0;
        case 0x1cb7f4u: goto label_1cb7f4;
        case 0x1cb7f8u: goto label_1cb7f8;
        case 0x1cb7fcu: goto label_1cb7fc;
        case 0x1cb800u: goto label_1cb800;
        case 0x1cb804u: goto label_1cb804;
        case 0x1cb808u: goto label_1cb808;
        case 0x1cb80cu: goto label_1cb80c;
        case 0x1cb810u: goto label_1cb810;
        case 0x1cb814u: goto label_1cb814;
        case 0x1cb818u: goto label_1cb818;
        case 0x1cb81cu: goto label_1cb81c;
        case 0x1cb820u: goto label_1cb820;
        case 0x1cb824u: goto label_1cb824;
        case 0x1cb828u: goto label_1cb828;
        case 0x1cb82cu: goto label_1cb82c;
        case 0x1cb830u: goto label_1cb830;
        case 0x1cb834u: goto label_1cb834;
        case 0x1cb838u: goto label_1cb838;
        case 0x1cb83cu: goto label_1cb83c;
        case 0x1cb840u: goto label_1cb840;
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb848u: goto label_1cb848;
        case 0x1cb84cu: goto label_1cb84c;
        case 0x1cb850u: goto label_1cb850;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb858u: goto label_1cb858;
        case 0x1cb85cu: goto label_1cb85c;
        case 0x1cb860u: goto label_1cb860;
        case 0x1cb864u: goto label_1cb864;
        case 0x1cb868u: goto label_1cb868;
        case 0x1cb86cu: goto label_1cb86c;
        case 0x1cb870u: goto label_1cb870;
        case 0x1cb874u: goto label_1cb874;
        case 0x1cb878u: goto label_1cb878;
        case 0x1cb87cu: goto label_1cb87c;
        case 0x1cb880u: goto label_1cb880;
        case 0x1cb884u: goto label_1cb884;
        case 0x1cb888u: goto label_1cb888;
        case 0x1cb88cu: goto label_1cb88c;
        case 0x1cb890u: goto label_1cb890;
        case 0x1cb894u: goto label_1cb894;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb89cu: goto label_1cb89c;
        case 0x1cb8a0u: goto label_1cb8a0;
        case 0x1cb8a4u: goto label_1cb8a4;
        case 0x1cb8a8u: goto label_1cb8a8;
        case 0x1cb8acu: goto label_1cb8ac;
        case 0x1cb8b0u: goto label_1cb8b0;
        case 0x1cb8b4u: goto label_1cb8b4;
        case 0x1cb8b8u: goto label_1cb8b8;
        case 0x1cb8bcu: goto label_1cb8bc;
        case 0x1cb8c0u: goto label_1cb8c0;
        case 0x1cb8c4u: goto label_1cb8c4;
        case 0x1cb8c8u: goto label_1cb8c8;
        case 0x1cb8ccu: goto label_1cb8cc;
        case 0x1cb8d0u: goto label_1cb8d0;
        case 0x1cb8d4u: goto label_1cb8d4;
        case 0x1cb8d8u: goto label_1cb8d8;
        case 0x1cb8dcu: goto label_1cb8dc;
        case 0x1cb8e0u: goto label_1cb8e0;
        case 0x1cb8e4u: goto label_1cb8e4;
        case 0x1cb8e8u: goto label_1cb8e8;
        case 0x1cb8ecu: goto label_1cb8ec;
        case 0x1cb8f0u: goto label_1cb8f0;
        case 0x1cb8f4u: goto label_1cb8f4;
        case 0x1cb8f8u: goto label_1cb8f8;
        case 0x1cb8fcu: goto label_1cb8fc;
        case 0x1cb900u: goto label_1cb900;
        case 0x1cb904u: goto label_1cb904;
        case 0x1cb908u: goto label_1cb908;
        case 0x1cb90cu: goto label_1cb90c;
        case 0x1cb910u: goto label_1cb910;
        case 0x1cb914u: goto label_1cb914;
        case 0x1cb918u: goto label_1cb918;
        case 0x1cb91cu: goto label_1cb91c;
        case 0x1cb920u: goto label_1cb920;
        case 0x1cb924u: goto label_1cb924;
        case 0x1cb928u: goto label_1cb928;
        case 0x1cb92cu: goto label_1cb92c;
        case 0x1cb930u: goto label_1cb930;
        case 0x1cb934u: goto label_1cb934;
        case 0x1cb938u: goto label_1cb938;
        case 0x1cb93cu: goto label_1cb93c;
        case 0x1cb940u: goto label_1cb940;
        case 0x1cb944u: goto label_1cb944;
        case 0x1cb948u: goto label_1cb948;
        case 0x1cb94cu: goto label_1cb94c;
        case 0x1cb950u: goto label_1cb950;
        case 0x1cb954u: goto label_1cb954;
        case 0x1cb958u: goto label_1cb958;
        case 0x1cb95cu: goto label_1cb95c;
        case 0x1cb960u: goto label_1cb960;
        case 0x1cb964u: goto label_1cb964;
        case 0x1cb968u: goto label_1cb968;
        case 0x1cb96cu: goto label_1cb96c;
        case 0x1cb970u: goto label_1cb970;
        case 0x1cb974u: goto label_1cb974;
        case 0x1cb978u: goto label_1cb978;
        case 0x1cb97cu: goto label_1cb97c;
        case 0x1cb980u: goto label_1cb980;
        case 0x1cb984u: goto label_1cb984;
        case 0x1cb988u: goto label_1cb988;
        case 0x1cb98cu: goto label_1cb98c;
        case 0x1cb990u: goto label_1cb990;
        case 0x1cb994u: goto label_1cb994;
        case 0x1cb998u: goto label_1cb998;
        case 0x1cb99cu: goto label_1cb99c;
        case 0x1cb9a0u: goto label_1cb9a0;
        case 0x1cb9a4u: goto label_1cb9a4;
        case 0x1cb9a8u: goto label_1cb9a8;
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9b0u: goto label_1cb9b0;
        case 0x1cb9b4u: goto label_1cb9b4;
        case 0x1cb9b8u: goto label_1cb9b8;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cb9c0u: goto label_1cb9c0;
        case 0x1cb9c4u: goto label_1cb9c4;
        case 0x1cb9c8u: goto label_1cb9c8;
        case 0x1cb9ccu: goto label_1cb9cc;
        case 0x1cb9d0u: goto label_1cb9d0;
        case 0x1cb9d4u: goto label_1cb9d4;
        case 0x1cb9d8u: goto label_1cb9d8;
        case 0x1cb9dcu: goto label_1cb9dc;
        case 0x1cb9e0u: goto label_1cb9e0;
        case 0x1cb9e4u: goto label_1cb9e4;
        case 0x1cb9e8u: goto label_1cb9e8;
        case 0x1cb9ecu: goto label_1cb9ec;
        case 0x1cb9f0u: goto label_1cb9f0;
        case 0x1cb9f4u: goto label_1cb9f4;
        case 0x1cb9f8u: goto label_1cb9f8;
        case 0x1cb9fcu: goto label_1cb9fc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba04u: goto label_1cba04;
        case 0x1cba08u: goto label_1cba08;
        case 0x1cba0cu: goto label_1cba0c;
        case 0x1cba10u: goto label_1cba10;
        case 0x1cba14u: goto label_1cba14;
        case 0x1cba18u: goto label_1cba18;
        case 0x1cba1cu: goto label_1cba1c;
        case 0x1cba20u: goto label_1cba20;
        case 0x1cba24u: goto label_1cba24;
        case 0x1cba28u: goto label_1cba28;
        case 0x1cba2cu: goto label_1cba2c;
        case 0x1cba30u: goto label_1cba30;
        case 0x1cba34u: goto label_1cba34;
        case 0x1cba38u: goto label_1cba38;
        case 0x1cba3cu: goto label_1cba3c;
        case 0x1cba40u: goto label_1cba40;
        case 0x1cba44u: goto label_1cba44;
        case 0x1cba48u: goto label_1cba48;
        case 0x1cba4cu: goto label_1cba4c;
        case 0x1cba50u: goto label_1cba50;
        case 0x1cba54u: goto label_1cba54;
        case 0x1cba58u: goto label_1cba58;
        case 0x1cba5cu: goto label_1cba5c;
        case 0x1cba60u: goto label_1cba60;
        case 0x1cba64u: goto label_1cba64;
        case 0x1cba68u: goto label_1cba68;
        case 0x1cba6cu: goto label_1cba6c;
        case 0x1cba70u: goto label_1cba70;
        case 0x1cba74u: goto label_1cba74;
        case 0x1cba78u: goto label_1cba78;
        case 0x1cba7cu: goto label_1cba7c;
        case 0x1cba80u: goto label_1cba80;
        case 0x1cba84u: goto label_1cba84;
        case 0x1cba88u: goto label_1cba88;
        case 0x1cba8cu: goto label_1cba8c;
        case 0x1cba90u: goto label_1cba90;
        case 0x1cba94u: goto label_1cba94;
        case 0x1cba98u: goto label_1cba98;
        case 0x1cba9cu: goto label_1cba9c;
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        case 0x1cbeb8u: goto label_1cbeb8;
        case 0x1cbebcu: goto label_1cbebc;
        case 0x1cbec0u: goto label_1cbec0;
        case 0x1cbec4u: goto label_1cbec4;
        case 0x1cbec8u: goto label_1cbec8;
        case 0x1cbeccu: goto label_1cbecc;
        case 0x1cbed0u: goto label_1cbed0;
        case 0x1cbed4u: goto label_1cbed4;
        case 0x1cbed8u: goto label_1cbed8;
        case 0x1cbedcu: goto label_1cbedc;
        case 0x1cbee0u: goto label_1cbee0;
        case 0x1cbee4u: goto label_1cbee4;
        case 0x1cbee8u: goto label_1cbee8;
        case 0x1cbeecu: goto label_1cbeec;
        case 0x1cbef0u: goto label_1cbef0;
        case 0x1cbef4u: goto label_1cbef4;
        case 0x1cbef8u: goto label_1cbef8;
        case 0x1cbefcu: goto label_1cbefc;
        case 0x1cbf00u: goto label_1cbf00;
        case 0x1cbf04u: goto label_1cbf04;
        case 0x1cbf08u: goto label_1cbf08;
        case 0x1cbf0cu: goto label_1cbf0c;
        case 0x1cbf10u: goto label_1cbf10;
        case 0x1cbf14u: goto label_1cbf14;
        case 0x1cbf18u: goto label_1cbf18;
        case 0x1cbf1cu: goto label_1cbf1c;
        case 0x1cbf20u: goto label_1cbf20;
        case 0x1cbf24u: goto label_1cbf24;
        case 0x1cbf28u: goto label_1cbf28;
        case 0x1cbf2cu: goto label_1cbf2c;
        case 0x1cbf30u: goto label_1cbf30;
        case 0x1cbf34u: goto label_1cbf34;
        case 0x1cbf38u: goto label_1cbf38;
        case 0x1cbf3cu: goto label_1cbf3c;
        case 0x1cbf40u: goto label_1cbf40;
        case 0x1cbf44u: goto label_1cbf44;
        case 0x1cbf48u: goto label_1cbf48;
        case 0x1cbf4cu: goto label_1cbf4c;
        case 0x1cbf50u: goto label_1cbf50;
        case 0x1cbf54u: goto label_1cbf54;
        case 0x1cbf58u: goto label_1cbf58;
        case 0x1cbf5cu: goto label_1cbf5c;
        case 0x1cbf60u: goto label_1cbf60;
        case 0x1cbf64u: goto label_1cbf64;
        case 0x1cbf68u: goto label_1cbf68;
        case 0x1cbf6cu: goto label_1cbf6c;
        case 0x1cbf70u: goto label_1cbf70;
        case 0x1cbf74u: goto label_1cbf74;
        case 0x1cbf78u: goto label_1cbf78;
        case 0x1cbf7cu: goto label_1cbf7c;
        case 0x1cbf80u: goto label_1cbf80;
        case 0x1cbf84u: goto label_1cbf84;
        case 0x1cbf88u: goto label_1cbf88;
        case 0x1cbf8cu: goto label_1cbf8c;
        case 0x1cbf90u: goto label_1cbf90;
        case 0x1cbf94u: goto label_1cbf94;
        case 0x1cbf98u: goto label_1cbf98;
        case 0x1cbf9cu: goto label_1cbf9c;
        case 0x1cbfa0u: goto label_1cbfa0;
        case 0x1cbfa4u: goto label_1cbfa4;
        case 0x1cbfa8u: goto label_1cbfa8;
        case 0x1cbfacu: goto label_1cbfac;
        case 0x1cbfb0u: goto label_1cbfb0;
        case 0x1cbfb4u: goto label_1cbfb4;
        case 0x1cbfb8u: goto label_1cbfb8;
        case 0x1cbfbcu: goto label_1cbfbc;
        case 0x1cbfc0u: goto label_1cbfc0;
        case 0x1cbfc4u: goto label_1cbfc4;
        case 0x1cbfc8u: goto label_1cbfc8;
        case 0x1cbfccu: goto label_1cbfcc;
        case 0x1cbfd0u: goto label_1cbfd0;
        case 0x1cbfd4u: goto label_1cbfd4;
        case 0x1cbfd8u: goto label_1cbfd8;
        case 0x1cbfdcu: goto label_1cbfdc;
        case 0x1cbfe0u: goto label_1cbfe0;
        case 0x1cbfe4u: goto label_1cbfe4;
        case 0x1cbfe8u: goto label_1cbfe8;
        case 0x1cbfecu: goto label_1cbfec;
        case 0x1cbff0u: goto label_1cbff0;
        case 0x1cbff4u: goto label_1cbff4;
        case 0x1cbff8u: goto label_1cbff8;
        case 0x1cbffcu: goto label_1cbffc;
        case 0x1cc000u: goto label_1cc000;
        case 0x1cc004u: goto label_1cc004;
        case 0x1cc008u: goto label_1cc008;
        case 0x1cc00cu: goto label_1cc00c;
        case 0x1cc010u: goto label_1cc010;
        case 0x1cc014u: goto label_1cc014;
        case 0x1cc018u: goto label_1cc018;
        case 0x1cc01cu: goto label_1cc01c;
        case 0x1cc020u: goto label_1cc020;
        case 0x1cc024u: goto label_1cc024;
        case 0x1cc028u: goto label_1cc028;
        case 0x1cc02cu: goto label_1cc02c;
        case 0x1cc030u: goto label_1cc030;
        case 0x1cc034u: goto label_1cc034;
        case 0x1cc038u: goto label_1cc038;
        case 0x1cc03cu: goto label_1cc03c;
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        default: break;
    }

    ctx->pc = 0x1ca520u;

label_1ca520:
    // 0x1ca520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ca524:
    // 0x1ca524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca528:
    // 0x1ca528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1ca528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1ca52c:
    // 0x1ca52c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca530:
    // 0x1ca530: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ca530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ca534:
    // 0x1ca534: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ca534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca538:
    // 0x1ca538: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ca538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ca53c:
    // 0x1ca53c: 0x320f809  jalr        $t9
label_1ca540:
    if (ctx->pc == 0x1CA540u) {
        ctx->pc = 0x1CA544u;
        goto label_1ca544;
    }
    ctx->pc = 0x1CA53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CA544u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA53Cu, 0x1CA544u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CA544u;
label_1ca544:
    // 0x1ca544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca548:
    // 0x1ca548: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ca548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1ca54c:
    // 0x1ca54c: 0x3e00008  jr          $ra
label_1ca550:
    if (ctx->pc == 0x1CA550u) {
        ctx->pc = 0x1CA554u;
        goto label_1ca554;
    }
    ctx->pc = 0x1CA54Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA54Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA554u;
label_1ca554:
    // 0x1ca554: 0x0  nop
    ctx->pc = 0x1ca554u;
    // NOP
label_1ca558:
    // 0x1ca558: 0x0  nop
    ctx->pc = 0x1ca558u;
    // NOP
label_1ca55c:
    // 0x1ca55c: 0x0  nop
    ctx->pc = 0x1ca55cu;
    // NOP
label_1ca560:
    // 0x1ca560: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x1ca560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
label_1ca564:
    // 0x1ca564: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ca564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1ca568:
    // 0x1ca568: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1ca568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1ca56c:
    // 0x1ca56c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1ca56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1ca570:
    // 0x1ca570: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1ca570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1ca574:
    // 0x1ca574: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1ca574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1ca578:
    // 0x1ca578: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ca578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ca57c:
    // 0x1ca57c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ca57cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ca580:
    // 0x1ca580: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ca584:
    // 0x1ca584: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ca588:
    // 0x1ca588: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ca588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ca58c:
    // 0x1ca58c: 0xafa403a0  sw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca58cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 4));
label_1ca590:
    // 0x1ca590: 0x8f84bb70  lw          $a0, -0x4490($gp)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1ca594:
    // 0x1ca594: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x1ca594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca598:
    // 0x1ca598: 0xe7a1039c  swc1        $f1, 0x39C($sp)
    ctx->pc = 0x1ca598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 924), bits); }
label_1ca59c:
    // 0x1ca59c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca5a0:
    // 0x1ca5a0: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x1ca5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_1ca5a4:
    // 0x1ca5a4: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x1ca5a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_1ca5a8:
    // 0x1ca5a8: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1ca5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca5ac:
    // 0x1ca5ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ca5acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ca5b0:
    // 0x1ca5b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1ca5b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca5b4:
    // 0x1ca5b4: 0x0  nop
    ctx->pc = 0x1ca5b4u;
    // NOP
label_1ca5b8:
    // 0x1ca5b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ca5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca5bc:
    // 0x1ca5bc: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_1ca5c0:
    if (ctx->pc == 0x1CA5C0u) {
        ctx->pc = 0x1CA5C4u;
        goto label_1ca5c4;
    }
    ctx->pc = 0x1CA5BCu;
    {
        const bool branch_taken_0x1ca5bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca5bc) {
            ctx->pc = 0x1CA608u;
            goto label_1ca608;
        }
    }
    ctx->pc = 0x1CA5C4u;
label_1ca5c4:
    // 0x1ca5c4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca5c8:
    // 0x1ca5c8: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x1ca5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca5cc:
    // 0x1ca5cc: 0xc7ac039c  lwc1        $f12, 0x39C($sp)
    ctx->pc = 0x1ca5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca5d0:
    // 0x1ca5d0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1ca5d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_1ca5d4:
    // 0x1ca5d4: 0xe48000bc  swc1        $f0, 0xBC($a0)
    ctx->pc = 0x1ca5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_1ca5d8:
    // 0x1ca5d8: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca5dc:
    // 0x1ca5dc: 0xc44300bc  lwc1        $f3, 0xBC($v0)
    ctx->pc = 0x1ca5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ca5e0:
    // 0x1ca5e0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1ca5e4:
    // 0x1ca5e4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1ca5e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca5e8:
    // 0x1ca5e8: 0x0  nop
    ctx->pc = 0x1ca5e8u;
    // NOP
label_1ca5ec:
    // 0x1ca5ec: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1ca5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca5f0:
    // 0x1ca5f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1ca5f4:
    if (ctx->pc == 0x1CA5F4u) {
        ctx->pc = 0x1CA5F8u;
        goto label_1ca5f8;
    }
    ctx->pc = 0x1CA5F0u;
    {
        const bool branch_taken_0x1ca5f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca5f0) {
            ctx->pc = 0x1CA608u;
            goto label_1ca608;
        }
    }
    ctx->pc = 0x1CA5F8u;
label_1ca5f8:
    // 0x1ca5f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1ca5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1ca5fc:
    // 0x1ca5fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ca5fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca600:
    // 0x1ca600: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca604:
    // 0x1ca604: 0xe48000bc  swc1        $f0, 0xBC($a0)
    ctx->pc = 0x1ca604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 188), bits); }
label_1ca608:
    // 0x1ca608: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1ca608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_1ca60c:
    // 0x1ca60c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca60cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca610:
    // 0x1ca610: 0xc7ac039c  lwc1        $f12, 0x39C($sp)
    ctx->pc = 0x1ca610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ca614:
    // 0x1ca614: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1ca614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca618:
    // 0x1ca618: 0xc4ad00c0  lwc1        $f13, 0xC0($a1)
    ctx->pc = 0x1ca618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ca61c:
    // 0x1ca61c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca61cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca620:
    // 0x1ca620: 0x0  nop
    ctx->pc = 0x1ca620u;
    // NOP
label_1ca624:
    // 0x1ca624: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x1ca624u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[13]));
label_1ca628:
    // 0x1ca628: 0x460c0b1d  msub.s      $f12, $f1, $f12
    ctx->pc = 0x1ca628u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
label_1ca62c:
    // 0x1ca62c: 0xe4ac00c0  swc1        $f12, 0xC0($a1)
    ctx->pc = 0x1ca62cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
label_1ca630:
    // 0x1ca630: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca634:
    // 0x1ca634: 0xc44100c0  lwc1        $f1, 0xC0($v0)
    ctx->pc = 0x1ca634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca638:
    // 0x1ca638: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca638u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca63c:
    // 0x1ca63c: 0x0  nop
    ctx->pc = 0x1ca63cu;
    // NOP
label_1ca640:
    // 0x1ca640: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca640u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca644:
    // 0x1ca644: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1ca648:
    if (ctx->pc == 0x1CA648u) {
        ctx->pc = 0x1CA64Cu;
        goto label_1ca64c;
    }
    ctx->pc = 0x1CA644u;
    {
        const bool branch_taken_0x1ca644 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca644) {
            ctx->pc = 0x1CA658u;
            goto label_1ca658;
        }
    }
    ctx->pc = 0x1CA64Cu;
label_1ca64c:
    // 0x1ca64c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1ca64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca650:
    // 0x1ca650: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca654:
    // 0x1ca654: 0xe48300c0  swc1        $f3, 0xC0($a0)
    ctx->pc = 0x1ca654u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 192), bits); }
label_1ca658:
    // 0x1ca658: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca65c:
    // 0x1ca65c: 0xc46200c4  lwc1        $f2, 0xC4($v1)
    ctx->pc = 0x1ca65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ca660:
    // 0x1ca660: 0xc7a0039c  lwc1        $f0, 0x39C($sp)
    ctx->pc = 0x1ca660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca664:
    // 0x1ca664: 0x46001301  sub.s       $f12, $f2, $f0
    ctx->pc = 0x1ca664u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_1ca668:
    // 0x1ca668: 0xe46c00c4  swc1        $f12, 0xC4($v1)
    ctx->pc = 0x1ca668u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 196), bits); }
label_1ca66c:
    // 0x1ca66c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca670:
    // 0x1ca670: 0xc44100c4  lwc1        $f1, 0xC4($v0)
    ctx->pc = 0x1ca670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca674:
    // 0x1ca674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ca674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca678:
    // 0x1ca678: 0x0  nop
    ctx->pc = 0x1ca678u;
    // NOP
label_1ca67c:
    // 0x1ca67c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ca67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca680:
    // 0x1ca680: 0x45000013  bc1f        . + 4 + (0x13 << 2)
label_1ca684:
    if (ctx->pc == 0x1CA684u) {
        ctx->pc = 0x1CA688u;
        goto label_1ca688;
    }
    ctx->pc = 0x1CA680u;
    {
        const bool branch_taken_0x1ca680 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca680) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA688u;
label_1ca688:
    // 0x1ca688: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ca688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca68c:
    // 0x1ca68c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca68cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca690:
    // 0x1ca690: 0xe48100c4  swc1        $f1, 0xC4($a0)
    ctx->pc = 0x1ca690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
label_1ca694:
    // 0x1ca694: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca698:
    // 0x1ca698: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1ca698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_1ca69c:
    // 0x1ca69c: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1ca69cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1ca6a0:
    // 0x1ca6a0: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x1ca6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1ca6a4:
    // 0x1ca6a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1ca6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca6a8:
    // 0x1ca6a8: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
label_1ca6ac:
    if (ctx->pc == 0x1CA6ACu) {
        ctx->pc = 0x1CA6B0u;
        goto label_1ca6b0;
    }
    ctx->pc = 0x1CA6A8u;
    {
        const bool branch_taken_0x1ca6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1ca6a8) {
            ctx->pc = 0x1CA6D0u;
            goto label_1ca6d0;
        }
    }
    ctx->pc = 0x1CA6B0u;
label_1ca6b0:
    // 0x1ca6b0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1ca6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1ca6b4:
    // 0x1ca6b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca6b8:
    // 0x1ca6b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ca6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca6bc:
    // 0x1ca6bc: 0xc08f740  jal         func_23DD00
label_1ca6c0:
    if (ctx->pc == 0x1CA6C0u) {
        ctx->pc = 0x1CA6C4u;
        goto label_1ca6c4;
    }
    ctx->pc = 0x1CA6BCu;
    SET_GPR_U32(ctx, 31, 0x1CA6C4u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1CA6BCu, 0x1CA6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6C4u;
label_1ca6c4:
    // 0x1ca6c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca6c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca6c8:
    // 0x1ca6c8: 0x10000675  b           . + 4 + (0x675 << 2)
label_1ca6cc:
    if (ctx->pc == 0x1CA6CCu) {
        ctx->pc = 0x1CA6D0u;
        goto label_1ca6d0;
    }
    ctx->pc = 0x1CA6C8u;
    {
        const bool branch_taken_0x1ca6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca6c8) {
            ctx->pc = 0x1CC0A0u;
            goto label_1cc0a0;
        }
    }
    ctx->pc = 0x1CA6D0u;
label_1ca6d0:
    // 0x1ca6d0: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca6d4:
    // 0x1ca6d4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca6d8:
    // 0x1ca6d8: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x1ca6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_1ca6dc:
    // 0x1ca6dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ca6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ca6e0:
    // 0x1ca6e0: 0x244500c8  addiu       $a1, $v0, 0xC8
    ctx->pc = 0x1ca6e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 200));
label_1ca6e4:
    // 0x1ca6e4: 0xc0737d0  jal         func_1CDF40
label_1ca6e8:
    if (ctx->pc == 0x1CA6E8u) {
        ctx->pc = 0x1CA6ECu;
        goto label_1ca6ec;
    }
    ctx->pc = 0x1CA6E4u;
    SET_GPR_U32(ctx, 31, 0x1CA6ECu);
    ctx->pc = 0x1CDF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CDF40u, 0x1CA6E4u, 0x1CA6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6ECu;
label_1ca6ec:
    // 0x1ca6ec: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca6f0:
    // 0x1ca6f0: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1ca6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1ca6f4:
    // 0x1ca6f4: 0xc0739b0  jal         func_1CE6C0
label_1ca6f8:
    if (ctx->pc == 0x1CA6F8u) {
        ctx->pc = 0x1CA6FCu;
        goto label_1ca6fc;
    }
    ctx->pc = 0x1CA6F4u;
    SET_GPR_U32(ctx, 31, 0x1CA6FCu);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CA6F4u, 0x1CA6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA6FCu;
label_1ca6fc:
    // 0x1ca6fc: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x1ca6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_1ca700:
    // 0x1ca700: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca704:
    // 0x1ca704: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x1ca704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_1ca708:
    // 0x1ca708: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1ca708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_1ca70c:
    // 0x1ca70c: 0x7ba40260  lq          $a0, 0x260($sp)
    ctx->pc = 0x1ca70cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1ca710:
    // 0x1ca710: 0xc0739b8  jal         func_1CE6E0
label_1ca714:
    if (ctx->pc == 0x1CA714u) {
        ctx->pc = 0x1CA718u;
        goto label_1ca718;
    }
    ctx->pc = 0x1CA710u;
    SET_GPR_U32(ctx, 31, 0x1CA718u);
    ctx->pc = 0x1CE6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6E0u, 0x1CA710u, 0x1CA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA718u;
label_1ca718:
    // 0x1ca718: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca71c:
    // 0x1ca71c: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x1ca71cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1ca720:
    // 0x1ca720: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x1ca720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_1ca724:
    // 0x1ca724: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1ca724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_1ca728:
    // 0x1ca728: 0x7ba20250  lq          $v0, 0x250($sp)
    ctx->pc = 0x1ca728u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1ca72c:
    // 0x1ca72c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ca730:
    if (ctx->pc == 0x1CA730u) {
        ctx->pc = 0x1CA734u;
        goto label_1ca734;
    }
    ctx->pc = 0x1CA72Cu;
    {
        const bool branch_taken_0x1ca72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca72c) {
            ctx->pc = 0x1CA740u;
            goto label_1ca740;
        }
    }
    ctx->pc = 0x1CA734u;
label_1ca734:
    // 0x1ca734: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca734u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca738:
    // 0x1ca738: 0x10000659  b           . + 4 + (0x659 << 2)
label_1ca73c:
    if (ctx->pc == 0x1CA73Cu) {
        ctx->pc = 0x1CA740u;
        goto label_1ca740;
    }
    ctx->pc = 0x1CA738u;
    {
        const bool branch_taken_0x1ca738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca738) {
            ctx->pc = 0x1CC0A0u;
            goto label_1cc0a0;
        }
    }
    ctx->pc = 0x1CA740u;
label_1ca740:
    // 0x1ca740: 0x27a30340  addiu       $v1, $sp, 0x340
    ctx->pc = 0x1ca740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_1ca744:
    // 0x1ca744: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ca748:
    // 0x1ca748: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1ca74c:
    if (ctx->pc == 0x1CA74Cu) {
        ctx->pc = 0x1CA750u;
        goto label_1ca750;
    }
    ctx->pc = 0x1CA748u;
    {
        const bool branch_taken_0x1ca748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca748) {
            ctx->pc = 0x1CA770u;
            goto label_1ca770;
        }
    }
    ctx->pc = 0x1CA750u;
label_1ca750:
    // 0x1ca750: 0x601021  addu        $v0, $v1, $zero
    ctx->pc = 0x1ca750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1ca754:
    // 0x1ca754: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ca754u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ca758:
    // 0x1ca758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ca75c:
    // 0x1ca75c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1ca75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1ca760:
    // 0x1ca760: 0x0  nop
    ctx->pc = 0x1ca760u;
    // NOP
label_1ca764:
    // 0x1ca764: 0x0  nop
    ctx->pc = 0x1ca764u;
    // NOP
label_1ca768:
    // 0x1ca768: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_1ca76c:
    if (ctx->pc == 0x1CA76Cu) {
        ctx->pc = 0x1CA770u;
        goto label_1ca770;
    }
    ctx->pc = 0x1CA768u;
    {
        const bool branch_taken_0x1ca768 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca768) {
            ctx->pc = 0x1CA754u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca754;
        }
    }
    ctx->pc = 0x1CA770u;
label_1ca770:
    // 0x1ca770: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1ca770u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca774:
    // 0x1ca774: 0xc4a000c4  lwc1        $f0, 0xC4($a1)
    ctx->pc = 0x1ca774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca778:
    // 0x1ca778: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1ca778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ca77c:
    // 0x1ca77c: 0x0  nop
    ctx->pc = 0x1ca77cu;
    // NOP
label_1ca780:
    // 0x1ca780: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ca780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ca784:
    // 0x1ca784: 0x45010029  bc1t        . + 4 + (0x29 << 2)
label_1ca788:
    if (ctx->pc == 0x1CA788u) {
        ctx->pc = 0x1CA78Cu;
        goto label_1ca78c;
    }
    ctx->pc = 0x1CA784u;
    {
        const bool branch_taken_0x1ca784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ca784) {
            ctx->pc = 0x1CA82Cu;
            goto label_1ca82c;
        }
    }
    ctx->pc = 0x1CA78Cu;
label_1ca78c:
    // 0x1ca78c: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1ca78cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca790:
    // 0x1ca790: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ca790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ca794:
    // 0x1ca794: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca798:
    // 0x1ca798: 0xc4c000c4  lwc1        $f0, 0xC4($a2)
    ctx->pc = 0x1ca798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca79c:
    // 0x1ca79c: 0x46001302  mul.s       $f12, $f2, $f0
    ctx->pc = 0x1ca79cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ca7a0:
    // 0x1ca7a0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca7a4:
    // 0x1ca7a4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ca7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ca7a8:
    // 0x1ca7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7ac:
    // 0x1ca7ac: 0xc46000c4  lwc1        $f0, 0xC4($v1)
    ctx->pc = 0x1ca7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca7b0:
    // 0x1ca7b0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca7b4:
    // 0x1ca7b4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ca7b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1ca7b8:
    // 0x1ca7b8: 0xe7a00398  swc1        $f0, 0x398($sp)
    ctx->pc = 0x1ca7b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 920), bits); }
label_1ca7bc:
    // 0x1ca7bc: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca7c0:
    // 0x1ca7c0: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x1ca7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
label_1ca7c4:
    // 0x1ca7c4: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x1ca7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
label_1ca7c8:
    // 0x1ca7c8: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x1ca7c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1ca7cc:
    // 0x1ca7cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca7d0:
    // 0x1ca7d0: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x1ca7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca7d4:
    // 0x1ca7d4: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1ca7d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca7d8:
    // 0x1ca7d8: 0xc0c38f0  jal         func_30E3C0
label_1ca7dc:
    if (ctx->pc == 0x1CA7DCu) {
        ctx->pc = 0x1CA7E0u;
        goto label_1ca7e0;
    }
    ctx->pc = 0x1CA7D8u;
    SET_GPR_U32(ctx, 31, 0x1CA7E0u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CA7D8u, 0x1CA7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA7E0u;
label_1ca7e0:
    // 0x1ca7e0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1ca7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1ca7e4:
    // 0x1ca7e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1ca7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ca7e8:
    // 0x1ca7e8: 0xc7a10398  lwc1        $f1, 0x398($sp)
    ctx->pc = 0x1ca7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca7ec:
    // 0x1ca7ec: 0x460110c2  mul.s       $f3, $f2, $f1
    ctx->pc = 0x1ca7ecu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1ca7f0:
    // 0x1ca7f0: 0x46001882  mul.s       $f2, $f3, $f0
    ctx->pc = 0x1ca7f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ca7f4:
    // 0x1ca7f4: 0xe7a20340  swc1        $f2, 0x340($sp)
    ctx->pc = 0x1ca7f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_1ca7f8:
    // 0x1ca7f8: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca7fc:
    // 0x1ca7fc: 0x3c0242ca  lui         $v0, 0x42CA
    ctx->pc = 0x1ca7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17098 << 16));
label_1ca800:
    // 0x1ca800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca804:
    // 0x1ca804: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x1ca804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca808:
    // 0x1ca808: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1ca808u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca80c:
    // 0x1ca80c: 0xc0c3966  jal         func_30E598
label_1ca810:
    if (ctx->pc == 0x1CA810u) {
        ctx->pc = 0x1CA814u;
        goto label_1ca814;
    }
    ctx->pc = 0x1CA80Cu;
    SET_GPR_U32(ctx, 31, 0x1CA814u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CA80Cu, 0x1CA814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA814u;
label_1ca814:
    // 0x1ca814: 0x3c0540a0  lui         $a1, 0x40A0
    ctx->pc = 0x1ca814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16544 << 16));
label_1ca818:
    // 0x1ca818: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1ca818u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca81c:
    // 0x1ca81c: 0xc7a20398  lwc1        $f2, 0x398($sp)
    ctx->pc = 0x1ca81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ca820:
    // 0x1ca820: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ca820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ca824:
    // 0x1ca824: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ca824u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca828:
    // 0x1ca828: 0xe7a10344  swc1        $f1, 0x344($sp)
    ctx->pc = 0x1ca828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 836), bits); }
label_1ca82c:
    // 0x1ca82c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca830:
    // 0x1ca830: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1ca830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1ca834:
    // 0x1ca834: 0x27a50338  addiu       $a1, $sp, 0x338
    ctx->pc = 0x1ca834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 824));
label_1ca838:
    // 0x1ca838: 0x27a60394  addiu       $a2, $sp, 0x394
    ctx->pc = 0x1ca838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 916));
label_1ca83c:
    // 0x1ca83c: 0xc0738c4  jal         func_1CE310
label_1ca840:
    if (ctx->pc == 0x1CA840u) {
        ctx->pc = 0x1CA844u;
        goto label_1ca844;
    }
    ctx->pc = 0x1CA83Cu;
    SET_GPR_U32(ctx, 31, 0x1CA844u);
    ctx->pc = 0x1CE310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE310u, 0x1CA83Cu, 0x1CA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA844u;
label_1ca844:
    // 0x1ca844: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1ca844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
label_1ca848:
    // 0x1ca848: 0x27a30328  addiu       $v1, $sp, 0x328
    ctx->pc = 0x1ca848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_1ca84c:
    // 0x1ca84c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1ca84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1ca850:
    // 0x1ca850: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1ca854:
    if (ctx->pc == 0x1CA854u) {
        ctx->pc = 0x1CA858u;
        goto label_1ca858;
    }
    ctx->pc = 0x1CA850u;
    {
        const bool branch_taken_0x1ca850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca850) {
            ctx->pc = 0x1CA878u;
            goto label_1ca878;
        }
    }
    ctx->pc = 0x1CA858u;
label_1ca858:
    // 0x1ca858: 0x601021  addu        $v0, $v1, $zero
    ctx->pc = 0x1ca858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 0)));
label_1ca85c:
    // 0x1ca85c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1ca85cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1ca860:
    // 0x1ca860: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1ca860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1ca864:
    // 0x1ca864: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1ca864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1ca868:
    // 0x1ca868: 0x0  nop
    ctx->pc = 0x1ca868u;
    // NOP
label_1ca86c:
    // 0x1ca86c: 0x0  nop
    ctx->pc = 0x1ca86cu;
    // NOP
label_1ca870:
    // 0x1ca870: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1ca874:
    if (ctx->pc == 0x1CA874u) {
        ctx->pc = 0x1CA878u;
        goto label_1ca878;
    }
    ctx->pc = 0x1CA870u;
    {
        const bool branch_taken_0x1ca870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca870) {
            ctx->pc = 0x1CA85Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca85c;
        }
    }
    ctx->pc = 0x1CA878u;
label_1ca878:
    // 0x1ca878: 0xc7a00338  lwc1        $f0, 0x338($sp)
    ctx->pc = 0x1ca878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca87c:
    // 0x1ca87c: 0xe7a00328  swc1        $f0, 0x328($sp)
    ctx->pc = 0x1ca87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 808), bits); }
label_1ca880:
    // 0x1ca880: 0xc7a0033c  lwc1        $f0, 0x33C($sp)
    ctx->pc = 0x1ca880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca884:
    // 0x1ca884: 0xe7a0032c  swc1        $f0, 0x32C($sp)
    ctx->pc = 0x1ca884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 812), bits); }
label_1ca888:
    // 0x1ca888: 0xe7a00364  swc1        $f0, 0x364($sp)
    ctx->pc = 0x1ca888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
label_1ca88c:
    // 0x1ca88c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca88cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca890:
    // 0x1ca890: 0x27a20328  addiu       $v0, $sp, 0x328
    ctx->pc = 0x1ca890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_1ca894:
    // 0x1ca894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca898:
    // 0x1ca898: 0x27a60328  addiu       $a2, $sp, 0x328
    ctx->pc = 0x1ca898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 808));
label_1ca89c:
    // 0x1ca89c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ca89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8a0:
    // 0x1ca8a0: 0x8c6700b0  lw          $a3, 0xB0($v1)
    ctx->pc = 0x1ca8a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_1ca8a4:
    // 0x1ca8a4: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ca8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8a8:
    // 0x1ca8a8: 0xc104d64  jal         func_413590
label_1ca8ac:
    if (ctx->pc == 0x1CA8ACu) {
        ctx->pc = 0x1CA8B0u;
        goto label_1ca8b0;
    }
    ctx->pc = 0x1CA8A8u;
    SET_GPR_U32(ctx, 31, 0x1CA8B0u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CA8A8u, 0x1CA8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8B0u;
label_1ca8b0:
    // 0x1ca8b0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1ca8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca8b4:
    // 0x1ca8b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1ca8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8b8:
    // 0x1ca8b8: 0xc06479c  jal         func_191E70
label_1ca8bc:
    if (ctx->pc == 0x1CA8BCu) {
        ctx->pc = 0x1CA8C0u;
        goto label_1ca8c0;
    }
    ctx->pc = 0x1CA8B8u;
    SET_GPR_U32(ctx, 31, 0x1CA8C0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA8B8u, 0x1CA8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8C0u;
label_1ca8c0:
    // 0x1ca8c0: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1ca8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_1ca8c4:
    // 0x1ca8c4: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1ca8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca8c8:
    // 0x1ca8c8: 0x24a600a4  addiu       $a2, $a1, 0xA4
    ctx->pc = 0x1ca8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_1ca8cc:
    // 0x1ca8cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ca8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ca8d0:
    // 0x1ca8d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ca8d4:
    // 0x1ca8d4: 0xc05612c  jal         func_1584B0
label_1ca8d8:
    if (ctx->pc == 0x1CA8D8u) {
        ctx->pc = 0x1CA8DCu;
        goto label_1ca8dc;
    }
    ctx->pc = 0x1CA8D4u;
    SET_GPR_U32(ctx, 31, 0x1CA8DCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA8D4u, 0x1CA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8DCu;
label_1ca8dc:
    // 0x1ca8dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1ca8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca8e0:
    // 0x1ca8e0: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1ca8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_1ca8e4:
    // 0x1ca8e4: 0x7ba40220  lq          $a0, 0x220($sp)
    ctx->pc = 0x1ca8e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1ca8e8:
    // 0x1ca8e8: 0x7ba50210  lq          $a1, 0x210($sp)
    ctx->pc = 0x1ca8e8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1ca8ec:
    // 0x1ca8ec: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1ca8ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1ca8f0:
    // 0x1ca8f0: 0xc08c6c8  jal         func_231B20
label_1ca8f4:
    if (ctx->pc == 0x1CA8F4u) {
        ctx->pc = 0x1CA8F8u;
        goto label_1ca8f8;
    }
    ctx->pc = 0x1CA8F0u;
    SET_GPR_U32(ctx, 31, 0x1CA8F8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CA8F0u, 0x1CA8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA8F8u;
label_1ca8f8:
    // 0x1ca8f8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1ca8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1ca8fc:
    // 0x1ca8fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ca900:
    // 0x1ca900: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x1ca900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ca904:
    // 0x1ca904: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ca908:
    // 0x1ca908: 0xe7a00320  swc1        $f0, 0x320($sp)
    ctx->pc = 0x1ca908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
label_1ca90c:
    // 0x1ca90c: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1ca90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1ca910:
    // 0x1ca910: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ca910u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ca914:
    // 0x1ca914: 0xc7a10324  lwc1        $f1, 0x324($sp)
    ctx->pc = 0x1ca914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ca918:
    // 0x1ca918: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ca918u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ca91c:
    // 0x1ca91c: 0xe7a00324  swc1        $f0, 0x324($sp)
    ctx->pc = 0x1ca91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 804), bits); }
label_1ca920:
    // 0x1ca920: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca924:
    // 0x1ca924: 0x8c4600c8  lw          $a2, 0xC8($v0)
    ctx->pc = 0x1ca924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1ca928:
    // 0x1ca928: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ca928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ca92c:
    // 0x1ca92c: 0x10c2009c  beq         $a2, $v0, . + 4 + (0x9C << 2)
label_1ca930:
    if (ctx->pc == 0x1CA930u) {
        ctx->pc = 0x1CA934u;
        goto label_1ca934;
    }
    ctx->pc = 0x1CA92Cu;
    {
        const bool branch_taken_0x1ca92c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ca92c) {
            ctx->pc = 0x1CABA0u;
            goto label_1caba0;
        }
    }
    ctx->pc = 0x1CA934u;
label_1ca934:
    // 0x1ca934: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca938:
    // 0x1ca938: 0x309600ff  andi        $s6, $a0, 0xFF
    ctx->pc = 0x1ca938u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1ca93c:
    // 0x1ca93c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1ca93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca940:
    // 0x1ca940: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1ca940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1ca944:
    // 0x1ca944: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ca944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ca948:
    // 0x1ca948: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
label_1ca94c:
    if (ctx->pc == 0x1CA94Cu) {
        ctx->pc = 0x1CA950u;
        goto label_1ca950;
    }
    ctx->pc = 0x1CA948u;
    {
        const bool branch_taken_0x1ca948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ca948) {
            ctx->pc = 0x1CA968u;
            goto label_1ca968;
        }
    }
    ctx->pc = 0x1CA950u;
label_1ca950:
    // 0x1ca950: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1ca950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca954:
    // 0x1ca954: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x1ca954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_1ca958:
    // 0x1ca958: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ca958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ca95c:
    // 0x1ca95c: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
label_1ca960:
    if (ctx->pc == 0x1CA960u) {
        ctx->pc = 0x1CA964u;
        goto label_1ca964;
    }
    ctx->pc = 0x1CA95Cu;
    {
        const bool branch_taken_0x1ca95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca95c) {
            ctx->pc = 0x1CA968u;
            goto label_1ca968;
        }
    }
    ctx->pc = 0x1CA964u;
label_1ca964:
    // 0x1ca964: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1ca964u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca968:
    // 0x1ca968: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
label_1ca96c:
    if (ctx->pc == 0x1CA96Cu) {
        ctx->pc = 0x1CA970u;
        goto label_1ca970;
    }
    ctx->pc = 0x1CA968u;
    {
        const bool branch_taken_0x1ca968 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca968) {
            ctx->pc = 0x1CA980u;
            goto label_1ca980;
        }
    }
    ctx->pc = 0x1CA970u;
label_1ca970:
    // 0x1ca970: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca974:
    // 0x1ca974: 0x307500ff  andi        $s5, $v1, 0xFF
    ctx->pc = 0x1ca974u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1ca978:
    // 0x1ca978: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ca97c:
    if (ctx->pc == 0x1CA97Cu) {
        ctx->pc = 0x1CA980u;
        goto label_1ca980;
    }
    ctx->pc = 0x1CA978u;
    {
        const bool branch_taken_0x1ca978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca978) {
            ctx->pc = 0x1CA984u;
            goto label_1ca984;
        }
    }
    ctx->pc = 0x1CA980u;
label_1ca980:
    // 0x1ca980: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ca980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca984:
    // 0x1ca984: 0x32b100ff  andi        $s1, $s5, 0xFF
    ctx->pc = 0x1ca984u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_1ca988:
    // 0x1ca988: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_1ca98c:
    if (ctx->pc == 0x1CA98Cu) {
        ctx->pc = 0x1CA990u;
        goto label_1ca990;
    }
    ctx->pc = 0x1CA988u;
    {
        const bool branch_taken_0x1ca988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca988) {
            ctx->pc = 0x1CA99Cu;
            goto label_1ca99c;
        }
    }
    ctx->pc = 0x1CA990u;
label_1ca990:
    // 0x1ca990: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x1ca990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ca994:
    // 0x1ca994: 0x10000003  b           . + 4 + (0x3 << 2)
label_1ca998:
    if (ctx->pc == 0x1CA998u) {
        ctx->pc = 0x1CA99Cu;
        goto label_1ca99c;
    }
    ctx->pc = 0x1CA994u;
    {
        const bool branch_taken_0x1ca994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca994) {
            ctx->pc = 0x1CA9A4u;
            goto label_1ca9a4;
        }
    }
    ctx->pc = 0x1CA99Cu;
label_1ca99c:
    // 0x1ca99c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ca99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ca9a0:
    // 0x1ca9a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1ca9a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9a4:
    // 0x1ca9a4: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x1ca9a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9a8:
    // 0x1ca9a8: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca9ac:
    // 0x1ca9ac: 0xc06479c  jal         func_191E70
label_1ca9b0:
    if (ctx->pc == 0x1CA9B0u) {
        ctx->pc = 0x1CA9B4u;
        goto label_1ca9b4;
    }
    ctx->pc = 0x1CA9ACu;
    SET_GPR_U32(ctx, 31, 0x1CA9B4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA9ACu, 0x1CA9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9B4u;
label_1ca9b4:
    // 0x1ca9b4: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1ca9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_1ca9b8:
    // 0x1ca9b8: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca9bc:
    // 0x1ca9bc: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x1ca9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_1ca9c0:
    // 0x1ca9c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ca9c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9c4:
    // 0x1ca9c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ca9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ca9c8:
    // 0x1ca9c8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ca9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ca9cc:
    // 0x1ca9cc: 0xc05612c  jal         func_1584B0
label_1ca9d0:
    if (ctx->pc == 0x1CA9D0u) {
        ctx->pc = 0x1CA9D4u;
        goto label_1ca9d4;
    }
    ctx->pc = 0x1CA9CCu;
    SET_GPR_U32(ctx, 31, 0x1CA9D4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CA9CCu, 0x1CA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9D4u;
label_1ca9d4:
    // 0x1ca9d4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ca9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ca9d8:
    // 0x1ca9d8: 0x11202b  sltu        $a0, $zero, $s1
    ctx->pc = 0x1ca9d8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1ca9dc:
    // 0x1ca9dc: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x1ca9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_1ca9e0:
    // 0x1ca9e0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1ca9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_1ca9e4:
    // 0x1ca9e4: 0x7ba40200  lq          $a0, 0x200($sp)
    ctx->pc = 0x1ca9e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1ca9e8:
    // 0x1ca9e8: 0x7ba601f0  lq          $a2, 0x1F0($sp)
    ctx->pc = 0x1ca9e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1ca9ec:
    // 0x1ca9ec: 0xc08c8dc  jal         func_232370
label_1ca9f0:
    if (ctx->pc == 0x1CA9F0u) {
        ctx->pc = 0x1CA9F4u;
        goto label_1ca9f4;
    }
    ctx->pc = 0x1CA9ECu;
    SET_GPR_U32(ctx, 31, 0x1CA9F4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CA9ECu, 0x1CA9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA9F4u;
label_1ca9f4:
    // 0x1ca9f4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1ca9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1ca9f8:
    // 0x1ca9f8: 0xc06479c  jal         func_191E70
label_1ca9fc:
    if (ctx->pc == 0x1CA9FCu) {
        ctx->pc = 0x1CAA00u;
        goto label_1caa00;
    }
    ctx->pc = 0x1CA9F8u;
    SET_GPR_U32(ctx, 31, 0x1CAA00u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CA9F8u, 0x1CAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA00u;
label_1caa00:
    // 0x1caa00: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1caa00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_1caa04:
    // 0x1caa04: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1caa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caa08:
    // 0x1caa08: 0x244500a4  addiu       $a1, $v0, 0xA4
    ctx->pc = 0x1caa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1caa0c:
    // 0x1caa0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1caa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1caa10:
    // 0x1caa10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1caa10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1caa14:
    // 0x1caa14: 0xc05612c  jal         func_1584B0
label_1caa18:
    if (ctx->pc == 0x1CAA18u) {
        ctx->pc = 0x1CAA1Cu;
        goto label_1caa1c;
    }
    ctx->pc = 0x1CAA14u;
    SET_GPR_U32(ctx, 31, 0x1CAA1Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAA14u, 0x1CAA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA1Cu;
label_1caa1c:
    // 0x1caa1c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1caa20:
    // 0x1caa20: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1caa20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_1caa24:
    // 0x1caa24: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x1caa24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1caa28:
    // 0x1caa28: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x1caa28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1caa2c:
    // 0x1caa2c: 0x7ba401e0  lq          $a0, 0x1E0($sp)
    ctx->pc = 0x1caa2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1caa30:
    // 0x1caa30: 0x7ba501d0  lq          $a1, 0x1D0($sp)
    ctx->pc = 0x1caa30u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1caa34:
    // 0x1caa34: 0xc08c8dc  jal         func_232370
label_1caa38:
    if (ctx->pc == 0x1CAA38u) {
        ctx->pc = 0x1CAA3Cu;
        goto label_1caa3c;
    }
    ctx->pc = 0x1CAA34u;
    SET_GPR_U32(ctx, 31, 0x1CAA3Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAA34u, 0x1CAA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA3Cu;
label_1caa3c:
    // 0x1caa3c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caa40:
    // 0x1caa40: 0xc06479c  jal         func_191E70
label_1caa44:
    if (ctx->pc == 0x1CAA44u) {
        ctx->pc = 0x1CAA48u;
        goto label_1caa48;
    }
    ctx->pc = 0x1CAA40u;
    SET_GPR_U32(ctx, 31, 0x1CAA48u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAA40u, 0x1CAA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA48u;
label_1caa48:
    // 0x1caa48: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1caa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_1caa4c:
    // 0x1caa4c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1caa4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caa50:
    // 0x1caa50: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1caa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1caa54:
    // 0x1caa54: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1caa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1caa58:
    // 0x1caa58: 0xc05612c  jal         func_1584B0
label_1caa5c:
    if (ctx->pc == 0x1CAA5Cu) {
        ctx->pc = 0x1CAA60u;
        goto label_1caa60;
    }
    ctx->pc = 0x1CAA58u;
    SET_GPR_U32(ctx, 31, 0x1CAA60u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAA58u, 0x1CAA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA60u;
label_1caa60:
    // 0x1caa60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1caa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1caa64:
    // 0x1caa64: 0x7ba401c0  lq          $a0, 0x1C0($sp)
    ctx->pc = 0x1caa64u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1caa68:
    // 0x1caa68: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1caa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1caa6c:
    // 0x1caa6c: 0xc08c8dc  jal         func_232370
label_1caa70:
    if (ctx->pc == 0x1CAA70u) {
        ctx->pc = 0x1CAA74u;
        goto label_1caa74;
    }
    ctx->pc = 0x1CAA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAA74u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAA6Cu, 0x1CAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA74u;
label_1caa74:
    // 0x1caa74: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caa78:
    // 0x1caa78: 0xc06479c  jal         func_191E70
label_1caa7c:
    if (ctx->pc == 0x1CAA7Cu) {
        ctx->pc = 0x1CAA80u;
        goto label_1caa80;
    }
    ctx->pc = 0x1CAA78u;
    SET_GPR_U32(ctx, 31, 0x1CAA80u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAA78u, 0x1CAA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA80u;
label_1caa80:
    // 0x1caa80: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1caa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_1caa84:
    // 0x1caa84: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caa88:
    // 0x1caa88: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1caa88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1caa8c:
    // 0x1caa8c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1caa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1caa90:
    // 0x1caa90: 0xc05612c  jal         func_1584B0
label_1caa94:
    if (ctx->pc == 0x1CAA94u) {
        ctx->pc = 0x1CAA98u;
        goto label_1caa98;
    }
    ctx->pc = 0x1CAA90u;
    SET_GPR_U32(ctx, 31, 0x1CAA98u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAA90u, 0x1CAA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAA98u;
label_1caa98:
    // 0x1caa98: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1caa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1caa9c:
    // 0x1caa9c: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x1caa9cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1caaa0:
    // 0x1caaa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1caaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1caaa4:
    // 0x1caaa4: 0xc08c8dc  jal         func_232370
label_1caaa8:
    if (ctx->pc == 0x1CAAA8u) {
        ctx->pc = 0x1CAAACu;
        goto label_1caaac;
    }
    ctx->pc = 0x1CAAA4u;
    SET_GPR_U32(ctx, 31, 0x1CAAACu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAAA4u, 0x1CAAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAACu;
label_1caaac:
    // 0x1caaac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1caaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1caab0:
    // 0x1caab0: 0x10000036  b           . + 4 + (0x36 << 2)
label_1caab4:
    if (ctx->pc == 0x1CAAB4u) {
        ctx->pc = 0x1CAAB8u;
        goto label_1caab8;
    }
    ctx->pc = 0x1CAAB0u;
    {
        const bool branch_taken_0x1caab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caab0) {
            ctx->pc = 0x1CAB8Cu;
            goto label_1cab8c;
        }
    }
    ctx->pc = 0x1CAAB8u;
label_1caab8:
    // 0x1caab8: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caabc:
    // 0x1caabc: 0xc06479c  jal         func_191E70
label_1caac0:
    if (ctx->pc == 0x1CAAC0u) {
        ctx->pc = 0x1CAAC4u;
        goto label_1caac4;
    }
    ctx->pc = 0x1CAABCu;
    SET_GPR_U32(ctx, 31, 0x1CAAC4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAABCu, 0x1CAAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAAC4u;
label_1caac4:
    // 0x1caac4: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1caac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_1caac8:
    // 0x1caac8: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1caac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caacc:
    // 0x1caacc: 0x2f02821  addu        $a1, $s7, $s0
    ctx->pc = 0x1caaccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1caad0:
    // 0x1caad0: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1caad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_1caad4:
    // 0x1caad4: 0xc05612c  jal         func_1584B0
label_1caad8:
    if (ctx->pc == 0x1CAAD8u) {
        ctx->pc = 0x1CAADCu;
        goto label_1caadc;
    }
    ctx->pc = 0x1CAAD4u;
    SET_GPR_U32(ctx, 31, 0x1CAADCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAAD4u, 0x1CAADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAADCu;
label_1caadc:
    // 0x1caadc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1caadcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1caae0:
    // 0x1caae0: 0xc7a20340  lwc1        $f2, 0x340($sp)
    ctx->pc = 0x1caae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1caae4:
    // 0x1caae4: 0xc7a10328  lwc1        $f1, 0x328($sp)
    ctx->pc = 0x1caae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1caae8:
    // 0x1caae8: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x1caae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1caaec:
    // 0x1caaec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1caaecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1caaf0:
    // 0x1caaf0: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1caaf0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1caaf4:
    // 0x1caaf4: 0xc7a20344  lwc1        $f2, 0x344($sp)
    ctx->pc = 0x1caaf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1caaf8:
    // 0x1caaf8: 0xc7a0032c  lwc1        $f0, 0x32C($sp)
    ctx->pc = 0x1caaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1caafc:
    // 0x1caafc: 0xc7a10324  lwc1        $f1, 0x324($sp)
    ctx->pc = 0x1caafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cab00:
    // 0x1cab00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cab00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cab04:
    // 0x1cab04: 0x46001340  add.s       $f13, $f2, $f0
    ctx->pc = 0x1cab04u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cab08:
    // 0x1cab08: 0x7ba401a0  lq          $a0, 0x1A0($sp)
    ctx->pc = 0x1cab08u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1cab0c:
    // 0x1cab0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cab0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cab10:
    // 0x1cab10: 0xc08c208  jal         func_230820
label_1cab14:
    if (ctx->pc == 0x1CAB14u) {
        ctx->pc = 0x1CAB18u;
        goto label_1cab18;
    }
    ctx->pc = 0x1CAB10u;
    SET_GPR_U32(ctx, 31, 0x1CAB18u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CAB10u, 0x1CAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB18u;
label_1cab18:
    // 0x1cab18: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cab1c:
    // 0x1cab1c: 0xc06479c  jal         func_191E70
label_1cab20:
    if (ctx->pc == 0x1CAB20u) {
        ctx->pc = 0x1CAB24u;
        goto label_1cab24;
    }
    ctx->pc = 0x1CAB1Cu;
    SET_GPR_U32(ctx, 31, 0x1CAB24u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAB1Cu, 0x1CAB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB24u;
label_1cab24:
    // 0x1cab24: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1cab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_1cab28:
    // 0x1cab28: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cab2c:
    // 0x1cab2c: 0x2f02821  addu        $a1, $s7, $s0
    ctx->pc = 0x1cab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_1cab30:
    // 0x1cab30: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cab30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cab34:
    // 0x1cab34: 0xc05612c  jal         func_1584B0
label_1cab38:
    if (ctx->pc == 0x1CAB38u) {
        ctx->pc = 0x1CAB3Cu;
        goto label_1cab3c;
    }
    ctx->pc = 0x1CAB34u;
    SET_GPR_U32(ctx, 31, 0x1CAB3Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAB34u, 0x1CAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB3Cu;
label_1cab3c:
    // 0x1cab3c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cab40:
    // 0x1cab40: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cab40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1cab44:
    // 0x1cab44: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cab44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cab48:
    // 0x1cab48: 0xc7a00394  lwc1        $f0, 0x394($sp)
    ctx->pc = 0x1cab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cab4c:
    // 0x1cab4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cab4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cab50:
    // 0x1cab50: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1cab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cab54:
    // 0x1cab54: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1cab54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cab58:
    // 0x1cab58: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cab5c:
    // 0x1cab5c: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1cab5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cab60:
    // 0x1cab60: 0x46001040  add.s       $f1, $f2, $f0
    ctx->pc = 0x1cab60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cab64:
    // 0x1cab64: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1cab64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1cab68:
    // 0x1cab68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cab68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cab6c:
    // 0x1cab6c: 0x0  nop
    ctx->pc = 0x1cab6cu;
    // NOP
label_1cab70:
    // 0x1cab70: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1cab70u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cab74:
    // 0x1cab74: 0x7ba40190  lq          $a0, 0x190($sp)
    ctx->pc = 0x1cab74u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1cab78:
    // 0x1cab78: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1cab78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1cab7c:
    // 0x1cab7c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cab7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cab80:
    // 0x1cab80: 0xc08c64c  jal         func_231930
label_1cab84:
    if (ctx->pc == 0x1CAB84u) {
        ctx->pc = 0x1CAB88u;
        goto label_1cab88;
    }
    ctx->pc = 0x1CAB80u;
    SET_GPR_U32(ctx, 31, 0x1CAB88u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CAB80u, 0x1CAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAB88u;
label_1cab88:
    // 0x1cab88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cab88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cab8c:
    // 0x1cab8c: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x1cab8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1cab90:
    // 0x1cab90: 0x1440ffc9  bnez        $v0, . + 4 + (-0x37 << 2)
label_1cab94:
    if (ctx->pc == 0x1CAB94u) {
        ctx->pc = 0x1CAB98u;
        goto label_1cab98;
    }
    ctx->pc = 0x1CAB90u;
    {
        const bool branch_taken_0x1cab90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cab90) {
            ctx->pc = 0x1CAAB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caab8;
        }
    }
    ctx->pc = 0x1CAB98u;
label_1cab98:
    // 0x1cab98: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_1cab9c:
    if (ctx->pc == 0x1CAB9Cu) {
        ctx->pc = 0x1CABA0u;
        goto label_1caba0;
    }
    ctx->pc = 0x1CAB98u;
    {
        const bool branch_taken_0x1cab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cab98) {
            ctx->pc = 0x1CAE9Cu;
            goto label_1cae9c;
        }
    }
    ctx->pc = 0x1CABA0u;
label_1caba0:
    // 0x1caba0: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caba4:
    // 0x1caba4: 0xc06479c  jal         func_191E70
label_1caba8:
    if (ctx->pc == 0x1CABA8u) {
        ctx->pc = 0x1CABACu;
        goto label_1cabac;
    }
    ctx->pc = 0x1CABA4u;
    SET_GPR_U32(ctx, 31, 0x1CABACu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CABA4u, 0x1CABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABACu;
label_1cabac:
    // 0x1cabac: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1cabacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_1cabb0:
    // 0x1cabb0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cabb4:
    // 0x1cabb4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cabb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cabb8:
    // 0x1cabb8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cabb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cabbc:
    // 0x1cabbc: 0xc05612c  jal         func_1584B0
label_1cabc0:
    if (ctx->pc == 0x1CABC0u) {
        ctx->pc = 0x1CABC4u;
        goto label_1cabc4;
    }
    ctx->pc = 0x1CABBCu;
    SET_GPR_U32(ctx, 31, 0x1CABC4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CABBCu, 0x1CABC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABC4u;
label_1cabc4:
    // 0x1cabc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cabc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cabc8:
    // 0x1cabc8: 0x7ba40180  lq          $a0, 0x180($sp)
    ctx->pc = 0x1cabc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1cabcc:
    // 0x1cabcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cabccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cabd0:
    // 0x1cabd0: 0xc08c8dc  jal         func_232370
label_1cabd4:
    if (ctx->pc == 0x1CABD4u) {
        ctx->pc = 0x1CABD8u;
        goto label_1cabd8;
    }
    ctx->pc = 0x1CABD0u;
    SET_GPR_U32(ctx, 31, 0x1CABD8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CABD0u, 0x1CABD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABD8u;
label_1cabd8:
    // 0x1cabd8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cabd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cabdc:
    // 0x1cabdc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cabdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cabe0:
    // 0x1cabe0: 0xc06479c  jal         func_191E70
label_1cabe4:
    if (ctx->pc == 0x1CABE4u) {
        ctx->pc = 0x1CABE8u;
        goto label_1cabe8;
    }
    ctx->pc = 0x1CABE0u;
    SET_GPR_U32(ctx, 31, 0x1CABE8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CABE0u, 0x1CABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CABE8u;
label_1cabe8:
    // 0x1cabe8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1cabe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1cabec:
    // 0x1cabec: 0x8fa703a0  lw          $a3, 0x3A0($sp)
    ctx->pc = 0x1cabecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cabf0:
    // 0x1cabf0: 0x24e400a4  addiu       $a0, $a3, 0xA4
    ctx->pc = 0x1cabf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 164));
label_1cabf4:
    // 0x1cabf4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cabf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cabf8:
    // 0x1cabf8: 0xc05612c  jal         func_1584B0
label_1cabfc:
    if (ctx->pc == 0x1CABFCu) {
        ctx->pc = 0x1CAC00u;
        goto label_1cac00;
    }
    ctx->pc = 0x1CABF8u;
    SET_GPR_U32(ctx, 31, 0x1CAC00u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CABF8u, 0x1CAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC00u;
label_1cac00:
    // 0x1cac00: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1cac00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_1cac04:
    // 0x1cac04: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x1cac04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1cac08:
    // 0x1cac08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cac08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cac0c:
    // 0x1cac0c: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x1cac0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1cac10:
    // 0x1cac10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cac14:
    // 0x1cac14: 0xc08c8dc  jal         func_232370
label_1cac18:
    if (ctx->pc == 0x1CAC18u) {
        ctx->pc = 0x1CAC1Cu;
        goto label_1cac1c;
    }
    ctx->pc = 0x1CAC14u;
    SET_GPR_U32(ctx, 31, 0x1CAC1Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAC14u, 0x1CAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC1Cu;
label_1cac1c:
    // 0x1cac1c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cac20:
    // 0x1cac20: 0xc06479c  jal         func_191E70
label_1cac24:
    if (ctx->pc == 0x1CAC24u) {
        ctx->pc = 0x1CAC28u;
        goto label_1cac28;
    }
    ctx->pc = 0x1CAC20u;
    SET_GPR_U32(ctx, 31, 0x1CAC28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAC20u, 0x1CAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC28u;
label_1cac28:
    // 0x1cac28: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cac28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cac2c:
    // 0x1cac2c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cac30:
    // 0x1cac30: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x1cac30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_1cac34:
    // 0x1cac34: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1cac34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_1cac38:
    // 0x1cac38: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1cac38u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1cac3c:
    // 0x1cac3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cac3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cac40:
    // 0x1cac40: 0xc05612c  jal         func_1584B0
label_1cac44:
    if (ctx->pc == 0x1CAC44u) {
        ctx->pc = 0x1CAC48u;
        goto label_1cac48;
    }
    ctx->pc = 0x1CAC40u;
    SET_GPR_U32(ctx, 31, 0x1CAC48u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAC40u, 0x1CAC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC48u;
label_1cac48:
    // 0x1cac48: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cac48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cac4c:
    // 0x1cac4c: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x1cac4cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1cac50:
    // 0x1cac50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cac50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac54:
    // 0x1cac54: 0xc08c8dc  jal         func_232370
label_1cac58:
    if (ctx->pc == 0x1CAC58u) {
        ctx->pc = 0x1CAC5Cu;
        goto label_1cac5c;
    }
    ctx->pc = 0x1CAC54u;
    SET_GPR_U32(ctx, 31, 0x1CAC5Cu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAC54u, 0x1CAC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC5Cu;
label_1cac5c:
    // 0x1cac5c: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cac60:
    // 0x1cac60: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cac60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cac64:
    // 0x1cac64: 0xc06479c  jal         func_191E70
label_1cac68:
    if (ctx->pc == 0x1CAC68u) {
        ctx->pc = 0x1CAC6Cu;
        goto label_1cac6c;
    }
    ctx->pc = 0x1CAC64u;
    SET_GPR_U32(ctx, 31, 0x1CAC6Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAC64u, 0x1CAC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC6Cu;
label_1cac6c:
    // 0x1cac6c: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1cac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1cac70:
    // 0x1cac70: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cac74:
    // 0x1cac74: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x1cac74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_1cac78:
    // 0x1cac78: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1cac78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1cac7c:
    // 0x1cac7c: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1cac7cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cac80:
    // 0x1cac80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cac80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cac84:
    // 0x1cac84: 0xc05612c  jal         func_1584B0
label_1cac88:
    if (ctx->pc == 0x1CAC88u) {
        ctx->pc = 0x1CAC8Cu;
        goto label_1cac8c;
    }
    ctx->pc = 0x1CAC84u;
    SET_GPR_U32(ctx, 31, 0x1CAC8Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAC84u, 0x1CAC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAC8Cu;
label_1cac8c:
    // 0x1cac8c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cac8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cac90:
    // 0x1cac90: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x1cac90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1cac94:
    // 0x1cac94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cac94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cac98:
    // 0x1cac98: 0xc08c8dc  jal         func_232370
label_1cac9c:
    if (ctx->pc == 0x1CAC9Cu) {
        ctx->pc = 0x1CACA0u;
        goto label_1caca0;
    }
    ctx->pc = 0x1CAC98u;
    SET_GPR_U32(ctx, 31, 0x1CACA0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CAC98u, 0x1CACA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACA0u;
label_1caca0:
    // 0x1caca0: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1caca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caca4:
    // 0x1caca4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1caca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1caca8:
    // 0x1caca8: 0xc06479c  jal         func_191E70
label_1cacac:
    if (ctx->pc == 0x1CACACu) {
        ctx->pc = 0x1CACB0u;
        goto label_1cacb0;
    }
    ctx->pc = 0x1CACA8u;
    SET_GPR_U32(ctx, 31, 0x1CACB0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CACA8u, 0x1CACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACB0u;
label_1cacb0:
    // 0x1cacb0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1cacb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1cacb4:
    // 0x1cacb4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cacb8:
    // 0x1cacb8: 0x248200a4  addiu       $v0, $a0, 0xA4
    ctx->pc = 0x1cacb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_1cacbc:
    // 0x1cacbc: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1cacbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1cacc0:
    // 0x1cacc0: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1cacc0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1cacc4:
    // 0x1cacc4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cacc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cacc8:
    // 0x1cacc8: 0xc05612c  jal         func_1584B0
label_1caccc:
    if (ctx->pc == 0x1CACCCu) {
        ctx->pc = 0x1CACD0u;
        goto label_1cacd0;
    }
    ctx->pc = 0x1CACC8u;
    SET_GPR_U32(ctx, 31, 0x1CACD0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CACC8u, 0x1CACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACD0u;
label_1cacd0:
    // 0x1cacd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cacd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cacd4:
    // 0x1cacd4: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x1cacd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1cacd8:
    // 0x1cacd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cacd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cacdc:
    // 0x1cacdc: 0xc08c8dc  jal         func_232370
label_1cace0:
    if (ctx->pc == 0x1CACE0u) {
        ctx->pc = 0x1CACE4u;
        goto label_1cace4;
    }
    ctx->pc = 0x1CACDCu;
    SET_GPR_U32(ctx, 31, 0x1CACE4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CACDCu, 0x1CACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACE4u;
label_1cace4:
    // 0x1cace4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cace8:
    // 0x1cace8: 0xc06479c  jal         func_191E70
label_1cacec:
    if (ctx->pc == 0x1CACECu) {
        ctx->pc = 0x1CACF0u;
        goto label_1cacf0;
    }
    ctx->pc = 0x1CACE8u;
    SET_GPR_U32(ctx, 31, 0x1CACF0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CACE8u, 0x1CACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CACF0u;
label_1cacf0:
    // 0x1cacf0: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1cacf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1cacf4:
    // 0x1cacf4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cacf8:
    // 0x1cacf8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cacfc:
    // 0x1cacfc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cacfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cad00:
    // 0x1cad00: 0xc05612c  jal         func_1584B0
label_1cad04:
    if (ctx->pc == 0x1CAD04u) {
        ctx->pc = 0x1CAD08u;
        goto label_1cad08;
    }
    ctx->pc = 0x1CAD00u;
    SET_GPR_U32(ctx, 31, 0x1CAD08u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAD00u, 0x1CAD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD08u;
label_1cad08:
    // 0x1cad08: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cad08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cad0c:
    // 0x1cad0c: 0xc7a20340  lwc1        $f2, 0x340($sp)
    ctx->pc = 0x1cad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cad10:
    // 0x1cad10: 0xc7a10328  lwc1        $f1, 0x328($sp)
    ctx->pc = 0x1cad10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cad14:
    // 0x1cad14: 0xc7a00320  lwc1        $f0, 0x320($sp)
    ctx->pc = 0x1cad14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cad18:
    // 0x1cad18: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cad18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cad1c:
    // 0x1cad1c: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x1cad1cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cad20:
    // 0x1cad20: 0xc7a20344  lwc1        $f2, 0x344($sp)
    ctx->pc = 0x1cad20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cad24:
    // 0x1cad24: 0xc7a1032c  lwc1        $f1, 0x32C($sp)
    ctx->pc = 0x1cad24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cad28:
    // 0x1cad28: 0xc7a00324  lwc1        $f0, 0x324($sp)
    ctx->pc = 0x1cad28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cad2c:
    // 0x1cad2c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cad2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cad30:
    // 0x1cad30: 0x46001340  add.s       $f13, $f2, $f0
    ctx->pc = 0x1cad30u;
    ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1cad34:
    // 0x1cad34: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1cad34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1cad38:
    // 0x1cad38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cad38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cad3c:
    // 0x1cad3c: 0xc08c208  jal         func_230820
label_1cad40:
    if (ctx->pc == 0x1CAD40u) {
        ctx->pc = 0x1CAD44u;
        goto label_1cad44;
    }
    ctx->pc = 0x1CAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1CAD44u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CAD3Cu, 0x1CAD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD44u;
label_1cad44:
    // 0x1cad44: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cad44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cad48:
    // 0x1cad48: 0xc06479c  jal         func_191E70
label_1cad4c:
    if (ctx->pc == 0x1CAD4Cu) {
        ctx->pc = 0x1CAD50u;
        goto label_1cad50;
    }
    ctx->pc = 0x1CAD48u;
    SET_GPR_U32(ctx, 31, 0x1CAD50u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAD48u, 0x1CAD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD50u;
label_1cad50:
    // 0x1cad50: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1cad50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1cad54:
    // 0x1cad54: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cad58:
    // 0x1cad58: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cad58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cad5c:
    // 0x1cad5c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cad60:
    // 0x1cad60: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1cad60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1cad64:
    // 0x1cad64: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x1cad64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cad68:
    // 0x1cad68: 0xc05612c  jal         func_1584B0
label_1cad6c:
    if (ctx->pc == 0x1CAD6Cu) {
        ctx->pc = 0x1CAD70u;
        goto label_1cad70;
    }
    ctx->pc = 0x1CAD68u;
    SET_GPR_U32(ctx, 31, 0x1CAD70u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAD68u, 0x1CAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAD70u;
label_1cad70:
    // 0x1cad70: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cad74:
    // 0x1cad74: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1cad78:
    // 0x1cad78: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cad78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cad7c:
    // 0x1cad7c: 0xc7ae0394  lwc1        $f14, 0x394($sp)
    ctx->pc = 0x1cad7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cad80:
    // 0x1cad80: 0x460e6bc2  mul.s       $f15, $f13, $f14
    ctx->pc = 0x1cad80u;
    ctx->f[15] = FPU_MUL_S(ctx->f[13], ctx->f[14]);
label_1cad84:
    // 0x1cad84: 0xc78c80b0  lwc1        $f12, -0x7F50($gp)
    ctx->pc = 0x1cad84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cad88:
    // 0x1cad88: 0x460c7b43  div.s       $f13, $f15, $f12
    ctx->pc = 0x1cad88u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[15], ctx->f[12]); }
label_1cad8c:
    // 0x1cad8c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cad8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cad90:
    // 0x1cad90: 0xc44e00b4  lwc1        $f14, 0xB4($v0)
    ctx->pc = 0x1cad90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cad94:
    // 0x1cad94: 0x460e6bc0  add.s       $f15, $f13, $f14
    ctx->pc = 0x1cad94u;
    ctx->f[15] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
label_1cad98:
    // 0x1cad98: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_1cad9c:
    // 0x1cad9c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cad9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cada0:
    // 0x1cada0: 0x0  nop
    ctx->pc = 0x1cada0u;
    // NOP
label_1cada4:
    // 0x1cada4: 0x46007b01  sub.s       $f12, $f15, $f0
    ctx->pc = 0x1cada4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_1cada8:
    // 0x1cada8: 0x7ba400e0  lq          $a0, 0xE0($sp)
    ctx->pc = 0x1cada8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1cadac:
    // 0x1cadac: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1cadb0:
    // 0x1cadb0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cadb4:
    // 0x1cadb4: 0xc08c64c  jal         func_231930
label_1cadb8:
    if (ctx->pc == 0x1CADB8u) {
        ctx->pc = 0x1CADBCu;
        goto label_1cadbc;
    }
    ctx->pc = 0x1CADB4u;
    SET_GPR_U32(ctx, 31, 0x1CADBCu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CADB4u, 0x1CADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADBCu;
label_1cadbc:
    // 0x1cadbc: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cadc0:
    // 0x1cadc0: 0xc06479c  jal         func_191E70
label_1cadc4:
    if (ctx->pc == 0x1CADC4u) {
        ctx->pc = 0x1CADC8u;
        goto label_1cadc8;
    }
    ctx->pc = 0x1CADC0u;
    SET_GPR_U32(ctx, 31, 0x1CADC8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CADC0u, 0x1CADC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADC8u;
label_1cadc8:
    // 0x1cadc8: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1cadc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1cadcc:
    // 0x1cadcc: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cadccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cadd0:
    // 0x1cadd0: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cadd4:
    // 0x1cadd4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cadd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cadd8:
    // 0x1cadd8: 0xc05612c  jal         func_1584B0
label_1caddc:
    if (ctx->pc == 0x1CADDCu) {
        ctx->pc = 0x1CADE0u;
        goto label_1cade0;
    }
    ctx->pc = 0x1CADD8u;
    SET_GPR_U32(ctx, 31, 0x1CADE0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CADD8u, 0x1CADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CADE0u;
label_1cade0:
    // 0x1cade0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cade4:
    // 0x1cade4: 0xc7ad0340  lwc1        $f13, 0x340($sp)
    ctx->pc = 0x1cade4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cade8:
    // 0x1cade8: 0xc7ae0328  lwc1        $f14, 0x328($sp)
    ctx->pc = 0x1cade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cadec:
    // 0x1cadec: 0xc7af0320  lwc1        $f15, 0x320($sp)
    ctx->pc = 0x1cadecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cadf0:
    // 0x1cadf0: 0x460f7301  sub.s       $f12, $f14, $f15
    ctx->pc = 0x1cadf0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
label_1cadf4:
    // 0x1cadf4: 0x460c6840  add.s       $f1, $f13, $f12
    ctx->pc = 0x1cadf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[12]);
label_1cadf8:
    // 0x1cadf8: 0xc7ae0344  lwc1        $f14, 0x344($sp)
    ctx->pc = 0x1cadf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cadfc:
    // 0x1cadfc: 0xc7af032c  lwc1        $f15, 0x32C($sp)
    ctx->pc = 0x1cadfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cae00:
    // 0x1cae00: 0xc7a00324  lwc1        $f0, 0x324($sp)
    ctx->pc = 0x1cae00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cae04:
    // 0x1cae04: 0x46007b01  sub.s       $f12, $f15, $f0
    ctx->pc = 0x1cae04u;
    ctx->f[12] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_1cae08:
    // 0x1cae08: 0x460c7340  add.s       $f13, $f14, $f12
    ctx->pc = 0x1cae08u;
    ctx->f[13] = FPU_ADD_S(ctx->f[14], ctx->f[12]);
label_1cae0c:
    // 0x1cae0c: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x1cae0cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cae10:
    // 0x1cae10: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cae10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1cae14:
    // 0x1cae14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cae14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cae18:
    // 0x1cae18: 0xc08c208  jal         func_230820
label_1cae1c:
    if (ctx->pc == 0x1CAE1Cu) {
        ctx->pc = 0x1CAE20u;
        goto label_1cae20;
    }
    ctx->pc = 0x1CAE18u;
    SET_GPR_U32(ctx, 31, 0x1CAE20u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CAE18u, 0x1CAE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE20u;
label_1cae20:
    // 0x1cae20: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cae24:
    // 0x1cae24: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1cae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1cae28:
    // 0x1cae28: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1cae28u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cae2c:
    // 0x1cae2c: 0xc06479c  jal         func_191E70
label_1cae30:
    if (ctx->pc == 0x1CAE30u) {
        ctx->pc = 0x1CAE34u;
        goto label_1cae34;
    }
    ctx->pc = 0x1CAE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CAE34u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CAE2Cu, 0x1CAE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE34u;
label_1cae34:
    // 0x1cae34: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1cae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1cae38:
    // 0x1cae38: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cae38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cae3c:
    // 0x1cae3c: 0x248400a4  addiu       $a0, $a0, 0xA4
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
label_1cae40:
    // 0x1cae40: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cae44:
    // 0x1cae44: 0xc05612c  jal         func_1584B0
label_1cae48:
    if (ctx->pc == 0x1CAE48u) {
        ctx->pc = 0x1CAE4Cu;
        goto label_1cae4c;
    }
    ctx->pc = 0x1CAE44u;
    SET_GPR_U32(ctx, 31, 0x1CAE4Cu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CAE44u, 0x1CAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE4Cu;
label_1cae4c:
    // 0x1cae4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cae50:
    // 0x1cae50: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cae50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1cae54:
    // 0x1cae54: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cae54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cae58:
    // 0x1cae58: 0xc7af0394  lwc1        $f15, 0x394($sp)
    ctx->pc = 0x1cae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cae5c:
    // 0x1cae5c: 0x460f73c2  mul.s       $f15, $f14, $f15
    ctx->pc = 0x1cae5cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
label_1cae60:
    // 0x1cae60: 0xc78c80b0  lwc1        $f12, -0x7F50($gp)
    ctx->pc = 0x1cae60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cae64:
    // 0x1cae64: 0x460c7b43  div.s       $f13, $f15, $f12
    ctx->pc = 0x1cae64u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[15], ctx->f[12]); }
label_1cae68:
    // 0x1cae68: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cae68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cae6c:
    // 0x1cae6c: 0xc4ae00b4  lwc1        $f14, 0xB4($a1)
    ctx->pc = 0x1cae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cae70:
    // 0x1cae70: 0x460e6880  add.s       $f2, $f13, $f14
    ctx->pc = 0x1cae70u;
    ctx->f[2] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
label_1cae74:
    // 0x1cae74: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1cae74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1cae78:
    // 0x1cae78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cae78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cae7c:
    // 0x1cae7c: 0x0  nop
    ctx->pc = 0x1cae7cu;
    // NOP
label_1cae80:
    // 0x1cae80: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x1cae80u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1cae84:
    // 0x1cae84: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x1cae84u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cae88:
    // 0x1cae88: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cae88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cae8c:
    // 0x1cae8c: 0x27a60320  addiu       $a2, $sp, 0x320
    ctx->pc = 0x1cae8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_1cae90:
    // 0x1cae90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cae90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cae94:
    // 0x1cae94: 0xc08c64c  jal         func_231930
label_1cae98:
    if (ctx->pc == 0x1CAE98u) {
        ctx->pc = 0x1CAE9Cu;
        goto label_1cae9c;
    }
    ctx->pc = 0x1CAE94u;
    SET_GPR_U32(ctx, 31, 0x1CAE9Cu);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CAE94u, 0x1CAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE9Cu;
label_1cae9c:
    // 0x1cae9c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cae9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caea0:
    // 0x1caea0: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1caea4:
    // 0x1caea4: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x1caea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_1caea8:
    // 0x1caea8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1caea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1caeac:
    // 0x1caeac: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x1caeacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_1caeb0:
    // 0x1caeb0: 0x14430126  bne         $v0, $v1, . + 4 + (0x126 << 2)
label_1caeb4:
    if (ctx->pc == 0x1CAEB4u) {
        ctx->pc = 0x1CAEB8u;
        goto label_1caeb8;
    }
    ctx->pc = 0x1CAEB0u;
    {
        const bool branch_taken_0x1caeb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caeb0) {
            ctx->pc = 0x1CB34Cu;
            goto label_1cb34c;
        }
    }
    ctx->pc = 0x1CAEB8u;
label_1caeb8:
    // 0x1caeb8: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caebc:
    // 0x1caebc: 0xc48c00bc  lwc1        $f12, 0xBC($a0)
    ctx->pc = 0x1caebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1caec0:
    // 0x1caec0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1caec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1caec4:
    // 0x1caec4: 0x0  nop
    ctx->pc = 0x1caec4u;
    // NOP
label_1caec8:
    // 0x1caec8: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x1caec8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1caecc:
    // 0x1caecc: 0x450000a9  bc1f        . + 4 + (0xA9 << 2)
label_1caed0:
    if (ctx->pc == 0x1CAED0u) {
        ctx->pc = 0x1CAED4u;
        goto label_1caed4;
    }
    ctx->pc = 0x1CAECCu;
    {
        const bool branch_taken_0x1caecc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1caecc) {
            ctx->pc = 0x1CB174u;
            goto label_1cb174;
        }
    }
    ctx->pc = 0x1CAED4u;
label_1caed4:
    // 0x1caed4: 0x27a20318  addiu       $v0, $sp, 0x318
    ctx->pc = 0x1caed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_1caed8:
    // 0x1caed8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1caed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1caedc:
    // 0x1caedc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1caee0:
    if (ctx->pc == 0x1CAEE0u) {
        ctx->pc = 0x1CAEE4u;
        goto label_1caee4;
    }
    ctx->pc = 0x1CAEDCu;
    {
        const bool branch_taken_0x1caedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caedc) {
            ctx->pc = 0x1CAF04u;
            goto label_1caf04;
        }
    }
    ctx->pc = 0x1CAEE4u;
label_1caee4:
    // 0x1caee4: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1caee8:
    // 0x1caee8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1caee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1caeec:
    // 0x1caeec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1caeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1caef0:
    // 0x1caef0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1caef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1caef4:
    // 0x1caef4: 0x0  nop
    ctx->pc = 0x1caef4u;
    // NOP
label_1caef8:
    // 0x1caef8: 0x0  nop
    ctx->pc = 0x1caef8u;
    // NOP
label_1caefc:
    // 0x1caefc: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
label_1caf00:
    if (ctx->pc == 0x1CAF00u) {
        ctx->pc = 0x1CAF04u;
        goto label_1caf04;
    }
    ctx->pc = 0x1CAEFCu;
    {
        const bool branch_taken_0x1caefc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caefc) {
            ctx->pc = 0x1CAEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caee8;
        }
    }
    ctx->pc = 0x1CAF04u;
label_1caf04:
    // 0x1caf04: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1caf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caf08:
    // 0x1caf08: 0xc48d00b4  lwc1        $f13, 0xB4($a0)
    ctx->pc = 0x1caf08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1caf0c:
    // 0x1caf0c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1caf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1caf10:
    // 0x1caf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1caf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1caf14:
    // 0x1caf14: 0x0  nop
    ctx->pc = 0x1caf14u;
    // NOP
label_1caf18:
    // 0x1caf18: 0x460d00c0  add.s       $f3, $f0, $f13
    ctx->pc = 0x1caf18u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_1caf1c:
    // 0x1caf1c: 0xc782825c  lwc1        $f2, -0x7DA4($gp)
    ctx->pc = 0x1caf1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1caf20:
    // 0x1caf20: 0xc7a10394  lwc1        $f1, 0x394($sp)
    ctx->pc = 0x1caf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1caf24:
    // 0x1caf24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1caf24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1caf28:
    // 0x1caf28: 0x0  nop
    ctx->pc = 0x1caf28u;
    // NOP
label_1caf2c:
    // 0x1caf2c: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1caf2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1caf30:
    // 0x1caf30: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1caf30u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1caf34:
    // 0x1caf34: 0xc0c38f0  jal         func_30E3C0
label_1caf38:
    if (ctx->pc == 0x1CAF38u) {
        ctx->pc = 0x1CAF3Cu;
        goto label_1caf3c;
    }
    ctx->pc = 0x1CAF34u;
    SET_GPR_U32(ctx, 31, 0x1CAF3Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CAF34u, 0x1CAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF3Cu;
label_1caf3c:
    // 0x1caf3c: 0xe7a00318  swc1        $f0, 0x318($sp)
    ctx->pc = 0x1caf3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
label_1caf40:
    // 0x1caf40: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1caf44:
    // 0x1caf44: 0xc4a300b4  lwc1        $f3, 0xB4($a1)
    ctx->pc = 0x1caf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1caf48:
    // 0x1caf48: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1caf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1caf4c:
    // 0x1caf4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1caf4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1caf50:
    // 0x1caf50: 0x0  nop
    ctx->pc = 0x1caf50u;
    // NOP
label_1caf54:
    // 0x1caf54: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x1caf54u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1caf58:
    // 0x1caf58: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x1caf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1caf5c:
    // 0x1caf5c: 0xc7a00394  lwc1        $f0, 0x394($sp)
    ctx->pc = 0x1caf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1caf60:
    // 0x1caf60: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1caf60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1caf64:
    // 0x1caf64: 0x0  nop
    ctx->pc = 0x1caf64u;
    // NOP
label_1caf68:
    // 0x1caf68: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x1caf68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[2], ctx->f[0]));
label_1caf6c:
    // 0x1caf6c: 0x460c0b1c  madd.s      $f12, $f1, $f12
    ctx->pc = 0x1caf6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[12]));
label_1caf70:
    // 0x1caf70: 0xc0c3966  jal         func_30E598
label_1caf74:
    if (ctx->pc == 0x1CAF74u) {
        ctx->pc = 0x1CAF78u;
        goto label_1caf78;
    }
    ctx->pc = 0x1CAF70u;
    SET_GPR_U32(ctx, 31, 0x1CAF78u);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CAF70u, 0x1CAF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF78u;
label_1caf78:
    // 0x1caf78: 0xe7a0031c  swc1        $f0, 0x31C($sp)
    ctx->pc = 0x1caf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 796), bits); }
label_1caf7c:
    // 0x1caf7c: 0xe7a00360  swc1        $f0, 0x360($sp)
    ctx->pc = 0x1caf7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_1caf80:
    // 0x1caf80: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x1caf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_1caf84:
    // 0x1caf84: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1caf88:
    // 0x1caf88: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1caf8c:
    if (ctx->pc == 0x1CAF8Cu) {
        ctx->pc = 0x1CAF90u;
        goto label_1caf90;
    }
    ctx->pc = 0x1CAF88u;
    {
        const bool branch_taken_0x1caf88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf88) {
            ctx->pc = 0x1CAFB0u;
            goto label_1cafb0;
        }
    }
    ctx->pc = 0x1CAF90u;
label_1caf90:
    // 0x1caf90: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1caf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1caf94:
    // 0x1caf94: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1caf94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1caf98:
    // 0x1caf98: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1caf98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1caf9c:
    // 0x1caf9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1caf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cafa0:
    // 0x1cafa0: 0x0  nop
    ctx->pc = 0x1cafa0u;
    // NOP
label_1cafa4:
    // 0x1cafa4: 0x0  nop
    ctx->pc = 0x1cafa4u;
    // NOP
label_1cafa8:
    // 0x1cafa8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1cafac:
    if (ctx->pc == 0x1CAFACu) {
        ctx->pc = 0x1CAFB0u;
        goto label_1cafb0;
    }
    ctx->pc = 0x1CAFA8u;
    {
        const bool branch_taken_0x1cafa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cafa8) {
            ctx->pc = 0x1CAF94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1caf94;
        }
    }
    ctx->pc = 0x1CAFB0u;
label_1cafb0:
    // 0x1cafb0: 0xc7a1031c  lwc1        $f1, 0x31C($sp)
    ctx->pc = 0x1cafb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cafb4:
    // 0x1cafb4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1cafb4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1cafb8:
    // 0x1cafb8: 0xe7a10310  swc1        $f1, 0x310($sp)
    ctx->pc = 0x1cafb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
label_1cafbc:
    // 0x1cafbc: 0xc7a00318  lwc1        $f0, 0x318($sp)
    ctx->pc = 0x1cafbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cafc0:
    // 0x1cafc0: 0xe7a00314  swc1        $f0, 0x314($sp)
    ctx->pc = 0x1cafc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 788), bits); }
label_1cafc4:
    // 0x1cafc4: 0xe7a0035c  swc1        $f0, 0x35C($sp)
    ctx->pc = 0x1cafc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 860), bits); }
label_1cafc8:
    // 0x1cafc8: 0x27a40308  addiu       $a0, $sp, 0x308
    ctx->pc = 0x1cafc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_1cafcc:
    // 0x1cafcc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cafd0:
    // 0x1cafd0: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1cafd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_1cafd4:
    // 0x1cafd4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1cafd8:
    if (ctx->pc == 0x1CAFD8u) {
        ctx->pc = 0x1CAFDCu;
        goto label_1cafdc;
    }
    ctx->pc = 0x1CAFD4u;
    {
        const bool branch_taken_0x1cafd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cafd4) {
            ctx->pc = 0x1CB000u;
            goto label_1cb000;
        }
    }
    ctx->pc = 0x1CAFDCu;
label_1cafdc:
    // 0x1cafdc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cafe0:
    // 0x1cafe0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cafe0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cafe4:
    // 0x1cafe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cafe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cafe8:
    // 0x1cafe8: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1cafe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1cafec:
    // 0x1cafec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cafecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1caff0:
    // 0x1caff0: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1caff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_1caff4:
    // 0x1caff4: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x1caff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1caff8:
    // 0x1caff8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1caffc:
    if (ctx->pc == 0x1CAFFCu) {
        ctx->pc = 0x1CB000u;
        goto label_1cb000;
    }
    ctx->pc = 0x1CAFF8u;
    {
        const bool branch_taken_0x1caff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caff8) {
            ctx->pc = 0x1CAFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cafe0;
        }
    }
    ctx->pc = 0x1CB000u;
label_1cb000:
    // 0x1cb000: 0xc7a50310  lwc1        $f5, 0x310($sp)
    ctx->pc = 0x1cb000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1cb004:
    // 0x1cb004: 0xc784bb48  lwc1        $f4, -0x44B8($gp)
    ctx->pc = 0x1cb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cb008:
    // 0x1cb008: 0xc7ac0318  lwc1        $f12, 0x318($sp)
    ctx->pc = 0x1cb008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb00c:
    // 0x1cb00c: 0xc780968c  lwc1        $f0, -0x6974($gp)
    ctx->pc = 0x1cb00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb010:
    // 0x1cb010: 0xc7a30328  lwc1        $f3, 0x328($sp)
    ctx->pc = 0x1cb010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb014:
    // 0x1cb014: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb014u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb018:
    // 0x1cb018: 0x0  nop
    ctx->pc = 0x1cb018u;
    // NOP
label_1cb01c:
    // 0x1cb01c: 0x46030818  adda.s      $f1, $f3
    ctx->pc = 0x1cb01cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[3]));
label_1cb020:
    // 0x1cb020: 0x4600609c  madd.s      $f2, $f12, $f0
    ctx->pc = 0x1cb020u;
    ctx->f[2] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[0]));
label_1cb024:
    // 0x1cb024: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb028:
    // 0x1cb028: 0x0  nop
    ctx->pc = 0x1cb028u;
    // NOP
label_1cb02c:
    // 0x1cb02c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1cb02cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[2]));
label_1cb030:
    // 0x1cb030: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x1cb030u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1cb034:
    // 0x1cb034: 0xe7a10308  swc1        $f1, 0x308($sp)
    ctx->pc = 0x1cb034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
label_1cb038:
    // 0x1cb038: 0xc7a50314  lwc1        $f5, 0x314($sp)
    ctx->pc = 0x1cb038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 788)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1cb03c:
    // 0x1cb03c: 0xc784bb48  lwc1        $f4, -0x44B8($gp)
    ctx->pc = 0x1cb03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294949704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cb040:
    // 0x1cb040: 0xc7a3031c  lwc1        $f3, 0x31C($sp)
    ctx->pc = 0x1cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb044:
    // 0x1cb044: 0xc781968c  lwc1        $f1, -0x6974($gp)
    ctx->pc = 0x1cb044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb048:
    // 0x1cb048: 0xc7a2032c  lwc1        $f2, 0x32C($sp)
    ctx->pc = 0x1cb048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb04c:
    // 0x1cb04c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb050:
    // 0x1cb050: 0x0  nop
    ctx->pc = 0x1cb050u;
    // NOP
label_1cb054:
    // 0x1cb054: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x1cb054u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[2]));
label_1cb058:
    // 0x1cb058: 0x4601185c  madd.s      $f1, $f3, $f1
    ctx->pc = 0x1cb058u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[1]));
label_1cb05c:
    // 0x1cb05c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb05cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb060:
    // 0x1cb060: 0x0  nop
    ctx->pc = 0x1cb060u;
    // NOP
label_1cb064:
    // 0x1cb064: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cb064u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cb068:
    // 0x1cb068: 0x4604285c  madd.s      $f1, $f5, $f4
    ctx->pc = 0x1cb068u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_1cb06c:
    // 0x1cb06c: 0xe7a1030c  swc1        $f1, 0x30C($sp)
    ctx->pc = 0x1cb06cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 780), bits); }
label_1cb070:
    // 0x1cb070: 0xe7a10358  swc1        $f1, 0x358($sp)
    ctx->pc = 0x1cb070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_1cb074:
    // 0x1cb074: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x1cb074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_1cb078:
    // 0x1cb078: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1cb078u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cb07c:
    // 0x1cb07c: 0xc7a20394  lwc1        $f2, 0x394($sp)
    ctx->pc = 0x1cb07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb080:
    // 0x1cb080: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x1cb080u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_1cb084:
    // 0x1cb084: 0xc78c80b0  lwc1        $f12, -0x7F50($gp)
    ctx->pc = 0x1cb084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb088:
    // 0x1cb088: 0x460c0803  div.s       $f0, $f1, $f12
    ctx->pc = 0x1cb088u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
label_1cb08c:
    // 0x1cb08c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb090:
    // 0x1cb090: 0xc48100b4  lwc1        $f1, 0xB4($a0)
    ctx->pc = 0x1cb090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb094:
    // 0x1cb094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb098:
    // 0x1cb098: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x1cb098u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
label_1cb09c:
    // 0x1cb09c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1cb09cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cb0a0:
    // 0x1cb0a0: 0x0  nop
    ctx->pc = 0x1cb0a0u;
    // NOP
label_1cb0a4:
    // 0x1cb0a4: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1cb0a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1cb0a8:
    // 0x1cb0a8: 0xc7819690  lwc1        $f1, -0x6970($gp)
    ctx->pc = 0x1cb0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb0ac:
    // 0x1cb0ac: 0x46020b40  add.s       $f13, $f1, $f2
    ctx->pc = 0x1cb0acu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1cb0b0:
    // 0x1cb0b0: 0xe7ad0390  swc1        $f13, 0x390($sp)
    ctx->pc = 0x1cb0b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 912), bits); }
label_1cb0b4:
    // 0x1cb0b4: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1cb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_1cb0b8:
    // 0x1cb0b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb0bc:
    // 0x1cb0bc: 0xc7ac039c  lwc1        $f12, 0x39C($sp)
    ctx->pc = 0x1cb0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb0c0:
    // 0x1cb0c0: 0x46006347  neg.s       $f13, $f12
    ctx->pc = 0x1cb0c0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[12]);
label_1cb0c4:
    // 0x1cb0c4: 0x460d0302  mul.s       $f12, $f0, $f13
    ctx->pc = 0x1cb0c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
label_1cb0c8:
    // 0x1cb0c8: 0xc0c39dc  jal         func_30E770
label_1cb0cc:
    if (ctx->pc == 0x1CB0CCu) {
        ctx->pc = 0x1CB0D0u;
        goto label_1cb0d0;
    }
    ctx->pc = 0x1CB0C8u;
    SET_GPR_U32(ctx, 31, 0x1CB0D0u);
    ctx->pc = 0x30E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E770u, 0x1CB0C8u, 0x1CB0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0D0u;
label_1cb0d0:
    // 0x1cb0d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cb0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cb0d4:
    // 0x1cb0d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1cb0d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb0d8:
    // 0x1cb0d8: 0x0  nop
    ctx->pc = 0x1cb0d8u;
    // NOP
label_1cb0dc:
    // 0x1cb0dc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb0dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb0e0:
    // 0x1cb0e0: 0xe7a0038c  swc1        $f0, 0x38C($sp)
    ctx->pc = 0x1cb0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 908), bits); }
label_1cb0e4:
    // 0x1cb0e4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb0e8:
    // 0x1cb0e8: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1cb0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb0ec:
    // 0x1cb0ec: 0xc7a00308  lwc1        $f0, 0x308($sp)
    ctx->pc = 0x1cb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb0f0:
    // 0x1cb0f0: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1cb0f0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cb0f4:
    // 0x1cb0f4: 0xc7a2038c  lwc1        $f2, 0x38C($sp)
    ctx->pc = 0x1cb0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb0f8:
    // 0x1cb0f8: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb0fc:
    // 0x1cb0fc: 0xc46100cc  lwc1        $f1, 0xCC($v1)
    ctx->pc = 0x1cb0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb100:
    // 0x1cb100: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb100u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb104:
    // 0x1cb104: 0x0  nop
    ctx->pc = 0x1cb104u;
    // NOP
label_1cb108:
    // 0x1cb108: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cb108u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cb10c:
    // 0x1cb10c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cb10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1cb110:
    // 0x1cb110: 0xe46000cc  swc1        $f0, 0xCC($v1)
    ctx->pc = 0x1cb110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 204), bits); }
label_1cb114:
    // 0x1cb114: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb118:
    // 0x1cb118: 0xc4a100d0  lwc1        $f1, 0xD0($a1)
    ctx->pc = 0x1cb118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb11c:
    // 0x1cb11c: 0xc7a0030c  lwc1        $f0, 0x30C($sp)
    ctx->pc = 0x1cb11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb120:
    // 0x1cb120: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1cb120u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cb124:
    // 0x1cb124: 0xc7a2038c  lwc1        $f2, 0x38C($sp)
    ctx->pc = 0x1cb124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb128:
    // 0x1cb128: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb12c:
    // 0x1cb12c: 0xc44100d0  lwc1        $f1, 0xD0($v0)
    ctx->pc = 0x1cb12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb130:
    // 0x1cb130: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb130u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb134:
    // 0x1cb134: 0x0  nop
    ctx->pc = 0x1cb134u;
    // NOP
label_1cb138:
    // 0x1cb138: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cb138u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cb13c:
    // 0x1cb13c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cb13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1cb140:
    // 0x1cb140: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cb140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1cb144:
    // 0x1cb144: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb148:
    // 0x1cb148: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x1cb148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb14c:
    // 0x1cb14c: 0xc7a00390  lwc1        $f0, 0x390($sp)
    ctx->pc = 0x1cb14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb150:
    // 0x1cb150: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1cb150u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cb154:
    // 0x1cb154: 0xc7a2038c  lwc1        $f2, 0x38C($sp)
    ctx->pc = 0x1cb154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb158:
    // 0x1cb158: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb15c:
    // 0x1cb15c: 0xc48100d4  lwc1        $f1, 0xD4($a0)
    ctx->pc = 0x1cb15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb160:
    // 0x1cb160: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb164:
    // 0x1cb164: 0x0  nop
    ctx->pc = 0x1cb164u;
    // NOP
label_1cb168:
    // 0x1cb168: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cb168u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cb16c:
    // 0x1cb16c: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1cb16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1cb170:
    // 0x1cb170: 0xe48000d4  swc1        $f0, 0xD4($a0)
    ctx->pc = 0x1cb170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 212), bits); }
label_1cb174:
    // 0x1cb174: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb178:
    // 0x1cb178: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x1cb178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_1cb17c:
    // 0x1cb17c: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x1cb17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1cb180:
    // 0x1cb180: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cb180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cb184:
    // 0x1cb184: 0xc0739b0  jal         func_1CE6C0
label_1cb188:
    if (ctx->pc == 0x1CB188u) {
        ctx->pc = 0x1CB18Cu;
        goto label_1cb18c;
    }
    ctx->pc = 0x1CB184u;
    SET_GPR_U32(ctx, 31, 0x1CB18Cu);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CB184u, 0x1CB18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB18Cu;
label_1cb18c:
    // 0x1cb18c: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1cb18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_1cb190:
    // 0x1cb190: 0x7ba20260  lq          $v0, 0x260($sp)
    ctx->pc = 0x1cb190u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1cb194:
    // 0x1cb194: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cb198:
    // 0x1cb198: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cb198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb19c:
    // 0x1cb19c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb1a0:
    // 0x1cb1a0: 0xc06479c  jal         func_191E70
label_1cb1a4:
    if (ctx->pc == 0x1CB1A4u) {
        ctx->pc = 0x1CB1A8u;
        goto label_1cb1a8;
    }
    ctx->pc = 0x1CB1A0u;
    SET_GPR_U32(ctx, 31, 0x1CB1A8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB1A0u, 0x1CB1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1A8u;
label_1cb1a8:
    // 0x1cb1a8: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1cb1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_1cb1ac:
    // 0x1cb1ac: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb1b0:
    // 0x1cb1b0: 0x246500a4  addiu       $a1, $v1, 0xA4
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_1cb1b4:
    // 0x1cb1b4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cb1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb1b8:
    // 0x1cb1b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cb1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb1bc:
    // 0x1cb1bc: 0xc05612c  jal         func_1584B0
label_1cb1c0:
    if (ctx->pc == 0x1CB1C0u) {
        ctx->pc = 0x1CB1C4u;
        goto label_1cb1c4;
    }
    ctx->pc = 0x1CB1BCu;
    SET_GPR_U32(ctx, 31, 0x1CB1C4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB1BCu, 0x1CB1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1C4u;
label_1cb1c4:
    // 0x1cb1c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cb1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb1c8:
    // 0x1cb1c8: 0x7ba40250  lq          $a0, 0x250($sp)
    ctx->pc = 0x1cb1c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1cb1cc:
    // 0x1cb1cc: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1cb1ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1cb1d0:
    // 0x1cb1d0: 0xc08c6c8  jal         func_231B20
label_1cb1d4:
    if (ctx->pc == 0x1CB1D4u) {
        ctx->pc = 0x1CB1D8u;
        goto label_1cb1d8;
    }
    ctx->pc = 0x1CB1D0u;
    SET_GPR_U32(ctx, 31, 0x1CB1D8u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CB1D0u, 0x1CB1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB1D8u;
label_1cb1d8:
    // 0x1cb1d8: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cb1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1cb1dc:
    // 0x1cb1dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cb1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb1e0:
    // 0x1cb1e0: 0xc7a00300  lwc1        $f0, 0x300($sp)
    ctx->pc = 0x1cb1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb1e4:
    // 0x1cb1e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cb1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cb1e8:
    // 0x1cb1e8: 0xe7a00300  swc1        $f0, 0x300($sp)
    ctx->pc = 0x1cb1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
label_1cb1ec:
    // 0x1cb1ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cb1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cb1f0:
    // 0x1cb1f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb1f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb1f4:
    // 0x1cb1f4: 0xc7a00304  lwc1        $f0, 0x304($sp)
    ctx->pc = 0x1cb1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb1f8:
    // 0x1cb1f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cb1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cb1fc:
    // 0x1cb1fc: 0xe7a00304  swc1        $f0, 0x304($sp)
    ctx->pc = 0x1cb1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 772), bits); }
label_1cb200:
    // 0x1cb200: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb204:
    // 0x1cb204: 0xc06479c  jal         func_191E70
label_1cb208:
    if (ctx->pc == 0x1CB208u) {
        ctx->pc = 0x1CB20Cu;
        goto label_1cb20c;
    }
    ctx->pc = 0x1CB204u;
    SET_GPR_U32(ctx, 31, 0x1CB20Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB204u, 0x1CB20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB20Cu;
label_1cb20c:
    // 0x1cb20c: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x1cb20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
label_1cb210:
    // 0x1cb210: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb214:
    // 0x1cb214: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cb214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cb218:
    // 0x1cb218: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cb218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb21c:
    // 0x1cb21c: 0xc05612c  jal         func_1584B0
label_1cb220:
    if (ctx->pc == 0x1CB220u) {
        ctx->pc = 0x1CB224u;
        goto label_1cb224;
    }
    ctx->pc = 0x1CB21Cu;
    SET_GPR_U32(ctx, 31, 0x1CB224u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB21Cu, 0x1CB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB224u;
label_1cb224:
    // 0x1cb224: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cb224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb228:
    // 0x1cb228: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb22c:
    // 0x1cb22c: 0xc44100cc  lwc1        $f1, 0xCC($v0)
    ctx->pc = 0x1cb22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb230:
    // 0x1cb230: 0xc7a00300  lwc1        $f0, 0x300($sp)
    ctx->pc = 0x1cb230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb234:
    // 0x1cb234: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb234u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb238:
    // 0x1cb238: 0xc7a00340  lwc1        $f0, 0x340($sp)
    ctx->pc = 0x1cb238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb23c:
    // 0x1cb23c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1cb23cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb240:
    // 0x1cb240: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb244:
    // 0x1cb244: 0xc48100d0  lwc1        $f1, 0xD0($a0)
    ctx->pc = 0x1cb244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb248:
    // 0x1cb248: 0xc7a00304  lwc1        $f0, 0x304($sp)
    ctx->pc = 0x1cb248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb24c:
    // 0x1cb24c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb24cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb250:
    // 0x1cb250: 0xc7a00344  lwc1        $f0, 0x344($sp)
    ctx->pc = 0x1cb250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb254:
    // 0x1cb254: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x1cb254u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb258:
    // 0x1cb258: 0x7ba40240  lq          $a0, 0x240($sp)
    ctx->pc = 0x1cb258u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1cb25c:
    // 0x1cb25c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb25cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cb260:
    // 0x1cb260: 0xc08c208  jal         func_230820
label_1cb264:
    if (ctx->pc == 0x1CB264u) {
        ctx->pc = 0x1CB268u;
        goto label_1cb268;
    }
    ctx->pc = 0x1CB260u;
    SET_GPR_U32(ctx, 31, 0x1CB268u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CB260u, 0x1CB268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB268u;
label_1cb268:
    // 0x1cb268: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cb268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb26c:
    // 0x1cb26c: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb270:
    // 0x1cb270: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cb270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb274:
    // 0x1cb274: 0xc06479c  jal         func_191E70
label_1cb278:
    if (ctx->pc == 0x1CB278u) {
        ctx->pc = 0x1CB27Cu;
        goto label_1cb27c;
    }
    ctx->pc = 0x1CB274u;
    SET_GPR_U32(ctx, 31, 0x1CB27Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB274u, 0x1CB27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB27Cu;
label_1cb27c:
    // 0x1cb27c: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1cb27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
label_1cb280:
    // 0x1cb280: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cb280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb284:
    // 0x1cb284: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1cb284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_1cb288:
    // 0x1cb288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cb288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb28c:
    // 0x1cb28c: 0xc05612c  jal         func_1584B0
label_1cb290:
    if (ctx->pc == 0x1CB290u) {
        ctx->pc = 0x1CB294u;
        goto label_1cb294;
    }
    ctx->pc = 0x1CB28Cu;
    SET_GPR_U32(ctx, 31, 0x1CB294u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB28Cu, 0x1CB294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB294u;
label_1cb294:
    // 0x1cb294: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cb294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb298:
    // 0x1cb298: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb29c:
    // 0x1cb29c: 0x7ba40230  lq          $a0, 0x230($sp)
    ctx->pc = 0x1cb29cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1cb2a0:
    // 0x1cb2a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cb2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cb2a4:
    // 0x1cb2a4: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x1cb2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1cb2a8:
    // 0x1cb2a8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb2ac:
    // 0x1cb2ac: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cb2acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb2b0:
    // 0x1cb2b0: 0xc08c64c  jal         func_231930
label_1cb2b4:
    if (ctx->pc == 0x1CB2B4u) {
        ctx->pc = 0x1CB2B8u;
        goto label_1cb2b8;
    }
    ctx->pc = 0x1CB2B0u;
    SET_GPR_U32(ctx, 31, 0x1CB2B8u);
    ctx->pc = 0x231930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231930u, 0x1CB2B0u, 0x1CB2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB2B8u;
label_1cb2b8:
    // 0x1cb2b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cb2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cb2bc:
    // 0x1cb2bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1cb2bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb2c0:
    // 0x1cb2c0: 0x0  nop
    ctx->pc = 0x1cb2c0u;
    // NOP
label_1cb2c4:
    // 0x1cb2c4: 0xe7a00388  swc1        $f0, 0x388($sp)
    ctx->pc = 0x1cb2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_1cb2c8:
    // 0x1cb2c8: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb2cc:
    // 0x1cb2cc: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1cb2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_1cb2d0:
    // 0x1cb2d0: 0x7ba20220  lq          $v0, 0x220($sp)
    ctx->pc = 0x1cb2d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1cb2d4:
    // 0x1cb2d4: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1cb2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb2d8:
    // 0x1cb2d8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cb2dc:
    // 0x1cb2dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cb2dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb2e0:
    // 0x1cb2e0: 0x0  nop
    ctx->pc = 0x1cb2e0u;
    // NOP
label_1cb2e4:
    // 0x1cb2e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb2e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb2e8:
    // 0x1cb2e8: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_1cb2ec:
    if (ctx->pc == 0x1CB2ECu) {
        ctx->pc = 0x1CB2F0u;
        goto label_1cb2f0;
    }
    ctx->pc = 0x1CB2E8u;
    {
        const bool branch_taken_0x1cb2e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb2e8) {
            ctx->pc = 0x1CB30Cu;
            goto label_1cb30c;
        }
    }
    ctx->pc = 0x1CB2F0u;
label_1cb2f0:
    // 0x1cb2f0: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb2f4:
    // 0x1cb2f4: 0xc4c100bc  lwc1        $f1, 0xBC($a2)
    ctx->pc = 0x1cb2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb2f8:
    // 0x1cb2f8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cb2fc:
    // 0x1cb2fc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cb2fcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb300:
    // 0x1cb300: 0x0  nop
    ctx->pc = 0x1cb300u;
    // NOP
label_1cb304:
    // 0x1cb304: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cb304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb308:
    // 0x1cb308: 0xe7a00388  swc1        $f0, 0x388($sp)
    ctx->pc = 0x1cb308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
label_1cb30c:
    // 0x1cb30c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb310:
    // 0x1cb310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb314:
    // 0x1cb314: 0xc06479c  jal         func_191E70
label_1cb318:
    if (ctx->pc == 0x1CB318u) {
        ctx->pc = 0x1CB31Cu;
        goto label_1cb31c;
    }
    ctx->pc = 0x1CB314u;
    SET_GPR_U32(ctx, 31, 0x1CB31Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB314u, 0x1CB31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB31Cu;
label_1cb31c:
    // 0x1cb31c: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1cb31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_1cb320:
    // 0x1cb320: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb324:
    // 0x1cb324: 0x24c200a4  addiu       $v0, $a2, 0xA4
    ctx->pc = 0x1cb324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 164));
label_1cb328:
    // 0x1cb328: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb32c:
    // 0x1cb32c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1cb32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cb330:
    // 0x1cb330: 0xc05612c  jal         func_1584B0
label_1cb334:
    if (ctx->pc == 0x1CB334u) {
        ctx->pc = 0x1CB338u;
        goto label_1cb338;
    }
    ctx->pc = 0x1CB330u;
    SET_GPR_U32(ctx, 31, 0x1CB338u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB330u, 0x1CB338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB338u;
label_1cb338:
    // 0x1cb338: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cb338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb33c:
    // 0x1cb33c: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1cb33cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1cb340:
    // 0x1cb340: 0xc7ac0388  lwc1        $f12, 0x388($sp)
    ctx->pc = 0x1cb340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb344:
    // 0x1cb344: 0xc08c434  jal         func_2310D0
label_1cb348:
    if (ctx->pc == 0x1CB348u) {
        ctx->pc = 0x1CB34Cu;
        goto label_1cb34c;
    }
    ctx->pc = 0x1CB344u;
    SET_GPR_U32(ctx, 31, 0x1CB34Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x1CB344u, 0x1CB34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB34Cu;
label_1cb34c:
    // 0x1cb34c: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb34cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb350:
    // 0x1cb350: 0xc4c100c0  lwc1        $f1, 0xC0($a2)
    ctx->pc = 0x1cb350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb354:
    // 0x1cb354: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cb354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cb358:
    // 0x1cb358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb35c:
    // 0x1cb35c: 0x0  nop
    ctx->pc = 0x1cb35cu;
    // NOP
label_1cb360:
    // 0x1cb360: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cb360u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cb364:
    // 0x1cb364: 0xe7a00384  swc1        $f0, 0x384($sp)
    ctx->pc = 0x1cb364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_1cb368:
    // 0x1cb368: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cb368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cb36c:
    // 0x1cb36c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb36cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb370:
    // 0x1cb370: 0x0  nop
    ctx->pc = 0x1cb370u;
    // NOP
label_1cb374:
    // 0x1cb374: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x1cb374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_1cb378:
    // 0x1cb378: 0xc7a10384  lwc1        $f1, 0x384($sp)
    ctx->pc = 0x1cb378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb37c:
    // 0x1cb37c: 0x3c163f00  lui         $s6, 0x3F00
    ctx->pc = 0x1cb37cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)16128 << 16));
label_1cb380:
    // 0x1cb380: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x1cb380u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb384:
    // 0x1cb384: 0x0  nop
    ctx->pc = 0x1cb384u;
    // NOP
label_1cb388:
    // 0x1cb388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb38c:
    // 0x1cb38c: 0x45000016  bc1f        . + 4 + (0x16 << 2)
label_1cb390:
    if (ctx->pc == 0x1CB390u) {
        ctx->pc = 0x1CB394u;
        goto label_1cb394;
    }
    ctx->pc = 0x1CB38Cu;
    {
        const bool branch_taken_0x1cb38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb38c) {
            ctx->pc = 0x1CB3E8u;
            goto label_1cb3e8;
        }
    }
    ctx->pc = 0x1CB394u;
label_1cb394:
    // 0x1cb394: 0xc78380b0  lwc1        $f3, -0x7F50($gp)
    ctx->pc = 0x1cb394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb398:
    // 0x1cb398: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cb398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cb39c:
    // 0x1cb39c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb3a0:
    // 0x1cb3a0: 0xc7a00384  lwc1        $f0, 0x384($sp)
    ctx->pc = 0x1cb3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb3a4:
    // 0x1cb3a4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1cb3a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cb3a8:
    // 0x1cb3a8: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1cb3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb3ac:
    // 0x1cb3ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb3acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb3b0:
    // 0x1cb3b0: 0x0  nop
    ctx->pc = 0x1cb3b0u;
    // NOP
label_1cb3b4:
    // 0x1cb3b4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cb3b4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cb3b8:
    // 0x1cb3b8: 0x46021b1c  madd.s      $f12, $f3, $f2
    ctx->pc = 0x1cb3b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cb3bc:
    // 0x1cb3bc: 0xc0c38f0  jal         func_30E3C0
label_1cb3c0:
    if (ctx->pc == 0x1CB3C0u) {
        ctx->pc = 0x1CB3C4u;
        goto label_1cb3c4;
    }
    ctx->pc = 0x1CB3BCu;
    SET_GPR_U32(ctx, 31, 0x1CB3C4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CB3BCu, 0x1CB3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB3C4u;
label_1cb3c4:
    // 0x1cb3c4: 0xc7838370  lwc1        $f3, -0x7C90($gp)
    ctx->pc = 0x1cb3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb3c8:
    // 0x1cb3c8: 0xc7828374  lwc1        $f2, -0x7C8C($gp)
    ctx->pc = 0x1cb3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb3cc:
    // 0x1cb3cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb3ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb3d0:
    // 0x1cb3d0: 0x0  nop
    ctx->pc = 0x1cb3d0u;
    // NOP
label_1cb3d4:
    // 0x1cb3d4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1cb3d4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1cb3d8:
    // 0x1cb3d8: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1cb3d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1cb3dc:
    // 0x1cb3dc: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x1cb3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_1cb3e0:
    // 0x1cb3e0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cb3e4:
    if (ctx->pc == 0x1CB3E4u) {
        ctx->pc = 0x1CB3E8u;
        goto label_1cb3e8;
    }
    ctx->pc = 0x1CB3E0u;
    {
        const bool branch_taken_0x1cb3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb3e0) {
            ctx->pc = 0x1CB428u;
            goto label_1cb428;
        }
    }
    ctx->pc = 0x1CB3E8u;
label_1cb3e8:
    // 0x1cb3e8: 0xc7a10384  lwc1        $f1, 0x384($sp)
    ctx->pc = 0x1cb3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb3ec:
    // 0x1cb3ec: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x1cb3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_1cb3f0:
    // 0x1cb3f0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb3f0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb3f4:
    // 0x1cb3f4: 0x0  nop
    ctx->pc = 0x1cb3f4u;
    // NOP
label_1cb3f8:
    // 0x1cb3f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb3f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb3fc:
    // 0x1cb3fc: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1cb3fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb400:
    // 0x1cb400: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1cb400u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1cb404:
    // 0x1cb404: 0xc0c38f0  jal         func_30E3C0
label_1cb408:
    if (ctx->pc == 0x1CB408u) {
        ctx->pc = 0x1CB40Cu;
        goto label_1cb40c;
    }
    ctx->pc = 0x1CB404u;
    SET_GPR_U32(ctx, 31, 0x1CB40Cu);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CB404u, 0x1CB40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB40Cu;
label_1cb40c:
    // 0x1cb40c: 0xc7838370  lwc1        $f3, -0x7C90($gp)
    ctx->pc = 0x1cb40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb410:
    // 0x1cb410: 0xc7828374  lwc1        $f2, -0x7C8C($gp)
    ctx->pc = 0x1cb410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb414:
    // 0x1cb414: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb414u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb418:
    // 0x1cb418: 0x0  nop
    ctx->pc = 0x1cb418u;
    // NOP
label_1cb41c:
    // 0x1cb41c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1cb41cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1cb420:
    // 0x1cb420: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1cb420u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1cb424:
    // 0x1cb424: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x1cb424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_1cb428:
    // 0x1cb428: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb428u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb42c:
    // 0x1cb42c: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb430:
    // 0x1cb430: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cb430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb434:
    // 0x1cb434: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x1cb434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_1cb438:
    // 0x1cb438: 0xc7ad0380  lwc1        $f13, 0x380($sp)
    ctx->pc = 0x1cb438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cb43c:
    // 0x1cb43c: 0xc073430  jal         func_1CD0C0
label_1cb440:
    if (ctx->pc == 0x1CB440u) {
        ctx->pc = 0x1CB444u;
        goto label_1cb444;
    }
    ctx->pc = 0x1CB43Cu;
    SET_GPR_U32(ctx, 31, 0x1CB444u);
    ctx->pc = 0x1CD0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD0C0u, 0x1CB43Cu, 0x1CB444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB444u;
label_1cb444:
    // 0x1cb444: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cb444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb448:
    // 0x1cb448: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x1cb448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cb44c:
    // 0x1cb44c: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x1cb44cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cb450:
    // 0x1cb450: 0x1475000a  bne         $v1, $s5, . + 4 + (0xA << 2)
label_1cb454:
    if (ctx->pc == 0x1CB454u) {
        ctx->pc = 0x1CB458u;
        goto label_1cb458;
    }
    ctx->pc = 0x1CB450u;
    {
        const bool branch_taken_0x1cb450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        if (branch_taken_0x1cb450) {
            ctx->pc = 0x1CB47Cu;
            goto label_1cb47c;
        }
    }
    ctx->pc = 0x1CB458u;
label_1cb458:
    // 0x1cb458: 0x8fb103a0  lw          $s1, 0x3A0($sp)
    ctx->pc = 0x1cb458u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb45c:
    // 0x1cb45c: 0x8e3400dc  lw          $s4, 0xDC($s1)
    ctx->pc = 0x1cb45cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_1cb460:
    // 0x1cb460: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cb460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cb464:
    // 0x1cb464: 0xc0739b0  jal         func_1CE6C0
label_1cb468:
    if (ctx->pc == 0x1CB468u) {
        ctx->pc = 0x1CB46Cu;
        goto label_1cb46c;
    }
    ctx->pc = 0x1CB464u;
    SET_GPR_U32(ctx, 31, 0x1CB46Cu);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CB464u, 0x1CB46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB46Cu;
label_1cb46c:
    // 0x1cb46c: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1cb46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cb470:
    // 0x1cb470: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1cb470u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cb474:
    // 0x1cb474: 0x10000008  b           . + 4 + (0x8 << 2)
label_1cb478:
    if (ctx->pc == 0x1CB478u) {
        ctx->pc = 0x1CB47Cu;
        goto label_1cb47c;
    }
    ctx->pc = 0x1CB474u;
    {
        const bool branch_taken_0x1cb474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb474) {
            ctx->pc = 0x1CB498u;
            goto label_1cb498;
        }
    }
    ctx->pc = 0x1CB47Cu;
label_1cb47c:
    // 0x1cb47c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb480:
    // 0x1cb480: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1cb480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_1cb484:
    // 0x1cb484: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x1cb484u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1cb488:
    // 0x1cb488: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cb488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cb48c:
    // 0x1cb48c: 0xc0739b0  jal         func_1CE6C0
label_1cb490:
    if (ctx->pc == 0x1CB490u) {
        ctx->pc = 0x1CB494u;
        goto label_1cb494;
    }
    ctx->pc = 0x1CB48Cu;
    SET_GPR_U32(ctx, 31, 0x1CB494u);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CB48Cu, 0x1CB494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB494u;
label_1cb494:
    // 0x1cb494: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cb494u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb498:
    // 0x1cb498: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x1cb498u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cb49c:
    // 0x1cb49c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb49cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb4a0:
    // 0x1cb4a0: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb4a4:
    // 0x1cb4a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cb4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4a8:
    // 0x1cb4a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1cb4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4ac:
    // 0x1cb4ac: 0x27a20340  addiu       $v0, $sp, 0x340
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_1cb4b0:
    // 0x1cb4b0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cb4b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4b4:
    // 0x1cb4b4: 0xc7a00380  lwc1        $f0, 0x380($sp)
    ctx->pc = 0x1cb4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb4b8:
    // 0x1cb4b8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1cb4b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1cb4bc:
    // 0x1cb4bc: 0xc073398  jal         func_1CCE60
label_1cb4c0:
    if (ctx->pc == 0x1CB4C0u) {
        ctx->pc = 0x1CB4C4u;
        goto label_1cb4c4;
    }
    ctx->pc = 0x1CB4BCu;
    SET_GPR_U32(ctx, 31, 0x1CB4C4u);
    ctx->pc = 0x1CCE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CCE60u, 0x1CB4BCu, 0x1CB4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C4u;
label_1cb4c4:
    // 0x1cb4c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cb4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb4c8:
    // 0x1cb4c8: 0x27a402f8  addiu       $a0, $sp, 0x2F8
    ctx->pc = 0x1cb4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_1cb4cc:
    // 0x1cb4cc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cb4d0:
    // 0x1cb4d0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1cb4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_1cb4d4:
    // 0x1cb4d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_1cb4d8:
    if (ctx->pc == 0x1CB4D8u) {
        ctx->pc = 0x1CB4DCu;
        goto label_1cb4dc;
    }
    ctx->pc = 0x1CB4D4u;
    {
        const bool branch_taken_0x1cb4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4d4) {
            ctx->pc = 0x1CB500u;
            goto label_1cb500;
        }
    }
    ctx->pc = 0x1CB4DCu;
label_1cb4dc:
    // 0x1cb4dc: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cb4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cb4e0:
    // 0x1cb4e0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cb4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cb4e4:
    // 0x1cb4e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cb4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cb4e8:
    // 0x1cb4e8: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1cb4e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1cb4ec:
    // 0x1cb4ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cb4f0:
    // 0x1cb4f0: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1cb4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_1cb4f4:
    // 0x1cb4f4: 0x7ba201f0  lq          $v0, 0x1F0($sp)
    ctx->pc = 0x1cb4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1cb4f8:
    // 0x1cb4f8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1cb4fc:
    if (ctx->pc == 0x1CB4FCu) {
        ctx->pc = 0x1CB500u;
        goto label_1cb500;
    }
    ctx->pc = 0x1CB4F8u;
    {
        const bool branch_taken_0x1cb4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4f8) {
            ctx->pc = 0x1CB4E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb4e0;
        }
    }
    ctx->pc = 0x1CB500u;
label_1cb500:
    // 0x1cb500: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb504:
    // 0x1cb504: 0xc48100b4  lwc1        $f1, 0xB4($a0)
    ctx->pc = 0x1cb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb508:
    // 0x1cb508: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x1cb508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
label_1cb50c:
    // 0x1cb50c: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1cb50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_1cb510:
    // 0x1cb510: 0x7ba201e0  lq          $v0, 0x1E0($sp)
    ctx->pc = 0x1cb510u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1cb514:
    // 0x1cb514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb518:
    // 0x1cb518: 0x0  nop
    ctx->pc = 0x1cb518u;
    // NOP
label_1cb51c:
    // 0x1cb51c: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x1cb51cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb520:
    // 0x1cb520: 0xc782825c  lwc1        $f2, -0x7DA4($gp)
    ctx->pc = 0x1cb520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb524:
    // 0x1cb524: 0xc7a00394  lwc1        $f0, 0x394($sp)
    ctx->pc = 0x1cb524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb528:
    // 0x1cb528: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb52c:
    // 0x1cb52c: 0x0  nop
    ctx->pc = 0x1cb52cu;
    // NOP
label_1cb530:
    // 0x1cb530: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1cb530u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_1cb534:
    // 0x1cb534: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1cb534u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1cb538:
    // 0x1cb538: 0xc0c38f0  jal         func_30E3C0
label_1cb53c:
    if (ctx->pc == 0x1CB53Cu) {
        ctx->pc = 0x1CB540u;
        goto label_1cb540;
    }
    ctx->pc = 0x1CB538u;
    SET_GPR_U32(ctx, 31, 0x1CB540u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CB538u, 0x1CB540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB540u;
label_1cb540:
    // 0x1cb540: 0xe7a002f8  swc1        $f0, 0x2F8($sp)
    ctx->pc = 0x1cb540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 760), bits); }
label_1cb544:
    // 0x1cb544: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb548:
    // 0x1cb548: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x1cb548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb54c:
    // 0x1cb54c: 0x3c0542b4  lui         $a1, 0x42B4
    ctx->pc = 0x1cb54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17076 << 16));
label_1cb550:
    // 0x1cb550: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cb550u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb554:
    // 0x1cb554: 0x0  nop
    ctx->pc = 0x1cb554u;
    // NOP
label_1cb558:
    // 0x1cb558: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x1cb558u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb55c:
    // 0x1cb55c: 0xc782825c  lwc1        $f2, -0x7DA4($gp)
    ctx->pc = 0x1cb55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb560:
    // 0x1cb560: 0xc7a00394  lwc1        $f0, 0x394($sp)
    ctx->pc = 0x1cb560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb564:
    // 0x1cb564: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb568:
    // 0x1cb568: 0x0  nop
    ctx->pc = 0x1cb568u;
    // NOP
label_1cb56c:
    // 0x1cb56c: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x1cb56cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
label_1cb570:
    // 0x1cb570: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x1cb570u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1cb574:
    // 0x1cb574: 0xc0c3966  jal         func_30E598
label_1cb578:
    if (ctx->pc == 0x1CB578u) {
        ctx->pc = 0x1CB57Cu;
        goto label_1cb57c;
    }
    ctx->pc = 0x1CB574u;
    SET_GPR_U32(ctx, 31, 0x1CB57Cu);
    ctx->pc = 0x30E598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E598u, 0x1CB574u, 0x1CB57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB57Cu;
label_1cb57c:
    // 0x1cb57c: 0xe7a002fc  swc1        $f0, 0x2FC($sp)
    ctx->pc = 0x1cb57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 764), bits); }
label_1cb580:
    // 0x1cb580: 0xe7a00354  swc1        $f0, 0x354($sp)
    ctx->pc = 0x1cb580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 852), bits); }
label_1cb584:
    // 0x1cb584: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb584u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb588:
    // 0x1cb588: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x1cb588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_1cb58c:
    // 0x1cb58c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb590:
    // 0x1cb590: 0x27a202f0  addiu       $v0, $sp, 0x2F0
    ctx->pc = 0x1cb590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1cb594:
    // 0x1cb594: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1cb594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_1cb598:
    // 0x1cb598: 0x7ba501d0  lq          $a1, 0x1D0($sp)
    ctx->pc = 0x1cb598u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1cb59c:
    // 0x1cb59c: 0x27a2037c  addiu       $v0, $sp, 0x37C
    ctx->pc = 0x1cb59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
label_1cb5a0:
    // 0x1cb5a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cb5a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5a4:
    // 0x1cb5a4: 0xc073988  jal         func_1CE620
label_1cb5a8:
    if (ctx->pc == 0x1CB5A8u) {
        ctx->pc = 0x1CB5ACu;
        goto label_1cb5ac;
    }
    ctx->pc = 0x1CB5A4u;
    SET_GPR_U32(ctx, 31, 0x1CB5ACu);
    ctx->pc = 0x1CE620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE620u, 0x1CB5A4u, 0x1CB5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB5ACu;
label_1cb5ac:
    // 0x1cb5ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cb5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb5b0:
    // 0x1cb5b0: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x1cb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1cb5b4:
    // 0x1cb5b4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1cb5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cb5b8:
    // 0x1cb5b8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1cb5bc:
    if (ctx->pc == 0x1CB5BCu) {
        ctx->pc = 0x1CB5C0u;
        goto label_1cb5c0;
    }
    ctx->pc = 0x1CB5B8u;
    {
        const bool branch_taken_0x1cb5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5b8) {
            ctx->pc = 0x1CB5E4u;
            goto label_1cb5e4;
        }
    }
    ctx->pc = 0x1CB5C0u;
label_1cb5c0:
    // 0x1cb5c0: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x1cb5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1cb5c4:
    // 0x1cb5c4: 0x7fa301c0  sq          $v1, 0x1C0($sp)
    ctx->pc = 0x1cb5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 3));
label_1cb5c8:
    // 0x1cb5c8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cb5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cb5cc:
    // 0x1cb5cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cb5d0:
    // 0x1cb5d0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cb5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1cb5d4:
    // 0x1cb5d4: 0x0  nop
    ctx->pc = 0x1cb5d4u;
    // NOP
label_1cb5d8:
    // 0x1cb5d8: 0x0  nop
    ctx->pc = 0x1cb5d8u;
    // NOP
label_1cb5dc:
    // 0x1cb5dc: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cb5e0:
    if (ctx->pc == 0x1CB5E0u) {
        ctx->pc = 0x1CB5E4u;
        goto label_1cb5e4;
    }
    ctx->pc = 0x1CB5DCu;
    {
        const bool branch_taken_0x1cb5dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb5dc) {
            ctx->pc = 0x1CB5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb5c8;
        }
    }
    ctx->pc = 0x1CB5E4u;
label_1cb5e4:
    // 0x1cb5e4: 0xc7a002f0  lwc1        $f0, 0x2F0($sp)
    ctx->pc = 0x1cb5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb5e8:
    // 0x1cb5e8: 0xe7a002e0  swc1        $f0, 0x2E0($sp)
    ctx->pc = 0x1cb5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_1cb5ec:
    // 0x1cb5ec: 0xc7a002f4  lwc1        $f0, 0x2F4($sp)
    ctx->pc = 0x1cb5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb5f0:
    // 0x1cb5f0: 0xe7a002e4  swc1        $f0, 0x2E4($sp)
    ctx->pc = 0x1cb5f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 740), bits); }
label_1cb5f4:
    // 0x1cb5f4: 0xe7a00350  swc1        $f0, 0x350($sp)
    ctx->pc = 0x1cb5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
label_1cb5f8:
    // 0x1cb5f8: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb5fc:
    // 0x1cb5fc: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1cb5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1cb600:
    // 0x1cb600: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x1cb600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1cb604:
    // 0x1cb604: 0x8c4200b0  lw          $v0, 0xB0($v0)
    ctx->pc = 0x1cb604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1cb608:
    // 0x1cb608: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cb608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb60c:
    // 0x1cb60c: 0xc104d64  jal         func_413590
label_1cb610:
    if (ctx->pc == 0x1CB610u) {
        ctx->pc = 0x1CB614u;
        goto label_1cb614;
    }
    ctx->pc = 0x1CB60Cu;
    SET_GPR_U32(ctx, 31, 0x1CB614u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CB60Cu, 0x1CB614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB614u;
label_1cb614:
    // 0x1cb614: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cb614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb618:
    // 0x1cb618: 0x27a202d8  addiu       $v0, $sp, 0x2D8
    ctx->pc = 0x1cb618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_1cb61c:
    // 0x1cb61c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1cb61cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cb620:
    // 0x1cb620: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1cb624:
    if (ctx->pc == 0x1CB624u) {
        ctx->pc = 0x1CB628u;
        goto label_1cb628;
    }
    ctx->pc = 0x1CB620u;
    {
        const bool branch_taken_0x1cb620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb620) {
            ctx->pc = 0x1CB64Cu;
            goto label_1cb64c;
        }
    }
    ctx->pc = 0x1CB628u;
label_1cb628:
    // 0x1cb628: 0x401821  addu        $v1, $v0, $zero
    ctx->pc = 0x1cb628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 0)));
label_1cb62c:
    // 0x1cb62c: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x1cb62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
label_1cb630:
    // 0x1cb630: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1cb630u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cb634:
    // 0x1cb634: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cb638:
    // 0x1cb638: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cb638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1cb63c:
    // 0x1cb63c: 0x0  nop
    ctx->pc = 0x1cb63cu;
    // NOP
label_1cb640:
    // 0x1cb640: 0x0  nop
    ctx->pc = 0x1cb640u;
    // NOP
label_1cb644:
    // 0x1cb644: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
label_1cb648:
    if (ctx->pc == 0x1CB648u) {
        ctx->pc = 0x1CB64Cu;
        goto label_1cb64c;
    }
    ctx->pc = 0x1CB644u;
    {
        const bool branch_taken_0x1cb644 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb644) {
            ctx->pc = 0x1CB630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cb630;
        }
    }
    ctx->pc = 0x1CB64Cu;
label_1cb64c:
    // 0x1cb64c: 0xc7a102e0  lwc1        $f1, 0x2E0($sp)
    ctx->pc = 0x1cb64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb650:
    // 0x1cb650: 0xc7a00328  lwc1        $f0, 0x328($sp)
    ctx->pc = 0x1cb650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb654:
    // 0x1cb654: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x1cb654u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb658:
    // 0x1cb658: 0xe7ac02d8  swc1        $f12, 0x2D8($sp)
    ctx->pc = 0x1cb658u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_1cb65c:
    // 0x1cb65c: 0xc7a002e4  lwc1        $f0, 0x2E4($sp)
    ctx->pc = 0x1cb65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb660:
    // 0x1cb660: 0xc7a2032c  lwc1        $f2, 0x32C($sp)
    ctx->pc = 0x1cb660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb664:
    // 0x1cb664: 0x46020041  sub.s       $f1, $f0, $f2
    ctx->pc = 0x1cb664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1cb668:
    // 0x1cb668: 0xe7a102dc  swc1        $f1, 0x2DC($sp)
    ctx->pc = 0x1cb668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 732), bits); }
label_1cb66c:
    // 0x1cb66c: 0xe7a1034c  swc1        $f1, 0x34C($sp)
    ctx->pc = 0x1cb66cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 844), bits); }
label_1cb670:
    // 0x1cb670: 0xc7a302d8  lwc1        $f3, 0x2D8($sp)
    ctx->pc = 0x1cb670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cb674:
    // 0x1cb674: 0xc7a202f8  lwc1        $f2, 0x2F8($sp)
    ctx->pc = 0x1cb674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb678:
    // 0x1cb678: 0xc7a102dc  lwc1        $f1, 0x2DC($sp)
    ctx->pc = 0x1cb678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb67c:
    // 0x1cb67c: 0xc7a002fc  lwc1        $f0, 0x2FC($sp)
    ctx->pc = 0x1cb67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 764)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb680:
    // 0x1cb680: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1cb680u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cb684:
    // 0x1cb684: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cb684u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb688:
    // 0x1cb688: 0x0  nop
    ctx->pc = 0x1cb688u;
    // NOP
label_1cb68c:
    // 0x1cb68c: 0x460c0818  adda.s      $f1, $f12
    ctx->pc = 0x1cb68cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[12]));
label_1cb690:
    // 0x1cb690: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x1cb690u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cb694:
    // 0x1cb694: 0xe7a00378  swc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb694u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_1cb698:
    // 0x1cb698: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb69c:
    // 0x1cb69c: 0xc7a20320  lwc1        $f2, 0x320($sp)
    ctx->pc = 0x1cb69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cb6a0:
    // 0x1cb6a0: 0xc44100e4  lwc1        $f1, 0xE4($v0)
    ctx->pc = 0x1cb6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb6a4:
    // 0x1cb6a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1cb6a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1cb6a8:
    // 0x1cb6a8: 0xc7a00378  lwc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb6ac:
    // 0x1cb6ac: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cb6acu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1cb6b0:
    // 0x1cb6b0: 0xe7a00378  swc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_1cb6b4:
    // 0x1cb6b4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb6b8:
    // 0x1cb6b8: 0xc48100e0  lwc1        $f1, 0xE0($a0)
    ctx->pc = 0x1cb6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb6bc:
    // 0x1cb6bc: 0xc7a00378  lwc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb6c0:
    // 0x1cb6c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1cb6c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb6c4:
    // 0x1cb6c4: 0xe7a00378  swc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb6c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_1cb6c8:
    // 0x1cb6c8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb6cc:
    // 0x1cb6cc: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x1cb6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_1cb6d0:
    // 0x1cb6d0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cb6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cb6d4:
    // 0x1cb6d4: 0x104500c5  beq         $v0, $a1, . + 4 + (0xC5 << 2)
label_1cb6d8:
    if (ctx->pc == 0x1CB6D8u) {
        ctx->pc = 0x1CB6DCu;
        goto label_1cb6dc;
    }
    ctx->pc = 0x1CB6D4u;
    {
        const bool branch_taken_0x1cb6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1cb6d4) {
            ctx->pc = 0x1CB9ECu;
            goto label_1cb9ec;
        }
    }
    ctx->pc = 0x1CB6DCu;
label_1cb6dc:
    // 0x1cb6dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb6e0:
    // 0x1cb6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb6e4:
    // 0x1cb6e4: 0x0  nop
    ctx->pc = 0x1cb6e4u;
    // NOP
label_1cb6e8:
    // 0x1cb6e8: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x1cb6e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1cb6ec:
    // 0x1cb6ec: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1cb6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1cb6f0:
    // 0x1cb6f0: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x1cb6f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1cb6f4:
    // 0x1cb6f4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb6f8:
    // 0x1cb6f8: 0x8c8200c8  lw          $v0, 0xC8($a0)
    ctx->pc = 0x1cb6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
label_1cb6fc:
    // 0x1cb6fc: 0x7fa201a0  sq          $v0, 0x1A0($sp)
    ctx->pc = 0x1cb6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 2));
label_1cb700:
    // 0x1cb700: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cb700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb704:
    // 0x1cb704: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1cb704u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1cb708:
    // 0x1cb708: 0x10430079  beq         $v0, $v1, . + 4 + (0x79 << 2)
label_1cb70c:
    if (ctx->pc == 0x1CB70Cu) {
        ctx->pc = 0x1CB710u;
        goto label_1cb710;
    }
    ctx->pc = 0x1CB708u;
    {
        const bool branch_taken_0x1cb708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cb708) {
            ctx->pc = 0x1CB8F0u;
            goto label_1cb8f0;
        }
    }
    ctx->pc = 0x1CB710u;
label_1cb710:
    // 0x1cb710: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb714:
    // 0x1cb714: 0x8ca400c8  lw          $a0, 0xC8($a1)
    ctx->pc = 0x1cb714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_1cb718:
    // 0x1cb718: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1cb718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cb71c:
    // 0x1cb71c: 0x10820074  beq         $a0, $v0, . + 4 + (0x74 << 2)
label_1cb720:
    if (ctx->pc == 0x1CB720u) {
        ctx->pc = 0x1CB724u;
        goto label_1cb724;
    }
    ctx->pc = 0x1CB71Cu;
    {
        const bool branch_taken_0x1cb71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb71c) {
            ctx->pc = 0x1CB8F0u;
            goto label_1cb8f0;
        }
    }
    ctx->pc = 0x1CB724u;
label_1cb724:
    // 0x1cb724: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb728:
    // 0x1cb728: 0xc4a10100  lwc1        $f1, 0x100($a1)
    ctx->pc = 0x1cb728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb72c:
    // 0x1cb72c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb730:
    // 0x1cb730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb734:
    // 0x1cb734: 0x0  nop
    ctx->pc = 0x1cb734u;
    // NOP
label_1cb738:
    // 0x1cb738: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1cb738u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1cb73c:
    // 0x1cb73c: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x1cb73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb740:
    // 0x1cb740: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1cb740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb744:
    // 0x1cb744: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_1cb748:
    if (ctx->pc == 0x1CB748u) {
        ctx->pc = 0x1CB74Cu;
        goto label_1cb74c;
    }
    ctx->pc = 0x1CB744u;
    {
        const bool branch_taken_0x1cb744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb744) {
            ctx->pc = 0x1CB77Cu;
            goto label_1cb77c;
        }
    }
    ctx->pc = 0x1CB74Cu;
label_1cb74c:
    // 0x1cb74c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cb750:
    // 0x1cb750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1cb750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb754:
    // 0x1cb754: 0x0  nop
    ctx->pc = 0x1cb754u;
    // NOP
label_1cb758:
    // 0x1cb758: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x1cb758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1cb75c:
    // 0x1cb75c: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1cb75cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1cb760:
    // 0x1cb760: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x1cb760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1cb764:
    // 0x1cb764: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb768:
    // 0x1cb768: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1cb768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
label_1cb76c:
    // 0x1cb76c: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1cb76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1cb770:
    // 0x1cb770: 0xac4000c8  sw          $zero, 0xC8($v0)
    ctx->pc = 0x1cb770u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 0));
label_1cb774:
    // 0x1cb774: 0x1000005e  b           . + 4 + (0x5E << 2)
label_1cb778:
    if (ctx->pc == 0x1CB778u) {
        ctx->pc = 0x1CB77Cu;
        goto label_1cb77c;
    }
    ctx->pc = 0x1CB774u;
    {
        const bool branch_taken_0x1cb774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb774) {
            ctx->pc = 0x1CB8F0u;
            goto label_1cb8f0;
        }
    }
    ctx->pc = 0x1CB77Cu;
label_1cb77c:
    // 0x1cb77c: 0xc7a00378  lwc1        $f0, 0x378($sp)
    ctx->pc = 0x1cb77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb780:
    // 0x1cb780: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb784:
    // 0x1cb784: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb788:
    // 0x1cb788: 0x0  nop
    ctx->pc = 0x1cb788u;
    // NOP
label_1cb78c:
    // 0x1cb78c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1cb78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb790:
    // 0x1cb790: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_1cb794:
    if (ctx->pc == 0x1CB794u) {
        ctx->pc = 0x1CB798u;
        goto label_1cb798;
    }
    ctx->pc = 0x1CB790u;
    {
        const bool branch_taken_0x1cb790 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb790) {
            ctx->pc = 0x1CB7CCu;
            goto label_1cb7cc;
        }
    }
    ctx->pc = 0x1CB798u;
label_1cb798:
    // 0x1cb798: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb798u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cb79c:
    // 0x1cb79c: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1cb79cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb7a0:
    // 0x1cb7a0: 0x0  nop
    ctx->pc = 0x1cb7a0u;
    // NOP
label_1cb7a4:
    // 0x1cb7a4: 0xe7a202a4  swc1        $f2, 0x2A4($sp)
    ctx->pc = 0x1cb7a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1cb7a8:
    // 0x1cb7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb7ac:
    // 0x1cb7ac: 0x0  nop
    ctx->pc = 0x1cb7acu;
    // NOP
label_1cb7b0:
    // 0x1cb7b0: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x1cb7b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1cb7b4:
    // 0x1cb7b4: 0xe7a002a0  swc1        $f0, 0x2A0($sp)
    ctx->pc = 0x1cb7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1cb7b8:
    // 0x1cb7b8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cb7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb7bc:
    // 0x1cb7bc: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb7c0:
    // 0x1cb7c0: 0xac4400c8  sw          $a0, 0xC8($v0)
    ctx->pc = 0x1cb7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 4));
label_1cb7c4:
    // 0x1cb7c4: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1cb7c8:
    if (ctx->pc == 0x1CB7C8u) {
        ctx->pc = 0x1CB7CCu;
        goto label_1cb7cc;
    }
    ctx->pc = 0x1CB7C4u;
    {
        const bool branch_taken_0x1cb7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb7c4) {
            ctx->pc = 0x1CB8F0u;
            goto label_1cb8f0;
        }
    }
    ctx->pc = 0x1CB7CCu;
label_1cb7cc:
    // 0x1cb7cc: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x1cb7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb7d0:
    // 0x1cb7d0: 0xc7808280  lwc1        $f0, -0x7D80($gp)
    ctx->pc = 0x1cb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb7d4:
    // 0x1cb7d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cb7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cb7d8:
    // 0x1cb7d8: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_1cb7dc:
    if (ctx->pc == 0x1CB7DCu) {
        ctx->pc = 0x1CB7E0u;
        goto label_1cb7e0;
    }
    ctx->pc = 0x1CB7D8u;
    {
        const bool branch_taken_0x1cb7d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb7d8) {
            ctx->pc = 0x1CB848u;
            goto label_1cb848;
        }
    }
    ctx->pc = 0x1CB7E0u;
label_1cb7e0:
    // 0x1cb7e0: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cb7e4:
    // 0x1cb7e4: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x1cb7e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cb7e8:
    // 0x1cb7e8: 0x0  nop
    ctx->pc = 0x1cb7e8u;
    // NOP
label_1cb7ec:
    // 0x1cb7ec: 0xe7ad02a0  swc1        $f13, 0x2A0($sp)
    ctx->pc = 0x1cb7ecu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1cb7f0:
    // 0x1cb7f0: 0xc7a10378  lwc1        $f1, 0x378($sp)
    ctx->pc = 0x1cb7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cb7f4:
    // 0x1cb7f4: 0xc7808278  lwc1        $f0, -0x7D88($gp)
    ctx->pc = 0x1cb7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb7f8:
    // 0x1cb7f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1cb7f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cb7fc:
    // 0x1cb7fc: 0xc78081b0  lwc1        $f0, -0x7E50($gp)
    ctx->pc = 0x1cb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb800:
    // 0x1cb800: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x1cb800u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cb804:
    // 0x1cb804: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cb804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cb808:
    // 0x1cb808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb80c:
    // 0x1cb80c: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x1cb80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_1cb810:
    // 0x1cb810: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cb810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb814:
    // 0x1cb814: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb814u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb818:
    // 0x1cb818: 0x0  nop
    ctx->pc = 0x1cb818u;
    // NOP
label_1cb81c:
    // 0x1cb81c: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x1cb81cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[12], ctx->f[1]));
label_1cb820:
    // 0x1cb820: 0x4602001c  madd.s      $f0, $f0, $f2
    ctx->pc = 0x1cb820u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[2]));
label_1cb824:
    // 0x1cb824: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1cb824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1cb828:
    // 0x1cb828: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1cb828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb82c:
    // 0x1cb82c: 0x0  nop
    ctx->pc = 0x1cb82cu;
    // NOP
label_1cb830:
    // 0x1cb830: 0xe7a202a8  swc1        $f2, 0x2A8($sp)
    ctx->pc = 0x1cb830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1cb834:
    // 0x1cb834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cb834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb838:
    // 0x1cb838: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb83c:
    // 0x1cb83c: 0xacc200c8  sw          $v0, 0xC8($a2)
    ctx->pc = 0x1cb83cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 2));
label_1cb840:
    // 0x1cb840: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1cb844:
    if (ctx->pc == 0x1CB844u) {
        ctx->pc = 0x1CB848u;
        goto label_1cb848;
    }
    ctx->pc = 0x1CB840u;
    {
        const bool branch_taken_0x1cb840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb840) {
            ctx->pc = 0x1CB8F0u;
            goto label_1cb8f0;
        }
    }
    ctx->pc = 0x1CB848u;
label_1cb848:
    // 0x1cb848: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1cb848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1cb84c:
    // 0x1cb84c: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1cb84cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb850:
    // 0x1cb850: 0x0  nop
    ctx->pc = 0x1cb850u;
    // NOP
label_1cb854:
    // 0x1cb854: 0xe7a102a0  swc1        $f1, 0x2A0($sp)
    ctx->pc = 0x1cb854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_1cb858:
    // 0x1cb858: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb858u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb85c:
    // 0x1cb85c: 0x0  nop
    ctx->pc = 0x1cb85cu;
    // NOP
label_1cb860:
    // 0x1cb860: 0xe7a002a4  swc1        $f0, 0x2A4($sp)
    ctx->pc = 0x1cb860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_1cb864:
    // 0x1cb864: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cb868:
    // 0x1cb868: 0x0  nop
    ctx->pc = 0x1cb868u;
    // NOP
label_1cb86c:
    // 0x1cb86c: 0xe7a002a8  swc1        $f0, 0x2A8($sp)
    ctx->pc = 0x1cb86cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_1cb870:
    // 0x1cb870: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cb874:
    // 0x1cb874: 0x8fb003a0  lw          $s0, 0x3A0($sp)
    ctx->pc = 0x1cb874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb878:
    // 0x1cb878: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x1cb878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
label_1cb87c:
    // 0x1cb87c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cb87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cb880:
    // 0x1cb880: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cb880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cb884:
    // 0x1cb884: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb888:
    // 0x1cb888: 0xe48c00c4  swc1        $f12, 0xC4($a0)
    ctx->pc = 0x1cb888u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 196), bits); }
label_1cb88c:
    // 0x1cb88c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cb88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb890:
    // 0x1cb890: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x1cb890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
label_1cb894:
    // 0x1cb894: 0x7ba20180  lq          $v0, 0x180($sp)
    ctx->pc = 0x1cb894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1cb898:
    // 0x1cb898: 0xa04000d8  sb          $zero, 0xD8($v0)
    ctx->pc = 0x1cb898u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 216), (uint8_t)GPR_U32(ctx, 0));
label_1cb89c:
    // 0x1cb89c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cb8a0:
    // 0x1cb8a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cb8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cb8a4:
    // 0x1cb8a4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb8a8:
    // 0x1cb8a8: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x1cb8a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_1cb8ac:
    // 0x1cb8ac: 0x2405008c  addiu       $a1, $zero, 0x8C
    ctx->pc = 0x1cb8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1cb8b0:
    // 0x1cb8b0: 0xc064df0  jal         func_1937C0
label_1cb8b4:
    if (ctx->pc == 0x1CB8B4u) {
        ctx->pc = 0x1CB8B8u;
        goto label_1cb8b8;
    }
    ctx->pc = 0x1CB8B0u;
    SET_GPR_U32(ctx, 31, 0x1CB8B8u);
    ctx->pc = 0x1937C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1937C0u, 0x1CB8B0u, 0x1CB8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8B8u;
label_1cb8b8:
    // 0x1cb8b8: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cb8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cb8bc:
    // 0x1cb8bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1cb8bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cb8c0:
    // 0x1cb8c0: 0x8f82bbec  lw          $v0, -0x4414($gp)
    ctx->pc = 0x1cb8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1cb8c4:
    // 0x1cb8c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8c8:
    // 0x1cb8c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1cb8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_1cb8cc:
    // 0x1cb8cc: 0x24a57990  addiu       $a1, $a1, 0x7990
    ctx->pc = 0x1cb8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31120));
label_1cb8d0:
    // 0x1cb8d0: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x1cb8d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
label_1cb8d4:
    // 0x1cb8d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cb8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cb8d8:
    // 0x1cb8d8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1cb8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1cb8dc:
    // 0x1cb8dc: 0x7ba60170  lq          $a2, 0x170($sp)
    ctx->pc = 0x1cb8dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1cb8e0:
    // 0x1cb8e0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cb8e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cb8e4:
    // 0x1cb8e4: 0xc08f558  jal         func_23D560
label_1cb8e8:
    if (ctx->pc == 0x1CB8E8u) {
        ctx->pc = 0x1CB8ECu;
        goto label_1cb8ec;
    }
    ctx->pc = 0x1CB8E4u;
    SET_GPR_U32(ctx, 31, 0x1CB8ECu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1CB8E4u, 0x1CB8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8ECu;
label_1cb8ec:
    // 0x1cb8ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8f0:
    // 0x1cb8f0: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb8f4:
    // 0x1cb8f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cb8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cb8f8:
    // 0x1cb8f8: 0xc06479c  jal         func_191E70
label_1cb8fc:
    if (ctx->pc == 0x1CB8FCu) {
        ctx->pc = 0x1CB900u;
        goto label_1cb900;
    }
    ctx->pc = 0x1CB8F8u;
    SET_GPR_U32(ctx, 31, 0x1CB900u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB8F8u, 0x1CB900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB900u;
label_1cb900:
    // 0x1cb900: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x1cb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_1cb904:
    // 0x1cb904: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb908:
    // 0x1cb908: 0x24a600a4  addiu       $a2, $a1, 0xA4
    ctx->pc = 0x1cb908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_1cb90c:
    // 0x1cb90c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1cb90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cb910:
    // 0x1cb910: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1cb910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb914:
    // 0x1cb914: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cb914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb918:
    // 0x1cb918: 0xc05612c  jal         func_1584B0
label_1cb91c:
    if (ctx->pc == 0x1CB91Cu) {
        ctx->pc = 0x1CB920u;
        goto label_1cb920;
    }
    ctx->pc = 0x1CB918u;
    SET_GPR_U32(ctx, 31, 0x1CB920u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB918u, 0x1CB920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB920u;
label_1cb920:
    // 0x1cb920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb924:
    // 0x1cb924: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cb924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cb928:
    // 0x1cb928: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x1cb928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
label_1cb92c:
    // 0x1cb92c: 0x7ba40160  lq          $a0, 0x160($sp)
    ctx->pc = 0x1cb92cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1cb930:
    // 0x1cb930: 0x7ba50150  lq          $a1, 0x150($sp)
    ctx->pc = 0x1cb930u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1cb934:
    // 0x1cb934: 0xc08c49c  jal         func_231270
label_1cb938:
    if (ctx->pc == 0x1CB938u) {
        ctx->pc = 0x1CB93Cu;
        goto label_1cb93c;
    }
    ctx->pc = 0x1CB934u;
    SET_GPR_U32(ctx, 31, 0x1CB93Cu);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1CB934u, 0x1CB93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB93Cu;
label_1cb93c:
    // 0x1cb93c: 0xe7a00374  swc1        $f0, 0x374($sp)
    ctx->pc = 0x1cb93cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 884), bits); }
label_1cb940:
    // 0x1cb940: 0xc7a00374  lwc1        $f0, 0x374($sp)
    ctx->pc = 0x1cb940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cb944:
    // 0x1cb944: 0xe7a002ac  swc1        $f0, 0x2AC($sp)
    ctx->pc = 0x1cb944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 684), bits); }
label_1cb948:
    // 0x1cb948: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb94c:
    // 0x1cb94c: 0xc06479c  jal         func_191E70
label_1cb950:
    if (ctx->pc == 0x1CB950u) {
        ctx->pc = 0x1CB954u;
        goto label_1cb954;
    }
    ctx->pc = 0x1CB94Cu;
    SET_GPR_U32(ctx, 31, 0x1CB954u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB94Cu, 0x1CB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB954u;
label_1cb954:
    // 0x1cb954: 0x7fa20140  sq          $v0, 0x140($sp)
    ctx->pc = 0x1cb954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 2));
label_1cb958:
    // 0x1cb958: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb95c:
    // 0x1cb95c: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1cb95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_1cb960:
    // 0x1cb960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb964:
    // 0x1cb964: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cb964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cb968:
    // 0x1cb968: 0xc05612c  jal         func_1584B0
label_1cb96c:
    if (ctx->pc == 0x1CB96Cu) {
        ctx->pc = 0x1CB970u;
        goto label_1cb970;
    }
    ctx->pc = 0x1CB968u;
    SET_GPR_U32(ctx, 31, 0x1CB970u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB968u, 0x1CB970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB970u;
label_1cb970:
    // 0x1cb970: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cb970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb974:
    // 0x1cb974: 0x7ba40140  lq          $a0, 0x140($sp)
    ctx->pc = 0x1cb974u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1cb978:
    // 0x1cb978: 0xc7ad02a0  lwc1        $f13, 0x2A0($sp)
    ctx->pc = 0x1cb978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cb97c:
    // 0x1cb97c: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x1cb97cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
label_1cb980:
    // 0x1cb980: 0xc7ad02a4  lwc1        $f13, 0x2A4($sp)
    ctx->pc = 0x1cb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cb984:
    // 0x1cb984: 0xc7ae02a8  lwc1        $f14, 0x2A8($sp)
    ctx->pc = 0x1cb984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cb988:
    // 0x1cb988: 0xc7af02ac  lwc1        $f15, 0x2AC($sp)
    ctx->pc = 0x1cb988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cb98c:
    // 0x1cb98c: 0xc08c4d0  jal         func_231340
label_1cb990:
    if (ctx->pc == 0x1CB990u) {
        ctx->pc = 0x1CB994u;
        goto label_1cb994;
    }
    ctx->pc = 0x1CB98Cu;
    SET_GPR_U32(ctx, 31, 0x1CB994u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CB98Cu, 0x1CB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB994u;
label_1cb994:
    // 0x1cb994: 0x7fa20130  sq          $v0, 0x130($sp)
    ctx->pc = 0x1cb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 2));
label_1cb998:
    // 0x1cb998: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb99c:
    // 0x1cb99c: 0xc06479c  jal         func_191E70
label_1cb9a0:
    if (ctx->pc == 0x1CB9A0u) {
        ctx->pc = 0x1CB9A4u;
        goto label_1cb9a4;
    }
    ctx->pc = 0x1CB99Cu;
    SET_GPR_U32(ctx, 31, 0x1CB9A4u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB99Cu, 0x1CB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9A4u;
label_1cb9a4:
    // 0x1cb9a4: 0x7fa20120  sq          $v0, 0x120($sp)
    ctx->pc = 0x1cb9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 2));
label_1cb9a8:
    // 0x1cb9a8: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb9ac:
    // 0x1cb9ac: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1cb9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_1cb9b0:
    // 0x1cb9b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cb9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cb9b4:
    // 0x1cb9b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cb9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cb9b8:
    // 0x1cb9b8: 0xc05612c  jal         func_1584B0
label_1cb9bc:
    if (ctx->pc == 0x1CB9BCu) {
        ctx->pc = 0x1CB9C0u;
        goto label_1cb9c0;
    }
    ctx->pc = 0x1CB9B8u;
    SET_GPR_U32(ctx, 31, 0x1CB9C0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CB9B8u, 0x1CB9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9C0u;
label_1cb9c0:
    // 0x1cb9c0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cb9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cb9c4:
    // 0x1cb9c4: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x1cb9c4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1cb9c8:
    // 0x1cb9c8: 0xc7ac02a0  lwc1        $f12, 0x2A0($sp)
    ctx->pc = 0x1cb9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cb9cc:
    // 0x1cb9cc: 0xc7ad02a4  lwc1        $f13, 0x2A4($sp)
    ctx->pc = 0x1cb9ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cb9d0:
    // 0x1cb9d0: 0xc7ae02a8  lwc1        $f14, 0x2A8($sp)
    ctx->pc = 0x1cb9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cb9d4:
    // 0x1cb9d4: 0xc7af02ac  lwc1        $f15, 0x2AC($sp)
    ctx->pc = 0x1cb9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cb9d8:
    // 0x1cb9d8: 0xc08c4d0  jal         func_231340
label_1cb9dc:
    if (ctx->pc == 0x1CB9DCu) {
        ctx->pc = 0x1CB9E0u;
        goto label_1cb9e0;
    }
    ctx->pc = 0x1CB9D8u;
    SET_GPR_U32(ctx, 31, 0x1CB9E0u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CB9D8u, 0x1CB9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9E0u;
label_1cb9e0:
    // 0x1cb9e0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x1cb9e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_1cb9e4:
    // 0x1cb9e4: 0x10000041  b           . + 4 + (0x41 << 2)
label_1cb9e8:
    if (ctx->pc == 0x1CB9E8u) {
        ctx->pc = 0x1CB9ECu;
        goto label_1cb9ec;
    }
    ctx->pc = 0x1CB9E4u;
    {
        const bool branch_taken_0x1cb9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb9e4) {
            ctx->pc = 0x1CBAECu;
            goto label_1cbaec;
        }
    }
    ctx->pc = 0x1CB9ECu;
label_1cb9ec:
    // 0x1cb9ec: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cb9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cb9f0:
    // 0x1cb9f0: 0xc06479c  jal         func_191E70
label_1cb9f4:
    if (ctx->pc == 0x1CB9F4u) {
        ctx->pc = 0x1CB9F8u;
        goto label_1cb9f8;
    }
    ctx->pc = 0x1CB9F0u;
    SET_GPR_U32(ctx, 31, 0x1CB9F8u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CB9F0u, 0x1CB9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9F8u;
label_1cb9f8:
    // 0x1cb9f8: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x1cb9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_1cb9fc:
    // 0x1cb9fc: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cb9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cba00:
    // 0x1cba00: 0x24a200a4  addiu       $v0, $a1, 0xA4
    ctx->pc = 0x1cba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 164));
label_1cba04:
    // 0x1cba04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cba04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cba08:
    // 0x1cba08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cba08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cba0c:
    // 0x1cba0c: 0xc05612c  jal         func_1584B0
label_1cba10:
    if (ctx->pc == 0x1CBA10u) {
        ctx->pc = 0x1CBA14u;
        goto label_1cba14;
    }
    ctx->pc = 0x1CBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA14u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBA0Cu, 0x1CBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cba14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cba18:
    // 0x1cba18: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1cba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cba1c:
    // 0x1cba1c: 0x7ba40100  lq          $a0, 0x100($sp)
    ctx->pc = 0x1cba1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1cba20:
    // 0x1cba20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cba20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cba24:
    // 0x1cba24: 0xc08c49c  jal         func_231270
label_1cba28:
    if (ctx->pc == 0x1CBA28u) {
        ctx->pc = 0x1CBA2Cu;
        goto label_1cba2c;
    }
    ctx->pc = 0x1CBA24u;
    SET_GPR_U32(ctx, 31, 0x1CBA2Cu);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1CBA24u, 0x1CBA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA2Cu;
label_1cba2c:
    // 0x1cba2c: 0xe7a00370  swc1        $f0, 0x370($sp)
    ctx->pc = 0x1cba2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_1cba30:
    // 0x1cba30: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cba30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cba34:
    // 0x1cba34: 0xc06479c  jal         func_191E70
label_1cba38:
    if (ctx->pc == 0x1CBA38u) {
        ctx->pc = 0x1CBA3Cu;
        goto label_1cba3c;
    }
    ctx->pc = 0x1CBA34u;
    SET_GPR_U32(ctx, 31, 0x1CBA3Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBA34u, 0x1CBA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA3Cu;
label_1cba3c:
    // 0x1cba3c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x1cba3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_1cba40:
    // 0x1cba40: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cba40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cba44:
    // 0x1cba44: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cba44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cba48:
    // 0x1cba48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cba48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cba4c:
    // 0x1cba4c: 0xc05612c  jal         func_1584B0
label_1cba50:
    if (ctx->pc == 0x1CBA50u) {
        ctx->pc = 0x1CBA54u;
        goto label_1cba54;
    }
    ctx->pc = 0x1CBA4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA54u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBA4Cu, 0x1CBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA54u;
label_1cba54:
    // 0x1cba54: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cba54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cba58:
    // 0x1cba58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cba58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cba5c:
    // 0x1cba5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cba5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cba60:
    // 0x1cba60: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cba60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cba64:
    // 0x1cba64: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1cba64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cba68:
    // 0x1cba68: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cba6c:
    // 0x1cba6c: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1cba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_1cba70:
    // 0x1cba70: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x1cba70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1cba74:
    // 0x1cba74: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cba74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cba78:
    // 0x1cba78: 0x7ba400f0  lq          $a0, 0xF0($sp)
    ctx->pc = 0x1cba78u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1cba7c:
    // 0x1cba7c: 0xc7af0370  lwc1        $f15, 0x370($sp)
    ctx->pc = 0x1cba7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cba80:
    // 0x1cba80: 0xc08c4d0  jal         func_231340
label_1cba84:
    if (ctx->pc == 0x1CBA84u) {
        ctx->pc = 0x1CBA88u;
        goto label_1cba88;
    }
    ctx->pc = 0x1CBA80u;
    SET_GPR_U32(ctx, 31, 0x1CBA88u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CBA80u, 0x1CBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA88u;
label_1cba88:
    // 0x1cba88: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cba88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cba8c:
    // 0x1cba8c: 0xc06479c  jal         func_191E70
label_1cba90:
    if (ctx->pc == 0x1CBA90u) {
        ctx->pc = 0x1CBA94u;
        goto label_1cba94;
    }
    ctx->pc = 0x1CBA8Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA94u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBA8Cu, 0x1CBA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA94u;
label_1cba94:
    // 0x1cba94: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1cba94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1cba98:
    // 0x1cba98: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cba9c:
    // 0x1cba9c: 0x244500a4  addiu       $a1, $v0, 0xA4
    ctx->pc = 0x1cba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbaa0:
    // 0x1cbaa0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1cbaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaa4:
    // 0x1cbaa4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1cbaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cbaa8:
    // 0x1cbaa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbaa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaac:
    // 0x1cbaac: 0xc05612c  jal         func_1584B0
label_1cbab0:
    if (ctx->pc == 0x1CBAB0u) {
        ctx->pc = 0x1CBAB4u;
        goto label_1cbab4;
    }
    ctx->pc = 0x1CBAACu;
    SET_GPR_U32(ctx, 31, 0x1CBAB4u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBAACu, 0x1CBAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAB4u;
label_1cbab4:
    // 0x1cbab4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbab8:
    // 0x1cbab8: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x1cbab8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_1cbabc:
    // 0x1cbabc: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x1cbabcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbac0:
    // 0x1cbac0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1cbac0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_1cbac4:
    // 0x1cbac4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1cbac4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbac8:
    // 0x1cbac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cbacc:
    // 0x1cbacc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1cbaccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cbad0:
    // 0x1cbad0: 0x7ba400d0  lq          $a0, 0xD0($sp)
    ctx->pc = 0x1cbad0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1cbad4:
    // 0x1cbad4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cbad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbad8:
    // 0x1cbad8: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x1cbad8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
label_1cbadc:
    // 0x1cbadc: 0xc7af0370  lwc1        $f15, 0x370($sp)
    ctx->pc = 0x1cbadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cbae0:
    // 0x1cbae0: 0xc08c4d0  jal         func_231340
label_1cbae4:
    if (ctx->pc == 0x1CBAE4u) {
        ctx->pc = 0x1CBAE8u;
        goto label_1cbae8;
    }
    ctx->pc = 0x1CBAE0u;
    SET_GPR_U32(ctx, 31, 0x1CBAE8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CBAE0u, 0x1CBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBAE8u;
label_1cbae8:
    // 0x1cbae8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaec:
    // 0x1cbaec: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbaf0:
    // 0x1cbaf0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1cbaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1cbaf4:
    // 0x1cbaf4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1cbaf4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1cbaf8:
    // 0x1cbaf8: 0x8c4200c8  lw          $v0, 0xC8($v0)
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1cbafc:
    // 0x1cbafc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cbafcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbb00:
    // 0x1cbb00: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_1cbb04:
    if (ctx->pc == 0x1CBB04u) {
        ctx->pc = 0x1CBB08u;
        goto label_1cbb08;
    }
    ctx->pc = 0x1CBB00u;
    {
        const bool branch_taken_0x1cbb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cbb00) {
            ctx->pc = 0x1CBB1Cu;
            goto label_1cbb1c;
        }
    }
    ctx->pc = 0x1CBB08u;
label_1cbb08:
    // 0x1cbb08: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb0c:
    // 0x1cbb0c: 0x8ca200c8  lw          $v0, 0xC8($a1)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 200)));
label_1cbb10:
    // 0x1cbb10: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cbb10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cbb14:
    // 0x1cbb14: 0x14450032  bne         $v0, $a1, . + 4 + (0x32 << 2)
label_1cbb18:
    if (ctx->pc == 0x1CBB18u) {
        ctx->pc = 0x1CBB1Cu;
        goto label_1cbb1c;
    }
    ctx->pc = 0x1CBB14u;
    {
        const bool branch_taken_0x1cbb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cbb14) {
            ctx->pc = 0x1CBBE0u;
            goto label_1cbbe0;
        }
    }
    ctx->pc = 0x1CBB1Cu;
label_1cbb1c:
    // 0x1cbb1c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb20:
    // 0x1cbb20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb24:
    // 0x1cbb24: 0xc06479c  jal         func_191E70
label_1cbb28:
    if (ctx->pc == 0x1CBB28u) {
        ctx->pc = 0x1CBB2Cu;
        goto label_1cbb2c;
    }
    ctx->pc = 0x1CBB24u;
    SET_GPR_U32(ctx, 31, 0x1CBB2Cu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBB24u, 0x1CBB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB2Cu;
label_1cbb2c:
    // 0x1cbb2c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x1cbb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_1cbb30:
    // 0x1cbb30: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb34:
    // 0x1cbb34: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1cbb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_1cbb38:
    // 0x1cbb38: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1cbb38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1cbb3c:
    // 0x1cbb3c: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cbb40:
    // 0x1cbb40: 0xc0739b0  jal         func_1CE6C0
label_1cbb44:
    if (ctx->pc == 0x1CBB44u) {
        ctx->pc = 0x1CBB48u;
        goto label_1cbb48;
    }
    ctx->pc = 0x1CBB40u;
    SET_GPR_U32(ctx, 31, 0x1CBB48u);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CBB40u, 0x1CBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB48u;
label_1cbb48:
    // 0x1cbb48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbb48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb4c:
    // 0x1cbb4c: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1cbb50:
    // 0x1cbb50: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb54:
    // 0x1cbb54: 0x244300a4  addiu       $v1, $v0, 0xA4
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbb58:
    // 0x1cbb58: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1cbb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb5c:
    // 0x1cbb5c: 0xc05612c  jal         func_1584B0
label_1cbb60:
    if (ctx->pc == 0x1CBB60u) {
        ctx->pc = 0x1CBB64u;
        goto label_1cbb64;
    }
    ctx->pc = 0x1CBB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB64u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBB5Cu, 0x1CBB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB64u;
label_1cbb64:
    // 0x1cbb64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbb68:
    // 0x1cbb68: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1cbb68u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1cbb6c:
    // 0x1cbb6c: 0xc08c49c  jal         func_231270
label_1cbb70:
    if (ctx->pc == 0x1CBB70u) {
        ctx->pc = 0x1CBB74u;
        goto label_1cbb74;
    }
    ctx->pc = 0x1CBB6Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB74u);
    ctx->pc = 0x231270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231270u, 0x1CBB6Cu, 0x1CBB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB74u;
label_1cbb74:
    // 0x1cbb74: 0xe7a0036c  swc1        $f0, 0x36C($sp)
    ctx->pc = 0x1cbb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 876), bits); }
label_1cbb78:
    // 0x1cbb78: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb7c:
    // 0x1cbb7c: 0xc06479c  jal         func_191E70
label_1cbb80:
    if (ctx->pc == 0x1CBB80u) {
        ctx->pc = 0x1CBB84u;
        goto label_1cbb84;
    }
    ctx->pc = 0x1CBB7Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB84u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBB7Cu, 0x1CBB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB84u;
label_1cbb84:
    // 0x1cbb84: 0x7fa20290  sq          $v0, 0x290($sp)
    ctx->pc = 0x1cbb84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 2));
label_1cbb88:
    // 0x1cbb88: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbb8c:
    // 0x1cbb8c: 0x8c6400dc  lw          $a0, 0xDC($v1)
    ctx->pc = 0x1cbb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_1cbb90:
    // 0x1cbb90: 0xc0739b0  jal         func_1CE6C0
label_1cbb94:
    if (ctx->pc == 0x1CBB94u) {
        ctx->pc = 0x1CBB98u;
        goto label_1cbb98;
    }
    ctx->pc = 0x1CBB90u;
    SET_GPR_U32(ctx, 31, 0x1CBB98u);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CBB90u, 0x1CBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBB98u;
label_1cbb98:
    // 0x1cbb98: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_1cbb9c:
    // 0x1cbb9c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cbb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbba0:
    // 0x1cbba0: 0x246400a4  addiu       $a0, $v1, 0xA4
    ctx->pc = 0x1cbba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 164));
label_1cbba4:
    // 0x1cbba4: 0xc05612c  jal         func_1584B0
label_1cbba8:
    if (ctx->pc == 0x1CBBA8u) {
        ctx->pc = 0x1CBBACu;
        goto label_1cbbac;
    }
    ctx->pc = 0x1CBBA4u;
    SET_GPR_U32(ctx, 31, 0x1CBBACu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBBA4u, 0x1CBBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBACu;
label_1cbbac:
    // 0x1cbbac: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbbb0:
    // 0x1cbbb0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cbbb4:
    // 0x1cbbb4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cbbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbbb8:
    // 0x1cbbb8: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cbbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cbbbc:
    // 0x1cbbbc: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x1cbbbcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cbbc0:
    // 0x1cbbc0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1cbbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1cbbc4:
    // 0x1cbbc4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1cbbc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1cbbc8:
    // 0x1cbbc8: 0x7ba40290  lq          $a0, 0x290($sp)
    ctx->pc = 0x1cbbc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_1cbbcc:
    // 0x1cbbcc: 0xc7af036c  lwc1        $f15, 0x36C($sp)
    ctx->pc = 0x1cbbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cbbd0:
    // 0x1cbbd0: 0xc08c4d0  jal         func_231340
label_1cbbd4:
    if (ctx->pc == 0x1CBBD4u) {
        ctx->pc = 0x1CBBD8u;
        goto label_1cbbd8;
    }
    ctx->pc = 0x1CBBD0u;
    SET_GPR_U32(ctx, 31, 0x1CBBD8u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CBBD0u, 0x1CBBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBD8u;
label_1cbbd8:
    // 0x1cbbd8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1cbbdc:
    if (ctx->pc == 0x1CBBDCu) {
        ctx->pc = 0x1CBBE0u;
        goto label_1cbbe0;
    }
    ctx->pc = 0x1CBBD8u;
    {
        const bool branch_taken_0x1cbbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbd8) {
            ctx->pc = 0x1CBC40u;
            goto label_1cbc40;
        }
    }
    ctx->pc = 0x1CBBE0u;
label_1cbbe0:
    // 0x1cbbe0: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbbe4:
    // 0x1cbbe4: 0xc06479c  jal         func_191E70
label_1cbbe8:
    if (ctx->pc == 0x1CBBE8u) {
        ctx->pc = 0x1CBBECu;
        goto label_1cbbec;
    }
    ctx->pc = 0x1CBBE4u;
    SET_GPR_U32(ctx, 31, 0x1CBBECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBBE4u, 0x1CBBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBBECu;
label_1cbbec:
    // 0x1cbbec: 0x7fa20280  sq          $v0, 0x280($sp)
    ctx->pc = 0x1cbbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 2));
label_1cbbf0:
    // 0x1cbbf0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbbf4:
    // 0x1cbbf4: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cbbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cbbf8:
    // 0x1cbbf8: 0xc0739b0  jal         func_1CE6C0
label_1cbbfc:
    if (ctx->pc == 0x1CBBFCu) {
        ctx->pc = 0x1CBC00u;
        goto label_1cbc00;
    }
    ctx->pc = 0x1CBBF8u;
    SET_GPR_U32(ctx, 31, 0x1CBC00u);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CBBF8u, 0x1CBC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC00u;
label_1cbc00:
    // 0x1cbc00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc04:
    // 0x1cbc04: 0x2485000c  addiu       $a1, $a0, 0xC
    ctx->pc = 0x1cbc04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1cbc08:
    // 0x1cbc08: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbc0c:
    // 0x1cbc0c: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cbc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbc10:
    // 0x1cbc10: 0xc05612c  jal         func_1584B0
label_1cbc14:
    if (ctx->pc == 0x1CBC14u) {
        ctx->pc = 0x1CBC18u;
        goto label_1cbc18;
    }
    ctx->pc = 0x1CBC10u;
    SET_GPR_U32(ctx, 31, 0x1CBC18u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBC10u, 0x1CBC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC18u;
label_1cbc18:
    // 0x1cbc18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1cbc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbc1c:
    // 0x1cbc1c: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1cbc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_1cbc20:
    // 0x1cbc20: 0x44857800  mtc1        $a1, $f15
    ctx->pc = 0x1cbc20u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1cbc24:
    // 0x1cbc24: 0x7ba40280  lq          $a0, 0x280($sp)
    ctx->pc = 0x1cbc24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_1cbc28:
    // 0x1cbc28: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cbc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc2c:
    // 0x1cbc2c: 0xc78c832c  lwc1        $f12, -0x7CD4($gp)
    ctx->pc = 0x1cbc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cbc30:
    // 0x1cbc30: 0xc78d832c  lwc1        $f13, -0x7CD4($gp)
    ctx->pc = 0x1cbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cbc34:
    // 0x1cbc34: 0xc78e832c  lwc1        $f14, -0x7CD4($gp)
    ctx->pc = 0x1cbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cbc38:
    // 0x1cbc38: 0xc08c4d0  jal         func_231340
label_1cbc3c:
    if (ctx->pc == 0x1CBC3Cu) {
        ctx->pc = 0x1CBC40u;
        goto label_1cbc40;
    }
    ctx->pc = 0x1CBC38u;
    SET_GPR_U32(ctx, 31, 0x1CBC40u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x1CBC38u, 0x1CBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC40u;
label_1cbc40:
    // 0x1cbc40: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbc44:
    // 0x1cbc44: 0x8c4400c8  lw          $a0, 0xC8($v0)
    ctx->pc = 0x1cbc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_1cbc48:
    // 0x1cbc48: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cbc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cbc4c:
    // 0x1cbc4c: 0x7fa20270  sq          $v0, 0x270($sp)
    ctx->pc = 0x1cbc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 2));
label_1cbc50:
    // 0x1cbc50: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x1cbc50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_1cbc54:
    // 0x1cbc54: 0x148200da  bne         $a0, $v0, . + 4 + (0xDA << 2)
label_1cbc58:
    if (ctx->pc == 0x1CBC58u) {
        ctx->pc = 0x1CBC5Cu;
        goto label_1cbc5c;
    }
    ctx->pc = 0x1CBC54u;
    {
        const bool branch_taken_0x1cbc54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbc54) {
            ctx->pc = 0x1CBFC0u;
            goto label_1cbfc0;
        }
    }
    ctx->pc = 0x1CBC5Cu;
label_1cbc5c:
    // 0x1cbc5c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbc60:
    // 0x1cbc60: 0xc06479c  jal         func_191E70
label_1cbc64:
    if (ctx->pc == 0x1CBC64u) {
        ctx->pc = 0x1CBC68u;
        goto label_1cbc68;
    }
    ctx->pc = 0x1CBC60u;
    SET_GPR_U32(ctx, 31, 0x1CBC68u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBC60u, 0x1CBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC68u;
label_1cbc68:
    // 0x1cbc68: 0x7fa20260  sq          $v0, 0x260($sp)
    ctx->pc = 0x1cbc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 2));
label_1cbc6c:
    // 0x1cbc6c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbc70:
    // 0x1cbc70: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbc74:
    // 0x1cbc74: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1cbc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1cbc78:
    // 0x1cbc78: 0x7fa20250  sq          $v0, 0x250($sp)
    ctx->pc = 0x1cbc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
label_1cbc7c:
    // 0x1cbc7c: 0x7ba50250  lq          $a1, 0x250($sp)
    ctx->pc = 0x1cbc7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1cbc80:
    // 0x1cbc80: 0xc05612c  jal         func_1584B0
label_1cbc84:
    if (ctx->pc == 0x1CBC84u) {
        ctx->pc = 0x1CBC88u;
        goto label_1cbc88;
    }
    ctx->pc = 0x1CBC80u;
    SET_GPR_U32(ctx, 31, 0x1CBC88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBC80u, 0x1CBC88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBC88u;
label_1cbc88:
    // 0x1cbc88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1cbc88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc8c:
    // 0x1cbc8c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cbc90:
    // 0x1cbc90: 0x7ba40260  lq          $a0, 0x260($sp)
    ctx->pc = 0x1cbc90u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1cbc94:
    // 0x1cbc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbc98:
    // 0x1cbc98: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cbc98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc9c:
    // 0x1cbc9c: 0xc08c8dc  jal         func_232370
label_1cbca0:
    if (ctx->pc == 0x1CBCA0u) {
        ctx->pc = 0x1CBCA4u;
        goto label_1cbca4;
    }
    ctx->pc = 0x1CBC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBCA4u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CBC9Cu, 0x1CBCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCA4u;
label_1cbca4:
    // 0x1cbca4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbca8:
    // 0x1cbca8: 0x3c064040  lui         $a2, 0x4040
    ctx->pc = 0x1cbca8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16448 << 16));
label_1cbcac:
    // 0x1cbcac: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1cbcacu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cbcb0:
    // 0x1cbcb0: 0xc7a1039c  lwc1        $f1, 0x39C($sp)
    ctx->pc = 0x1cbcb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbcb4:
    // 0x1cbcb4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbcb8:
    // 0x1cbcb8: 0xc44c00b8  lwc1        $f12, 0xB8($v0)
    ctx->pc = 0x1cbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cbcbc:
    // 0x1cbcbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbcc0:
    // 0x1cbcc0: 0x0  nop
    ctx->pc = 0x1cbcc0u;
    // NOP
label_1cbcc4:
    // 0x1cbcc4: 0x460c0018  adda.s      $f0, $f12
    ctx->pc = 0x1cbcc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[12]));
label_1cbcc8:
    // 0x1cbcc8: 0x4601131c  madd.s      $f12, $f2, $f1
    ctx->pc = 0x1cbcc8u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_1cbccc:
    // 0x1cbccc: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x1cbcccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_1cbcd0:
    // 0x1cbcd0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x1cbcd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cbcd4:
    // 0x1cbcd4: 0xc0c39e2  jal         func_30E788
label_1cbcd8:
    if (ctx->pc == 0x1CBCD8u) {
        ctx->pc = 0x1CBCDCu;
        goto label_1cbcdc;
    }
    ctx->pc = 0x1CBCD4u;
    SET_GPR_U32(ctx, 31, 0x1CBCDCu);
    ctx->pc = 0x30E788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E788u, 0x1CBCD4u, 0x1CBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBCDCu;
label_1cbcdc:
    // 0x1cbcdc: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbce0:
    // 0x1cbce0: 0xe44000b8  swc1        $f0, 0xB8($v0)
    ctx->pc = 0x1cbce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 184), bits); }
label_1cbce4:
    // 0x1cbce4: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1cbce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_1cbce8:
    // 0x1cbce8: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x1cbce8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cbcec:
    // 0x1cbcec: 0x0  nop
    ctx->pc = 0x1cbcecu;
    // NOP
label_1cbcf0:
    // 0x1cbcf0: 0xe7a30368  swc1        $f3, 0x368($sp)
    ctx->pc = 0x1cbcf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_1cbcf4:
    // 0x1cbcf4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbcf8:
    // 0x1cbcf8: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x1cbcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
label_1cbcfc:
    // 0x1cbcfc: 0x7ba20240  lq          $v0, 0x240($sp)
    ctx->pc = 0x1cbcfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1cbd00:
    // 0x1cbd00: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x1cbd00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbd04:
    // 0x1cbd04: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cbd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cbd08:
    // 0x1cbd08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cbd08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbd0c:
    // 0x1cbd0c: 0x0  nop
    ctx->pc = 0x1cbd0cu;
    // NOP
label_1cbd10:
    // 0x1cbd10: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1cbd10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cbd14:
    // 0x1cbd14: 0x45000019  bc1f        . + 4 + (0x19 << 2)
label_1cbd18:
    if (ctx->pc == 0x1CBD18u) {
        ctx->pc = 0x1CBD1Cu;
        goto label_1cbd1c;
    }
    ctx->pc = 0x1CBD14u;
    {
        const bool branch_taken_0x1cbd14 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cbd14) {
            ctx->pc = 0x1CBD7Cu;
            goto label_1cbd7c;
        }
    }
    ctx->pc = 0x1CBD1Cu;
label_1cbd1c:
    // 0x1cbd1c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbd20:
    // 0x1cbd20: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1cbd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1cbd24:
    // 0x1cbd24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cbd24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbd28:
    // 0x1cbd28: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x1cbd28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbd2c:
    // 0x1cbd2c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1cbd2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1cbd30:
    // 0x1cbd30: 0xc78380b0  lwc1        $f3, -0x7F50($gp)
    ctx->pc = 0x1cbd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cbd34:
    // 0x1cbd34: 0xc78280b0  lwc1        $f2, -0x7F50($gp)
    ctx->pc = 0x1cbd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbd38:
    // 0x1cbd38: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cbd38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbd3c:
    // 0x1cbd3c: 0x0  nop
    ctx->pc = 0x1cbd3cu;
    // NOP
label_1cbd40:
    // 0x1cbd40: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1cbd40u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1cbd44:
    // 0x1cbd44: 0x46001b1c  madd.s      $f12, $f3, $f0
    ctx->pc = 0x1cbd44u;
    ctx->f[12] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1cbd48:
    // 0x1cbd48: 0xc0c38f0  jal         func_30E3C0
label_1cbd4c:
    if (ctx->pc == 0x1CBD4Cu) {
        ctx->pc = 0x1CBD50u;
        goto label_1cbd50;
    }
    ctx->pc = 0x1CBD48u;
    SET_GPR_U32(ctx, 31, 0x1CBD50u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CBD48u, 0x1CBD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBD50u;
label_1cbd50:
    // 0x1cbd50: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x1cbd50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
label_1cbd54:
    // 0x1cbd54: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x1cbd54u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cbd58:
    // 0x1cbd58: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x1cbd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_1cbd5c:
    // 0x1cbd5c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cbd5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cbd60:
    // 0x1cbd60: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cbd60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbd64:
    // 0x1cbd64: 0x0  nop
    ctx->pc = 0x1cbd64u;
    // NOP
label_1cbd68:
    // 0x1cbd68: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1cbd68u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1cbd6c:
    // 0x1cbd6c: 0x4600601c  madd.s      $f0, $f12, $f0
    ctx->pc = 0x1cbd6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[12], ctx->f[0]));
label_1cbd70:
    // 0x1cbd70: 0xe7a00368  swc1        $f0, 0x368($sp)
    ctx->pc = 0x1cbd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_1cbd74:
    // 0x1cbd74: 0x10000016  b           . + 4 + (0x16 << 2)
label_1cbd78:
    if (ctx->pc == 0x1CBD78u) {
        ctx->pc = 0x1CBD7Cu;
        goto label_1cbd7c;
    }
    ctx->pc = 0x1CBD74u;
    {
        const bool branch_taken_0x1cbd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd74) {
            ctx->pc = 0x1CBDD0u;
            goto label_1cbdd0;
        }
    }
    ctx->pc = 0x1CBD7Cu;
label_1cbd7c:
    // 0x1cbd7c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbd80:
    // 0x1cbd80: 0xc48100b8  lwc1        $f1, 0xB8($a0)
    ctx->pc = 0x1cbd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbd84:
    // 0x1cbd84: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x1cbd84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_1cbd88:
    // 0x1cbd88: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1cbd88u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbd8c:
    // 0x1cbd8c: 0x0  nop
    ctx->pc = 0x1cbd8cu;
    // NOP
label_1cbd90:
    // 0x1cbd90: 0x46000941  sub.s       $f5, $f1, $f0
    ctx->pc = 0x1cbd90u;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cbd94:
    // 0x1cbd94: 0xc78480b0  lwc1        $f4, -0x7F50($gp)
    ctx->pc = 0x1cbd94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cbd98:
    // 0x1cbd98: 0x46052302  mul.s       $f12, $f4, $f5
    ctx->pc = 0x1cbd98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
label_1cbd9c:
    // 0x1cbd9c: 0xc0c38f0  jal         func_30E3C0
label_1cbda0:
    if (ctx->pc == 0x1CBDA0u) {
        ctx->pc = 0x1CBDA4u;
        goto label_1cbda4;
    }
    ctx->pc = 0x1CBD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBDA4u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1CBD9Cu, 0x1CBDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDA4u;
label_1cbda4:
    // 0x1cbda4: 0x3c063e80  lui         $a2, 0x3E80
    ctx->pc = 0x1cbda4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16000 << 16));
label_1cbda8:
    // 0x1cbda8: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x1cbda8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cbdac:
    // 0x1cbdac: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x1cbdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_1cbdb0:
    // 0x1cbdb0: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x1cbdb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
label_1cbdb4:
    // 0x1cbdb4: 0x7ba20230  lq          $v0, 0x230($sp)
    ctx->pc = 0x1cbdb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1cbdb8:
    // 0x1cbdb8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1cbdb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1cbdbc:
    // 0x1cbdbc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1cbdbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbdc0:
    // 0x1cbdc0: 0x0  nop
    ctx->pc = 0x1cbdc0u;
    // NOP
label_1cbdc4:
    // 0x1cbdc4: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1cbdc4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
label_1cbdc8:
    // 0x1cbdc8: 0x4600185c  madd.s      $f1, $f3, $f0
    ctx->pc = 0x1cbdc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_1cbdcc:
    // 0x1cbdcc: 0xe7a10368  swc1        $f1, 0x368($sp)
    ctx->pc = 0x1cbdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_1cbdd0:
    // 0x1cbdd0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cbdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbdd4:
    // 0x1cbdd4: 0x8c6400dc  lw          $a0, 0xDC($v1)
    ctx->pc = 0x1cbdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
label_1cbdd8:
    // 0x1cbdd8: 0x27a202c8  addiu       $v0, $sp, 0x2C8
    ctx->pc = 0x1cbdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_1cbddc:
    // 0x1cbddc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbde0:
    // 0x1cbde0: 0x27a302d0  addiu       $v1, $sp, 0x2D0
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_1cbde4:
    // 0x1cbde4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1cbde4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1cbde8:
    // 0x1cbde8: 0xc073998  jal         func_1CE660
label_1cbdec:
    if (ctx->pc == 0x1CBDECu) {
        ctx->pc = 0x1CBDF0u;
        goto label_1cbdf0;
    }
    ctx->pc = 0x1CBDE8u;
    SET_GPR_U32(ctx, 31, 0x1CBDF0u);
    ctx->pc = 0x1CE660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE660u, 0x1CBDE8u, 0x1CBDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBDF0u;
label_1cbdf0:
    // 0x1cbdf0: 0x27a602b0  addiu       $a2, $sp, 0x2B0
    ctx->pc = 0x1cbdf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1cbdf4:
    // 0x1cbdf4: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x1cbdf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cbdf8:
    // 0x1cbdf8: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_1cbdfc:
    if (ctx->pc == 0x1CBDFCu) {
        ctx->pc = 0x1CBE00u;
        goto label_1cbe00;
    }
    ctx->pc = 0x1CBDF8u;
    {
        const bool branch_taken_0x1cbdf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdf8) {
            ctx->pc = 0x1CBE20u;
            goto label_1cbe20;
        }
    }
    ctx->pc = 0x1CBE00u;
label_1cbe00:
    // 0x1cbe00: 0xc01021  addu        $v0, $a2, $zero
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 0)));
label_1cbe04:
    // 0x1cbe04: 0xa0c00000  sb          $zero, 0x0($a2)
    ctx->pc = 0x1cbe04u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cbe08:
    // 0x1cbe08: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1cbe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1cbe0c:
    // 0x1cbe0c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_1cbe10:
    // 0x1cbe10: 0x0  nop
    ctx->pc = 0x1cbe10u;
    // NOP
label_1cbe14:
    // 0x1cbe14: 0x0  nop
    ctx->pc = 0x1cbe14u;
    // NOP
label_1cbe18:
    // 0x1cbe18: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_1cbe1c:
    if (ctx->pc == 0x1CBE1Cu) {
        ctx->pc = 0x1CBE20u;
        goto label_1cbe20;
    }
    ctx->pc = 0x1CBE18u;
    {
        const bool branch_taken_0x1cbe18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbe18) {
            ctx->pc = 0x1CBE04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cbe04;
        }
    }
    ctx->pc = 0x1CBE20u;
label_1cbe20:
    // 0x1cbe20: 0xc7a002c8  lwc1        $f0, 0x2C8($sp)
    ctx->pc = 0x1cbe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbe24:
    // 0x1cbe24: 0xe7a002b0  swc1        $f0, 0x2B0($sp)
    ctx->pc = 0x1cbe24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_1cbe28:
    // 0x1cbe28: 0xc7a502cc  lwc1        $f5, 0x2CC($sp)
    ctx->pc = 0x1cbe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1cbe2c:
    // 0x1cbe2c: 0xe7a502b4  swc1        $f5, 0x2B4($sp)
    ctx->pc = 0x1cbe2cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_1cbe30:
    // 0x1cbe30: 0xe7a50348  swc1        $f5, 0x348($sp)
    ctx->pc = 0x1cbe30u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_1cbe34:
    // 0x1cbe34: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x1cbe34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbe38:
    // 0x1cbe38: 0x27a202b0  addiu       $v0, $sp, 0x2B0
    ctx->pc = 0x1cbe38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1cbe3c:
    // 0x1cbe3c: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x1cbe3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
label_1cbe40:
    // 0x1cbe40: 0x7ba40220  lq          $a0, 0x220($sp)
    ctx->pc = 0x1cbe40u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1cbe44:
    // 0x1cbe44: 0x27a502b0  addiu       $a1, $sp, 0x2B0
    ctx->pc = 0x1cbe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1cbe48:
    // 0x1cbe48: 0x8c6600b0  lw          $a2, 0xB0($v1)
    ctx->pc = 0x1cbe48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 176)));
label_1cbe4c:
    // 0x1cbe4c: 0xc104d64  jal         func_413590
label_1cbe50:
    if (ctx->pc == 0x1CBE50u) {
        ctx->pc = 0x1CBE54u;
        goto label_1cbe54;
    }
    ctx->pc = 0x1CBE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBE54u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CBE4Cu, 0x1CBE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE54u;
label_1cbe54:
    // 0x1cbe54: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbe54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe58:
    // 0x1cbe58: 0xc7a402b0  lwc1        $f4, 0x2B0($sp)
    ctx->pc = 0x1cbe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1cbe5c:
    // 0x1cbe5c: 0xc7839694  lwc1        $f3, -0x696C($gp)
    ctx->pc = 0x1cbe5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cbe60:
    // 0x1cbe60: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x1cbe60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_1cbe64:
    // 0x1cbe64: 0xe7a102b0  swc1        $f1, 0x2B0($sp)
    ctx->pc = 0x1cbe64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_1cbe68:
    // 0x1cbe68: 0xc7a202b4  lwc1        $f2, 0x2B4($sp)
    ctx->pc = 0x1cbe68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbe6c:
    // 0x1cbe6c: 0xc7819698  lwc1        $f1, -0x6968($gp)
    ctx->pc = 0x1cbe6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbe70:
    // 0x1cbe70: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1cbe70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1cbe74:
    // 0x1cbe74: 0xe7a002b4  swc1        $f0, 0x2B4($sp)
    ctx->pc = 0x1cbe74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_1cbe78:
    // 0x1cbe78: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbe7c:
    // 0x1cbe7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe80:
    // 0x1cbe80: 0xc06479c  jal         func_191E70
label_1cbe84:
    if (ctx->pc == 0x1CBE84u) {
        ctx->pc = 0x1CBE88u;
        goto label_1cbe88;
    }
    ctx->pc = 0x1CBE80u;
    SET_GPR_U32(ctx, 31, 0x1CBE88u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBE80u, 0x1CBE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE88u;
label_1cbe88:
    // 0x1cbe88: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x1cbe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
label_1cbe8c:
    // 0x1cbe8c: 0x8fa603a0  lw          $a2, 0x3A0($sp)
    ctx->pc = 0x1cbe8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbe90:
    // 0x1cbe90: 0x24c200a4  addiu       $v0, $a2, 0xA4
    ctx->pc = 0x1cbe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 164));
label_1cbe94:
    // 0x1cbe94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbe94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe98:
    // 0x1cbe98: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1cbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1cbe9c:
    // 0x1cbe9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbe9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbea0:
    // 0x1cbea0: 0xc05612c  jal         func_1584B0
label_1cbea4:
    if (ctx->pc == 0x1CBEA4u) {
        ctx->pc = 0x1CBEA8u;
        goto label_1cbea8;
    }
    ctx->pc = 0x1CBEA0u;
    SET_GPR_U32(ctx, 31, 0x1CBEA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBEA0u, 0x1CBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEA8u;
label_1cbea8:
    // 0x1cbea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeac:
    // 0x1cbeac: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cbeb0:
    // 0x1cbeb0: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x1cbeb0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1cbeb4:
    // 0x1cbeb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeb8:
    // 0x1cbeb8: 0x27a602c0  addiu       $a2, $sp, 0x2C0
    ctx->pc = 0x1cbeb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1cbebc:
    // 0x1cbebc: 0xc08c6c8  jal         func_231B20
label_1cbec0:
    if (ctx->pc == 0x1CBEC0u) {
        ctx->pc = 0x1CBEC4u;
        goto label_1cbec4;
    }
    ctx->pc = 0x1CBEBCu;
    SET_GPR_U32(ctx, 31, 0x1CBEC4u);
    ctx->pc = 0x231B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231B20u, 0x1CBEBCu, 0x1CBEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEC4u;
label_1cbec4:
    // 0x1cbec4: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbec8:
    // 0x1cbec8: 0xc06479c  jal         func_191E70
label_1cbecc:
    if (ctx->pc == 0x1CBECCu) {
        ctx->pc = 0x1CBED0u;
        goto label_1cbed0;
    }
    ctx->pc = 0x1CBEC8u;
    SET_GPR_U32(ctx, 31, 0x1CBED0u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBEC8u, 0x1CBED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBED0u;
label_1cbed0:
    // 0x1cbed0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1cbed0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbed4:
    // 0x1cbed4: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbed8:
    // 0x1cbed8: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cbed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbedc:
    // 0x1cbedc: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1cbedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1cbee0:
    // 0x1cbee0: 0xc05612c  jal         func_1584B0
label_1cbee4:
    if (ctx->pc == 0x1CBEE4u) {
        ctx->pc = 0x1CBEE8u;
        goto label_1cbee8;
    }
    ctx->pc = 0x1CBEE0u;
    SET_GPR_U32(ctx, 31, 0x1CBEE8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBEE0u, 0x1CBEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBEE8u;
label_1cbee8:
    // 0x1cbee8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbeec:
    // 0x1cbeec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1cbeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1cbef0:
    // 0x1cbef0: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cbef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1cbef4:
    // 0x1cbef4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbef4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbef8:
    // 0x1cbef8: 0xc7a002c0  lwc1        $f0, 0x2C0($sp)
    ctx->pc = 0x1cbef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbefc:
    // 0x1cbefc: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1cbefcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cbf00:
    // 0x1cbf00: 0xc7a20368  lwc1        $f2, 0x368($sp)
    ctx->pc = 0x1cbf00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbf04:
    // 0x1cbf04: 0xc7a102b0  lwc1        $f1, 0x2B0($sp)
    ctx->pc = 0x1cbf04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbf08:
    // 0x1cbf08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbf08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbf0c:
    // 0x1cbf0c: 0x0  nop
    ctx->pc = 0x1cbf0cu;
    // NOP
label_1cbf10:
    // 0x1cbf10: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cbf10u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cbf14:
    // 0x1cbf14: 0x46021b1d  msub.s      $f12, $f3, $f2
    ctx->pc = 0x1cbf14u;
    ctx->f[12] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cbf18:
    // 0x1cbf18: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1cbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_1cbf1c:
    // 0x1cbf1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1cbf1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cbf20:
    // 0x1cbf20: 0xc7a002c4  lwc1        $f0, 0x2C4($sp)
    ctx->pc = 0x1cbf20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cbf24:
    // 0x1cbf24: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x1cbf24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cbf28:
    // 0x1cbf28: 0xc7a20368  lwc1        $f2, 0x368($sp)
    ctx->pc = 0x1cbf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cbf2c:
    // 0x1cbf2c: 0xc7a102b4  lwc1        $f1, 0x2B4($sp)
    ctx->pc = 0x1cbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cbf30:
    // 0x1cbf30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cbf30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cbf34:
    // 0x1cbf34: 0x0  nop
    ctx->pc = 0x1cbf34u;
    // NOP
label_1cbf38:
    // 0x1cbf38: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1cbf38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[0], ctx->f[1]));
label_1cbf3c:
    // 0x1cbf3c: 0x46021b5d  msub.s      $f13, $f3, $f2
    ctx->pc = 0x1cbf3cu;
    ctx->f[13] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_1cbf40:
    // 0x1cbf40: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1cbf40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf44:
    // 0x1cbf44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbf44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf48:
    // 0x1cbf48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cbf48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf4c:
    // 0x1cbf4c: 0xc08c208  jal         func_230820
label_1cbf50:
    if (ctx->pc == 0x1CBF50u) {
        ctx->pc = 0x1CBF54u;
        goto label_1cbf54;
    }
    ctx->pc = 0x1CBF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBF54u);
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x1CBF4Cu, 0x1CBF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF54u;
label_1cbf54:
    // 0x1cbf54: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cbf54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf58:
    // 0x1cbf58: 0x8fb103a0  lw          $s1, 0x3A0($sp)
    ctx->pc = 0x1cbf58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbf5c:
    // 0x1cbf5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cbf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf60:
    // 0x1cbf60: 0xc06479c  jal         func_191E70
label_1cbf64:
    if (ctx->pc == 0x1CBF64u) {
        ctx->pc = 0x1CBF68u;
        goto label_1cbf68;
    }
    ctx->pc = 0x1CBF60u;
    SET_GPR_U32(ctx, 31, 0x1CBF68u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBF60u, 0x1CBF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF68u;
label_1cbf68:
    // 0x1cbf68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cbf68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf6c:
    // 0x1cbf6c: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbf70:
    // 0x1cbf70: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cbf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbf74:
    // 0x1cbf74: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1cbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1cbf78:
    // 0x1cbf78: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1cbf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
label_1cbf7c:
    // 0x1cbf7c: 0x7ba50200  lq          $a1, 0x200($sp)
    ctx->pc = 0x1cbf7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1cbf80:
    // 0x1cbf80: 0xc05612c  jal         func_1584B0
label_1cbf84:
    if (ctx->pc == 0x1CBF84u) {
        ctx->pc = 0x1CBF88u;
        goto label_1cbf88;
    }
    ctx->pc = 0x1CBF80u;
    SET_GPR_U32(ctx, 31, 0x1CBF88u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBF80u, 0x1CBF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBF88u;
label_1cbf88:
    // 0x1cbf88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf8c:
    // 0x1cbf8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cbf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cbf90:
    // 0x1cbf90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cbf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf94:
    // 0x1cbf94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbf98:
    // 0x1cbf98: 0xc7ac0368  lwc1        $f12, 0x368($sp)
    ctx->pc = 0x1cbf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cbf9c:
    // 0x1cbf9c: 0xc7ad0368  lwc1        $f13, 0x368($sp)
    ctx->pc = 0x1cbf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cbfa0:
    // 0x1cbfa0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cbfa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbfa4:
    // 0x1cbfa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cbfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cbfa8:
    // 0x1cbfa8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cbfa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfac:
    // 0x1cbfac: 0xc08c544  jal         func_231510
label_1cbfb0:
    if (ctx->pc == 0x1CBFB0u) {
        ctx->pc = 0x1CBFB4u;
        goto label_1cbfb4;
    }
    ctx->pc = 0x1CBFACu;
    SET_GPR_U32(ctx, 31, 0x1CBFB4u);
    ctx->pc = 0x231510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231510u, 0x1CBFACu, 0x1CBFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFB4u;
label_1cbfb4:
    // 0x1cbfb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cbfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cbfb8:
    // 0x1cbfb8: 0x10000012  b           . + 4 + (0x12 << 2)
label_1cbfbc:
    if (ctx->pc == 0x1CBFBCu) {
        ctx->pc = 0x1CBFC0u;
        goto label_1cbfc0;
    }
    ctx->pc = 0x1CBFB8u;
    {
        const bool branch_taken_0x1cbfb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbfb8) {
            ctx->pc = 0x1CC004u;
            goto label_1cc004;
        }
    }
    ctx->pc = 0x1CBFC0u;
label_1cbfc0:
    // 0x1cbfc0: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cbfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbfc4:
    // 0x1cbfc4: 0xc06479c  jal         func_191E70
label_1cbfc8:
    if (ctx->pc == 0x1CBFC8u) {
        ctx->pc = 0x1CBFCCu;
        goto label_1cbfcc;
    }
    ctx->pc = 0x1CBFC4u;
    SET_GPR_U32(ctx, 31, 0x1CBFCCu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CBFC4u, 0x1CBFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFCCu;
label_1cbfcc:
    // 0x1cbfcc: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x1cbfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
label_1cbfd0:
    // 0x1cbfd0: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cbfd4:
    // 0x1cbfd4: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x1cbfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cbfd8:
    // 0x1cbfd8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1cbfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1cbfdc:
    // 0x1cbfdc: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x1cbfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
label_1cbfe0:
    // 0x1cbfe0: 0x7ba501e0  lq          $a1, 0x1E0($sp)
    ctx->pc = 0x1cbfe0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1cbfe4:
    // 0x1cbfe4: 0xc05612c  jal         func_1584B0
label_1cbfe8:
    if (ctx->pc == 0x1CBFE8u) {
        ctx->pc = 0x1CBFECu;
        goto label_1cbfec;
    }
    ctx->pc = 0x1CBFE4u;
    SET_GPR_U32(ctx, 31, 0x1CBFECu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CBFE4u, 0x1CBFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBFECu;
label_1cbfec:
    // 0x1cbfec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cbfecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cbff0:
    // 0x1cbff0: 0x7ba401f0  lq          $a0, 0x1F0($sp)
    ctx->pc = 0x1cbff0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1cbff4:
    // 0x1cbff4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cbff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cbff8:
    // 0x1cbff8: 0xc08c8dc  jal         func_232370
label_1cbffc:
    if (ctx->pc == 0x1CBFFCu) {
        ctx->pc = 0x1CC000u;
        goto label_1cc000;
    }
    ctx->pc = 0x1CBFF8u;
    SET_GPR_U32(ctx, 31, 0x1CC000u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CBFF8u, 0x1CC000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC000u;
label_1cc000:
    // 0x1cc000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc004:
    // 0x1cc004: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc008:
    // 0x1cc008: 0x10000017  b           . + 4 + (0x17 << 2)
label_1cc00c:
    if (ctx->pc == 0x1CC00Cu) {
        ctx->pc = 0x1CC010u;
        goto label_1cc010;
    }
    ctx->pc = 0x1CC008u;
    {
        const bool branch_taken_0x1cc008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc008) {
            ctx->pc = 0x1CC068u;
            goto label_1cc068;
        }
    }
    ctx->pc = 0x1CC010u;
label_1cc010:
    // 0x1cc010: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cc014:
    // 0x1cc014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc018:
    // 0x1cc018: 0xc06479c  jal         func_191E70
label_1cc01c:
    if (ctx->pc == 0x1CC01Cu) {
        ctx->pc = 0x1CC020u;
        goto label_1cc020;
    }
    ctx->pc = 0x1CC018u;
    SET_GPR_U32(ctx, 31, 0x1CC020u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x1CC018u, 0x1CC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC020u;
label_1cc020:
    // 0x1cc020: 0x7fa201d0  sq          $v0, 0x1D0($sp)
    ctx->pc = 0x1cc020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 2));
label_1cc024:
    // 0x1cc024: 0x8fa203a0  lw          $v0, 0x3A0($sp)
    ctx->pc = 0x1cc024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cc028:
    // 0x1cc028: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x1cc028u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1cc02c:
    // 0x1cc02c: 0x244200a4  addiu       $v0, $v0, 0xA4
    ctx->pc = 0x1cc02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
label_1cc030:
    // 0x1cc030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc034:
    // 0x1cc034: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1cc034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cc038:
    // 0x1cc038: 0xc05612c  jal         func_1584B0
label_1cc03c:
    if (ctx->pc == 0x1CC03Cu) {
        ctx->pc = 0x1CC040u;
        goto label_1cc040;
    }
    ctx->pc = 0x1CC038u;
    SET_GPR_U32(ctx, 31, 0x1CC040u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1CC038u, 0x1CC040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC040u;
label_1cc040:
    // 0x1cc040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc044:
    // 0x1cc044: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1cc044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc048:
    // 0x1cc048: 0x7fa201c0  sq          $v0, 0x1C0($sp)
    ctx->pc = 0x1cc048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 2));
label_1cc04c:
    // 0x1cc04c: 0x7ba401d0  lq          $a0, 0x1D0($sp)
    ctx->pc = 0x1cc04cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1cc050:
    // 0x1cc050: 0x7ba501c0  lq          $a1, 0x1C0($sp)
    ctx->pc = 0x1cc050u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1cc054:
    // 0x1cc054: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc058:
    // 0x1cc058: 0xc08c8dc  jal         func_232370
label_1cc05c:
    if (ctx->pc == 0x1CC05Cu) {
        ctx->pc = 0x1CC060u;
        goto label_1cc060;
    }
    ctx->pc = 0x1CC058u;
    SET_GPR_U32(ctx, 31, 0x1CC060u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1CC058u, 0x1CC060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC060u;
label_1cc060:
    // 0x1cc060: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1cc060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc064:
    // 0x1cc064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cc064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cc068:
    // 0x1cc068: 0x8fa503a0  lw          $a1, 0x3A0($sp)
    ctx->pc = 0x1cc068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cc06c:
    // 0x1cc06c: 0x8ca200dc  lw          $v0, 0xDC($a1)
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
label_1cc070:
    // 0x1cc070: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc074:
    // 0x1cc074: 0xc0739b0  jal         func_1CE6C0
label_1cc078:
    if (ctx->pc == 0x1CC078u) {
        ctx->pc = 0x1CC07Cu;
        goto label_1cc07c;
    }
    ctx->pc = 0x1CC074u;
    SET_GPR_U32(ctx, 31, 0x1CC07Cu);
    ctx->pc = 0x1CE6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6C0u, 0x1CC074u, 0x1CC07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC07Cu;
label_1cc07c:
    // 0x1cc07c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc080:
    // 0x1cc080: 0x205102b  sltu        $v0, $s0, $a1
    ctx->pc = 0x1cc080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_1cc084:
    // 0x1cc084: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1cc088:
    if (ctx->pc == 0x1CC088u) {
        ctx->pc = 0x1CC08Cu;
        goto label_1cc08c;
    }
    ctx->pc = 0x1CC084u;
    {
        const bool branch_taken_0x1cc084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc084) {
            ctx->pc = 0x1CC010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc010;
        }
    }
    ctx->pc = 0x1CC08Cu;
label_1cc08c:
    // 0x1cc08c: 0x8fa403a0  lw          $a0, 0x3A0($sp)
    ctx->pc = 0x1cc08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_1cc090:
    // 0x1cc090: 0xc064cb0  jal         func_1932C0
label_1cc094:
    if (ctx->pc == 0x1CC094u) {
        ctx->pc = 0x1CC098u;
        goto label_1cc098;
    }
    ctx->pc = 0x1CC090u;
    SET_GPR_U32(ctx, 31, 0x1CC098u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x1CC090u, 0x1CC098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC098u;
label_1cc098:
    // 0x1cc098: 0x7fa201b0  sq          $v0, 0x1B0($sp)
    ctx->pc = 0x1cc098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 2));
label_1cc09c:
    // 0x1cc09c: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1cc09cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1cc0a0:
    // 0x1cc0a0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1cc0a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1cc0a4:
    // 0x1cc0a4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1cc0a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc0a8:
    // 0x1cc0a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1cc0a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1cc0ac:
    // 0x1cc0ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1cc0acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc0b0:
    // 0x1cc0b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cc0b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc0b4:
    // 0x1cc0b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cc0b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc0b8:
    // 0x1cc0b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc0b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc0bc:
    // 0x1cc0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc0c0:
    // 0x1cc0c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc0c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc0c4:
    // 0x1cc0c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc0c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc0c8:
    // 0x1cc0c8: 0x27bd03b0  addiu       $sp, $sp, 0x3B0
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_1cc0cc:
    // 0x1cc0cc: 0x3e00008  jr          $ra
label_1cc0d0:
    if (ctx->pc == 0x1CC0D0u) {
        ctx->pc = 0x1CC0D4u;
        goto label_1cc0d4;
    }
    ctx->pc = 0x1CC0CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC0CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC0D4u;
label_1cc0d4:
    // 0x1cc0d4: 0x0  nop
    ctx->pc = 0x1cc0d4u;
    // NOP
label_1cc0d8:
    // 0x1cc0d8: 0x0  nop
    ctx->pc = 0x1cc0d8u;
    // NOP
label_1cc0dc:
    // 0x1cc0dc: 0x0  nop
    ctx->pc = 0x1cc0dcu;
    // NOP
label_1cc0e0:
    // 0x1cc0e0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1cc0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1cc0e4:
    // 0x1cc0e4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1cc0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1cc0e8:
    // 0x1cc0e8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cc0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1cc0ec:
    // 0x1cc0ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cc0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cc0f0:
    // 0x1cc0f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cc0f4:
    // 0x1cc0f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc0f8:
    // 0x1cc0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc0fc:
    // 0x1cc0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cc100:
    // 0x1cc100: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x1cc100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_1cc104:
    // 0x1cc104: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x1cc104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
label_1cc108:
    // 0x1cc108: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1cc10c:
    // 0x1cc10c: 0xc073510  jal         func_1CD440
label_1cc110:
    if (ctx->pc == 0x1CC110u) {
        ctx->pc = 0x1CC114u;
        goto label_1cc114;
    }
    ctx->pc = 0x1CC10Cu;
    SET_GPR_U32(ctx, 31, 0x1CC114u);
    ctx->pc = 0x1CD440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CD440u, 0x1CC10Cu, 0x1CC114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC114u;
label_1cc114:
    // 0x1cc114: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cc114u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc118:
    // 0x1cc118: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cc118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cc11c:
    // 0x1cc11c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc120:
    // 0x1cc120: 0xc085538  jal         func_2154E0
label_1cc124:
    if (ctx->pc == 0x1CC124u) {
        ctx->pc = 0x1CC128u;
        goto label_1cc128;
    }
    ctx->pc = 0x1CC120u;
    SET_GPR_U32(ctx, 31, 0x1CC128u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CC120u, 0x1CC128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC128u;
label_1cc128:
    // 0x1cc128: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cc128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc12c:
    // 0x1cc12c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1cc12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cc130:
    // 0x1cc130: 0xc0a82cc  jal         func_2A0B30
label_1cc134:
    if (ctx->pc == 0x1CC134u) {
        ctx->pc = 0x1CC138u;
        goto label_1cc138;
    }
    ctx->pc = 0x1CC130u;
    SET_GPR_U32(ctx, 31, 0x1CC138u);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1CC130u, 0x1CC138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC138u;
label_1cc138:
    // 0x1cc138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc13c:
    // 0x1cc13c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cc13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc140:
    // 0x1cc140: 0xc121e9c  jal         func_487A70
label_1cc144:
    if (ctx->pc == 0x1CC144u) {
        ctx->pc = 0x1CC148u;
        goto label_1cc148;
    }
    ctx->pc = 0x1CC140u;
    SET_GPR_U32(ctx, 31, 0x1CC148u);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x1CC140u, 0x1CC148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC148u;
label_1cc148:
    // 0x1cc148: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cc148u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc14c:
    // 0x1cc14c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cc14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc150:
    // 0x1cc150: 0xc106784  jal         func_419E10
label_1cc154:
    if (ctx->pc == 0x1CC154u) {
        ctx->pc = 0x1CC158u;
        goto label_1cc158;
    }
    ctx->pc = 0x1CC150u;
    SET_GPR_U32(ctx, 31, 0x1CC158u);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1CC150u, 0x1CC158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC158u;
label_1cc158:
    // 0x1cc158: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1cc15c:
    // 0x1cc15c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x1cc15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1cc160:
    // 0x1cc160: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cc160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc164:
    // 0x1cc164: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cc164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc168:
    // 0x1cc168: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc16c:
    // 0x1cc16c: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1cc16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1cc170:
    // 0x1cc170: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cc174:
    // 0x1cc174: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cc178:
    // 0x1cc178: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cc178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cc17c:
    // 0x1cc17c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cc17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc180:
    // 0x1cc180: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cc180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc184:
    // 0x1cc184: 0xc085538  jal         func_2154E0
label_1cc188:
    if (ctx->pc == 0x1CC188u) {
        ctx->pc = 0x1CC18Cu;
        goto label_1cc18c;
    }
    ctx->pc = 0x1CC184u;
    SET_GPR_U32(ctx, 31, 0x1CC18Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CC184u, 0x1CC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC18Cu;
label_1cc18c:
    // 0x1cc18c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cc18cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc190:
    // 0x1cc190: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cc190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cc194:
    // 0x1cc194: 0xc0a82cc  jal         func_2A0B30
label_1cc198:
    if (ctx->pc == 0x1CC198u) {
        ctx->pc = 0x1CC19Cu;
        goto label_1cc19c;
    }
    ctx->pc = 0x1CC194u;
    SET_GPR_U32(ctx, 31, 0x1CC19Cu);
    ctx->pc = 0x2A0B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0B30u, 0x1CC194u, 0x1CC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC19Cu;
label_1cc19c:
    // 0x1cc19c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1a0:
    // 0x1cc1a0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cc1a4:
    // 0x1cc1a4: 0xc121e9c  jal         func_487A70
label_1cc1a8:
    if (ctx->pc == 0x1CC1A8u) {
        ctx->pc = 0x1CC1ACu;
        goto label_1cc1ac;
    }
    ctx->pc = 0x1CC1A4u;
    SET_GPR_U32(ctx, 31, 0x1CC1ACu);
    ctx->pc = 0x487A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x487A70u, 0x1CC1A4u, 0x1CC1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC1ACu;
label_1cc1ac:
    // 0x1cc1ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cc1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1b0:
    // 0x1cc1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cc1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1b4:
    // 0x1cc1b4: 0xc106784  jal         func_419E10
label_1cc1b8:
    if (ctx->pc == 0x1CC1B8u) {
        ctx->pc = 0x1CC1BCu;
        goto label_1cc1bc;
    }
    ctx->pc = 0x1CC1B4u;
    SET_GPR_U32(ctx, 31, 0x1CC1BCu);
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x1CC1B4u, 0x1CC1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC1BCu;
label_1cc1bc:
    // 0x1cc1bc: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x1cc1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_1cc1c0:
    // 0x1cc1c0: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x1cc1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1cc1c4:
    // 0x1cc1c4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1cc1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc1c8:
    // 0x1cc1c8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cc1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc1cc:
    // 0x1cc1cc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cc1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc1d0:
    // 0x1cc1d0: 0xe4420000  swc1        $f2, 0x0($v0)
    ctx->pc = 0x1cc1d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1cc1d4:
    // 0x1cc1d4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cc1d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cc1d8:
    // 0x1cc1d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cc1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cc1dc:
    // 0x1cc1dc: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x1cc1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_1cc1e0:
    // 0x1cc1e0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cc1e4:
    // 0x1cc1e4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x1cc1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1cc1e8:
    // 0x1cc1e8: 0xc085538  jal         func_2154E0
label_1cc1ec:
    if (ctx->pc == 0x1CC1ECu) {
        ctx->pc = 0x1CC1F0u;
        goto label_1cc1f0;
    }
    ctx->pc = 0x1CC1E8u;
    SET_GPR_U32(ctx, 31, 0x1CC1F0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x1CC1E8u, 0x1CC1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC1F0u;
label_1cc1f0:
    // 0x1cc1f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1f4:
    // 0x1cc1f4: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cc1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc1f8:
    // 0x1cc1f8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cc1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1cc1fc:
    // 0x1cc1fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc1fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc200:
    // 0x1cc200: 0x0  nop
    ctx->pc = 0x1cc200u;
    // NOP
label_1cc204:
    // 0x1cc204: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc204u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc208:
    // 0x1cc208: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cc208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1cc20c:
    // 0x1cc20c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1cc20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc210:
    // 0x1cc210: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cc210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1cc214:
    // 0x1cc214: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc218:
    // 0x1cc218: 0x0  nop
    ctx->pc = 0x1cc218u;
    // NOP
label_1cc21c:
    // 0x1cc21c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc21cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc220:
    // 0x1cc220: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x1cc220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1cc224:
    // 0x1cc224: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1cc224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc228:
    // 0x1cc228: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1cc228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc22c:
    // 0x1cc22c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc22cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc230:
    // 0x1cc230: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cc230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1cc234:
    // 0x1cc234: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1cc234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc238:
    // 0x1cc238: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1cc238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc23c:
    // 0x1cc23c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc240:
    // 0x1cc240: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cc240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1cc244:
    // 0x1cc244: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x1cc244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc248:
    // 0x1cc248: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1cc248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc24c:
    // 0x1cc24c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc24cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc250:
    // 0x1cc250: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cc250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1cc254:
    // 0x1cc254: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cc254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cc258:
    // 0x1cc258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc25c:
    // 0x1cc25c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cc25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc260:
    // 0x1cc260: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc264:
    // 0x1cc264: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1cc264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1cc268:
    // 0x1cc268: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cc268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cc26c:
    // 0x1cc26c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc26cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc270:
    // 0x1cc270: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cc270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc274:
    // 0x1cc274: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc274u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc278:
    // 0x1cc278: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1cc278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1cc27c:
    // 0x1cc27c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1cc27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_1cc280:
    // 0x1cc280: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc280u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc284:
    // 0x1cc284: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cc284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc288:
    // 0x1cc288: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cc288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc28c:
    // 0x1cc28c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1cc28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1cc290:
    // 0x1cc290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cc290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc294:
    // 0x1cc294: 0xc091008  jal         func_244020
label_1cc298:
    if (ctx->pc == 0x1CC298u) {
        ctx->pc = 0x1CC29Cu;
        goto label_1cc29c;
    }
    ctx->pc = 0x1CC294u;
    SET_GPR_U32(ctx, 31, 0x1CC29Cu);
    ctx->pc = 0x244020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244020u, 0x1CC294u, 0x1CC29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC29Cu;
label_1cc29c:
    // 0x1cc29c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1cc2a0:
    // 0x1cc2a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc2a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc2a4:
    // 0x1cc2a4: 0x0  nop
    ctx->pc = 0x1cc2a4u;
    // NOP
label_1cc2a8:
    // 0x1cc2a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cc2a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cc2ac:
    // 0x1cc2ac: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1cc2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1cc2b0:
    // 0x1cc2b0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1cc2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1cc2b4:
    // 0x1cc2b4: 0xc050530  jal         func_1414C0
label_1cc2b8:
    if (ctx->pc == 0x1CC2B8u) {
        ctx->pc = 0x1CC2BCu;
        goto label_1cc2bc;
    }
    ctx->pc = 0x1CC2B4u;
    SET_GPR_U32(ctx, 31, 0x1CC2BCu);
    ctx->pc = 0x1414C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1414C0u, 0x1CC2B4u, 0x1CC2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2BCu;
label_1cc2bc:
    // 0x1cc2bc: 0xc05035c  jal         func_140D70
label_1cc2c0:
    if (ctx->pc == 0x1CC2C0u) {
        ctx->pc = 0x1CC2C4u;
        goto label_1cc2c4;
    }
    ctx->pc = 0x1CC2BCu;
    SET_GPR_U32(ctx, 31, 0x1CC2C4u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1CC2BCu, 0x1CC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2C4u;
label_1cc2c4:
    // 0x1cc2c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc2c8:
    // 0x1cc2c8: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1cc2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1cc2cc:
    // 0x1cc2cc: 0xc050240  jal         func_140900
label_1cc2d0:
    if (ctx->pc == 0x1CC2D0u) {
        ctx->pc = 0x1CC2D4u;
        goto label_1cc2d4;
    }
    ctx->pc = 0x1CC2CCu;
    SET_GPR_U32(ctx, 31, 0x1CC2D4u);
    ctx->pc = 0x140900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140900u, 0x1CC2CCu, 0x1CC2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC2D4u;
label_1cc2d4:
    // 0x1cc2d4: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x1cc2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc2d8:
    // 0x1cc2d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1cc2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_1cc2dc:
    // 0x1cc2dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc2dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc2e0:
    // 0x1cc2e0: 0x0  nop
    ctx->pc = 0x1cc2e0u;
    // NOP
label_1cc2e4:
    // 0x1cc2e4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1cc2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1cc2e8:
    // 0x1cc2e8: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_1cc2ec:
    // 0x1cc2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc2f0:
    // 0x1cc2f0: 0x0  nop
    ctx->pc = 0x1cc2f0u;
    // NOP
label_1cc2f4:
    // 0x1cc2f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1cc2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_1cc2f8:
    // 0x1cc2f8: 0xc05035c  jal         func_140D70
label_1cc2fc:
    if (ctx->pc == 0x1CC2FCu) {
        ctx->pc = 0x1CC300u;
        goto label_1cc300;
    }
    ctx->pc = 0x1CC2F8u;
    SET_GPR_U32(ctx, 31, 0x1CC300u);
    ctx->pc = 0x140D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140D70u, 0x1CC2F8u, 0x1CC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC300u;
label_1cc300:
    // 0x1cc300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc304:
    // 0x1cc304: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1cc308:
    // 0x1cc308: 0xc050194  jal         func_140650
label_1cc30c:
    if (ctx->pc == 0x1CC30Cu) {
        ctx->pc = 0x1CC310u;
        goto label_1cc310;
    }
    ctx->pc = 0x1CC308u;
    SET_GPR_U32(ctx, 31, 0x1CC310u);
    ctx->pc = 0x140650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140650u, 0x1CC308u, 0x1CC310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC310u;
label_1cc310:
    // 0x1cc310: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc314:
    // 0x1cc314: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1cc314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1cc318:
    // 0x1cc318: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc31c:
    // 0x1cc31c: 0xc106598  jal         func_419660
label_1cc320:
    if (ctx->pc == 0x1CC320u) {
        ctx->pc = 0x1CC324u;
        goto label_1cc324;
    }
    ctx->pc = 0x1CC31Cu;
    SET_GPR_U32(ctx, 31, 0x1CC324u);
    ctx->pc = 0x419660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419660u, 0x1CC31Cu, 0x1CC324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC324u;
label_1cc324:
    // 0x1cc324: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_1cc328:
    // 0x1cc328: 0xc106794  jal         func_419E50
label_1cc32c:
    if (ctx->pc == 0x1CC32Cu) {
        ctx->pc = 0x1CC330u;
        goto label_1cc330;
    }
    ctx->pc = 0x1CC328u;
    SET_GPR_U32(ctx, 31, 0x1CC330u);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x1CC328u, 0x1CC330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC330u;
label_1cc330:
    // 0x1cc330: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1cc330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1cc334:
    // 0x1cc334: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1cc334u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1cc338:
    // 0x1cc338: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1cc338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1cc33c:
    // 0x1cc33c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1cc33cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc340:
    // 0x1cc340: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1cc340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc344:
    // 0x1cc344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cc344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc348:
    // 0x1cc348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1cc348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc34c:
    // 0x1cc34c: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1cc350:
    // 0x1cc350: 0x3e00008  jr          $ra
label_1cc354:
    if (ctx->pc == 0x1CC354u) {
        ctx->pc = 0x1CC358u;
        goto label_1cc358;
    }
    ctx->pc = 0x1CC350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC358u;
label_1cc358:
    // 0x1cc358: 0x0  nop
    ctx->pc = 0x1cc358u;
    // NOP
label_1cc35c:
    // 0x1cc35c: 0x0  nop
    ctx->pc = 0x1cc35cu;
    // NOP
label_1cc360:
    // 0x1cc360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cc360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cc364:
    // 0x1cc364: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1cc364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
label_1cc368:
    // 0x1cc368: 0x244279a0  addiu       $v0, $v0, 0x79A0
    ctx->pc = 0x1cc368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31136));
label_1cc36c:
    // 0x1cc36c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1cc36cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc370:
    // 0x1cc370: 0x3e00008  jr          $ra
label_1cc374:
    if (ctx->pc == 0x1CC374u) {
        ctx->pc = 0x1CC378u;
        goto label_1cc378;
    }
    ctx->pc = 0x1CC370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC378u;
label_1cc378:
    // 0x1cc378: 0x0  nop
    ctx->pc = 0x1cc378u;
    // NOP
label_1cc37c:
    // 0x1cc37c: 0x0  nop
    ctx->pc = 0x1cc37cu;
    // NOP
label_1cc380:
    // 0x1cc380: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cc384:
    // 0x1cc384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc388:
    // 0x1cc388: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1cc388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1cc38c:
    // 0x1cc38c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1cc38cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1cc390:
    // 0x1cc390: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc394:
    // 0x1cc394: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc398:
    // 0x1cc398: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc39c:
    // 0x1cc39c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1cc3a0:
    if (ctx->pc == 0x1CC3A0u) {
        ctx->pc = 0x1CC3A4u;
        goto label_1cc3a4;
    }
    ctx->pc = 0x1CC39Cu;
    {
        const bool branch_taken_0x1cc39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cc39c) {
            ctx->pc = 0x1CC3B8u;
            goto label_1cc3b8;
        }
    }
    ctx->pc = 0x1CC3A4u;
label_1cc3a4:
    // 0x1cc3a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc3a8:
    // 0x1cc3a8: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc3ac:
    // 0x1cc3ac: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cc3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cc3b0:
    // 0x1cc3b0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1cc3b4:
    if (ctx->pc == 0x1CC3B4u) {
        ctx->pc = 0x1CC3B8u;
        goto label_1cc3b8;
    }
    ctx->pc = 0x1CC3B0u;
    {
        const bool branch_taken_0x1cc3b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc3b0) {
            ctx->pc = 0x1CC3C0u;
            goto label_1cc3c0;
        }
    }
    ctx->pc = 0x1CC3B8u;
label_1cc3b8:
    // 0x1cc3b8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1cc3bc:
    if (ctx->pc == 0x1CC3BCu) {
        ctx->pc = 0x1CC3C0u;
        goto label_1cc3c0;
    }
    ctx->pc = 0x1CC3B8u;
    {
        const bool branch_taken_0x1cc3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3b8) {
            ctx->pc = 0x1CC3E8u;
            goto label_1cc3e8;
        }
    }
    ctx->pc = 0x1CC3C0u;
label_1cc3c0:
    // 0x1cc3c0: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1cc3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1cc3c4:
    // 0x1cc3c4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc3c8:
    // 0x1cc3c8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cc3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1cc3cc:
    // 0x1cc3cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc3d0:
    // 0x1cc3d0: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1cc3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc3d4:
    // 0x1cc3d4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cc3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc3d8:
    // 0x1cc3d8: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1cc3d8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc3dc:
    // 0x1cc3dc: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cc3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cc3e0:
    // 0x1cc3e0: 0xc073958  jal         func_1CE560
label_1cc3e4:
    if (ctx->pc == 0x1CC3E4u) {
        ctx->pc = 0x1CC3E8u;
        goto label_1cc3e8;
    }
    ctx->pc = 0x1CC3E0u;
    SET_GPR_U32(ctx, 31, 0x1CC3E8u);
    ctx->pc = 0x1CE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE560u, 0x1CC3E0u, 0x1CC3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC3E8u;
label_1cc3e8:
    // 0x1cc3e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc3e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc3ec:
    // 0x1cc3ec: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cc3ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cc3f0:
    // 0x1cc3f0: 0x3e00008  jr          $ra
label_1cc3f4:
    if (ctx->pc == 0x1CC3F4u) {
        ctx->pc = 0x1CC3F8u;
        goto label_1cc3f8;
    }
    ctx->pc = 0x1CC3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC3F8u;
label_1cc3f8:
    // 0x1cc3f8: 0x0  nop
    ctx->pc = 0x1cc3f8u;
    // NOP
label_1cc3fc:
    // 0x1cc3fc: 0x0  nop
    ctx->pc = 0x1cc3fcu;
    // NOP
label_1cc400:
    // 0x1cc400: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cc404:
    // 0x1cc404: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc408:
    // 0x1cc408: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1cc408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1cc40c:
    // 0x1cc40c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x1cc40cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1cc410:
    // 0x1cc410: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc414:
    // 0x1cc414: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc418:
    // 0x1cc418: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cc418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc41c:
    // 0x1cc41c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_1cc420:
    if (ctx->pc == 0x1CC420u) {
        ctx->pc = 0x1CC424u;
        goto label_1cc424;
    }
    ctx->pc = 0x1CC41Cu;
    {
        const bool branch_taken_0x1cc41c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cc41c) {
            ctx->pc = 0x1CC438u;
            goto label_1cc438;
        }
    }
    ctx->pc = 0x1CC424u;
label_1cc424:
    // 0x1cc424: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc428:
    // 0x1cc428: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc42c:
    // 0x1cc42c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cc42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cc430:
    // 0x1cc430: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_1cc434:
    if (ctx->pc == 0x1CC434u) {
        ctx->pc = 0x1CC438u;
        goto label_1cc438;
    }
    ctx->pc = 0x1CC430u;
    {
        const bool branch_taken_0x1cc430 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc430) {
            ctx->pc = 0x1CC440u;
            goto label_1cc440;
        }
    }
    ctx->pc = 0x1CC438u;
label_1cc438:
    // 0x1cc438: 0x1000000c  b           . + 4 + (0xC << 2)
label_1cc43c:
    if (ctx->pc == 0x1CC43Cu) {
        ctx->pc = 0x1CC440u;
        goto label_1cc440;
    }
    ctx->pc = 0x1CC438u;
    {
        const bool branch_taken_0x1cc438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc438) {
            ctx->pc = 0x1CC46Cu;
            goto label_1cc46c;
        }
    }
    ctx->pc = 0x1CC440u;
label_1cc440:
    // 0x1cc440: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x1cc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_1cc444:
    // 0x1cc444: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc448:
    // 0x1cc448: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cc448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1cc44c:
    // 0x1cc44c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc450:
    // 0x1cc450: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cc450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc454:
    // 0x1cc454: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x1cc454u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_1cc458:
    // 0x1cc458: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1cc458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc45c:
    // 0x1cc45c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x1cc45cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc460:
    // 0x1cc460: 0x8c4400dc  lw          $a0, 0xDC($v0)
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_1cc464:
    // 0x1cc464: 0xc073958  jal         func_1CE560
label_1cc468:
    if (ctx->pc == 0x1CC468u) {
        ctx->pc = 0x1CC46Cu;
        goto label_1cc46c;
    }
    ctx->pc = 0x1CC464u;
    SET_GPR_U32(ctx, 31, 0x1CC46Cu);
    ctx->pc = 0x1CE560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE560u, 0x1CC464u, 0x1CC46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC46Cu;
label_1cc46c:
    // 0x1cc46c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc46cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc470:
    // 0x1cc470: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cc474:
    // 0x1cc474: 0x3e00008  jr          $ra
label_1cc478:
    if (ctx->pc == 0x1CC478u) {
        ctx->pc = 0x1CC47Cu;
        goto label_1cc47c;
    }
    ctx->pc = 0x1CC474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC47Cu;
label_1cc47c:
    // 0x1cc47c: 0x0  nop
    ctx->pc = 0x1cc47cu;
    // NOP
label_1cc480:
    // 0x1cc480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc484:
    // 0x1cc484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc488:
    // 0x1cc488: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cc488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1cc48c:
    // 0x1cc48c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1cc48cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1cc490:
    // 0x1cc490: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc494:
    // 0x1cc494: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1cc494u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc498:
    // 0x1cc498: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc49c:
    // 0x1cc49c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cc49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cc4a0:
    // 0x1cc4a0: 0x320f809  jalr        $t9
label_1cc4a4:
    if (ctx->pc == 0x1CC4A4u) {
        ctx->pc = 0x1CC4A8u;
        goto label_1cc4a8;
    }
    ctx->pc = 0x1CC4A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC4A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4A0u, 0x1CC4A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC4A8u;
label_1cc4a8:
    // 0x1cc4a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc4ac:
    // 0x1cc4ac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc4b0:
    // 0x1cc4b0: 0x3e00008  jr          $ra
label_1cc4b4:
    if (ctx->pc == 0x1CC4B4u) {
        ctx->pc = 0x1CC4B8u;
        goto label_1cc4b8;
    }
    ctx->pc = 0x1CC4B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4B8u;
label_1cc4b8:
    // 0x1cc4b8: 0x0  nop
    ctx->pc = 0x1cc4b8u;
    // NOP
label_1cc4bc:
    // 0x1cc4bc: 0x0  nop
    ctx->pc = 0x1cc4bcu;
    // NOP
label_1cc4c0:
    // 0x1cc4c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc4c4:
    // 0x1cc4c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc4c8:
    // 0x1cc4c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cc4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1cc4cc:
    // 0x1cc4cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1cc4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1cc4d0:
    // 0x1cc4d0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc4d4:
    // 0x1cc4d4: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1cc4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc4d8:
    // 0x1cc4d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc4dc:
    // 0x1cc4dc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cc4e0:
    // 0x1cc4e0: 0x320f809  jalr        $t9
label_1cc4e4:
    if (ctx->pc == 0x1CC4E4u) {
        ctx->pc = 0x1CC4E8u;
        goto label_1cc4e8;
    }
    ctx->pc = 0x1CC4E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC4E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4E0u, 0x1CC4E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC4E8u;
label_1cc4e8:
    // 0x1cc4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc4ec:
    // 0x1cc4ec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc4f0:
    // 0x1cc4f0: 0x3e00008  jr          $ra
label_1cc4f4:
    if (ctx->pc == 0x1CC4F4u) {
        ctx->pc = 0x1CC4F8u;
        goto label_1cc4f8;
    }
    ctx->pc = 0x1CC4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4F8u;
label_1cc4f8:
    // 0x1cc4f8: 0x0  nop
    ctx->pc = 0x1cc4f8u;
    // NOP
label_1cc4fc:
    // 0x1cc4fc: 0x0  nop
    ctx->pc = 0x1cc4fcu;
    // NOP
label_1cc500:
    // 0x1cc500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cc500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cc504:
    // 0x1cc504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc508:
    // 0x1cc508: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1cc508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_1cc50c:
    // 0x1cc50c: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x1cc50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_1cc510:
    // 0x1cc510: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x1cc510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1cc514:
    // 0x1cc514: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
label_1cc518:
    if (ctx->pc == 0x1CC518u) {
        ctx->pc = 0x1CC51Cu;
        goto label_1cc51c;
    }
    ctx->pc = 0x1CC514u;
    {
        const bool branch_taken_0x1cc514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc514) {
            ctx->pc = 0x1CC6F8u;
            goto label_1cc6f8;
        }
    }
    ctx->pc = 0x1CC51Cu;
label_1cc51c:
    // 0x1cc51c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc520:
    // 0x1cc520: 0x8c6300c8  lw          $v1, 0xC8($v1)
    ctx->pc = 0x1cc520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc524:
    // 0x1cc524: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1cc528:
    if (ctx->pc == 0x1CC528u) {
        ctx->pc = 0x1CC52Cu;
        goto label_1cc52c;
    }
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC540u;
            goto label_1cc540;
        }
    }
    ctx->pc = 0x1CC52Cu;
label_1cc52c:
    // 0x1cc52c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc530:
    // 0x1cc530: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc534:
    // 0x1cc534: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1cc534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc538:
    // 0x1cc538: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_1cc53c:
    if (ctx->pc == 0x1CC53Cu) {
        ctx->pc = 0x1CC540u;
        goto label_1cc540;
    }
    ctx->pc = 0x1CC538u;
    {
        const bool branch_taken_0x1cc538 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc538) {
            ctx->pc = 0x1CC574u;
            goto label_1cc574;
        }
    }
    ctx->pc = 0x1CC540u;
label_1cc540:
    // 0x1cc540: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cc544:
    // 0x1cc544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc548:
    // 0x1cc548: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x1cc548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_1cc54c:
    // 0x1cc54c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cc550:
    // 0x1cc550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc554:
    // 0x1cc554: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1cc554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1cc558:
    // 0x1cc558: 0x278596a0  addiu       $a1, $gp, -0x6960
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940320));
label_1cc55c:
    // 0x1cc55c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc560:
    // 0x1cc560: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc564:
    // 0x1cc564: 0xc08f558  jal         func_23D560
label_1cc568:
    if (ctx->pc == 0x1CC568u) {
        ctx->pc = 0x1CC56Cu;
        goto label_1cc56c;
    }
    ctx->pc = 0x1CC564u;
    SET_GPR_U32(ctx, 31, 0x1CC56Cu);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1CC564u, 0x1CC56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC56Cu;
label_1cc56c:
    // 0x1cc56c: 0x10000062  b           . + 4 + (0x62 << 2)
label_1cc570:
    if (ctx->pc == 0x1CC570u) {
        ctx->pc = 0x1CC574u;
        goto label_1cc574;
    }
    ctx->pc = 0x1CC56Cu;
    {
        const bool branch_taken_0x1cc56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc56c) {
            ctx->pc = 0x1CC6F8u;
            goto label_1cc6f8;
        }
    }
    ctx->pc = 0x1CC574u;
label_1cc574:
    // 0x1cc574: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc578:
    // 0x1cc578: 0x8c6400c8  lw          $a0, 0xC8($v1)
    ctx->pc = 0x1cc578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 200)));
label_1cc57c:
    // 0x1cc57c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc580:
    // 0x1cc580: 0x1483005d  bne         $a0, $v1, . + 4 + (0x5D << 2)
label_1cc584:
    if (ctx->pc == 0x1CC584u) {
        ctx->pc = 0x1CC588u;
        goto label_1cc588;
    }
    ctx->pc = 0x1CC580u;
    {
        const bool branch_taken_0x1cc580 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cc580) {
            ctx->pc = 0x1CC6F8u;
            goto label_1cc6f8;
        }
    }
    ctx->pc = 0x1CC588u;
label_1cc588:
    // 0x1cc588: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1cc588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cc58c:
    // 0x1cc58c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc590:
    // 0x1cc590: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x1cc590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_1cc594:
    // 0x1cc594: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1cc594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc598:
    // 0x1cc598: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc59c:
    // 0x1cc59c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc5a0:
    // 0x1cc5a0: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x1cc5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_1cc5a4:
    // 0x1cc5a4: 0x246500cc  addiu       $a1, $v1, 0xCC
    ctx->pc = 0x1cc5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 204));
label_1cc5a8:
    // 0x1cc5a8: 0x244600d4  addiu       $a2, $v0, 0xD4
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 212));
label_1cc5ac:
    // 0x1cc5ac: 0xc073988  jal         func_1CE620
label_1cc5b0:
    if (ctx->pc == 0x1CC5B0u) {
        ctx->pc = 0x1CC5B4u;
        goto label_1cc5b4;
    }
    ctx->pc = 0x1CC5ACu;
    SET_GPR_U32(ctx, 31, 0x1CC5B4u);
    ctx->pc = 0x1CE620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE620u, 0x1CC5ACu, 0x1CC5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC5B4u;
label_1cc5b4:
    // 0x1cc5b4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc5b8:
    // 0x1cc5b8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1cc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_1cc5bc:
    // 0x1cc5bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cc5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cc5c0:
    // 0x1cc5c0: 0xc46000d4  lwc1        $f0, 0xD4($v1)
    ctx->pc = 0x1cc5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc5c4:
    // 0x1cc5c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1cc5c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cc5c8:
    // 0x1cc5c8: 0xc78080b0  lwc1        $f0, -0x7F50($gp)
    ctx->pc = 0x1cc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc5cc:
    // 0x1cc5cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1cc5ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1cc5d0:
    // 0x1cc5d0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc5d4:
    // 0x1cc5d4: 0xc44000b4  lwc1        $f0, 0xB4($v0)
    ctx->pc = 0x1cc5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc5d8:
    // 0x1cc5d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cc5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1cc5dc:
    // 0x1cc5dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc5e0:
    // 0x1cc5e0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x1cc5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
label_1cc5e4:
    // 0x1cc5e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cc5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc5e8:
    // 0x1cc5e8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1cc5ec:
    // 0x1cc5ec: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1cc5f0:
    if (ctx->pc == 0x1CC5F0u) {
        ctx->pc = 0x1CC5F4u;
        goto label_1cc5f4;
    }
    ctx->pc = 0x1CC5ECu;
    {
        const bool branch_taken_0x1cc5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc5ec) {
            ctx->pc = 0x1CC614u;
            goto label_1cc614;
        }
    }
    ctx->pc = 0x1CC5F4u;
label_1cc5f4:
    // 0x1cc5f4: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1cc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1cc5f8:
    // 0x1cc5f8: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1cc5f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_1cc5fc:
    // 0x1cc5fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cc600:
    // 0x1cc600: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1cc604:
    // 0x1cc604: 0x0  nop
    ctx->pc = 0x1cc604u;
    // NOP
label_1cc608:
    // 0x1cc608: 0x0  nop
    ctx->pc = 0x1cc608u;
    // NOP
label_1cc60c:
    // 0x1cc60c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1cc610:
    if (ctx->pc == 0x1CC610u) {
        ctx->pc = 0x1CC614u;
        goto label_1cc614;
    }
    ctx->pc = 0x1CC60Cu;
    {
        const bool branch_taken_0x1cc60c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc60c) {
            ctx->pc = 0x1CC5F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cc5f8;
        }
    }
    ctx->pc = 0x1CC614u;
label_1cc614:
    // 0x1cc614: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc618:
    // 0x1cc618: 0xc44000cc  lwc1        $f0, 0xCC($v0)
    ctx->pc = 0x1cc618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc61c:
    // 0x1cc61c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1cc61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1cc620:
    // 0x1cc620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc624:
    // 0x1cc624: 0xc44000d0  lwc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cc624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc628:
    // 0x1cc628: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1cc628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1cc62c:
    // 0x1cc62c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1cc62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1cc630:
    // 0x1cc630: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc634:
    // 0x1cc634: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1cc634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc638:
    // 0x1cc638: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1cc63c:
    // 0x1cc63c: 0x8c4600b0  lw          $a2, 0xB0($v0)
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
label_1cc640:
    // 0x1cc640: 0xc104d64  jal         func_413590
label_1cc644:
    if (ctx->pc == 0x1CC644u) {
        ctx->pc = 0x1CC648u;
        goto label_1cc648;
    }
    ctx->pc = 0x1CC640u;
    SET_GPR_U32(ctx, 31, 0x1CC648u);
    ctx->pc = 0x413590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413590u, 0x1CC640u, 0x1CC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC648u;
label_1cc648:
    // 0x1cc648: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1cc648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc64c:
    // 0x1cc64c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc650:
    // 0x1cc650: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x1cc650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
label_1cc654:
    // 0x1cc654: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x1cc654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc658:
    // 0x1cc658: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc65c:
    // 0x1cc65c: 0xe44000d0  swc1        $f0, 0xD0($v0)
    ctx->pc = 0x1cc65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 208), bits); }
label_1cc660:
    // 0x1cc660: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1cc660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1cc664:
    // 0x1cc664: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cc664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc668:
    // 0x1cc668: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc66c:
    // 0x1cc66c: 0xe44000c0  swc1        $f0, 0xC0($v0)
    ctx->pc = 0x1cc66cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
label_1cc670:
    // 0x1cc670: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc674:
    // 0x1cc674: 0xc44100f4  lwc1        $f1, 0xF4($v0)
    ctx->pc = 0x1cc674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc678:
    // 0x1cc678: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cc678u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cc67c:
    // 0x1cc67c: 0x0  nop
    ctx->pc = 0x1cc67cu;
    // NOP
label_1cc680:
    // 0x1cc680: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cc680u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cc684:
    // 0x1cc684: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1cc688:
    if (ctx->pc == 0x1CC688u) {
        ctx->pc = 0x1CC68Cu;
        goto label_1cc68c;
    }
    ctx->pc = 0x1CC684u;
    {
        const bool branch_taken_0x1cc684 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cc684) {
            ctx->pc = 0x1CC6D8u;
            goto label_1cc6d8;
        }
    }
    ctx->pc = 0x1CC68Cu;
label_1cc68c:
    // 0x1cc68c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc690:
    // 0x1cc690: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1cc690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc694:
    // 0x1cc694: 0xc44c00f4  lwc1        $f12, 0xF4($v0)
    ctx->pc = 0x1cc694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc698:
    // 0x1cc698: 0xc064d10  jal         func_193440
label_1cc69c:
    if (ctx->pc == 0x1CC69Cu) {
        ctx->pc = 0x1CC6A0u;
        goto label_1cc6a0;
    }
    ctx->pc = 0x1CC698u;
    SET_GPR_U32(ctx, 31, 0x1CC6A0u);
    ctx->pc = 0x193440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193440u, 0x1CC698u, 0x1CC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6A0u;
label_1cc6a0:
    // 0x1cc6a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1cc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc6a4:
    // 0x1cc6a4: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1cc6a8:
    // 0x1cc6a8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1cc6ac:
    if (ctx->pc == 0x1CC6ACu) {
        ctx->pc = 0x1CC6B0u;
        goto label_1cc6b0;
    }
    ctx->pc = 0x1CC6A8u;
    {
        const bool branch_taken_0x1cc6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc6a8) {
            ctx->pc = 0x1CC6D8u;
            goto label_1cc6d8;
        }
    }
    ctx->pc = 0x1CC6B0u;
label_1cc6b0:
    // 0x1cc6b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cc6b4:
    // 0x1cc6b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc6b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc6b8:
    // 0x1cc6b8: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1cc6bc:
    // 0x1cc6bc: 0x278596a8  addiu       $a1, $gp, -0x6958
    ctx->pc = 0x1cc6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940328));
label_1cc6c0:
    // 0x1cc6c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cc6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc6c4:
    // 0x1cc6c4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cc6c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc6c8:
    // 0x1cc6c8: 0xc08f558  jal         func_23D560
label_1cc6cc:
    if (ctx->pc == 0x1CC6CCu) {
        ctx->pc = 0x1CC6D0u;
        goto label_1cc6d0;
    }
    ctx->pc = 0x1CC6C8u;
    SET_GPR_U32(ctx, 31, 0x1CC6D0u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1CC6C8u, 0x1CC6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6D0u;
label_1cc6d0:
    // 0x1cc6d0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1cc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc6d4:
    // 0x1cc6d4: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1cc6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1cc6d8:
    // 0x1cc6d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cc6dc:
    // 0x1cc6dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc6dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc6e0:
    // 0x1cc6e0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1cc6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
label_1cc6e4:
    // 0x1cc6e4: 0x278596b0  addiu       $a1, $gp, -0x6950
    ctx->pc = 0x1cc6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940336));
label_1cc6e8:
    // 0x1cc6e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc6e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc6ec:
    // 0x1cc6ec: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1cc6ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cc6f0:
    // 0x1cc6f0: 0xc08f558  jal         func_23D560
label_1cc6f4:
    if (ctx->pc == 0x1CC6F4u) {
        ctx->pc = 0x1CC6F8u;
        goto label_1cc6f8;
    }
    ctx->pc = 0x1CC6F0u;
    SET_GPR_U32(ctx, 31, 0x1CC6F8u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1CC6F0u, 0x1CC6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC6F8u;
label_1cc6f8:
    // 0x1cc6f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc6f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc6fc:
    // 0x1cc6fc: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1cc700:
    // 0x1cc700: 0x3e00008  jr          $ra
label_1cc704:
    if (ctx->pc == 0x1CC704u) {
        ctx->pc = 0x1CC708u;
        goto label_1cc708;
    }
    ctx->pc = 0x1CC700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC708u;
label_1cc708:
    // 0x1cc708: 0x0  nop
    ctx->pc = 0x1cc708u;
    // NOP
label_1cc70c:
    // 0x1cc70c: 0x0  nop
    ctx->pc = 0x1cc70cu;
    // NOP
label_1cc710:
    // 0x1cc710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cc710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cc714:
    // 0x1cc714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cc714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cc718:
    // 0x1cc718: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1cc718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_1cc71c:
    // 0x1cc71c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1cc71cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
label_1cc720:
    // 0x1cc720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1cc720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1cc724:
    // 0x1cc724: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x1cc724u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
label_1cc728:
    // 0x1cc728: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cc728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc72c:
    // 0x1cc72c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cc72cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cc730:
    // 0x1cc730: 0x320f809  jalr        $t9
label_1cc734:
    if (ctx->pc == 0x1CC734u) {
        ctx->pc = 0x1CC738u;
        goto label_1cc738;
    }
    ctx->pc = 0x1CC730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC738u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC730u, 0x1CC738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CC738u;
label_1cc738:
    // 0x1cc738: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cc738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cc73c:
    // 0x1cc73c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1cc740:
    // 0x1cc740: 0x3e00008  jr          $ra
label_1cc744:
    if (ctx->pc == 0x1CC744u) {
        ctx->pc = 0x1CC748u;
        goto label_1cc748;
    }
    ctx->pc = 0x1CC740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC748u;
label_1cc748:
    // 0x1cc748: 0x0  nop
    ctx->pc = 0x1cc748u;
    // NOP
label_1cc74c:
    // 0x1cc74c: 0x0  nop
    ctx->pc = 0x1cc74cu;
    // NOP
    ctx->pc = 0x1cc750u;
}
