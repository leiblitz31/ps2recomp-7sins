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

// Function: sub_003CA5D0
// Address: 0x3ca5d0 - 0x3cbfd8
void sub_003CA5D0_0x3ca5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA5D0_0x3ca5d0");
#endif

    switch (ctx->pc) {
        case 0x3ca5d0u: goto label_3ca5d0;
        case 0x3ca5d4u: goto label_3ca5d4;
        case 0x3ca5d8u: goto label_3ca5d8;
        case 0x3ca5dcu: goto label_3ca5dc;
        case 0x3ca5e0u: goto label_3ca5e0;
        case 0x3ca5e4u: goto label_3ca5e4;
        case 0x3ca5e8u: goto label_3ca5e8;
        case 0x3ca5ecu: goto label_3ca5ec;
        case 0x3ca5f0u: goto label_3ca5f0;
        case 0x3ca5f4u: goto label_3ca5f4;
        case 0x3ca5f8u: goto label_3ca5f8;
        case 0x3ca5fcu: goto label_3ca5fc;
        case 0x3ca600u: goto label_3ca600;
        case 0x3ca604u: goto label_3ca604;
        case 0x3ca608u: goto label_3ca608;
        case 0x3ca60cu: goto label_3ca60c;
        case 0x3ca610u: goto label_3ca610;
        case 0x3ca614u: goto label_3ca614;
        case 0x3ca618u: goto label_3ca618;
        case 0x3ca61cu: goto label_3ca61c;
        case 0x3ca620u: goto label_3ca620;
        case 0x3ca624u: goto label_3ca624;
        case 0x3ca628u: goto label_3ca628;
        case 0x3ca62cu: goto label_3ca62c;
        case 0x3ca630u: goto label_3ca630;
        case 0x3ca634u: goto label_3ca634;
        case 0x3ca638u: goto label_3ca638;
        case 0x3ca63cu: goto label_3ca63c;
        case 0x3ca640u: goto label_3ca640;
        case 0x3ca644u: goto label_3ca644;
        case 0x3ca648u: goto label_3ca648;
        case 0x3ca64cu: goto label_3ca64c;
        case 0x3ca650u: goto label_3ca650;
        case 0x3ca654u: goto label_3ca654;
        case 0x3ca658u: goto label_3ca658;
        case 0x3ca65cu: goto label_3ca65c;
        case 0x3ca660u: goto label_3ca660;
        case 0x3ca664u: goto label_3ca664;
        case 0x3ca668u: goto label_3ca668;
        case 0x3ca66cu: goto label_3ca66c;
        case 0x3ca670u: goto label_3ca670;
        case 0x3ca674u: goto label_3ca674;
        case 0x3ca678u: goto label_3ca678;
        case 0x3ca67cu: goto label_3ca67c;
        case 0x3ca680u: goto label_3ca680;
        case 0x3ca684u: goto label_3ca684;
        case 0x3ca688u: goto label_3ca688;
        case 0x3ca68cu: goto label_3ca68c;
        case 0x3ca690u: goto label_3ca690;
        case 0x3ca694u: goto label_3ca694;
        case 0x3ca698u: goto label_3ca698;
        case 0x3ca69cu: goto label_3ca69c;
        case 0x3ca6a0u: goto label_3ca6a0;
        case 0x3ca6a4u: goto label_3ca6a4;
        case 0x3ca6a8u: goto label_3ca6a8;
        case 0x3ca6acu: goto label_3ca6ac;
        case 0x3ca6b0u: goto label_3ca6b0;
        case 0x3ca6b4u: goto label_3ca6b4;
        case 0x3ca6b8u: goto label_3ca6b8;
        case 0x3ca6bcu: goto label_3ca6bc;
        case 0x3ca6c0u: goto label_3ca6c0;
        case 0x3ca6c4u: goto label_3ca6c4;
        case 0x3ca6c8u: goto label_3ca6c8;
        case 0x3ca6ccu: goto label_3ca6cc;
        case 0x3ca6d0u: goto label_3ca6d0;
        case 0x3ca6d4u: goto label_3ca6d4;
        case 0x3ca6d8u: goto label_3ca6d8;
        case 0x3ca6dcu: goto label_3ca6dc;
        case 0x3ca6e0u: goto label_3ca6e0;
        case 0x3ca6e4u: goto label_3ca6e4;
        case 0x3ca6e8u: goto label_3ca6e8;
        case 0x3ca6ecu: goto label_3ca6ec;
        case 0x3ca6f0u: goto label_3ca6f0;
        case 0x3ca6f4u: goto label_3ca6f4;
        case 0x3ca6f8u: goto label_3ca6f8;
        case 0x3ca6fcu: goto label_3ca6fc;
        case 0x3ca700u: goto label_3ca700;
        case 0x3ca704u: goto label_3ca704;
        case 0x3ca708u: goto label_3ca708;
        case 0x3ca70cu: goto label_3ca70c;
        case 0x3ca710u: goto label_3ca710;
        case 0x3ca714u: goto label_3ca714;
        case 0x3ca718u: goto label_3ca718;
        case 0x3ca71cu: goto label_3ca71c;
        case 0x3ca720u: goto label_3ca720;
        case 0x3ca724u: goto label_3ca724;
        case 0x3ca728u: goto label_3ca728;
        case 0x3ca72cu: goto label_3ca72c;
        case 0x3ca730u: goto label_3ca730;
        case 0x3ca734u: goto label_3ca734;
        case 0x3ca738u: goto label_3ca738;
        case 0x3ca73cu: goto label_3ca73c;
        case 0x3ca740u: goto label_3ca740;
        case 0x3ca744u: goto label_3ca744;
        case 0x3ca748u: goto label_3ca748;
        case 0x3ca74cu: goto label_3ca74c;
        case 0x3ca750u: goto label_3ca750;
        case 0x3ca754u: goto label_3ca754;
        case 0x3ca758u: goto label_3ca758;
        case 0x3ca75cu: goto label_3ca75c;
        case 0x3ca760u: goto label_3ca760;
        case 0x3ca764u: goto label_3ca764;
        case 0x3ca768u: goto label_3ca768;
        case 0x3ca76cu: goto label_3ca76c;
        case 0x3ca770u: goto label_3ca770;
        case 0x3ca774u: goto label_3ca774;
        case 0x3ca778u: goto label_3ca778;
        case 0x3ca77cu: goto label_3ca77c;
        case 0x3ca780u: goto label_3ca780;
        case 0x3ca784u: goto label_3ca784;
        case 0x3ca788u: goto label_3ca788;
        case 0x3ca78cu: goto label_3ca78c;
        case 0x3ca790u: goto label_3ca790;
        case 0x3ca794u: goto label_3ca794;
        case 0x3ca798u: goto label_3ca798;
        case 0x3ca79cu: goto label_3ca79c;
        case 0x3ca7a0u: goto label_3ca7a0;
        case 0x3ca7a4u: goto label_3ca7a4;
        case 0x3ca7a8u: goto label_3ca7a8;
        case 0x3ca7acu: goto label_3ca7ac;
        case 0x3ca7b0u: goto label_3ca7b0;
        case 0x3ca7b4u: goto label_3ca7b4;
        case 0x3ca7b8u: goto label_3ca7b8;
        case 0x3ca7bcu: goto label_3ca7bc;
        case 0x3ca7c0u: goto label_3ca7c0;
        case 0x3ca7c4u: goto label_3ca7c4;
        case 0x3ca7c8u: goto label_3ca7c8;
        case 0x3ca7ccu: goto label_3ca7cc;
        case 0x3ca7d0u: goto label_3ca7d0;
        case 0x3ca7d4u: goto label_3ca7d4;
        case 0x3ca7d8u: goto label_3ca7d8;
        case 0x3ca7dcu: goto label_3ca7dc;
        case 0x3ca7e0u: goto label_3ca7e0;
        case 0x3ca7e4u: goto label_3ca7e4;
        case 0x3ca7e8u: goto label_3ca7e8;
        case 0x3ca7ecu: goto label_3ca7ec;
        case 0x3ca7f0u: goto label_3ca7f0;
        case 0x3ca7f4u: goto label_3ca7f4;
        case 0x3ca7f8u: goto label_3ca7f8;
        case 0x3ca7fcu: goto label_3ca7fc;
        case 0x3ca800u: goto label_3ca800;
        case 0x3ca804u: goto label_3ca804;
        case 0x3ca808u: goto label_3ca808;
        case 0x3ca80cu: goto label_3ca80c;
        case 0x3ca810u: goto label_3ca810;
        case 0x3ca814u: goto label_3ca814;
        case 0x3ca818u: goto label_3ca818;
        case 0x3ca81cu: goto label_3ca81c;
        case 0x3ca820u: goto label_3ca820;
        case 0x3ca824u: goto label_3ca824;
        case 0x3ca828u: goto label_3ca828;
        case 0x3ca82cu: goto label_3ca82c;
        case 0x3ca830u: goto label_3ca830;
        case 0x3ca834u: goto label_3ca834;
        case 0x3ca838u: goto label_3ca838;
        case 0x3ca83cu: goto label_3ca83c;
        case 0x3ca840u: goto label_3ca840;
        case 0x3ca844u: goto label_3ca844;
        case 0x3ca848u: goto label_3ca848;
        case 0x3ca84cu: goto label_3ca84c;
        case 0x3ca850u: goto label_3ca850;
        case 0x3ca854u: goto label_3ca854;
        case 0x3ca858u: goto label_3ca858;
        case 0x3ca85cu: goto label_3ca85c;
        case 0x3ca860u: goto label_3ca860;
        case 0x3ca864u: goto label_3ca864;
        case 0x3ca868u: goto label_3ca868;
        case 0x3ca86cu: goto label_3ca86c;
        case 0x3ca870u: goto label_3ca870;
        case 0x3ca874u: goto label_3ca874;
        case 0x3ca878u: goto label_3ca878;
        case 0x3ca87cu: goto label_3ca87c;
        case 0x3ca880u: goto label_3ca880;
        case 0x3ca884u: goto label_3ca884;
        case 0x3ca888u: goto label_3ca888;
        case 0x3ca88cu: goto label_3ca88c;
        case 0x3ca890u: goto label_3ca890;
        case 0x3ca894u: goto label_3ca894;
        case 0x3ca898u: goto label_3ca898;
        case 0x3ca89cu: goto label_3ca89c;
        case 0x3ca8a0u: goto label_3ca8a0;
        case 0x3ca8a4u: goto label_3ca8a4;
        case 0x3ca8a8u: goto label_3ca8a8;
        case 0x3ca8acu: goto label_3ca8ac;
        case 0x3ca8b0u: goto label_3ca8b0;
        case 0x3ca8b4u: goto label_3ca8b4;
        case 0x3ca8b8u: goto label_3ca8b8;
        case 0x3ca8bcu: goto label_3ca8bc;
        case 0x3ca8c0u: goto label_3ca8c0;
        case 0x3ca8c4u: goto label_3ca8c4;
        case 0x3ca8c8u: goto label_3ca8c8;
        case 0x3ca8ccu: goto label_3ca8cc;
        case 0x3ca8d0u: goto label_3ca8d0;
        case 0x3ca8d4u: goto label_3ca8d4;
        case 0x3ca8d8u: goto label_3ca8d8;
        case 0x3ca8dcu: goto label_3ca8dc;
        case 0x3ca8e0u: goto label_3ca8e0;
        case 0x3ca8e4u: goto label_3ca8e4;
        case 0x3ca8e8u: goto label_3ca8e8;
        case 0x3ca8ecu: goto label_3ca8ec;
        case 0x3ca8f0u: goto label_3ca8f0;
        case 0x3ca8f4u: goto label_3ca8f4;
        case 0x3ca8f8u: goto label_3ca8f8;
        case 0x3ca8fcu: goto label_3ca8fc;
        case 0x3ca900u: goto label_3ca900;
        case 0x3ca904u: goto label_3ca904;
        case 0x3ca908u: goto label_3ca908;
        case 0x3ca90cu: goto label_3ca90c;
        case 0x3ca910u: goto label_3ca910;
        case 0x3ca914u: goto label_3ca914;
        case 0x3ca918u: goto label_3ca918;
        case 0x3ca91cu: goto label_3ca91c;
        case 0x3ca920u: goto label_3ca920;
        case 0x3ca924u: goto label_3ca924;
        case 0x3ca928u: goto label_3ca928;
        case 0x3ca92cu: goto label_3ca92c;
        case 0x3ca930u: goto label_3ca930;
        case 0x3ca934u: goto label_3ca934;
        case 0x3ca938u: goto label_3ca938;
        case 0x3ca93cu: goto label_3ca93c;
        case 0x3ca940u: goto label_3ca940;
        case 0x3ca944u: goto label_3ca944;
        case 0x3ca948u: goto label_3ca948;
        case 0x3ca94cu: goto label_3ca94c;
        case 0x3ca950u: goto label_3ca950;
        case 0x3ca954u: goto label_3ca954;
        case 0x3ca958u: goto label_3ca958;
        case 0x3ca95cu: goto label_3ca95c;
        case 0x3ca960u: goto label_3ca960;
        case 0x3ca964u: goto label_3ca964;
        case 0x3ca968u: goto label_3ca968;
        case 0x3ca96cu: goto label_3ca96c;
        case 0x3ca970u: goto label_3ca970;
        case 0x3ca974u: goto label_3ca974;
        case 0x3ca978u: goto label_3ca978;
        case 0x3ca97cu: goto label_3ca97c;
        case 0x3ca980u: goto label_3ca980;
        case 0x3ca984u: goto label_3ca984;
        case 0x3ca988u: goto label_3ca988;
        case 0x3ca98cu: goto label_3ca98c;
        case 0x3ca990u: goto label_3ca990;
        case 0x3ca994u: goto label_3ca994;
        case 0x3ca998u: goto label_3ca998;
        case 0x3ca99cu: goto label_3ca99c;
        case 0x3ca9a0u: goto label_3ca9a0;
        case 0x3ca9a4u: goto label_3ca9a4;
        case 0x3ca9a8u: goto label_3ca9a8;
        case 0x3ca9acu: goto label_3ca9ac;
        case 0x3ca9b0u: goto label_3ca9b0;
        case 0x3ca9b4u: goto label_3ca9b4;
        case 0x3ca9b8u: goto label_3ca9b8;
        case 0x3ca9bcu: goto label_3ca9bc;
        case 0x3ca9c0u: goto label_3ca9c0;
        case 0x3ca9c4u: goto label_3ca9c4;
        case 0x3ca9c8u: goto label_3ca9c8;
        case 0x3ca9ccu: goto label_3ca9cc;
        case 0x3ca9d0u: goto label_3ca9d0;
        case 0x3ca9d4u: goto label_3ca9d4;
        case 0x3ca9d8u: goto label_3ca9d8;
        case 0x3ca9dcu: goto label_3ca9dc;
        case 0x3ca9e0u: goto label_3ca9e0;
        case 0x3ca9e4u: goto label_3ca9e4;
        case 0x3ca9e8u: goto label_3ca9e8;
        case 0x3ca9ecu: goto label_3ca9ec;
        case 0x3ca9f0u: goto label_3ca9f0;
        case 0x3ca9f4u: goto label_3ca9f4;
        case 0x3ca9f8u: goto label_3ca9f8;
        case 0x3ca9fcu: goto label_3ca9fc;
        case 0x3caa00u: goto label_3caa00;
        case 0x3caa04u: goto label_3caa04;
        case 0x3caa08u: goto label_3caa08;
        case 0x3caa0cu: goto label_3caa0c;
        case 0x3caa10u: goto label_3caa10;
        case 0x3caa14u: goto label_3caa14;
        case 0x3caa18u: goto label_3caa18;
        case 0x3caa1cu: goto label_3caa1c;
        case 0x3caa20u: goto label_3caa20;
        case 0x3caa24u: goto label_3caa24;
        case 0x3caa28u: goto label_3caa28;
        case 0x3caa2cu: goto label_3caa2c;
        case 0x3caa30u: goto label_3caa30;
        case 0x3caa34u: goto label_3caa34;
        case 0x3caa38u: goto label_3caa38;
        case 0x3caa3cu: goto label_3caa3c;
        case 0x3caa40u: goto label_3caa40;
        case 0x3caa44u: goto label_3caa44;
        case 0x3caa48u: goto label_3caa48;
        case 0x3caa4cu: goto label_3caa4c;
        case 0x3caa50u: goto label_3caa50;
        case 0x3caa54u: goto label_3caa54;
        case 0x3caa58u: goto label_3caa58;
        case 0x3caa5cu: goto label_3caa5c;
        case 0x3caa60u: goto label_3caa60;
        case 0x3caa64u: goto label_3caa64;
        case 0x3caa68u: goto label_3caa68;
        case 0x3caa6cu: goto label_3caa6c;
        case 0x3caa70u: goto label_3caa70;
        case 0x3caa74u: goto label_3caa74;
        case 0x3caa78u: goto label_3caa78;
        case 0x3caa7cu: goto label_3caa7c;
        case 0x3caa80u: goto label_3caa80;
        case 0x3caa84u: goto label_3caa84;
        case 0x3caa88u: goto label_3caa88;
        case 0x3caa8cu: goto label_3caa8c;
        case 0x3caa90u: goto label_3caa90;
        case 0x3caa94u: goto label_3caa94;
        case 0x3caa98u: goto label_3caa98;
        case 0x3caa9cu: goto label_3caa9c;
        case 0x3caaa0u: goto label_3caaa0;
        case 0x3caaa4u: goto label_3caaa4;
        case 0x3caaa8u: goto label_3caaa8;
        case 0x3caaacu: goto label_3caaac;
        case 0x3caab0u: goto label_3caab0;
        case 0x3caab4u: goto label_3caab4;
        case 0x3caab8u: goto label_3caab8;
        case 0x3caabcu: goto label_3caabc;
        case 0x3caac0u: goto label_3caac0;
        case 0x3caac4u: goto label_3caac4;
        case 0x3caac8u: goto label_3caac8;
        case 0x3caaccu: goto label_3caacc;
        case 0x3caad0u: goto label_3caad0;
        case 0x3caad4u: goto label_3caad4;
        case 0x3caad8u: goto label_3caad8;
        case 0x3caadcu: goto label_3caadc;
        case 0x3caae0u: goto label_3caae0;
        case 0x3caae4u: goto label_3caae4;
        case 0x3caae8u: goto label_3caae8;
        case 0x3caaecu: goto label_3caaec;
        case 0x3caaf0u: goto label_3caaf0;
        case 0x3caaf4u: goto label_3caaf4;
        case 0x3caaf8u: goto label_3caaf8;
        case 0x3caafcu: goto label_3caafc;
        case 0x3cab00u: goto label_3cab00;
        case 0x3cab04u: goto label_3cab04;
        case 0x3cab08u: goto label_3cab08;
        case 0x3cab0cu: goto label_3cab0c;
        case 0x3cab10u: goto label_3cab10;
        case 0x3cab14u: goto label_3cab14;
        case 0x3cab18u: goto label_3cab18;
        case 0x3cab1cu: goto label_3cab1c;
        case 0x3cab20u: goto label_3cab20;
        case 0x3cab24u: goto label_3cab24;
        case 0x3cab28u: goto label_3cab28;
        case 0x3cab2cu: goto label_3cab2c;
        case 0x3cab30u: goto label_3cab30;
        case 0x3cab34u: goto label_3cab34;
        case 0x3cab38u: goto label_3cab38;
        case 0x3cab3cu: goto label_3cab3c;
        case 0x3cab40u: goto label_3cab40;
        case 0x3cab44u: goto label_3cab44;
        case 0x3cab48u: goto label_3cab48;
        case 0x3cab4cu: goto label_3cab4c;
        case 0x3cab50u: goto label_3cab50;
        case 0x3cab54u: goto label_3cab54;
        case 0x3cab58u: goto label_3cab58;
        case 0x3cab5cu: goto label_3cab5c;
        case 0x3cab60u: goto label_3cab60;
        case 0x3cab64u: goto label_3cab64;
        case 0x3cab68u: goto label_3cab68;
        case 0x3cab6cu: goto label_3cab6c;
        case 0x3cab70u: goto label_3cab70;
        case 0x3cab74u: goto label_3cab74;
        case 0x3cab78u: goto label_3cab78;
        case 0x3cab7cu: goto label_3cab7c;
        case 0x3cab80u: goto label_3cab80;
        case 0x3cab84u: goto label_3cab84;
        case 0x3cab88u: goto label_3cab88;
        case 0x3cab8cu: goto label_3cab8c;
        case 0x3cab90u: goto label_3cab90;
        case 0x3cab94u: goto label_3cab94;
        case 0x3cab98u: goto label_3cab98;
        case 0x3cab9cu: goto label_3cab9c;
        case 0x3caba0u: goto label_3caba0;
        case 0x3caba4u: goto label_3caba4;
        case 0x3caba8u: goto label_3caba8;
        case 0x3cabacu: goto label_3cabac;
        case 0x3cabb0u: goto label_3cabb0;
        case 0x3cabb4u: goto label_3cabb4;
        case 0x3cabb8u: goto label_3cabb8;
        case 0x3cabbcu: goto label_3cabbc;
        case 0x3cabc0u: goto label_3cabc0;
        case 0x3cabc4u: goto label_3cabc4;
        case 0x3cabc8u: goto label_3cabc8;
        case 0x3cabccu: goto label_3cabcc;
        case 0x3cabd0u: goto label_3cabd0;
        case 0x3cabd4u: goto label_3cabd4;
        case 0x3cabd8u: goto label_3cabd8;
        case 0x3cabdcu: goto label_3cabdc;
        case 0x3cabe0u: goto label_3cabe0;
        case 0x3cabe4u: goto label_3cabe4;
        case 0x3cabe8u: goto label_3cabe8;
        case 0x3cabecu: goto label_3cabec;
        case 0x3cabf0u: goto label_3cabf0;
        case 0x3cabf4u: goto label_3cabf4;
        case 0x3cabf8u: goto label_3cabf8;
        case 0x3cabfcu: goto label_3cabfc;
        case 0x3cac00u: goto label_3cac00;
        case 0x3cac04u: goto label_3cac04;
        case 0x3cac08u: goto label_3cac08;
        case 0x3cac0cu: goto label_3cac0c;
        case 0x3cac10u: goto label_3cac10;
        case 0x3cac14u: goto label_3cac14;
        case 0x3cac18u: goto label_3cac18;
        case 0x3cac1cu: goto label_3cac1c;
        case 0x3cac20u: goto label_3cac20;
        case 0x3cac24u: goto label_3cac24;
        case 0x3cac28u: goto label_3cac28;
        case 0x3cac2cu: goto label_3cac2c;
        case 0x3cac30u: goto label_3cac30;
        case 0x3cac34u: goto label_3cac34;
        case 0x3cac38u: goto label_3cac38;
        case 0x3cac3cu: goto label_3cac3c;
        case 0x3cac40u: goto label_3cac40;
        case 0x3cac44u: goto label_3cac44;
        case 0x3cac48u: goto label_3cac48;
        case 0x3cac4cu: goto label_3cac4c;
        case 0x3cac50u: goto label_3cac50;
        case 0x3cac54u: goto label_3cac54;
        case 0x3cac58u: goto label_3cac58;
        case 0x3cac5cu: goto label_3cac5c;
        case 0x3cac60u: goto label_3cac60;
        case 0x3cac64u: goto label_3cac64;
        case 0x3cac68u: goto label_3cac68;
        case 0x3cac6cu: goto label_3cac6c;
        case 0x3cac70u: goto label_3cac70;
        case 0x3cac74u: goto label_3cac74;
        case 0x3cac78u: goto label_3cac78;
        case 0x3cac7cu: goto label_3cac7c;
        case 0x3cac80u: goto label_3cac80;
        case 0x3cac84u: goto label_3cac84;
        case 0x3cac88u: goto label_3cac88;
        case 0x3cac8cu: goto label_3cac8c;
        case 0x3cac90u: goto label_3cac90;
        case 0x3cac94u: goto label_3cac94;
        case 0x3cac98u: goto label_3cac98;
        case 0x3cac9cu: goto label_3cac9c;
        case 0x3caca0u: goto label_3caca0;
        case 0x3caca4u: goto label_3caca4;
        case 0x3caca8u: goto label_3caca8;
        case 0x3cacacu: goto label_3cacac;
        case 0x3cacb0u: goto label_3cacb0;
        case 0x3cacb4u: goto label_3cacb4;
        case 0x3cacb8u: goto label_3cacb8;
        case 0x3cacbcu: goto label_3cacbc;
        case 0x3cacc0u: goto label_3cacc0;
        case 0x3cacc4u: goto label_3cacc4;
        case 0x3cacc8u: goto label_3cacc8;
        case 0x3cacccu: goto label_3caccc;
        case 0x3cacd0u: goto label_3cacd0;
        case 0x3cacd4u: goto label_3cacd4;
        case 0x3cacd8u: goto label_3cacd8;
        case 0x3cacdcu: goto label_3cacdc;
        case 0x3cace0u: goto label_3cace0;
        case 0x3cace4u: goto label_3cace4;
        case 0x3cace8u: goto label_3cace8;
        case 0x3cacecu: goto label_3cacec;
        case 0x3cacf0u: goto label_3cacf0;
        case 0x3cacf4u: goto label_3cacf4;
        case 0x3cacf8u: goto label_3cacf8;
        case 0x3cacfcu: goto label_3cacfc;
        case 0x3cad00u: goto label_3cad00;
        case 0x3cad04u: goto label_3cad04;
        case 0x3cad08u: goto label_3cad08;
        case 0x3cad0cu: goto label_3cad0c;
        case 0x3cad10u: goto label_3cad10;
        case 0x3cad14u: goto label_3cad14;
        case 0x3cad18u: goto label_3cad18;
        case 0x3cad1cu: goto label_3cad1c;
        case 0x3cad20u: goto label_3cad20;
        case 0x3cad24u: goto label_3cad24;
        case 0x3cad28u: goto label_3cad28;
        case 0x3cad2cu: goto label_3cad2c;
        case 0x3cad30u: goto label_3cad30;
        case 0x3cad34u: goto label_3cad34;
        case 0x3cad38u: goto label_3cad38;
        case 0x3cad3cu: goto label_3cad3c;
        case 0x3cad40u: goto label_3cad40;
        case 0x3cad44u: goto label_3cad44;
        case 0x3cad48u: goto label_3cad48;
        case 0x3cad4cu: goto label_3cad4c;
        case 0x3cad50u: goto label_3cad50;
        case 0x3cad54u: goto label_3cad54;
        case 0x3cad58u: goto label_3cad58;
        case 0x3cad5cu: goto label_3cad5c;
        case 0x3cad60u: goto label_3cad60;
        case 0x3cad64u: goto label_3cad64;
        case 0x3cad68u: goto label_3cad68;
        case 0x3cad6cu: goto label_3cad6c;
        case 0x3cad70u: goto label_3cad70;
        case 0x3cad74u: goto label_3cad74;
        case 0x3cad78u: goto label_3cad78;
        case 0x3cad7cu: goto label_3cad7c;
        case 0x3cad80u: goto label_3cad80;
        case 0x3cad84u: goto label_3cad84;
        case 0x3cad88u: goto label_3cad88;
        case 0x3cad8cu: goto label_3cad8c;
        case 0x3cad90u: goto label_3cad90;
        case 0x3cad94u: goto label_3cad94;
        case 0x3cad98u: goto label_3cad98;
        case 0x3cad9cu: goto label_3cad9c;
        case 0x3cada0u: goto label_3cada0;
        case 0x3cada4u: goto label_3cada4;
        case 0x3cada8u: goto label_3cada8;
        case 0x3cadacu: goto label_3cadac;
        case 0x3cadb0u: goto label_3cadb0;
        case 0x3cadb4u: goto label_3cadb4;
        case 0x3cadb8u: goto label_3cadb8;
        case 0x3cadbcu: goto label_3cadbc;
        case 0x3cadc0u: goto label_3cadc0;
        case 0x3cadc4u: goto label_3cadc4;
        case 0x3cadc8u: goto label_3cadc8;
        case 0x3cadccu: goto label_3cadcc;
        case 0x3cadd0u: goto label_3cadd0;
        case 0x3cadd4u: goto label_3cadd4;
        case 0x3cadd8u: goto label_3cadd8;
        case 0x3caddcu: goto label_3caddc;
        case 0x3cade0u: goto label_3cade0;
        case 0x3cade4u: goto label_3cade4;
        case 0x3cade8u: goto label_3cade8;
        case 0x3cadecu: goto label_3cadec;
        case 0x3cadf0u: goto label_3cadf0;
        case 0x3cadf4u: goto label_3cadf4;
        case 0x3cadf8u: goto label_3cadf8;
        case 0x3cadfcu: goto label_3cadfc;
        case 0x3cae00u: goto label_3cae00;
        case 0x3cae04u: goto label_3cae04;
        case 0x3cae08u: goto label_3cae08;
        case 0x3cae0cu: goto label_3cae0c;
        case 0x3cae10u: goto label_3cae10;
        case 0x3cae14u: goto label_3cae14;
        case 0x3cae18u: goto label_3cae18;
        case 0x3cae1cu: goto label_3cae1c;
        case 0x3cae20u: goto label_3cae20;
        case 0x3cae24u: goto label_3cae24;
        case 0x3cae28u: goto label_3cae28;
        case 0x3cae2cu: goto label_3cae2c;
        case 0x3cae30u: goto label_3cae30;
        case 0x3cae34u: goto label_3cae34;
        case 0x3cae38u: goto label_3cae38;
        case 0x3cae3cu: goto label_3cae3c;
        case 0x3cae40u: goto label_3cae40;
        case 0x3cae44u: goto label_3cae44;
        case 0x3cae48u: goto label_3cae48;
        case 0x3cae4cu: goto label_3cae4c;
        case 0x3cae50u: goto label_3cae50;
        case 0x3cae54u: goto label_3cae54;
        case 0x3cae58u: goto label_3cae58;
        case 0x3cae5cu: goto label_3cae5c;
        case 0x3cae60u: goto label_3cae60;
        case 0x3cae64u: goto label_3cae64;
        case 0x3cae68u: goto label_3cae68;
        case 0x3cae6cu: goto label_3cae6c;
        case 0x3cae70u: goto label_3cae70;
        case 0x3cae74u: goto label_3cae74;
        case 0x3cae78u: goto label_3cae78;
        case 0x3cae7cu: goto label_3cae7c;
        case 0x3cae80u: goto label_3cae80;
        case 0x3cae84u: goto label_3cae84;
        case 0x3cae88u: goto label_3cae88;
        case 0x3cae8cu: goto label_3cae8c;
        case 0x3cae90u: goto label_3cae90;
        case 0x3cae94u: goto label_3cae94;
        case 0x3cae98u: goto label_3cae98;
        case 0x3cae9cu: goto label_3cae9c;
        case 0x3caea0u: goto label_3caea0;
        case 0x3caea4u: goto label_3caea4;
        case 0x3caea8u: goto label_3caea8;
        case 0x3caeacu: goto label_3caeac;
        case 0x3caeb0u: goto label_3caeb0;
        case 0x3caeb4u: goto label_3caeb4;
        case 0x3caeb8u: goto label_3caeb8;
        case 0x3caebcu: goto label_3caebc;
        case 0x3caec0u: goto label_3caec0;
        case 0x3caec4u: goto label_3caec4;
        case 0x3caec8u: goto label_3caec8;
        case 0x3caeccu: goto label_3caecc;
        case 0x3caed0u: goto label_3caed0;
        case 0x3caed4u: goto label_3caed4;
        case 0x3caed8u: goto label_3caed8;
        case 0x3caedcu: goto label_3caedc;
        case 0x3caee0u: goto label_3caee0;
        case 0x3caee4u: goto label_3caee4;
        case 0x3caee8u: goto label_3caee8;
        case 0x3caeecu: goto label_3caeec;
        case 0x3caef0u: goto label_3caef0;
        case 0x3caef4u: goto label_3caef4;
        case 0x3caef8u: goto label_3caef8;
        case 0x3caefcu: goto label_3caefc;
        case 0x3caf00u: goto label_3caf00;
        case 0x3caf04u: goto label_3caf04;
        case 0x3caf08u: goto label_3caf08;
        case 0x3caf0cu: goto label_3caf0c;
        case 0x3caf10u: goto label_3caf10;
        case 0x3caf14u: goto label_3caf14;
        case 0x3caf18u: goto label_3caf18;
        case 0x3caf1cu: goto label_3caf1c;
        case 0x3caf20u: goto label_3caf20;
        case 0x3caf24u: goto label_3caf24;
        case 0x3caf28u: goto label_3caf28;
        case 0x3caf2cu: goto label_3caf2c;
        case 0x3caf30u: goto label_3caf30;
        case 0x3caf34u: goto label_3caf34;
        case 0x3caf38u: goto label_3caf38;
        case 0x3caf3cu: goto label_3caf3c;
        case 0x3caf40u: goto label_3caf40;
        case 0x3caf44u: goto label_3caf44;
        case 0x3caf48u: goto label_3caf48;
        case 0x3caf4cu: goto label_3caf4c;
        case 0x3caf50u: goto label_3caf50;
        case 0x3caf54u: goto label_3caf54;
        case 0x3caf58u: goto label_3caf58;
        case 0x3caf5cu: goto label_3caf5c;
        case 0x3caf60u: goto label_3caf60;
        case 0x3caf64u: goto label_3caf64;
        case 0x3caf68u: goto label_3caf68;
        case 0x3caf6cu: goto label_3caf6c;
        case 0x3caf70u: goto label_3caf70;
        case 0x3caf74u: goto label_3caf74;
        case 0x3caf78u: goto label_3caf78;
        case 0x3caf7cu: goto label_3caf7c;
        case 0x3caf80u: goto label_3caf80;
        case 0x3caf84u: goto label_3caf84;
        case 0x3caf88u: goto label_3caf88;
        case 0x3caf8cu: goto label_3caf8c;
        case 0x3caf90u: goto label_3caf90;
        case 0x3caf94u: goto label_3caf94;
        case 0x3caf98u: goto label_3caf98;
        case 0x3caf9cu: goto label_3caf9c;
        case 0x3cafa0u: goto label_3cafa0;
        case 0x3cafa4u: goto label_3cafa4;
        case 0x3cafa8u: goto label_3cafa8;
        case 0x3cafacu: goto label_3cafac;
        case 0x3cafb0u: goto label_3cafb0;
        case 0x3cafb4u: goto label_3cafb4;
        case 0x3cafb8u: goto label_3cafb8;
        case 0x3cafbcu: goto label_3cafbc;
        case 0x3cafc0u: goto label_3cafc0;
        case 0x3cafc4u: goto label_3cafc4;
        case 0x3cafc8u: goto label_3cafc8;
        case 0x3cafccu: goto label_3cafcc;
        case 0x3cafd0u: goto label_3cafd0;
        case 0x3cafd4u: goto label_3cafd4;
        case 0x3cafd8u: goto label_3cafd8;
        case 0x3cafdcu: goto label_3cafdc;
        case 0x3cafe0u: goto label_3cafe0;
        case 0x3cafe4u: goto label_3cafe4;
        case 0x3cafe8u: goto label_3cafe8;
        case 0x3cafecu: goto label_3cafec;
        case 0x3caff0u: goto label_3caff0;
        case 0x3caff4u: goto label_3caff4;
        case 0x3caff8u: goto label_3caff8;
        case 0x3caffcu: goto label_3caffc;
        case 0x3cb000u: goto label_3cb000;
        case 0x3cb004u: goto label_3cb004;
        case 0x3cb008u: goto label_3cb008;
        case 0x3cb00cu: goto label_3cb00c;
        case 0x3cb010u: goto label_3cb010;
        case 0x3cb014u: goto label_3cb014;
        case 0x3cb018u: goto label_3cb018;
        case 0x3cb01cu: goto label_3cb01c;
        case 0x3cb020u: goto label_3cb020;
        case 0x3cb024u: goto label_3cb024;
        case 0x3cb028u: goto label_3cb028;
        case 0x3cb02cu: goto label_3cb02c;
        case 0x3cb030u: goto label_3cb030;
        case 0x3cb034u: goto label_3cb034;
        case 0x3cb038u: goto label_3cb038;
        case 0x3cb03cu: goto label_3cb03c;
        case 0x3cb040u: goto label_3cb040;
        case 0x3cb044u: goto label_3cb044;
        case 0x3cb048u: goto label_3cb048;
        case 0x3cb04cu: goto label_3cb04c;
        case 0x3cb050u: goto label_3cb050;
        case 0x3cb054u: goto label_3cb054;
        case 0x3cb058u: goto label_3cb058;
        case 0x3cb05cu: goto label_3cb05c;
        case 0x3cb060u: goto label_3cb060;
        case 0x3cb064u: goto label_3cb064;
        case 0x3cb068u: goto label_3cb068;
        case 0x3cb06cu: goto label_3cb06c;
        case 0x3cb070u: goto label_3cb070;
        case 0x3cb074u: goto label_3cb074;
        case 0x3cb078u: goto label_3cb078;
        case 0x3cb07cu: goto label_3cb07c;
        case 0x3cb080u: goto label_3cb080;
        case 0x3cb084u: goto label_3cb084;
        case 0x3cb088u: goto label_3cb088;
        case 0x3cb08cu: goto label_3cb08c;
        case 0x3cb090u: goto label_3cb090;
        case 0x3cb094u: goto label_3cb094;
        case 0x3cb098u: goto label_3cb098;
        case 0x3cb09cu: goto label_3cb09c;
        case 0x3cb0a0u: goto label_3cb0a0;
        case 0x3cb0a4u: goto label_3cb0a4;
        case 0x3cb0a8u: goto label_3cb0a8;
        case 0x3cb0acu: goto label_3cb0ac;
        case 0x3cb0b0u: goto label_3cb0b0;
        case 0x3cb0b4u: goto label_3cb0b4;
        case 0x3cb0b8u: goto label_3cb0b8;
        case 0x3cb0bcu: goto label_3cb0bc;
        case 0x3cb0c0u: goto label_3cb0c0;
        case 0x3cb0c4u: goto label_3cb0c4;
        case 0x3cb0c8u: goto label_3cb0c8;
        case 0x3cb0ccu: goto label_3cb0cc;
        case 0x3cb0d0u: goto label_3cb0d0;
        case 0x3cb0d4u: goto label_3cb0d4;
        case 0x3cb0d8u: goto label_3cb0d8;
        case 0x3cb0dcu: goto label_3cb0dc;
        case 0x3cb0e0u: goto label_3cb0e0;
        case 0x3cb0e4u: goto label_3cb0e4;
        case 0x3cb0e8u: goto label_3cb0e8;
        case 0x3cb0ecu: goto label_3cb0ec;
        case 0x3cb0f0u: goto label_3cb0f0;
        case 0x3cb0f4u: goto label_3cb0f4;
        case 0x3cb0f8u: goto label_3cb0f8;
        case 0x3cb0fcu: goto label_3cb0fc;
        case 0x3cb100u: goto label_3cb100;
        case 0x3cb104u: goto label_3cb104;
        case 0x3cb108u: goto label_3cb108;
        case 0x3cb10cu: goto label_3cb10c;
        case 0x3cb110u: goto label_3cb110;
        case 0x3cb114u: goto label_3cb114;
        case 0x3cb118u: goto label_3cb118;
        case 0x3cb11cu: goto label_3cb11c;
        case 0x3cb120u: goto label_3cb120;
        case 0x3cb124u: goto label_3cb124;
        case 0x3cb128u: goto label_3cb128;
        case 0x3cb12cu: goto label_3cb12c;
        case 0x3cb130u: goto label_3cb130;
        case 0x3cb134u: goto label_3cb134;
        case 0x3cb138u: goto label_3cb138;
        case 0x3cb13cu: goto label_3cb13c;
        case 0x3cb140u: goto label_3cb140;
        case 0x3cb144u: goto label_3cb144;
        case 0x3cb148u: goto label_3cb148;
        case 0x3cb14cu: goto label_3cb14c;
        case 0x3cb150u: goto label_3cb150;
        case 0x3cb154u: goto label_3cb154;
        case 0x3cb158u: goto label_3cb158;
        case 0x3cb15cu: goto label_3cb15c;
        case 0x3cb160u: goto label_3cb160;
        case 0x3cb164u: goto label_3cb164;
        case 0x3cb168u: goto label_3cb168;
        case 0x3cb16cu: goto label_3cb16c;
        case 0x3cb170u: goto label_3cb170;
        case 0x3cb174u: goto label_3cb174;
        case 0x3cb178u: goto label_3cb178;
        case 0x3cb17cu: goto label_3cb17c;
        case 0x3cb180u: goto label_3cb180;
        case 0x3cb184u: goto label_3cb184;
        case 0x3cb188u: goto label_3cb188;
        case 0x3cb18cu: goto label_3cb18c;
        case 0x3cb190u: goto label_3cb190;
        case 0x3cb194u: goto label_3cb194;
        case 0x3cb198u: goto label_3cb198;
        case 0x3cb19cu: goto label_3cb19c;
        case 0x3cb1a0u: goto label_3cb1a0;
        case 0x3cb1a4u: goto label_3cb1a4;
        case 0x3cb1a8u: goto label_3cb1a8;
        case 0x3cb1acu: goto label_3cb1ac;
        case 0x3cb1b0u: goto label_3cb1b0;
        case 0x3cb1b4u: goto label_3cb1b4;
        case 0x3cb1b8u: goto label_3cb1b8;
        case 0x3cb1bcu: goto label_3cb1bc;
        case 0x3cb1c0u: goto label_3cb1c0;
        case 0x3cb1c4u: goto label_3cb1c4;
        case 0x3cb1c8u: goto label_3cb1c8;
        case 0x3cb1ccu: goto label_3cb1cc;
        case 0x3cb1d0u: goto label_3cb1d0;
        case 0x3cb1d4u: goto label_3cb1d4;
        case 0x3cb1d8u: goto label_3cb1d8;
        case 0x3cb1dcu: goto label_3cb1dc;
        case 0x3cb1e0u: goto label_3cb1e0;
        case 0x3cb1e4u: goto label_3cb1e4;
        case 0x3cb1e8u: goto label_3cb1e8;
        case 0x3cb1ecu: goto label_3cb1ec;
        case 0x3cb1f0u: goto label_3cb1f0;
        case 0x3cb1f4u: goto label_3cb1f4;
        case 0x3cb1f8u: goto label_3cb1f8;
        case 0x3cb1fcu: goto label_3cb1fc;
        case 0x3cb200u: goto label_3cb200;
        case 0x3cb204u: goto label_3cb204;
        case 0x3cb208u: goto label_3cb208;
        case 0x3cb20cu: goto label_3cb20c;
        case 0x3cb210u: goto label_3cb210;
        case 0x3cb214u: goto label_3cb214;
        case 0x3cb218u: goto label_3cb218;
        case 0x3cb21cu: goto label_3cb21c;
        case 0x3cb220u: goto label_3cb220;
        case 0x3cb224u: goto label_3cb224;
        case 0x3cb228u: goto label_3cb228;
        case 0x3cb22cu: goto label_3cb22c;
        case 0x3cb230u: goto label_3cb230;
        case 0x3cb234u: goto label_3cb234;
        case 0x3cb238u: goto label_3cb238;
        case 0x3cb23cu: goto label_3cb23c;
        case 0x3cb240u: goto label_3cb240;
        case 0x3cb244u: goto label_3cb244;
        case 0x3cb248u: goto label_3cb248;
        case 0x3cb24cu: goto label_3cb24c;
        case 0x3cb250u: goto label_3cb250;
        case 0x3cb254u: goto label_3cb254;
        case 0x3cb258u: goto label_3cb258;
        case 0x3cb25cu: goto label_3cb25c;
        case 0x3cb260u: goto label_3cb260;
        case 0x3cb264u: goto label_3cb264;
        case 0x3cb268u: goto label_3cb268;
        case 0x3cb26cu: goto label_3cb26c;
        case 0x3cb270u: goto label_3cb270;
        case 0x3cb274u: goto label_3cb274;
        case 0x3cb278u: goto label_3cb278;
        case 0x3cb27cu: goto label_3cb27c;
        case 0x3cb280u: goto label_3cb280;
        case 0x3cb284u: goto label_3cb284;
        case 0x3cb288u: goto label_3cb288;
        case 0x3cb28cu: goto label_3cb28c;
        case 0x3cb290u: goto label_3cb290;
        case 0x3cb294u: goto label_3cb294;
        case 0x3cb298u: goto label_3cb298;
        case 0x3cb29cu: goto label_3cb29c;
        case 0x3cb2a0u: goto label_3cb2a0;
        case 0x3cb2a4u: goto label_3cb2a4;
        case 0x3cb2a8u: goto label_3cb2a8;
        case 0x3cb2acu: goto label_3cb2ac;
        case 0x3cb2b0u: goto label_3cb2b0;
        case 0x3cb2b4u: goto label_3cb2b4;
        case 0x3cb2b8u: goto label_3cb2b8;
        case 0x3cb2bcu: goto label_3cb2bc;
        case 0x3cb2c0u: goto label_3cb2c0;
        case 0x3cb2c4u: goto label_3cb2c4;
        case 0x3cb2c8u: goto label_3cb2c8;
        case 0x3cb2ccu: goto label_3cb2cc;
        case 0x3cb2d0u: goto label_3cb2d0;
        case 0x3cb2d4u: goto label_3cb2d4;
        case 0x3cb2d8u: goto label_3cb2d8;
        case 0x3cb2dcu: goto label_3cb2dc;
        case 0x3cb2e0u: goto label_3cb2e0;
        case 0x3cb2e4u: goto label_3cb2e4;
        case 0x3cb2e8u: goto label_3cb2e8;
        case 0x3cb2ecu: goto label_3cb2ec;
        case 0x3cb2f0u: goto label_3cb2f0;
        case 0x3cb2f4u: goto label_3cb2f4;
        case 0x3cb2f8u: goto label_3cb2f8;
        case 0x3cb2fcu: goto label_3cb2fc;
        case 0x3cb300u: goto label_3cb300;
        case 0x3cb304u: goto label_3cb304;
        case 0x3cb308u: goto label_3cb308;
        case 0x3cb30cu: goto label_3cb30c;
        case 0x3cb310u: goto label_3cb310;
        case 0x3cb314u: goto label_3cb314;
        case 0x3cb318u: goto label_3cb318;
        case 0x3cb31cu: goto label_3cb31c;
        case 0x3cb320u: goto label_3cb320;
        case 0x3cb324u: goto label_3cb324;
        case 0x3cb328u: goto label_3cb328;
        case 0x3cb32cu: goto label_3cb32c;
        case 0x3cb330u: goto label_3cb330;
        case 0x3cb334u: goto label_3cb334;
        case 0x3cb338u: goto label_3cb338;
        case 0x3cb33cu: goto label_3cb33c;
        case 0x3cb340u: goto label_3cb340;
        case 0x3cb344u: goto label_3cb344;
        case 0x3cb348u: goto label_3cb348;
        case 0x3cb34cu: goto label_3cb34c;
        case 0x3cb350u: goto label_3cb350;
        case 0x3cb354u: goto label_3cb354;
        case 0x3cb358u: goto label_3cb358;
        case 0x3cb35cu: goto label_3cb35c;
        case 0x3cb360u: goto label_3cb360;
        case 0x3cb364u: goto label_3cb364;
        case 0x3cb368u: goto label_3cb368;
        case 0x3cb36cu: goto label_3cb36c;
        case 0x3cb370u: goto label_3cb370;
        case 0x3cb374u: goto label_3cb374;
        case 0x3cb378u: goto label_3cb378;
        case 0x3cb37cu: goto label_3cb37c;
        case 0x3cb380u: goto label_3cb380;
        case 0x3cb384u: goto label_3cb384;
        case 0x3cb388u: goto label_3cb388;
        case 0x3cb38cu: goto label_3cb38c;
        case 0x3cb390u: goto label_3cb390;
        case 0x3cb394u: goto label_3cb394;
        case 0x3cb398u: goto label_3cb398;
        case 0x3cb39cu: goto label_3cb39c;
        case 0x3cb3a0u: goto label_3cb3a0;
        case 0x3cb3a4u: goto label_3cb3a4;
        case 0x3cb3a8u: goto label_3cb3a8;
        case 0x3cb3acu: goto label_3cb3ac;
        case 0x3cb3b0u: goto label_3cb3b0;
        case 0x3cb3b4u: goto label_3cb3b4;
        case 0x3cb3b8u: goto label_3cb3b8;
        case 0x3cb3bcu: goto label_3cb3bc;
        case 0x3cb3c0u: goto label_3cb3c0;
        case 0x3cb3c4u: goto label_3cb3c4;
        case 0x3cb3c8u: goto label_3cb3c8;
        case 0x3cb3ccu: goto label_3cb3cc;
        case 0x3cb3d0u: goto label_3cb3d0;
        case 0x3cb3d4u: goto label_3cb3d4;
        case 0x3cb3d8u: goto label_3cb3d8;
        case 0x3cb3dcu: goto label_3cb3dc;
        case 0x3cb3e0u: goto label_3cb3e0;
        case 0x3cb3e4u: goto label_3cb3e4;
        case 0x3cb3e8u: goto label_3cb3e8;
        case 0x3cb3ecu: goto label_3cb3ec;
        case 0x3cb3f0u: goto label_3cb3f0;
        case 0x3cb3f4u: goto label_3cb3f4;
        case 0x3cb3f8u: goto label_3cb3f8;
        case 0x3cb3fcu: goto label_3cb3fc;
        case 0x3cb400u: goto label_3cb400;
        case 0x3cb404u: goto label_3cb404;
        case 0x3cb408u: goto label_3cb408;
        case 0x3cb40cu: goto label_3cb40c;
        case 0x3cb410u: goto label_3cb410;
        case 0x3cb414u: goto label_3cb414;
        case 0x3cb418u: goto label_3cb418;
        case 0x3cb41cu: goto label_3cb41c;
        case 0x3cb420u: goto label_3cb420;
        case 0x3cb424u: goto label_3cb424;
        case 0x3cb428u: goto label_3cb428;
        case 0x3cb42cu: goto label_3cb42c;
        case 0x3cb430u: goto label_3cb430;
        case 0x3cb434u: goto label_3cb434;
        case 0x3cb438u: goto label_3cb438;
        case 0x3cb43cu: goto label_3cb43c;
        case 0x3cb440u: goto label_3cb440;
        case 0x3cb444u: goto label_3cb444;
        case 0x3cb448u: goto label_3cb448;
        case 0x3cb44cu: goto label_3cb44c;
        case 0x3cb450u: goto label_3cb450;
        case 0x3cb454u: goto label_3cb454;
        case 0x3cb458u: goto label_3cb458;
        case 0x3cb45cu: goto label_3cb45c;
        case 0x3cb460u: goto label_3cb460;
        case 0x3cb464u: goto label_3cb464;
        case 0x3cb468u: goto label_3cb468;
        case 0x3cb46cu: goto label_3cb46c;
        case 0x3cb470u: goto label_3cb470;
        case 0x3cb474u: goto label_3cb474;
        case 0x3cb478u: goto label_3cb478;
        case 0x3cb47cu: goto label_3cb47c;
        case 0x3cb480u: goto label_3cb480;
        case 0x3cb484u: goto label_3cb484;
        case 0x3cb488u: goto label_3cb488;
        case 0x3cb48cu: goto label_3cb48c;
        case 0x3cb490u: goto label_3cb490;
        case 0x3cb494u: goto label_3cb494;
        case 0x3cb498u: goto label_3cb498;
        case 0x3cb49cu: goto label_3cb49c;
        case 0x3cb4a0u: goto label_3cb4a0;
        case 0x3cb4a4u: goto label_3cb4a4;
        case 0x3cb4a8u: goto label_3cb4a8;
        case 0x3cb4acu: goto label_3cb4ac;
        case 0x3cb4b0u: goto label_3cb4b0;
        case 0x3cb4b4u: goto label_3cb4b4;
        case 0x3cb4b8u: goto label_3cb4b8;
        case 0x3cb4bcu: goto label_3cb4bc;
        case 0x3cb4c0u: goto label_3cb4c0;
        case 0x3cb4c4u: goto label_3cb4c4;
        case 0x3cb4c8u: goto label_3cb4c8;
        case 0x3cb4ccu: goto label_3cb4cc;
        case 0x3cb4d0u: goto label_3cb4d0;
        case 0x3cb4d4u: goto label_3cb4d4;
        case 0x3cb4d8u: goto label_3cb4d8;
        case 0x3cb4dcu: goto label_3cb4dc;
        case 0x3cb4e0u: goto label_3cb4e0;
        case 0x3cb4e4u: goto label_3cb4e4;
        case 0x3cb4e8u: goto label_3cb4e8;
        case 0x3cb4ecu: goto label_3cb4ec;
        case 0x3cb4f0u: goto label_3cb4f0;
        case 0x3cb4f4u: goto label_3cb4f4;
        case 0x3cb4f8u: goto label_3cb4f8;
        case 0x3cb4fcu: goto label_3cb4fc;
        case 0x3cb500u: goto label_3cb500;
        case 0x3cb504u: goto label_3cb504;
        case 0x3cb508u: goto label_3cb508;
        case 0x3cb50cu: goto label_3cb50c;
        case 0x3cb510u: goto label_3cb510;
        case 0x3cb514u: goto label_3cb514;
        case 0x3cb518u: goto label_3cb518;
        case 0x3cb51cu: goto label_3cb51c;
        case 0x3cb520u: goto label_3cb520;
        case 0x3cb524u: goto label_3cb524;
        case 0x3cb528u: goto label_3cb528;
        case 0x3cb52cu: goto label_3cb52c;
        case 0x3cb530u: goto label_3cb530;
        case 0x3cb534u: goto label_3cb534;
        case 0x3cb538u: goto label_3cb538;
        case 0x3cb53cu: goto label_3cb53c;
        case 0x3cb540u: goto label_3cb540;
        case 0x3cb544u: goto label_3cb544;
        case 0x3cb548u: goto label_3cb548;
        case 0x3cb54cu: goto label_3cb54c;
        case 0x3cb550u: goto label_3cb550;
        case 0x3cb554u: goto label_3cb554;
        case 0x3cb558u: goto label_3cb558;
        case 0x3cb55cu: goto label_3cb55c;
        case 0x3cb560u: goto label_3cb560;
        case 0x3cb564u: goto label_3cb564;
        case 0x3cb568u: goto label_3cb568;
        case 0x3cb56cu: goto label_3cb56c;
        case 0x3cb570u: goto label_3cb570;
        case 0x3cb574u: goto label_3cb574;
        case 0x3cb578u: goto label_3cb578;
        case 0x3cb57cu: goto label_3cb57c;
        case 0x3cb580u: goto label_3cb580;
        case 0x3cb584u: goto label_3cb584;
        case 0x3cb588u: goto label_3cb588;
        case 0x3cb58cu: goto label_3cb58c;
        case 0x3cb590u: goto label_3cb590;
        case 0x3cb594u: goto label_3cb594;
        case 0x3cb598u: goto label_3cb598;
        case 0x3cb59cu: goto label_3cb59c;
        case 0x3cb5a0u: goto label_3cb5a0;
        case 0x3cb5a4u: goto label_3cb5a4;
        case 0x3cb5a8u: goto label_3cb5a8;
        case 0x3cb5acu: goto label_3cb5ac;
        case 0x3cb5b0u: goto label_3cb5b0;
        case 0x3cb5b4u: goto label_3cb5b4;
        case 0x3cb5b8u: goto label_3cb5b8;
        case 0x3cb5bcu: goto label_3cb5bc;
        case 0x3cb5c0u: goto label_3cb5c0;
        case 0x3cb5c4u: goto label_3cb5c4;
        case 0x3cb5c8u: goto label_3cb5c8;
        case 0x3cb5ccu: goto label_3cb5cc;
        case 0x3cb5d0u: goto label_3cb5d0;
        case 0x3cb5d4u: goto label_3cb5d4;
        case 0x3cb5d8u: goto label_3cb5d8;
        case 0x3cb5dcu: goto label_3cb5dc;
        case 0x3cb5e0u: goto label_3cb5e0;
        case 0x3cb5e4u: goto label_3cb5e4;
        case 0x3cb5e8u: goto label_3cb5e8;
        case 0x3cb5ecu: goto label_3cb5ec;
        case 0x3cb5f0u: goto label_3cb5f0;
        case 0x3cb5f4u: goto label_3cb5f4;
        case 0x3cb5f8u: goto label_3cb5f8;
        case 0x3cb5fcu: goto label_3cb5fc;
        case 0x3cb600u: goto label_3cb600;
        case 0x3cb604u: goto label_3cb604;
        case 0x3cb608u: goto label_3cb608;
        case 0x3cb60cu: goto label_3cb60c;
        case 0x3cb610u: goto label_3cb610;
        case 0x3cb614u: goto label_3cb614;
        case 0x3cb618u: goto label_3cb618;
        case 0x3cb61cu: goto label_3cb61c;
        case 0x3cb620u: goto label_3cb620;
        case 0x3cb624u: goto label_3cb624;
        case 0x3cb628u: goto label_3cb628;
        case 0x3cb62cu: goto label_3cb62c;
        case 0x3cb630u: goto label_3cb630;
        case 0x3cb634u: goto label_3cb634;
        case 0x3cb638u: goto label_3cb638;
        case 0x3cb63cu: goto label_3cb63c;
        case 0x3cb640u: goto label_3cb640;
        case 0x3cb644u: goto label_3cb644;
        case 0x3cb648u: goto label_3cb648;
        case 0x3cb64cu: goto label_3cb64c;
        case 0x3cb650u: goto label_3cb650;
        case 0x3cb654u: goto label_3cb654;
        case 0x3cb658u: goto label_3cb658;
        case 0x3cb65cu: goto label_3cb65c;
        case 0x3cb660u: goto label_3cb660;
        case 0x3cb664u: goto label_3cb664;
        case 0x3cb668u: goto label_3cb668;
        case 0x3cb66cu: goto label_3cb66c;
        case 0x3cb670u: goto label_3cb670;
        case 0x3cb674u: goto label_3cb674;
        case 0x3cb678u: goto label_3cb678;
        case 0x3cb67cu: goto label_3cb67c;
        case 0x3cb680u: goto label_3cb680;
        case 0x3cb684u: goto label_3cb684;
        case 0x3cb688u: goto label_3cb688;
        case 0x3cb68cu: goto label_3cb68c;
        case 0x3cb690u: goto label_3cb690;
        case 0x3cb694u: goto label_3cb694;
        case 0x3cb698u: goto label_3cb698;
        case 0x3cb69cu: goto label_3cb69c;
        case 0x3cb6a0u: goto label_3cb6a0;
        case 0x3cb6a4u: goto label_3cb6a4;
        case 0x3cb6a8u: goto label_3cb6a8;
        case 0x3cb6acu: goto label_3cb6ac;
        case 0x3cb6b0u: goto label_3cb6b0;
        case 0x3cb6b4u: goto label_3cb6b4;
        case 0x3cb6b8u: goto label_3cb6b8;
        case 0x3cb6bcu: goto label_3cb6bc;
        case 0x3cb6c0u: goto label_3cb6c0;
        case 0x3cb6c4u: goto label_3cb6c4;
        case 0x3cb6c8u: goto label_3cb6c8;
        case 0x3cb6ccu: goto label_3cb6cc;
        case 0x3cb6d0u: goto label_3cb6d0;
        case 0x3cb6d4u: goto label_3cb6d4;
        case 0x3cb6d8u: goto label_3cb6d8;
        case 0x3cb6dcu: goto label_3cb6dc;
        case 0x3cb6e0u: goto label_3cb6e0;
        case 0x3cb6e4u: goto label_3cb6e4;
        case 0x3cb6e8u: goto label_3cb6e8;
        case 0x3cb6ecu: goto label_3cb6ec;
        case 0x3cb6f0u: goto label_3cb6f0;
        case 0x3cb6f4u: goto label_3cb6f4;
        case 0x3cb6f8u: goto label_3cb6f8;
        case 0x3cb6fcu: goto label_3cb6fc;
        case 0x3cb700u: goto label_3cb700;
        case 0x3cb704u: goto label_3cb704;
        case 0x3cb708u: goto label_3cb708;
        case 0x3cb70cu: goto label_3cb70c;
        case 0x3cb710u: goto label_3cb710;
        case 0x3cb714u: goto label_3cb714;
        case 0x3cb718u: goto label_3cb718;
        case 0x3cb71cu: goto label_3cb71c;
        case 0x3cb720u: goto label_3cb720;
        case 0x3cb724u: goto label_3cb724;
        case 0x3cb728u: goto label_3cb728;
        case 0x3cb72cu: goto label_3cb72c;
        case 0x3cb730u: goto label_3cb730;
        case 0x3cb734u: goto label_3cb734;
        case 0x3cb738u: goto label_3cb738;
        case 0x3cb73cu: goto label_3cb73c;
        case 0x3cb740u: goto label_3cb740;
        case 0x3cb744u: goto label_3cb744;
        case 0x3cb748u: goto label_3cb748;
        case 0x3cb74cu: goto label_3cb74c;
        case 0x3cb750u: goto label_3cb750;
        case 0x3cb754u: goto label_3cb754;
        case 0x3cb758u: goto label_3cb758;
        case 0x3cb75cu: goto label_3cb75c;
        case 0x3cb760u: goto label_3cb760;
        case 0x3cb764u: goto label_3cb764;
        case 0x3cb768u: goto label_3cb768;
        case 0x3cb76cu: goto label_3cb76c;
        case 0x3cb770u: goto label_3cb770;
        case 0x3cb774u: goto label_3cb774;
        case 0x3cb778u: goto label_3cb778;
        case 0x3cb77cu: goto label_3cb77c;
        case 0x3cb780u: goto label_3cb780;
        case 0x3cb784u: goto label_3cb784;
        case 0x3cb788u: goto label_3cb788;
        case 0x3cb78cu: goto label_3cb78c;
        case 0x3cb790u: goto label_3cb790;
        case 0x3cb794u: goto label_3cb794;
        case 0x3cb798u: goto label_3cb798;
        case 0x3cb79cu: goto label_3cb79c;
        case 0x3cb7a0u: goto label_3cb7a0;
        case 0x3cb7a4u: goto label_3cb7a4;
        case 0x3cb7a8u: goto label_3cb7a8;
        case 0x3cb7acu: goto label_3cb7ac;
        case 0x3cb7b0u: goto label_3cb7b0;
        case 0x3cb7b4u: goto label_3cb7b4;
        case 0x3cb7b8u: goto label_3cb7b8;
        case 0x3cb7bcu: goto label_3cb7bc;
        case 0x3cb7c0u: goto label_3cb7c0;
        case 0x3cb7c4u: goto label_3cb7c4;
        case 0x3cb7c8u: goto label_3cb7c8;
        case 0x3cb7ccu: goto label_3cb7cc;
        case 0x3cb7d0u: goto label_3cb7d0;
        case 0x3cb7d4u: goto label_3cb7d4;
        case 0x3cb7d8u: goto label_3cb7d8;
        case 0x3cb7dcu: goto label_3cb7dc;
        case 0x3cb7e0u: goto label_3cb7e0;
        case 0x3cb7e4u: goto label_3cb7e4;
        case 0x3cb7e8u: goto label_3cb7e8;
        case 0x3cb7ecu: goto label_3cb7ec;
        case 0x3cb7f0u: goto label_3cb7f0;
        case 0x3cb7f4u: goto label_3cb7f4;
        case 0x3cb7f8u: goto label_3cb7f8;
        case 0x3cb7fcu: goto label_3cb7fc;
        case 0x3cb800u: goto label_3cb800;
        case 0x3cb804u: goto label_3cb804;
        case 0x3cb808u: goto label_3cb808;
        case 0x3cb80cu: goto label_3cb80c;
        case 0x3cb810u: goto label_3cb810;
        case 0x3cb814u: goto label_3cb814;
        case 0x3cb818u: goto label_3cb818;
        case 0x3cb81cu: goto label_3cb81c;
        case 0x3cb820u: goto label_3cb820;
        case 0x3cb824u: goto label_3cb824;
        case 0x3cb828u: goto label_3cb828;
        case 0x3cb82cu: goto label_3cb82c;
        case 0x3cb830u: goto label_3cb830;
        case 0x3cb834u: goto label_3cb834;
        case 0x3cb838u: goto label_3cb838;
        case 0x3cb83cu: goto label_3cb83c;
        case 0x3cb840u: goto label_3cb840;
        case 0x3cb844u: goto label_3cb844;
        case 0x3cb848u: goto label_3cb848;
        case 0x3cb84cu: goto label_3cb84c;
        case 0x3cb850u: goto label_3cb850;
        case 0x3cb854u: goto label_3cb854;
        case 0x3cb858u: goto label_3cb858;
        case 0x3cb85cu: goto label_3cb85c;
        case 0x3cb860u: goto label_3cb860;
        case 0x3cb864u: goto label_3cb864;
        case 0x3cb868u: goto label_3cb868;
        case 0x3cb86cu: goto label_3cb86c;
        case 0x3cb870u: goto label_3cb870;
        case 0x3cb874u: goto label_3cb874;
        case 0x3cb878u: goto label_3cb878;
        case 0x3cb87cu: goto label_3cb87c;
        case 0x3cb880u: goto label_3cb880;
        case 0x3cb884u: goto label_3cb884;
        case 0x3cb888u: goto label_3cb888;
        case 0x3cb88cu: goto label_3cb88c;
        case 0x3cb890u: goto label_3cb890;
        case 0x3cb894u: goto label_3cb894;
        case 0x3cb898u: goto label_3cb898;
        case 0x3cb89cu: goto label_3cb89c;
        case 0x3cb8a0u: goto label_3cb8a0;
        case 0x3cb8a4u: goto label_3cb8a4;
        case 0x3cb8a8u: goto label_3cb8a8;
        case 0x3cb8acu: goto label_3cb8ac;
        case 0x3cb8b0u: goto label_3cb8b0;
        case 0x3cb8b4u: goto label_3cb8b4;
        case 0x3cb8b8u: goto label_3cb8b8;
        case 0x3cb8bcu: goto label_3cb8bc;
        case 0x3cb8c0u: goto label_3cb8c0;
        case 0x3cb8c4u: goto label_3cb8c4;
        case 0x3cb8c8u: goto label_3cb8c8;
        case 0x3cb8ccu: goto label_3cb8cc;
        case 0x3cb8d0u: goto label_3cb8d0;
        case 0x3cb8d4u: goto label_3cb8d4;
        case 0x3cb8d8u: goto label_3cb8d8;
        case 0x3cb8dcu: goto label_3cb8dc;
        case 0x3cb8e0u: goto label_3cb8e0;
        case 0x3cb8e4u: goto label_3cb8e4;
        case 0x3cb8e8u: goto label_3cb8e8;
        case 0x3cb8ecu: goto label_3cb8ec;
        case 0x3cb8f0u: goto label_3cb8f0;
        case 0x3cb8f4u: goto label_3cb8f4;
        case 0x3cb8f8u: goto label_3cb8f8;
        case 0x3cb8fcu: goto label_3cb8fc;
        case 0x3cb900u: goto label_3cb900;
        case 0x3cb904u: goto label_3cb904;
        case 0x3cb908u: goto label_3cb908;
        case 0x3cb90cu: goto label_3cb90c;
        case 0x3cb910u: goto label_3cb910;
        case 0x3cb914u: goto label_3cb914;
        case 0x3cb918u: goto label_3cb918;
        case 0x3cb91cu: goto label_3cb91c;
        case 0x3cb920u: goto label_3cb920;
        case 0x3cb924u: goto label_3cb924;
        case 0x3cb928u: goto label_3cb928;
        case 0x3cb92cu: goto label_3cb92c;
        case 0x3cb930u: goto label_3cb930;
        case 0x3cb934u: goto label_3cb934;
        case 0x3cb938u: goto label_3cb938;
        case 0x3cb93cu: goto label_3cb93c;
        case 0x3cb940u: goto label_3cb940;
        case 0x3cb944u: goto label_3cb944;
        case 0x3cb948u: goto label_3cb948;
        case 0x3cb94cu: goto label_3cb94c;
        case 0x3cb950u: goto label_3cb950;
        case 0x3cb954u: goto label_3cb954;
        case 0x3cb958u: goto label_3cb958;
        case 0x3cb95cu: goto label_3cb95c;
        case 0x3cb960u: goto label_3cb960;
        case 0x3cb964u: goto label_3cb964;
        case 0x3cb968u: goto label_3cb968;
        case 0x3cb96cu: goto label_3cb96c;
        case 0x3cb970u: goto label_3cb970;
        case 0x3cb974u: goto label_3cb974;
        case 0x3cb978u: goto label_3cb978;
        case 0x3cb97cu: goto label_3cb97c;
        case 0x3cb980u: goto label_3cb980;
        case 0x3cb984u: goto label_3cb984;
        case 0x3cb988u: goto label_3cb988;
        case 0x3cb98cu: goto label_3cb98c;
        case 0x3cb990u: goto label_3cb990;
        case 0x3cb994u: goto label_3cb994;
        case 0x3cb998u: goto label_3cb998;
        case 0x3cb99cu: goto label_3cb99c;
        case 0x3cb9a0u: goto label_3cb9a0;
        case 0x3cb9a4u: goto label_3cb9a4;
        case 0x3cb9a8u: goto label_3cb9a8;
        case 0x3cb9acu: goto label_3cb9ac;
        case 0x3cb9b0u: goto label_3cb9b0;
        case 0x3cb9b4u: goto label_3cb9b4;
        case 0x3cb9b8u: goto label_3cb9b8;
        case 0x3cb9bcu: goto label_3cb9bc;
        case 0x3cb9c0u: goto label_3cb9c0;
        case 0x3cb9c4u: goto label_3cb9c4;
        case 0x3cb9c8u: goto label_3cb9c8;
        case 0x3cb9ccu: goto label_3cb9cc;
        case 0x3cb9d0u: goto label_3cb9d0;
        case 0x3cb9d4u: goto label_3cb9d4;
        case 0x3cb9d8u: goto label_3cb9d8;
        case 0x3cb9dcu: goto label_3cb9dc;
        case 0x3cb9e0u: goto label_3cb9e0;
        case 0x3cb9e4u: goto label_3cb9e4;
        case 0x3cb9e8u: goto label_3cb9e8;
        case 0x3cb9ecu: goto label_3cb9ec;
        case 0x3cb9f0u: goto label_3cb9f0;
        case 0x3cb9f4u: goto label_3cb9f4;
        case 0x3cb9f8u: goto label_3cb9f8;
        case 0x3cb9fcu: goto label_3cb9fc;
        case 0x3cba00u: goto label_3cba00;
        case 0x3cba04u: goto label_3cba04;
        case 0x3cba08u: goto label_3cba08;
        case 0x3cba0cu: goto label_3cba0c;
        case 0x3cba10u: goto label_3cba10;
        case 0x3cba14u: goto label_3cba14;
        case 0x3cba18u: goto label_3cba18;
        case 0x3cba1cu: goto label_3cba1c;
        case 0x3cba20u: goto label_3cba20;
        case 0x3cba24u: goto label_3cba24;
        case 0x3cba28u: goto label_3cba28;
        case 0x3cba2cu: goto label_3cba2c;
        case 0x3cba30u: goto label_3cba30;
        case 0x3cba34u: goto label_3cba34;
        case 0x3cba38u: goto label_3cba38;
        case 0x3cba3cu: goto label_3cba3c;
        case 0x3cba40u: goto label_3cba40;
        case 0x3cba44u: goto label_3cba44;
        case 0x3cba48u: goto label_3cba48;
        case 0x3cba4cu: goto label_3cba4c;
        case 0x3cba50u: goto label_3cba50;
        case 0x3cba54u: goto label_3cba54;
        case 0x3cba58u: goto label_3cba58;
        case 0x3cba5cu: goto label_3cba5c;
        case 0x3cba60u: goto label_3cba60;
        case 0x3cba64u: goto label_3cba64;
        case 0x3cba68u: goto label_3cba68;
        case 0x3cba6cu: goto label_3cba6c;
        case 0x3cba70u: goto label_3cba70;
        case 0x3cba74u: goto label_3cba74;
        case 0x3cba78u: goto label_3cba78;
        case 0x3cba7cu: goto label_3cba7c;
        case 0x3cba80u: goto label_3cba80;
        case 0x3cba84u: goto label_3cba84;
        case 0x3cba88u: goto label_3cba88;
        case 0x3cba8cu: goto label_3cba8c;
        case 0x3cba90u: goto label_3cba90;
        case 0x3cba94u: goto label_3cba94;
        case 0x3cba98u: goto label_3cba98;
        case 0x3cba9cu: goto label_3cba9c;
        case 0x3cbaa0u: goto label_3cbaa0;
        case 0x3cbaa4u: goto label_3cbaa4;
        case 0x3cbaa8u: goto label_3cbaa8;
        case 0x3cbaacu: goto label_3cbaac;
        case 0x3cbab0u: goto label_3cbab0;
        case 0x3cbab4u: goto label_3cbab4;
        case 0x3cbab8u: goto label_3cbab8;
        case 0x3cbabcu: goto label_3cbabc;
        case 0x3cbac0u: goto label_3cbac0;
        case 0x3cbac4u: goto label_3cbac4;
        case 0x3cbac8u: goto label_3cbac8;
        case 0x3cbaccu: goto label_3cbacc;
        case 0x3cbad0u: goto label_3cbad0;
        case 0x3cbad4u: goto label_3cbad4;
        case 0x3cbad8u: goto label_3cbad8;
        case 0x3cbadcu: goto label_3cbadc;
        case 0x3cbae0u: goto label_3cbae0;
        case 0x3cbae4u: goto label_3cbae4;
        case 0x3cbae8u: goto label_3cbae8;
        case 0x3cbaecu: goto label_3cbaec;
        case 0x3cbaf0u: goto label_3cbaf0;
        case 0x3cbaf4u: goto label_3cbaf4;
        case 0x3cbaf8u: goto label_3cbaf8;
        case 0x3cbafcu: goto label_3cbafc;
        case 0x3cbb00u: goto label_3cbb00;
        case 0x3cbb04u: goto label_3cbb04;
        case 0x3cbb08u: goto label_3cbb08;
        case 0x3cbb0cu: goto label_3cbb0c;
        case 0x3cbb10u: goto label_3cbb10;
        case 0x3cbb14u: goto label_3cbb14;
        case 0x3cbb18u: goto label_3cbb18;
        case 0x3cbb1cu: goto label_3cbb1c;
        case 0x3cbb20u: goto label_3cbb20;
        case 0x3cbb24u: goto label_3cbb24;
        case 0x3cbb28u: goto label_3cbb28;
        case 0x3cbb2cu: goto label_3cbb2c;
        case 0x3cbb30u: goto label_3cbb30;
        case 0x3cbb34u: goto label_3cbb34;
        case 0x3cbb38u: goto label_3cbb38;
        case 0x3cbb3cu: goto label_3cbb3c;
        case 0x3cbb40u: goto label_3cbb40;
        case 0x3cbb44u: goto label_3cbb44;
        case 0x3cbb48u: goto label_3cbb48;
        case 0x3cbb4cu: goto label_3cbb4c;
        case 0x3cbb50u: goto label_3cbb50;
        case 0x3cbb54u: goto label_3cbb54;
        case 0x3cbb58u: goto label_3cbb58;
        case 0x3cbb5cu: goto label_3cbb5c;
        case 0x3cbb60u: goto label_3cbb60;
        case 0x3cbb64u: goto label_3cbb64;
        case 0x3cbb68u: goto label_3cbb68;
        case 0x3cbb6cu: goto label_3cbb6c;
        case 0x3cbb70u: goto label_3cbb70;
        case 0x3cbb74u: goto label_3cbb74;
        case 0x3cbb78u: goto label_3cbb78;
        case 0x3cbb7cu: goto label_3cbb7c;
        case 0x3cbb80u: goto label_3cbb80;
        case 0x3cbb84u: goto label_3cbb84;
        case 0x3cbb88u: goto label_3cbb88;
        case 0x3cbb8cu: goto label_3cbb8c;
        case 0x3cbb90u: goto label_3cbb90;
        case 0x3cbb94u: goto label_3cbb94;
        case 0x3cbb98u: goto label_3cbb98;
        case 0x3cbb9cu: goto label_3cbb9c;
        case 0x3cbba0u: goto label_3cbba0;
        case 0x3cbba4u: goto label_3cbba4;
        case 0x3cbba8u: goto label_3cbba8;
        case 0x3cbbacu: goto label_3cbbac;
        case 0x3cbbb0u: goto label_3cbbb0;
        case 0x3cbbb4u: goto label_3cbbb4;
        case 0x3cbbb8u: goto label_3cbbb8;
        case 0x3cbbbcu: goto label_3cbbbc;
        case 0x3cbbc0u: goto label_3cbbc0;
        case 0x3cbbc4u: goto label_3cbbc4;
        case 0x3cbbc8u: goto label_3cbbc8;
        case 0x3cbbccu: goto label_3cbbcc;
        case 0x3cbbd0u: goto label_3cbbd0;
        case 0x3cbbd4u: goto label_3cbbd4;
        case 0x3cbbd8u: goto label_3cbbd8;
        case 0x3cbbdcu: goto label_3cbbdc;
        case 0x3cbbe0u: goto label_3cbbe0;
        case 0x3cbbe4u: goto label_3cbbe4;
        case 0x3cbbe8u: goto label_3cbbe8;
        case 0x3cbbecu: goto label_3cbbec;
        case 0x3cbbf0u: goto label_3cbbf0;
        case 0x3cbbf4u: goto label_3cbbf4;
        case 0x3cbbf8u: goto label_3cbbf8;
        case 0x3cbbfcu: goto label_3cbbfc;
        case 0x3cbc00u: goto label_3cbc00;
        case 0x3cbc04u: goto label_3cbc04;
        case 0x3cbc08u: goto label_3cbc08;
        case 0x3cbc0cu: goto label_3cbc0c;
        case 0x3cbc10u: goto label_3cbc10;
        case 0x3cbc14u: goto label_3cbc14;
        case 0x3cbc18u: goto label_3cbc18;
        case 0x3cbc1cu: goto label_3cbc1c;
        case 0x3cbc20u: goto label_3cbc20;
        case 0x3cbc24u: goto label_3cbc24;
        case 0x3cbc28u: goto label_3cbc28;
        case 0x3cbc2cu: goto label_3cbc2c;
        case 0x3cbc30u: goto label_3cbc30;
        case 0x3cbc34u: goto label_3cbc34;
        case 0x3cbc38u: goto label_3cbc38;
        case 0x3cbc3cu: goto label_3cbc3c;
        case 0x3cbc40u: goto label_3cbc40;
        case 0x3cbc44u: goto label_3cbc44;
        case 0x3cbc48u: goto label_3cbc48;
        case 0x3cbc4cu: goto label_3cbc4c;
        case 0x3cbc50u: goto label_3cbc50;
        case 0x3cbc54u: goto label_3cbc54;
        case 0x3cbc58u: goto label_3cbc58;
        case 0x3cbc5cu: goto label_3cbc5c;
        case 0x3cbc60u: goto label_3cbc60;
        case 0x3cbc64u: goto label_3cbc64;
        case 0x3cbc68u: goto label_3cbc68;
        case 0x3cbc6cu: goto label_3cbc6c;
        case 0x3cbc70u: goto label_3cbc70;
        case 0x3cbc74u: goto label_3cbc74;
        case 0x3cbc78u: goto label_3cbc78;
        case 0x3cbc7cu: goto label_3cbc7c;
        case 0x3cbc80u: goto label_3cbc80;
        case 0x3cbc84u: goto label_3cbc84;
        case 0x3cbc88u: goto label_3cbc88;
        case 0x3cbc8cu: goto label_3cbc8c;
        case 0x3cbc90u: goto label_3cbc90;
        case 0x3cbc94u: goto label_3cbc94;
        case 0x3cbc98u: goto label_3cbc98;
        case 0x3cbc9cu: goto label_3cbc9c;
        case 0x3cbca0u: goto label_3cbca0;
        case 0x3cbca4u: goto label_3cbca4;
        case 0x3cbca8u: goto label_3cbca8;
        case 0x3cbcacu: goto label_3cbcac;
        case 0x3cbcb0u: goto label_3cbcb0;
        case 0x3cbcb4u: goto label_3cbcb4;
        case 0x3cbcb8u: goto label_3cbcb8;
        case 0x3cbcbcu: goto label_3cbcbc;
        case 0x3cbcc0u: goto label_3cbcc0;
        case 0x3cbcc4u: goto label_3cbcc4;
        case 0x3cbcc8u: goto label_3cbcc8;
        case 0x3cbcccu: goto label_3cbccc;
        case 0x3cbcd0u: goto label_3cbcd0;
        case 0x3cbcd4u: goto label_3cbcd4;
        case 0x3cbcd8u: goto label_3cbcd8;
        case 0x3cbcdcu: goto label_3cbcdc;
        case 0x3cbce0u: goto label_3cbce0;
        case 0x3cbce4u: goto label_3cbce4;
        case 0x3cbce8u: goto label_3cbce8;
        case 0x3cbcecu: goto label_3cbcec;
        case 0x3cbcf0u: goto label_3cbcf0;
        case 0x3cbcf4u: goto label_3cbcf4;
        case 0x3cbcf8u: goto label_3cbcf8;
        case 0x3cbcfcu: goto label_3cbcfc;
        case 0x3cbd00u: goto label_3cbd00;
        case 0x3cbd04u: goto label_3cbd04;
        case 0x3cbd08u: goto label_3cbd08;
        case 0x3cbd0cu: goto label_3cbd0c;
        case 0x3cbd10u: goto label_3cbd10;
        case 0x3cbd14u: goto label_3cbd14;
        case 0x3cbd18u: goto label_3cbd18;
        case 0x3cbd1cu: goto label_3cbd1c;
        case 0x3cbd20u: goto label_3cbd20;
        case 0x3cbd24u: goto label_3cbd24;
        case 0x3cbd28u: goto label_3cbd28;
        case 0x3cbd2cu: goto label_3cbd2c;
        case 0x3cbd30u: goto label_3cbd30;
        case 0x3cbd34u: goto label_3cbd34;
        case 0x3cbd38u: goto label_3cbd38;
        case 0x3cbd3cu: goto label_3cbd3c;
        case 0x3cbd40u: goto label_3cbd40;
        case 0x3cbd44u: goto label_3cbd44;
        case 0x3cbd48u: goto label_3cbd48;
        case 0x3cbd4cu: goto label_3cbd4c;
        case 0x3cbd50u: goto label_3cbd50;
        case 0x3cbd54u: goto label_3cbd54;
        case 0x3cbd58u: goto label_3cbd58;
        case 0x3cbd5cu: goto label_3cbd5c;
        case 0x3cbd60u: goto label_3cbd60;
        case 0x3cbd64u: goto label_3cbd64;
        case 0x3cbd68u: goto label_3cbd68;
        case 0x3cbd6cu: goto label_3cbd6c;
        case 0x3cbd70u: goto label_3cbd70;
        case 0x3cbd74u: goto label_3cbd74;
        case 0x3cbd78u: goto label_3cbd78;
        case 0x3cbd7cu: goto label_3cbd7c;
        case 0x3cbd80u: goto label_3cbd80;
        case 0x3cbd84u: goto label_3cbd84;
        case 0x3cbd88u: goto label_3cbd88;
        case 0x3cbd8cu: goto label_3cbd8c;
        case 0x3cbd90u: goto label_3cbd90;
        case 0x3cbd94u: goto label_3cbd94;
        case 0x3cbd98u: goto label_3cbd98;
        case 0x3cbd9cu: goto label_3cbd9c;
        case 0x3cbda0u: goto label_3cbda0;
        case 0x3cbda4u: goto label_3cbda4;
        case 0x3cbda8u: goto label_3cbda8;
        case 0x3cbdacu: goto label_3cbdac;
        case 0x3cbdb0u: goto label_3cbdb0;
        case 0x3cbdb4u: goto label_3cbdb4;
        case 0x3cbdb8u: goto label_3cbdb8;
        case 0x3cbdbcu: goto label_3cbdbc;
        case 0x3cbdc0u: goto label_3cbdc0;
        case 0x3cbdc4u: goto label_3cbdc4;
        case 0x3cbdc8u: goto label_3cbdc8;
        case 0x3cbdccu: goto label_3cbdcc;
        case 0x3cbdd0u: goto label_3cbdd0;
        case 0x3cbdd4u: goto label_3cbdd4;
        case 0x3cbdd8u: goto label_3cbdd8;
        case 0x3cbddcu: goto label_3cbddc;
        case 0x3cbde0u: goto label_3cbde0;
        case 0x3cbde4u: goto label_3cbde4;
        case 0x3cbde8u: goto label_3cbde8;
        case 0x3cbdecu: goto label_3cbdec;
        case 0x3cbdf0u: goto label_3cbdf0;
        case 0x3cbdf4u: goto label_3cbdf4;
        case 0x3cbdf8u: goto label_3cbdf8;
        case 0x3cbdfcu: goto label_3cbdfc;
        case 0x3cbe00u: goto label_3cbe00;
        case 0x3cbe04u: goto label_3cbe04;
        case 0x3cbe08u: goto label_3cbe08;
        case 0x3cbe0cu: goto label_3cbe0c;
        case 0x3cbe10u: goto label_3cbe10;
        case 0x3cbe14u: goto label_3cbe14;
        case 0x3cbe18u: goto label_3cbe18;
        case 0x3cbe1cu: goto label_3cbe1c;
        case 0x3cbe20u: goto label_3cbe20;
        case 0x3cbe24u: goto label_3cbe24;
        case 0x3cbe28u: goto label_3cbe28;
        case 0x3cbe2cu: goto label_3cbe2c;
        case 0x3cbe30u: goto label_3cbe30;
        case 0x3cbe34u: goto label_3cbe34;
        case 0x3cbe38u: goto label_3cbe38;
        case 0x3cbe3cu: goto label_3cbe3c;
        case 0x3cbe40u: goto label_3cbe40;
        case 0x3cbe44u: goto label_3cbe44;
        case 0x3cbe48u: goto label_3cbe48;
        case 0x3cbe4cu: goto label_3cbe4c;
        case 0x3cbe50u: goto label_3cbe50;
        case 0x3cbe54u: goto label_3cbe54;
        case 0x3cbe58u: goto label_3cbe58;
        case 0x3cbe5cu: goto label_3cbe5c;
        case 0x3cbe60u: goto label_3cbe60;
        case 0x3cbe64u: goto label_3cbe64;
        case 0x3cbe68u: goto label_3cbe68;
        case 0x3cbe6cu: goto label_3cbe6c;
        case 0x3cbe70u: goto label_3cbe70;
        case 0x3cbe74u: goto label_3cbe74;
        case 0x3cbe78u: goto label_3cbe78;
        case 0x3cbe7cu: goto label_3cbe7c;
        case 0x3cbe80u: goto label_3cbe80;
        case 0x3cbe84u: goto label_3cbe84;
        case 0x3cbe88u: goto label_3cbe88;
        case 0x3cbe8cu: goto label_3cbe8c;
        case 0x3cbe90u: goto label_3cbe90;
        case 0x3cbe94u: goto label_3cbe94;
        case 0x3cbe98u: goto label_3cbe98;
        case 0x3cbe9cu: goto label_3cbe9c;
        case 0x3cbea0u: goto label_3cbea0;
        case 0x3cbea4u: goto label_3cbea4;
        case 0x3cbea8u: goto label_3cbea8;
        case 0x3cbeacu: goto label_3cbeac;
        case 0x3cbeb0u: goto label_3cbeb0;
        case 0x3cbeb4u: goto label_3cbeb4;
        case 0x3cbeb8u: goto label_3cbeb8;
        case 0x3cbebcu: goto label_3cbebc;
        case 0x3cbec0u: goto label_3cbec0;
        case 0x3cbec4u: goto label_3cbec4;
        case 0x3cbec8u: goto label_3cbec8;
        case 0x3cbeccu: goto label_3cbecc;
        case 0x3cbed0u: goto label_3cbed0;
        case 0x3cbed4u: goto label_3cbed4;
        case 0x3cbed8u: goto label_3cbed8;
        case 0x3cbedcu: goto label_3cbedc;
        case 0x3cbee0u: goto label_3cbee0;
        case 0x3cbee4u: goto label_3cbee4;
        case 0x3cbee8u: goto label_3cbee8;
        case 0x3cbeecu: goto label_3cbeec;
        case 0x3cbef0u: goto label_3cbef0;
        case 0x3cbef4u: goto label_3cbef4;
        case 0x3cbef8u: goto label_3cbef8;
        case 0x3cbefcu: goto label_3cbefc;
        case 0x3cbf00u: goto label_3cbf00;
        case 0x3cbf04u: goto label_3cbf04;
        case 0x3cbf08u: goto label_3cbf08;
        case 0x3cbf0cu: goto label_3cbf0c;
        case 0x3cbf10u: goto label_3cbf10;
        case 0x3cbf14u: goto label_3cbf14;
        case 0x3cbf18u: goto label_3cbf18;
        case 0x3cbf1cu: goto label_3cbf1c;
        case 0x3cbf20u: goto label_3cbf20;
        case 0x3cbf24u: goto label_3cbf24;
        case 0x3cbf28u: goto label_3cbf28;
        case 0x3cbf2cu: goto label_3cbf2c;
        case 0x3cbf30u: goto label_3cbf30;
        case 0x3cbf34u: goto label_3cbf34;
        case 0x3cbf38u: goto label_3cbf38;
        case 0x3cbf3cu: goto label_3cbf3c;
        case 0x3cbf40u: goto label_3cbf40;
        case 0x3cbf44u: goto label_3cbf44;
        case 0x3cbf48u: goto label_3cbf48;
        case 0x3cbf4cu: goto label_3cbf4c;
        case 0x3cbf50u: goto label_3cbf50;
        case 0x3cbf54u: goto label_3cbf54;
        case 0x3cbf58u: goto label_3cbf58;
        case 0x3cbf5cu: goto label_3cbf5c;
        case 0x3cbf60u: goto label_3cbf60;
        case 0x3cbf64u: goto label_3cbf64;
        case 0x3cbf68u: goto label_3cbf68;
        case 0x3cbf6cu: goto label_3cbf6c;
        case 0x3cbf70u: goto label_3cbf70;
        case 0x3cbf74u: goto label_3cbf74;
        case 0x3cbf78u: goto label_3cbf78;
        case 0x3cbf7cu: goto label_3cbf7c;
        case 0x3cbf80u: goto label_3cbf80;
        case 0x3cbf84u: goto label_3cbf84;
        case 0x3cbf88u: goto label_3cbf88;
        case 0x3cbf8cu: goto label_3cbf8c;
        case 0x3cbf90u: goto label_3cbf90;
        case 0x3cbf94u: goto label_3cbf94;
        case 0x3cbf98u: goto label_3cbf98;
        case 0x3cbf9cu: goto label_3cbf9c;
        case 0x3cbfa0u: goto label_3cbfa0;
        case 0x3cbfa4u: goto label_3cbfa4;
        case 0x3cbfa8u: goto label_3cbfa8;
        case 0x3cbfacu: goto label_3cbfac;
        case 0x3cbfb0u: goto label_3cbfb0;
        case 0x3cbfb4u: goto label_3cbfb4;
        case 0x3cbfb8u: goto label_3cbfb8;
        case 0x3cbfbcu: goto label_3cbfbc;
        case 0x3cbfc0u: goto label_3cbfc0;
        case 0x3cbfc4u: goto label_3cbfc4;
        case 0x3cbfc8u: goto label_3cbfc8;
        case 0x3cbfccu: goto label_3cbfcc;
        case 0x3cbfd0u: goto label_3cbfd0;
        case 0x3cbfd4u: goto label_3cbfd4;
        default: break;
    }

    ctx->pc = 0x3ca5d0u;

label_3ca5d0:
    // 0x3ca5d0: 0x27bdfc90  addiu       $sp, $sp, -0x370
    ctx->pc = 0x3ca5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966416));
label_3ca5d4:
    // 0x3ca5d4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3ca5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3ca5d8:
    // 0x3ca5d8: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x3ca5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
label_3ca5dc:
    // 0x3ca5dc: 0xafa50208  sw          $a1, 0x208($sp)
    ctx->pc = 0x3ca5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 5));
label_3ca5e0:
    // 0x3ca5e0: 0x2454b1e0  addiu       $s4, $v0, -0x4E20
    ctx->pc = 0x3ca5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3ca5e4:
    // 0x3ca5e4: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x3ca5e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
label_3ca5e8:
    // 0x3ca5e8: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x3ca5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
label_3ca5ec:
    // 0x3ca5ec: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x3ca5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
label_3ca5f0:
    // 0x3ca5f0: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x3ca5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
label_3ca5f4:
    // 0x3ca5f4: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x3ca5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
label_3ca5f8:
    // 0x3ca5f8: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x3ca5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
label_3ca5fc:
    // 0x3ca5fc: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x3ca5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
label_3ca600:
    // 0x3ca600: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x3ca600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
label_3ca604:
    // 0x3ca604: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x3ca604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
label_3ca608:
    // 0x3ca608: 0xe7ba0360  swc1        $f26, 0x360($sp)
    ctx->pc = 0x3ca608u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_3ca60c:
    // 0x3ca60c: 0xe7b90358  swc1        $f25, 0x358($sp)
    ctx->pc = 0x3ca60cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 856), bits); }
label_3ca610:
    // 0x3ca610: 0xe7b80350  swc1        $f24, 0x350($sp)
    ctx->pc = 0x3ca610u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 848), bits); }
label_3ca614:
    // 0x3ca614: 0xe7b70348  swc1        $f23, 0x348($sp)
    ctx->pc = 0x3ca614u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
label_3ca618:
    // 0x3ca618: 0xe7b60340  swc1        $f22, 0x340($sp)
    ctx->pc = 0x3ca618u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
label_3ca61c:
    // 0x3ca61c: 0xe7b50338  swc1        $f21, 0x338($sp)
    ctx->pc = 0x3ca61cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 824), bits); }
label_3ca620:
    // 0x3ca620: 0xe7b40330  swc1        $f20, 0x330($sp)
    ctx->pc = 0x3ca620u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
label_3ca624:
    // 0x3ca624: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3ca624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3ca628:
    // 0x3ca628: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x3ca628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_3ca62c:
    // 0x3ca62c: 0xafa40204  sw          $a0, 0x204($sp)
    ctx->pc = 0x3ca62cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 4));
label_3ca630:
    // 0x3ca630: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3ca630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ca634:
    // 0x3ca634: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3ca634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ca638:
    // 0x3ca638: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3ca638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3ca63c:
    // 0x3ca63c: 0xafa2023c  sw          $v0, 0x23C($sp)
    ctx->pc = 0x3ca63cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 2));
label_3ca640:
    // 0x3ca640: 0xafa6020c  sw          $a2, 0x20C($sp)
    ctx->pc = 0x3ca640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 6));
label_3ca644:
    // 0x3ca644: 0xafa70210  sw          $a3, 0x210($sp)
    ctx->pc = 0x3ca644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 7));
label_3ca648:
    // 0x3ca648: 0xc0f287c  jal         func_3CA1F0
label_3ca64c:
    if (ctx->pc == 0x3CA64Cu) {
        ctx->pc = 0x3CA64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA648u;
        // 0x3ca64c: 0xafa00218  sw          $zero, 0x218($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA650u;
        goto label_3ca650;
    }
    ctx->pc = 0x3CA648u;
    SET_GPR_U32(ctx, 31, 0x3CA650u);
    ctx->pc = 0x3CA64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA648u;
    // 0x3ca64c: 0xafa00218  sw          $zero, 0x218($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA1F0u, 0x3CA648u, 0x3CA650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA650u;
label_3ca650:
    // 0x3ca650: 0xafa0022c  sw          $zero, 0x22C($sp)
    ctx->pc = 0x3ca650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 0));
label_3ca654:
    // 0x3ca654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca658:
    // 0x3ca658: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x3ca658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca65c:
    // 0x3ca65c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3ca65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3ca660:
    // 0x3ca660: 0xafa00230  sw          $zero, 0x230($sp)
    ctx->pc = 0x3ca660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 0));
label_3ca664:
    // 0x3ca664: 0xafa30238  sw          $v1, 0x238($sp)
    ctx->pc = 0x3ca664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 3));
label_3ca668:
    // 0x3ca668: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3ca668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3ca66c:
    // 0x3ca66c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3ca670:
    if (ctx->pc == 0x3CA670u) {
        ctx->pc = 0x3CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA66Cu;
        // 0x3ca670: 0x8fa50204  lw          $a1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA674u;
        goto label_3ca674;
    }
    ctx->pc = 0x3CA66Cu;
    {
        const bool branch_taken_0x3ca66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA66Cu;
        // 0x3ca670: 0x8fa50204  lw          $a1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca66c) {
            ctx->pc = 0x3CA68Cu;
            goto label_3ca68c;
        }
    }
    ctx->pc = 0x3CA674u;
label_3ca674:
    // 0x3ca674: 0x8ca50034  lw          $a1, 0x34($a1)
    ctx->pc = 0x3ca674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3ca678:
    // 0x3ca678: 0xafa50218  sw          $a1, 0x218($sp)
    ctx->pc = 0x3ca678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 5));
label_3ca67c:
    // 0x3ca67c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x3ca67cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_3ca680:
    // 0x3ca680: 0xafa6022c  sw          $a2, 0x22C($sp)
    ctx->pc = 0x3ca680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
label_3ca684:
    // 0x3ca684: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x3ca684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3ca688:
    // 0x3ca688: 0xafa70230  sw          $a3, 0x230($sp)
    ctx->pc = 0x3ca688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 7));
label_3ca68c:
    // 0x3ca68c: 0x8fa8022c  lw          $t0, 0x22C($sp)
    ctx->pc = 0x3ca68cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3ca690:
    // 0x3ca690: 0x8faa0230  lw          $t2, 0x230($sp)
    ctx->pc = 0x3ca690u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3ca694:
    // 0x3ca694: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3ca694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ca698:
    // 0x3ca698: 0x10a1818  mult        $v1, $t0, $t2
    ctx->pc = 0x3ca698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3ca69c:
    // 0x3ca69c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3ca69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3ca6a0:
    // 0x3ca6a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ca6a4:
    if (ctx->pc == 0x3CA6A4u) {
        ctx->pc = 0x3CA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6A0u;
        // 0x3ca6a4: 0x39842  srl         $s3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6A8u;
        goto label_3ca6a8;
    }
    ctx->pc = 0x3CA6A0u;
    {
        const bool branch_taken_0x3ca6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6A0u;
        // 0x3ca6a4: 0x39842  srl         $s3, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca6a0) {
            ctx->pc = 0x3CA6B8u;
            goto label_3ca6b8;
        }
    }
    ctx->pc = 0x3CA6A8u;
label_3ca6a8:
    // 0x3ca6a8: 0x8fb00208  lw          $s0, 0x208($sp)
    ctx->pc = 0x3ca6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca6ac:
    // 0x3ca6ac: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3ca6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3ca6b0:
    // 0x3ca6b0: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x3ca6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3ca6b4:
    // 0x3ca6b4: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x3ca6b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_3ca6b8:
    // 0x3ca6b8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3ca6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ca6bc:
    // 0x3ca6bc: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3ca6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3ca6c0:
    // 0x3ca6c0: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x3ca6c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3ca6c4:
    // 0x3ca6c4: 0x2471e880  addiu       $s1, $v1, -0x1780
    ctx->pc = 0x3ca6c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_3ca6c8:
    // 0x3ca6c8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ca6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ca6cc:
    // 0x3ca6cc: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3ca6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3ca6d0:
    // 0x3ca6d0: 0x34a50114  ori         $a1, $a1, 0x114
    ctx->pc = 0x3ca6d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
label_3ca6d4:
    // 0x3ca6d4: 0x40f809  jalr        $v0
label_3ca6d8:
    if (ctx->pc == 0x3CA6D8u) {
        ctx->pc = 0x3CA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6D4u;
        // 0x3ca6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6DCu;
        goto label_3ca6dc;
    }
    ctx->pc = 0x3CA6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA6DCu);
        ctx->pc = 0x3CA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6D4u;
        // 0x3ca6d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA6D4u, 0x3CA6DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA6DCu;
label_3ca6dc:
    // 0x3ca6dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ca6e0:
    if (ctx->pc == 0x3CA6E0u) {
        ctx->pc = 0x3CA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6DCu;
        // 0x3ca6e0: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6E4u;
        goto label_3ca6e4;
    }
    ctx->pc = 0x3CA6DCu;
    {
        const bool branch_taken_0x3ca6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6DCu;
        // 0x3ca6e0: 0xafa2021c  sw          $v0, 0x21C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca6dc) {
            ctx->pc = 0x3CA6ECu;
            goto label_3ca6ec;
        }
    }
    ctx->pc = 0x3CA6E4u;
label_3ca6e4:
    // 0x3ca6e4: 0x10000628  b           . + 4 + (0x628 << 2)
label_3ca6e8:
    if (ctx->pc == 0x3CA6E8u) {
        ctx->pc = 0x3CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6E4u;
        // 0x3ca6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA6ECu;
        goto label_3ca6ec;
    }
    ctx->pc = 0x3CA6E4u;
    {
        const bool branch_taken_0x3ca6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6E4u;
        // 0x3ca6e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca6e4) {
            ctx->pc = 0x3CBF88u;
            goto label_3cbf88;
        }
    }
    ctx->pc = 0x3CA6ECu;
label_3ca6ec:
    // 0x3ca6ec: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3ca6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3ca6f0:
    // 0x3ca6f0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ca6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ca6f4:
    // 0x3ca6f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca6f8:
    // 0x3ca6f8: 0x40f809  jalr        $v0
label_3ca6fc:
    if (ctx->pc == 0x3CA6FCu) {
        ctx->pc = 0x3CA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6F8u;
        // 0x3ca6fc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA700u;
        goto label_3ca700;
    }
    ctx->pc = 0x3CA6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA700u);
        ctx->pc = 0x3CA6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA6F8u;
        // 0x3ca6fc: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA6F8u, 0x3CA700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA700u;
label_3ca700:
    // 0x3ca700: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ca704:
    if (ctx->pc == 0x3CA704u) {
        ctx->pc = 0x3CA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA700u;
        // 0x3ca704: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA708u;
        goto label_3ca708;
    }
    ctx->pc = 0x3CA700u;
    {
        const bool branch_taken_0x3ca700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA700u;
        // 0x3ca704: 0xafa20220  sw          $v0, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca700) {
            ctx->pc = 0x3CA714u;
            goto label_3ca714;
        }
    }
    ctx->pc = 0x3CA708u;
label_3ca708:
    // 0x3ca708: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3ca708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca70c:
    // 0x3ca70c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3ca710:
    if (ctx->pc == 0x3CA710u) {
        ctx->pc = 0x3CA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA70Cu;
        // 0x3ca710: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA714u;
        goto label_3ca714;
    }
    ctx->pc = 0x3CA70Cu;
    {
        const bool branch_taken_0x3ca70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA70Cu;
        // 0x3ca710: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca70c) {
            ctx->pc = 0x3CA78Cu;
            goto label_3ca78c;
        }
    }
    ctx->pc = 0x3CA714u;
label_3ca714:
    // 0x3ca714: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3ca714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3ca718:
    // 0x3ca718: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ca718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ca71c:
    // 0x3ca71c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ca71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca720:
    // 0x3ca720: 0x40f809  jalr        $v0
label_3ca724:
    if (ctx->pc == 0x3CA724u) {
        ctx->pc = 0x3CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA720u;
        // 0x3ca724: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA728u;
        goto label_3ca728;
    }
    ctx->pc = 0x3CA720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA728u);
        ctx->pc = 0x3CA724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA720u;
        // 0x3ca724: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA720u, 0x3CA728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA728u;
label_3ca728:
    // 0x3ca728: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ca72c:
    if (ctx->pc == 0x3CA72Cu) {
        ctx->pc = 0x3CA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA728u;
        // 0x3ca72c: 0xafa20224  sw          $v0, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA730u;
        goto label_3ca730;
    }
    ctx->pc = 0x3CA728u;
    {
        const bool branch_taken_0x3ca728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA728u;
        // 0x3ca72c: 0xafa20224  sw          $v0, 0x224($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca728) {
            ctx->pc = 0x3CA750u;
            goto label_3ca750;
        }
    }
    ctx->pc = 0x3CA730u;
label_3ca730:
    // 0x3ca730: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3ca730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca734:
    // 0x3ca734: 0x40f809  jalr        $v0
label_3ca738:
    if (ctx->pc == 0x3CA738u) {
        ctx->pc = 0x3CA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA734u;
        // 0x3ca738: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA73Cu;
        goto label_3ca73c;
    }
    ctx->pc = 0x3CA734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA73Cu);
        ctx->pc = 0x3CA738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA734u;
        // 0x3ca738: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA734u, 0x3CA73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA73Cu;
label_3ca73c:
    // 0x3ca73c: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x3ca73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca740:
    // 0x3ca740: 0x60f809  jalr        $v1
label_3ca744:
    if (ctx->pc == 0x3CA744u) {
        ctx->pc = 0x3CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA740u;
        // 0x3ca744: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA748u;
        goto label_3ca748;
    }
    ctx->pc = 0x3CA740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CA748u);
        ctx->pc = 0x3CA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA740u;
        // 0x3ca744: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA740u, 0x3CA748u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA748u;
label_3ca748:
    // 0x3ca748: 0x1000060f  b           . + 4 + (0x60F << 2)
label_3ca74c:
    if (ctx->pc == 0x3CA74Cu) {
        ctx->pc = 0x3CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA748u;
        // 0x3ca74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA750u;
        goto label_3ca750;
    }
    ctx->pc = 0x3CA748u;
    {
        const bool branch_taken_0x3ca748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA748u;
        // 0x3ca74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca748) {
            ctx->pc = 0x3CBF88u;
            goto label_3cbf88;
        }
    }
    ctx->pc = 0x3CA750u;
label_3ca750:
    // 0x3ca750: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x3ca750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_3ca754:
    // 0x3ca754: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3ca754u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3ca758:
    // 0x3ca758: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3ca758u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_3ca75c:
    // 0x3ca75c: 0x40f809  jalr        $v0
label_3ca760:
    if (ctx->pc == 0x3CA760u) {
        ctx->pc = 0x3CA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA75Cu;
        // 0x3ca760: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA764u;
        goto label_3ca764;
    }
    ctx->pc = 0x3CA75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA764u);
        ctx->pc = 0x3CA760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA75Cu;
        // 0x3ca760: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA75Cu, 0x3CA764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA764u;
label_3ca764:
    // 0x3ca764: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3ca768:
    if (ctx->pc == 0x3CA768u) {
        ctx->pc = 0x3CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA764u;
        // 0x3ca768: 0xafa20228  sw          $v0, 0x228($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA76Cu;
        goto label_3ca76c;
    }
    ctx->pc = 0x3CA764u;
    {
        const bool branch_taken_0x3ca764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA764u;
        // 0x3ca768: 0xafa20228  sw          $v0, 0x228($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca764) {
            ctx->pc = 0x3CA7C4u;
            goto label_3ca7c4;
        }
    }
    ctx->pc = 0x3CA76Cu;
label_3ca76c:
    // 0x3ca76c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3ca76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca770:
    // 0x3ca770: 0x40f809  jalr        $v0
label_3ca774:
    if (ctx->pc == 0x3CA774u) {
        ctx->pc = 0x3CA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA770u;
        // 0x3ca774: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA778u;
        goto label_3ca778;
    }
    ctx->pc = 0x3CA770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA778u);
        ctx->pc = 0x3CA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA770u;
        // 0x3ca774: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA770u, 0x3CA778u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA778u;
label_3ca778:
    // 0x3ca778: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x3ca778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca77c:
    // 0x3ca77c: 0x60f809  jalr        $v1
label_3ca780:
    if (ctx->pc == 0x3CA780u) {
        ctx->pc = 0x3CA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA77Cu;
        // 0x3ca780: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA784u;
        goto label_3ca784;
    }
    ctx->pc = 0x3CA77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CA784u);
        ctx->pc = 0x3CA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA77Cu;
        // 0x3ca780: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA77Cu, 0x3CA784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA784u;
label_3ca784:
    // 0x3ca784: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x3ca784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_3ca788:
    // 0x3ca788: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x3ca788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3ca78c:
    // 0x3ca78c: 0x40f809  jalr        $v0
label_3ca790:
    if (ctx->pc == 0x3CA790u) {
        ctx->pc = 0x3CA794u;
        goto label_3ca794;
    }
    ctx->pc = 0x3CA78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CA794u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA78Cu, 0x3CA794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CA794u;
label_3ca794:
    // 0x3ca794: 0x100005fc  b           . + 4 + (0x5FC << 2)
label_3ca798:
    if (ctx->pc == 0x3CA798u) {
        ctx->pc = 0x3CA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA794u;
        // 0x3ca798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA79Cu;
        goto label_3ca79c;
    }
    ctx->pc = 0x3CA794u;
    {
        const bool branch_taken_0x3ca794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA794u;
        // 0x3ca798: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca794) {
            ctx->pc = 0x3CBF88u;
            goto label_3cbf88;
        }
    }
    ctx->pc = 0x3CA79Cu;
label_3ca79c:
    // 0x3ca79c: 0x8fb10208  lw          $s1, 0x208($sp)
    ctx->pc = 0x3ca79cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca7a0:
    // 0x3ca7a0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x3ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_3ca7a4:
    // 0x3ca7a4: 0x100005e2  b           . + 4 + (0x5E2 << 2)
label_3ca7a8:
    if (ctx->pc == 0x3CA7A8u) {
        ctx->pc = 0x3CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7A4u;
        // 0x3ca7a8: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA7ACu;
        goto label_3ca7ac;
    }
    ctx->pc = 0x3CA7A4u;
    {
        const bool branch_taken_0x3ca7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7A4u;
        // 0x3ca7a8: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7a4) {
            ctx->pc = 0x3CBF30u;
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CA7ACu;
label_3ca7ac:
    // 0x3ca7ac: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3ca7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ca7b0:
    // 0x3ca7b0: 0x100005df  b           . + 4 + (0x5DF << 2)
label_3ca7b4:
    if (ctx->pc == 0x3CA7B4u) {
        ctx->pc = 0x3CA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7B0u;
        // 0x3ca7b4: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA7B8u;
        goto label_3ca7b8;
    }
    ctx->pc = 0x3CA7B0u;
    {
        const bool branch_taken_0x3ca7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7B0u;
        // 0x3ca7b4: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7b0) {
            ctx->pc = 0x3CBF30u;
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CA7B8u;
label_3ca7b8:
    // 0x3ca7b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3ca7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3ca7bc:
    // 0x3ca7bc: 0x100005dc  b           . + 4 + (0x5DC << 2)
label_3ca7c0:
    if (ctx->pc == 0x3CA7C0u) {
        ctx->pc = 0x3CA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7BCu;
        // 0x3ca7c0: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA7C4u;
        goto label_3ca7c4;
    }
    ctx->pc = 0x3CA7BCu;
    {
        const bool branch_taken_0x3ca7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7BCu;
        // 0x3ca7c0: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7bc) {
            ctx->pc = 0x3CBF30u;
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CA7C4u;
label_3ca7c4:
    // 0x3ca7c4: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x3ca7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca7c8:
    // 0x3ca7c8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3ca7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3ca7cc:
    // 0x3ca7cc: 0xafa00234  sw          $zero, 0x234($sp)
    ctx->pc = 0x3ca7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 0));
label_3ca7d0:
    // 0x3ca7d0: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3ca7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3ca7d4:
    // 0x3ca7d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3ca7d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ca7d8:
    // 0x3ca7d8: 0x104005d5  beqz        $v0, . + 4 + (0x5D5 << 2)
label_3ca7dc:
    if (ctx->pc == 0x3CA7DCu) {
        ctx->pc = 0x3CA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7D8u;
        // 0x3ca7dc: 0xafa40214  sw          $a0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA7E0u;
        goto label_3ca7e0;
    }
    ctx->pc = 0x3CA7D8u;
    {
        const bool branch_taken_0x3ca7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7D8u;
        // 0x3ca7dc: 0xafa40214  sw          $a0, 0x214($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7d8) {
            ctx->pc = 0x3CBF30u;
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CA7E0u;
label_3ca7e0:
    // 0x3ca7e0: 0x3c05aaaa  lui         $a1, 0xAAAA
    ctx->pc = 0x3ca7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43690 << 16));
label_3ca7e4:
    // 0x3ca7e4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x3ca7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ca7e8:
    // 0x3ca7e8: 0x34a5aaab  ori         $a1, $a1, 0xAAAB
    ctx->pc = 0x3ca7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43691);
label_3ca7ec:
    // 0x3ca7ec: 0xc7978054  lwc1        $f23, -0x7FAC($gp)
    ctx->pc = 0x3ca7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ca7f0:
    // 0x3ca7f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ca7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ca7f4:
    // 0x3ca7f4: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3ca7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_3ca7f8:
    // 0x3ca7f8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3ca7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_3ca7fc:
    // 0x3ca7fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3ca7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_3ca800:
    // 0x3ca800: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3ca800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_3ca804:
    // 0x3ca804: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x3ca804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_3ca808:
    // 0x3ca808: 0xafa60240  sw          $a2, 0x240($sp)
    ctx->pc = 0x3ca808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 6));
label_3ca80c:
    // 0x3ca80c: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x3ca80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_3ca810:
    // 0x3ca810: 0xafa50244  sw          $a1, 0x244($sp)
    ctx->pc = 0x3ca810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 5));
label_3ca814:
    // 0x3ca814: 0xc7988140  lwc1        $f24, -0x7EC0($gp)
    ctx->pc = 0x3ca814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3ca818:
    // 0x3ca818: 0x8fa70210  lw          $a3, 0x210($sp)
    ctx->pc = 0x3ca818u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_3ca81c:
    // 0x3ca81c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ca81cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ca820:
    // 0x3ca820: 0x14e80076  bne         $a3, $t0, . + 4 + (0x76 << 2)
label_3ca824:
    if (ctx->pc == 0x3CA824u) {
        ctx->pc = 0x3CA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA820u;
        // 0x3ca824: 0x8fa80214  lw          $t0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA828u;
        goto label_3ca828;
    }
    ctx->pc = 0x3CA820u;
    {
        const bool branch_taken_0x3ca820 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x3CA824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA820u;
        // 0x3ca824: 0x8fa80214  lw          $t0, 0x214($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca820) {
            ctx->pc = 0x3CA9FCu;
            goto label_3ca9fc;
        }
    }
    ctx->pc = 0x3CA828u;
label_3ca828:
    // 0x3ca828: 0x8faa022c  lw          $t2, 0x22C($sp)
    ctx->pc = 0x3ca828u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3ca82c:
    // 0x3ca82c: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x3ca82cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3ca830:
    // 0x3ca830: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x3ca830u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3ca834:
    // 0x3ca834: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x3ca834u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3ca838:
    // 0x3ca838: 0x8fb10214  lw          $s1, 0x214($sp)
    ctx->pc = 0x3ca838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_3ca83c:
    // 0x3ca83c: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x3ca83cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_3ca840:
    // 0x3ca840: 0x314e0001  andi        $t6, $t2, 0x1
    ctx->pc = 0x3ca840u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_3ca844:
    // 0x3ca844: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x3ca844u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_3ca848:
    // 0x3ca848: 0x320d0001  andi        $t5, $s0, 0x1
    ctx->pc = 0x3ca848u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_3ca84c:
    // 0x3ca84c: 0x26330008  addiu       $s3, $s1, 0x8
    ctx->pc = 0x3ca84cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_3ca850:
    // 0x3ca850: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x3ca850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_3ca854:
    // 0x3ca854: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3ca854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ca858:
    // 0x3ca858: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x3ca858u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
label_3ca85c:
    // 0x3ca85c: 0x8fa90214  lw          $t1, 0x214($sp)
    ctx->pc = 0x3ca85cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_3ca860:
    // 0x3ca860: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3ca860u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
label_3ca864:
    // 0x3ca864: 0x2418000c  addiu       $t8, $zero, 0xC
    ctx->pc = 0x3ca864u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3ca868:
    // 0x3ca868: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x3ca868u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ca86c:
    // 0x3ca86c: 0x27b50034  addiu       $s5, $sp, 0x34
    ctx->pc = 0x3ca86cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_3ca870:
    // 0x3ca870: 0x27b40038  addiu       $s4, $sp, 0x38
    ctx->pc = 0x3ca870u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_3ca874:
    // 0x3ca874: 0x240782d  daddu       $t7, $s2, $zero
    ctx->pc = 0x3ca874u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca878:
    // 0x3ca878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3ca878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca87c:
    // 0x3ca87c: 0x27ac0094  addiu       $t4, $sp, 0x94
    ctx->pc = 0x3ca87cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_3ca880:
    // 0x3ca880: 0x27ab0090  addiu       $t3, $sp, 0x90
    ctx->pc = 0x3ca880u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3ca884:
    // 0x3ca884: 0x27b100bc  addiu       $s1, $sp, 0xBC
    ctx->pc = 0x3ca884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_3ca888:
    // 0x3ca888: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3ca888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ca88c:
    // 0x3ca88c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x3ca88cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ca890:
    // 0x3ca890: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x3ca890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca894:
    // 0x3ca894: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x3ca894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_3ca898:
    // 0x3ca898: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3ca898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3ca89c:
    // 0x3ca89c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_3ca8a0:
    if (ctx->pc == 0x3CA8A0u) {
        ctx->pc = 0x3CA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA89Cu;
        // 0x3ca8a0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA8A4u;
        goto label_3ca8a4;
    }
    ctx->pc = 0x3CA89Cu;
    {
        const bool branch_taken_0x3ca89c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA89Cu;
        // 0x3ca8a0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca89c) {
            ctx->pc = 0x3CA934u;
            goto label_3ca934;
        }
    }
    ctx->pc = 0x3CA8A4u;
label_3ca8a4:
    // 0x3ca8a4: 0x8fa5022c  lw          $a1, 0x22C($sp)
    ctx->pc = 0x3ca8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3ca8a8:
    // 0x3ca8a8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
label_3ca8ac:
    if (ctx->pc == 0x3CA8ACu) {
        ctx->pc = 0x3CA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8A8u;
        // 0x3ca8ac: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA8B0u;
        goto label_3ca8b0;
    }
    ctx->pc = 0x3CA8A8u;
    {
        const bool branch_taken_0x3ca8a8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x3CA8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8A8u;
        // 0x3ca8ac: 0x160202d  daddu       $a0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca8a8) {
            ctx->pc = 0x3CA8C0u;
            goto label_3ca8c0;
        }
    }
    ctx->pc = 0x3CA8B0u;
label_3ca8b0:
    // 0x3ca8b0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3ca8b0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ca8b4:
    // 0x3ca8b4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ca8b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ca8b8:
    // 0x3ca8b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ca8bc:
    if (ctx->pc == 0x3CA8BCu) {
        ctx->pc = 0x3CA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8B8u;
        // 0x3ca8bc: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA8C0u;
        goto label_3ca8c0;
    }
    ctx->pc = 0x3CA8B8u;
    {
        const bool branch_taken_0x3ca8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8B8u;
        // 0x3ca8bc: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca8b8) {
            ctx->pc = 0x3CA8D0u;
            goto label_3ca8d0;
        }
    }
    ctx->pc = 0x3CA8C0u;
label_3ca8c0:
    // 0x3ca8c0: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x3ca8c0u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ca8c4:
    // 0x3ca8c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ca8c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ca8c8:
    // 0x3ca8c8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ca8c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ca8cc:
    // 0x3ca8cc: 0x8fa60208  lw          $a2, 0x208($sp)
    ctx->pc = 0x3ca8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca8d0:
    // 0x3ca8d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ca8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ca8d4:
    // 0x3ca8d4: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x3ca8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_3ca8d8:
    // 0x3ca8d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ca8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ca8dc:
    // 0x3ca8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ca8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ca8e0:
    // 0x3ca8e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3ca8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca8e4:
    // 0x3ca8e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ca8e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ca8e8:
    // 0x3ca8e8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ca8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3ca8ec:
    // 0x3ca8ec: 0x8fb00230  lw          $s0, 0x230($sp)
    ctx->pc = 0x3ca8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3ca8f0:
    // 0x3ca8f0: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
label_3ca8f4:
    if (ctx->pc == 0x3CA8F4u) {
        ctx->pc = 0x3CA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8F0u;
        // 0x3ca8f4: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA8F8u;
        goto label_3ca8f8;
    }
    ctx->pc = 0x3CA8F0u;
    {
        const bool branch_taken_0x3ca8f0 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3CA8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA8F0u;
        // 0x3ca8f4: 0x180282d  daddu       $a1, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca8f0) {
            ctx->pc = 0x3CA908u;
            goto label_3ca908;
        }
    }
    ctx->pc = 0x3CA8F8u;
label_3ca8f8:
    // 0x3ca8f8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3ca8f8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ca8fc:
    // 0x3ca8fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ca8fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ca900:
    // 0x3ca900: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ca904:
    if (ctx->pc == 0x3CA904u) {
        ctx->pc = 0x3CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA900u;
        // 0x3ca904: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA908u;
        goto label_3ca908;
    }
    ctx->pc = 0x3CA900u;
    {
        const bool branch_taken_0x3ca900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA900u;
        // 0x3ca904: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca900) {
            ctx->pc = 0x3CA918u;
            goto label_3ca918;
        }
    }
    ctx->pc = 0x3CA908u;
label_3ca908:
    // 0x3ca908: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x3ca908u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ca90c:
    // 0x3ca90c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3ca90cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3ca910:
    // 0x3ca910: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3ca910u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3ca914:
    // 0x3ca914: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x3ca914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca918:
    // 0x3ca918: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ca918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ca91c:
    // 0x3ca91c: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3ca91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3ca920:
    // 0x3ca920: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3ca920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3ca924:
    // 0x3ca924: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ca924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ca928:
    // 0x3ca928: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3ca928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ca92c:
    // 0x3ca92c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3ca92cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3ca930:
    // 0x3ca930: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3ca930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3ca934:
    // 0x3ca934: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ca934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ca938:
    // 0x3ca938: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x3ca938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3ca93c:
    // 0x3ca93c: 0x581018  mult        $v0, $v0, $t8
    ctx->pc = 0x3ca93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3ca940:
    // 0x3ca940: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x3ca940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3ca944:
    // 0x3ca944: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x3ca944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_3ca948:
    // 0x3ca948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3ca948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ca94c:
    // 0x3ca94c: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x3ca94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3ca950:
    // 0x3ca950: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x3ca950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3ca954:
    // 0x3ca954: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ca954u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ca958:
    // 0x3ca958: 0xb1060007  sdl         $a2, 0x7($t0)
    ctx->pc = 0x3ca958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca95c:
    // 0x3ca95c: 0xb5060000  sdr         $a2, 0x0($t0)
    ctx->pc = 0x3ca95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3ca960:
    // 0x3ca960: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3ca964:
    if (ctx->pc == 0x3CA964u) {
        ctx->pc = 0x3CA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA960u;
        // 0x3ca964: 0xad100008  sw          $s0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA968u;
        goto label_3ca968;
    }
    ctx->pc = 0x3CA960u;
    {
        const bool branch_taken_0x3ca960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA960u;
        // 0x3ca964: 0xad100008  sw          $s0, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca960) {
            ctx->pc = 0x3CA984u;
            goto label_3ca984;
        }
    }
    ctx->pc = 0x3CA968u;
label_3ca968:
    // 0x3ca968: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3ca968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3ca96c:
    // 0x3ca96c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3ca96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ca970:
    // 0x3ca970: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ca970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ca974:
    // 0x3ca974: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x3ca974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_3ca978:
    // 0x3ca978: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x3ca978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_3ca97c:
    // 0x3ca97c: 0xaba600e3  swl         $a2, 0xE3($sp)
    ctx->pc = 0x3ca97cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 227); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3ca980:
    // 0x3ca980: 0xbba600e0  swr         $a2, 0xE0($sp)
    ctx->pc = 0x3ca980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3ca984:
    // 0x3ca984: 0x83a200e0  lb          $v0, 0xE0($sp)
    ctx->pc = 0x3ca984u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
label_3ca988:
    // 0x3ca988: 0x2ca2021  addu        $a0, $s6, $t2
    ctx->pc = 0x3ca988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 10)));
label_3ca98c:
    // 0x3ca98c: 0x2aa2821  addu        $a1, $s5, $t2
    ctx->pc = 0x3ca98cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 10)));
label_3ca990:
    // 0x3ca990: 0x28a3021  addu        $a2, $s4, $t2
    ctx->pc = 0x3ca990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 10)));
label_3ca994:
    // 0x3ca994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ca994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ca998:
    // 0x3ca998: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ca998u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ca99c:
    // 0x3ca99c: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x3ca99cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
label_3ca9a0:
    // 0x3ca9a0: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x3ca9a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_3ca9a4:
    // 0x3ca9a4: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3ca9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3ca9a8:
    // 0x3ca9a8: 0x254a000c  addiu       $t2, $t2, 0xC
    ctx->pc = 0x3ca9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
label_3ca9ac:
    // 0x3ca9ac: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x3ca9acu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
label_3ca9b0:
    // 0x3ca9b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ca9b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3ca9b4:
    // 0x3ca9b4: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x3ca9b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_3ca9b8:
    // 0x3ca9b8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x3ca9b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
label_3ca9bc:
    // 0x3ca9bc: 0x1f1182b  sltu        $v1, $t7, $s1
    ctx->pc = 0x3ca9bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3ca9c0:
    // 0x3ca9c0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3ca9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3ca9c4:
    // 0x3ca9c4: 0x83a200e1  lb          $v0, 0xE1($sp)
    ctx->pc = 0x3ca9c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 225)));
label_3ca9c8:
    // 0x3ca9c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ca9c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ca9cc:
    // 0x3ca9cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ca9ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ca9d0:
    // 0x3ca9d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ca9d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3ca9d4:
    // 0x3ca9d4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3ca9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3ca9d8:
    // 0x3ca9d8: 0x83a200e2  lb          $v0, 0xE2($sp)
    ctx->pc = 0x3ca9d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 226)));
label_3ca9dc:
    // 0x3ca9dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3ca9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ca9e0:
    // 0x3ca9e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ca9e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ca9e4:
    // 0x3ca9e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3ca9e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3ca9e8:
    // 0x3ca9e8: 0x1460ffa9  bnez        $v1, . + 4 + (-0x57 << 2)
label_3ca9ec:
    if (ctx->pc == 0x3CA9ECu) {
        ctx->pc = 0x3CA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9E8u;
        // 0x3ca9ec: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA9F0u;
        goto label_3ca9f0;
    }
    ctx->pc = 0x3CA9E8u;
    {
        const bool branch_taken_0x3ca9e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9E8u;
        // 0x3ca9ec: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca9e8) {
            ctx->pc = 0x3CA890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca890;
        }
    }
    ctx->pc = 0x3CA9F0u;
label_3ca9f0:
    // 0x3ca9f0: 0x8fa50214  lw          $a1, 0x214($sp)
    ctx->pc = 0x3ca9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_3ca9f4:
    // 0x3ca9f4: 0x1000005e  b           . + 4 + (0x5E << 2)
label_3ca9f8:
    if (ctx->pc == 0x3CA9F8u) {
        ctx->pc = 0x3CA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9F4u;
        // 0x3ca9f8: 0x94b10006  lhu         $s1, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CA9FCu;
        goto label_3ca9fc;
    }
    ctx->pc = 0x3CA9F4u;
    {
        const bool branch_taken_0x3ca9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA9F4u;
        // 0x3ca9f8: 0x94b10006  lhu         $s1, 0x6($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca9f4) {
            ctx->pc = 0x3CAB70u;
            goto label_3cab70;
        }
    }
    ctx->pc = 0x3CA9FCu;
label_3ca9fc:
    // 0x3ca9fc: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x3ca9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3caa00:
    // 0x3caa00: 0x8fa6022c  lw          $a2, 0x22C($sp)
    ctx->pc = 0x3caa00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3caa04:
    // 0x3caa04: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3caa04u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3caa08:
    // 0x3caa08: 0x8fa70230  lw          $a3, 0x230($sp)
    ctx->pc = 0x3caa08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3caa0c:
    // 0x3caa0c: 0x25130008  addiu       $s3, $t0, 0x8
    ctx->pc = 0x3caa0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_3caa10:
    // 0x3caa10: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x3caa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_3caa14:
    // 0x3caa14: 0x30ce0001  andi        $t6, $a2, 0x1
    ctx->pc = 0x3caa14u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_3caa18:
    // 0x3caa18: 0x71842  srl         $v1, $a3, 1
    ctx->pc = 0x3caa18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_3caa1c:
    // 0x3caa1c: 0x30ed0001  andi        $t5, $a3, 0x1
    ctx->pc = 0x3caa1cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_3caa20:
    // 0x3caa20: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x3caa20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3caa24:
    // 0x3caa24: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x3caa24u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
label_3caa28:
    // 0x3caa28: 0x1a36825  or          $t5, $t5, $v1
    ctx->pc = 0x3caa28u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
label_3caa2c:
    // 0x3caa2c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x3caa2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3caa30:
    // 0x3caa30: 0x27af0030  addiu       $t7, $sp, 0x30
    ctx->pc = 0x3caa30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3caa34:
    // 0x3caa34: 0x27ab0094  addiu       $t3, $sp, 0x94
    ctx->pc = 0x3caa34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_3caa38:
    // 0x3caa38: 0x27aa0090  addiu       $t2, $sp, 0x90
    ctx->pc = 0x3caa38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3caa3c:
    // 0x3caa3c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x3caa3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3caa40:
    // 0x3caa40: 0x8fb00208  lw          $s0, 0x208($sp)
    ctx->pc = 0x3caa40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caa44:
    // 0x3caa44: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x3caa44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
label_3caa48:
    // 0x3caa48: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x3caa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_3caa4c:
    // 0x3caa4c: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
label_3caa50:
    if (ctx->pc == 0x3CAA50u) {
        ctx->pc = 0x3CAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA4Cu;
        // 0x3caa50: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA54u;
        goto label_3caa54;
    }
    ctx->pc = 0x3CAA4Cu;
    {
        const bool branch_taken_0x3caa4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA4Cu;
        // 0x3caa50: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa4c) {
            ctx->pc = 0x3CAAE4u;
            goto label_3caae4;
        }
    }
    ctx->pc = 0x3CAA54u;
label_3caa54:
    // 0x3caa54: 0x8fb1022c  lw          $s1, 0x22C($sp)
    ctx->pc = 0x3caa54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
label_3caa58:
    // 0x3caa58: 0x6200005  bltz        $s1, . + 4 + (0x5 << 2)
label_3caa5c:
    if (ctx->pc == 0x3CAA5Cu) {
        ctx->pc = 0x3CAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA58u;
        // 0x3caa5c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA60u;
        goto label_3caa60;
    }
    ctx->pc = 0x3CAA58u;
    {
        const bool branch_taken_0x3caa58 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x3CAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA58u;
        // 0x3caa5c: 0x140202d  daddu       $a0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa58) {
            ctx->pc = 0x3CAA70u;
            goto label_3caa70;
        }
    }
    ctx->pc = 0x3CAA60u;
label_3caa60:
    // 0x3caa60: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x3caa60u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3caa64:
    // 0x3caa64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3caa64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3caa68:
    // 0x3caa68: 0x10000005  b           . + 4 + (0x5 << 2)
label_3caa6c:
    if (ctx->pc == 0x3CAA6Cu) {
        ctx->pc = 0x3CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA68u;
        // 0x3caa6c: 0x8fb40208  lw          $s4, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAA70u;
        goto label_3caa70;
    }
    ctx->pc = 0x3CAA68u;
    {
        const bool branch_taken_0x3caa68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAA68u;
        // 0x3caa6c: 0x8fb40208  lw          $s4, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caa68) {
            ctx->pc = 0x3CAA80u;
            goto label_3caa80;
        }
    }
    ctx->pc = 0x3CAA70u;
label_3caa70:
    // 0x3caa70: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x3caa70u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3caa74:
    // 0x3caa74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3caa74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3caa78:
    // 0x3caa78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3caa78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3caa7c:
    // 0x3caa7c: 0x8fb40208  lw          $s4, 0x208($sp)
    ctx->pc = 0x3caa7cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caa80:
    // 0x3caa80: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3caa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3caa84:
    // 0x3caa84: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x3caa84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_3caa88:
    // 0x3caa88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3caa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3caa8c:
    // 0x3caa8c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3caa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3caa90:
    // 0x3caa90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3caa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caa94:
    // 0x3caa94: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3caa94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3caa98:
    // 0x3caa98: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x3caa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3caa9c:
    // 0x3caa9c: 0x8fa20230  lw          $v0, 0x230($sp)
    ctx->pc = 0x3caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
label_3caaa0:
    // 0x3caaa0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3caaa4:
    if (ctx->pc == 0x3CAAA4u) {
        ctx->pc = 0x3CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAA0u;
        // 0x3caaa4: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAA8u;
        goto label_3caaa8;
    }
    ctx->pc = 0x3CAAA0u;
    {
        const bool branch_taken_0x3caaa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CAAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAA0u;
        // 0x3caaa4: 0x160282d  daddu       $a1, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caaa0) {
            ctx->pc = 0x3CAAB8u;
            goto label_3caab8;
        }
    }
    ctx->pc = 0x3CAAA8u;
label_3caaa8:
    // 0x3caaa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3caaa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3caaac:
    // 0x3caaac: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3caaacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3caab0:
    // 0x3caab0: 0x10000005  b           . + 4 + (0x5 << 2)
label_3caab4:
    if (ctx->pc == 0x3CAAB4u) {
        ctx->pc = 0x3CAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAB0u;
        // 0x3caab4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAAB8u;
        goto label_3caab8;
    }
    ctx->pc = 0x3CAAB0u;
    {
        const bool branch_taken_0x3caab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAAB0u;
        // 0x3caab4: 0x8fa40208  lw          $a0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caab0) {
            ctx->pc = 0x3CAAC8u;
            goto label_3caac8;
        }
    }
    ctx->pc = 0x3CAAB8u;
label_3caab8:
    // 0x3caab8: 0x448d0800  mtc1        $t5, $f1
    ctx->pc = 0x3caab8u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3caabc:
    // 0x3caabc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3caabcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3caac0:
    // 0x3caac0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3caac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3caac4:
    // 0x3caac4: 0x8fa40208  lw          $a0, 0x208($sp)
    ctx->pc = 0x3caac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caac8:
    // 0x3caac8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3caac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3caacc:
    // 0x3caacc: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3caaccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3caad0:
    // 0x3caad0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3caad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3caad4:
    // 0x3caad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3caad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3caad8:
    // 0x3caad8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3caad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3caadc:
    // 0x3caadc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3caadcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3caae0:
    // 0x3caae0: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x3caae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_3caae4:
    // 0x3caae4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3caae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3caae8:
    // 0x3caae8: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3caae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3caaec:
    // 0x3caaec: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x3caaecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caaf0:
    // 0x3caaf0: 0x1873018  mult        $a2, $t4, $a3
    ctx->pc = 0x3caaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3caaf4:
    // 0x3caaf4: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x3caaf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3caaf8:
    // 0x3caaf8: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x3caaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_3caafc:
    // 0x3caafc: 0x8ca50028  lw          $a1, 0x28($a1)
    ctx->pc = 0x3caafcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_3cab00:
    // 0x3cab00: 0x3a61821  addu        $v1, $sp, $a2
    ctx->pc = 0x3cab00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_3cab04:
    // 0x3cab04: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3cab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cab08:
    // 0x3cab08: 0x68500007  ldl         $s0, 0x7($v0)
    ctx->pc = 0x3cab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cab0c:
    // 0x3cab0c: 0x6c500000  ldr         $s0, 0x0($v0)
    ctx->pc = 0x3cab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cab10:
    // 0x3cab10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x3cab10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3cab14:
    // 0x3cab14: 0xb0700007  sdl         $s0, 0x7($v1)
    ctx->pc = 0x3cab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cab18:
    // 0x3cab18: 0xb4700000  sdr         $s0, 0x0($v1)
    ctx->pc = 0x3cab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cab1c:
    // 0x3cab1c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
label_3cab20:
    if (ctx->pc == 0x3CAB20u) {
        ctx->pc = 0x3CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB1Cu;
        // 0x3cab20: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB24u;
        goto label_3cab24;
    }
    ctx->pc = 0x3CAB1Cu;
    {
        const bool branch_taken_0x3cab1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB1Cu;
        // 0x3cab20: 0xac710008  sw          $s1, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab1c) {
            ctx->pc = 0x3CAB4Cu;
            goto label_3cab4c;
        }
    }
    ctx->pc = 0x3CAB24u;
label_3cab24:
    // 0x3cab24: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3cab24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3cab28:
    // 0x3cab28: 0x1e61821  addu        $v1, $t7, $a2
    ctx->pc = 0x3cab28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
label_3cab2c:
    // 0x3cab2c: 0x472018  mult        $a0, $v0, $a3
    ctx->pc = 0x3cab2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3cab30:
    // 0x3cab30: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x3cab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3cab34:
    // 0x3cab34: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x3cab34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3cab38:
    // 0x3cab38: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x3cab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3cab3c:
    // 0x3cab3c: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x3cab3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3cab40:
    // 0x3cab40: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x3cab40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cab44:
    // 0x3cab44: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x3cab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cab48:
    // 0x3cab48: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x3cab48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
label_3cab4c:
    // 0x3cab4c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3cab4cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cab50:
    // 0x3cab50: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3cab50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3cab54:
    // 0x3cab54: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x3cab54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
label_3cab58:
    // 0x3cab58: 0x254a0008  addiu       $t2, $t2, 0x8
    ctx->pc = 0x3cab58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
label_3cab5c:
    // 0x3cab5c: 0x2d820003  sltiu       $v0, $t4, 0x3
    ctx->pc = 0x3cab5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3cab60:
    // 0x3cab60: 0x1440ffb7  bnez        $v0, . + 4 + (-0x49 << 2)
label_3cab64:
    if (ctx->pc == 0x3CAB64u) {
        ctx->pc = 0x3CAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB60u;
        // 0x3cab64: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB68u;
        goto label_3cab68;
    }
    ctx->pc = 0x3CAB60u;
    {
        const bool branch_taken_0x3cab60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB60u;
        // 0x3cab64: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab60) {
            ctx->pc = 0x3CAA40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3caa40;
        }
    }
    ctx->pc = 0x3CAB68u;
label_3cab68:
    // 0x3cab68: 0x8fb40214  lw          $s4, 0x214($sp)
    ctx->pc = 0x3cab68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 532)));
label_3cab6c:
    // 0x3cab6c: 0x96910006  lhu         $s1, 0x6($s4)
    ctx->pc = 0x3cab6cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_3cab70:
    // 0x3cab70: 0xafb30214  sw          $s3, 0x214($sp)
    ctx->pc = 0x3cab70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 19));
label_3cab74:
    // 0x3cab74: 0x8fa20208  lw          $v0, 0x208($sp)
    ctx->pc = 0x3cab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cab78:
    // 0x3cab78: 0x8c470018  lw          $a3, 0x18($v0)
    ctx->pc = 0x3cab78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3cab7c:
    // 0x3cab7c: 0x10e0000a  beqz        $a3, . + 4 + (0xA << 2)
label_3cab80:
    if (ctx->pc == 0x3CAB80u) {
        ctx->pc = 0x3CAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB7Cu;
        // 0x3cab80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB84u;
        goto label_3cab84;
    }
    ctx->pc = 0x3CAB7Cu;
    {
        const bool branch_taken_0x3cab7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB7Cu;
        // 0x3cab80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cab7c) {
            ctx->pc = 0x3CABA8u;
            goto label_3caba8;
        }
    }
    ctx->pc = 0x3CAB84u;
label_3cab84:
    // 0x3cab84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cab84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cab88:
    // 0x3cab88: 0xc104d74  jal         func_4135D0
label_3cab8c:
    if (ctx->pc == 0x3CAB8Cu) {
        ctx->pc = 0x3CAB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAB88u;
        // 0x3cab8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAB90u;
        goto label_3cab90;
    }
    ctx->pc = 0x3CAB88u;
    SET_GPR_U32(ctx, 31, 0x3CAB90u);
    ctx->pc = 0x3CAB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAB88u;
    // 0x3cab8c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4135D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4135D0u, 0x3CAB88u, 0x3CAB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAB90u;
label_3cab90:
    // 0x3cab90: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x3cab90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cab94:
    // 0x3cab94: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3cab94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cab98:
    // 0x3cab98: 0x8fa40240  lw          $a0, 0x240($sp)
    ctx->pc = 0x3cab98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_3cab9c:
    // 0x3cab9c: 0x8c670018  lw          $a3, 0x18($v1)
    ctx->pc = 0x3cab9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_3caba0:
    // 0x3caba0: 0xc104d94  jal         func_413650
label_3caba4:
    if (ctx->pc == 0x3CABA4u) {
        ctx->pc = 0x3CABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABA0u;
        // 0x3caba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABA8u;
        goto label_3caba8;
    }
    ctx->pc = 0x3CABA0u;
    SET_GPR_U32(ctx, 31, 0x3CABA8u);
    ctx->pc = 0x3CABA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABA0u;
    // 0x3caba4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413650u, 0x3CABA0u, 0x3CABA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABA8u;
label_3caba8:
    // 0x3caba8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3caba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cabac:
    // 0x3cabac: 0xc0f2562  jal         func_3C9588
label_3cabb0:
    if (ctx->pc == 0x3CABB0u) {
        ctx->pc = 0x3CABB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABACu;
        // 0x3cabb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABB4u;
        goto label_3cabb4;
    }
    ctx->pc = 0x3CABACu;
    SET_GPR_U32(ctx, 31, 0x3CABB4u);
    ctx->pc = 0x3CABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABACu;
    // 0x3cabb0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9588u, 0x3CABACu, 0x3CABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABB4u;
label_3cabb4:
    // 0x3cabb4: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x3cabb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3cabb8:
    // 0x3cabb8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3cabb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_3cabbc:
    // 0x3cabbc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3cabc0:
    if (ctx->pc == 0x3CABC0u) {
        ctx->pc = 0x3CABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABBCu;
        // 0x3cabc0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABC4u;
        goto label_3cabc4;
    }
    ctx->pc = 0x3CABBCu;
    {
        const bool branch_taken_0x3cabbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABBCu;
        // 0x3cabc0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cabbc) {
            ctx->pc = 0x3CABD4u;
            goto label_3cabd4;
        }
    }
    ctx->pc = 0x3CABC4u;
label_3cabc4:
    // 0x3cabc4: 0xc1060d2  jal         func_418348
label_3cabc8:
    if (ctx->pc == 0x3CABC8u) {
        ctx->pc = 0x3CABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABC4u;
        // 0x3cabc8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABCCu;
        goto label_3cabcc;
    }
    ctx->pc = 0x3CABC4u;
    SET_GPR_U32(ctx, 31, 0x3CABCCu);
    ctx->pc = 0x3CABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABC4u;
    // 0x3cabc8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x418348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418348u, 0x3CABC4u, 0x3CABCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABCCu;
label_3cabcc:
    // 0x3cabcc: 0x104004d0  beqz        $v0, . + 4 + (0x4D0 << 2)
label_3cabd0:
    if (ctx->pc == 0x3CABD0u) {
        ctx->pc = 0x3CABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABCCu;
        // 0x3cabd0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABD4u;
        goto label_3cabd4;
    }
    ctx->pc = 0x3CABCCu;
    {
        const bool branch_taken_0x3cabcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABCCu;
        // 0x3cabd0: 0x8fa60208  lw          $a2, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cabcc) {
            ctx->pc = 0x3CBF10u;
            goto label_3cbf10;
        }
    }
    ctx->pc = 0x3CABD4u;
label_3cabd4:
    // 0x3cabd4: 0x8cc5001c  lw          $a1, 0x1C($a2)
    ctx->pc = 0x3cabd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3cabd8:
    // 0x3cabd8: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x3cabd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3cabdc:
    // 0x3cabdc: 0xc0e3df2  jal         func_38F7C8
label_3cabe0:
    if (ctx->pc == 0x3CABE0u) {
        ctx->pc = 0x3CABE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABDCu;
        // 0x3cabe0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABE4u;
        goto label_3cabe4;
    }
    ctx->pc = 0x3CABDCu;
    SET_GPR_U32(ctx, 31, 0x3CABE4u);
    ctx->pc = 0x3CABE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABDCu;
    // 0x3cabe0: 0xb12821  addu        $a1, $a1, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F7C8u, 0x3CABDCu, 0x3CABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABE4u;
label_3cabe4:
    // 0x3cabe4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3cabe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cabe8:
    // 0x3cabe8: 0xc0f5392  jal         func_3D4E48
label_3cabec:
    if (ctx->pc == 0x3CABECu) {
        ctx->pc = 0x3CABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CABE8u;
        // 0x3cabec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CABF0u;
        goto label_3cabf0;
    }
    ctx->pc = 0x3CABE8u;
    SET_GPR_U32(ctx, 31, 0x3CABF0u);
    ctx->pc = 0x3CABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CABE8u;
    // 0x3cabec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CABE8u, 0x3CABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CABF0u;
label_3cabf0:
    // 0x3cabf0: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x3cabf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cabf4:
    // 0x3cabf4: 0x30540001  andi        $s4, $v0, 0x1
    ctx->pc = 0x3cabf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cabf8:
    // 0x3cabf8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x3cabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_3cabfc:
    // 0x3cabfc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3cabfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3cac00:
    // 0x3cac00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3cac04:
    // 0x3cac04: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_3cac08:
    if (ctx->pc == 0x3CAC08u) {
        ctx->pc = 0x3CAC0Cu;
        goto label_3cac0c;
    }
    ctx->pc = 0x3CAC04u;
    {
        const bool branch_taken_0x3cac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cac04) {
            ctx->pc = 0x3CAC20u;
            goto label_3cac20;
        }
    }
    ctx->pc = 0x3CAC0Cu;
label_3cac0c:
    // 0x3cac0c: 0xc0f5392  jal         func_3D4E48
label_3cac10:
    if (ctx->pc == 0x3CAC10u) {
        ctx->pc = 0x3CAC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC0Cu;
        // 0x3cac10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC14u;
        goto label_3cac14;
    }
    ctx->pc = 0x3CAC0Cu;
    SET_GPR_U32(ctx, 31, 0x3CAC14u);
    ctx->pc = 0x3CAC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAC0Cu;
    // 0x3cac10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CAC0Cu, 0x3CAC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAC14u;
label_3cac14:
    // 0x3cac14: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3cac14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3cac18:
    // 0x3cac18: 0x104000d6  beqz        $v0, . + 4 + (0xD6 << 2)
label_3cac1c:
    if (ctx->pc == 0x3CAC1Cu) {
        ctx->pc = 0x3CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC18u;
        // 0x3cac1c: 0x8fa30208  lw          $v1, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC20u;
        goto label_3cac20;
    }
    ctx->pc = 0x3CAC18u;
    {
        const bool branch_taken_0x3cac18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC18u;
        // 0x3cac1c: 0x8fa30208  lw          $v1, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac18) {
            ctx->pc = 0x3CAF74u;
            goto label_3caf74;
        }
    }
    ctx->pc = 0x3CAC20u;
label_3cac20:
    // 0x3cac20: 0xc0f5392  jal         func_3D4E48
label_3cac24:
    if (ctx->pc == 0x3CAC24u) {
        ctx->pc = 0x3CAC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC20u;
        // 0x3cac24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC28u;
        goto label_3cac28;
    }
    ctx->pc = 0x3CAC20u;
    SET_GPR_U32(ctx, 31, 0x3CAC28u);
    ctx->pc = 0x3CAC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CAC20u;
    // 0x3cac24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CAC20u, 0x3CAC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CAC28u;
label_3cac28:
    // 0x3cac28: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3cac2c:
    // 0x3cac2c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_3cac30:
    if (ctx->pc == 0x3CAC30u) {
        ctx->pc = 0x3CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC2Cu;
        // 0x3cac30: 0x3c080062  lui         $t0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAC34u;
        goto label_3cac34;
    }
    ctx->pc = 0x3CAC2Cu;
    {
        const bool branch_taken_0x3cac2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAC2Cu;
        // 0x3cac30: 0x3c080062  lui         $t0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cac2c) {
            ctx->pc = 0x3CADD8u;
            goto label_3cadd8;
        }
    }
    ctx->pc = 0x3CAC34u;
label_3cac34:
    // 0x3cac34: 0x2508b1e0  addiu       $t0, $t0, -0x4E20
    ctx->pc = 0x3cac34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294947296));
label_3cac38:
    // 0x3cac38: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x3cac38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
label_3cac3c:
    // 0x3cac3c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3cac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3cac40:
    // 0x3cac40: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x3cac40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_3cac44:
    // 0x3cac44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cac44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cac48:
    // 0x3cac48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cac48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cac4c:
    // 0x3cac4c: 0x46170082  mul.s       $f2, $f0, $f23
    ctx->pc = 0x3cac4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cac50:
    // 0x3cac50: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x3cac50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3cac54:
    // 0x3cac54: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x3cac54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_3cac58:
    // 0x3cac58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cac58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cac5c:
    // 0x3cac5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cac5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cac60:
    // 0x3cac60: 0x461700c2  mul.s       $f3, $f0, $f23
    ctx->pc = 0x3cac60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cac64:
    // 0x3cac64: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x3cac64u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3cac68:
    // 0x3cac68: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x3cac68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_3cac6c:
    // 0x3cac6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cac6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cac70:
    // 0x3cac70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cac70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cac74:
    // 0x3cac74: 0x46170142  mul.s       $f5, $f0, $f23
    ctx->pc = 0x3cac74u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cac78:
    // 0x3cac78: 0xe7a500f8  swc1        $f5, 0xF8($sp)
    ctx->pc = 0x3cac78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3cac7c:
    // 0x3cac7c: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x3cac7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_3cac80:
    // 0x3cac80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cac80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cac84:
    // 0x3cac84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cac84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cac88:
    // 0x3cac88: 0x46170102  mul.s       $f4, $f0, $f23
    ctx->pc = 0x3cac88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cac8c:
    // 0x3cac8c: 0xe7a400fc  swc1        $f4, 0xFC($sp)
    ctx->pc = 0x3cac8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_3cac90:
    // 0x3cac90: 0xc5010040  lwc1        $f1, 0x40($t0)
    ctx->pc = 0x3cac90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cac94:
    // 0x3cac94: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3cac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cac98:
    // 0x3cac98: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cac98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cac9c:
    // 0x3cac9c: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x3cac9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3caca0:
    // 0x3caca0: 0x0  nop
    ctx->pc = 0x3caca0u;
    // NOP
label_3caca4:
    // 0x3caca4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_3caca8:
    if (ctx->pc == 0x3CACA8u) {
        ctx->pc = 0x3CACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACA4u;
        // 0x3caca8: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACACu;
        goto label_3cacac;
    }
    ctx->pc = 0x3CACA4u;
    {
        const bool branch_taken_0x3caca4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3caca4) {
            ctx->pc = 0x3CACA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CACA4u;
            // 0x3caca8: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CACB8u;
            goto label_3cacb8;
        }
    }
    ctx->pc = 0x3CACACu;
label_3cacac:
    // 0x3cacac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cacacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cacb0:
    // 0x3cacb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cacb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cacb4:
    // 0x3cacb4: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x3cacb4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3cacb8:
    // 0x3cacb8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cacb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cacbc:
    // 0x3cacbc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cacbcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cacc0:
    // 0x3cacc0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3cacc0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cacc4:
    // 0x3cacc4: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x3cacc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_3cacc8:
    // 0x3cacc8: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x3cacc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3caccc:
    // 0x3caccc: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x3cacccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3cacd0:
    // 0x3cacd0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3cacd0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_3cacd4:
    // 0x3cacd4: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x3cacd4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_3cacd8:
    // 0x3cacd8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3cacd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cacdc:
    // 0x3cacdc: 0x0  nop
    ctx->pc = 0x3cacdcu;
    // NOP
label_3cace0:
    // 0x3cace0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3cace4:
    if (ctx->pc == 0x3CACE4u) {
        ctx->pc = 0x3CACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACE0u;
        // 0x3cace4: 0xe7a500f8  swc1        $f5, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CACE8u;
        goto label_3cace8;
    }
    ctx->pc = 0x3CACE0u;
    {
        const bool branch_taken_0x3cace0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CACE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACE0u;
        // 0x3cace4: 0xe7a500f8  swc1        $f5, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cace0) {
            ctx->pc = 0x3CACECu;
            goto label_3cacec;
        }
    }
    ctx->pc = 0x3CACE8u;
label_3cace8:
    // 0x3cace8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x3cace8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_3cacec:
    // 0x3cacec: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x3cacecu;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
label_3cacf0:
    // 0x3cacf0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3cacf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cacf4:
    // 0x3cacf4: 0x0  nop
    ctx->pc = 0x3cacf4u;
    // NOP
label_3cacf8:
    // 0x3cacf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3cacfc:
    if (ctx->pc == 0x3CACFCu) {
        ctx->pc = 0x3CACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CACF8u;
        // 0x3cacfc: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD00u;
        goto label_3cad00;
    }
    ctx->pc = 0x3CACF8u;
    {
        const bool branch_taken_0x3cacf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cacf8) {
            ctx->pc = 0x3CACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CACF8u;
            // 0x3cacfc: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAD00u;
            goto label_3cad00;
        }
    }
    ctx->pc = 0x3CAD00u;
label_3cad00:
    // 0x3cad00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cad00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cad04:
    // 0x3cad04: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3cad04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3cad08:
    // 0x3cad08: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3cad08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cad0c:
    // 0x3cad0c: 0x0  nop
    ctx->pc = 0x3cad0cu;
    // NOP
label_3cad10:
    // 0x3cad10: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3cad14:
    if (ctx->pc == 0x3CAD14u) {
        ctx->pc = 0x3CAD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAD10u;
        // 0x3cad14: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAD18u;
        goto label_3cad18;
    }
    ctx->pc = 0x3CAD10u;
    {
        const bool branch_taken_0x3cad10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cad10) {
            ctx->pc = 0x3CAD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CAD10u;
            // 0x3cad14: 0xc7a000f0  lwc1        $f0, 0xF0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CAD40u;
            goto label_3cad40;
        }
    }
    ctx->pc = 0x3CAD18u;
label_3cad18:
    // 0x3cad18: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x3cad18u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_3cad1c:
    // 0x3cad1c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cad1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cad20:
    // 0x3cad20: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cad20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cad24:
    // 0x3cad24: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cad24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cad28:
    // 0x3cad28: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3cad28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cad2c:
    // 0x3cad2c: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x3cad2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_3cad30:
    // 0x3cad30: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x3cad30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_3cad34:
    // 0x3cad34: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x3cad34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_3cad38:
    // 0x3cad38: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x3cad38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_3cad3c:
    // 0x3cad3c: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x3cad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cad40:
    // 0x3cad40: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x3cad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cad44:
    // 0x3cad44: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3cad44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3cad48:
    // 0x3cad48: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x3cad48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cad4c:
    // 0x3cad4c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x3cad4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_3cad50:
    // 0x3cad50: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x3cad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cad54:
    // 0x3cad54: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x3cad54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_3cad58:
    // 0x3cad58: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3cad58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cad5c:
    // 0x3cad5c: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x3cad5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3cad60:
    // 0x3cad60: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x3cad60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_3cad64:
    // 0x3cad64: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cad64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3cad68:
    // 0x3cad68: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3cad68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cad6c:
    // 0x3cad6c: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x3cad6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
label_3cad70:
    // 0x3cad70: 0xa3a20100  sb          $v0, 0x100($sp)
    ctx->pc = 0x3cad70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
label_3cad74:
    // 0x3cad74: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cad74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cad78:
    // 0x3cad78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cad78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cad7c:
    // 0x3cad7c: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x3cad7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_3cad80:
    // 0x3cad80: 0xa3a20101  sb          $v0, 0x101($sp)
    ctx->pc = 0x3cad80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 257), (uint8_t)GPR_U32(ctx, 2));
label_3cad84:
    // 0x3cad84: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cad84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cad88:
    // 0x3cad88: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cad88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cad8c:
    // 0x3cad8c: 0xa3a20102  sb          $v0, 0x102($sp)
    ctx->pc = 0x3cad8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 258), (uint8_t)GPR_U32(ctx, 2));
label_3cad90:
    // 0x3cad90: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cad90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cad94:
    // 0x3cad94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cad94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cad98:
    // 0x3cad98: 0xa3a20103  sb          $v0, 0x103($sp)
    ctx->pc = 0x3cad98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 259), (uint8_t)GPR_U32(ctx, 2));
label_3cad9c:
    // 0x3cad9c: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3cad9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cada0:
    // 0x3cada0: 0x8ba30103  lwl         $v1, 0x103($sp)
    ctx->pc = 0x3cada0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 259); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3cada4:
    // 0x3cada4: 0x9ba30100  lwr         $v1, 0x100($sp)
    ctx->pc = 0x3cada4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3cada8:
    // 0x3cada8: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x3cada8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadac:
    // 0x3cadac: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x3cadacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadb0:
    // 0x3cadb0: 0x8ba70103  lwl         $a3, 0x103($sp)
    ctx->pc = 0x3cadb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 259); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_3cadb4:
    // 0x3cadb4: 0x9ba70100  lwr         $a3, 0x100($sp)
    ctx->pc = 0x3cadb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_3cadb8:
    // 0x3cadb8: 0xa8470007  swl         $a3, 0x7($v0)
    ctx->pc = 0x3cadb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadbc:
    // 0x3cadbc: 0xb8470004  swr         $a3, 0x4($v0)
    ctx->pc = 0x3cadbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadc0:
    // 0x3cadc0: 0x8ba30103  lwl         $v1, 0x103($sp)
    ctx->pc = 0x3cadc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 259); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3cadc4:
    // 0x3cadc4: 0x9ba30100  lwr         $v1, 0x100($sp)
    ctx->pc = 0x3cadc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3cadc8:
    // 0x3cadc8: 0xa843000b  swl         $v1, 0xB($v0)
    ctx->pc = 0x3cadc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadcc:
    // 0x3cadcc: 0xb8430008  swr         $v1, 0x8($v0)
    ctx->pc = 0x3cadccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cadd0:
    // 0x3cadd0: 0x10000039  b           . + 4 + (0x39 << 2)
label_3cadd4:
    if (ctx->pc == 0x3CADD4u) {
        ctx->pc = 0x3CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADD0u;
        // 0x3cadd4: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CADD8u;
        goto label_3cadd8;
    }
    ctx->pc = 0x3CADD0u;
    {
        const bool branch_taken_0x3cadd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CADD0u;
        // 0x3cadd4: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cadd0) {
            ctx->pc = 0x3CAEB8u;
            goto label_3caeb8;
        }
    }
    ctx->pc = 0x3CADD8u;
label_3cadd8:
    // 0x3cadd8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3cadd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3caddc:
    // 0x3caddc: 0x8fa7021c  lw          $a3, 0x21C($sp)
    ctx->pc = 0x3caddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cade0:
    // 0x3cade0: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x3cade0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3cade4:
    // 0x3cade4: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x3cade4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3cade8:
    // 0x3cade8: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x3cade8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3cadec:
    // 0x3cadec: 0xb0e80007  sdl         $t0, 0x7($a3)
    ctx->pc = 0x3cadecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cadf0:
    // 0x3cadf0: 0xb4e80000  sdr         $t0, 0x0($a3)
    ctx->pc = 0x3cadf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cadf4:
    // 0x3cadf4: 0xacea0008  sw          $t2, 0x8($a3)
    ctx->pc = 0x3cadf4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 10));
label_3cadf8:
    // 0x3cadf8: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x3cadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cadfc:
    // 0x3cadfc: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x3cadfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3cae00:
    // 0x3cae00: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x3cae00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3cae04:
    // 0x3cae04: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3cae04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cae08:
    // 0x3cae08: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x3cae08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae0c:
    // 0x3cae0c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x3cae0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae10:
    // 0x3cae10: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x3cae10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_3cae14:
    // 0x3cae14: 0x8faa021c  lw          $t2, 0x21C($sp)
    ctx->pc = 0x3cae14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cae18:
    // 0x3cae18: 0x6bb00013  ldl         $s0, 0x13($sp)
    ctx->pc = 0x3cae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cae1c:
    // 0x3cae1c: 0x6fb0000c  ldr         $s0, 0xC($sp)
    ctx->pc = 0x3cae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cae20:
    // 0x3cae20: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3cae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3cae24:
    // 0x3cae24: 0xb1500013  sdl         $s0, 0x13($t2)
    ctx->pc = 0x3cae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae28:
    // 0x3cae28: 0xb550000c  sdr         $s0, 0xC($t2)
    ctx->pc = 0x3cae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae2c:
    // 0x3cae2c: 0xad430014  sw          $v1, 0x14($t2)
    ctx->pc = 0x3cae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
label_3cae30:
    // 0x3cae30: 0x8fa60220  lw          $a2, 0x220($sp)
    ctx->pc = 0x3cae30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cae34:
    // 0x3cae34: 0x68470013  ldl         $a3, 0x13($v0)
    ctx->pc = 0x3cae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3cae38:
    // 0x3cae38: 0x6c47000c  ldr         $a3, 0xC($v0)
    ctx->pc = 0x3cae38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3cae3c:
    // 0x3cae3c: 0x8c480014  lw          $t0, 0x14($v0)
    ctx->pc = 0x3cae3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3cae40:
    // 0x3cae40: 0xb0c70013  sdl         $a3, 0x13($a2)
    ctx->pc = 0x3cae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae44:
    // 0x3cae44: 0xb4c7000c  sdr         $a3, 0xC($a2)
    ctx->pc = 0x3cae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae48:
    // 0x3cae48: 0xacc80014  sw          $t0, 0x14($a2)
    ctx->pc = 0x3cae48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 8));
label_3cae4c:
    // 0x3cae4c: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x3cae4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cae50:
    // 0x3cae50: 0x6ba4001f  ldl         $a0, 0x1F($sp)
    ctx->pc = 0x3cae50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3cae54:
    // 0x3cae54: 0x6fa40018  ldr         $a0, 0x18($sp)
    ctx->pc = 0x3cae54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3cae58:
    // 0x3cae58: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x3cae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3cae5c:
    // 0x3cae5c: 0xb064001f  sdl         $a0, 0x1F($v1)
    ctx->pc = 0x3cae5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae60:
    // 0x3cae60: 0xb4640018  sdr         $a0, 0x18($v1)
    ctx->pc = 0x3cae60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae64:
    // 0x3cae64: 0xac650020  sw          $a1, 0x20($v1)
    ctx->pc = 0x3cae64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 5));
label_3cae68:
    // 0x3cae68: 0x8fa80220  lw          $t0, 0x220($sp)
    ctx->pc = 0x3cae68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cae6c:
    // 0x3cae6c: 0x684a001f  ldl         $t2, 0x1F($v0)
    ctx->pc = 0x3cae6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3cae70:
    // 0x3cae70: 0x6c4a0018  ldr         $t2, 0x18($v0)
    ctx->pc = 0x3cae70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3cae74:
    // 0x3cae74: 0x8c500020  lw          $s0, 0x20($v0)
    ctx->pc = 0x3cae74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3cae78:
    // 0x3cae78: 0xb10a001f  sdl         $t2, 0x1F($t0)
    ctx->pc = 0x3cae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae7c:
    // 0x3cae7c: 0xb50a0018  sdr         $t2, 0x18($t0)
    ctx->pc = 0x3cae7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cae80:
    // 0x3cae80: 0xad100020  sw          $s0, 0x20($t0)
    ctx->pc = 0x3cae80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 16));
label_3cae84:
    // 0x3cae84: 0x8fa5020c  lw          $a1, 0x20C($sp)
    ctx->pc = 0x3cae84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3cae88:
    // 0x3cae88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3cae88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3cae8c:
    // 0x3cae8c: 0x8faa0208  lw          $t2, 0x208($sp)
    ctx->pc = 0x3cae8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cae90:
    // 0x3cae90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cae90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cae94:
    // 0x3cae94: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x3cae94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cae98:
    // 0x3cae98: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3cae98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cae9c:
    // 0x3cae9c: 0x8d480038  lw          $t0, 0x38($t2)
    ctx->pc = 0x3cae9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 56)));
label_3caea0:
    // 0x3caea0: 0x8d49003c  lw          $t1, 0x3C($t2)
    ctx->pc = 0x3caea0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 60)));
label_3caea4:
    // 0x3caea4: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x3caea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3caea8:
    // 0x3caea8: 0x40f809  jalr        $v0
label_3caeac:
    if (ctx->pc == 0x3CAEACu) {
        ctx->pc = 0x3CAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEA8u;
        // 0x3caeac: 0x8faa0220  lw          $t2, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAEB0u;
        goto label_3caeb0;
    }
    ctx->pc = 0x3CAEA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CAEB0u);
        ctx->pc = 0x3CAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEA8u;
        // 0x3caeac: 0x8faa0220  lw          $t2, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAEA8u, 0x3CAEB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAEB0u;
label_3caeb0:
    // 0x3caeb0: 0x1040fe3a  beqz        $v0, . + 4 + (-0x1C6 << 2)
label_3caeb4:
    if (ctx->pc == 0x3CAEB4u) {
        ctx->pc = 0x3CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEB0u;
        // 0x3caeb4: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAEB8u;
        goto label_3caeb8;
    }
    ctx->pc = 0x3CAEB0u;
    {
        const bool branch_taken_0x3caeb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAEB0u;
        // 0x3caeb4: 0x8fb00208  lw          $s0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caeb0) {
            ctx->pc = 0x3CA79Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca79c;
        }
    }
    ctx->pc = 0x3CAEB8u;
label_3caeb8:
    // 0x3caeb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3caeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3caebc:
    // 0x3caebc: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x3caebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3caec0:
    // 0x3caec0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3caec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3caec4:
    // 0x3caec4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3caec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3caec8:
    // 0x3caec8: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x3caec8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_3caecc:
    // 0x3caecc: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3caeccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3caed0:
    // 0x3caed0: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x3caed0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
label_3caed4:
    // 0x3caed4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3caed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3caed8:
    // 0x3caed8: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3caed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3caedc:
    // 0x3caedc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3caedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3caee0:
    // 0x3caee0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3caee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3caee4:
    // 0x3caee4: 0x8fa30228  lw          $v1, 0x228($sp)
    ctx->pc = 0x3caee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3caee8:
    // 0x3caee8: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x3caee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_3caeec:
    // 0x3caeec: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x3caeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_3caef0:
    // 0x3caef0: 0xa8440003  swl         $a0, 0x3($v0)
    ctx->pc = 0x3caef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caef4:
    // 0x3caef4: 0xb8440000  swr         $a0, 0x0($v0)
    ctx->pc = 0x3caef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caef8:
    // 0x3caef8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3caef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3caefc:
    // 0x3caefc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x3caefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3caf00:
    // 0x3caf00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3caf00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3caf04:
    // 0x3caf04: 0x8fa80228  lw          $t0, 0x228($sp)
    ctx->pc = 0x3caf04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3caf08:
    // 0x3caf08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3caf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3caf0c:
    // 0x3caf0c: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x3caf0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_3caf10:
    // 0x3caf10: 0xa1040007  sb          $a0, 0x7($t0)
    ctx->pc = 0x3caf10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 7), (uint8_t)GPR_U32(ctx, 4));
label_3caf14:
    // 0x3caf14: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3caf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3caf18:
    // 0x3caf18: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x3caf18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3caf1c:
    // 0x3caf1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3caf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3caf20:
    // 0x3caf20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3caf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3caf24:
    // 0x3caf24: 0x890a0007  lwl         $t2, 0x7($t0)
    ctx->pc = 0x3caf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_3caf28:
    // 0x3caf28: 0x990a0004  lwr         $t2, 0x4($t0)
    ctx->pc = 0x3caf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_3caf2c:
    // 0x3caf2c: 0xa84a0003  swl         $t2, 0x3($v0)
    ctx->pc = 0x3caf2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caf30:
    // 0x3caf30: 0xb84a0000  swr         $t2, 0x0($v0)
    ctx->pc = 0x3caf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caf34:
    // 0x3caf34: 0x8fa50208  lw          $a1, 0x208($sp)
    ctx->pc = 0x3caf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caf38:
    // 0x3caf38: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3caf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3caf3c:
    // 0x3caf3c: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x3caf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3caf40:
    // 0x3caf40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3caf40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3caf44:
    // 0x3caf44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3caf44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3caf48:
    // 0x3caf48: 0x90640003  lbu         $a0, 0x3($v1)
    ctx->pc = 0x3caf48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_3caf4c:
    // 0x3caf4c: 0xa104000b  sb          $a0, 0xB($t0)
    ctx->pc = 0x3caf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11), (uint8_t)GPR_U32(ctx, 4));
label_3caf50:
    // 0x3caf50: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3caf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3caf54:
    // 0x3caf54: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x3caf54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_3caf58:
    // 0x3caf58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3caf58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3caf5c:
    // 0x3caf5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3caf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3caf60:
    // 0x3caf60: 0x8906000b  lwl         $a2, 0xB($t0)
    ctx->pc = 0x3caf60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_3caf64:
    // 0x3caf64: 0x99060008  lwr         $a2, 0x8($t0)
    ctx->pc = 0x3caf64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_3caf68:
    // 0x3caf68: 0xa8460003  swl         $a2, 0x3($v0)
    ctx->pc = 0x3caf68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caf6c:
    // 0x3caf6c: 0xb8460000  swr         $a2, 0x0($v0)
    ctx->pc = 0x3caf6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3caf70:
    // 0x3caf70: 0x8fa30208  lw          $v1, 0x208($sp)
    ctx->pc = 0x3caf70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3caf74:
    // 0x3caf74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3caf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_3caf78:
    // 0x3caf78: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x3caf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_3caf7c:
    // 0x3caf7c: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_3caf80:
    if (ctx->pc == 0x3CAF80u) {
        ctx->pc = 0x3CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF7Cu;
        // 0x3caf80: 0xc7a40090  lwc1        $f4, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF84u;
        goto label_3caf84;
    }
    ctx->pc = 0x3CAF7Cu;
    {
        const bool branch_taken_0x3caf7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF7Cu;
        // 0x3caf80: 0xc7a40090  lwc1        $f4, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caf7c) {
            ctx->pc = 0x3CB004u;
            goto label_3cb004;
        }
    }
    ctx->pc = 0x3CAF84u;
label_3caf84:
    // 0x3caf84: 0x8fa4020c  lw          $a0, 0x20C($sp)
    ctx->pc = 0x3caf84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3caf88:
    // 0x3caf88: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x3caf88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3caf8c:
    // 0x3caf8c: 0x10a003e0  beqz        $a1, . + 4 + (0x3E0 << 2)
label_3caf90:
    if (ctx->pc == 0x3CAF90u) {
        ctx->pc = 0x3CAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF8Cu;
        // 0x3caf90: 0x8fa60204  lw          $a2, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAF94u;
        goto label_3caf94;
    }
    ctx->pc = 0x3CAF8Cu;
    {
        const bool branch_taken_0x3caf8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAF8Cu;
        // 0x3caf90: 0x8fa60204  lw          $a2, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caf8c) {
            ctx->pc = 0x3CBF10u;
            goto label_3cbf10;
        }
    }
    ctx->pc = 0x3CAF94u;
label_3caf94:
    // 0x3caf94: 0x8fa70234  lw          $a3, 0x234($sp)
    ctx->pc = 0x3caf94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_3caf98:
    // 0x3caf98: 0x8cc20028  lw          $v0, 0x28($a2)
    ctx->pc = 0x3caf98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_3caf9c:
    // 0x3caf9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x3caf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3cafa0:
    // 0x3cafa0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3cafa4:
    if (ctx->pc == 0x3CAFA4u) {
        ctx->pc = 0x3CAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFA0u;
        // 0x3cafa4: 0x8fa80204  lw          $t0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFA8u;
        goto label_3cafa8;
    }
    ctx->pc = 0x3CAFA0u;
    {
        const bool branch_taken_0x3cafa0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CAFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFA0u;
        // 0x3cafa4: 0x8fa80204  lw          $t0, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafa0) {
            ctx->pc = 0x3CAFB8u;
            goto label_3cafb8;
        }
    }
    ctx->pc = 0x3CAFA8u;
label_3cafa8:
    // 0x3cafa8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cafa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cafac:
    // 0x3cafac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cafacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cafb0:
    // 0x3cafb0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cafb4:
    if (ctx->pc == 0x3CAFB4u) {
        ctx->pc = 0x3CAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB0u;
        // 0x3cafb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFB8u;
        goto label_3cafb8;
    }
    ctx->pc = 0x3CAFB0u;
    {
        const bool branch_taken_0x3cafb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFB0u;
        // 0x3cafb4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafb0) {
            ctx->pc = 0x3CAFD4u;
            goto label_3cafd4;
        }
    }
    ctx->pc = 0x3CAFB8u;
label_3cafb8:
    // 0x3cafb8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3cafb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3cafbc:
    // 0x3cafbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cafbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cafc0:
    // 0x3cafc0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3cafc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3cafc4:
    // 0x3cafc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cafc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cafc8:
    // 0x3cafc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cafc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cafcc:
    // 0x3cafcc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cafccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cafd0:
    // 0x3cafd0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cafd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cafd4:
    // 0x3cafd4: 0xc50c0030  lwc1        $f12, 0x30($t0)
    ctx->pc = 0x3cafd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cafd8:
    // 0x3cafd8: 0xa0f809  jalr        $a1
label_3cafdc:
    if (ctx->pc == 0x3CAFDCu) {
        ctx->pc = 0x3CAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFD8u;
        // 0x3cafdc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFE0u;
        goto label_3cafe0;
    }
    ctx->pc = 0x3CAFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x3CAFE0u);
        ctx->pc = 0x3CAFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFD8u;
        // 0x3cafdc: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CAFD8u, 0x3CAFE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CAFE0u;
label_3cafe0:
    // 0x3cafe0: 0x144003cc  bnez        $v0, . + 4 + (0x3CC << 2)
label_3cafe4:
    if (ctx->pc == 0x3CAFE4u) {
        ctx->pc = 0x3CAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFE0u;
        // 0x3cafe4: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFE8u;
        goto label_3cafe8;
    }
    ctx->pc = 0x3CAFE0u;
    {
        const bool branch_taken_0x3cafe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFE0u;
        // 0x3cafe4: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cafe0) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CAFE8u;
label_3cafe8:
    // 0x3cafe8: 0x8faa0208  lw          $t2, 0x208($sp)
    ctx->pc = 0x3cafe8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cafec:
    // 0x3cafec: 0x8d43000c  lw          $v1, 0xC($t2)
    ctx->pc = 0x3cafecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_3caff0:
    // 0x3caff0: 0x100003cf  b           . + 4 + (0x3CF << 2)
label_3caff4:
    if (ctx->pc == 0x3CAFF4u) {
        ctx->pc = 0x3CAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFF0u;
        // 0x3caff4: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CAFF8u;
        goto label_3caff8;
    }
    ctx->pc = 0x3CAFF0u;
    {
        const bool branch_taken_0x3caff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFF0u;
        // 0x3caff4: 0xafa00238  sw          $zero, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caff0) {
            ctx->pc = 0x3CBF30u;
            goto label_3cbf30;
        }
    }
    ctx->pc = 0x3CAFF8u;
label_3caff8:
    // 0x3caff8: 0x4603c8c3  div.s       $f3, $f25, $f3
    ctx->pc = 0x3caff8u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[25], ctx->f[3]); }
label_3caffc:
    // 0x3caffc: 0x10000064  b           . + 4 + (0x64 << 2)
label_3cb000:
    if (ctx->pc == 0x3CB000u) {
        ctx->pc = 0x3CB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFFCu;
        // 0x3cb000: 0xc7a10084  lwc1        $f1, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB004u;
        goto label_3cb004;
    }
    ctx->pc = 0x3CAFFCu;
    {
        const bool branch_taken_0x3caffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CAFFCu;
        // 0x3cb000: 0xc7a10084  lwc1        $f1, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3caffc) {
            ctx->pc = 0x3CB190u;
            goto label_3cb190;
        }
    }
    ctx->pc = 0x3CB004u;
label_3cb004:
    // 0x3cb004: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x3cb004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb008:
    // 0x3cb008: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x3cb008u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb00c:
    // 0x3cb00c: 0x0  nop
    ctx->pc = 0x3cb00cu;
    // NOP
label_3cb010:
    // 0x3cb010: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3cb014:
    if (ctx->pc == 0x3CB014u) {
        ctx->pc = 0x3CB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB010u;
        // 0x3cb014: 0xc7a10094  lwc1        $f1, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB018u;
        goto label_3cb018;
    }
    ctx->pc = 0x3CB010u;
    {
        const bool branch_taken_0x3cb010 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB010u;
        // 0x3cb014: 0xc7a10094  lwc1        $f1, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb010) {
            ctx->pc = 0x3CB02Cu;
            goto label_3cb02c;
        }
    }
    ctx->pc = 0x3CB018u;
label_3cb018:
    // 0x3cb018: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x3cb018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb01c:
    // 0x3cb01c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3cb01cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb020:
    // 0x3cb020: 0x0  nop
    ctx->pc = 0x3cb020u;
    // NOP
label_3cb024:
    // 0x3cb024: 0x450103bb  bc1t        . + 4 + (0x3BB << 2)
label_3cb028:
    if (ctx->pc == 0x3CB028u) {
        ctx->pc = 0x3CB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB024u;
        // 0x3cb028: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB02Cu;
        goto label_3cb02c;
    }
    ctx->pc = 0x3CB024u;
    {
        const bool branch_taken_0x3cb024 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB024u;
        // 0x3cb028: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb024) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CB02Cu;
label_3cb02c:
    // 0x3cb02c: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x3cb02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb030:
    // 0x3cb030: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x3cb030u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb034:
    // 0x3cb034: 0x0  nop
    ctx->pc = 0x3cb034u;
    // NOP
label_3cb038:
    // 0x3cb038: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3cb03c:
    if (ctx->pc == 0x3CB03Cu) {
        ctx->pc = 0x3CB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB038u;
        // 0x3cb03c: 0xc7a1009c  lwc1        $f1, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB040u;
        goto label_3cb040;
    }
    ctx->pc = 0x3CB038u;
    {
        const bool branch_taken_0x3cb038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB038u;
        // 0x3cb03c: 0xc7a1009c  lwc1        $f1, 0x9C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb038) {
            ctx->pc = 0x3CB054u;
            goto label_3cb054;
        }
    }
    ctx->pc = 0x3CB040u;
label_3cb040:
    // 0x3cb040: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x3cb040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb044:
    // 0x3cb044: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3cb044u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb048:
    // 0x3cb048: 0x0  nop
    ctx->pc = 0x3cb048u;
    // NOP
label_3cb04c:
    // 0x3cb04c: 0x450103b1  bc1t        . + 4 + (0x3B1 << 2)
label_3cb050:
    if (ctx->pc == 0x3CB050u) {
        ctx->pc = 0x3CB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB04Cu;
        // 0x3cb050: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB054u;
        goto label_3cb054;
    }
    ctx->pc = 0x3CB04Cu;
    {
        const bool branch_taken_0x3cb04c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB04Cu;
        // 0x3cb050: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb04c) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CB054u;
label_3cb054:
    // 0x3cb054: 0x46022032  c.eq.s      $f4, $f2
    ctx->pc = 0x3cb054u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb058:
    // 0x3cb058: 0x0  nop
    ctx->pc = 0x3cb058u;
    // NOP
label_3cb05c:
    // 0x3cb05c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_3cb060:
    if (ctx->pc == 0x3CB060u) {
        ctx->pc = 0x3CB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB05Cu;
        // 0x3cb060: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB064u;
        goto label_3cb064;
    }
    ctx->pc = 0x3CB05Cu;
    {
        const bool branch_taken_0x3cb05c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB05Cu;
        // 0x3cb060: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb05c) {
            ctx->pc = 0x3CB078u;
            goto label_3cb078;
        }
    }
    ctx->pc = 0x3CB064u;
label_3cb064:
    // 0x3cb064: 0x46031032  c.eq.s      $f2, $f3
    ctx->pc = 0x3cb064u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb068:
    // 0x3cb068: 0x0  nop
    ctx->pc = 0x3cb068u;
    // NOP
label_3cb06c:
    // 0x3cb06c: 0x450103a9  bc1t        . + 4 + (0x3A9 << 2)
label_3cb070:
    if (ctx->pc == 0x3CB070u) {
        ctx->pc = 0x3CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB06Cu;
        // 0x3cb070: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB074u;
        goto label_3cb074;
    }
    ctx->pc = 0x3CB06Cu;
    {
        const bool branch_taken_0x3cb06c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB06Cu;
        // 0x3cb070: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb06c) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CB074u;
label_3cb074:
    // 0x3cb074: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x3cb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb078:
    // 0x3cb078: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x3cb078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb07c:
    // 0x3cb07c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x3cb07cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb080:
    // 0x3cb080: 0x0  nop
    ctx->pc = 0x3cb080u;
    // NOP
label_3cb084:
    // 0x3cb084: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3cb088:
    if (ctx->pc == 0x3CB088u) {
        ctx->pc = 0x3CB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB084u;
        // 0x3cb088: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB08Cu;
        goto label_3cb08c;
    }
    ctx->pc = 0x3CB084u;
    {
        const bool branch_taken_0x3cb084 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB084u;
        // 0x3cb088: 0xc7a000a4  lwc1        $f0, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb084) {
            ctx->pc = 0x3CB09Cu;
            goto label_3cb09c;
        }
    }
    ctx->pc = 0x3CB08Cu;
label_3cb08c:
    // 0x3cb08c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3cb08cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb090:
    // 0x3cb090: 0x0  nop
    ctx->pc = 0x3cb090u;
    // NOP
label_3cb094:
    // 0x3cb094: 0x4501039f  bc1t        . + 4 + (0x39F << 2)
label_3cb098:
    if (ctx->pc == 0x3CB098u) {
        ctx->pc = 0x3CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB094u;
        // 0x3cb098: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB09Cu;
        goto label_3cb09c;
    }
    ctx->pc = 0x3CB094u;
    {
        const bool branch_taken_0x3cb094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB094u;
        // 0x3cb098: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb094) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CB09Cu;
label_3cb09c:
    // 0x3cb09c: 0xc7a70018  lwc1        $f7, 0x18($sp)
    ctx->pc = 0x3cb09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cb0a0:
    // 0x3cb0a0: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x3cb0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb0a4:
    // 0x3cb0a4: 0xc7a6001c  lwc1        $f6, 0x1C($sp)
    ctx->pc = 0x3cb0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb0a8:
    // 0x3cb0a8: 0xc7a80010  lwc1        $f8, 0x10($sp)
    ctx->pc = 0x3cb0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3cb0ac:
    // 0x3cb0ac: 0x460439c1  sub.s       $f7, $f7, $f4
    ctx->pc = 0x3cb0acu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[4]);
label_3cb0b0:
    // 0x3cb0b0: 0xc7a50020  lwc1        $f5, 0x20($sp)
    ctx->pc = 0x3cb0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb0b4:
    // 0x3cb0b4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x3cb0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb0b8:
    // 0x3cb0b8: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x3cb0b8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
label_3cb0bc:
    // 0x3cb0bc: 0xe7a70060  swc1        $f7, 0x60($sp)
    ctx->pc = 0x3cb0bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_3cb0c0:
    // 0x3cb0c0: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x3cb0c0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
label_3cb0c4:
    // 0x3cb0c4: 0xe7a60064  swc1        $f6, 0x64($sp)
    ctx->pc = 0x3cb0c4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_3cb0c8:
    // 0x3cb0c8: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x3cb0c8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_3cb0cc:
    // 0x3cb0cc: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x3cb0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb0d0:
    // 0x3cb0d0: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3cb0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb0d4:
    // 0x3cb0d4: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3cb0d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_3cb0d8:
    // 0x3cb0d8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x3cb0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb0dc:
    // 0x3cb0dc: 0x46081081  sub.s       $f2, $f2, $f8
    ctx->pc = 0x3cb0dcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[8]);
label_3cb0e0:
    // 0x3cb0e0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3cb0e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_3cb0e4:
    // 0x3cb0e4: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x3cb0e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_3cb0e8:
    // 0x3cb0e8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x3cb0e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_3cb0ec:
    // 0x3cb0ec: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x3cb0ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_3cb0f0:
    // 0x3cb0f0: 0x460130c2  mul.s       $f3, $f6, $f1
    ctx->pc = 0x3cb0f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3cb0f4:
    // 0x3cb0f4: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x3cb0f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_3cb0f8:
    // 0x3cb0f8: 0x46023902  mul.s       $f4, $f7, $f2
    ctx->pc = 0x3cb0f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_3cb0fc:
    // 0x3cb0fc: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3cb0fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cb100:
    // 0x3cb100: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3cb100u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3cb104:
    // 0x3cb104: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x3cb104u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3cb108:
    // 0x3cb108: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x3cb108u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_3cb10c:
    // 0x3cb10c: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x3cb10cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_3cb110:
    // 0x3cb110: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x3cb110u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_3cb114:
    // 0x3cb114: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x3cb114u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3cb118:
    // 0x3cb118: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x3cb118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3cb11c:
    // 0x3cb11c: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x3cb11cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3cb120:
    // 0x3cb120: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x3cb120u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_3cb124:
    // 0x3cb124: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3cb124u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3cb128:
    // 0x3cb128: 0x8fb0023c  lw          $s0, 0x23C($sp)
    ctx->pc = 0x3cb128u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_3cb12c:
    // 0x3cb12c: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x3cb12cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_3cb130:
    // 0x3cb130: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x3cb130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb134:
    // 0x3cb134: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3cb134u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3cb138:
    // 0x3cb138: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x3cb138u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3cb13c:
    // 0x3cb13c: 0x46041d00  add.s       $f20, $f3, $f4
    ctx->pc = 0x3cb13cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_3cb140:
    // 0x3cb140: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_3cb144:
    if (ctx->pc == 0x3CB144u) {
        ctx->pc = 0x3CB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB140u;
        // 0x3cb144: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB148u;
        goto label_3cb148;
    }
    ctx->pc = 0x3CB140u;
    {
        const bool branch_taken_0x3cb140 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB140u;
        // 0x3cb144: 0x4601a502  mul.s       $f20, $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb140) {
            ctx->pc = 0x3CB158u;
            goto label_3cb158;
        }
    }
    ctx->pc = 0x3CB148u;
label_3cb148:
    // 0x3cb148: 0xc0f539e  jal         func_3D4E78
label_3cb14c:
    if (ctx->pc == 0x3CB14Cu) {
        ctx->pc = 0x3CB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB148u;
        // 0x3cb14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB150u;
        goto label_3cb150;
    }
    ctx->pc = 0x3CB148u;
    SET_GPR_U32(ctx, 31, 0x3CB150u);
    ctx->pc = 0x3CB14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB148u;
    // 0x3cb14c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E78u, 0x3CB148u, 0x3CB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB150u;
label_3cb150:
    // 0x3cb150: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x3cb150u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_3cb154:
    // 0x3cb154: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x3cb154u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3cb158:
    // 0x3cb158: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cb158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cb15c:
    // 0x3cb15c: 0x2442b1e0  addiu       $v0, $v0, -0x4E20
    ctx->pc = 0x3cb15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
label_3cb160:
    // 0x3cb160: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x3cb160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb164:
    // 0x3cb164: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3cb164u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb168:
    // 0x3cb168: 0x0  nop
    ctx->pc = 0x3cb168u;
    // NOP
label_3cb16c:
    // 0x3cb16c: 0x45010369  bc1t        . + 4 + (0x369 << 2)
label_3cb170:
    if (ctx->pc == 0x3CB170u) {
        ctx->pc = 0x3CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB16Cu;
        // 0x3cb170: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB174u;
        goto label_3cb174;
    }
    ctx->pc = 0x3CB16Cu;
    {
        const bool branch_taken_0x3cb16c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB16Cu;
        // 0x3cb170: 0x8fa70208  lw          $a3, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb16c) {
            ctx->pc = 0x3CBF14u;
            goto label_3cbf14;
        }
    }
    ctx->pc = 0x3CB174u;
label_3cb174:
    // 0x3cb174: 0x461400c4  c1          0x1400C4
    ctx->pc = 0x3cb174u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
label_3cb178:
    // 0x3cb178: 0x4603d034  c.lt.s      $f26, $f3
    ctx->pc = 0x3cb178u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb17c:
    // 0x3cb17c: 0x0  nop
    ctx->pc = 0x3cb17cu;
    // NOP
label_3cb180:
    // 0x3cb180: 0x4501ff9d  bc1t        . + 4 + (-0x63 << 2)
label_3cb184:
    if (ctx->pc == 0x3CB184u) {
        ctx->pc = 0x3CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB180u;
        // 0x3cb184: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB188u;
        goto label_3cb188;
    }
    ctx->pc = 0x3CB180u;
    {
        const bool branch_taken_0x3cb180 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB180u;
        // 0x3cb184: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb180) {
            ctx->pc = 0x3CAFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3caff8;
        }
    }
    ctx->pc = 0x3CB188u;
label_3cb188:
    // 0x3cb188: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x3cb188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb18c:
    // 0x3cb18c: 0x0  nop
    ctx->pc = 0x3cb18cu;
    // NOP
label_3cb190:
    // 0x3cb190: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x3cb190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb194:
    // 0x3cb194: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3cb194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3cb198:
    // 0x3cb198: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3cb198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3cb19c:
    // 0x3cb19c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3cb19cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3cb1a0:
    // 0x3cb1a0: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3cb1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_3cb1a4:
    // 0x3cb1a4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3cb1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_3cb1a8:
    // 0x3cb1a8: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3cb1a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_3cb1ac:
    // 0x3cb1ac: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x3cb1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb1b0:
    // 0x3cb1b0: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x3cb1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb1b4:
    // 0x3cb1b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3cb1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3cb1b8:
    // 0x3cb1b8: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x3cb1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb1bc:
    // 0x3cb1bc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3cb1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3cb1c0:
    // 0x3cb1c0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3cb1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_3cb1c4:
    // 0x3cb1c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3cb1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3cb1c8:
    // 0x3cb1c8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x3cb1c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_3cb1cc:
    // 0x3cb1cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cb1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cb1d0:
    // 0x3cb1d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3cb1d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3cb1d4:
    // 0x3cb1d4: 0xc0f28ec  jal         func_3CA3B0
label_3cb1d8:
    if (ctx->pc == 0x3CB1D8u) {
        ctx->pc = 0x3CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1D4u;
        // 0x3cb1d8: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1DCu;
        goto label_3cb1dc;
    }
    ctx->pc = 0x3CB1D4u;
    SET_GPR_U32(ctx, 31, 0x3CB1DCu);
    ctx->pc = 0x3CB1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1D4u;
    // 0x3cb1d8: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA3B0u, 0x3CB1D4u, 0x3CB1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1DCu;
label_3cb1dc:
    // 0x3cb1dc: 0xc0f5392  jal         func_3D4E48
label_3cb1e0:
    if (ctx->pc == 0x3CB1E0u) {
        ctx->pc = 0x3CB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1DCu;
        // 0x3cb1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1E4u;
        goto label_3cb1e4;
    }
    ctx->pc = 0x3CB1DCu;
    SET_GPR_U32(ctx, 31, 0x3CB1E4u);
    ctx->pc = 0x3CB1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB1DCu;
    // 0x3cb1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CB1DCu, 0x3CB1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB1E4u;
label_3cb1e4:
    // 0x3cb1e4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3cb1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3cb1e8:
    // 0x3cb1e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_3cb1ec:
    if (ctx->pc == 0x3CB1ECu) {
        ctx->pc = 0x3CB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E8u;
        // 0x3cb1ec: 0x8fa30208  lw          $v1, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1F0u;
        goto label_3cb1f0;
    }
    ctx->pc = 0x3CB1E8u;
    {
        const bool branch_taken_0x3cb1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1E8u;
        // 0x3cb1ec: 0x8fa30208  lw          $v1, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1e8) {
            ctx->pc = 0x3CB208u;
            goto label_3cb208;
        }
    }
    ctx->pc = 0x3CB1F0u;
label_3cb1f0:
    // 0x3cb1f0: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3cb1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3cb1f4:
    // 0x3cb1f4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_3cb1f8:
    if (ctx->pc == 0x3CB1F8u) {
        ctx->pc = 0x3CB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1F4u;
        // 0x3cb1f8: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB1FCu;
        goto label_3cb1fc;
    }
    ctx->pc = 0x3CB1F4u;
    {
        const bool branch_taken_0x3cb1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB1F4u;
        // 0x3cb1f8: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb1f4) {
            ctx->pc = 0x3CB258u;
            goto label_3cb258;
        }
    }
    ctx->pc = 0x3CB1FCu;
label_3cb1fc:
    // 0x3cb1fc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3cb1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3cb200:
    // 0x3cb200: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_3cb204:
    if (ctx->pc == 0x3CB204u) {
        ctx->pc = 0x3CB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB200u;
        // 0x3cb204: 0xc7a40084  lwc1        $f4, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB208u;
        goto label_3cb208;
    }
    ctx->pc = 0x3CB200u;
    {
        const bool branch_taken_0x3cb200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB200u;
        // 0x3cb204: 0xc7a40084  lwc1        $f4, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb200) {
            ctx->pc = 0x3CB25Cu;
            goto label_3cb25c;
        }
    }
    ctx->pc = 0x3CB208u;
label_3cb208:
    // 0x3cb208: 0x6ba40087  ldl         $a0, 0x87($sp)
    ctx->pc = 0x3cb208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3cb20c:
    // 0x3cb20c: 0x6fa40080  ldr         $a0, 0x80($sp)
    ctx->pc = 0x3cb20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3cb210:
    // 0x3cb210: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x3cb210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_3cb214:
    // 0x3cb214: 0xb3a4004f  sdl         $a0, 0x4F($sp)
    ctx->pc = 0x3cb214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb218:
    // 0x3cb218: 0xb7a40048  sdr         $a0, 0x48($sp)
    ctx->pc = 0x3cb218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb21c:
    // 0x3cb21c: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x3cb21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
label_3cb220:
    // 0x3cb220: 0x6ba8004f  ldl         $t0, 0x4F($sp)
    ctx->pc = 0x3cb220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3cb224:
    // 0x3cb224: 0x6fa80048  ldr         $t0, 0x48($sp)
    ctx->pc = 0x3cb224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3cb228:
    // 0x3cb228: 0x8faa0050  lw          $t2, 0x50($sp)
    ctx->pc = 0x3cb228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cb22c:
    // 0x3cb22c: 0xb3a80043  sdl         $t0, 0x43($sp)
    ctx->pc = 0x3cb22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb230:
    // 0x3cb230: 0xb7a8003c  sdr         $t0, 0x3C($sp)
    ctx->pc = 0x3cb230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb234:
    // 0x3cb234: 0xafaa0044  sw          $t2, 0x44($sp)
    ctx->pc = 0x3cb234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 10));
label_3cb238:
    // 0x3cb238: 0x6ba30043  ldl         $v1, 0x43($sp)
    ctx->pc = 0x3cb238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3cb23c:
    // 0x3cb23c: 0x6fa3003c  ldr         $v1, 0x3C($sp)
    ctx->pc = 0x3cb23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3cb240:
    // 0x3cb240: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x3cb240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb244:
    // 0x3cb244: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x3cb244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb248:
    // 0x3cb248: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x3cb248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb24c:
    // 0x3cb24c: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x3cb24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
label_3cb250:
    // 0x3cb250: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x3cb250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb254:
    // 0x3cb254: 0x0  nop
    ctx->pc = 0x3cb254u;
    // NOP
label_3cb258:
    // 0x3cb258: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x3cb258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb25c:
    // 0x3cb25c: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x3cb25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb260:
    // 0x3cb260: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x3cb260u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
label_3cb264:
    // 0x3cb264: 0x46182102  mul.s       $f4, $f4, $f24
    ctx->pc = 0x3cb264u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[24]);
label_3cb268:
    // 0x3cb268: 0x46182942  mul.s       $f5, $f5, $f24
    ctx->pc = 0x3cb268u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
label_3cb26c:
    // 0x3cb26c: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x3cb26cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3cb270:
    // 0x3cb270: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x3cb270u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3cb274:
    // 0x3cb274: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x3cb274u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3cb278:
    // 0x3cb278: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3cb278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb27c:
    // 0x3cb27c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x3cb27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb280:
    // 0x3cb280: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cb280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cb284:
    // 0x3cb284: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x3cb284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb288:
    // 0x3cb288: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3cb288u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3cb28c:
    // 0x3cb28c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3cb28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3cb290:
    // 0x3cb290: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3cb290u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3cb294:
    // 0x3cb294: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3cb294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3cb298:
    // 0x3cb298: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3cb298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3cb29c:
    // 0x3cb29c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x3cb29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb2a0:
    // 0x3cb2a0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x3cb2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb2a4:
    // 0x3cb2a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cb2a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cb2a8:
    // 0x3cb2a8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x3cb2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb2ac:
    // 0x3cb2ac: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3cb2acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3cb2b0:
    // 0x3cb2b0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3cb2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3cb2b4:
    // 0x3cb2b4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x3cb2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3cb2b8:
    // 0x3cb2b8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x3cb2b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3cb2bc:
    // 0x3cb2bc: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x3cb2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3cb2c0:
    // 0x3cb2c0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x3cb2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb2c4:
    // 0x3cb2c4: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x3cb2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb2c8:
    // 0x3cb2c8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cb2c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cb2cc:
    // 0x3cb2cc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x3cb2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb2d0:
    // 0x3cb2d0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3cb2d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_3cb2d4:
    // 0x3cb2d4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x3cb2d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_3cb2d8:
    // 0x3cb2d8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x3cb2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3cb2dc:
    // 0x3cb2dc: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x3cb2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3cb2e0:
    // 0x3cb2e0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3cb2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3cb2e4:
    // 0x3cb2e4: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x3cb2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb2e8:
    // 0x3cb2e8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x3cb2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb2ec:
    // 0x3cb2ec: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x3cb2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb2f0:
    // 0x3cb2f0: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3cb2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb2f4:
    // 0x3cb2f4: 0x460518c1  sub.s       $f3, $f3, $f5
    ctx->pc = 0x3cb2f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_3cb2f8:
    // 0x3cb2f8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x3cb2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb2fc:
    // 0x3cb2fc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x3cb2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb300:
    // 0x3cb300: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x3cb300u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_3cb304:
    // 0x3cb304: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x3cb304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_3cb308:
    // 0x3cb308: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x3cb308u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_3cb30c:
    // 0x3cb30c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x3cb30cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3cb310:
    // 0x3cb310: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3cb310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3cb314:
    // 0x3cb314: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x3cb314u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb318:
    // 0x3cb318: 0x0  nop
    ctx->pc = 0x3cb318u;
    // NOP
label_3cb31c:
    // 0x3cb31c: 0x45000032  bc1f        . + 4 + (0x32 << 2)
label_3cb320:
    if (ctx->pc == 0x3CB320u) {
        ctx->pc = 0x3CB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB31Cu;
        // 0x3cb320: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB324u;
        goto label_3cb324;
    }
    ctx->pc = 0x3CB31Cu;
    {
        const bool branch_taken_0x3cb31c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB31Cu;
        // 0x3cb320: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb31c) {
            ctx->pc = 0x3CB3E8u;
            goto label_3cb3e8;
        }
    }
    ctx->pc = 0x3CB324u;
label_3cb324:
    // 0x3cb324: 0x6ba700a7  ldl         $a3, 0xA7($sp)
    ctx->pc = 0x3cb324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3cb328:
    // 0x3cb328: 0x6fa700a0  ldr         $a3, 0xA0($sp)
    ctx->pc = 0x3cb328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3cb32c:
    // 0x3cb32c: 0xb3a70127  sdl         $a3, 0x127($sp)
    ctx->pc = 0x3cb32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb330:
    // 0x3cb330: 0xb7a70120  sdr         $a3, 0x120($sp)
    ctx->pc = 0x3cb330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb334:
    // 0x3cb334: 0x6ba2009f  ldl         $v0, 0x9F($sp)
    ctx->pc = 0x3cb334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3cb338:
    // 0x3cb338: 0x6fa20098  ldr         $v0, 0x98($sp)
    ctx->pc = 0x3cb338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3cb33c:
    // 0x3cb33c: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x3cb33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb340:
    // 0x3cb340: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x3cb340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb344:
    // 0x3cb344: 0x6ba60127  ldl         $a2, 0x127($sp)
    ctx->pc = 0x3cb344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3cb348:
    // 0x3cb348: 0x6fa60120  ldr         $a2, 0x120($sp)
    ctx->pc = 0x3cb348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3cb34c:
    // 0x3cb34c: 0xb3a6009f  sdl         $a2, 0x9F($sp)
    ctx->pc = 0x3cb34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb350:
    // 0x3cb350: 0xb7a60098  sdr         $a2, 0x98($sp)
    ctx->pc = 0x3cb350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb354:
    // 0x3cb354: 0x6bb0001f  ldl         $s0, 0x1F($sp)
    ctx->pc = 0x3cb354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cb358:
    // 0x3cb358: 0x6fb00018  ldr         $s0, 0x18($sp)
    ctx->pc = 0x3cb358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cb35c:
    // 0x3cb35c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3cb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3cb360:
    // 0x3cb360: 0xb3b00117  sdl         $s0, 0x117($sp)
    ctx->pc = 0x3cb360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb364:
    // 0x3cb364: 0xb7b00110  sdr         $s0, 0x110($sp)
    ctx->pc = 0x3cb364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb368:
    // 0x3cb368: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x3cb368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_3cb36c:
    // 0x3cb36c: 0x6ba50013  ldl         $a1, 0x13($sp)
    ctx->pc = 0x3cb36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3cb370:
    // 0x3cb370: 0x6fa5000c  ldr         $a1, 0xC($sp)
    ctx->pc = 0x3cb370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3cb374:
    // 0x3cb374: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x3cb374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3cb378:
    // 0x3cb378: 0xb3a5001f  sdl         $a1, 0x1F($sp)
    ctx->pc = 0x3cb378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb37c:
    // 0x3cb37c: 0xb7a50018  sdr         $a1, 0x18($sp)
    ctx->pc = 0x3cb37cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb380:
    // 0x3cb380: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x3cb380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_3cb384:
    // 0x3cb384: 0x6baa0117  ldl         $t2, 0x117($sp)
    ctx->pc = 0x3cb384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_3cb388:
    // 0x3cb388: 0x6faa0110  ldr         $t2, 0x110($sp)
    ctx->pc = 0x3cb388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_3cb38c:
    // 0x3cb38c: 0x8fb00118  lw          $s0, 0x118($sp)
    ctx->pc = 0x3cb38cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3cb390:
    // 0x3cb390: 0xb3aa0013  sdl         $t2, 0x13($sp)
    ctx->pc = 0x3cb390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb394:
    // 0x3cb394: 0xb7aa000c  sdr         $t2, 0xC($sp)
    ctx->pc = 0x3cb394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb398:
    // 0x3cb398: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x3cb398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_3cb39c:
    // 0x3cb39c: 0x6ba4004f  ldl         $a0, 0x4F($sp)
    ctx->pc = 0x3cb39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_3cb3a0:
    // 0x3cb3a0: 0x6fa40048  ldr         $a0, 0x48($sp)
    ctx->pc = 0x3cb3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_3cb3a4:
    // 0x3cb3a4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3cb3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3cb3a8:
    // 0x3cb3a8: 0xb3a40117  sdl         $a0, 0x117($sp)
    ctx->pc = 0x3cb3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3ac:
    // 0x3cb3ac: 0xb7a40110  sdr         $a0, 0x110($sp)
    ctx->pc = 0x3cb3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3b0:
    // 0x3cb3b0: 0xafa50118  sw          $a1, 0x118($sp)
    ctx->pc = 0x3cb3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 5));
label_3cb3b4:
    // 0x3cb3b4: 0x6ba80043  ldl         $t0, 0x43($sp)
    ctx->pc = 0x3cb3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3cb3b8:
    // 0x3cb3b8: 0x6fa8003c  ldr         $t0, 0x3C($sp)
    ctx->pc = 0x3cb3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_3cb3bc:
    // 0x3cb3bc: 0x8faa0044  lw          $t2, 0x44($sp)
    ctx->pc = 0x3cb3bcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3cb3c0:
    // 0x3cb3c0: 0xb3a8004f  sdl         $t0, 0x4F($sp)
    ctx->pc = 0x3cb3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3c4:
    // 0x3cb3c4: 0xb7a80048  sdr         $t0, 0x48($sp)
    ctx->pc = 0x3cb3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3c8:
    // 0x3cb3c8: 0xafaa0050  sw          $t2, 0x50($sp)
    ctx->pc = 0x3cb3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 10));
label_3cb3cc:
    // 0x3cb3cc: 0x6ba30117  ldl         $v1, 0x117($sp)
    ctx->pc = 0x3cb3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_3cb3d0:
    // 0x3cb3d0: 0x6fa30110  ldr         $v1, 0x110($sp)
    ctx->pc = 0x3cb3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_3cb3d4:
    // 0x3cb3d4: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x3cb3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_3cb3d8:
    // 0x3cb3d8: 0xb3a30043  sdl         $v1, 0x43($sp)
    ctx->pc = 0x3cb3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3dc:
    // 0x3cb3dc: 0xb7a3003c  sdr         $v1, 0x3C($sp)
    ctx->pc = 0x3cb3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb3e0:
    // 0x3cb3e0: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x3cb3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_3cb3e4:
    // 0x3cb3e4: 0x8fa4021c  lw          $a0, 0x21C($sp)
    ctx->pc = 0x3cb3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cb3e8:
    // 0x3cb3e8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3cb3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3cb3ec:
    // 0x3cb3ec: 0xc0f1f8a  jal         func_3C7E28
label_3cb3f0:
    if (ctx->pc == 0x3CB3F0u) {
        ctx->pc = 0x3CB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB3ECu;
        // 0x3cb3f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB3F4u;
        goto label_3cb3f4;
    }
    ctx->pc = 0x3CB3ECu;
    SET_GPR_U32(ctx, 31, 0x3CB3F4u);
    ctx->pc = 0x3CB3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB3ECu;
    // 0x3cb3f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7E28u, 0x3CB3ECu, 0x3CB3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB3F4u;
label_3cb3f4:
    // 0x3cb3f4: 0x8fa7021c  lw          $a3, 0x21C($sp)
    ctx->pc = 0x3cb3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cb3f8:
    // 0x3cb3f8: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x3cb3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_3cb3fc:
    // 0x3cb3fc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3cb3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3cb400:
    // 0x3cb400: 0x481018  mult        $v0, $v0, $t0
    ctx->pc = 0x3cb400u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cb404:
    // 0x3cb404: 0x24883  sra         $t1, $v0, 2
    ctx->pc = 0x3cb404u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 2));
label_3cb408:
    // 0x3cb408: 0x112002c1  beqz        $t1, . + 4 + (0x2C1 << 2)
label_3cb40c:
    if (ctx->pc == 0x3CB40Cu) {
        ctx->pc = 0x3CB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB408u;
        // 0x3cb40c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB410u;
        goto label_3cb410;
    }
    ctx->pc = 0x3CB408u;
    {
        const bool branch_taken_0x3cb408 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB408u;
        // 0x3cb40c: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb408) {
            ctx->pc = 0x3CBF10u;
            goto label_3cbf10;
        }
    }
    ctx->pc = 0x3CB410u;
label_3cb410:
    // 0x3cb410: 0x7fa90270  sq          $t1, 0x270($sp)
    ctx->pc = 0x3cb410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
label_3cb414:
    // 0x3cb414: 0x7fac0280  sq          $t4, 0x280($sp)
    ctx->pc = 0x3cb414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 12));
label_3cb418:
    // 0x3cb418: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x3cb418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3cb41c:
    // 0x3cb41c: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3cb41cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3cb420:
    // 0x3cb420: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3cb420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cb424:
    // 0x3cb424: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x3cb424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_3cb428:
    // 0x3cb428: 0xc0ef504  jal         func_3BD410
label_3cb42c:
    if (ctx->pc == 0x3CB42Cu) {
        ctx->pc = 0x3CB42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB428u;
        // 0x3cb42c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB430u;
        goto label_3cb430;
    }
    ctx->pc = 0x3CB428u;
    SET_GPR_U32(ctx, 31, 0x3CB430u);
    ctx->pc = 0x3CB42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB428u;
    // 0x3cb42c: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BD410u, 0x3CB428u, 0x3CB430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB430u;
label_3cb430:
    // 0x3cb430: 0x7ba90270  lq          $t1, 0x270($sp)
    ctx->pc = 0x3cb430u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_3cb434:
    // 0x3cb434: 0x11200046  beqz        $t1, . + 4 + (0x46 << 2)
label_3cb438:
    if (ctx->pc == 0x3CB438u) {
        ctx->pc = 0x3CB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB434u;
        // 0x3cb438: 0x7bac0280  lq          $t4, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB43Cu;
        goto label_3cb43c;
    }
    ctx->pc = 0x3CB434u;
    {
        const bool branch_taken_0x3cb434 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB434u;
        // 0x3cb438: 0x7bac0280  lq          $t4, 0x280($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb434) {
            ctx->pc = 0x3CB550u;
            goto label_3cb550;
        }
    }
    ctx->pc = 0x3CB43Cu;
label_3cb43c:
    // 0x3cb43c: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x3cb43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cb440:
    // 0x3cb440: 0x8fa40224  lw          $a0, 0x224($sp)
    ctx->pc = 0x3cb440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cb444:
    // 0x3cb444: 0x0  nop
    ctx->pc = 0x3cb444u;
    // NOP
label_3cb448:
    // 0x3cb448: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x3cb448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb44c:
    // 0x3cb44c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3cb44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb450:
    // 0x3cb450: 0xc7a60130  lwc1        $f6, 0x130($sp)
    ctx->pc = 0x3cb450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb454:
    // 0x3cb454: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x3cb454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb458:
    // 0x3cb458: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3cb458u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3cb45c:
    // 0x3cb45c: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3cb45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb460:
    // 0x3cb460: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3cb460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3cb464:
    // 0x3cb464: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x3cb464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb468:
    // 0x3cb468: 0xc7a50160  lwc1        $f5, 0x160($sp)
    ctx->pc = 0x3cb468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb46c:
    // 0x3cb46c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3cb46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3cb470:
    // 0x3cb470: 0xc7a20134  lwc1        $f2, 0x134($sp)
    ctx->pc = 0x3cb470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb474:
    // 0x3cb474: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x3cb474u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_3cb478:
    // 0x3cb478: 0xc7a70144  lwc1        $f7, 0x144($sp)
    ctx->pc = 0x3cb478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cb47c:
    // 0x3cb47c: 0xc7a80154  lwc1        $f8, 0x154($sp)
    ctx->pc = 0x3cb47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3cb480:
    // 0x3cb480: 0xc7ad0164  lwc1        $f13, 0x164($sp)
    ctx->pc = 0x3cb480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3cb484:
    // 0x3cb484: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x3cb484u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_3cb488:
    // 0x3cb488: 0xc7a40138  lwc1        $f4, 0x138($sp)
    ctx->pc = 0x3cb488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb48c:
    // 0x3cb48c: 0xc7a90148  lwc1        $f9, 0x148($sp)
    ctx->pc = 0x3cb48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3cb490:
    // 0x3cb490: 0xc7aa0158  lwc1        $f10, 0x158($sp)
    ctx->pc = 0x3cb490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3cb494:
    // 0x3cb494: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x3cb494u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_3cb498:
    // 0x3cb498: 0xc7ae0168  lwc1        $f14, 0x168($sp)
    ctx->pc = 0x3cb498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3cb49c:
    // 0x3cb49c: 0xc7a5013c  lwc1        $f5, 0x13C($sp)
    ctx->pc = 0x3cb49cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb4a0:
    // 0x3cb4a0: 0xc7ac014c  lwc1        $f12, 0x14C($sp)
    ctx->pc = 0x3cb4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cb4a4:
    // 0x3cb4a4: 0xe7a60170  swc1        $f6, 0x170($sp)
    ctx->pc = 0x3cb4a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_3cb4a8:
    // 0x3cb4a8: 0xc7ab015c  lwc1        $f11, 0x15C($sp)
    ctx->pc = 0x3cb4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3cb4ac:
    // 0x3cb4ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb4b0:
    // 0x3cb4b0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3cb4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb4b4:
    // 0x3cb4b4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cb4b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cb4b8:
    // 0x3cb4b8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3cb4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb4bc:
    // 0x3cb4bc: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x3cb4bcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_3cb4c0:
    // 0x3cb4c0: 0xc7af016c  lwc1        $f15, 0x16C($sp)
    ctx->pc = 0x3cb4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3cb4c4:
    // 0x3cb4c4: 0x46034202  mul.s       $f8, $f8, $f3
    ctx->pc = 0x3cb4c4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_3cb4c8:
    // 0x3cb4c8: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x3cb4c8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
label_3cb4cc:
    // 0x3cb4cc: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x3cb4ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_3cb4d0:
    // 0x3cb4d0: 0x460d1080  add.s       $f2, $f2, $f13
    ctx->pc = 0x3cb4d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
label_3cb4d4:
    // 0x3cb4d4: 0xe7a20174  swc1        $f2, 0x174($sp)
    ctx->pc = 0x3cb4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_3cb4d8:
    // 0x3cb4d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb4dc:
    // 0x3cb4dc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3cb4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb4e0:
    // 0x3cb4e0: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x3cb4e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3cb4e4:
    // 0x3cb4e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3cb4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb4e8:
    // 0x3cb4e8: 0x46024a42  mul.s       $f9, $f9, $f2
    ctx->pc = 0x3cb4e8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_3cb4ec:
    // 0x3cb4ec: 0x46015282  mul.s       $f10, $f10, $f1
    ctx->pc = 0x3cb4ecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
label_3cb4f0:
    // 0x3cb4f0: 0x46092100  add.s       $f4, $f4, $f9
    ctx->pc = 0x3cb4f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[9]);
label_3cb4f4:
    // 0x3cb4f4: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x3cb4f4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
label_3cb4f8:
    // 0x3cb4f8: 0x460e2100  add.s       $f4, $f4, $f14
    ctx->pc = 0x3cb4f8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[14]);
label_3cb4fc:
    // 0x3cb4fc: 0xe7a40178  swc1        $f4, 0x178($sp)
    ctx->pc = 0x3cb4fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_3cb500:
    // 0x3cb500: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb504:
    // 0x3cb504: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3cb504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb508:
    // 0x3cb508: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3cb508u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cb50c:
    // 0x3cb50c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3cb50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb510:
    // 0x3cb510: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x3cb510u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_3cb514:
    // 0x3cb514: 0x46015ac2  mul.s       $f11, $f11, $f1
    ctx->pc = 0x3cb514u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
label_3cb518:
    // 0x3cb518: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x3cb518u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
label_3cb51c:
    // 0x3cb51c: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x3cb51cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
label_3cb520:
    // 0x3cb520: 0x460f2940  add.s       $f5, $f5, $f15
    ctx->pc = 0x3cb520u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[15]);
label_3cb524:
    // 0x3cb524: 0xe7a5017c  swc1        $f5, 0x17C($sp)
    ctx->pc = 0x3cb524u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_3cb528:
    // 0x3cb528: 0xe4860000  swc1        $f6, 0x0($a0)
    ctx->pc = 0x3cb528u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_3cb52c:
    // 0x3cb52c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x3cb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb530:
    // 0x3cb530: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3cb530u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cb534:
    // 0x3cb534: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x3cb534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_3cb538:
    // 0x3cb538: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3cb538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cb53c:
    // 0x3cb53c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x3cb53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_3cb540:
    // 0x3cb540: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x3cb540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb544:
    // 0x3cb544: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x3cb544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_3cb548:
    // 0x3cb548: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_3cb54c:
    if (ctx->pc == 0x3CB54Cu) {
        ctx->pc = 0x3CB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB548u;
        // 0x3cb54c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB550u;
        goto label_3cb550;
    }
    ctx->pc = 0x3CB548u;
    {
        const bool branch_taken_0x3cb548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB548u;
        // 0x3cb54c: 0x2484000c  addiu       $a0, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb548) {
            ctx->pc = 0x3CB448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb448;
        }
    }
    ctx->pc = 0x3CB550u;
label_3cb550:
    // 0x3cb550: 0x112000e0  beqz        $t1, . + 4 + (0xE0 << 2)
label_3cb554:
    if (ctx->pc == 0x3CB554u) {
        ctx->pc = 0x3CB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB550u;
        // 0x3cb554: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB558u;
        goto label_3cb558;
    }
    ctx->pc = 0x3CB550u;
    {
        const bool branch_taken_0x3cb550 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB550u;
        // 0x3cb554: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb550) {
            ctx->pc = 0x3CB8D4u;
            goto label_3cb8d4;
        }
    }
    ctx->pc = 0x3CB558u;
label_3cb558:
    // 0x3cb558: 0xc78e8048  lwc1        $f14, -0x7FB8($gp)
    ctx->pc = 0x3cb558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3cb55c:
    // 0x3cb55c: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x3cb55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cb560:
    // 0x3cb560: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x3cb560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3cb564:
    // 0x3cb564: 0x3c0e0061  lui         $t6, 0x61
    ctx->pc = 0x3cb564u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)97 << 16));
label_3cb568:
    // 0x3cb568: 0x27ad0190  addiu       $t5, $sp, 0x190
    ctx->pc = 0x3cb568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3cb56c:
    // 0x3cb56c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3cb56cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb570:
    // 0x3cb570: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x3cb570u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3cb574:
    // 0x3cb574: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x3cb574u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3cb578:
    // 0x3cb578: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x3cb578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cb57c:
    // 0x3cb57c: 0x0  nop
    ctx->pc = 0x3cb57cu;
    // NOP
label_3cb580:
    // 0x3cb580: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3cb580u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb584:
    // 0x3cb584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cb584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb588:
    // 0x3cb588: 0xc4080  sll         $t0, $t4, 2
    ctx->pc = 0x3cb588u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_3cb58c:
    // 0x3cb58c: 0x600013  mtlo        $v1
    ctx->pc = 0x3cb58cu;
    ctx->lo = GPR_U64(ctx, 3);
label_3cb590:
    // 0x3cb590: 0x258b0001  addiu       $t3, $t4, 0x1
    ctx->pc = 0x3cb590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cb594:
    // 0x3cb594: 0x8fa3021c  lw          $v1, 0x21C($sp)
    ctx->pc = 0x3cb594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cb598:
    // 0x3cb598: 0x718f1000  madd        $v0, $t4, $t7
    ctx->pc = 0x3cb598u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cb59c:
    // 0x3cb59c: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3cb59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3cb5a0:
    // 0x3cb5a0: 0x600013  mtlo        $v1
    ctx->pc = 0x3cb5a0u;
    ctx->lo = GPR_U64(ctx, 3);
label_3cb5a4:
    // 0x3cb5a4: 0x71872800  madd        $a1, $t4, $a3
    ctx->pc = 0x3cb5a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3cb5a8:
    // 0x3cb5a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3cb5a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cb5ac:
    // 0x3cb5ac: 0x0  nop
    ctx->pc = 0x3cb5acu;
    // NOP
label_3cb5b0:
    // 0x3cb5b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb5b4:
    // 0x3cb5b4: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x3cb5b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb5b8:
    // 0x3cb5b8: 0x0  nop
    ctx->pc = 0x3cb5b8u;
    // NOP
label_3cb5bc:
    // 0x3cb5bc: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_3cb5c0:
    if (ctx->pc == 0x3CB5C0u) {
        ctx->pc = 0x3CB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5BCu;
        // 0x3cb5c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB5C4u;
        goto label_3cb5c4;
    }
    ctx->pc = 0x3CB5BCu;
    {
        const bool branch_taken_0x3cb5bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB5BCu;
        // 0x3cb5c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb5bc) {
            ctx->pc = 0x3CB770u;
            goto label_3cb770;
        }
    }
    ctx->pc = 0x3CB5C4u;
label_3cb5c4:
    // 0x3cb5c4: 0x25c29b40  addiu       $v0, $t6, -0x64C0
    ctx->pc = 0x3cb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294941504));
label_3cb5c8:
    // 0x3cb5c8: 0x88460003  lwl         $a2, 0x3($v0)
    ctx->pc = 0x3cb5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
label_3cb5cc:
    // 0x3cb5cc: 0x98460000  lwr         $a2, 0x0($v0)
    ctx->pc = 0x3cb5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
label_3cb5d0:
    // 0x3cb5d0: 0xaba60193  swl         $a2, 0x193($sp)
    ctx->pc = 0x3cb5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 403); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cb5d4:
    // 0x3cb5d4: 0xbba60190  swr         $a2, 0x190($sp)
    ctx->pc = 0x3cb5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 400); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cb5d8:
    // 0x3cb5d8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x3cb5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cb5dc:
    // 0x3cb5dc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x3cb5dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3cb5e0:
    // 0x3cb5e0: 0x1a41821  addu        $v1, $t5, $a0
    ctx->pc = 0x3cb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
label_3cb5e4:
    // 0x3cb5e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3cb5e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3cb5e8:
    // 0x3cb5e8: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x3cb5e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3cb5ec:
    // 0x3cb5ec: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x3cb5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_3cb5f0:
    // 0x3cb5f0: 0x873018  mult        $a2, $a0, $a3
    ctx->pc = 0x3cb5f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3cb5f4:
    // 0x3cb5f4: 0xc4670000  lwc1        $f7, 0x0($v1)
    ctx->pc = 0x3cb5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cb5f8:
    // 0x3cb5f8: 0xdd1021  addu        $v0, $a2, $sp
    ctx->pc = 0x3cb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_3cb5fc:
    // 0x3cb5fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cb5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb600:
    // 0x3cb600: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x3cb600u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_3cb604:
    // 0x3cb604: 0xe7a701b0  swc1        $f7, 0x1B0($sp)
    ctx->pc = 0x3cb604u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_3cb608:
    // 0x3cb608: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3cb608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb60c:
    // 0x3cb60c: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x3cb60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb610:
    // 0x3cb610: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3cb610u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3cb614:
    // 0x3cb614: 0xe7a601b4  swc1        $f6, 0x1B4($sp)
    ctx->pc = 0x3cb614u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_3cb618:
    // 0x3cb618: 0xc4650008  lwc1        $f5, 0x8($v1)
    ctx->pc = 0x3cb618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb61c:
    // 0x3cb61c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3cb61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb620:
    // 0x3cb620: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3cb620u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3cb624:
    // 0x3cb624: 0xe7a501b8  swc1        $f5, 0x1B8($sp)
    ctx->pc = 0x3cb624u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_3cb628:
    // 0x3cb628: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x3cb628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb62c:
    // 0x3cb62c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cb62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb630:
    // 0x3cb630: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3cb630u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3cb634:
    // 0x3cb634: 0xe7a301a0  swc1        $f3, 0x1A0($sp)
    ctx->pc = 0x3cb634u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_3cb638:
    // 0x3cb638: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3cb638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb63c:
    // 0x3cb63c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x3cb63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb640:
    // 0x3cb640: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb644:
    // 0x3cb644: 0xe7a101a4  swc1        $f1, 0x1A4($sp)
    ctx->pc = 0x3cb644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_3cb648:
    // 0x3cb648: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3cb648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb64c:
    // 0x3cb64c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3cb64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb650:
    // 0x3cb650: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3cb650u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3cb654:
    // 0x3cb654: 0xe7a201a8  swc1        $f2, 0x1A8($sp)
    ctx->pc = 0x3cb654u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_3cb658:
    // 0x3cb658: 0x460338c2  mul.s       $f3, $f7, $f3
    ctx->pc = 0x3cb658u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_3cb65c:
    // 0x3cb65c: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x3cb65cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_3cb660:
    // 0x3cb660: 0x46073802  mul.s       $f0, $f7, $f7
    ctx->pc = 0x3cb660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[7]);
label_3cb664:
    // 0x3cb664: 0x46063102  mul.s       $f4, $f6, $f6
    ctx->pc = 0x3cb664u;
    ctx->f[4] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_3cb668:
    // 0x3cb668: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x3cb668u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3cb66c:
    // 0x3cb66c: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x3cb66cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_3cb670:
    // 0x3cb670: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3cb670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_3cb674:
    // 0x3cb674: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x3cb674u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
label_3cb678:
    // 0x3cb678: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3cb678u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_3cb67c:
    // 0x3cb67c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3cb67cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3cb680:
    // 0x3cb680: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x3cb680u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_3cb684:
    // 0x3cb684: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x3cb684u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_3cb688:
    // 0x3cb688: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x3cb688u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_3cb68c:
    // 0x3cb68c: 0xe7a70180  swc1        $f7, 0x180($sp)
    ctx->pc = 0x3cb68cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3cb690:
    // 0x3cb690: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3cb690u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3cb694:
    // 0x3cb694: 0xe7a60184  swc1        $f6, 0x184($sp)
    ctx->pc = 0x3cb694u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3cb698:
    // 0x3cb698: 0xe7a50188  swc1        $f5, 0x188($sp)
    ctx->pc = 0x3cb698u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_3cb69c:
    // 0x3cb69c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3cb69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6a0:
    // 0x3cb6a0: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x3cb6a0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_3cb6a4:
    // 0x3cb6a4: 0xe7a70180  swc1        $f7, 0x180($sp)
    ctx->pc = 0x3cb6a4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_3cb6a8:
    // 0x3cb6a8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3cb6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6ac:
    // 0x3cb6ac: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x3cb6acu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_3cb6b0:
    // 0x3cb6b0: 0xe7a60184  swc1        $f6, 0x184($sp)
    ctx->pc = 0x3cb6b0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_3cb6b4:
    // 0x3cb6b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x3cb6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6b8:
    // 0x3cb6b8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x3cb6b8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_3cb6bc:
    // 0x3cb6bc: 0x460d1834  c.lt.s      $f3, $f13
    ctx->pc = 0x3cb6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb6c0:
    // 0x3cb6c0: 0x0  nop
    ctx->pc = 0x3cb6c0u;
    // NOP
label_3cb6c4:
    // 0x3cb6c4: 0x45010074  bc1t        . + 4 + (0x74 << 2)
label_3cb6c8:
    if (ctx->pc == 0x3CB6C8u) {
        ctx->pc = 0x3CB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6C4u;
        // 0x3cb6c8: 0xe7a50188  swc1        $f5, 0x188($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB6CCu;
        goto label_3cb6cc;
    }
    ctx->pc = 0x3CB6C4u;
    {
        const bool branch_taken_0x3cb6c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB6C4u;
        // 0x3cb6c8: 0xe7a50188  swc1        $f5, 0x188($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb6c4) {
            ctx->pc = 0x3CB898u;
            goto label_3cb898;
        }
    }
    ctx->pc = 0x3CB6CCu;
label_3cb6cc:
    // 0x3cb6cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6d0:
    // 0x3cb6d0: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x3cb6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb6d4:
    // 0x3cb6d4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x3cb6d4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_3cb6d8:
    // 0x3cb6d8: 0xe7a501d0  swc1        $f5, 0x1D0($sp)
    ctx->pc = 0x3cb6d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_3cb6dc:
    // 0x3cb6dc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3cb6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6e0:
    // 0x3cb6e0: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x3cb6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb6e4:
    // 0x3cb6e4: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x3cb6e4u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_3cb6e8:
    // 0x3cb6e8: 0xe7a601d4  swc1        $f6, 0x1D4($sp)
    ctx->pc = 0x3cb6e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_3cb6ec:
    // 0x3cb6ec: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3cb6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb6f0:
    // 0x3cb6f0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cb6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb6f4:
    // 0x3cb6f4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x3cb6f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_3cb6f8:
    // 0x3cb6f8: 0xe7a301d8  swc1        $f3, 0x1D8($sp)
    ctx->pc = 0x3cb6f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_3cb6fc:
    // 0x3cb6fc: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x3cb6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb700:
    // 0x3cb700: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3cb700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb704:
    // 0x3cb704: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3cb704u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_3cb708:
    // 0x3cb708: 0xe7a401c0  swc1        $f4, 0x1C0($sp)
    ctx->pc = 0x3cb708u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_3cb70c:
    // 0x3cb70c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x3cb70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb710:
    // 0x3cb710: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x3cb710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb714:
    // 0x3cb714: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3cb714u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3cb718:
    // 0x3cb718: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x3cb718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_3cb71c:
    // 0x3cb71c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3cb71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb720:
    // 0x3cb720: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cb720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb724:
    // 0x3cb724: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3cb724u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3cb728:
    // 0x3cb728: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x3cb728u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_3cb72c:
    // 0x3cb72c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x3cb72cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_3cb730:
    // 0x3cb730: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x3cb730u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_3cb734:
    // 0x3cb734: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x3cb734u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
label_3cb738:
    // 0x3cb738: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x3cb738u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_3cb73c:
    // 0x3cb73c: 0x460d1834  c.lt.s      $f3, $f13
    ctx->pc = 0x3cb73cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb740:
    // 0x3cb740: 0x0  nop
    ctx->pc = 0x3cb740u;
    // NOP
label_3cb744:
    // 0x3cb744: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_3cb748:
    if (ctx->pc == 0x3CB748u) {
        ctx->pc = 0x3CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB744u;
        // 0x3cb748: 0xe7a101c8  swc1        $f1, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB74Cu;
        goto label_3cb74c;
    }
    ctx->pc = 0x3CB744u;
    {
        const bool branch_taken_0x3cb744 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB744u;
        // 0x3cb748: 0xe7a101c8  swc1        $f1, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb744) {
            ctx->pc = 0x3CB780u;
            goto label_3cb780;
        }
    }
    ctx->pc = 0x3CB74Cu;
label_3cb74c:
    // 0x3cb74c: 0x68700007  ldl         $s0, 0x7($v1)
    ctx->pc = 0x3cb74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cb750:
    // 0x3cb750: 0x6c700000  ldr         $s0, 0x0($v1)
    ctx->pc = 0x3cb750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cb754:
    // 0x3cb754: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3cb754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3cb758:
    // 0x3cb758: 0xb3b00187  sdl         $s0, 0x187($sp)
    ctx->pc = 0x3cb758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb75c:
    // 0x3cb75c: 0xb7b00180  sdr         $s0, 0x180($sp)
    ctx->pc = 0x3cb75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb760:
    // 0x3cb760: 0xafa20188  sw          $v0, 0x188($sp)
    ctx->pc = 0x3cb760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
label_3cb764:
    // 0x3cb764: 0x10000006  b           . + 4 + (0x6 << 2)
label_3cb768:
    if (ctx->pc == 0x3CB768u) {
        ctx->pc = 0x3CB76Cu;
        goto label_3cb76c;
    }
    ctx->pc = 0x3CB764u;
    {
        const bool branch_taken_0x3cb764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb764) {
            ctx->pc = 0x3CB780u;
            goto label_3cb780;
        }
    }
    ctx->pc = 0x3CB76Cu;
label_3cb76c:
    // 0x3cb76c: 0x0  nop
    ctx->pc = 0x3cb76cu;
    // NOP
label_3cb770:
    // 0x3cb770: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3cb770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3cb774:
    // 0x3cb774: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x3cb774u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_3cb778:
    // 0x3cb778: 0x1440ff8d  bnez        $v0, . + 4 + (-0x73 << 2)
label_3cb77c:
    if (ctx->pc == 0x3CB77Cu) {
        ctx->pc = 0x3CB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB778u;
        // 0x3cb77c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB780u;
        goto label_3cb780;
    }
    ctx->pc = 0x3CB778u;
    {
        const bool branch_taken_0x3cb778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB778u;
        // 0x3cb77c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb778) {
            ctx->pc = 0x3CB5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb5b0;
        }
    }
    ctx->pc = 0x3CB780u;
label_3cb780:
    // 0x3cb780: 0x1140004d  beqz        $t2, . + 4 + (0x4D << 2)
label_3cb784:
    if (ctx->pc == 0x3CB784u) {
        ctx->pc = 0x3CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB780u;
        // 0x3cb784: 0xc7a30180  lwc1        $f3, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB788u;
        goto label_3cb788;
    }
    ctx->pc = 0x3CB780u;
    {
        const bool branch_taken_0x3cb780 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB780u;
        // 0x3cb784: 0xc7a30180  lwc1        $f3, 0x180($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb780) {
            ctx->pc = 0x3CB8B8u;
            goto label_3cb8b8;
        }
    }
    ctx->pc = 0x3CB788u;
label_3cb788:
    // 0x3cb788: 0xc7a60184  lwc1        $f6, 0x184($sp)
    ctx->pc = 0x3cb788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb78c:
    // 0x3cb78c: 0xc7a50130  lwc1        $f5, 0x130($sp)
    ctx->pc = 0x3cb78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3cb790:
    // 0x3cb790: 0xc7ac0140  lwc1        $f12, 0x140($sp)
    ctx->pc = 0x3cb790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cb794:
    // 0x3cb794: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x3cb794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cb798:
    // 0x3cb798: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x3cb798u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_3cb79c:
    // 0x3cb79c: 0xc7ab0144  lwc1        $f11, 0x144($sp)
    ctx->pc = 0x3cb79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3cb7a0:
    // 0x3cb7a0: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x3cb7a0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_3cb7a4:
    // 0x3cb7a4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x3cb7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb7a8:
    // 0x3cb7a8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x3cb7a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_3cb7ac:
    // 0x3cb7ac: 0xc7a80148  lwc1        $f8, 0x148($sp)
    ctx->pc = 0x3cb7acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3cb7b0:
    // 0x3cb7b0: 0x46065ac2  mul.s       $f11, $f11, $f6
    ctx->pc = 0x3cb7b0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
label_3cb7b4:
    // 0x3cb7b4: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x3cb7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb7b8:
    // 0x3cb7b8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x3cb7b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_3cb7bc:
    // 0x3cb7bc: 0xc7a2014c  lwc1        $f2, 0x14C($sp)
    ctx->pc = 0x3cb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb7c0:
    // 0x3cb7c0: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x3cb7c0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_3cb7c4:
    // 0x3cb7c4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3cb7c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3cb7c8:
    // 0x3cb7c8: 0xc7a70188  lwc1        $f7, 0x188($sp)
    ctx->pc = 0x3cb7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3cb7cc:
    // 0x3cb7cc: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x3cb7ccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_3cb7d0:
    // 0x3cb7d0: 0xc7a90150  lwc1        $f9, 0x150($sp)
    ctx->pc = 0x3cb7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3cb7d4:
    // 0x3cb7d4: 0xc7aa0154  lwc1        $f10, 0x154($sp)
    ctx->pc = 0x3cb7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3cb7d8:
    // 0x3cb7d8: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x3cb7d8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
label_3cb7dc:
    // 0x3cb7dc: 0xc7a60158  lwc1        $f6, 0x158($sp)
    ctx->pc = 0x3cb7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3cb7e0:
    // 0x3cb7e0: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x3cb7e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_3cb7e4:
    // 0x3cb7e4: 0xc7a3015c  lwc1        $f3, 0x15C($sp)
    ctx->pc = 0x3cb7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cb7e8:
    // 0x3cb7e8: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x3cb7e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_3cb7ec:
    // 0x3cb7ec: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3cb7ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3cb7f0:
    // 0x3cb7f0: 0xc7ac0160  lwc1        $f12, 0x160($sp)
    ctx->pc = 0x3cb7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cb7f4:
    // 0x3cb7f4: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x3cb7f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
label_3cb7f8:
    // 0x3cb7f8: 0xc7ab0164  lwc1        $f11, 0x164($sp)
    ctx->pc = 0x3cb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3cb7fc:
    // 0x3cb7fc: 0x46074a42  mul.s       $f9, $f9, $f7
    ctx->pc = 0x3cb7fcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[7]);
label_3cb800:
    // 0x3cb800: 0xc7a80168  lwc1        $f8, 0x168($sp)
    ctx->pc = 0x3cb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3cb804:
    // 0x3cb804: 0x46075282  mul.s       $f10, $f10, $f7
    ctx->pc = 0x3cb804u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_3cb808:
    // 0x3cb808: 0xc7a2016c  lwc1        $f2, 0x16C($sp)
    ctx->pc = 0x3cb808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cb80c:
    // 0x3cb80c: 0x46073182  mul.s       $f6, $f6, $f7
    ctx->pc = 0x3cb80cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[7]);
label_3cb810:
    // 0x3cb810: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x3cb810u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
label_3cb814:
    // 0x3cb814: 0x460a2100  add.s       $f4, $f4, $f10
    ctx->pc = 0x3cb814u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[10]);
label_3cb818:
    // 0x3cb818: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3cb818u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_3cb81c:
    // 0x3cb81c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x3cb81cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_3cb820:
    // 0x3cb820: 0x460c2940  add.s       $f5, $f5, $f12
    ctx->pc = 0x3cb820u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[12]);
label_3cb824:
    // 0x3cb824: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x3cb824u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
label_3cb828:
    // 0x3cb828: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x3cb828u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_3cb82c:
    // 0x3cb82c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3cb82cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_3cb830:
    // 0x3cb830: 0xe7a50170  swc1        $f5, 0x170($sp)
    ctx->pc = 0x3cb830u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_3cb834:
    // 0x3cb834: 0xe7a40174  swc1        $f4, 0x174($sp)
    ctx->pc = 0x3cb834u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_3cb838:
    // 0x3cb838: 0xe7a10178  swc1        $f1, 0x178($sp)
    ctx->pc = 0x3cb838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_3cb83c:
    // 0x3cb83c: 0xe7a0017c  swc1        $f0, 0x17C($sp)
    ctx->pc = 0x3cb83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_3cb840:
    // 0x3cb840: 0x1871018  mult        $v0, $t4, $a3
    ctx->pc = 0x3cb840u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3cb844:
    // 0x3cb844: 0x8fa6021c  lw          $a2, 0x21C($sp)
    ctx->pc = 0x3cb844u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cb848:
    // 0x3cb848: 0x8faa0224  lw          $t2, 0x224($sp)
    ctx->pc = 0x3cb848u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cb84c:
    // 0x3cb84c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x3cb84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_3cb850:
    // 0x3cb850: 0x6bb00187  ldl         $s0, 0x187($sp)
    ctx->pc = 0x3cb850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cb854:
    // 0x3cb854: 0x6fb00180  ldr         $s0, 0x180($sp)
    ctx->pc = 0x3cb854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cb858:
    // 0x3cb858: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x3cb858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_3cb85c:
    // 0x3cb85c: 0xb0700007  sdl         $s0, 0x7($v1)
    ctx->pc = 0x3cb85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb860:
    // 0x3cb860: 0xb4700000  sdr         $s0, 0x0($v1)
    ctx->pc = 0x3cb860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb864:
    // 0x3cb864: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x3cb864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_3cb868:
    // 0x3cb868: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x3cb868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
label_3cb86c:
    // 0x3cb86c: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x3cb86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb870:
    // 0x3cb870: 0x8faa0228  lw          $t2, 0x228($sp)
    ctx->pc = 0x3cb870u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cb874:
    // 0x3cb874: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3cb874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3cb878:
    // 0x3cb878: 0x10a2021  addu        $a0, $t0, $t2
    ctx->pc = 0x3cb878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
label_3cb87c:
    // 0x3cb87c: 0xc7a10174  lwc1        $f1, 0x174($sp)
    ctx->pc = 0x3cb87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb880:
    // 0x3cb880: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x3cb880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_3cb884:
    // 0x3cb884: 0xc7a00178  lwc1        $f0, 0x178($sp)
    ctx->pc = 0x3cb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb888:
    // 0x3cb888: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3cb888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_3cb88c:
    // 0x3cb88c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3cb890:
    if (ctx->pc == 0x3CB890u) {
        ctx->pc = 0x3CB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB88Cu;
        // 0x3cb890: 0xa0930003  sb          $s3, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB894u;
        goto label_3cb894;
    }
    ctx->pc = 0x3CB88Cu;
    {
        const bool branch_taken_0x3cb88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB88Cu;
        // 0x3cb890: 0xa0930003  sb          $s3, 0x3($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb88c) {
            ctx->pc = 0x3CB8C4u;
            goto label_3cb8c4;
        }
    }
    ctx->pc = 0x3CB894u;
label_3cb894:
    // 0x3cb894: 0x0  nop
    ctx->pc = 0x3cb894u;
    // NOP
label_3cb898:
    // 0x3cb898: 0x68500007  ldl         $s0, 0x7($v0)
    ctx->pc = 0x3cb898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_3cb89c:
    // 0x3cb89c: 0x6c500000  ldr         $s0, 0x0($v0)
    ctx->pc = 0x3cb89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
label_3cb8a0:
    // 0x3cb8a0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3cb8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3cb8a4:
    // 0x3cb8a4: 0xb3b00187  sdl         $s0, 0x187($sp)
    ctx->pc = 0x3cb8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb8a8:
    // 0x3cb8a8: 0xb7b00180  sdr         $s0, 0x180($sp)
    ctx->pc = 0x3cb8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3cb8ac:
    // 0x3cb8ac: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x3cb8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_3cb8b0:
    // 0x3cb8b0: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
label_3cb8b4:
    if (ctx->pc == 0x3CB8B4u) {
        ctx->pc = 0x3CB8B8u;
        goto label_3cb8b8;
    }
    ctx->pc = 0x3CB8B0u;
    {
        const bool branch_taken_0x3cb8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3cb8b0) {
            ctx->pc = 0x3CB780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb780;
        }
    }
    ctx->pc = 0x3CB8B8u;
label_3cb8b8:
    // 0x3cb8b8: 0x8fa60228  lw          $a2, 0x228($sp)
    ctx->pc = 0x3cb8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cb8bc:
    // 0x3cb8bc: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x3cb8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_3cb8c0:
    // 0x3cb8c0: 0xa0520003  sb          $s2, 0x3($v0)
    ctx->pc = 0x3cb8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 18));
label_3cb8c4:
    // 0x3cb8c4: 0x160602d  daddu       $t4, $t3, $zero
    ctx->pc = 0x3cb8c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_3cb8c8:
    // 0x3cb8c8: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3cb8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cb8cc:
    // 0x3cb8cc: 0x1440ff2c  bnez        $v0, . + 4 + (-0xD4 << 2)
label_3cb8d0:
    if (ctx->pc == 0x3CB8D0u) {
        ctx->pc = 0x3CB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8CCu;
        // 0x3cb8d0: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8D4u;
        goto label_3cb8d4;
    }
    ctx->pc = 0x3CB8CCu;
    {
        const bool branch_taken_0x3cb8cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CB8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8CCu;
        // 0x3cb8d0: 0x8fa30224  lw          $v1, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb8cc) {
            ctx->pc = 0x3CB580u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cb580;
        }
    }
    ctx->pc = 0x3CB8D4u;
label_3cb8d4:
    // 0x3cb8d4: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3cb8d8:
    if (ctx->pc == 0x3CB8D8u) {
        ctx->pc = 0x3CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8D4u;
        // 0x3cb8d8: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8DCu;
        goto label_3cb8dc;
    }
    ctx->pc = 0x3CB8D4u;
    {
        const bool branch_taken_0x3cb8d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8D4u;
        // 0x3cb8d8: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb8d4) {
            ctx->pc = 0x3CB8F8u;
            goto label_3cb8f8;
        }
    }
    ctx->pc = 0x3CB8DCu;
label_3cb8dc:
    // 0x3cb8dc: 0x7fa90270  sq          $t1, 0x270($sp)
    ctx->pc = 0x3cb8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
label_3cb8e0:
    // 0x3cb8e0: 0xc0f5392  jal         func_3D4E48
label_3cb8e4:
    if (ctx->pc == 0x3CB8E4u) {
        ctx->pc = 0x3CB8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8E0u;
        // 0x3cb8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8E8u;
        goto label_3cb8e8;
    }
    ctx->pc = 0x3CB8E0u;
    SET_GPR_U32(ctx, 31, 0x3CB8E8u);
    ctx->pc = 0x3CB8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB8E0u;
    // 0x3cb8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CB8E0u, 0x3CB8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB8E8u;
label_3cb8e8:
    // 0x3cb8e8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cb8e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3cb8ec:
    // 0x3cb8ec: 0x104000ad  beqz        $v0, . + 4 + (0xAD << 2)
label_3cb8f0:
    if (ctx->pc == 0x3CB8F0u) {
        ctx->pc = 0x3CB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8ECu;
        // 0x3cb8f0: 0x7ba90270  lq          $t1, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB8F4u;
        goto label_3cb8f4;
    }
    ctx->pc = 0x3CB8ECu;
    {
        const bool branch_taken_0x3cb8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB8ECu;
        // 0x3cb8f0: 0x7ba90270  lq          $t1, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb8ec) {
            ctx->pc = 0x3CBBA4u;
            goto label_3cbba4;
        }
    }
    ctx->pc = 0x3CB8F4u;
label_3cb8f4:
    // 0x3cb8f4: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x3cb8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3cb8f8:
    // 0x3cb8f8: 0x7fa90270  sq          $t1, 0x270($sp)
    ctx->pc = 0x3cb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
label_3cb8fc:
    // 0x3cb8fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cb8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cb900:
    // 0x3cb900: 0xc0bb7e6  jal         func_2EDF98
label_3cb904:
    if (ctx->pc == 0x3CB904u) {
        ctx->pc = 0x3CB904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB900u;
        // 0x3cb904: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB908u;
        goto label_3cb908;
    }
    ctx->pc = 0x3CB900u;
    SET_GPR_U32(ctx, 31, 0x3CB908u);
    ctx->pc = 0x3CB904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB900u;
    // 0x3cb904: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CB900u, 0x3CB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB908u;
label_3cb908:
    // 0x3cb908: 0xc0f5392  jal         func_3D4E48
label_3cb90c:
    if (ctx->pc == 0x3CB90Cu) {
        ctx->pc = 0x3CB90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB908u;
        // 0x3cb90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB910u;
        goto label_3cb910;
    }
    ctx->pc = 0x3CB908u;
    SET_GPR_U32(ctx, 31, 0x3CB910u);
    ctx->pc = 0x3CB90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CB908u;
    // 0x3cb90c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E48u, 0x3CB908u, 0x3CB910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CB910u;
label_3cb910:
    // 0x3cb910: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3cb910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3cb914:
    // 0x3cb914: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_3cb918:
    if (ctx->pc == 0x3CB918u) {
        ctx->pc = 0x3CB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB914u;
        // 0x3cb918: 0x7ba90270  lq          $t1, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB91Cu;
        goto label_3cb91c;
    }
    ctx->pc = 0x3CB914u;
    {
        const bool branch_taken_0x3cb914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CB918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB914u;
        // 0x3cb918: 0x7ba90270  lq          $t1, 0x270($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb914) {
            ctx->pc = 0x3CBA8Cu;
            goto label_3cba8c;
        }
    }
    ctx->pc = 0x3CB91Cu;
label_3cb91c:
    // 0x3cb91c: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x3cb91cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_3cb920:
    // 0x3cb920: 0x24e7b1e0  addiu       $a3, $a3, -0x4E20
    ctx->pc = 0x3cb920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947296));
label_3cb924:
    // 0x3cb924: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x3cb924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_3cb928:
    // 0x3cb928: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3cb928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3cb92c:
    // 0x3cb92c: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x3cb92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
label_3cb930:
    // 0x3cb930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb934:
    // 0x3cb934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cb934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cb938:
    // 0x3cb938: 0x46170082  mul.s       $f2, $f0, $f23
    ctx->pc = 0x3cb938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cb93c:
    // 0x3cb93c: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x3cb93cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3cb940:
    // 0x3cb940: 0x90620009  lbu         $v0, 0x9($v1)
    ctx->pc = 0x3cb940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9)));
label_3cb944:
    // 0x3cb944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb948:
    // 0x3cb948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cb948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cb94c:
    // 0x3cb94c: 0x461700c2  mul.s       $f3, $f0, $f23
    ctx->pc = 0x3cb94cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cb950:
    // 0x3cb950: 0xe7a301f4  swc1        $f3, 0x1F4($sp)
    ctx->pc = 0x3cb950u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_3cb954:
    // 0x3cb954: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x3cb954u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
label_3cb958:
    // 0x3cb958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb95c:
    // 0x3cb95c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cb95cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cb960:
    // 0x3cb960: 0x46170142  mul.s       $f5, $f0, $f23
    ctx->pc = 0x3cb960u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cb964:
    // 0x3cb964: 0xe7a501f8  swc1        $f5, 0x1F8($sp)
    ctx->pc = 0x3cb964u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_3cb968:
    // 0x3cb968: 0x9062000b  lbu         $v0, 0xB($v1)
    ctx->pc = 0x3cb968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 11)));
label_3cb96c:
    // 0x3cb96c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cb96cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb970:
    // 0x3cb970: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cb970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cb974:
    // 0x3cb974: 0x46170102  mul.s       $f4, $f0, $f23
    ctx->pc = 0x3cb974u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_3cb978:
    // 0x3cb978: 0xe7a401fc  swc1        $f4, 0x1FC($sp)
    ctx->pc = 0x3cb978u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_3cb97c:
    // 0x3cb97c: 0xc4e10040  lwc1        $f1, 0x40($a3)
    ctx->pc = 0x3cb97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cb980:
    // 0x3cb980: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3cb980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cb984:
    // 0x3cb984: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3cb984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cb988:
    // 0x3cb988: 0x46190034  c.lt.s      $f0, $f25
    ctx->pc = 0x3cb988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb98c:
    // 0x3cb98c: 0x0  nop
    ctx->pc = 0x3cb98cu;
    // NOP
label_3cb990:
    // 0x3cb990: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
label_3cb994:
    if (ctx->pc == 0x3CB994u) {
        ctx->pc = 0x3CB994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB990u;
        // 0x3cb994: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB998u;
        goto label_3cb998;
    }
    ctx->pc = 0x3CB990u;
    {
        const bool branch_taken_0x3cb990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb990) {
            ctx->pc = 0x3CB994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CB990u;
            // 0x3cb994: 0x46002042  mul.s       $f1, $f4, $f0 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CB9A8u;
            goto label_3cb9a8;
        }
    }
    ctx->pc = 0x3CB998u;
label_3cb998:
    // 0x3cb998: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cb998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cb99c:
    // 0x3cb99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3cb99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cb9a0:
    // 0x3cb9a0: 0x46002042  mul.s       $f1, $f4, $f0
    ctx->pc = 0x3cb9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_3cb9a4:
    // 0x3cb9a4: 0x0  nop
    ctx->pc = 0x3cb9a4u;
    // NOP
label_3cb9a8:
    // 0x3cb9a8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cb9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cb9ac:
    // 0x3cb9ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cb9acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cb9b0:
    // 0x3cb9b0: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x3cb9b0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cb9b4:
    // 0x3cb9b4: 0xe7a101fc  swc1        $f1, 0x1FC($sp)
    ctx->pc = 0x3cb9b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_3cb9b8:
    // 0x3cb9b8: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x3cb9b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3cb9bc:
    // 0x3cb9bc: 0xe7a301f4  swc1        $f3, 0x1F4($sp)
    ctx->pc = 0x3cb9bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_3cb9c0:
    // 0x3cb9c0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x3cb9c0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_3cb9c4:
    // 0x3cb9c4: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x3cb9c4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
label_3cb9c8:
    // 0x3cb9c8: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3cb9c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb9cc:
    // 0x3cb9cc: 0x0  nop
    ctx->pc = 0x3cb9ccu;
    // NOP
label_3cb9d0:
    // 0x3cb9d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3cb9d4:
    if (ctx->pc == 0x3CB9D4u) {
        ctx->pc = 0x3CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9D0u;
        // 0x3cb9d4: 0xe7a501f8  swc1        $f5, 0x1F8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB9D8u;
        goto label_3cb9d8;
    }
    ctx->pc = 0x3CB9D0u;
    {
        const bool branch_taken_0x3cb9d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9D0u;
        // 0x3cb9d4: 0xe7a501f8  swc1        $f5, 0x1F8($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cb9d0) {
            ctx->pc = 0x3CB9DCu;
            goto label_3cb9dc;
        }
    }
    ctx->pc = 0x3CB9D8u;
label_3cb9d8:
    // 0x3cb9d8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x3cb9d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_3cb9dc:
    // 0x3cb9dc: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x3cb9dcu;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
label_3cb9e0:
    // 0x3cb9e0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3cb9e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb9e4:
    // 0x3cb9e4: 0x0  nop
    ctx->pc = 0x3cb9e4u;
    // NOP
label_3cb9e8:
    // 0x3cb9e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_3cb9ec:
    if (ctx->pc == 0x3CB9ECu) {
        ctx->pc = 0x3CB9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CB9E8u;
        // 0x3cb9ec: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CB9F0u;
        goto label_3cb9f0;
    }
    ctx->pc = 0x3CB9E8u;
    {
        const bool branch_taken_0x3cb9e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cb9e8) {
            ctx->pc = 0x3CB9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CB9E8u;
            // 0x3cb9ec: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CB9F0u;
            goto label_3cb9f0;
        }
    }
    ctx->pc = 0x3CB9F0u;
label_3cb9f0:
    // 0x3cb9f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3cb9f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3cb9f4:
    // 0x3cb9f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3cb9f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3cb9f8:
    // 0x3cb9f8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3cb9f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3cb9fc:
    // 0x3cb9fc: 0x0  nop
    ctx->pc = 0x3cb9fcu;
    // NOP
label_3cba00:
    // 0x3cba00: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_3cba04:
    if (ctx->pc == 0x3CBA04u) {
        ctx->pc = 0x3CBA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA00u;
        // 0x3cba04: 0xc7a001f0  lwc1        $f0, 0x1F0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA08u;
        goto label_3cba08;
    }
    ctx->pc = 0x3CBA00u;
    {
        const bool branch_taken_0x3cba00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3cba00) {
            ctx->pc = 0x3CBA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CBA00u;
            // 0x3cba04: 0xc7a001f0  lwc1        $f0, 0x1F0($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CBA30u;
            goto label_3cba30;
        }
    }
    ctx->pc = 0x3CBA08u;
label_3cba08:
    // 0x3cba08: 0x46002003  div.s       $f0, $f4, $f0
    ctx->pc = 0x3cba08u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[4], ctx->f[0]); }
label_3cba0c:
    // 0x3cba0c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cba0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cba10:
    // 0x3cba10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cba10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cba14:
    // 0x3cba14: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3cba14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_3cba18:
    // 0x3cba18: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3cba18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_3cba1c:
    // 0x3cba1c: 0xe7a101fc  swc1        $f1, 0x1FC($sp)
    ctx->pc = 0x3cba1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_3cba20:
    // 0x3cba20: 0xe7a201f0  swc1        $f2, 0x1F0($sp)
    ctx->pc = 0x3cba20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_3cba24:
    // 0x3cba24: 0xe7a301f4  swc1        $f3, 0x1F4($sp)
    ctx->pc = 0x3cba24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_3cba28:
    // 0x3cba28: 0xe7a001f8  swc1        $f0, 0x1F8($sp)
    ctx->pc = 0x3cba28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_3cba2c:
    // 0x3cba2c: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x3cba2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cba30:
    // 0x3cba30: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x3cba30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cba34:
    // 0x3cba34: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3cba34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3cba38:
    // 0x3cba38: 0xc7a201f8  lwc1        $f2, 0x1F8($sp)
    ctx->pc = 0x3cba38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cba3c:
    // 0x3cba3c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x3cba3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_3cba40:
    // 0x3cba40: 0xc7a301fc  lwc1        $f3, 0x1FC($sp)
    ctx->pc = 0x3cba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cba44:
    // 0x3cba44: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x3cba44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_3cba48:
    // 0x3cba48: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x3cba48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3cba4c:
    // 0x3cba4c: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x3cba4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3cba50:
    // 0x3cba50: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x3cba50u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_3cba54:
    // 0x3cba54: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_3cba58:
    // 0x3cba58: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x3cba58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cba5c:
    // 0x3cba5c: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x3cba5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
label_3cba60:
    // 0x3cba60: 0xa3a201e0  sb          $v0, 0x1E0($sp)
    ctx->pc = 0x3cba60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 480), (uint8_t)GPR_U32(ctx, 2));
label_3cba64:
    // 0x3cba64: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cba68:
    // 0x3cba68: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cba68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cba6c:
    // 0x3cba6c: 0x461518c0  add.s       $f3, $f3, $f21
    ctx->pc = 0x3cba6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_3cba70:
    // 0x3cba70: 0xa3a201e1  sb          $v0, 0x1E1($sp)
    ctx->pc = 0x3cba70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 481), (uint8_t)GPR_U32(ctx, 2));
label_3cba74:
    // 0x3cba74: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cba78:
    // 0x3cba78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cba78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cba7c:
    // 0x3cba7c: 0xa3a201e2  sb          $v0, 0x1E2($sp)
    ctx->pc = 0x3cba7cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 482), (uint8_t)GPR_U32(ctx, 2));
label_3cba80:
    // 0x3cba80: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3cba80u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3cba84:
    // 0x3cba84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3cba84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3cba88:
    // 0x3cba88: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cba88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cba8c:
    // 0x3cba8c: 0x11200101  beqz        $t1, . + 4 + (0x101 << 2)
label_3cba90:
    if (ctx->pc == 0x3CBA90u) {
        ctx->pc = 0x3CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA8Cu;
        // 0x3cba90: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBA94u;
        goto label_3cba94;
    }
    ctx->pc = 0x3CBA8Cu;
    {
        const bool branch_taken_0x3cba8c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA8Cu;
        // 0x3cba90: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba8c) {
            ctx->pc = 0x3CBE94u;
            goto label_3cbe94;
        }
    }
    ctx->pc = 0x3CBA94u;
label_3cba94:
    // 0x3cba94: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x3cba94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cba98:
    // 0x3cba98: 0x19200018  blez        $t1, . + 4 + (0x18 << 2)
label_3cba9c:
    if (ctx->pc == 0x3CBA9Cu) {
        ctx->pc = 0x3CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA98u;
        // 0x3cba9c: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAA0u;
        goto label_3cbaa0;
    }
    ctx->pc = 0x3CBA98u;
    {
        const bool branch_taken_0x3cba98 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3CBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBA98u;
        // 0x3cba9c: 0x31230003  andi        $v1, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cba98) {
            ctx->pc = 0x3CBAFCu;
            goto label_3cbafc;
        }
    }
    ctx->pc = 0x3CBAA0u;
label_3cbaa0:
    // 0x3cbaa0: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_3cbaa4:
    if (ctx->pc == 0x3CBAA4u) {
        ctx->pc = 0x3CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAA0u;
        // 0x3cbaa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAA8u;
        goto label_3cbaa8;
    }
    ctx->pc = 0x3CBAA0u;
    {
        const bool branch_taken_0x3cbaa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAA0u;
        // 0x3cbaa4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbaa0) {
            ctx->pc = 0x3CBB24u;
            goto label_3cbb24;
        }
    }
    ctx->pc = 0x3CBAA8u;
label_3cbaa8:
    // 0x3cbaa8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_3cbaac:
    if (ctx->pc == 0x3CBAACu) {
        ctx->pc = 0x3CBAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAA8u;
        // 0x3cbaac: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBAB0u;
        goto label_3cbab0;
    }
    ctx->pc = 0x3CBAA8u;
    {
        const bool branch_taken_0x3cbaa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3cbaa8) {
            ctx->pc = 0x3CBAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CBAA8u;
            // 0x3cbaac: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CBB00u;
            goto label_3cbb00;
        }
    }
    ctx->pc = 0x3CBAB0u;
label_3cbab0:
    // 0x3cbab0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3cbab0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3cbab4:
    // 0x3cbab4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3cbab8:
    if (ctx->pc == 0x3CBAB8u) {
        ctx->pc = 0x3CBAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAB4u;
        // 0x3cbab8: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBABCu;
        goto label_3cbabc;
    }
    ctx->pc = 0x3CBAB4u;
    {
        const bool branch_taken_0x3cbab4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBAB4u;
        // 0x3cbab8: 0x90820003  lbu         $v0, 0x3($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbab4) {
            ctx->pc = 0x3CBAE0u;
            goto label_3cbae0;
        }
    }
    ctx->pc = 0x3CBABCu;
label_3cbabc:
    // 0x3cbabc: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3cbabcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbac0:
    // 0x3cbac0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3cbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3cbac4:
    // 0x3cbac4: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbac4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbac8:
    // 0x3cbac8: 0x8fa20228  lw          $v0, 0x228($sp)
    ctx->pc = 0x3cbac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cbacc:
    // 0x3cbacc: 0x8ba301e3  lwl         $v1, 0x1E3($sp)
    ctx->pc = 0x3cbaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_3cbad0:
    // 0x3cbad0: 0x9ba301e0  lwr         $v1, 0x1E0($sp)
    ctx->pc = 0x3cbad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_3cbad4:
    // 0x3cbad4: 0xa8430003  swl         $v1, 0x3($v0)
    ctx->pc = 0x3cbad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbad8:
    // 0x3cbad8: 0xb8430000  swr         $v1, 0x0($v0)
    ctx->pc = 0x3cbad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbadc:
    // 0x3cbadc: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3cbadcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_3cbae0:
    // 0x3cbae0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3cbae0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cbae4:
    // 0x3cbae4: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbae4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbae8:
    // 0x3cbae8: 0x8ba801e3  lwl         $t0, 0x1E3($sp)
    ctx->pc = 0x3cbae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 8) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 8, (int32_t)merged); }
label_3cbaec:
    // 0x3cbaec: 0x9ba801e0  lwr         $t0, 0x1E0($sp)
    ctx->pc = 0x3cbaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
label_3cbaf0:
    // 0x3cbaf0: 0xa8880003  swl         $t0, 0x3($a0)
    ctx->pc = 0x3cbaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbaf4:
    // 0x3cbaf4: 0xb8880000  swr         $t0, 0x0($a0)
    ctx->pc = 0x3cbaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 8); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbaf8:
    // 0x3cbaf8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3cbaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3cbafc:
    // 0x3cbafc: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3cbafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_3cbb00:
    // 0x3cbb00: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3cbb00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_3cbb04:
    // 0x3cbb04: 0x189282b  sltu        $a1, $t4, $t1
    ctx->pc = 0x3cbb04u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cbb08:
    // 0x3cbb08: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbb08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbb0c:
    // 0x3cbb0c: 0x8bb401e3  lwl         $s4, 0x1E3($sp)
    ctx->pc = 0x3cbb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 20) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 20, (int32_t)merged); }
label_3cbb10:
    // 0x3cbb10: 0x9bb401e0  lwr         $s4, 0x1E0($sp)
    ctx->pc = 0x3cbb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 20) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 20) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 20, merged64); }
label_3cbb14:
    // 0x3cbb14: 0xa8940003  swl         $s4, 0x3($a0)
    ctx->pc = 0x3cbb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb18:
    // 0x3cbb18: 0xb8940000  swr         $s4, 0x0($a0)
    ctx->pc = 0x3cbb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 20); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb1c:
    // 0x3cbb1c: 0x10a000dd  beqz        $a1, . + 4 + (0xDD << 2)
label_3cbb20:
    if (ctx->pc == 0x3CBB20u) {
        ctx->pc = 0x3CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB1Cu;
        // 0x3cbb20: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB24u;
        goto label_3cbb24;
    }
    ctx->pc = 0x3CBB1Cu;
    {
        const bool branch_taken_0x3cbb1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB1Cu;
        // 0x3cbb20: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb1c) {
            ctx->pc = 0x3CBE94u;
            goto label_3cbe94;
        }
    }
    ctx->pc = 0x3CBB24u;
label_3cbb24:
    // 0x3cbb24: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3cbb24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbb28:
    // 0x3cbb28: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x3cbb28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_3cbb2c:
    // 0x3cbb2c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3cbb2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_3cbb30:
    // 0x3cbb30: 0x189282b  sltu        $a1, $t4, $t1
    ctx->pc = 0x3cbb30u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cbb34:
    // 0x3cbb34: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbb34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbb38:
    // 0x3cbb38: 0x8ba701e3  lwl         $a3, 0x1E3($sp)
    ctx->pc = 0x3cbb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_3cbb3c:
    // 0x3cbb3c: 0x9ba701e0  lwr         $a3, 0x1E0($sp)
    ctx->pc = 0x3cbb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_3cbb40:
    // 0x3cbb40: 0xa8670003  swl         $a3, 0x3($v1)
    ctx->pc = 0x3cbb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb44:
    // 0x3cbb44: 0xb8670000  swr         $a3, 0x0($v1)
    ctx->pc = 0x3cbb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb48:
    // 0x3cbb48: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x3cbb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
label_3cbb4c:
    // 0x3cbb4c: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbb50:
    // 0x3cbb50: 0x8bb101e3  lwl         $s1, 0x1E3($sp)
    ctx->pc = 0x3cbb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
label_3cbb54:
    // 0x3cbb54: 0x9bb101e0  lwr         $s1, 0x1E0($sp)
    ctx->pc = 0x3cbb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
label_3cbb58:
    // 0x3cbb58: 0xa8710007  swl         $s1, 0x7($v1)
    ctx->pc = 0x3cbb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb5c:
    // 0x3cbb5c: 0xb8710004  swr         $s1, 0x4($v1)
    ctx->pc = 0x3cbb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb60:
    // 0x3cbb60: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x3cbb60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_3cbb64:
    // 0x3cbb64: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbb64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbb68:
    // 0x3cbb68: 0x8ba701e3  lwl         $a3, 0x1E3($sp)
    ctx->pc = 0x3cbb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_3cbb6c:
    // 0x3cbb6c: 0x9ba701e0  lwr         $a3, 0x1E0($sp)
    ctx->pc = 0x3cbb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_3cbb70:
    // 0x3cbb70: 0xa867000b  swl         $a3, 0xB($v1)
    ctx->pc = 0x3cbb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb74:
    // 0x3cbb74: 0xb8670008  swr         $a3, 0x8($v1)
    ctx->pc = 0x3cbb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb78:
    // 0x3cbb78: 0x9082000f  lbu         $v0, 0xF($a0)
    ctx->pc = 0x3cbb78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 15)));
label_3cbb7c:
    // 0x3cbb7c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3cbb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3cbb80:
    // 0x3cbb80: 0xa3a201e3  sb          $v0, 0x1E3($sp)
    ctx->pc = 0x3cbb80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 483), (uint8_t)GPR_U32(ctx, 2));
label_3cbb84:
    // 0x3cbb84: 0x8bb101e3  lwl         $s1, 0x1E3($sp)
    ctx->pc = 0x3cbb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 483); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 17) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 17, (int32_t)merged); }
label_3cbb88:
    // 0x3cbb88: 0x9bb101e0  lwr         $s1, 0x1E0($sp)
    ctx->pc = 0x3cbb88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 17) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 17) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 17, merged64); }
label_3cbb8c:
    // 0x3cbb8c: 0xa871000f  swl         $s1, 0xF($v1)
    ctx->pc = 0x3cbb8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb90:
    // 0x3cbb90: 0xb871000c  swr         $s1, 0xC($v1)
    ctx->pc = 0x3cbb90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 17); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3cbb94:
    // 0x3cbb94: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
label_3cbb98:
    if (ctx->pc == 0x3CBB98u) {
        ctx->pc = 0x3CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB94u;
        // 0x3cbb98: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBB9Cu;
        goto label_3cbb9c;
    }
    ctx->pc = 0x3CBB94u;
    {
        const bool branch_taken_0x3cbb94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB94u;
        // 0x3cbb98: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb94) {
            ctx->pc = 0x3CBB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbb28;
        }
    }
    ctx->pc = 0x3CBB9Cu;
label_3cbb9c:
    // 0x3cbb9c: 0x100000be  b           . + 4 + (0xBE << 2)
label_3cbba0:
    if (ctx->pc == 0x3CBBA0u) {
        ctx->pc = 0x3CBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB9Cu;
        // 0x3cbba0: 0x8fa40218  lw          $a0, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBA4u;
        goto label_3cbba4;
    }
    ctx->pc = 0x3CBB9Cu;
    {
        const bool branch_taken_0x3cbb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBB9Cu;
        // 0x3cbba0: 0x8fa40218  lw          $a0, 0x218($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbb9c) {
            ctx->pc = 0x3CBE98u;
            goto label_3cbe98;
        }
    }
    ctx->pc = 0x3CBBA4u;
label_3cbba4:
    // 0x3cbba4: 0x112000ae  beqz        $t1, . + 4 + (0xAE << 2)
label_3cbba8:
    if (ctx->pc == 0x3CBBA8u) {
        ctx->pc = 0x3CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBA4u;
        // 0x3cbba8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBACu;
        goto label_3cbbac;
    }
    ctx->pc = 0x3CBBA4u;
    {
        const bool branch_taken_0x3cbba4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBA4u;
        // 0x3cbba8: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbba4) {
            ctx->pc = 0x3CBE60u;
            goto label_3cbe60;
        }
    }
    ctx->pc = 0x3CBBACu;
label_3cbbac:
    // 0x3cbbac: 0x8fb30220  lw          $s3, 0x220($sp)
    ctx->pc = 0x3cbbacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cbbb0:
    // 0x3cbbb0: 0x31220001  andi        $v0, $t1, 0x1
    ctx->pc = 0x3cbbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_3cbbb4:
    // 0x3cbbb4: 0x8fa30224  lw          $v1, 0x224($sp)
    ctx->pc = 0x3cbbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cbbb8:
    // 0x3cbbb8: 0x19200003  blez        $t1, . + 4 + (0x3 << 2)
label_3cbbbc:
    if (ctx->pc == 0x3CBBBCu) {
        ctx->pc = 0x3CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBB8u;
        // 0x3cbbbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBC0u;
        goto label_3cbbc0;
    }
    ctx->pc = 0x3CBBB8u;
    {
        const bool branch_taken_0x3cbbb8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3CBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBB8u;
        // 0x3cbbbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbbb8) {
            ctx->pc = 0x3CBBC8u;
            goto label_3cbbc8;
        }
    }
    ctx->pc = 0x3CBBC0u;
label_3cbbc0:
    // 0x3cbbc0: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_3cbbc4:
    if (ctx->pc == 0x3CBBC4u) {
        ctx->pc = 0x3CBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBC0u;
        // 0x3cbbc4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBBC8u;
        goto label_3cbbc8;
    }
    ctx->pc = 0x3CBBC0u;
    {
        const bool branch_taken_0x3cbbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBBC0u;
        // 0x3cbbc4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbbc0) {
            ctx->pc = 0x3CBC98u;
            goto label_3cbc98;
        }
    }
    ctx->pc = 0x3CBBC8u;
label_3cbbc8:
    // 0x3cbbc8: 0x8fa70224  lw          $a3, 0x224($sp)
    ctx->pc = 0x3cbbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cbbcc:
    // 0x3cbbcc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3cbbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbbd0:
    // 0x3cbbd0: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3cbbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbbd4:
    // 0x3cbbd4: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x3cbbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbbd8:
    // 0x3cbbd8: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3cbbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbbdc:
    // 0x3cbbdc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbbdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbbe0:
    // 0x3cbbe0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3cbbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbbe4:
    // 0x3cbbe4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbbe4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbbe8:
    // 0x3cbbe8: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3cbbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbbec:
    // 0x3cbbec: 0x8fa80220  lw          $t0, 0x220($sp)
    ctx->pc = 0x3cbbecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cbbf0:
    // 0x3cbbf0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbbf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbbf4:
    // 0x3cbbf4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbbf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbbf8:
    // 0x3cbbf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbbf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbbfc:
    // 0x3cbbfc: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x3cbbfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_3cbc00:
    // 0x3cbc00: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3cbc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbc04:
    // 0x3cbc04: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x3cbc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbc08:
    // 0x3cbc08: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3cbc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbc0c:
    // 0x3cbc0c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3cbc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbc10:
    // 0x3cbc10: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbc10u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbc14:
    // 0x3cbc14: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3cbc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbc18:
    // 0x3cbc18: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbc18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbc1c:
    // 0x3cbc1c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3cbc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbc20:
    // 0x3cbc20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbc20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbc24:
    // 0x3cbc24: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3cbc24u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3cbc28:
    // 0x3cbc28: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3cbc28u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3cbc2c:
    // 0x3cbc2c: 0xe5020004  swc1        $f2, 0x4($t0)
    ctx->pc = 0x3cbc2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_3cbc30:
    // 0x3cbc30: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x3cbc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbc34:
    // 0x3cbc34: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3cbc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbc38:
    // 0x3cbc38: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3cbc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbc3c:
    // 0x3cbc3c: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x3cbc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbc40:
    // 0x3cbc40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbc40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbc44:
    // 0x3cbc44: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3cbc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbc48:
    // 0x3cbc48: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbc48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbc4c:
    // 0x3cbc4c: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x3cbc4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbc50:
    // 0x3cbc50: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbc50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbc54:
    // 0x3cbc54: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbc54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbc58:
    // 0x3cbc58: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbc58u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbc5c:
    // 0x3cbc5c: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x3cbc5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_3cbc60:
    // 0x3cbc60: 0x8fa40220  lw          $a0, 0x220($sp)
    ctx->pc = 0x3cbc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
label_3cbc64:
    // 0x3cbc64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cbc64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc68:
    // 0x3cbc68: 0x2513000c  addiu       $s3, $t0, 0xC
    ctx->pc = 0x3cbc68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_3cbc6c:
    // 0x3cbc6c: 0xc104cf2  jal         func_4133C8
label_3cbc70:
    if (ctx->pc == 0x3CBC70u) {
        ctx->pc = 0x3CBC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC6Cu;
        // 0x3cbc70: 0x7fa90270  sq          $t1, 0x270($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC74u;
        goto label_3cbc74;
    }
    ctx->pc = 0x3CBC6Cu;
    SET_GPR_U32(ctx, 31, 0x3CBC74u);
    ctx->pc = 0x3CBC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBC6Cu;
    // 0x3cbc70: 0x7fa90270  sq          $t1, 0x270($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3CBC6Cu, 0x3CBC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBC74u;
label_3cbc74:
    // 0x3cbc74: 0x8faa0224  lw          $t2, 0x224($sp)
    ctx->pc = 0x3cbc74u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cbc78:
    // 0x3cbc78: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x3cbc78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbc7c:
    // 0x3cbc7c: 0x7ba90270  lq          $t1, 0x270($sp)
    ctx->pc = 0x3cbc7cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_3cbc80:
    // 0x3cbc80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cbc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc84:
    // 0x3cbc84: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3cbc84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cbc88:
    // 0x3cbc88: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_3cbc8c:
    if (ctx->pc == 0x3CBC8Cu) {
        ctx->pc = 0x3CBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC88u;
        // 0x3cbc8c: 0x2543000c  addiu       $v1, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBC90u;
        goto label_3cbc90;
    }
    ctx->pc = 0x3CBC88u;
    {
        const bool branch_taken_0x3cbc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBC88u;
        // 0x3cbc8c: 0x2543000c  addiu       $v1, $t2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbc88) {
            ctx->pc = 0x3CBE60u;
            goto label_3cbe60;
        }
    }
    ctx->pc = 0x3CBC90u;
label_3cbc90:
    // 0x3cbc90: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x3cbc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc94:
    // 0x3cbc94: 0x0  nop
    ctx->pc = 0x3cbc94u;
    // NOP
label_3cbc98:
    // 0x3cbc98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3cbc98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbc9c:
    // 0x3cbc9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3cbc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbca0:
    // 0x3cbca0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3cbca0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbca4:
    // 0x3cbca4: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x3cbca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbca8:
    // 0x3cbca8: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x3cbca8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcac:
    // 0x3cbcac: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3cbcacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcb0:
    // 0x3cbcb0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3cbcb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcb4:
    // 0x3cbcb4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3cbcb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cbcb8:
    // 0x3cbcb8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3cbcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbcbc:
    // 0x3cbcbc: 0xc6c40004  lwc1        $f4, 0x4($s6)
    ctx->pc = 0x3cbcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbcc0:
    // 0x3cbcc0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3cbcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbcc4:
    // 0x3cbcc4: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3cbcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbcc8:
    // 0x3cbcc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbcc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbccc:
    // 0x3cbccc: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3cbcccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbcd0:
    // 0x3cbcd0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbcd0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbcd4:
    // 0x3cbcd4: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x3cbcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbcd8:
    // 0x3cbcd8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbcd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbcdc:
    // 0x3cbcdc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbcdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbce0:
    // 0x3cbce0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbce4:
    // 0x3cbce4: 0xe6810000  swc1        $f1, 0x0($s4)
    ctx->pc = 0x3cbce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
label_3cbce8:
    // 0x3cbce8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3cbce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbcec:
    // 0x3cbcec: 0xc7c40004  lwc1        $f4, 0x4($fp)
    ctx->pc = 0x3cbcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbcf0:
    // 0x3cbcf0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3cbcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbcf4:
    // 0x3cbcf4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3cbcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbcf8:
    // 0x3cbcf8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbcf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbcfc:
    // 0x3cbcfc: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3cbcfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbd00:
    // 0x3cbd00: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbd00u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbd04:
    // 0x3cbd04: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x3cbd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd08:
    // 0x3cbd08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbd08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbd0c:
    // 0x3cbd0c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3cbd0cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3cbd10:
    // 0x3cbd10: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3cbd10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3cbd14:
    // 0x3cbd14: 0xe6a20004  swc1        $f2, 0x4($s5)
    ctx->pc = 0x3cbd14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_3cbd18:
    // 0x3cbd18: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x3cbd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd1c:
    // 0x3cbd1c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3cbd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbd20:
    // 0x3cbd20: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3cbd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbd24:
    // 0x3cbd24: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x3cbd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbd28:
    // 0x3cbd28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbd28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbd2c:
    // 0x3cbd2c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3cbd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbd30:
    // 0x3cbd30: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbd30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbd34:
    // 0x3cbd34: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3cbd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd38:
    // 0x3cbd38: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbd38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbd3c:
    // 0x3cbd3c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbd3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbd40:
    // 0x3cbd40: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbd44:
    // 0x3cbd44: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x3cbd44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_3cbd48:
    // 0x3cbd48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cbd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd4c:
    // 0x3cbd4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cbd4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cbd50:
    // 0x3cbd50: 0x7fa30250  sq          $v1, 0x250($sp)
    ctx->pc = 0x3cbd50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 3));
label_3cbd54:
    // 0x3cbd54: 0x7fa60260  sq          $a2, 0x260($sp)
    ctx->pc = 0x3cbd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 6));
label_3cbd58:
    // 0x3cbd58: 0x7fa90270  sq          $t1, 0x270($sp)
    ctx->pc = 0x3cbd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 9));
label_3cbd5c:
    // 0x3cbd5c: 0xc104cf2  jal         func_4133C8
label_3cbd60:
    if (ctx->pc == 0x3CBD60u) {
        ctx->pc = 0x3CBD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBD5Cu;
        // 0x3cbd60: 0x7fac0280  sq          $t4, 0x280($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBD64u;
        goto label_3cbd64;
    }
    ctx->pc = 0x3CBD5Cu;
    SET_GPR_U32(ctx, 31, 0x3CBD64u);
    ctx->pc = 0x3CBD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBD5Cu;
    // 0x3cbd60: 0x7fac0280  sq          $t4, 0x280($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3CBD5Cu, 0x3CBD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBD64u;
label_3cbd64:
    // 0x3cbd64: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x3cbd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_3cbd68:
    // 0x3cbd68: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x3cbd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbd6c:
    // 0x3cbd6c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3cbd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd70:
    // 0x3cbd70: 0xc6c40010  lwc1        $f4, 0x10($s6)
    ctx->pc = 0x3cbd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbd74:
    // 0x3cbd74: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x3cbd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbd78:
    // 0x3cbd78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbd78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbd7c:
    // 0x3cbd7c: 0xc6e00014  lwc1        $f0, 0x14($s7)
    ctx->pc = 0x3cbd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd80:
    // 0x3cbd80: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbd80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbd84:
    // 0x3cbd84: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x3cbd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbd88:
    // 0x3cbd88: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbd88u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbd8c:
    // 0x3cbd8c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbd8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbd90:
    // 0x3cbd90: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbd90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbd94:
    // 0x3cbd94: 0xe681000c  swc1        $f1, 0xC($s4)
    ctx->pc = 0x3cbd94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3cbd98:
    // 0x3cbd98: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3cbd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbd9c:
    // 0x3cbd9c: 0xc7c40010  lwc1        $f4, 0x10($fp)
    ctx->pc = 0x3cbd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbda0:
    // 0x3cbda0: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x3cbda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbda4:
    // 0x3cbda4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x3cbda4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbda8:
    // 0x3cbda8: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x3cbda8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_3cbdac:
    // 0x3cbdac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbdacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbdb0:
    // 0x3cbdb0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbdb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbdb4:
    // 0x3cbdb4: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x3cbdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbdb8:
    // 0x3cbdb8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x3cbdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbdbc:
    // 0x3cbdbc: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3cbdbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_3cbdc0:
    // 0x3cbdc0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbdc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbdc4:
    // 0x3cbdc4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3cbdc4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3cbdc8:
    // 0x3cbdc8: 0xe6a20010  swc1        $f2, 0x10($s5)
    ctx->pc = 0x3cbdc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
label_3cbdcc:
    // 0x3cbdcc: 0x7ba60260  lq          $a2, 0x260($sp)
    ctx->pc = 0x3cbdccu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_3cbdd0:
    // 0x3cbdd0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3cbdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbdd4:
    // 0x3cbdd4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x3cbdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3cbdd8:
    // 0x3cbdd8: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x3cbdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3cbddc:
    // 0x3cbddc: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x3cbddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3cbde0:
    // 0x3cbde0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3cbde0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3cbde4:
    // 0x3cbde4: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x3cbde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3cbde8:
    // 0x3cbde8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3cbde8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_3cbdec:
    // 0x3cbdec: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x3cbdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3cbdf0:
    // 0x3cbdf0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3cbdf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3cbdf4:
    // 0x3cbdf4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x3cbdf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_3cbdf8:
    // 0x3cbdf8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3cbdf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3cbdfc:
    // 0x3cbdfc: 0xe6410014  swc1        $f1, 0x14($s2)
    ctx->pc = 0x3cbdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_3cbe00:
    // 0x3cbe00: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3cbe00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe04:
    // 0x3cbe04: 0x7bac0280  lq          $t4, 0x280($sp)
    ctx->pc = 0x3cbe04u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_3cbe08:
    // 0x3cbe08: 0x26520018  addiu       $s2, $s2, 0x18
    ctx->pc = 0x3cbe08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_3cbe0c:
    // 0x3cbe0c: 0x7fa30250  sq          $v1, 0x250($sp)
    ctx->pc = 0x3cbe0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 3));
label_3cbe10:
    // 0x3cbe10: 0x26b50018  addiu       $s5, $s5, 0x18
    ctx->pc = 0x3cbe10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
label_3cbe14:
    // 0x3cbe14: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x3cbe14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
label_3cbe18:
    // 0x3cbe18: 0x7fa60260  sq          $a2, 0x260($sp)
    ctx->pc = 0x3cbe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 6));
label_3cbe1c:
    // 0x3cbe1c: 0x7fac0280  sq          $t4, 0x280($sp)
    ctx->pc = 0x3cbe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 12));
label_3cbe20:
    // 0x3cbe20: 0xc104cf2  jal         func_4133C8
label_3cbe24:
    if (ctx->pc == 0x3CBE24u) {
        ctx->pc = 0x3CBE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE20u;
        // 0x3cbe24: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE28u;
        goto label_3cbe28;
    }
    ctx->pc = 0x3CBE20u;
    SET_GPR_U32(ctx, 31, 0x3CBE28u);
    ctx->pc = 0x3CBE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBE20u;
    // 0x3cbe24: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4133C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4133C8u, 0x3CBE20u, 0x3CBE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBE28u;
label_3cbe28:
    // 0x3cbe28: 0x26730018  addiu       $s3, $s3, 0x18
    ctx->pc = 0x3cbe28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_3cbe2c:
    // 0x3cbe2c: 0x7ba60260  lq          $a2, 0x260($sp)
    ctx->pc = 0x3cbe2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_3cbe30:
    // 0x3cbe30: 0x26310018  addiu       $s1, $s1, 0x18
    ctx->pc = 0x3cbe30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_3cbe34:
    // 0x3cbe34: 0x7ba30250  lq          $v1, 0x250($sp)
    ctx->pc = 0x3cbe34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_3cbe38:
    // 0x3cbe38: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x3cbe38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_3cbe3c:
    // 0x3cbe3c: 0x7ba90270  lq          $t1, 0x270($sp)
    ctx->pc = 0x3cbe3cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 624)));
label_3cbe40:
    // 0x3cbe40: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x3cbe40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_3cbe44:
    // 0x3cbe44: 0x7bac0280  lq          $t4, 0x280($sp)
    ctx->pc = 0x3cbe44u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_3cbe48:
    // 0x3cbe48: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x3cbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_3cbe4c:
    // 0x3cbe4c: 0x27de0018  addiu       $fp, $fp, 0x18
    ctx->pc = 0x3cbe4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
label_3cbe50:
    // 0x3cbe50: 0x26f70018  addiu       $s7, $s7, 0x18
    ctx->pc = 0x3cbe50u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3cbe54:
    // 0x3cbe54: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x3cbe54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_3cbe58:
    // 0x3cbe58: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
label_3cbe5c:
    if (ctx->pc == 0x3CBE5Cu) {
        ctx->pc = 0x3CBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE58u;
        // 0x3cbe5c: 0x26d60018  addiu       $s6, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE60u;
        goto label_3cbe60;
    }
    ctx->pc = 0x3CBE58u;
    {
        const bool branch_taken_0x3cbe58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE58u;
        // 0x3cbe5c: 0x26d60018  addiu       $s6, $s6, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe58) {
            ctx->pc = 0x3CBCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cbcb8;
        }
    }
    ctx->pc = 0x3CBE60u;
label_3cbe60:
    // 0x3cbe60: 0x8fb10208  lw          $s1, 0x208($sp)
    ctx->pc = 0x3cbe60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cbe64:
    // 0x3cbe64: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x3cbe64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_3cbe68:
    // 0x3cbe68: 0x8fb0020c  lw          $s0, 0x20C($sp)
    ctx->pc = 0x3cbe68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3cbe6c:
    // 0x3cbe6c: 0x8e280038  lw          $t0, 0x38($s1)
    ctx->pc = 0x3cbe6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3cbe70:
    // 0x3cbe70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3cbe70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cbe74:
    // 0x3cbe74: 0x8fa40228  lw          $a0, 0x228($sp)
    ctx->pc = 0x3cbe74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
label_3cbe78:
    // 0x3cbe78: 0x8e29003c  lw          $t1, 0x3C($s1)
    ctx->pc = 0x3cbe78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_3cbe7c:
    // 0x3cbe7c: 0x8fa5021c  lw          $a1, 0x21C($sp)
    ctx->pc = 0x3cbe7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
label_3cbe80:
    // 0x3cbe80: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x3cbe80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
label_3cbe84:
    // 0x3cbe84: 0x40f809  jalr        $v0
label_3cbe88:
    if (ctx->pc == 0x3CBE88u) {
        ctx->pc = 0x3CBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE84u;
        // 0x3cbe88: 0x8faa0220  lw          $t2, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE8Cu;
        goto label_3cbe8c;
    }
    ctx->pc = 0x3CBE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CBE8Cu);
        ctx->pc = 0x3CBE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE84u;
        // 0x3cbe88: 0x8faa0220  lw          $t2, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBE84u, 0x3CBE8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBE8Cu;
label_3cbe8c:
    // 0x3cbe8c: 0x1040fa47  beqz        $v0, . + 4 + (-0x5B9 << 2)
label_3cbe90:
    if (ctx->pc == 0x3CBE90u) {
        ctx->pc = 0x3CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE8Cu;
        // 0x3cbe90: 0x8fb40208  lw          $s4, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBE94u;
        goto label_3cbe94;
    }
    ctx->pc = 0x3CBE8Cu;
    {
        const bool branch_taken_0x3cbe8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE8Cu;
        // 0x3cbe90: 0x8fb40208  lw          $s4, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbe8c) {
            ctx->pc = 0x3CA7ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca7ac;
        }
    }
    ctx->pc = 0x3CBE94u;
label_3cbe94:
    // 0x3cbe94: 0x8fa40218  lw          $a0, 0x218($sp)
    ctx->pc = 0x3cbe94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
label_3cbe98:
    // 0x3cbe98: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x3cbe98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_3cbe9c:
    // 0x3cbe9c: 0xc0f1d78  jal         func_3C75E0
label_3cbea0:
    if (ctx->pc == 0x3CBEA0u) {
        ctx->pc = 0x3CBEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBE9Cu;
        // 0x3cbea0: 0x8fa60228  lw          $a2, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEA4u;
        goto label_3cbea4;
    }
    ctx->pc = 0x3CBE9Cu;
    SET_GPR_U32(ctx, 31, 0x3CBEA4u);
    ctx->pc = 0x3CBEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CBE9Cu;
    // 0x3cbea0: 0x8fa60228  lw          $a2, 0x228($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C75E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C75E0u, 0x3CBE9Cu, 0x3CBEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CBEA4u;
label_3cbea4:
    // 0x3cbea4: 0x8fb4020c  lw          $s4, 0x20C($sp)
    ctx->pc = 0x3cbea4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3cbea8:
    // 0x3cbea8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3cbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3cbeac:
    // 0x3cbeac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3cbeb0:
    if (ctx->pc == 0x3CBEB0u) {
        ctx->pc = 0x3CBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEACu;
        // 0x3cbeb0: 0x8fa30204  lw          $v1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEB4u;
        goto label_3cbeb4;
    }
    ctx->pc = 0x3CBEACu;
    {
        const bool branch_taken_0x3cbeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEACu;
        // 0x3cbeb0: 0x8fa30204  lw          $v1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbeac) {
            ctx->pc = 0x3CBF10u;
            goto label_3cbf10;
        }
    }
    ctx->pc = 0x3CBEB4u;
label_3cbeb4:
    // 0x3cbeb4: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x3cbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_3cbeb8:
    // 0x3cbeb8: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x3cbeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3cbebc:
    // 0x3cbebc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3cbebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3cbec0:
    // 0x3cbec0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_3cbec4:
    if (ctx->pc == 0x3CBEC4u) {
        ctx->pc = 0x3CBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEC0u;
        // 0x3cbec4: 0x8fa50204  lw          $a1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBEC8u;
        goto label_3cbec8;
    }
    ctx->pc = 0x3CBEC0u;
    {
        const bool branch_taken_0x3cbec0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3CBEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBEC0u;
        // 0x3cbec4: 0x8fa50204  lw          $a1, 0x204($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbec0) {
            ctx->pc = 0x3CBED8u;
            goto label_3cbed8;
        }
    }
    ctx->pc = 0x3CBEC8u;
label_3cbec8:
    // 0x3cbec8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cbec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbecc:
    // 0x3cbecc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cbeccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cbed0:
    // 0x3cbed0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3cbed4:
    if (ctx->pc == 0x3CBED4u) {
        ctx->pc = 0x3CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED0u;
        // 0x3cbed4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBED8u;
        goto label_3cbed8;
    }
    ctx->pc = 0x3CBED0u;
    {
        const bool branch_taken_0x3cbed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBED0u;
        // 0x3cbed4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbed0) {
            ctx->pc = 0x3CBEF4u;
            goto label_3cbef4;
        }
    }
    ctx->pc = 0x3CBED8u;
label_3cbed8:
    // 0x3cbed8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3cbed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3cbedc:
    // 0x3cbedc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3cbedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3cbee0:
    // 0x3cbee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3cbee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_3cbee4:
    // 0x3cbee4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3cbee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3cbee8:
    // 0x3cbee8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3cbee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3cbeec:
    // 0x3cbeec: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3cbeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3cbef0:
    // 0x3cbef0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3cbef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3cbef4:
    // 0x3cbef4: 0x8fa6020c  lw          $a2, 0x20C($sp)
    ctx->pc = 0x3cbef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 524)));
label_3cbef8:
    // 0x3cbef8: 0xc4ac0030  lwc1        $f12, 0x30($a1)
    ctx->pc = 0x3cbef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3cbefc:
    // 0x3cbefc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3cbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3cbf00:
    // 0x3cbf00: 0x40f809  jalr        $v0
label_3cbf04:
    if (ctx->pc == 0x3CBF04u) {
        ctx->pc = 0x3CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF00u;
        // 0x3cbf04: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF08u;
        goto label_3cbf08;
    }
    ctx->pc = 0x3CBF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CBF08u);
        ctx->pc = 0x3CBF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF00u;
        // 0x3cbf04: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF00u, 0x3CBF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF08u;
label_3cbf08:
    // 0x3cbf08: 0x1040fa2b  beqz        $v0, . + 4 + (-0x5D5 << 2)
label_3cbf0c:
    if (ctx->pc == 0x3CBF0Cu) {
        ctx->pc = 0x3CBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF08u;
        // 0x3cbf0c: 0x8fa20208  lw          $v0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF10u;
        goto label_3cbf10;
    }
    ctx->pc = 0x3CBF08u;
    {
        const bool branch_taken_0x3cbf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF08u;
        // 0x3cbf0c: 0x8fa20208  lw          $v0, 0x208($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf08) {
            ctx->pc = 0x3CA7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca7b8;
        }
    }
    ctx->pc = 0x3CBF10u;
label_3cbf10:
    // 0x3cbf10: 0x8fa70208  lw          $a3, 0x208($sp)
    ctx->pc = 0x3cbf10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 520)));
label_3cbf14:
    // 0x3cbf14: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x3cbf14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_3cbf18:
    // 0x3cbf18: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x3cbf18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_3cbf1c:
    // 0x3cbf1c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3cbf1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3cbf20:
    // 0x3cbf20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3cbf20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cbf24:
    // 0x3cbf24: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x3cbf24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cbf28:
    // 0x3cbf28: 0x1440fa3b  bnez        $v0, . + 4 + (-0x5C5 << 2)
label_3cbf2c:
    if (ctx->pc == 0x3CBF2Cu) {
        ctx->pc = 0x3CBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF28u;
        // 0x3cbf2c: 0xafa80234  sw          $t0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF30u;
        goto label_3cbf30;
    }
    ctx->pc = 0x3CBF28u;
    {
        const bool branch_taken_0x3cbf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CBF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF28u;
        // 0x3cbf2c: 0xafa80234  sw          $t0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf28) {
            ctx->pc = 0x3CA818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ca818;
        }
    }
    ctx->pc = 0x3CBF30u;
label_3cbf30:
    // 0x3cbf30: 0x8faa0238  lw          $t2, 0x238($sp)
    ctx->pc = 0x3cbf30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_3cbf34:
    // 0x3cbf34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cbf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cbf38:
    // 0x3cbf38: 0x15420005  bne         $t2, $v0, . + 4 + (0x5 << 2)
label_3cbf3c:
    if (ctx->pc == 0x3CBF3Cu) {
        ctx->pc = 0x3CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF38u;
        // 0x3cbf3c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF40u;
        goto label_3cbf40;
    }
    ctx->pc = 0x3CBF38u;
    {
        const bool branch_taken_0x3cbf38 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x3CBF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF38u;
        // 0x3cbf3c: 0x3c110062  lui         $s1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cbf38) {
            ctx->pc = 0x3CBF50u;
            goto label_3cbf50;
        }
    }
    ctx->pc = 0x3CBF40u;
label_3cbf40:
    // 0x3cbf40: 0x8fb00204  lw          $s0, 0x204($sp)
    ctx->pc = 0x3cbf40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
label_3cbf44:
    // 0x3cbf44: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3cbf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_3cbf48:
    // 0x3cbf48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3cbf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3cbf4c:
    // 0x3cbf4c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x3cbf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_3cbf50:
    // 0x3cbf50: 0x2630e880  addiu       $s0, $s1, -0x1780
    ctx->pc = 0x3cbf50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961280));
label_3cbf54:
    // 0x3cbf54: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3cbf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cbf58:
    // 0x3cbf58: 0x40f809  jalr        $v0
label_3cbf5c:
    if (ctx->pc == 0x3CBF5Cu) {
        ctx->pc = 0x3CBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF58u;
        // 0x3cbf5c: 0x8fa40228  lw          $a0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF60u;
        goto label_3cbf60;
    }
    ctx->pc = 0x3CBF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CBF60u);
        ctx->pc = 0x3CBF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF58u;
        // 0x3cbf5c: 0x8fa40228  lw          $a0, 0x228($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF58u, 0x3CBF60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF60u;
label_3cbf60:
    // 0x3cbf60: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3cbf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cbf64:
    // 0x3cbf64: 0x60f809  jalr        $v1
label_3cbf68:
    if (ctx->pc == 0x3CBF68u) {
        ctx->pc = 0x3CBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF64u;
        // 0x3cbf68: 0x8fa40224  lw          $a0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF6Cu;
        goto label_3cbf6c;
    }
    ctx->pc = 0x3CBF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBF6Cu);
        ctx->pc = 0x3CBF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF64u;
        // 0x3cbf68: 0x8fa40224  lw          $a0, 0x224($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF64u, 0x3CBF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF6Cu;
label_3cbf6c:
    // 0x3cbf6c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x3cbf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cbf70:
    // 0x3cbf70: 0x40f809  jalr        $v0
label_3cbf74:
    if (ctx->pc == 0x3CBF74u) {
        ctx->pc = 0x3CBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF70u;
        // 0x3cbf74: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF78u;
        goto label_3cbf78;
    }
    ctx->pc = 0x3CBF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CBF78u);
        ctx->pc = 0x3CBF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF70u;
        // 0x3cbf74: 0x8fa40220  lw          $a0, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF70u, 0x3CBF78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF78u;
label_3cbf78:
    // 0x3cbf78: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x3cbf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_3cbf7c:
    // 0x3cbf7c: 0x60f809  jalr        $v1
label_3cbf80:
    if (ctx->pc == 0x3CBF80u) {
        ctx->pc = 0x3CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF7Cu;
        // 0x3cbf80: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBF84u;
        goto label_3cbf84;
    }
    ctx->pc = 0x3CBF7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3CBF84u);
        ctx->pc = 0x3CBF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBF7Cu;
        // 0x3cbf80: 0x8fa4021c  lw          $a0, 0x21C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 540)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBF7Cu, 0x3CBF84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CBF84u;
label_3cbf84:
    // 0x3cbf84: 0x8fa20238  lw          $v0, 0x238($sp)
    ctx->pc = 0x3cbf84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_3cbf88:
    // 0x3cbf88: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x3cbf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_3cbf8c:
    // 0x3cbf8c: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x3cbf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3cbf90:
    // 0x3cbf90: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x3cbf90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3cbf94:
    // 0x3cbf94: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x3cbf94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_3cbf98:
    // 0x3cbf98: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x3cbf98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_3cbf9c:
    // 0x3cbf9c: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x3cbf9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_3cbfa0:
    // 0x3cbfa0: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x3cbfa0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_3cbfa4:
    // 0x3cbfa4: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x3cbfa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_3cbfa8:
    // 0x3cbfa8: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x3cbfa8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_3cbfac:
    // 0x3cbfac: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x3cbfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_3cbfb0:
    // 0x3cbfb0: 0xc7ba0360  lwc1        $f26, 0x360($sp)
    ctx->pc = 0x3cbfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3cbfb4:
    // 0x3cbfb4: 0xc7b90358  lwc1        $f25, 0x358($sp)
    ctx->pc = 0x3cbfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3cbfb8:
    // 0x3cbfb8: 0xc7b80350  lwc1        $f24, 0x350($sp)
    ctx->pc = 0x3cbfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3cbfbc:
    // 0x3cbfbc: 0xc7b70348  lwc1        $f23, 0x348($sp)
    ctx->pc = 0x3cbfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3cbfc0:
    // 0x3cbfc0: 0xc7b60340  lwc1        $f22, 0x340($sp)
    ctx->pc = 0x3cbfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3cbfc4:
    // 0x3cbfc4: 0xc7b50338  lwc1        $f21, 0x338($sp)
    ctx->pc = 0x3cbfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3cbfc8:
    // 0x3cbfc8: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x3cbfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3cbfcc:
    // 0x3cbfcc: 0x3e00008  jr          $ra
label_3cbfd0:
    if (ctx->pc == 0x3CBFD0u) {
        ctx->pc = 0x3CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFCCu;
        // 0x3cbfd0: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CBFD4u;
        goto label_3cbfd4;
    }
    ctx->pc = 0x3CBFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CBFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CBFCCu;
        // 0x3cbfd0: 0x27bd0370  addiu       $sp, $sp, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CBFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CBFD4u;
label_3cbfd4:
    // 0x3cbfd4: 0x0  nop
    ctx->pc = 0x3cbfd4u;
    // NOP
    ctx->pc = 0x3cbfd8u;
}
